using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using OdinSerializer;

public class Building : SerializedMonoBehaviour
{

    [Header("�������� �������� ������")]
    public int cost;
    public int level;
    public int maxLevel;
    public int upgradeCost;
    public int limitBuilding;
    public int countBuilding;

    [Header("������� ������")]
    public int upgradeGoldEarn;
    public int upgradeNewMaxIncome;
    public float upgradeTime;


    [Header("�������� ���������� ������")]
    public int storage;
    public int income;
    public int maxIncome;
    public float timeEarn;



    [Header("��� ������ ��������")]
    public bool open;

    public bool gold_OR_oil;

    public Tile tile;
    public ConstructionScript constructionScript;
    public bool isBuilt;

}
