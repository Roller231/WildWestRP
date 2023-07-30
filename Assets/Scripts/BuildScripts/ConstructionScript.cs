using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ConstructionScript : MonoBehaviour
{
    public float timeStart = 60;
    public float timeMemory;
    public TMP_Text timeText;

    public Image imageBuild;
    public BuildingsDoing doingBuild;

    [HideInInspector]
    public Image barImage;

    public GameManager gameManager;

    private void Start()
    {
        timeMemory = timeStart;
        barImage = GetComponent<SetProgressBarBuilding>().progressBar;
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    private void Update()
    {
        timeStart -= Time.deltaTime;
        
        timeText.text = Mathf.Round(timeStart).ToString();
        if (timeStart < 1 || doingBuild.gameObject.GetComponent<Building>().isBuilt)
        {
            SpawnBuildingTimeLeft();

        }
    }


    public void SpawnBuildingTimeLeft()
    {
        doingBuild.gameObject.GetComponent<Building>().isBuilt = true;
        imageBuild.enabled = true;
        doingBuild.enabled = true;
        gameObject.SetActive(false);

        foreach (Building item in gameManager.buildings)
        {
            if (item.gameObject.GetComponent<BuildingsDoing>().onePlay)
            {
                doingBuild.onePlay = true;
            }
            else
            {
                doingBuild.onePlay = false;
            }
        }


    }

    public void SetUpgradeBuilding(float timeForUpgrade)
    { 
        doingBuild.BackAllBuildings();
        doingBuild.gameObject.GetComponent<Building>().isBuilt = false;
        imageBuild.enabled = false;
        doingBuild.enabled = false;
        gameObject.SetActive(true);

        timeStart = timeForUpgrade;
        timeMemory = timeStart;

        GameObject.Find("EarnBuildingSettings").GetComponent<OpenBuildingSettings>().DownCanvas();
    }
}
