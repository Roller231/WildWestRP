using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenBuildingSettings : MonoBehaviour
{
    public Transform box;
    public GameObject canvasInGame;

    public void Enable()
    {
        box.localPosition = new Vector2(0, -Screen.height);
        box.LeanMoveLocalY(0, 0.2f).setEaseOutExpo().delay = 0.1f;
        canvasInGame.SetActive(false);
    }
    public void DownCanvas()
    {
        box.localPosition = new Vector2(0, -Screen.height);
        canvasInGame.SetActive(true);
        Debug.Log("ssdsad");
    }

}
