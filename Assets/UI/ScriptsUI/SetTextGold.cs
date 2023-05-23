using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetTextGold : MonoBehaviour
{
    [SerializeField] private Text textGold;
    [SerializeField] private GameManager gold;

    private void Update()
    {
        textGold.text = gold.gold.ToString();
    }
}
