using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetTextGold : MonoBehaviour
{
    [SerializeField] private Text textGold;
    [SerializeField] private Text textOil;
    [SerializeField] private Text textCrips;

    [SerializeField] private string tagText;

    public GameManager gameManager;

    private void Update()
    {
        textGold.text = gameManager.gold.ToString();
        textOil.text = gameManager.oil.ToString();
        textCrips.text = gameManager.crips.ToString();
    }

    public void ClimeButtonFunc()
    {
        foreach (var item in gameManager.buildings)
        {
            if (item.gameObject.GetComponent<BuildingsDoing>().isOpen)
            {

                if (item.gameObject.GetComponent<Building>().gold_OR_oil)
                {
                    gameManager.gold += Int32.Parse(GameObject.FindGameObjectWithTag(tagText).GetComponent<Text>().text);
                }
                else if (!item.gameObject.GetComponent<Building>().gold_OR_oil)
                {
                    gameManager.oil += Int32.Parse(GameObject.FindGameObjectWithTag(tagText).GetComponent<Text>().text);
                }
            }
        }


    }

    public void BackCanvasBuildings()
    {
        try
        {

            foreach (Building t in gameManager.buildings)
            {
                t.GetComponent<Animator>().SetBool("OnClick", false);
                t.GetComponent<BuildingsDoing>().onePlay = false;
                t.open = t.GetComponent<BuildingsDoing>().isOpen = false;
                t.GetComponent<BuildingsDoing>().upgradeButton.onClick.RemoveAllListeners();

            }
        }
        catch (NullReferenceException)
        {

            Debug.Log("catch");
        }
    }
}
