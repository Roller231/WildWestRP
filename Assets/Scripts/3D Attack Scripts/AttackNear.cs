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
            Debug.Log("������� �� ����� � ������");
        }
    }
}
