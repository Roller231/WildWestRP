using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using OdinSerializer;

public class Building : SerializedMonoBehaviour
{

    public int cost;
    public int storage;
    public int income;
    public int maxIncome;
    public int level;
    public int upgradeCost;
    public float timeEarn;
    public Tile tile;

}
