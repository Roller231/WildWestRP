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


    public Building[] buildings
    {
        get { return this.state.buildings; }
        set { this.state.buildings = GameManager.buildings; }
    }

    public Transform[] transforms
    {
        get { return this.state.transforms; }
        set
        {
            for (int i = 0; i < state.transforms.Length; i++)
            {
                state.transforms[i] = GameManager.buildings[i].transform;
            }; 
        }
    }


    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

        StartCoroutine(EarnGoldCoroutine());
        filePath = Application.persistentDataPath + "/saves.sv";
    }

    private void Update()
    {
        if(Input.GetMouseButtonDown(1)) 
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
        for (int i = 0; i < GameManager.buildings.Length; i++)
        {
            state.buildings[i] = GameManager.buildings[i];
            //Debug.Log(state.buildings[i]);
        }
        state.dataGold = gameManager.gold;
        //Debug.Log("complete " + state.buildings[1]);
        //        Debug.Log("complete " + state.transforms[1]);
        byte[] bytes = SerializationUtility.SerializeValue(this.state, DataFormat.Binary);
        File.WriteAllBytes(filePath, bytes);


    }

    public void LoadState(string filePath)
    {
        if (!File.Exists(filePath)) return; // No state to load

        byte[] bytes = File.ReadAllBytes(filePath);
        this.state = SerializationUtility.DeserializeValue<Data>(bytes, DataFormat.Binary);
        gameManager.gold = state.dataGold;

        for (int i = 0; i < GameManager.buildings.Length; i++)
        {
            Debug.Log("complete " + state.buildings[i]);

        }


    }




}



[Serializable]
class Data  
{
    [NonSerialized, OdinSerialize]
    public Transform[ ] transforms = new Transform[1536];
    public int dataGold;
    public Building[] buildings = new Building[1536];

}
