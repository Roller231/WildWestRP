 using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackNear : MonoBehaviour
{
    public bool finedObject = false;
    [SerializeField] private GameObject root;
    [SerializeField] private SpawnKrips kripsList;




    public int damage;

    private void Start()
    {
        kripsList = GameObject.Find("Plane").GetComponent<SpawnKrips>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!finedObject)
            StartFindRayCast();
        

            
    }

    public void StartFindRayCast()
    {

        Ray ray = new Ray(transform.position, transform.forward);
        float maxDistance = 1f; // Задайте желаемую дистанцию
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, maxDistance))
        {
            // Обработка столкновения с объектом
            Debug.Log("Райкаст попал в объект: " + hit.collider.gameObject.name);

            if (hit.collider.gameObject.name != "Enemy Model")
            {
                finedObject = true;
                gameObject.GetComponent<Animator>().SetBool("isAttack", true);
                root.GetComponent<EnemyMoovement>().moveSpeed = 0;
            }



        }
        else
        {
            Debug.Log("dont hit");

        }
    }

    public void MeeleAttack()
    {

        Ray ray = new Ray(transform.position, transform.forward);
        float maxDistance = 1f; // Задайте желаемую дистанцию
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, maxDistance))
        {
            Debug.Log("Фэйл");

            // Обработка столкновения с объектом
            Debug.Log("Райкаст нанес урон " + hit.collider.gameObject.name);

            if (hit.collider.gameObject.name != "Enemy Model")
            {
                if (hit.collider.gameObject.GetComponent<BuildingToAttack>().health > 0)
                {

                    hit.collider.gameObject.GetComponent<BuildingToAttack>().health -= damage;
                    Debug.Log(hit.collider.gameObject.GetComponent<BuildingToAttack>().health);
                }
                if (hit.collider.gameObject.GetComponent<BuildingToAttack>().health <= 0)
                {

                    Debug.Log("ыыыыыыы");


                    foreach (var enemy in kripsList.kripsList)
                    {
                        Debug.Log(enemy.gameObject.name);


                            enemy.GetComponentInChildren<Animator>().SetBool("isAttack", false);
                            enemy.GetComponent<EnemyMoovement>().moveSpeed = enemy.GetComponent<EnemyMoovement>().memSpeed;
                            enemy.GetComponentInChildren<AttackNear>().finedObject = false;
                            Debug.Log(enemy.gameObject.name);


                    }

                    UtilScripts.Destroy(hit.collider.gameObject);

                }
            }

            else
            {
                Debug.Log("ыыыыыыы");

            }
         
        }

    }


}
