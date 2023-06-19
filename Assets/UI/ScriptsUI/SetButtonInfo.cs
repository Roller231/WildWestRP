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
        costText.text = buttonBuild.cost.ToString();
        if (!buttonBuild.gold_OR_oil)
        {
            goldImage.SetActive(true);
        }
        else if (buttonBuild.gold_OR_oil)
        {
            oilImage.SetActive(true);
        }
        countBuildingText.text = buttonBuild.countBuilding.ToString();
        limitBuildingText.text = buttonBuild.limitBuilding.ToString();
        if (buttonBuild.countBuilding >= buttonBuild.limitBuilding)
        {
            gameObject.GetComponent<Button>().interactable = false;
        }
    }




}
