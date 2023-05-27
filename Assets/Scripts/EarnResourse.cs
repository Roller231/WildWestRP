using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EarnResourse : MonoBehaviour
{

    void Start()
    {
        StartCoroutine(EarnGoldCoroutine());
    }

    IEnumerator EarnGoldCoroutine()
    {
        //Print the time of when the function is first called.
        //Debug.Log("Started Coroutine at timestamp : " + Time.time);

        //yield on a new YieldInstruction that waits for 5 seconds.
        yield return new WaitForSeconds(5f);
        if (gameObject.GetComponent<Building>().storage < gameObject.GetComponent<Building>().maxIncome)
        {
            gameObject.GetComponent<Building>().storage += gameObject.GetComponent<Building>().income;
        }
        else
        {
            Debug.Log("Full");
        }

        StartCoroutine(EarnGoldCoroutine());


        //After we have waited 5 seconds print the time again.
        Debug.Log("Finished Coroutine at timestamp : " + Time.time);
    }
}
