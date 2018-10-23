using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameAreaLeave : MonoBehaviour {

	void OnTriggerExit2D(Collider2D other)
    {
        if (other.tag == "egg1") {
            // Destroy everything that leaves the trigger
            Destroy(other.gameObject);
        }
    }

}
