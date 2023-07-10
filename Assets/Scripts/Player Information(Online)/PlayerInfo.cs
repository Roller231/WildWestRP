using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInfo : MonoBehaviour
{
    public string playerNickname;
    public bool newUser;


    public bool haveName;
    public Text inputField;
    public GameObject inputPanel;
    public DB dB;

    private void Start()
    {

        if (!haveName && playerNickname == "")
        {
            inputPanel.SetActive(true);
            dB.oneLoad = false;
            dB.oneSave = false;
        }
        else
        {
            inputPanel.SetActive(false);
            haveName = true;
            dB.oneLoad = true;
            dB.oneSave = true;

        }
    }
    public void SetNicknamefunc()
    {
        newUser = true;
        inputPanel.SetActive(false);
        playerNickname = inputField.text;
        haveName = true;
        dB.oneLoad = true;
        dB.oneSave = true;

        PlayerPrefs.SetString("dataNick", playerNickname);
        PlayerPrefs.Save();

    }

}
