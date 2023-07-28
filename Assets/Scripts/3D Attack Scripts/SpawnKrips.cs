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

        Vector3 mousePosition = Input.mousePosition; // Получаемозицию мыши экранных координатах

        Ray ray = Camera.main.ScreenPointToRay(mousePosition); // Создаем луч из позиции мыши
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit)) //роверяем, пересек ли луч какой-либо объект
        {



            Vector3 clickPosition = hit.point; // Получаем позицию нажатия в мировых координатах
            Debug.Log("Нажатие на позицию: " + clickPosition);

            Quaternion quaternion = new Quaternion(krips.transform.rotation.x, krips.transform.rotation.y, krips.transform.rotation.z, krips.transform.rotation.w);
            Instantiate(krips, new Vector3(clickPosition.x, clickPosition.y, clickPosition.z), quaternion);
        }
    }
}
