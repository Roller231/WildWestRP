using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using OdinSerializer;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine.Playables;
using static UnityEditor.Progress;
using UnityEngine.UI;

public class SaveAll : MonoBehaviour
{
    private GameManager gameManager;

    string filePath;


    [SerializeField, HideInInspector]
    private Data state = new Data();


    private RectTransform[] rect = new RectTransform[1536];

    public GameObject[] prefabsHouse;





    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

        filePath = Application.persistentDataPath + "/saves.sv";

        StartCoroutine(EarnGoldCoroutine());

    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(1))
        {
            SaveState(filePath);
        }
        if (Input.GetMouseButtonDown(2))
        {
            LoadState(filePath);
        }


    }

    IEnumerator EarnGoldCoroutine()
    {


        yield return new WaitForSeconds(5);


        SaveState(filePath);


        StartCoroutine(EarnGoldCoroutine());



    }


    public void SaveState(string filePath)
    {
        this.state.dataGold = gameManager.gold;

        for (int i = 0; i < gameManager.buildings.Length; i++)
        {
            if (gameManager.buildings[i] != null)
            {
                Array.Resize(ref state.gameObjects, gameManager.buildings.Length);
                Array.Resize(ref state.posY, gameManager.buildings.Length);
                Array.Resize(ref state.posX, gameManager.buildings.Length);
                Array.Resize(ref state.isOccupped, gameManager.buildings.Length);

                state.gameObjects[i] = gameManager.buildings[i].name;

                state.posX[i] = gameManager.buildings[i].tile.transform.position.x;
                state.posY[i] = gameManager.buildings[i].tile.transform.position.y;

                int l = 0;
                foreach (var tile in gameManager.tiles)
                {
                    state.isOccupped[l] = tile.isOccuped;
                    if (tile.isOccuped == true)
                    {
                        Debug.Log("true");
                    }
                }
            }
        }

        byte[] bytes = SerializationUtility.SerializeValue(this.state, DataFormat.Binary);
        File.WriteAllBytes(filePath, bytes);
        
        

    }

    public void LoadState(string filePath)
    {
        if (!File.Exists(filePath)) return; // No state to load

        byte[] bytes = File.ReadAllBytes(filePath);
        this.state = SerializationUtility.DeserializeValue<Data>(bytes, DataFormat.Binary);
        gameManager.gold = this.state.dataGold;

        for (int i = 0; i < state.gameObjects.Length; i++)
        {
            Debug.Log(state.gameObjects[i]);
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


                        int l = 0;
                        foreach (var tile in gameManager.tiles)
                        {
                            tile.isOccuped = state.isOccupped[l];
                        }
                    }
                }

            }

        }

    }




}



[Serializable]
class Data
{

    [NonSerialized, OdinSerialize]
    public int dataGold;
    public string[] gameObjects;

    public float[] posX;
    public float[] posY;

    public bool[] isOccupped;
}