using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackNear : MonoBehaviour
{

    // Update is called once per frame
    void Update()
    {
        StartRayCast();
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
