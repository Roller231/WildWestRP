using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildingsDoing : MonoBehaviour
{
    bool onePlay = false;
    public void PlayAnimationOnClick(Animation animation)
    {
        if (!onePlay)
        {
            animation.Play();
            onePlay = true;
        }

    }
}
