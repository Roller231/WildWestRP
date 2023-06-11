using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetButtonInfo : MonoBehaviour
{
    public Building buttonBuild;
    public Text costText;
    private void Start()
    {
        costText.text = buttonBuild.cost.ToString();
    }
}
