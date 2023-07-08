using System;
using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;

public class MoveBuilding : MonoBehaviour
{

    public GameObject grid;

    private Building _building;

    private GameManager gameManager;
    public bool nowMoving;

    [SerializeField] GameObject canvasForHouse;
    public GameObject canvasInGame;


    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    public void Update()
    {
            //goldDisplay.text = gold.ToString();

            if (Input.GetMouseButtonDown(0) && GameManager.buildingMode && !UtilScripts.IsPointerOverUIObject() && nowMoving)
            {
                Tile nearesTile = null;
                float nearestDistance = float.MaxValue;


                foreach (Tile tile in gameManager.tiles)
                {

                    float dist = Vector2.Distance(tile.transform.position, Camera.main.ScreenToWorldPoint(Input.mousePosition));
                    if (dist < nearestDistance)
                    {
                        nearestDistance = dist;
                        nearesTile = tile;

                    }

                }


            if (nearesTile.isOccuped == false)
            {
                _building.gameObject.SetActive(true);
                _building.gameObject.transform.position = new Vector3(nearesTile.transform.position.x, nearesTile.transform.position.y + 0.3f, 0);
                _building.tile = nearesTile;

                nearesTile.isOccuped = true;

                grid.SetActive(false);
                canvasInGame.SetActive(true);



                GameManager.buildingMode = false;


            }
        }
    }
    public void MoveBuildingVoid()
    {
        foreach (var build in gameManager.buildings)
        {
            if (build.open)
            {
                _building = build;
            }
        }
        grid.SetActive(true );
        _building.tile.isOccuped = false;
        GameManager.buildingMode = true;
        _building.gameObject.SetActive(false);
        nowMoving = true;
    }
}
