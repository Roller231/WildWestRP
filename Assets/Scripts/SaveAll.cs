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
                rect[i] = gameManager.buildings[i].GetComponent<RectTransform>();


                Array.Resize(ref this.state.gameObjects, gameManager.buildings.Length);

                state.posX.Add(rect[i].anchoredPosition.x);
                state.posY.Add(rect[i].anchoredPosition.y);

                //Debug.Log(state.posX[i]);
                //Debug.Log(state.posY[i]);

                this.state.gameObjects[i] = gameManager.buildings[i].gameObject.name;

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

        int count = 0;
        foreach (var item in state.gameObjects)
        {
            for (int i = 0; i < prefabsHouse.Length; i++)
            {
                if (item != null)
                {
                    Array.Resize(ref gameManager.buildings, state.gameObjects.Length);

                    if (item == prefabsHouse[i].name + "(Clone)")
                    {
                        Debug.Log(state.posX[count]);
                        Debug.Log(state.posY[count]);
                        Debug.Log(count);
                        var houseObject = Instantiate(prefabsHouse[i], new Vector3(state.posX[count], state.posY[count], 0), Quaternion.identity);
                        houseObject.transform.SetParent(GameObject.Find("CanvasForHouse").transform);
                        gameManager.buildings[count] = houseObject.GetComponent<Building>();
                    }

                }
            }
            count++;

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
    public string[] gameObjects;
}