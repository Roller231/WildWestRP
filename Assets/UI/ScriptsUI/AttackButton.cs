using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class AttackButton : MonoBehaviour
{

    [SerializeField] SaveAll saveAll;
    [SerializeField] DB db;

    [SerializeField] GameObject erorTrain;

    bool doAttack;
    public void OpenSceneVoid()
    {
        int i = 0;
        foreach (var t in saveAll.prefabsPawnsCards)
        {
            i += t.GetComponent<trainButton>().enemy.countInArmy;
            
        }
        if (i > 0) 
        {
            SceneManager.LoadScene(1);
        }

        else
        {
            erorTrain.GetComponent<Animation>().Play();
        }

    }
}
