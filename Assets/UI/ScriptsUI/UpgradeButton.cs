using System.Collections;
using System.Collections.Generic;
using System.Runtime.Remoting.Contexts;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Windows;

public class UpgradeButton : MonoBehaviour
{

    public GameObject goldImage;
    public GameObject oilImage;
    public Text cost;
    public Text costChips;

    public Text upgradeText;
    public void OnEnableFunk(bool gold_OR_oil, Building buildingThis, Button upgradeDon, int gold, int oil, int chips)
    {


        cost.text = buildingThis.upgradeCost.ToString();
        costChips.text = buildingThis.chipsCost.ToString();

        var level = buildingThis.level;
        var name = buildingThis.name.Split("(Clone)")[0];


        string output = name + " " + level + " -> " + buildingThis.nextLevel;

        upgradeText.text = output;

        if (!gold_OR_oil)
        {
            oilImage.SetActive(false);

            goldImage.SetActive(true);


        }
        else if (gold_OR_oil)
        {
            goldImage.SetActive(false);

            oilImage.SetActive(true);

        }

        bool canUpBar = true;
        if (buildingThis.typeBuilding == "bar")
        {

            foreach (var build in GameObject.Find("GameManager").GetComponent<GameManager>().buildings)
            {
                int i = 0;
                foreach (var item in GameObject.Find("GameManager").GetComponent<GameManager>().saveAll.prefabsHouse)
                {
                    if (build.typeBuilding != "bar")
                    {
                        if (build.maxLevel == build.level && GameObject.Find("GameManager").GetComponent<GameManager>().saveAll.prefabsHouse[i].GetComponent<Building>().countBuilding == GameObject.Find("GameManager").GetComponent<GameManager>().saveAll.prefabsHouse[i].GetComponent<Building>().limitBuilding)
                        {
                            canUpBar = true;
                        }
                        if(build.maxLevel != build.level || GameObject.Find("GameManager").GetComponent<GameManager>().saveAll.prefabsHouse[i].GetComponent<Building>().countBuilding != GameObject.Find("GameManager").GetComponent<GameManager>().saveAll.prefabsHouse[i].GetComponent<Building>().limitBuilding || item.GetComponent<Building>().countBuilding <= 0)
                        {

                            canUpBar = false;
                            break;
                        }
                    }

                    i++;
                }
                

            }


        }


        if (buildingThis.upgradeCost > gold && !gold_OR_oil)
        {
            gameObject.GetComponent<Button>().interactable = false;
            upgradeText.color = Color.red;
            upgradeText.text = "You need more gold for upgrade!";

        }
        else if (buildingThis.upgradeCost > oil && gold_OR_oil)
        {
            gameObject.GetComponent<Button>().interactable = false;
            upgradeText.color = Color.red;
            upgradeText.text = "You need more oil for upgrade!";
        }



        else if (buildingThis.level == buildingThis.maxLevel)
        {
            gameObject.GetComponent<Button>().interactable = false;
            upgradeDon.interactable = false;
            upgradeText.color = Color.red;
            upgradeText.text = "Max level, upgrade bar!";
        }



        else if (buildingThis.upgradeCost <= gold && !gold_OR_oil || buildingThis.level < buildingThis.maxLevel)
        {
            gameObject.GetComponent<Button>().interactable = true;
            upgradeText.color = Color.black;
            upgradeText.text = output;
        }
        else if (buildingThis.upgradeCost <= oil && gold_OR_oil || buildingThis.level < buildingThis.maxLevel)
        {
            gameObject.GetComponent<Button>().interactable = true;

            upgradeText.color = Color.black;
            upgradeText.text = output;
        }


        else if (canUpBar)
        {
            gameObject.GetComponent<Button>().interactable = true;
            upgradeText.color = Color.black;
            upgradeText.text = output;

        }

        if (!canUpBar)
        {
            gameObject.GetComponent<Button>().interactable = false;
            upgradeText.color = Color.red;
            upgradeText.text = "Build all buildings and up on max lvl!";


        }
        if (buildingThis.typeBuilding == "bar")
        {
        if (canUpBar && buildingThis.level == buildingThis.maxLevel)
            {
                gameObject.GetComponent<Button>().interactable = true;
                upgradeText.color = Color.red;
                upgradeText.text = "Max level!";
            }
        }


        //Donate button

        if (buildingThis.chipsCost > chips)
        {
            upgradeDon.interactable = false;
            costChips.color = Color.black;
        }

        else if (buildingThis.level == buildingThis.maxLevel)
        {
            upgradeDon.interactable = false;
            upgradeText.color = Color.red;
            upgradeText.text = "Max level, upgrade bar!";
        }

        else if (buildingThis.chipsCost <= chips || buildingThis.level < buildingThis.maxLevel)
        {
            upgradeDon.interactable = true;
            costChips.color = Color.black;
        }



        else if (canUpBar)
        {
            upgradeDon.interactable = true;
            upgradeText.color = Color.black;
            upgradeText.text = output;

        }

        if (!canUpBar)
        {
            upgradeDon.interactable = false;
            upgradeText.color = Color.red;
            upgradeText.text = "Build all buildings and up on max lvl!";


        }





    }
}
