using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInfo : MonoBehaviour
{
    [Header("Основное")]
    public string playerNickname;
    public string pass;

    public bool logined;
    public bool haveName;

    public Text inputField;
    public Text inputFieldPASS;
    public GameObject inputPanel;



    public DB dB;

    [Header("Для настройки входа/регистрации")]
    public GameObject erorText;
    public GameObject buttonSignUp;
    public GameObject buttonSignIn;
    public GameObject buttonChangeSignUp;
    public GameObject buttonChangeSignIn;
    public GameObject signUpText;
    public GameObject signInText;


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
        playerNickname = inputField.text;
        pass = inputFieldPASS.text;
        haveName = true;


        StartCoroutine(dB.CheckUserRegistered(playerNickname, pass));


        PlayerPrefs.SetString("dataNick", playerNickname);
        PlayerPrefs.SetString("dataPass", pass);
        PlayerPrefs.Save();

    }

    public void SignUp()
    {

        playerNickname = inputField.text;
        pass = inputFieldPASS.text;
        haveName = true;

        StartCoroutine(dB.CheckUser(playerNickname, pass));

        PlayerPrefs.SetString("dataNick", playerNickname);
        PlayerPrefs.SetString("dataPass", pass);
        PlayerPrefs.Save();
    }

    public void ChangeOnSignIn()
    {
        buttonSignUp.SetActive(false);
        buttonSignIn.SetActive(true);

        buttonChangeSignUp.SetActive(true);
        buttonChangeSignIn.SetActive(false);

        signInText.SetActive(true);
        signUpText.SetActive(false);

        erorText.SetActive(false);

    }

    public void ChangeOnSignUp()
    {
        buttonSignUp.SetActive(true);
        buttonSignIn.SetActive(false);

        buttonChangeSignUp.SetActive(false);
        buttonChangeSignIn.SetActive(true);

        signInText.SetActive(false);
        signUpText.SetActive(true);

        erorText.SetActive(false);
    }



}
