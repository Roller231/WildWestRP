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

    public GameObject prefab;
    public Transform trans;





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

                Array.Resize(ref this.state.gameObjects, gameManager.buildings.Length);

                state.posX.Add(gameManager.buildings[i].transform.position.x);
                state.posY.Add(gameManager.buildings[i].transform.position.y);

                Debug.Log(state.posY[0]);
                this.state.gameObjects[i] = gameManager.buildings[i].gameObject;

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

        Debug.Log(this.state.posY[0]);

        for (int i = 0; i < state.gameObjects.Length; i++)
        {
            if (state.gameObjects[i] != null)
            {

                Array.Resize(ref gameManager.buildings, state.gameObjects.Length);
                var houseObject = Instantiate(state.gameObjects[i].GetComponent<Building>(), new Vector3(state.posX[i], state.posY[i], 0), Quaternion.identity);

                houseObject.transform.parent = GameObject.Find("CanvasForHouse").transform;

                gameManager.buildings[i] = houseObject;
                Debug.Log(this.state.gameObjects[i]);

            }


        }

    }




}



[Serializable]
class Data
{

    [NonSerialized, OdinSerialize]
    public int dataGold;
    public List <float> posX = new List <float>(1536);
    public List <float> posY = new List <float>(1536);
    public GameObject[] gameObjects;
}