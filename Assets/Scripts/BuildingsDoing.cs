using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildingsDoing : MonoBehaviour
{

    bool onePlay = false;
    [SerializeField] GameObject canvasSettings;
    public GameObject canvasInGame;



    private void Start()
    {
        canvasSettings = GameObject.Find("BuildingSettings");
    }

    public void PlayAnimationOnClick(Animator animator)
    {
        if (!onePlay && !GameManager.buildingMode)
        {

            onePlay = true;
            animator.SetBool("OnClick", onePlay);
            canvasSettings.GetComponent<OpenBuildingSettings>().Enable();
            foreach (Building t in GameManager.buildings)
            {
                t.GetComponent<BuildingsDoing>().onePlay = true;
            }

            canvasInGame.SetActive(false);
            canvasInGame = GameObject.Find("AlwaysInGame");

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
     