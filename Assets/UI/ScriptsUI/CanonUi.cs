using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class CanonUi : MonoBehaviour
{
    [SerializeField] Text damageText;
    [SerializeField] Text damageTextMain;

    [SerializeField] Text lvlText;

    public void OnEnableCanonUI(Building building)
    {

        damageText.text = Mathf.RoundToInt(building.damage).ToString();

        if (building.typeBuilding == "bar")
        {
            damageText.text = GameObject.Find("Player Information").GetComponent<PlayerInfo>().playerNickname;
            damageTextMain.text = "Owner";
        }
        lvlText.text = building.level.ToString();
    }

}
