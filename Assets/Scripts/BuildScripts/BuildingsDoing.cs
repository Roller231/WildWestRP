using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BuildingsDoing : MonoBehaviour
{

    public bool onePlay = false;
    public bool isMoving = false;
    bool setOne;

    private GameObject canvasSettingsNotGrind;
    private GameObject canvasSettingsYesGrind;
    private GameObject canvasInGame;

    private Building buildingThis;
    private GameManager gameManager;


    public bool grindBuild;

    private Button claimButton;
    [HideInInspector]
    public Button upgradeButton;

    public Button cancelButtonEarn;
    public Button cancelButton;


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

        cancelButton = GameObject.Find("CloseButtonHouse").GetComponent<Button>();
        cancelButtonEarn = GameObject.Find("CloseButtonEarn").GetComponent<Button>(); 

    }

    private void Update()
    {
        if (grindBuild && isOpen)
        {


            GameObject.Find("StorageText").GetComponent<Text>().text = buildingThis.storage.ToString();

        }

        
        if (!isOpen && !setOne)
        {

            onePlay = false;
            setOne = true;

            int l = 0;
            foreach (var item in gameManager.buildings)
            {
                if (item.gameObject.GetComponent<BuildingsDoing>().onePlay == true)
                {
                    Debug.Log("s");
                    foreach (Building t in gameManager.buildings)
                    {
                        t.GetComponent<BuildingsDoing>().onePlay = true;
                    }
                }
                l++;
            }
        }
        


    }




    public void PlayAnimationOnClick(Animator animator)
    {
        try
        {
            if (!onePlay && !GameManager.buildingMode && buildingThis.isBuilt)
            {


                if (!grindBuild)
                {
                    canvasSettingsNotGrind.GetComponent<OpenBuildingSettings>().Enable();
                    cancelButton.onClick.AddListener(() => BackAllBuildings());
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
                    
                    cancelButtonEarn.onClick.AddListener(() => BackAllBuildings());




                    buildingThis.open = isOpen = true;

                }



                onePlay = true;
                animator.SetBool("OnClick", onePlay);



                foreach (Building t in gameManager.buildings)
                {
                    t.GetComponent<BuildingsDoing>().onePlay = true;
                }


            }

        }
        catch (NullReferenceException)
        {

            Debug.Log("catch");
        }

    }




    public  void BackAllBuildings()
    {
        try
        {
            buildingThis.open = isOpen = false;
            foreach (Building t in gameManager.buildings)
            {
                if (buildingThis.isBuilt)
                {
                    GetComponent<Animator>().SetBool("OnClick", false);
                }

                t.GetComponent<BuildingsDoing>().onePlay = false;
                t.open = t.GetComponent<BuildingsDoing>().isOpen = false;
                
                t.GetComponent<BuildingsDoing>().upgradeButton.onClick.RemoveAllListeners();

            }
        }
        catch (NullReferenceException)
        {

            
        }

    }

    private void SetStorageOnButton()
    {
        buildingThis.storage = 0;
    }

    private void UpgradeEarnBuild()
    {
        if (buildingThis.maxLevel > buildingThis.level)
        {
            if (gameManager.oil >= this.buildingThis.upgradeCost && buildingThis.gold_OR_oil)
            {
                gameManager.oil -= this.buildingThis.upgradeCost;

                this.buildingThis.level += 1;

                this.buildingThis.income = buildingThis.upgradeGoldEarn;
                this.buildingThis.maxIncome = buildingThis.upgradeNewMaxIncome;

                buildingThis.upgradeGoldEarn *= 2;
                buildingThis.upgradeNewMaxIncome *= 3;

                this.buildingThis.upgradeCost *= 3;
                buildingThis.upgradeTime *= 2;

                BackAllBuildings();
                
                buildingThis.constructionScript.SetUpgradeBuilding(buildingThis.upgradeTime);
            }
            else if (gameManager.gold >= this.buildingThis.upgradeCost && !buildingThis.gold_OR_oil)
            {
                gameManager.gold -= this.buildingThis.upgradeCost;

                this.buildingThis.level += 1;

                this.buildingThis.income = buildingThis.upgradeGoldEarn;
                this.buildingThis.maxIncome = buildingThis.upgradeNewMaxIncome;

                buildingThis.upgradeGoldEarn *= 2;
                buildingThis.upgradeNewMaxIncome *= 3;

                this.buildingThis.upgradeCost *= 3;
                buildingThis.upgradeTime *= 3;

                BackAllBuildings();


                buildingThis.constructionScript.SetUpgradeBuilding(buildingThis.upgradeTime);
            }


        }
    }


}




     