using System.Collections;
using System.Collections.Generic;
using System.Drawing.Text;
using UnityEngine;

public class SpawnKrips : MonoBehaviour
{
    [SerializeField] Camera mainCamera;
    [SerializeField] GameObject krips;

    private void OnMouseUp()
    {

        Vector3 mousePosition = Input.mousePosition; // �������������� ���� �������� �����������

        Ray ray = Camera.main.ScreenPointToRay(mousePosition); // ������� ��� �� ������� ����
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit)) //��������, ������� �� ��� �����-���� ������
        {



            Vector3 clickPosition = hit.point; // �������� ������� ������� � ������� �����������
            Debug.Log("������� �� �������: " + clickPosition);

            Quaternion quaternion = new Quaternion(krips.transform.rotation.x, krips.transform.rotation.y, krips.transform.rotation.z, krips.transform.rotation.w);
            Instantiate(krips, new Vector3(clickPosition.x, clickPosition.y, clickPosition.z), quaternion);
        }
    }
}
