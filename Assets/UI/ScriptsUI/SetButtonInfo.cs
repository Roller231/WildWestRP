using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetButtonInfo : MonoBehaviour
{
    public Building buttonBuild;
    public Text costText;
    public Text countBuildingText;
    public Text limitBuildingText;
    public GameObject oilImage;
    public GameObject goldImage;


    private void OnEnable()
    {


        if (!buttonBuild.gold_OR_oil)
        {
            goldImage.SetActive(true);
        }
        else if (buttonBuild.gold_OR_oil)
        {
            oilImage.SetActive(true);
        }

        if (buttonBuild.countBuilding >= buttonBuild.limitBuilding)
        {
            gameObject.GetComponent<Button>().interactable = false;
            costText.color = Color.black;

        }
        else if (buttonBuild.countBuilding >= buttonBuild.limitBuilding)
        {
            gameObject.GetComponent<Button>().interactable = true;
            costText.color = Color.white;
        }

        else if (GameObject.Find("GameManager").GetComponent<GameManager>().gold < buttonBuild.cost && !buttonBuild.gold_OR_oil || GameObject.Find("GameManager").GetComponent<GameManager>().oil < buttonBuild.cost && buttonBuild.gold_OR_oil)
        {
            gameObject.GetComponent<Button>().interactable = false;
            costText.color = Color.red;
        }
        else if (GameObject.Find("GameManager").GetComponent<GameManager>().gold > buttonBuild.cost && !buttonBuild.gold_OR_oil || GameObject.Find("GameManager").GetComponent<GameManager>().oil > buttonBuild.cost && buttonBuild.gold_OR_oil)
        {
            gameObject.GetComponent<Button>().interactable = true;
            costText.color = Color.white;
        }

        costText.text = buttonBuild.cost.ToString();
        countBuildingText.text = buttonBuild.countBuilding.ToString();
        limitBuildingText.text = buttonBuild.limitBuilding.ToString();

    }


}
