using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using System.Text.RegularExpressions;

public class GameManager : MonoBehaviour
{
    public int gold;
    public int oil;

    private Building buildingToPlace;
    public GameObject grid;
    [SerializeField] GameObject canvasForHouse;

    public static bool buildingMode = false;

    public Tile[] tiles;
    public Building[] buildings;
    public SaveAll saveAll;
    public int countHouses = 0;





    private void Update()
    {
        //goldDisplay.text = gold.ToString();

        if (Input.GetMouseButtonDown(0) && buildingToPlace != null)
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
                var houseObject = Instantiate(buildingToPlace, nearesTile.transform.position, Quaternion.identity);
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


                buildingToPlace = null;
                nearesTile.isOccuped = true;
                grid.SetActive(false);
                Cursor.visible = true;


                Array.Resize(ref buildings, buildings.Length + 1);
                buildings[countHouses] = houseObject;
                countHouses++;

                buildingMode = false;
            }
        }
    }

    public void BuyBuilding(Building building)
    {
        if (gold >= building.cost && !buildingMode)
        {

            buildingMode = true;
            gold -= building.cost;
            buildingToPlace = building;
            grid.SetActive(true);
        }

    }
}
