 using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackNear : MonoBehaviour
{
    public bool finedObject = false;
    [SerializeField] private GameObject root;
    [SerializeField] private SpawnKrips kripsList;

    public float maxDistance = 1f;


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
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, maxDistance))
        {
            // Обработка столкновения с объектом

            if (hit.collider.gameObject.name != "Enemy Model")
            {
                finedObject = true;
                gameObject.GetComponent<Animator>().SetBool("isAttack", true);
                root.GetComponent<Enemy>().moveSpeed = 0;
            }



        }
        else
        {

        }
    }

    public void Attack()
    {

        Ray ray = new Ray(transform.position, transform.forward);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, maxDistance))
        {

            // Обработка столкновения с объектом

            if (hit.collider.gameObject.name != "Enemy Model")
            {
                if (hit.collider.gameObject.GetComponent<BuildingToAttack>().health > 0)
                {

                    hit.collider.gameObject.GetComponent<BuildingToAttack>().health -= damage;
                    Debug.Log(hit.collider.gameObject.GetComponent<BuildingToAttack>().health);
                }
                if (hit.collider.gameObject.GetComponent<BuildingToAttack>().health <= 0)
                {



                    foreach (var enemy in kripsList.kripsList)
                    {


                            enemy.GetComponentInChildren<Animator>().SetBool("isAttack", false);
                            enemy.GetComponent<Enemy>().moveSpeed = enemy.GetComponent<Enemy>().memSpeed;
                            enemy.GetComponentInChildren<AttackNear>().finedObject = false;


                    }

                    UtilScripts.Destroy(hit.collider.gameObject);

                }
            }

            else
            {

            }
         
        }

    }


}
