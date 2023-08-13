using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class SetAfterFight : MonoBehaviour
{
    public Text textCups;
    public Text textCups2;


    // Update is called once per frame
    void Update()
    {
        textCups.text = "+" + GameObject.Find("Main Camera").GetComponent<GameManagerInAttack>().countCups.ToString();
        textCups2.text = "-" + GameObject.Find("Main Camera").GetComponent<GameManagerInAttack>().countCups.ToString();
    }
}
