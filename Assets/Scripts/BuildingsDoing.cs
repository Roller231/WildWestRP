using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildingsDoing : MonoBehaviour
{

    bool onePlay = false;
    private GameObject canvasSettings;
    private GameObject canvasInGame;
    private Building buildingThis;
    public bool grindBuild;



    private void Start()
    {
        canvasSettings = GameObject.Find("BuildingSettings");
        buildingThis = gameObject.GetComponent<Building>();
    }

    public void PlayAnimationOnClick(Animator animator)
    {
        if (!onePlay && !GameManager.buildingMode)
        {
            if (grindBuild)
            {
                GameObject.Find("GameManager").GetComponent<GameManager>().gold += buildingThis.storage;
                buildingThis.storage = 0;
                Debug.Log(GameObject.Find("GameManager").GetComponent<GameManager>().gold);
                Debug.Log(buildingThis.storage);
            }
            onePlay = true;
            animator.SetBool("OnClick", onePlay);
            canvasSettings.GetComponent<OpenBuildingSettings>().Enable();
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


}
     