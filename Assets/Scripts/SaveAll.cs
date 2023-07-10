using System.Collections;
using UnityEngine;
using System;
using OdinSerializer;
using System.IO;

public class SaveAll : MonoBehaviour
{

    private GameManager gameManager;

    [HideInInspector]
    public string filePath;


    [SerializeField, HideInInspector]
    public Data state = new Data();


    public GameObject[] prefabsHouse;

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
        state.dataGold = gameManager.gold;
        state.dataOil = gameManager.oil;

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

                Array.Resize(ref state.dataCountBuilding, prefabsHouse.Length);
                Array.Resize(ref state.dataLimitBuilding, prefabsHouse.Length);

                for (int j = 0; j < prefabsHouse.Length; j++)
                {
                    state.dataCountBuilding[j] = prefabsHouse[j].GetComponent<Building>().countBuilding;
                    state.dataLimitBuilding[j] = prefabsHouse[j].GetComponent<Building>().limitBuilding;
                }

                state.dataCountHouseMemory[i] = gameManager.buildings[i].memoryCountHouse;

                state.gameObjects[i] = gameManager.buildings[i].name;

                state.dataStorage[i] = gameManager.buildings[i].storage;
                state.dataIncome[i] = gameManager.buildings[i].income;
                state.dataMaxIncome[i] = gameManager.buildings[i].maxIncome;
                state.dataLevel[i] = gameManager.buildings[i].level;
                state.dataUpgradeCost[i] = gameManager.buildings[i].upgradeCost;
                state.dataTimeEarn[i] = gameManager.buildings[i].timeEarn;

                state.dataUpgradeGoldEarn[i] = gameManager.buildings[i].upgradeGoldEarn;
                state.dataUpgradeNewMaxIncome[i] = gameManager.buildings[i].upgradeNewMaxIncome;

                state.posX[i] = gameManager.tiles[state.indexTile[gameManager.buildings[i].memoryCountHouse]].transform.position.x;
                state.posY[i] = gameManager.tiles[state.indexTile[gameManager.buildings[i].memoryCountHouse]].transform.position.y;



                state.isOccupped[i] = gameManager.tiles[state.indexTile[i]].isOccuped;

                    state.dataTimeForUpgrade[i] = gameManager.buildings[i].constructionScript.timeStart;





                state.dataIsBuilt[i] = gameManager.buildings[i].isBuilt;



                UtilScripts.SetDateTime("LastSaveTime", DateTime.UtcNow);
            }
        }

        byte[] bytes = SerializationUtility.SerializeValue(this.state, DataFormat.Binary);
        File.WriteAllBytes(filePath, bytes);



    }

    public void LoadState()
    {


        DateTime lastSaveTime = UtilScripts.GetDateTime("LastSaveTime", DateTime.UtcNow);
        TimeSpan timePassed = DateTime.UtcNow - lastSaveTime;
        int secondsPassed = (int)timePassed.TotalSeconds;
        secondsPassed = Math.Clamp(secondsPassed, 0, 7 * 24 * 60 * 60);
        Debug.Log(secondsPassed);
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



[Serializable]
public class Data
{

    [NonSerialized, OdinSerialize]
    public int dataOil;
    public int dataGold;
    public int[] dataStorage;
    public int[] dataIncome;
    public int[] dataMaxIncome;
    public int[] dataLevel;
    public int[] dataUpgradeCost;
    public float[] dataTimeEarn;
    public float[] dataTimeForUpgrade;
    public bool[] dataIsBuilt;

    public int[] dataCountBuilding;
    public int[] dataCountHouseMemory;
    public int[] dataLimitBuilding;

    public int[] dataUpgradeGoldEarn;
    public int[] dataUpgradeNewMaxIncome;
    public float[] dataFillAmountBar;

    public string[] gameObjects;

    public float[] posX;
    public float[] posY;

    public bool[] isOccupped;

    public int[] indexTile;

    public string dataNick;
}