using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class EnemyAttack : MonoBehaviour
{
    private Rigidbody enemyRigidbody;
    public float moveSpeed = 5f;

    public Transform target;

    private void Start()
    {
        enemyRigidbody = GetComponent<Rigidbody>();

        FindNearestBuilding();

    }

    private void Update()
    {
        


        // ������ ����������� �����
        Vector3 movement = (target.position - transform.position).normalized; ; // ����������� �������� ����� (� ������ ������, �����)
        enemyRigidbody.velocity = movement * moveSpeed;

        gameObject.transform.rotation = new Quaternion(90, gameObject.transform.rotation.y, gameObject.transform.rotation.z, gameObject.transform.rotation.w);
        gameObject.transform.LookAt(target);
    } 


    public void FindNearestBuilding()
    {
        // ����� ��� ������� � ����������� MyComponent
        BuildingToAttack[] objectsWithComponent = FindObjectsOfType<BuildingToAttack>();

        if (objectsWithComponent.Length > 0)
        {
            // ����� ��������� ������ �� ���������
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

            // ������� ���-�� � ��������� ��������
            Debug.Log("������ ��������� ������: " + closestObject.name);

            target = closestObject.transform;
        }
        else
        {
            Debug.Log("������� � ����������� Attack �� �������");
        }
    }
}
