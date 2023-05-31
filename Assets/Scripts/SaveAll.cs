using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using OdinSerializer;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public class SaveAll : MonoBehaviour
{
    private GameManager gameManager;

    string filePath;



    private void Start()
    {
        filePath = Application.persistentDataPath + "/saves.gamesaves";

        StartCoroutine(EarnGoldCoroutine());
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(1))
        {
            LoadGame();
        }
    }

    IEnumerator EarnGoldCoroutine()
    {
    //Print the time of when the function is first called.
    //Debug.Log("Started Coroutine at timestamp : " + Time.time);

    //yield on a new YieldInstruction that waits for 5 seconds.
    yield return new WaitForSeconds(5);

        SaveGame();

    StartCoroutine(EarnGoldCoroutine());



    }






    public void SaveGame()
    {
        BinaryFormatter bf = new BinaryFormatter();
        FileStream fs = new FileStream(filePath, FileMode.Create);

        SaveData saveData = new SaveData();

        int i = 0;
        foreach (Building build in GameManager.buildings)
        {
            if (GameManager.buildings[i] != null)
            {
                saveData.buildings[i] = build;
                Debug.Log("saveHouse");
            }
            i++;
            if (i == 1536)
            {
                i=0;
            }
        }

        bf.Serialize(fs, saveData);

        fs.Close();
    }

    public void LoadGame()
    {
        if (!File.Exists(filePath))
            return;

        BinaryFormatter bf = new BinaryFormatter();
        FileStream fs = new FileStream(filePath, FileMode.Open);

        SaveData saveData= (SaveData)bf.Deserialize(fs);

        fs.Close();
                Debug.Log(saveData.buildings.ToString());



    }
}


[Serializable]
class SaveData
{
    [NonSerialized, OdinSerialize]
    public Building[] buildings = new Building[1536];
    public int dataGold;

}
