using System.Collections;
using UnityEngine;
using System;
using OdinSerializer;
using System.IO;
using System.Collections.Generic;

public class SaveAll : MonoBehaviour
{

    private GameManager gameManager;

    [HideInInspector]
    public string filePath;


    [SerializeField, HideInInspector]
    public Data state = new Data();


    public GameObject[] prefabsHouse;
    public GameObject[] prefabsPawns;
    public GameObject[] prefabsPawnsCards;

    public bool DoLoad;





    private void Start()
    {
        Application.targetFrameRate = 60;

        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

        filePath = Application.persistentDataPath + "/WildWest.sv";




        StartCoroutine(SaveCoroutine());

    }



    IEnumerator SaveCoroutine()
    {


        yield return new WaitForSeconds(1);


        SaveState(filePath);

        StartCoroutine(SaveCoroutine());



    }


    public void SaveState(string filePath)
    {

        if (GameObject.Find("Main Camera").GetComponent<CameraTo3D>().do3D)
        {

        }

        for (int l = 0; l < prefabsPawns.Length; l++)
        {
            Array.Resize(ref state.dataCountPawns, prefabsPawns.Length);
            Array.Resize(ref state.dataMaxCountPawns, prefabsPawns.Length);





            state.dataCountPawns[l] = prefabsPawns[l].GetComponent<Enemy>().countInArmy;
            state.dataMaxCountPawns[l] = prefabsPawns[l].GetComponent<Enemy>().maxCount;


        }

        for (int i = 0; i < gameManager.buildings.Length; i++)
        {
            if (gameManager.buildings[i] != null)
            {
                Array.Resize(ref state.gameObjects, gameManager.buildings.Length);
                Array.Resize(ref state.posY, gameManager.buildings.Length);
                Array.Resize(ref state.posX, gameManager.buildings.Length);
                Array.Resize(ref state.isOccupped, gameManager.buildings.Length);
                Array.Resize(ref state.indexTile, gameManager.tiles.Length);
                Array.Resize(ref state.dataStorage, gameManager.buildings.Length);
                Array.Resize(ref state.dataIncome, gameManager.buildings.Length);
                Array.Resize(ref state.dataMaxIncome, gameManager.buildings.Length);
                Array.Resize(ref state.dataLevel, gameManager.buildings.Length);
                Array.Resize(ref state.dataUpgradeCost, gameManager.buildings.Length);
                Array.Resize(ref state.dataTimeEarn, gameManager.buildings.Length);
                Array.Resize(ref state.dataUpgradeGoldEarn, gameManager.buildings.Length);
                Array.Resize(ref state.dataUpgradeNewMaxIncome, gameManager.buildings.Length);
                Array.Resize(ref state.dataTimeForUpgrade, gameManager.buildings.Length);
                Array.Resize(ref state.dataIsBuilt, gameManager.buildings.Length);
                Array.Resize(ref state.dataFillAmountBar, gameManager.buildings.Length);
                Array.Resize(ref state.dataCountHouseMemory, gameManager.buildings.Length);
                Array.Resize(ref state.dataNextLevel, gameManager.buildings.Length);
                Array.Resize(ref state.dataDamage, gameManager.buildings.Length);
                Array.Resize(ref state.dataMaxLvl, gameManager.buildings.Length);




                Array.Resize(ref state.dataCountBuilding, prefabsHouse.Length);
                Array.Resize(ref state.dataLimitBuilding, prefabsHouse.Length);
                Array.Resize(ref state.dataPrefabMaxLevel, prefabsHouse.Length);


                for (int j = 0; j < prefabsHouse.Length; j++)
                {
                    state.dataCountBuilding[j] = prefabsHouse[j].GetComponent<Building>().countBuilding;
                    state.dataLimitBuilding[j] = prefabsHouse[j].GetComponent<Building>().limitBuilding;

                    state.dataPrefabMaxLevel[j] = prefabsHouse[j].GetComponent<Building>().maxLevel;
                }



                state.dataCountHouseMemory[i] = gameManager.buildings[i].memoryCountHouse;

                state.gameObjects[i] = gameManager.buildings[i].name;

                state.dataStorage[i] = gameManager.buildings[i].storage;
                state.dataIncome[i] = gameManager.buildings[i].income;
                state.dataMaxIncome[i] = gameManager.buildings[i].maxIncome;
                state.dataLevel[i] = gameManager.buildings[i].level;
                state.dataUpgradeCost[i] = gameManager.buildings[i].upgradeCost;
                state.dataTimeEarn[i] = gameManager.buildings[i].timeEarn;
                state.dataDamage[i] = gameManager.buildings[i].damage;

                state.dataUpgradeGoldEarn[i] = gameManager.buildings[i].upgradeGoldEarn;
                state.dataUpgradeNewMaxIncome[i] = gameManager.buildings[i].upgradeNewMaxIncome;

                state.posX[i] = gameManager.tiles[state.indexTile[gameManager.buildings[i].memoryCountHouse]].transform.position.x;
                state.posY[i] = gameManager.tiles[state.indexTile[gameManager.buildings[i].memoryCountHouse]].transform.position.y;

                state.dataMaxLvl[i] = gameManager.buildings[i].maxLevel;

                state.isOccupped[i] = gameManager.tiles[state.indexTile[i]].isOccuped;

                if (gameManager.buildings[i] != null)
                    state.dataTimeForUpgrade[i] = gameManager.buildings[i].constructionScript.timeStart;


                state.dataNextLevel[i] = gameManager.buildings[i].nextLevel;


                state.dataIsBuilt[i] = gameManager.buildings[i].isBuilt;



                UtilScripts.SetDateTime("LastSaveTime", DateTime.UtcNow);
            }
        }






    }

    public void LoadState()
    {

            for (int l = 0; l < prefabsPawns.Length; l++)
            {
                Array.Resize(ref state.dataCountPawns, prefabsPawns.Length);
            Array.Resize(ref state.dataMaxCountPawns, prefabsPawns.Length);



            prefabsPawns[l].GetComponent<Enemy>().countInArmy = state.dataCountPawns[l];
            prefabsPawns[l].GetComponent<Enemy>().maxCount = state.dataMaxCountPawns[l];

                if (state.dataCountPawns[l] != 0 && !gameObject.GetComponent<CameraTo3D>().do3D)
                    prefabsPawnsCards[l].GetComponent<trainButton>().trainPawnsOnLoad();
                else if(gameObject.GetComponent<CameraTo3D>().do3D)
                    prefabsPawnsCards[l].GetComponent<trainButton>().trainPawnsOnLoadInAttack();


        }

        for (int i = 0; i < state.gameObjects.Length; i++)
            {

                if (state.gameObjects[i] != null)
                {
                    for (int j = 0; j < prefabsHouse.Length; j++)
                    {
                        if (state.gameObjects[i] == prefabsHouse[j].name + "(Clone)")
                        {


                            Array.Resize(ref gameManager.buildings, state.gameObjects.Length);
                            gameManager.countHouses = state.gameObjects.Length;




                            var houseObject = Instantiate(prefabsHouse[j], new Vector3(state.posX[i], state.posY[i] + 0.3f, 0), Quaternion.identity);
                            houseObject.transform.SetParent(GameObject.Find("CanvasForHouse").transform);
                            gameManager.buildings[i] = houseObject.GetComponent<Building>();

                            gameManager.buildings[i].memoryCountHouse = state.dataCountHouseMemory[i];

                            gameManager.buildings[i].storage = state.dataStorage[i];
                            gameManager.buildings[i].income = state.dataIncome[i];
                            gameManager.buildings[i].maxIncome = state.dataMaxIncome[i];
                            gameManager.buildings[i].level = state.dataLevel[i];
                            gameManager.buildings[i].upgradeCost = state.dataUpgradeCost[i];
                            gameManager.buildings[i].timeEarn = state.dataTimeEarn[i];
                        gameManager.buildings[i].damage = state.dataDamage[i];
                        gameManager.buildings[i].maxLevel = state.dataMaxLvl[i];

                            gameManager.buildings[i].upgradeGoldEarn = state.dataUpgradeGoldEarn[i];
                            gameManager.buildings[i].upgradeNewMaxIncome = state.dataUpgradeNewMaxIncome[i];

                            gameManager.buildings[i].constructionScript.timeStart = state.dataTimeForUpgrade[i];

                            gameManager.buildings[i].tile = gameManager.tiles[state.indexTile[i]];

                            gameManager.buildings[i].isBuilt = state.dataIsBuilt[i];

                            gameManager.tiles[state.indexTile[i]].isOccuped = state.isOccupped[i];

                            

                        if (!gameObject.GetComponent<CameraTo3D>().do3D)
                        {
                            gameManager.buildings[i].nextLevel = state.dataNextLevel[i];

                        }

                        prefabsHouse[j].GetComponent<Building>().countBuilding = state.dataCountBuilding[j];
                            prefabsHouse[j].GetComponent<Building>().limitBuilding = state.dataLimitBuilding[j];
                        prefabsHouse[j].GetComponent<Building>().maxLevel = state.dataPrefabMaxLevel[j];



                        }
                    }

                }

            }


        if (!gameObject.GetComponent<DB>().cameraTo3D.do3D)
        {
            DateTime lastSaveTime = UtilScripts.GetDateTime("LastSaveTime", DateTime.UtcNow);
            TimeSpan timePassed = DateTime.UtcNow - lastSaveTime;
            int secondsPassed = (int)timePassed.TotalSeconds;
            secondsPassed = Math.Clamp(secondsPassed, 0, 7 * 24 * 60 * 60);
            foreach (var count in gameManager.buildings)
            {
                if (secondsPassed / 2 * count.income > count.maxIncome)
                {
                    count.storage = count.maxIncome;
                }
                else
                {
                    count.storage += (secondsPassed / 2 * count.income);
                    if (!count.isBuilt)
                    {
                        count.constructionScript.timeStart -= secondsPassed;
                        count.storage = 0;
                    }
                }
            }
        }

        }












    }







[Serializable]
public class Data
{

    [NonSerialized, OdinSerialize]
    public int dataOil;
    public int dataGold;
    public int dataLEVEL;
    public int dataCups;

    public int[] dataStorage;
    public int[] dataIncome;
    public int[] dataMaxIncome;
    public int[] dataLevel;
    public int[] dataMaxLvl;
    public int[] dataPrefabMaxLevel;

    public int[] dataNextLevel;
    public int[] dataUpgradeCost;
    public float[] dataTimeEarn;
    public float[] dataTimeForUpgrade;
    public bool[] dataIsBuilt;
    public float[] dataDamage;


    public int[] dataCountBuilding;
    public int[] dataCountHouseMemory;
    public int[] dataLimitBuilding;

    public int[] dataCountPawns;
    public int[] dataMaxCountPawns;


    public int[] dataUpgradeGoldEarn;
    public int[] dataUpgradeNewMaxIncome;
    public float[] dataFillAmountBar;

    public string[] gameObjects;

    public float[] posX;
    public float[] posY;

    public bool[] isOccupped;

    public int[] indexTile;

    public string dataNick;

    public string memNames;



}