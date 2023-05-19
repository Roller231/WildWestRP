using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildingsDoing : MonoBehaviour
{
    bool onePlay = false;
    public void PlayAnimationOnClick(Animator animator)
    {
        if (!onePlay)
        {
            onePlay = true;
            animator.SetBool("OnClick", onePlay);

        }
        else if (onePlay)
        {
            onePlay = false;
            animator.SetBool("OnClick", onePlay);
            Debug.Log(onePlay);
        }


    }
}
     