using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EarnResourse : MonoBehaviour
{

    bool oneEarn = true;
    public void Update()
    {
        if (gameObject.activeSelf && oneEarn)
        {
            StartCoroutine(EarnGoldCoroutine());
            oneEarn = false;
        }



    }
    private void OnEnable()
    {
        oneEarn = true;
    }
    public IEnumerator EarnGoldCoroutine()
    {
        //Print the time of when the function is first called.
        //Debug.Log("Started Coroutine at timestamp : " + Time.time);
        yield return new WaitForSeconds(gameObject.GetComponent<Building>().timeEarn);
        try
        {

            if (gameObject.GetComponent<Building>().storage < gameObject.GetComponent<Building>().maxIncome)
            {
                gameObject.GetComponent<Building>().storage += gameObject.GetComponent<Building>().income;
            }

            StartCoroutine(EarnGoldCoroutine());
        }
        catch (Exception)
        {

            
        }


    }
}
