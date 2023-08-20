using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BuildingToAttack : MonoBehaviour
{
    public Image hpBar;
    public GameObject destroiedBuild;
    public int health = 100;

    private void Update()
    {
        try
        {
            hpBar.fillAmount = (float)health / 100f;

        }
        catch (NullReferenceException)
        {

            
        }
    }

}
