using System;
using System.Globalization;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UtilScripts : MonoBehaviour
{

    public static bool IsPointerOverUIObject()
    {
        PointerEventData eventDataCurrentPosition = new PointerEventData(EventSystem.current);
        eventDataCurrentPosition.position = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
        List<RaycastResult> results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(eventDataCurrentPosition, results);
        return results.Count > 0;
    }

    public static void SetDateTime(string key, DateTime value)
    {
        string convertedToString = value.ToString(format: "u", CultureInfo.InvariantCulture);
        PlayerPrefs.SetString(key, convertedToString);
    }

    public static DateTime GetDateTime(string key, DateTime value)
    {
        if (PlayerPrefs.HasKey(key))
        {
            string stored = PlayerPrefs.GetString(key);
            DateTime result = DateTime.ParseExact(s: stored, format: "u", CultureInfo.InvariantCulture);
            return result;
        }
        else
        {
            return value;
        }
    }

    public static void DestroyObjectWithComponent3D()
    {
        MeshRenderer[] meshRenderers = FindObjectsOfType<MeshRenderer>();

        // Удаляем каждый объект с компонентом MeshRenderer
        foreach (MeshRenderer renderer in meshRenderers)
        {
            Destroy(renderer.gameObject);
        }
    }

    public static void DestroyObject(GameObject gameObject)
    {
        Destroy(gameObject);
    }

    public static void RemoveComponentFromAllObjects()
    {
        // Получаем все объекты в сцене (включая неактивные объекты)
        GameObject[] allObjects = Resources.FindObjectsOfTypeAll<GameObject>();

        foreach (GameObject obj in allObjects)
        {
            // Проверяем наличие компонента в объекте
            EventTrigger component = obj.GetComponent<EventTrigger>();
            if (component != null)
            {
                component.triggers.Clear();
                UnityEditor.EditorUtility.SetDirty(component);
            }
        }
    }

    public static void BackComponentFromAllObjects(BuildingsDoing buildingsDoing)
    {
        // Получаем все объекты в сцене (включая неактивные объекты)
        GameObject[] allObjects = Resources.FindObjectsOfTypeAll<GameObject>();

        foreach (GameObject obj in allObjects)
        {
            // Проверяем наличие компонента в объекте
            EventTrigger component = obj.GetComponent<EventTrigger>();
            if (component != null)
            {
                Animator animator = buildingsDoing.gameObject.GetComponent<Animator>();

                // Создайте новое событие Pointer Click
                EventTrigger.Entry clickEntry = new EventTrigger.Entry();
                clickEntry.eventID = EventTriggerType.PointerClick;
                clickEntry.callback.AddListener((data) => { buildingsDoing.PlayAnimationOnClick(animator); });

                // Добавьте событие в компонент EventTrigger
                component.triggers.Add(clickEntry);
            }
        }
    }



}
