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

    private void Update()
    {
        textGold.text = gold.gold.ToString();
    }

    public void ClimeButtonFunc()
    {
        GameObject.Find("GameManager").GetComponent<GameManager>().gold += Int32.Parse(GameObject.FindGameObjectWithTag(tagText).GetComponent<Text>().text);

    }
}
