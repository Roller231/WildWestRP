using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class SetAfterFight : MonoBehaviour
{
    public Text textCups;
    public Text textCups2;
    public Text textGold;
    public Text textGold2;
    public Text textOil;
    public Text textOil2;





    // Update is called once per frame
    void Update()
    {
        textCups.text = "+" + GameObject.Find("Main Camera").GetComponent<GameManagerInAttack>().countCups.ToString();
        textCups2.text = "-" + GameObject.Find("Main Camera").GetComponent<GameManagerInAttack>().countCups.ToString();

        textGold.text = "+" + GameObject.Find("Main Camera").GetComponent<GameManagerInAttack>().countGold.ToString();
        textGold2.text = "-" + GameObject.Find("Main Camera").GetComponent<GameManagerInAttack>().countGold.ToString();

        textOil.text = "+" + GameObject.Find("Main Camera").GetComponent<GameManagerInAttack>().countOil.ToString();
        textOil2.text = "-" + GameObject.Find("Main Camera").GetComponent<GameManagerInAttack>().countOil.ToString();


    }
}
