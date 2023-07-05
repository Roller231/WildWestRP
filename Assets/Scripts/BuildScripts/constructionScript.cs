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


    private void Start()
    {
        timeMemory = timeStart;

    }

    private void Update()
    {
        timeStart -= Time.deltaTime;
        
        timeText.text = Mathf.Round(timeStart).ToString();
        if (timeStart <= 0 || doingBuild.gameObject.GetComponent<Building>().isBuilt)
        {
            SpawnBuildingTimeLeft();
            doingBuild.BackAllBuildings();
        }
    }


    public void SpawnBuildingTimeLeft()
    {
        doingBuild.gameObject.GetComponent<Building>().isBuilt = true;
        imageBuild.enabled = true;
        doingBuild.enabled = true;

        gameObject.SetActive(false); 
        

    }

    public void SetUpgradeBuilding(float timeForUpgrade)
    { 
        doingBuild.gameObject.GetComponent<Building>().isBuilt = false;
        imageBuild.enabled = false;
        doingBuild.enabled = false;
        gameObject.SetActive(true);

        timeStart = timeForUpgrade;
        timeMemory = timeStart;

        GameObject.Find("EarnBuildingSettings").GetComponent<OpenBuildingSettings>().DownCanvas();
    }
}
