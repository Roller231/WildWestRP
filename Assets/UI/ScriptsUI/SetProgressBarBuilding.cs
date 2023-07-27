using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetProgressBarBuilding : MonoBehaviour
{
    public ConstructionScript constructionScript;
    public Image progressBar;
    void Update()
    {

        progressBar.fillAmount = constructionScript.timeStart / constructionScript.timeMemory;
    }
}
