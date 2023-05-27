using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BuildingsDoing : MonoBehaviour
{

    bool onePlay = false;
    private GameObject canvasSettingsNotGrind;
    private GameObject canvasSettingsYesGrind;
    private GameObject canvasInGame;
    private Building buildingThis;
    public bool grindBuild;

    public Button TestBUTTONICH;



    private void Start()
    {
        canvasSettingsNotGrind = GameObject.Find("BuildingSettings");
        canvasSettingsYesGrind = GameObject.Find("EarnBuildingSettings");
        buildingThis = gameObject.GetComponent<Building>();
        TestBUTTONICH = GameObject.Find("ClaimButton").GetComponent<Button>();
    }

    private void Update()
    {
        if (grindBuild)
        {
            GameObject.Find("StorageText").GetComponent<Text>().text = buildingThis.storage.ToString();
        }
    }

    public void PlayAnimationOnClick(Animator animator)
    {
        if (!onePlay && !GameManager.buildingMode)
        {

            if (!grindBuild)
            {
                canvasSettingsNotGrind.GetComponent<OpenBuildingSettings>().Enable();

            }
            else if (grindBuild)
            {
                GameObject.Find("GameManager").GetComponent<GameManager>().gold += buildingThis.storage;
                buildingThis.storage = 0;
    
                canvasSettingsYesGrind.GetComponent<OpenBuildingSettings>().Enable();
                TestBUTTONICH.onClick.AddListener(() => SetStorageOnButton());

                //Debug.Log(GameObject.Find("GameManager").GetComponent<GameManager>().gold);
                //Debug.Log(buildingThis.storage);
            }



            onePlay = true;
            animator.SetBool("OnClick", onePlay);



            foreach (Building t in GameManager.buildings)
            {
                t.GetComponent<BuildingsDoing>().onePlay = true;
            }




            canvasInGame = GameObject.Find("AlwaysInGame");
            canvasInGame.SetActive(false);


        }

        //else if (onePlay && !GameManager.buildingMode)
        //{
        //    onePlay = false;
        //    animator.SetBool("OnClick", onePlay);
        //    foreach (Building t in GameManager.buildings)
        //    {
        //        t.GetComponent<Animator>().SetBool("OnClick", onePlay);
        //        t.GetComponent<BuildingsDoing>().onePlay = false;

        //    }
        //}
    }

    public void BackAllBuildings()
    {
        foreach (Building t in GameManager.buildings)
        {
            t.GetComponent<Animator>().SetBool("OnClick", onePlay);
            t.GetComponent<BuildingsDoing>().onePlay = false;

        }
    }

    private void SetStorageOnButton()
    {
        buildingThis.storage = 0;
    }


}
     