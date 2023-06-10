using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetTextGold : MonoBehaviour
{
    [SerializeField] private Text textGold;
    [SerializeField] private GameManager gold;
    [SerializeField] private string tagText;

    public GameManager gameManager;

    private void Update()
    {
        textGold.text = gold.gold.ToString();
    }

    public void ClimeButtonFunc()
    {
        foreach (var item in gameManager.buildings)
        {
            if (item.gameObject.GetComponent<BuildingsDoing>().isOpen)
            {

                if (item.gameObject.GetComponent<BuildingsDoing>().gold_OR_oil)
                {
                    GameObject.Find("GameManager").GetComponent<GameManager>().gold += Int32.Parse(GameObject.FindGameObjectWithTag(tagText).GetComponent<Text>().text);
                }
                else if (!item.gameObject.GetComponent<BuildingsDoing>().gold_OR_oil)
                {
                    GameObject.Find("GameManager").GetComponent<GameManager>().oil += Int32.Parse(GameObject.FindGameObjectWithTag(tagText).GetComponent<Text>().text);
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
                t.GetComponent<BuildingsDoing>().isOpen = false;
                t.GetComponent<BuildingsDoing>().upgradeButton.onClick.RemoveAllListeners();

            }
        }
        catch (NullReferenceException)
        {

            Debug.Log("catch");
        }
    }
}
