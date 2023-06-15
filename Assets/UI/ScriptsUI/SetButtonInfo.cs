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
    private void Update()
    {
        costText.text = buttonBuild.cost.ToString();
        countBuildingText.text = buttonBuild.countBuilding.ToString();
        limitBuildingText.text = buttonBuild.limitBuilding.ToString() ;
    }

}
