using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetPlayerInfo : MonoBehaviour
{

    [SerializeField] private Text nickname;
    [SerializeField] private Text LEVELtext;

    // Start is called before the first frame update
    void Start()
    {
        nickname.text = PlayerPrefs.GetString("dataNick");
    }


}
