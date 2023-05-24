using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenBuildingSettings : MonoBehaviour
{
    public Transform box;
    public GameObject canvasInGame;
    private void OnEnable()
    {
    box.localPosition = new Vector2(0, -Screen.height);
    box.LeanMoveLocalY(-430, 0.2f).setEaseOutExpo().delay = 0.1f;
    canvasInGame.SetActive(false);
    }

}
