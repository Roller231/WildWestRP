using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManagerInAttack : MonoBehaviour
{

    [SerializeField] GameObject winPanel;
    [SerializeField] GameObject loosePanel;
    bool doOne = true;

    public int countCups;
    public int countGold;
    public int countOil;

    public InterstitialAds ads;

    private void Start()
    {
        System.Random random = new System.Random();
        countCups = random.Next(19, 30);
        countGold = random.Next(500, 1000);
        countOil = random.Next(500, 1000);

    }

    private void Update()
    {
        if (gameObject.GetComponent<DB>().loadIsDone)
        {
            CheckBuildings();
            CheckKrips();
        }

    }

    public void CheckBuildings()
    {
        BuildingToAttack[] meshRenderers = FindObjectsOfType<BuildingToAttack>();

        if (meshRenderers.Length == 0)
        {
            if (doOne)
            {
                GameObject.Find("GameManager").GetComponent<GameManager>().cups += countCups;
                GameObject.Find("GameManager").GetComponent<GameManager>().gold += countGold;
                GameObject.Find("GameManager").GetComponent<GameManager>().oil += countOil;

                doOne = false;
            }

            Time.timeScale = 1f;
            winPanel.SetActive(true);
        }
        else if (meshRenderers.Length > 0)
        {
            Time.timeScale = 1f;
            winPanel.SetActive(false);

        }


    }
    public void CheckKrips()
    {


        Enemy[] enemys = FindObjectsOfType<Enemy>();


        int j = 0;
        for (int i = 0; i < GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns.Length; i++)
        {
            j += GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns[i].GetComponent<Enemy>().countInArmy;
        }

        if (j <= 0 && enemys.Length <= 0)
        {
            if (doOne)
            {

                GameObject.Find("GameManager").GetComponent<GameManager>().cups -= countCups;
                GameObject.Find("GameManager").GetComponent<GameManager>().gold -= countGold;
                GameObject.Find("GameManager").GetComponent<GameManager>().oil -= countOil;




                doOne = false;
            }

            loosePanel.SetActive(true);
        }
        else
        {
            loosePanel.SetActive(false);

        }
    }

    //public void minusCups()
    //{
    //    GameObject.Find("GameManager").GetComponent<GameManager>().cups -= countCups;
    //    StartCoroutine(openScene());

    //}

    public void openScene()
    {
        ads.ShowAd();

        UtilScripts.OpenSceneVoid(0);
    }


}
