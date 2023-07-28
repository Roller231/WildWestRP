 using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackNear : MonoBehaviour
{
    public bool finedObject = false;
    [SerializeField] private GameObject root;

    // Update is called once per frame
    void Update()
    {
        if (!finedObject)
        {
            StartFindRayCast();
        }

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
            if (true)
            {

            }
            finedObject = true;
            root.GetComponent<EnemyAttack>().moveSpeed = 0;
            
        }
        else
        {
            // Райкаст не попал ни в один объект

        }
    }

    public void StartAttackRayCast()
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
            finedObject = true;
        }
    }
}
