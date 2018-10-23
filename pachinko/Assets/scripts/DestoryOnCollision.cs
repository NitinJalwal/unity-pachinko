using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestoryOnCollision : MonoBehaviour {
    public GameObject explosion;

	void OnTriggerEnter2D(Collider2D other)
    {

        if(other.tag == "egg1") {
            Instantiate(explosion, other.transform.position, other.transform.rotation);
            // Destroy everything that leaves the trigger
                    Destroy(other.gameObject);
        }

    }
}
