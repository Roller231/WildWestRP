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
    private GameObject canvasUpgrade;
    private GameObject canvasInGame;


    private Building buildingThis;
    [HideInInspector]
    public GameManager gameManager;
    public GameObject mainCamera;

    [HideInInspector]
    public bool canUpBar;

    public GameObject maxPanel;

    public bool grindBuild;

    private Button claimButton;
    [HideInInspector]
    public Button upgradeButton;
    [HideInInspector]
    public Button upgradeButtonDonate;

    public Button skipButton;

    public Button cancelButtonEarn;
    public Button cancelButton;
    public Button cancelButtonSkip;


    public Button doingButton;


    public bool isOpen;

    public bool openedSkipPanel = false;


    bool doSound;

    private void Start()
    {
        mainCamera = GameObject.Find("Main Camera");
        buildingThis = gameObject.GetComponent<Building>();
        if (!mainCamera.GetComponent<CameraTo3D>().do3D)
        {
            canvasInGame = GameObject.Find("ButtonsIngame");

            canvasSettingsNotGrind = GameObject.Find("BuildingSettings");
            canvasSettingsYesGrind = GameObject.Find("EarnBuildingSettings");
            canvasUpgrade = GameObject.Find("SkipUp");
            gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();


            skipButton = GameObject.Find("Skip Button").GetComponent<Button>();



            claimButton = GameObject.Find("ClaimButton").GetComponent<Button>();
            foreach (var item in Resources.FindObjectsOfTypeAll<UpgradeButton>())
            {
                if (item != null)
                {
                    upgradeButton = item.GetComponent<Button>();
                }
            }
            foreach (var item in Resources.FindObjectsOfTypeAll<UpgradeButtonDonate>())
            {
                if (item != null)
                {
                    upgradeButtonDonate = item.GetComponent<Button>();
                }
            }


            cancelButton = GameObject.Find("CloseButtonHouse").GetComponent<Button>();
            cancelButtonEarn = GameObject.Find("CloseButtonEarn").GetComponent<Button>();
            cancelButtonSkip = GameObject.Find("CloseButtonUp").GetComponent<Button>();

            doingButton = GameObject.Find("DoAny").GetComponent<Button>(); ;
        }


    }

    private void Update()
    {
        if (grindBuild && isOpen)
        {


            GameObject.Find("StorageText").GetComponent<Text>().text = buildingThis.storage.ToString();


        }

        if (buildingThis.isBuilt && openedSkipPanel && !mainCamera.GetComponent<CameraTo3D>().do3D)
        {
            canvasUpgrade.GetComponent<OpenBuildingSettings>().DownCanvas();
            BackAllBuildings();
            openedSkipPanel = false;

        }

        try
        {
            if (buildingThis.typeBuilding == "bar")
            {
                gameManager.LEVEL = buildingThis.level;

            }
        }
        catch (NullReferenceException)
        {

        }

        if (grindBuild)
        {
            if (buildingThis.maxIncome <= buildingThis.storage && buildingThis.isBuilt)
            {
                maxPanel.SetActive(true);
                doSound = true;

            }
            else if(doSound && buildingThis.isBuilt)
            {
                maxPanel.SetActive(false);
                doSound = false;

                if (buildingThis.typeBuilding == "mine")
                {
                    UtilScripts.PlaySounds("gold", 0.7f);
                }
                else
                {
                    UtilScripts.PlaySounds("oil", 0.7f);
                }
            }
        }





    }




    public void PlayAnimationOnClick(Animator animator)
    {


        try
        {
            if (!onePlay && !GameManager.buildingMode && buildingThis.isBuilt && !mainCamera.GetComponent<CameraTo3D>().do3D)
            {
                UtilScripts.PlaySounds("OnClick", 0.2f);
                canvasInGame.SetActive(false);

                if (!grindBuild)
                {
                    canvasSettingsNotGrind.GetComponent<OpenBuildingSettings>().Enable();

                    doingButton.onClick.AddListener(() => DoAnyFunc());
                    cancelButton.onClick.AddListener(() => BackAllBuildings());



                    buildingThis.open = isOpen = true;


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

                    
                    cancelButtonEarn.onClick.AddListener(() => BackAllBuildings());



                    buildingThis.open = isOpen = true;

                }

                upgradeButton.onClick.AddListener(() => UpgradeEarnBuild());
                upgradeButtonDonate.onClick.AddListener(() => UpgradeEarnBuildDonate());
                upgradeButton.GetComponent<UpgradeButton>().OnEnableFunk(buildingThis.gold_OR_oil, buildingThis, upgradeButtonDonate, gameManager.gold, gameManager.oil, gameManager.crips);


                onePlay = true;
                animator.SetBool("OnClick", onePlay);



                foreach (Building t in gameManager.buildings)
                {
                    t.GetComponent<BuildingsDoing>().onePlay = true;
                }


            }
            else if (!onePlay && !GameManager.buildingMode && !buildingThis.isBuilt && !mainCamera.GetComponent<CameraTo3D>().do3D)
            {
                UtilScripts.PlaySounds("OnClick", 0.2f);
                GameObject.Find("TextSkip").GetComponent<Text>().text = buildingThis.chipsCost.ToString();


                canvasUpgrade.GetComponent<OpenBuildingSettings>().Enable();
                buildingThis.open = isOpen = true;

                if (gameManager.crips < buildingThis.chipsCost)
                {
                    skipButton.interactable = false;
                }
                else
                {
                    skipButton.interactable = true;
                }
                skipButton.onClick.AddListener(() => SkipUpgrade());
                cancelButtonSkip.onClick.AddListener(() => BackAllBuildings());

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
        canvasInGame.SetActive(true);



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

                t.GetComponent<BuildingsDoing>().upgradeButtonDonate.onClick.RemoveAllListeners();

                t.GetComponent<BuildingsDoing>().upgradeButton.onClick.RemoveAllListeners();
                t.GetComponent<BuildingsDoing>().doingButton.onClick.RemoveAllListeners();
                t.GetComponent<BuildingsDoing>().skipButton.onClick.RemoveAllListeners();
                t.GetComponent<BuildingsDoing>().cancelButtonSkip.onClick.RemoveAllListeners();



            }
        }
        catch (NullReferenceException)
        {

            
        }

    }

    private void SetStorageOnButton()
    {
        if (buildingThis.typeBuilding == "mine")
        {
            UtilScripts.PlaySounds("gold", 0.7f);
        }
        else if (buildingThis.typeBuilding == "oil")
        {
            UtilScripts.PlaySounds("oil", 0.7f);
        }


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
                buildingThis.nextLevel += 1;

                this.buildingThis.income = buildingThis.upgradeGoldEarn;
                this.buildingThis.maxIncome = buildingThis.upgradeNewMaxIncome;

                buildingThis.upgradeGoldEarn *= 2;
                buildingThis.upgradeNewMaxIncome *= 2;

                this.buildingThis.upgradeCost *= 2;
                buildingThis.upgradeTime *= 2;

                buildingThis.chipsCost *= 2;

                buildingThis.damage *= 1.4f;


                if (buildingThis.typeBuilding == "weapon")
                {
                    for (int i = 0; i < GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns.Length; i++)
                    {
                        GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns[i].GetComponent<Enemy>().maxCount += 2;
                        GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns[i].GetComponent<Enemy>().health += 15;
                    }

                }
                else if (buildingThis.typeBuilding == "bar")
                {
                    int i = 0;

                    foreach(var build in gameManager.buildings)
                    {
                        if (buildingThis.typeBuilding != "bar")
                        {
                            gameManager.buildings[i].limitBuilding = gameManager.buildings[i].limitBuilding + 2;
                            gameManager.buildings[i].maxLevel = gameManager.buildings[i].maxLevel + 2;
                        }

                        i++;
                    }
                    int j = 0;
                    foreach (var build in gameManager.saveAll.prefabsHouse)
                    {
                        if (gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().typeBuilding != "bar")
                        {
                            gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().limitBuilding = gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().limitBuilding + 2;
                        }
                        gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().maxLevel = gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().maxLevel + 2;

                        j++;
                    }

                }
                UtilScripts.PlaySounds("button", 0.5f);

                BackAllBuildings();
                
                buildingThis.constructionScript.SetUpgradeBuilding(buildingThis.upgradeTime);
            }
            else if (gameManager.gold >= this.buildingThis.upgradeCost && !buildingThis.gold_OR_oil)
            {
                gameManager.gold -= this.buildingThis.upgradeCost;

                this.buildingThis.level += 1;
                buildingThis.nextLevel += 1;


                this.buildingThis.income = buildingThis.upgradeGoldEarn;
                this.buildingThis.maxIncome = buildingThis.upgradeNewMaxIncome;

                buildingThis.upgradeGoldEarn *= 2;
                buildingThis.upgradeNewMaxIncome *= 2;

                this.buildingThis.upgradeCost *= 2;
                buildingThis.upgradeTime *= 2;

                buildingThis.chipsCost *= 2;


                buildingThis.damage *= 1.4f;

                if (buildingThis.typeBuilding == "weapon")
                {
                    for (int i = 0; i < GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns.Length; i++)
                    {
                        GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns[i].GetComponent<Enemy>().maxCount += 2;
                        GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns[i].GetComponent<Enemy>().health += 15;

                    }

                }
                else if (buildingThis.typeBuilding == "bar")
                {
                    int i = 0;

                    foreach (var build in gameManager.buildings)
                    {
                        if (gameManager.buildings[i].typeBuilding != "bar")
                        {
                            gameManager.buildings[i].limitBuilding = gameManager.buildings[i].limitBuilding + 2;
                            gameManager.buildings[i].maxLevel = gameManager.buildings[i].maxLevel + 2;

                        }
                        i++;
                    }
                    int j = 0;
                    foreach (var build in gameManager.saveAll.prefabsHouse)
                    {
                        if (gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().typeBuilding != "bar")
                        {
                            gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().limitBuilding = gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().limitBuilding + 2;
                        }
                        gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().maxLevel = gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().maxLevel + 2;

                        j++;
                    }

                }

                UtilScripts.PlaySounds("button", 0.5f);

                BackAllBuildings();


                buildingThis.constructionScript.SetUpgradeBuilding(buildingThis.upgradeTime);
            }


        }
    }

    private void UpgradeEarnBuildDonate()
    {
        if (buildingThis.maxLevel > buildingThis.level)
        {
            if (gameManager.crips >= this.buildingThis.chipsCost)
            {
                gameManager.crips -= this.buildingThis.chipsCost;

                this.buildingThis.level += 1;
                buildingThis.nextLevel += 1;

                this.buildingThis.income = buildingThis.upgradeGoldEarn;
                this.buildingThis.maxIncome = buildingThis.upgradeNewMaxIncome;

                buildingThis.upgradeGoldEarn *= 2;
                buildingThis.upgradeNewMaxIncome *= 2;

                this.buildingThis.upgradeCost *= 2;
                buildingThis.upgradeTime *= 2;

                buildingThis.chipsCost *= 2;


                buildingThis.damage *= 1.4f;


                if (buildingThis.typeBuilding == "weapon")
                {
                    for (int i = 0; i < GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns.Length; i++)
                    {
                        GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns[i].GetComponent<Enemy>().maxCount += 2;
                        GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns[i].GetComponent<Enemy>().health += 15;

                    }

                }
                else if (buildingThis.typeBuilding == "bar")
                {
                    int i = 0;

                    foreach (var build in gameManager.buildings)
                    {
                        if (gameManager.buildings[i].typeBuilding != "bar")
                        {
                            gameManager.buildings[i].limitBuilding = gameManager.buildings[i].limitBuilding + 2;
                            gameManager.buildings[i].maxLevel = gameManager.buildings[i].maxLevel + 2;

                        }
                        i++;
                    }
                    int j = 0;
                    foreach (var build in gameManager.saveAll.prefabsHouse)
                    {
                        if (gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().typeBuilding != "bar")
                        {
                            gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().limitBuilding = gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().limitBuilding + 2;
                        }
                        gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().maxLevel = gameManager.saveAll.prefabsHouse[j].GetComponent<Building>().maxLevel + 2;

                        j++;
                    }

                }
                UtilScripts.PlaySounds("button", 0.5f);

                BackAllBuildings();

                buildingThis.constructionScript.SetUpgradeBuilding(0);
            }


        }
    }

    private void DoAnyFunc()
    {
        UtilScripts.PlaySounds("button", 0.5f);

        BackAllBuildings();
        if (buildingThis.typeBuilding == "weapon")
        {
            foreach (Transform child in GameObject.Find("rootWeapon").transform)
            {
                child.gameObject.SetActive(true);
            }
        }
        else if (buildingThis.typeBuilding == "pushka")
        {
            foreach (Transform child in GameObject.Find("rootCanon").transform)
            {
                child.gameObject.SetActive(true);
            }
            GameObject.Find("rootCanon").GetComponent<CanonUi>().OnEnableCanonUI(gameObject.GetComponent<Building>());
        }
        else if (buildingThis.typeBuilding == "bar")
        {
            foreach (Transform child in GameObject.Find("rootBar").transform)
            {
                child.gameObject.SetActive(true);
            }

            GameObject.Find("rootBar").GetComponent<CanonUi>().OnEnableCanonUI(gameObject.GetComponent<Building>());
        }

    }

    private void SkipUpgrade()
    {
        UtilScripts.PlaySounds("button", 0.5f);

        if (gameManager.crips >= buildingThis.chipsCost)
        {
            buildingThis.open = false;

            buildingThis.gameObject.GetComponentInChildren<ConstructionScript>().timeStart = 0;
            gameManager.crips-=buildingThis.chipsCost;

            canvasUpgrade.GetComponent<OpenBuildingSettings>().DownCanvas();
            BackAllBuildings();

        }


    }


}




     