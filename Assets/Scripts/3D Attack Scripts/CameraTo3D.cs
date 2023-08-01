using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;

public class CameraTo3D : MonoBehaviour
{
    public GameObject mainCamera;
    public GameManager gameManager;
    public bool do3D;


    private void Update()
    {
        if (do3D)
        {

            //if (!do3D)
            //{
            //    UtilScripts.DestroyObjectWithComponent3D();
            //}


            //mainCamera.GetComponent<Camera>().orthographic = false;
            //mainCamera.GetComponent<Camera>().fieldOfView = 39.6f;


            mainCamera.transform.position.Set(0, 3, 18);
            mainCamera.transform.rotation = Quaternion.Euler(122, 0, 0);


        }
        else
        {
            mainCamera.transform.position.Set(0, 0, -400);
            mainCamera.transform.rotation = Quaternion.identity;

        }



        //Удаление 3D

    }


}
