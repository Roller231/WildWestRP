using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Database;

public class DB : MonoBehaviour
{
    public GameManager gameManager;

    DatabaseReference dbRef;
    void Start()
    {
        dbRef = FirebaseDatabase.DefaultInstance.RootReference;

        StartCoroutine(SaveCoroutine());

    }



    IEnumerator SaveCoroutine()
    {


        yield return new WaitForSeconds(1.5f);


        SaveState();

        StartCoroutine(SaveCoroutine());



    }

    public void SaveState()
    {
        //       UserInfo user = new UserInfo(gameManager.saveAll.state.dataOil,
        //gameManager.saveAll.state.dataGold,
        //gameManager.saveAll.state.dataStorage,
        //gameManager.saveAll.state.dataIncome,
        //gameManager.saveAll.state.dataMaxIncome,
        //gameManager.saveAll.state.dataLevel,
        //gameManager.saveAll.state.dataUpgradeCost,
        //gameManager.saveAll.state.dataTimeEarn,
        //gameManager.saveAll.state.dataTimeForUpgrade,
        //gameManager.saveAll.state.dataIsBuilt,
        //gameManager.saveAll.state.dataCountBuilding,
        //gameManager.saveAll.state.dataCountHouseMemory,
        //gameManager.saveAll.state.dataLimitBuilding,
        //gameManager.saveAll.state.dataUpgradeGoldEarn,
        //gameManager.saveAll.state.dataUpgradeNewMaxIncome,
        //gameManager.saveAll.state.dataFillAmountBar,
        //gameManager.saveAll.state.gameObjects,
        //gameManager.saveAll.state.posX,
        //gameManager.saveAll.state.posY,
        //gameManager.saveAll.state.isOccupped,
        //gameManager.saveAll.state.indexTile);
        testData user = new testData("niga");
        string json = JsonUtility.ToJson(user);
        dbRef.Child("users").Child("name").SetRawJsonValueAsync(json);
    }
}

public class UserInfo
{
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

    public int[] dataCountbuildings;
    public int[] dataCountHouseMemory;
    public int[] dataLimitbuildings;

    public int[] dataUpgradeGoldEarn;
    public int[] dataUpgradeNewMaxIncome;
    public float[] dataFillAmountBar;

    public string[] gameObjects;

    public float[] posX;
    public float[] posY;

    public bool[] isOccupped;

    public int[] indexTile;

    public UserInfo(int dataOil, int dataGold, int[] dataStorage, int[] dataIncome, int[] dataMaxIncome, int[] dataLevel, int[] dataUpgradeCost, float[] dataTimeEarn, float[] dataTimeForUpgrade, bool[] dataIsBuilt, int[] dataCountbuildings, int[] dataCountHouseMemory, int[] dataLimitbuildings, int[] dataUpgradeGoldEarn, int[] dataUpgradeNewMaxIncome, float[] dataFillAmountBar, string[] gameObjects, float[] posX, float[] posY, bool[] isOccupped, int[] indexTile)
    {
        this.dataOil = dataOil;
        this.dataGold = dataGold;
        this.dataStorage = dataStorage;
        this.dataIncome = dataIncome;
        this.dataMaxIncome = dataMaxIncome;
        this.dataLevel = dataLevel;
        this.dataUpgradeCost = dataUpgradeCost;
        this.dataTimeEarn = dataTimeEarn;
        this.dataTimeForUpgrade = dataTimeForUpgrade;
        this.dataIsBuilt = dataIsBuilt;
        this.dataCountbuildings = dataCountbuildings;
        this.dataCountHouseMemory = dataCountHouseMemory;
        this.dataLimitbuildings = dataLimitbuildings;
        this.dataUpgradeGoldEarn = dataUpgradeGoldEarn;
        this.dataUpgradeNewMaxIncome = dataUpgradeNewMaxIncome;
        this.dataFillAmountBar = dataFillAmountBar;
        this.gameObjects = gameObjects;
        this.posX = posX;
        this.posY = posY;
        this.isOccupped = isOccupped;
        this.indexTile = indexTile;
    }
}

public class testData
{
    string name;
    public testData(string name)
    {
        this.name = name;
    }
}
