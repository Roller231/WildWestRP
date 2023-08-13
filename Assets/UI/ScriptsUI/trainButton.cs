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
    public GameObject contentScrollInAttack;


    [HideInInspector]
    public GameManager gameManager;

    [HideInInspector]
    public GameObject newCard;

    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    private void Update()
    {
        countInArmyText.text = enemy.countInArmy.ToString();

        costObj.GetComponentInChildren<Text>().text = enemy.cost.ToString();

        if (newCard != null && enemy.countInArmy == 0)
        {
            Destroy(newCard);
        }

    }

    public void TrainPawns()
    {
        int placesInArmyMax = 0;
        foreach (var item in gameManager.buildings)
        {
            placesInArmyMax += item.plasesInArmy;
        }

        if (enemy.countInArmy <= 0 && gameManager.oil > enemy.cost)
        {
            enemy.countInArmy++;
            countInArmyText.GetComponentInChildren<Text>().text = enemy.countInArmy.ToString();

            if (newCard == null)
            {
                var pawnCard = Instantiate(gameObject);
                pawnCard.transform.SetParent(contentScroll.transform);

                pawnCard.GetComponent<trainButton>().costObj.SetActive(false);
                pawnCard.GetComponent<trainButton>().countInArmyObj.SetActive(true);
                pawnCard.GetComponent<Button>().enabled = false;
                pawnCard.transform.localScale = Vector3.one;

                newCard = pawnCard;
            }



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



            var pawnCard = Instantiate(gameObject);
            pawnCard.transform.SetParent(contentScroll.transform);

            pawnCard.GetComponent<trainButton>().costObj.SetActive(false);
            pawnCard.GetComponent<trainButton>().countInArmyObj.SetActive(true);
            pawnCard.GetComponent<Button>().enabled = false;
        pawnCard.transform.localScale = Vector3.one;

        newCard = pawnCard;


        
    }

    public void trainPawnsOnLoadInAttack()
    {

        if (enemy.countInArmy > 0)
        {
            var pawnCard = Instantiate(gameObject);
            pawnCard.transform.SetParent(contentScrollInAttack.transform);

            pawnCard.GetComponent<trainButton>().costObj.SetActive(false);
            pawnCard.GetComponent<trainButton>().countInArmyObj.SetActive(true);
            pawnCard.GetComponent<Button>().onClick.RemoveAllListeners();


            pawnCard.GetComponent<Button>().onClick.AddListener(() => addSpawnKrip());

            pawnCard.transform.localScale = Vector3.one;

            newCard = pawnCard;
        }



    }

    void addSpawnKrip()
    {
        GameObject.Find("Plane").GetComponent<SpawnKrips>().krips = enemy.gameObject;
    }

}
