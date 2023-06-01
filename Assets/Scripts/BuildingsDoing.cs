using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BuildingsDoing : MonoBehaviour
{

    bool onePlay = false;

    private GameObject canvasSettingsNotGrind;
    private GameObject canvasSettingsYesGrind;
    private GameObject canvasInGame;

    private Building buildingThis;
    private GameManager gameManager;

    public bool grindBuild;
    public int upgradeGoldEarn;
    public int upgradeNewMaxIncome;

    private Button claimButton;
    private Button upgradeButton;



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
        if (grindBuild)
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
                    gameManager.gold += buildingThis.storage;
                    buildingThis.storage = 0;

                    canvasSettingsYesGrind.GetComponent<OpenBuildingSettings>().Enable();
                    claimButton.onClick.AddListener(() => SetStorageOnButton());
                    upgradeButton.onClick.AddListener(() => UpgradeEarnBuild());


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

    public void BackAllBuildings()
    {
        try
        {
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
        if (gameManager.gold >= buildingThis.upgradeCost)
        {
            gameManager.gold -= buildingThis.upgradeCost;

            buildingThis.level += 1;

            buildingThis.income = upgradeGoldEarn;
            buildingThis.maxIncome = upgradeNewMaxIncome;

            upgradeGoldEarn *= 2;
            upgradeNewMaxIncome *= 2;

            buildingThis.upgradeCost *= 3;

        }

    }




}
     