using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;

public class CameraTo3D : MonoBehaviour
{
    public GameObject mainCamera;
    public GameManager gameManager;
    public GameObject PlayerInfoPanel;
    public bool do3D;




    private void Update()
    {
        if (do3D)
        {

            //PlayerInfoPanel.SetActive(false);

            //mainCamera.transform.position.Set(0, 12, 18);
            //mainCamera.transform.rotation = Quaternion.Euler(122, 0, 0);


        }
        else
        {
            mainCamera.transform.position.Set(0, 0, -400);
            mainCamera.transform.rotation = Quaternion.identity;

            UtilScripts.DestroyObjectWithComponent3D();

        }



        //Удаление 3D

    }


}
