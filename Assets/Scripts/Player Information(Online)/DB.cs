using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Database;
using System.IO;
using System;

public class DB : MonoBehaviour
{
    public GameManager gameManager;
    public SaveAll saveAll;

    public bool DoLoad;

    DatabaseReference dbRef;

    [SerializeField]
    public PlayerInfo playerInfo;

    private string filePath;

    void Start()
    {
        dbRef = FirebaseDatabase.DefaultInstance.RootReference;
        filePath = Application.persistentDataPath + "/gameData.json";

        if (DoLoad)
        {
            StartCoroutine(LoadStateFire());
        }

        StartCoroutine(SaveCoroutine());
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
        data.dataNick = saveAll.state.dataNick;

        // Заполните остальные переменные из gameManager

        // Сериализация данных в JSON
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

            // Загрузка JSON-файла по указанному пути
            if (File.Exists(filePath))
            {
                string json = File.ReadAllText(filePath);
                GameData data = JsonUtility.FromJson<GameData>(json);

                gameManager.oil = data.dataOil;
                gameManager.gold = data.dataGold;
                saveAll.state.indexTile = data.indexTile;


                for (int i = 0; i < data.gameObjects.Length; i++)
                {

                    if (data.gameObjects[i] != null)
                    {
                        for (int j = 0; j < saveAll.prefabsHouse.Length; j++)
                        {
                            if (data.gameObjects[i] == saveAll.prefabsHouse[j].name + "(Clone)")
                            {
                                Array.Resize(ref gameManager.buildings, data.gameObjects.Length);
                                gameManager.countHouses = data.gameObjects.Length;




                                var houseObject = Instantiate(saveAll.prefabsHouse[j], new Vector3(data.posX[i], data.posY[i] + 0.3f, 0), Quaternion.identity);
                                houseObject.transform.SetParent(GameObject.Find("CanvasForHouse").transform);
                                gameManager.buildings[i] = houseObject.GetComponent<Building>();

                                gameManager.buildings[i].memoryCountHouse = data.dataCountHouseMemory[i];

                                gameManager.buildings[i].storage = data.dataStorage[i];
                                gameManager.buildings[i].income = data.dataIncome[i];
                                gameManager.buildings[i].maxIncome = data.dataMaxIncome[i];
                                gameManager.buildings[i].level = data.dataLevel[i];
                                gameManager.buildings[i].upgradeCost = data.dataUpgradeCost[i];
                                gameManager.buildings[i].timeEarn = data.dataTimeEarn[i];

                                gameManager.buildings[i].upgradeGoldEarn = data.dataUpgradeGoldEarn[i];
                                gameManager.buildings[i].upgradeNewMaxIncome = data.dataUpgradeNewMaxIncome[i];

                                gameManager.buildings[i].constructionScript.timeStart = data.dataTimeForUpgrade[i];

                                gameManager.buildings[i].tile = gameManager.tiles[data.indexTile[i]];

                                gameManager.buildings[i].isBuilt = data.dataIsBuilt[i];

                                gameManager.tiles[data.indexTile[i]].isOccuped = data.isOccupped[i];

                                saveAll.prefabsHouse[j].GetComponent<Building>().countBuilding = data.dataCountBuilding[j];
                                saveAll.prefabsHouse[j].GetComponent<Building>().limitBuilding = data.dataLimitBuilding[j];

                            }
                        }

                    }

                }






                // Загрузите остальные переменные в gameManager
            }

            // Загрузка данных из Firebase Realtime Database
            saveAll.LoadState();
            // Загрузите остальные переменные из snapshot

        }
        catch (NullReferenceException)
        {

        }
    }
}

// Класс с данными игры, который будет сериализоваться в JSON
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

    public string dataNick;

    // Добавьте остальные переменные для сохранения и загрузки
}