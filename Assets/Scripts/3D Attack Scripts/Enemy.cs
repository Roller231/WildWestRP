using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class Enemy : MonoBehaviour
{
    private Rigidbody enemyRigidbody;
    public float moveSpeed = 3f;

    [HideInInspector]
    public float memSpeed;

    public Transform target;

    private void Start()
    {
        memSpeed = moveSpeed;

        enemyRigidbody = GetComponent<Rigidbody>();

        FindNearestBuilding();


    }

    private void Update()
    {

        if (target != null)
        {

            Vector3 movement = (target.position - transform.position).normalized; 

            enemyRigidbody.velocity = movement * moveSpeed;

            // Получаем вектор направления от текущей позиции целевой позиции
            Vector3 direction = target.position - transform.position;

            // Вычисляем угол между вектором направления и осью z
            float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

            // Применяем угол к координате rotation z
            transform.rotation = Quaternion.Euler(0f, 0f, angle);



        }

        else if(target == null) 
        {
            FindNearestBuilding();
            if (target == null)
            {
                GetComponentInChildren<Animator>().SetBool("idle", true);
                moveSpeed = 0f;
            }


        }


    } 


    public void FindNearestBuilding()
    {
        BuildingToAttack[] objectsWithComponent = FindObjectsOfType<BuildingToAttack>();

        if (objectsWithComponent.Length > 0)
        {
            BuildingToAttack closestObject = objectsWithComponent[0];
            float closestDistance = Vector3.Distance(transform.position, closestObject.transform.position);

            for (int i = 1; i < objectsWithComponent.Length; i++)
            {
                float distance = Vector3.Distance(transform.position, objectsWithComponent[i].transform.position);
            
                if (distance < closestDistance)
                {
                    closestObject = objectsWithComponent[i];
                    closestDistance = distance;
                }
            }

            target = closestObject.transform;
        }
        else
        {
        }
    }

    public void StartRayCast()
    {
        Ray ray = new Ray(transform.position, transform.forward);
        float maxDistance = 10f; // Задайте желаемую дистанцию
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, maxDistance))
        {
            // Обработка столкновения с объектом
            Debug.Log("Райкаст попал в объект: " + hit.collider.gameObject.name);
        }
        else
        {
            // Райкаст не попал ни в один объект
            Debug.Log("Райкаст не попал в объект");
        }
    }
}
