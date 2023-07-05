using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class constructionScript : MonoBehaviour
{
    public float timeStart = 60;
    public TMP_Text timeText;

    public Image imageBuild;
    public BuildingsDoing doingBuild;

    


    private void Update()
    {
        timeStart -= Time.deltaTime;
        timeText.text = Mathf.Round(timeStart).ToString();
        if (timeStart <= 0 || doingBuild.gameObject.GetComponent<Building>().isBuilt)
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
        

    }

    public void SetUpgradeBuilding(float timeForUpgrade)
    { 
        doingBuild.gameObject.GetComponent<Building>().isBuilt = false;
        imageBuild.enabled = false;
        doingBuild.enabled = false;
        gameObject.SetActive(true);
        timeStart = timeForUpgrade;
        GameObject.Find("EarnBuildingSettings").GetComponent<OpenBuildingSettings>().DownCanvas();
    }
}
