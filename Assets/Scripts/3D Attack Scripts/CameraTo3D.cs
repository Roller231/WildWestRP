using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraTo3D : MonoBehaviour
{
    public GameObject mainCamera;

    public bool do3D;


    private void Start()
    {
        if (do3D)
        {
            //mainCamera.GetComponent<Camera>().orthographic = false;
            //mainCamera.GetComponent<Camera>().fieldOfView = 39.6f;

            mainCamera.transform.position = new Vector3(0, 0, 50);
            mainCamera.transform.rotation = new Quaternion(180, 0, 0, 0);



        }

        //Удаление 3D

    }
    private void Update()
    {
        //if (!do3D)
        //{
        //    UtilScripts.DestroyObjectWithComponent3D();
        //}
    }
}
