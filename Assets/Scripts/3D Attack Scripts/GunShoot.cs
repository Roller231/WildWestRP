using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class GunShoot : MonoBehaviour
{

    public Transform target;


    private void Start()
    {

        FindNearestBuilding();


    }

    private void Update()
    {

        if (target != null)
        {

            GetComponentInChildren<Transform>().rotation = Quaternion.Euler(0, 0, 0);


            // ѕолучаем вектор направлени€ от текущей позиции целевой позиции
            Vector3 direction = target.position - transform.position;

            // ¬ычисл€ем угол между вектором направлени€ и осью z
            float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

            // ѕримен€ем угол к координате rotation z
            transform.rotation = Quaternion.Euler(0f, 0f, angle);


        }

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
