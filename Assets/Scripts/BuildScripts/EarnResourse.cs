using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EarnResourse : MonoBehaviour
{


    public void OnEnable()
    {


        StartCoroutine(EarnGoldCoroutine());



    }
    public IEnumerator EarnGoldCoroutine()
    {
        //Print the time of when the function is first called.
        //Debug.Log("Started Coroutine at timestamp : " + Time.time);

        //yield on a new YieldInstruction that waits for 5 seconds.
        yield return new WaitForSeconds(gameObject.GetComponent<Building>().timeEarn);
        if (gameObject.GetComponent<Building>().storage < gameObject.GetComponent<Building>().maxIncome)
        {
            gameObject.GetComponent<Building>().storage += gameObject.GetComponent<Building>().income;
        }

        StartCoroutine(EarnGoldCoroutine());

    }
}
