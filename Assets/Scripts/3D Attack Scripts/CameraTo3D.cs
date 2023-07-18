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
            mainCamera.GetComponent<Camera>().orthographic = false;
            mainCamera.GetComponent<Camera>().fieldOfView = 60;

            mainCamera.transform.position = new Vector3(0, 0, 50);
            mainCamera.transform.rotation = new Quaternion(180, 0, 0, 0);
        }
    }
}
