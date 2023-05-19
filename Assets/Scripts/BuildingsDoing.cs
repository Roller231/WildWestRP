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

            foreach (Building t in GameManager.buildings)
            {
                t.GetComponent<BuildingsDoing>().onePlay = true;

            }
        }

        else if (onePlay)
        {
            onePlay = false;
            animator.SetBool("OnClick", onePlay);
            foreach (Building t in GameManager.buildings)
            {
                t.GetComponent<Animator>().SetBool("OnClick", onePlay);
                t.GetComponent<BuildingsDoing>().onePlay = false;

            }
        }
    }


}
     