using System;
using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;
using System.Collections;

public class MoveBuilding : MonoBehaviour
{

    public GameObject grid;

    public Building _building;

    private GameManager gameManager;
    public bool nowMoving;

    [SerializeField] GameObject canvasForHouse;
    public GameObject canvasInGame;
    public GameObject utilScripts;


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
            _building.GetComponent<BuildingsDoing>().BackAllBuildings();

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
                int i = 0;
                foreach (var tile in gameManager.tiles)
                {
                    foreach (var item in gameManager.buildings)
                    {
                        if (tile == nearesTile && item.nowMove)
                        {
                            Array.Resize(ref gameManager.saveAll.state.indexTile, gameManager.tiles.Length);
                            gameManager.saveAll.state.indexTile[_building.memoryCountHouse] = i;
                            Debug.Log(gameManager.saveAll.state.indexTile[_building.memoryCountHouse]);
                        }
                    }

                    i++;
                }
                grid.SetActive(false);
                canvasInGame.SetActive(true);


                GameManager.buildingMode = false;
                _building.nowMove = nowMoving = false;
                _building.GetComponent<BuildingsDoing>().BackAllBuildings();


                
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
        _building.nowMove = nowMoving = true;

        _building.GetComponent<BuildingsDoing>().BackAllBuildings();
    }
}
