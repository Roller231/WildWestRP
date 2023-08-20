using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.EventSystems;


public class GameManager : MonoBehaviour
{

    public int gold;
    public int oil;
    public int crips;


    public int LEVEL;
    public int cups;

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

    [SerializeField] GameObject erorInt;





    private void Update()
    {
        //goldDisplay.text = gold.ToString();

        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            GameObject.Find("Main Camera").GetComponent<DB>().haveInternet = false;
            Time.timeScale = 0f;
            erorInt.SetActive(true);

        }
        else
        {
            GameObject.Find("Main Camera").GetComponent<DB>().haveInternet = true;
            Time.timeScale = 1f;
            erorInt.SetActive(false);

        }



        if (cups < 0)
        {
            cups = 0;
        }


        if(gold < 0)
        {
            gold = 0;
        }

        if(oil < 0)
        {
            oil = 0;
        }


        if (Input.GetMouseButtonDown(0) && buildingToPlace != null && buildingMode && !UtilScripts.IsPointerOverUIObject())
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
                houseObject.tile = nearesTile;
                UtilScripts.PlaySounds("build", 0.3f);



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
                houseObject.memoryCountHouse = countHouses;
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

            canvasInGame.SetActive(false);
            cancelButtonBuild.SetActive(true);
        }

        else if (oil >= building.cost && !buildingMode && building.gold_OR_oil)
        {

            buildingMode = true;
            buildingToPlace = building;
            grid.SetActive(true);
            canvasInGame.SetActive(false);
            cancelButtonBuild.SetActive(true);
        }

        _building = building;




    }


    public void CancelBuying()
    {
        buildingMode = false;
    }


}