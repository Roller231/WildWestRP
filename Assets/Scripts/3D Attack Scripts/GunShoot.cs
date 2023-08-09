using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class GunShoot : MonoBehaviour
{

    public Transform target;
    bool enemyInCollision;

    [SerializeField] GameObject prefab;
    [SerializeField] Transform shootPoint;

    [SerializeField] public float timeToAttack;



    private bool finded;

    private void Start()
    {
        FindNearestBuilding();


    }

    private void Update()
    {

        if (target != null)
        {
            FindNearestBuilding();


            Vector3 center = transform.position; // ����������� ������� �������\
            Vector3 targretVector = target.position;
            float radius = 5f; // ������ �������� �������


            float distance = Vector3.Distance(center, targretVector);
            if (distance <= 5)
            {


                GetComponentInChildren<Transform>().rotation = Quaternion.Euler(0, 0, 0);

                // �������� ������ ����������� �� ������� ������� ������� �������
                Vector3 direction = target.position - transform.position;

                // ��������� ���� ����� �������� ����������� � ���� z
                float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

                // ��������� ���� � ���������� rotation z
                transform.rotation = Quaternion.Euler(0f, 0f, angle);


                //Vector3 shootPointVector = shootPoint.

                if (!finded)
                {
                    finded = true;

                    StartCoroutine(SpawnAmmo());
                }



            }


        }



        // ���������, ��������� �� ����� � �������


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


    IEnumerator SpawnAmmo()
    {
        yield return new WaitForSeconds(timeToAttack);


            GameObject newPrefab = Instantiate(prefab, shootPoint.position, Quaternion.identity);
            newPrefab.transform.SetParent(gameObject.transform);



        StartCoroutine(SpawnAmmo());

    }



}
