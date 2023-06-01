using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using OdinSerializer;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine.Playables;
using static UnityEditor.Progress;

public class SaveAll : MonoBehaviour
{
    private GameManager gameManager;

    string filePath;

    [SerializeField, HideInInspector]
    private Data state = new Data();






    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

        filePath = Application.persistentDataPath + "/saves.sv";

        StartCoroutine(EarnGoldCoroutine());

    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
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
        state.dataGold = gameManager.gold;
        for (int i = 0; i < gameManager.buildings.Length; i++)
        {
            if (gameManager.buildings[i] != null)
            {
                state.dataBuildings[i] = gameManager.buildings[i];
                Debug.Log("save");
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
        gameManager.gold = state.dataGold;

        for (int i = 0; i < gameManager.buildings.Length; i++)
        {
            if (state.dataBuildings[i] != null)
            {
                gameManager.buildings[i] = state.dataBuildings[i];
                Debug.Log("load");
            }

        }


    }




}



[Serializable]
class Data
{
    [NonSerialized, OdinSerialize]
    public GameObject[] transforms = new GameObject[1536];
    public int dataGold;
    public Building[] dataBuildings = new Building[1536];
}