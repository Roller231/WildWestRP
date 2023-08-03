using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class trainButton : MonoBehaviour
{
    public Enemy enemy;

    public GameObject countInArmyObj;
    public Text countInArmyText;

    public GameObject costObj;

    public GameObject contentScroll;

    [HideInInspector]
    public GameManager gameManager;

    [HideInInspector]
    public GameObject newCard;

    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    public void TrainPawns()
    {
        if (enemy.countInArmy <= 0 && gameManager.oil > enemy.cost)
        {
            enemy.countInArmy++;
            countInArmyText.GetComponentInChildren<Text>().text = enemy.countInArmy.ToString();


            var pawnCard = Instantiate(gameObject);
            pawnCard.transform.SetParent(contentScroll.transform);

            pawnCard.GetComponent<trainButton>().costObj.SetActive(false);
            pawnCard.GetComponent<trainButton>().countInArmyObj.SetActive(true);
            pawnCard.GetComponent<Button>().enabled = false;
            newCard = pawnCard;


            gameManager.oil -= enemy.cost;

        }
        else if (enemy.countInArmy > 0 && enemy.maxCount > enemy.countInArmy && gameManager.oil >= enemy.cost)
        {
            enemy.countInArmy++;
            newCard.GetComponentInChildren<trainButton>().countInArmyText.text = enemy.countInArmy.ToString();

            gameManager.oil -= enemy.cost;

        }


    }

    public void trainPawnsOnLoad()
    {

            countInArmyText.GetComponentInChildren<Text>().text = enemy.countInArmy.ToString();


            var pawnCard = Instantiate(gameObject);
            pawnCard.transform.SetParent(contentScroll.transform);

            pawnCard.GetComponent<trainButton>().costObj.SetActive(false);
            pawnCard.GetComponent<trainButton>().countInArmyObj.SetActive(true);
            pawnCard.GetComponent<Button>().enabled = false;
            newCard = pawnCard;


        
    }

}
