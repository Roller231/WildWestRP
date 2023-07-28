using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class PanZoom : MonoBehaviour
{
    public bool isPointerOverGameObject;

    public static PanZoom current;
    
    [SerializeField] private float zoomMin = 2;
    [SerializeField] private float zoomMax = 5;

    [SerializeField] private float leftLimit;
    [SerializeField] private float rightLimit;
    [SerializeField] private float bottomLimit;
    [SerializeField] private float upperLimit;

    [SerializeField] private Canvas canvas;
    [SerializeField] private MeshCollider collider;


    private Camera cam;

    bool isOneTouch;

    private bool moveAllowed;
    private Vector3 touchPos;
    private Transform objectToFollow;
    private Bounds objectBounds;
    private Vector3 prevPos;

    void Awake()
    {
        cam = GameObject.Find("Main Camera").GetComponent<Camera>();
        current = this;
    }

    void Update()
    {            
        if (Input.touchCount == 0 && isOneTouch)
        {
            StartCoroutine(SetDelayRaycastTrue());
            isOneTouch = false;
        }







        if (objectToFollow != null)
        {
            Vector3 objPos = cam.WorldToViewportPoint(objectToFollow.position + objectBounds.max);
            if (objPos.x >= 0.7f || objPos.x <= 0.3f || objPos.y >= 0.7f || objPos.y <= 0.3f)
            {
                Vector3 pos = cam.ScreenToWorldPoint(objectToFollow.position);
                Vector3 direction = pos - prevPos;
                cam.transform.position += direction;
                prevPos = pos;
            }
            else
            {
                Vector3 pos = cam.ScreenToWorldPoint(objectToFollow.position);
                prevPos = pos;
            }
            
            transform.position = new Vector3
            (
                Mathf.Clamp(transform.position.x, leftLimit, rightLimit),
                Mathf.Clamp(transform.position.y, bottomLimit, upperLimit),
                transform.position.z
            );
            
            return;
        }
        
        if (Input.touchCount > 0)
        {
            if (Input.touchCount == 2 && !UtilScripts.IsPointerOverUIObject())
            {
                isOneTouch = true;

                Touch touchZero = Input.GetTouch(0);
                Touch touchOne = Input.GetTouch(1);
            
 

                Vector2 touchZeroLastPos = touchZero.position - touchZero.deltaPosition;
                Vector2 touchOneLastPos = touchOne.position - touchOne.deltaPosition;

                float distTouch = (touchZeroLastPos - touchOneLastPos).magnitude;
                float currentDistTouch = (touchZero.position - touchOne.position).magnitude;

                float difference = currentDistTouch - distTouch;
                StartCoroutine(SetDelayRaycastFalse());
                
                Zoom(difference * 0.01f);
            }


            else 
            {

                Touch touch = Input.GetTouch(0);

                switch (touch.phase)
                {
                    case TouchPhase.Began:
                        StartCoroutine(SetDelayRaycastFalse());

                        touchPos = cam.ScreenToWorldPoint(Input.mousePosition);
                        break;

                    case TouchPhase.Moved:
                        if (!UtilScripts.IsPointerOverUIObject())
                        {


                            Vector3 direction = touchPos - cam.ScreenToWorldPoint(touch.position);
                            cam.transform.position += direction;
                    
                            transform.position = new Vector3
                            (
                                Mathf.Clamp(transform.position.x, leftLimit, rightLimit),
                                Mathf.Clamp(transform.position.y, bottomLimit, upperLimit),
                                transform.position.z
                            );

                        }
                        break;
                    case TouchPhase.Stationary:
                        StartCoroutine(SetDelayRaycastFalse());

                        break;
                    case TouchPhase.Ended:
                        StartCoroutine(SetDelayRaycastTrue());

                        break;
                }
            }
        }
    }
    void Zoom(float increment)
    {

        cam.orthographicSize = Mathf.Clamp(cam.orthographicSize - increment, zoomMin, zoomMax);
    }

    public void Focus(Vector3 position)
    {
        Vector3 newPos = new Vector3(position.x, position.y, transform.position.z);


        transform.position = new Vector3
        (
            Mathf.Clamp(transform.position.x, leftLimit, rightLimit),
            Mathf.Clamp(transform.position.y, bottomLimit, upperLimit),
            transform.position.z
        );
        
        touchPos = transform.position;
    }

    public void FollowObject(Transform objToFollow)
    {
        objectToFollow = objToFollow;
        objectBounds = objToFollow.GetComponent<PolygonCollider2D>().bounds;
        prevPos = cam.ScreenToWorldPoint(Vector3.zero);
    }

    public void UnfollowObject()
    {
        objectToFollow = null;
    }
    
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.yellow;
        Gizmos.DrawWireCube(new Vector3((rightLimit - Mathf.Abs(leftLimit)) / 2.0f,
                (upperLimit - Mathf.Abs(bottomLimit)) / 2.0f), 
            new Vector3(rightLimit - leftLimit, upperLimit - bottomLimit));
    }

    IEnumerator SetDelayRaycastTrue()
    {
        //Print the time of when the function is first called.
        //Debug.Log("Started Coroutine at timestamp : " + Time.time);

        //yield on a new YieldInstruction that waits for 5 seconds.
        yield return new WaitForSeconds(0.2f);
        canvas.GetComponent<GraphicRaycaster>().enabled = true;

    }
    IEnumerator SetDelayRaycastFalse()
    {
        //Print the time of when the function is first called.
        //Debug.Log("Started Coroutine at timestamp : " + Time.time);

        //yield on a new YieldInstruction that waits for 5 seconds.
        yield return new WaitForSeconds(0.1f);
        canvas.GetComponent<GraphicRaycaster>().enabled = false;



    }


}

