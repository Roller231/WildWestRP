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
        float maxDistance = 1f; // ������� �������� ���������
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, maxDistance))
        {
            // ��������� ������������ � ��������
            Debug.Log("������� ����� � ������: " + hit.collider.gameObject.name);
            if (true)
            {

            }
            finedObject = true;
            root.GetComponent<EnemyAttack>().moveSpeed = 0;
            
        }
        else
        {
            // ������� �� ����� �� � ���� ������

        }
    }

    public void StartAttackRayCast()
    {
        Ray ray = new Ray(transform.position, transform.forward);
        float maxDistance = 10f; // ������� �������� ���������
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, maxDistance))
        {
            // ��������� ������������ � ��������
            Debug.Log("������� ����� � ������: " + hit.collider.gameObject.name);
        }
        else
        {
            // ������� �� ����� �� � ���� ������
            finedObject = true;
        }
    }
}
