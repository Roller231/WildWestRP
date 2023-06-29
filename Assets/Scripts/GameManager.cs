using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.EventSystems;


public class GameManager : MonoBehaviour
{
    public int gold;
    public int oil;

    private Building buildingToPlace;
    public GameObject grid;

    private Building _building;

    [SerializeField] GameObject canvasForHouse;
    public GameObject canvasInGame;
    public GameObject cancelButtonBuild;

    public static bool buildingMode = false;

    public Tile[] tiles;
    public Building[] buildings;
    public SaveAll saveAll;
    public int countHouses = 0;





    private void Update()
    {
        //goldDisplay.text = gold.ToString();

        if (Input.GetMouseButtonDown(0) && buildingToPlace != null  && buildingMode && !NeedScripts.IsPointerOverUIObject())
        {
            Tile nearesTile = null;
            float nearestDistance = float.MaxValue;


            foreach (Tile tile in tiles)
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
                var houseObject = Instantiate(buildingToPlace, new Vector3(nearesTile.transform.position.x, nearesTile.transform.position.y + 0.3f, 0), Quaternion.identity);
                houseObject.transform.SetParent(canvasForHouse.transform);
                int i = 0;
                foreach (var tile in tiles)
                {
                    if (tile == nearesTile)
                    {
                        Array.Resize(ref saveAll.state.indexTile, tiles.Length);
                        saveAll.state.indexTile[countHouses] = i;
                    }
                    i++;
                }


                if (houseObject.gold_OR_oil)
                {
                    oil -= houseObject.cost;
                    _building.countBuilding++;
                }
                else if (!houseObject.gold_OR_oil)
                {
                    gold -= houseObject.cost;
                    _building.countBuilding++;
                }

                buildingToPlace = null;
                nearesTile.isOccuped = true;

                grid.SetActive(false);
                canvasInGame.SetActive(true);
                cancelButtonBuild.SetActive(false);




                Array.Resize(ref buildings, buildings.Length + 1);
                buildings[countHouses] = houseObject;
                countHouses++;

                buildingMode = false;


            }
        }
    }

    public void BuyBuilding(Building building)
    {

            if (gold >= building.cost && !buildingMode && !building.gold_OR_oil)
            {

                buildingMode = true;
                buildingToPlace = building;
                grid.SetActive(true);
            }

            else if (oil >= building.cost && !buildingMode && building.gold_OR_oil)
            {

                buildingMode = true;
                buildingToPlace = building;
                grid.SetActive(true);
            }

        _building = building;

            canvasInGame.SetActive(false);
            cancelButtonBuild.SetActive(true);


    }


    public void CancelBuying()
    {
        buildingMode = false;
    }


}
