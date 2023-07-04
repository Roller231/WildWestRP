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
        if (timeStart <= 0)
        {
            SpawnBuildingTimeLeft();

        }
    }


    public void SpawnBuildingTimeLeft()
    {
        imageBuild.enabled = true;
        doingBuild.enabled = true;
        Destroy(gameObject);

        
    }
}
