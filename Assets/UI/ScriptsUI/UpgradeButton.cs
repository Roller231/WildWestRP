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
    public Text upgradeText;
    public void OnEnableFunk(bool gold_OR_oil, Building buildingThis, int gold, int oil)
    {

        cost.text = buildingThis.upgradeCost.ToString();

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

        if (buildingThis.upgradeCost > gold && !gold_OR_oil)
        {
            gameObject.GetComponent<Button>().interactable = false;
        }
        else if (buildingThis.upgradeCost > oil && gold_OR_oil)
        {
            gameObject.GetComponent<Button>().interactable = false;
        }

    }
}
