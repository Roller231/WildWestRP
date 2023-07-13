using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Database;
using System.IO;
using System;
using System.Linq;
using Google.MiniJSON;
using System.Xml.Linq;

public class DB : MonoBehaviour
{
    public GameManager gameManager;
    public SaveAll saveAll;


    public bool DoLoad;

    [HideInInspector] public bool oneLoad = false, oneSave = false;



    DatabaseReference dbRef;

    [SerializeField]
    public PlayerInfo playerInfo;

    private string filePath;

    public float time = 0f;

    private void Update()
    {
        time -= Time.deltaTime;


        if (oneLoad)
        {
            StartCoroutine(LoadStateFire());
            oneLoad = false;
        }

        if (!oneLoad && playerInfo.haveName && oneSave)
        {
            StartCoroutine(SaveCoroutine());
            oneSave = false;
        }



    }
    void Start()
    {
         
        dbRef = FirebaseDatabase.DefaultInstance.RootReference;
        filePath = Application.persistentDataPath + "/gameData.json";

        if (DoLoad)
        {
            playerInfo.playerNickname = PlayerPrefs.GetString("dataNick");
            playerInfo.pass = PlayerPrefs.GetString("dataPass");

        }



    }

    IEnumerator SaveCoroutine()
    {
        yield return new WaitForSeconds(1f);
        SaveStateFire();
        StartCoroutine(SaveCoroutine());
    }

    public void SaveStateFire()
    {
        GameData data = new GameData();
        data.dataOil = gameManager.oil;
        data.dataGold = gameManager.gold;
        data.dataStorage = saveAll.state.dataStorage;
        data.dataIncome = saveAll.state.dataIncome;
        data.dataMaxIncome = saveAll.state.dataMaxIncome;
        data.dataLevel = saveAll.state.dataLevel;
        data.dataUpgradeCost = saveAll.state.dataUpgradeCost;
        data.dataTimeEarn = saveAll.state.dataTimeEarn;
        data.dataTimeForUpgrade = saveAll.state.dataTimeForUpgrade;
        data.dataIsBuilt = saveAll.state.dataIsBuilt;
        data.dataCountBuilding = saveAll.state.dataCountBuilding;
        data.dataCountHouseMemory = saveAll.state.dataCountHouseMemory;
        data.dataLimitBuilding = saveAll.state.dataLimitBuilding;
        data.dataUpgradeGoldEarn = saveAll.state.dataUpgradeGoldEarn;
        data.dataUpgradeNewMaxIncome = saveAll.state.dataUpgradeNewMaxIncome;
        data.dataFillAmountBar = saveAll.state.dataFillAmountBar;
        data.gameObjects = saveAll.state.gameObjects;
        data.posX = saveAll.state.posX;
        data.posY = saveAll.state.posY;
        data.isOccupped = saveAll.state.isOccupped;
        data.indexTile = saveAll.state.indexTile;
        data.dataNick = playerInfo.playerNickname;
        data.pass = playerInfo.pass;



        // ��������� ��������� ���������� �� gameManager

        // ������������ ������ � JSON
        string json = JsonUtility.ToJson(data);

        // ���������� JSON-����� �� ���������� ����
        File.WriteAllText(filePath, json);

        // ���������� ������ � Firebase Realtime Database
        dbRef.Child("users").Child(playerInfo.playerNickname).SetRawJsonValueAsync(json);

        Debug.Log("request DB");
    }

    IEnumerator LoadStateFire()
    {

        
        var user = dbRef.Child("users").Child(playerInfo.playerNickname).GetValueAsync();



        yield return new WaitUntil(predicate: () => user.IsCompleted);

        try
        {

            DataSnapshot snapshot = user.Result;







            string json = snapshot.GetRawJsonValue();

            // ���������� JSON-����� �� ���������� ����
            File.WriteAllText(filePath, json);


            GameData data = JsonUtility.FromJson<GameData>(json);

            gameManager.gold = int.Parse(snapshot.Child("dataGold").Value.ToString());
            gameManager.oil = int.Parse(snapshot.Child("dataOil").Value.ToString());
            playerInfo.playerNickname = data.dataNick;
            playerInfo.pass = data.pass;

            saveAll.state.gameObjects = data.gameObjects;
            saveAll.state.dataStorage = data.dataStorage;
            saveAll.state.dataIncome = data.dataIncome;
            saveAll.state.dataMaxIncome = data.dataMaxIncome;
            saveAll.state.dataLevel = data.dataLevel;
            saveAll.state.dataUpgradeCost = data.dataUpgradeCost;
            saveAll.state.dataTimeEarn = data.dataTimeEarn;
            saveAll.state.dataTimeForUpgrade = data.dataTimeForUpgrade;
            saveAll.state.dataIsBuilt = data.dataIsBuilt;
            saveAll.state.dataCountBuilding = data.dataCountBuilding;
            saveAll.state.dataCountHouseMemory = data.dataCountHouseMemory;
            saveAll.state.dataLimitBuilding = data.dataLimitBuilding;
            saveAll.state.dataUpgradeGoldEarn = data.dataUpgradeGoldEarn;
            saveAll.state.dataUpgradeNewMaxIncome = data.dataUpgradeNewMaxIncome;
            saveAll.state.dataFillAmountBar = data.dataFillAmountBar;
            saveAll.state.gameObjects = data.gameObjects;
            saveAll.state.posX = data.posX;
            saveAll.state.posY = data.posY;
            saveAll.state.isOccupped = data.isOccupped;
           saveAll.state.indexTile = data.indexTile;


            saveAll.LoadState();
        }
        catch (NullReferenceException)
        {


        }
            



    }

    public IEnumerator CheckUser(string inputLogin, string inputPass, bool agreeSignUp)
    {
        var account = dbRef.Child("users").GetValueAsync();


        yield return new WaitUntil(predicate: () => account.IsCompleted);

        var snapshotAcc = account.Result;

        bool loginTrue = false;

        foreach (var userData in snapshotAcc.Children)
        {
            string value = userData.Key.ToString();
            if (value == inputLogin)
            {
                loginTrue = true;

                if (inputPass == snapshotAcc.Child(value).Child("pass").Value.ToString())
                {

                    playerInfo.logined = true;

                    if (playerInfo.logined)
                    {
                        playerInfo.inputPanel.SetActive(false);
                        oneLoad = true;
                        oneSave = true;
                        Debug.Log("�������� ���� � �������!");
                    }
                }
                else
                {
                    playerInfo.erorText.SetActive(true);
                    playerInfo.erorText.GetComponent<Animation>().Play();
                }
            }
            else if (!loginTrue) 
            {

                playerInfo.erorText.SetActive(true);
                playerInfo.erorText.GetComponent<Animation>().Play();
            }
        }
    }





    
}

// ����� � ������� ����, ������� ����� ��������������� � JSON
[System.Serializable]
public class GameData
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

    //Player Info
    public string dataNick;
    public string pass;

    // �������� ��������� ���������� ��� ���������� � ��������
}