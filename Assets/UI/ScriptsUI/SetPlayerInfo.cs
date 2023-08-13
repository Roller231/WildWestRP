using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetPlayerInfo : MonoBehaviour
{

    [SerializeField] private Text nickname;
    [SerializeField] private Text LEVELtext;
    [SerializeField] private Text CupsText;


    [SerializeField] private PlayerInfo playerInfo;
    [SerializeField] private GameManager gameManager;

    // Start is called before the first frame update
    void Update()
    {
        nickname.text = playerInfo.playerNickname;
        


        LEVELtext.text = gameManager.LEVEL.ToString();

        CupsText.text = gameManager.cups.ToString();
    }


}
