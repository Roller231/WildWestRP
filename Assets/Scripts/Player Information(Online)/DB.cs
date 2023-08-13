using System.Collections;
using UnityEngine;
using Firebase.Database;
using System.IO;
using System;
using UnityEngine.UI;
using System.Collections.Generic;

public class DB : MonoBehaviour
{
    public GameManager gameManager;
    public SaveAll saveAll;
    public CameraTo3D cameraTo3D;
    [HideInInspector]
    public bool loadIsDone;
    public bool DoLoad;
    public bool haveInternet;
    [HideInInspector]
    public bool doLoadAttack = true;

    string twoItem;

    [HideInInspector] public bool oneLoad = false, oneSave = false;



    DatabaseReference dbRef;

    [SerializeField]
    public PlayerInfo playerInfo;

    private string filePath;
    private string filePath2;

    public bool do3D;

    public string otherPlayerNick;


    public List<string> memNames;

    private void Update()
    {

        if(!DoLoad)
        {
            PlayerPrefs.DeleteAll();
        }

        if (oneLoad && !cameraTo3D.do3D && haveInternet)
        {
            StartCoroutine(LoadStateFire());
            oneLoad = false;

        }

        if (!oneLoad && playerInfo.haveName && oneSave && !cameraTo3D.do3D)
        {
            StartCoroutine(SaveCoroutine());
            oneSave = false;

        }

        if (oneLoad && cameraTo3D.do3D && haveInternet)
        {
            StartCoroutine(LoadStateFireInAttack());
            oneLoad = false;
        }
        if (!oneLoad && playerInfo.haveName && oneSave && cameraTo3D.do3D)
        {
            StartCoroutine(SaveCoroutineInAttack());
            oneSave = false;


        }



    }
    void Start()
    {
         
        dbRef = FirebaseDatabase.DefaultInstance.RootReference;
        filePath = Application.persistentDataPath + "/gameData.json";
        filePath2 = Application.persistentDataPath + "/gameDataAttack.json";


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

    IEnumerator SaveCoroutineInAttack()
    {
        yield return new WaitForSeconds(1f);
        SaveStateFireInAttack();
        StartCoroutine(SaveCoroutineInAttack());
    }

    public void SaveStateFire()
    {
        GameData data = new GameData();

        data.dataOil = gameManager.oil;
        data.dataGold = gameManager.gold;
        data.dataCrips = gameManager.crips;
        data.dataLEVEL = gameManager.LEVEL;
        data.dataCups = gameManager.cups;


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
        data.dataCountPawns = saveAll.state.dataCountPawns;
        data.dataNextLevel = saveAll.state.dataNextLevel;
        data.dataDamage = saveAll.state.dataDamage;
        data.dataMaxCountPawns = saveAll.state.dataMaxCountPawns;
        data.dataMaxLvl = saveAll.state.dataMaxLvl;
        data.dataPrefabMaxLevel = saveAll.state.dataPrefabMaxLevel;

        data.dataNick = playerInfo.playerNickname;
        data.pass = playerInfo.pass;


        string json = JsonUtility.ToJson(data);

        // Сохранение JSON-файла по указанному пути
        File.WriteAllText(filePath, json);

        // Сохранение данных в Firebase Realtime Database
        dbRef.Child("users").Child(playerInfo.playerNickname).SetRawJsonValueAsync(json);

    }

    IEnumerator LoadStateFire()
    {

        
        var user = dbRef.Child("users").Child(playerInfo.playerNickname).GetValueAsync();



        yield return new WaitUntil(predicate: () => user.IsCompleted);

        try
        {

            DataSnapshot snapshot = user.Result;







            string json = snapshot.GetRawJsonValue();

            // Сохранение JSON-файла по указанному пути
            File.WriteAllText(filePath, json);


            GameData data = JsonUtility.FromJson<GameData>(json);


            data.memNames.Add(playerInfo.playerNickname);

            gameManager.gold = int.Parse(snapshot.Child("dataGold").Value.ToString());
            gameManager.oil = int.Parse(snapshot.Child("dataOil").Value.ToString());
            gameManager.cups = int.Parse(snapshot.Child("dataCups").Value.ToString());
            gameManager.crips = int.Parse(snapshot.Child("dataCrips").Value.ToString());

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
            saveAll.state.dataCountPawns = data.dataCountPawns;
            saveAll.state.dataMaxCountPawns = data.dataMaxCountPawns;
            saveAll.state.dataNextLevel = data.dataNextLevel;
            saveAll.state.dataDamage = data.dataDamage;
            saveAll.state.dataMaxLvl = data.dataMaxLvl;
            saveAll.state.dataPrefabMaxLevel = data.dataPrefabMaxLevel;


            saveAll.LoadState();
        }
        catch (NullReferenceException)
        {


        }
            



    }

    public IEnumerator CheckUser(string inputLogin, string inputPass)
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


                        playerInfo.inputPanel.SetActive(false);
                        oneLoad = true;
                        oneSave = true;
                        Debug.Log("Успешный вход в аккаунт!");

                }
                else
                {
                    playerInfo.erorText.GetComponent<Text>().text = "Such an account does not exist, please check again.";
                    playerInfo.erorText.SetActive(true);
                    playerInfo.erorText.GetComponent<Animation>().Play();
                }
            }
            else if (!loginTrue) 
            {
                playerInfo.erorText.GetComponent<Text>().text = "Such an account does not exist, please check again.";
                playerInfo.erorText.SetActive(true);
                playerInfo.erorText.GetComponent<Animation>().Play();
            }
        }
    }


    public IEnumerator CheckUserRegistered(string inputLogin, string inputPass)
    {
        var account = dbRef.Child("users").GetValueAsync();


        yield return new WaitUntil(predicate: () => account.IsCompleted);

        var snapshotAcc = account.Result;

        bool loginTrue = true;

        foreach (var userData in snapshotAcc.Children)
        {
            string value = userData.Key.ToString();
            Debug.Log($"{value}");
            if (value == inputLogin)
            {
                playerInfo.erorText.GetComponent<Text>().text = "Account with this username already exists.";
                loginTrue = false;
                playerInfo.erorText.SetActive(true);
                playerInfo.erorText.GetComponent<Animation>().Play();

                

                if (inputPass == snapshotAcc.Child(value).Child("pass").Value.ToString())
                {

                    playerInfo.logined = true;


                        playerInfo.erorText.SetActive(true);
                        playerInfo.erorText.GetComponent<Animation>().Play();

                        playerInfo.erorText.GetComponent<Text>().text = "Account with this username already exists.";

                }


            }

            else
            {
                bool haveSpace = false;

                foreach (var nameSpace in playerInfo.inputField.text)
                {
                    if (nameSpace.ToString() == " ")
                    {
                        haveSpace = true;
                    }
                }
                foreach (var nameSpace in playerInfo.inputFieldPASS.text)
                {
                    if (nameSpace.ToString() == " ")
                    {
                        haveSpace = true;
                    }
                }



                if (inputPass.Length > 15 || inputLogin.Length > 15)
                {
                    loginTrue = false;
                    playerInfo.erorText.GetComponent<Text>().text = "Please enter password and login less than 15 characters";
                    playerInfo.erorText.SetActive(true);
                    playerInfo.erorText.GetComponent<Animation>().Play();
                }
                else if (haveSpace)
                {
                    loginTrue = false;
                    playerInfo.erorText.GetComponent<Text>().text = "Please enter password and login without spaces!";
                    playerInfo.erorText.SetActive(true);
                    playerInfo.erorText.GetComponent<Animation>().Play();
                }
                else if (playerInfo.inputField.text == "" || playerInfo.inputFieldPASS.text == "")
                {
                    loginTrue = false;
                    playerInfo.erorText.GetComponent<Text>().text = "Please fill in all fields!";
                    playerInfo.erorText.SetActive(true);
                    playerInfo.erorText.GetComponent<Animation>().Play();
                }



            }





        }
        if (loginTrue)
        {

            playerInfo.inputPanel.SetActive(false);
            oneLoad = true;
            oneSave = true;
            Debug.Log("Успешный рег!");

        }



    }

    public void SaveStateFireInAttack()
    {
        GameData data = new GameData();
        data.dataOil = gameManager.oil;
        data.dataGold = gameManager.gold;
        data.dataCups = gameManager.cups;
        
        data.dataCountPawns = saveAll.state.dataCountPawns;

        




        // Сохранение данных в Firebase Realtime Database
        dbRef.Child("users").Child(playerInfo.playerNickname).Child("dataOil").SetValueAsync(gameManager.oil);
        dbRef.Child("users").Child(playerInfo.playerNickname).Child("dataGold").SetValueAsync(gameManager.gold);
        dbRef.Child("users").Child(playerInfo.playerNickname).Child("dataCups").SetValueAsync(gameManager.cups);

        dbRef.Child("users").Child(playerInfo.playerNickname).Child("dataCountPawns").SetValueAsync(saveAll.state.dataCountPawns);
        dbRef.Child("users").Child(playerInfo.playerNickname).Child("memNames").SetValueAsync(saveAll.state.memNames);





    }


    IEnumerator LoadStateFireInAttack()
    {
        string arrayStringLoad = PlayerPrefs.GetString("memNames"); // Retrieve the saved string from PlayerPrefs
        string[] loadArray = arrayStringLoad.Split(','); // Split the string using the delimiter to get the array
        memNames = new List<string>(loadArray);


        var allUsers = dbRef.Child("users").GetValueAsync();

        var user = dbRef.Child("users").Child(playerInfo.playerNickname).GetValueAsync();



        yield return new WaitUntil(predicate: () => user.IsCompleted);
        yield return new WaitUntil(predicate: () => allUsers.IsCompleted);



            DataSnapshot snapshot = user.Result;
            DataSnapshot snaphotAllUsers = allUsers.Result;


        string json = snapshot.GetRawJsonValue();

        // Сохранение JSON-файла по указанному пути
        File.WriteAllText(filePath, json);


        GameData data = JsonUtility.FromJson<GameData>(json);

        bool hadName = false;

        foreach (var item in snaphotAllUsers.Children)
        {


            foreach (var item2 in memNames)
            {

                if (item.Key.ToString() == item2)
                {
                    twoItem = item2;
                    hadName = true;
                    Debug.Log(item2);
                }


            }

            if (item.Key.ToString() != twoItem)
            {
                hadName = false;
            }

            if (int.Parse(item.Child("dataLEVEL").Value.ToString()) == int.Parse(snapshot.Child("dataLEVEL").Value.ToString()) && item.Key.ToString() != playerInfo.playerNickname && !hadName)
            {

                doLoadAttack = true;

                    otherPlayerNick = item.Key.ToString();

                memNames.Add(otherPlayerNick);
                string[] myArray = memNames.ToArray(); // Convert List to array
                string arrayString = string.Join(",", myArray); // Convert array to string with delimiter
                PlayerPrefs.SetString("memNames", arrayString);

                break;
            }


        }


        if (doLoadAttack)
        {

            string jsonOtherPlayer = snaphotAllUsers.Child(otherPlayerNick).GetRawJsonValue();

            File.WriteAllText(filePath2, jsonOtherPlayer);

            GameData data2 = JsonUtility.FromJson<GameData>(jsonOtherPlayer);


            gameManager.gold = int.Parse(snapshot.Child("dataGold").Value.ToString());
                gameManager.oil = int.Parse(snapshot.Child("dataOil").Value.ToString());
            gameManager.cups = int.Parse(snapshot.Child("dataCups").Value.ToString());
                playerInfo.playerNickname = data.dataNick;
                playerInfo.pass = data.pass;

                GameObject.Find("Nicks").GetComponent<Text>().text = data2.dataNick + "'s";

                saveAll.state.gameObjects = data2.gameObjects;
                saveAll.state.dataStorage = data2.dataStorage;
                saveAll.state.dataIncome = data2.dataIncome;
                saveAll.state.dataMaxIncome = data2.dataMaxIncome;
                saveAll.state.dataLevel = data2.dataLevel;
                saveAll.state.dataUpgradeCost = data2.dataUpgradeCost;
                saveAll.state.dataTimeEarn = data2.dataTimeEarn;
                saveAll.state.dataTimeForUpgrade = data2.dataTimeForUpgrade;
                saveAll.state.dataIsBuilt = data2.dataIsBuilt;
                saveAll.state.dataCountBuilding = data2.dataCountBuilding;
                saveAll.state.dataCountHouseMemory = data2.dataCountHouseMemory;
                saveAll.state.dataLimitBuilding = data2.dataLimitBuilding;
                saveAll.state.dataUpgradeGoldEarn = data2.dataUpgradeGoldEarn;
                saveAll.state.dataUpgradeNewMaxIncome = data2.dataUpgradeNewMaxIncome;
                saveAll.state.dataFillAmountBar = data2.dataFillAmountBar;
                saveAll.state.gameObjects = data2.gameObjects;
                saveAll.state.posX = data2.posX;
                saveAll.state.posY = data2.posY;
                saveAll.state.isOccupped = data2.isOccupped;
                saveAll.state.indexTile = data2.indexTile;
            saveAll.state.dataNextLevel = data.dataNextLevel;
            saveAll.state.dataMaxLvl = data2.dataMaxLvl;
            saveAll.state.dataPrefabMaxLevel = data2.dataPrefabMaxLevel;


            saveAll.state.dataDamage = data2.dataDamage;
            gameManager.LEVEL = data.dataLEVEL;



            saveAll.state.dataCountPawns = data.dataCountPawns;
            saveAll.state.dataMaxCountPawns = data.dataMaxCountPawns;

            loadIsDone = true;

                saveAll.LoadState();

        }
            else
            {
            memNames.Clear();
            string[] myArray = memNames.ToArray(); // Convert List to array
            string arrayString = string.Join(",", myArray); // Convert array to string with delimiter
            PlayerPrefs.SetString("memNames", arrayString);
            UtilScripts.OpenSceneVoid(0);
            }







    }



}

// Класс с данными игры, который будет сериализоваться в JSON
[System.Serializable]
public class GameData
{
    public int dataOil;
    public int dataGold;
    public int dataCrips;
    public int dataLEVEL;
    public int dataCups;

    public int[] dataStorage;
    public int[] dataIncome;
    public int[] dataMaxIncome;
    public int[] dataLevel;
    public int[] dataMaxLvl;
    public int[] dataPrefabMaxLevel;


    public int[] dataUpgradeCost;
    public int[] dataNextLevel;
    public float[] dataDamage;


    public float[] dataTimeEarn;
    public float[] dataTimeForUpgrade;
    public bool[] dataIsBuilt;

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

    //Player Info
    public string dataNick;
    public string pass;


    public List<string> memNames;



}