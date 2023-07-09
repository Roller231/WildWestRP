using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Database;

public class DB : MonoBehaviour
{
    public GameManager gameManager;

    DatabaseReference dbRef;

    [SerializeField] public PlayerInfo playerInfo;


    void Start() 
    {
        dbRef = FirebaseDatabase.DefaultInstance.RootReference;

        StartCoroutine(LoadStateFire());

        StartCoroutine(SaveCoroutine());

        

    }



    IEnumerator SaveCoroutine()
    {


        yield return new WaitForSeconds(0.5f);


        SaveStateFire();
        

        StartCoroutine(SaveCoroutine());

    }

    public void SaveStateFire()
    {
        UserInfo user = new UserInfo(gameManager.oil,
    gameManager.gold,
    gameManager.saveAll.state.dataStorage,
    gameManager.saveAll.state.dataIncome,
 gameManager.saveAll.state.dataMaxIncome,
 gameManager.saveAll.state.dataLevel,
 gameManager.saveAll.state.dataUpgradeCost,
 gameManager.saveAll.state.dataTimeEarn,
 gameManager.saveAll.state.dataTimeForUpgrade,
 gameManager.saveAll.state.dataIsBuilt,
 gameManager.saveAll.state.dataCountBuilding,
 gameManager.saveAll.state.dataCountHouseMemory,
 gameManager.saveAll.state.dataLimitBuilding,
 gameManager.saveAll.state.dataUpgradeGoldEarn,
 gameManager.saveAll.state.dataUpgradeNewMaxIncome,
 gameManager.saveAll.state.dataFillAmountBar,
 gameManager.saveAll.state.gameObjects,
 gameManager.saveAll.state.posX,
 gameManager.saveAll.state.posY,
 gameManager.saveAll.state.isOccupped,
 gameManager.saveAll.state.indexTile,

 playerInfo.playerNickname
 );

        string json = JsonUtility.ToJson(user);
        dbRef.Child("users").Child(playerInfo.playerNickname).SetRawJsonValueAsync(json);
    }


    IEnumerator LoadStateFire()
    {
        
        var user = dbRef.Child("users").Child(gameManager.saveAll.state.dataNick).GetValueAsync();

        yield return new WaitUntil(predicate: () => user.IsCompleted);

        if(user.Exception != null)
        {
            Debug.LogError(user.Exception);
        }
        else if(user.Result == null)
        {
            Debug.Log("Null");
        }
        else
        {
            DataSnapshot snapshot = user.Result;

            gameManager.gold = int.Parse(snapshot.Child("dataGold").Value.ToString());
            gameManager.oil = int.Parse(snapshot.Child("dataOil").Value.ToString());
            Debug.Log(snapshot.Child("dataGold").Value);
        }
    }
}







//Класс с нужными значениями, которые заносятся в базу данных
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

    //Player Info
    public string dataNickname;

    public UserInfo(int dataOil, int dataGold, int[] dataStorage, int[] dataIncome,
        int[] dataMaxIncome, int[] dataLevel, int[] dataUpgradeCost, float[] dataTimeEarn, float[] dataTimeForUpgrade, 
        bool[] dataIsBuilt, int[] dataCountbuildings, int[] dataCountHouseMemory, int[] dataLimitbuildings, int[] dataUpgradeGoldEarn, 
        int[] dataUpgradeNewMaxIncome, float[] dataFillAmountBar, string[] gameObjects, float[] posX, float[] posY, bool[] isOccupped, 
        int[] indexTile, string dataNickname)
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

        //Player info
        this.dataNickname = dataNickname;
    }
}

