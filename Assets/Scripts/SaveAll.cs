using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveAll : MonoBehaviour
{
    private GameManager gameManager;


    void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        gameManager.gold = PlayerPrefs.GetInt("Gold", gameManager.gold);

        foreach (var build in GameManager.buildings)
        {
            Vector2 vector2 = new Vector2(PlayerPrefs.GetFloat("TransformPositionX"), PlayerPrefs.GetFloat("TransformPositionY"));
            Instantiate(build, vector2, Quaternion.identity);


        }


        StartCoroutine(EarnGoldCoroutine());
    }

    IEnumerator EarnGoldCoroutine()
    {

        //yield on a new YieldInstruction that waits for 5 seconds.
        yield return new WaitForSeconds(1f);

        PlayerPrefs.SetInt("Gold", gameManager.gold);

        foreach(var build in GameManager.buildings)
        {

            PlayerPrefs.SetFloat("TransformPositionX", build.transform.position.x);
            PlayerPrefs.SetFloat("TransformPositionY", build.transform.position.y);
        }

        StartCoroutine(EarnGoldCoroutine());

    }
}
