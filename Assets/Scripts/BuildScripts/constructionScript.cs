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


    private void Start()
    {
        timeMemory = timeStart;
        barImage = GetComponent<SetProgressBarBuilding>().progressBar;
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
        doingBuild.onePlay = false;
        imageBuild.enabled = true;
        doingBuild.enabled = true;
        doingBuild.onePlay = false;
        doingBuild.BackAllBuildings();
        gameObject.SetActive(false);


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
