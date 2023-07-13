using System.Collections;
using System.Collections.Generic;
using Unity.Android.Gradle;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInfo : MonoBehaviour
{
    public string playerNickname;
    public string pass;
    public bool logined;


    public bool haveName;

    public Text inputField;
    public GameObject inputPanel;
    public Text inputFieldPASS;

    public GameObject erorText;


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
    public void Register()
    {        
        inputPanel.SetActive(false);
        playerNickname = inputField.text;
        pass = inputFieldPASS.text;
        haveName = true;




        dB.oneLoad = true;
        dB.oneSave = true;

        PlayerPrefs.SetString("dataNick", playerNickname);
        PlayerPrefs.SetString("dataPass", pass);
        PlayerPrefs.Save();

    }

    public void SignUp()
    {

        playerNickname = inputField.text;
        pass = inputFieldPASS.text;
        haveName = true;

        StartCoroutine(dB.CheckUser(playerNickname, pass, logined));

        PlayerPrefs.SetString("dataNick", playerNickname);
        PlayerPrefs.SetString("dataPass", pass);
        PlayerPrefs.Save();
    }

    

}
