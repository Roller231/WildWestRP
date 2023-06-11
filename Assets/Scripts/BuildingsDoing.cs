using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BuildingsDoing : MonoBehaviour
{

    public bool onePlay = false;

    private GameObject canvasSettingsNotGrind;
    private GameObject canvasSettingsYesGrind;
    private GameObject canvasInGame;

    private Building buildingThis;
    private GameManager gameManager;

    public bool grindBuild;

    private Button claimButton;
    [HideInInspector]
    public Button upgradeButton;



    public bool isOpen;

    private void Start()
    {

        canvasInGame = GameObject.Find("ButtonShop");

        canvasSettingsNotGrind = GameObject.Find("BuildingSettings");
        canvasSettingsYesGrind = GameObject.Find("EarnBuildingSettings");
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

        buildingThis = gameObject.GetComponent<Building>();

        claimButton = GameObject.Find("ClaimButton").GetComponent<Button>();
        upgradeButton = GameObject.FindGameObjectWithTag("UpgradeEarnButton").GetComponent<Button>();

    }

    private void Update()
    {
        if (grindBuild && isOpen)
        {


            GameObject.Find("StorageText").GetComponent<Text>().text = buildingThis.storage.ToString();

        }




    }

    public void PlayAnimationOnClick(Animator animator)
    {
        if (!onePlay && !GameManager.buildingMode)
        {
            try
            {
                if (!grindBuild)
                {
                    canvasSettingsNotGrind.GetComponent<OpenBuildingSettings>().Enable();

                }
                else if (grindBuild)
                {
                    if (buildingThis.gold_OR_oil)
                    {
                        gameManager.gold += buildingThis.storage;
                    }
                    else if (!buildingThis.gold_OR_oil)
                    {
                        gameManager.oil += buildingThis.storage;
                    }
                    buildingThis.storage = 0;

                    canvasSettingsYesGrind.GetComponent<OpenBuildingSettings>().Enable();
                    claimButton.onClick.AddListener(() => SetStorageOnButton());
                    upgradeButton.onClick.AddListener(() => UpgradeEarnBuild());
 




                    isOpen = true;

                }



                onePlay = true;
                animator.SetBool("OnClick", onePlay);



                foreach (Building t in gameManager.buildings)
                {
                    t.GetComponent<BuildingsDoing>().onePlay = true;
                }
            }
            catch (NullReferenceException)
            {

                Debug.Log("catch");
            }






        }

    }

    public  void BackAllBuildings()
    {
        try
        {
            isOpen = false;
            foreach (Building t in gameManager.buildings)
            {
                t.GetComponent<Animator>().SetBool("OnClick", onePlay);
                t.GetComponent<BuildingsDoing>().onePlay = false;

            }
        }
        catch (NullReferenceException)
        {

            Debug.Log("catch");
        }

    }

    private void SetStorageOnButton()
    {
        buildingThis.storage = 0;
    }

    private void UpgradeEarnBuild()
    {
        if (gameManager.oil >= this.buildingThis.upgradeCost && buildingThis.gold_OR_oil)
        {
            gameManager.oil -= this.buildingThis.upgradeCost;
        }
        else if (gameManager.gold >= this.buildingThis.upgradeCost && !buildingThis.gold_OR_oil)
        {
            gameManager.gold -= this.buildingThis.upgradeCost;
        }

        this.buildingThis.level += 1;

        this.buildingThis.income = buildingThis.upgradeGoldEarn;
        this.buildingThis.maxIncome = buildingThis.upgradeNewMaxIncome;

        buildingThis.upgradeGoldEarn *= 2;
        buildingThis.upgradeNewMaxIncome *= 3;

        this.buildingThis.upgradeCost *= 3;

    }




}
     