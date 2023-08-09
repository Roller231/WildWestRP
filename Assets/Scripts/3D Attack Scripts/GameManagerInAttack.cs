using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManagerInAttack : MonoBehaviour
{

    [SerializeField] GameObject winPanel;
    [SerializeField] GameObject loosePanel;

    private void Update()
    {
        
        CheckBuildings();
        CheckKrips();
    }

    public void CheckBuildings()
    {
        BuildingToAttack[] meshRenderers = FindObjectsOfType<BuildingToAttack>();

        Debug.Log(meshRenderers.Length);
        if (meshRenderers.Length == 0)
        {
            Time.timeScale = 0f;
            winPanel.SetActive(true);
        }
        else if (meshRenderers.Length > 0)
        {
            Time.timeScale = 1f;
            winPanel.SetActive(false);

        }


    }
    public void CheckKrips()
    {
        Enemy[] enemys = FindObjectsOfType<Enemy>();


        int j = 0;
        for (int i = 0; i < GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns.Length; i++)
        {
            j += GameObject.Find("Main Camera").GetComponent<SaveAll>().prefabsPawns[i].GetComponent<Enemy>().countInArmy;
        }

        if (j <= 0 && enemys.Length <= 0)
        {
            loosePanel.SetActive(true);
        }
        else
        {
            loosePanel.SetActive(false);

        }
    }
}
