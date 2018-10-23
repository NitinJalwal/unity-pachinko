using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DragonController : MonoBehaviour {

    private int hits = 0;
    private Animator animator;
    private Rigidbody2D dragon;
    public float speed;
    Vector2 direction = new Vector2(1.0f, 0.0f);
    public Text eggCount;

	// Use this for initialization
	void Start () {
        animator = GetComponent<Animator>();

	}

	// Update is called once per frame
	void Update () {
        dragon = GetComponent<Rigidbody2D>();
        dragon.velocity = direction * speed;
	}

	void OnTriggerEnter2D(Collider2D other)
        {

            if (other.tag == "egg1") {
                hits++;
                if(hits < 5) {
                animator.SetTrigger("dizzy");
                }
                else {
                    animator.SetTrigger("die");
                    Destroy (gameObject, 0.75f);
                    eggCount.text = "You Win!";
                }
            }
    }

    void OnTriggerExit2D(Collider2D other)
        {
            Debug.Log(other.tag);
            if (other.tag == "dragonArea") {
                Debug.Log("dragon out");
                direction *= -1;

                // Multiply the player's x local scale by -1.
                Vector3 theScale = transform.localScale;
                theScale.x *= -1;
                transform.localScale = theScale;
            }
        }
}
