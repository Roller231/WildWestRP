using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class GunShoot : MonoBehaviour
{

    public Transform target;
    bool enemyInCollision;



    private void Start()
    {
        FindNearestBuilding();


    }

    private void Update()
    {
        FindNearestBuilding();

        if (target != null)
        {
            Vector3 center = transform.position; // Центральная позиция объекта\
            Vector3 targretVector = target.position;
            float radius = 5f; // Радиус желаемой области


            float distance = Vector3.Distance(center, targretVector);
            Debug.Log(distance);
            if (distance <= 5)
            {

                GetComponentInChildren<Transform>().rotation = Quaternion.Euler(0, 0, 0);


                // Получаем вектор направления от текущей позиции целевой позиции
                Vector3 direction = target.position - transform.position;

                // Вычисляем угол между вектором направления и осью z
                float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

                // Применяем угол к координате rotation z
                transform.rotation = Quaternion.Euler(0f, 0f, angle);


            }


        }



        // Проверяем, находится ли точка в радиусе


        else if (target == null)
        {
            FindNearestBuilding();


        }


    }
    public void FindNearestBuilding()
    {
        AttackNear[] objectsWithComponent = FindObjectsOfType<AttackNear>();

        if (objectsWithComponent.Length > 0)
        {
            AttackNear closestObject = objectsWithComponent[0];
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



}
