using System.Collections;
using UnityEngine;
using System;
using OdinSerializer;
using System.IO;

public class SaveAll : MonoBehaviour
{
    private GameManager gameManager;

    string filePath;


    [SerializeField, HideInInspector]
    public Data state = new Data();


    public GameObject[] prefabsHouse;





    private void Start()
    {


        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

        filePath = Application.persistentDataPath  + "/save.sav";



        LoadState(filePath);
        StartCoroutine(EarnGoldCoroutine());

    }



    IEnumerator EarnGoldCoroutine()
    {


        yield return new WaitForSeconds(1);


        SaveState(filePath);

        StartCoroutine(EarnGoldCoroutine());



    }


    public void SaveState(string filePath)
    {
        state.dataGold = gameManager.gold;


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

                state.gameObjects[i] = gameManager.buildings[i].name;

                state.dataStorage[i] = gameManager.buildings[i].storage;
                state.dataIncome[i] = gameManager.buildings[i].income;
                state.dataMaxIncome[i] = gameManager.buildings[i].maxIncome;
                state.dataLevel[i] = gameManager.buildings[i].level;
                state.dataUpgradeCost[i] = gameManager.buildings[i].upgradeCost;
                state.dataTimeEarn[i] = gameManager.buildings[i].timeEarn;

                state.dataUpgradeGoldEarn[i] = gameManager.buildings[i].upgradeGoldEarn;
                state.dataUpgradeNewMaxIncome[i] = gameManager.buildings[i].upgradeNewMaxIncome;

                state.posX[i] = gameManager.tiles[state.indexTile[i]].transform.position.x; 
                state.posY[i] = gameManager.tiles[state.indexTile[i]].transform.position.y;

                state.isOccupped[i] = gameManager.tiles[state.indexTile[i]].isOccuped;
            

            }
        }

        byte[] bytes = SerializationUtility.SerializeValue(this.state, DataFormat.Binary);
        File.WriteAllBytes(filePath, bytes);
        
        

    }

    public void LoadState(string filePath)
    {
        try
        {
            if (!File.Exists(filePath)) return; // No state to load

            byte[] bytes = File.ReadAllBytes(filePath);
            this.state = SerializationUtility.DeserializeValue<Data>(bytes, DataFormat.Binary);
            gameManager.gold = this.state.dataGold;

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




                            var houseObject = Instantiate(prefabsHouse[j], new Vector3(state.posX[i], state.posY[i], 0), Quaternion.identity);
                            houseObject.transform.SetParent(GameObject.Find("CanvasForHouse").transform);
                            gameManager.buildings[i] = houseObject.GetComponent<Building>();

                            gameManager.buildings[i].storage = state.dataStorage[i];
                            gameManager.buildings[i].income = state.dataIncome[i];
                            gameManager.buildings[i].maxIncome = state.dataMaxIncome[i];
                            gameManager.buildings[i].level = state.dataLevel[i];
                            gameManager.buildings[i].upgradeCost = state.dataUpgradeCost[i];
                            gameManager.buildings[i].timeEarn = state.dataTimeEarn[i];

                            gameManager.buildings[i].upgradeGoldEarn = state.dataUpgradeGoldEarn[i];
                            gameManager.buildings[i].upgradeNewMaxIncome = state.dataUpgradeNewMaxIncome[i];

                            gameManager.tiles[state.indexTile[i]].isOccuped = state.isOccupped[i];

                        }
                    }

                }

            }
        }
        catch (NullReferenceException)
        {

            throw;
        }


    }




}



[Serializable]
public class Data
{

    [NonSerialized, OdinSerialize]
    public int dataGold;
    public int[] dataStorage;
    public int[] dataIncome;
    public int[] dataMaxIncome;
    public int[] dataLevel;
    public int[] dataUpgradeCost;
    public float[] dataTimeEarn;

    public int[] dataUpgradeGoldEarn;
    public int[] dataUpgradeNewMaxIncome;

    public string[] gameObjects;

    public float[] posX;
    public float[] posY;

    public bool[] isOccupped;

    public int[] indexTile;
}