using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EggBounceSound : MonoBehaviour {
    private AudioSource bounceAudio;

// Use this for initialization
	void Start () {
        bounceAudio = GetComponent<AudioSource>();
	}

	void OnCollisionEnter2D(Collision2D collision)
    {

        if(collision.gameObject.tag == "egg1") {
            Debug.Log("prabhat");
            bounceAudio.Play();
        }

    }
}
