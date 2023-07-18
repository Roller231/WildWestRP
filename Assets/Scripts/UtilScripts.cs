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




}
