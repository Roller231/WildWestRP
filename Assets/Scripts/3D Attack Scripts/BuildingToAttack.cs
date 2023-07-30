using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildingToAttack : MonoBehaviour
{
    public int health = 100;
    public void DestroyBuilding()
    {
        if (health <= 0)
        {
            Destroy(gameObject);
        }
    }
}
