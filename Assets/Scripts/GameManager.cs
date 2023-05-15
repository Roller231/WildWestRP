using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public int gold;
    //public Text goldDisplay;

    private Building buildingToPlace;
    public GameObject grid;
    [SerializeField] GameObject canvasForHouse;
    public CustomCursour customCursour;

    public Tile[] tiles;



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
                houseObject.transform.parent = canvasForHouse.transform;
                buildingToPlace = null;
                nearesTile.isOccuped = true;
                grid.SetActive(false);
                customCursour.gameObject.SetActive(false);
                Cursor.visible = true;
            }
        }
    }

    public void BuyBuilding(Building building)
    {
        if (gold >= building.cost)
        {


            gold -= building.cost;
            buildingToPlace = building;
            grid.SetActive(true);
        }
    }
}
