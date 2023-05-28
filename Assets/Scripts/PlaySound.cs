using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PlaySound : MonoBehaviour
{
    public static AudioSource audioSource;

    void Start()
    {
        audioSource = GameObject.Find("MainCamera").GetComponent<AudioSource>();
    }
    
    public static void PlaySoundFunc(AudioClip clip)
    {
        audioSource.clip = clip;
        audioSource.Play();
    }
}
