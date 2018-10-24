using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DragonController : MonoBehaviour {

    private int hits = 0;
    private int score = 5;
    private Animator animator;
    private Rigidbody2D dragon;
    public float speed;
    private AudioSource[] audio;
    Vector2 direction = new Vector2(1.0f, 0.0f);
    public Text hitCount;
    public Text eggCount;
    private AudioSource dizzyAudio;
    private AudioSource dieAudio;
    private GameController gameController;


	// Use this for initialization
	void Start () {
        animator = GetComponent<Animator>();
        audio = GetComponents<AudioSource>();
        dizzyAudio = audio[1];
        dieAudio = audio[0];
        updateScore();

        GameObject gameControllerObject = GameObject.FindWithTag ("GameController");

        if (gameControllerObject != null)
                        {
                            gameController = gameControllerObject.GetComponent <GameController>();
                            Debug.Log(gameController);
                        }
                        if (gameController == null)
                        {
                            Debug.Log ("Cannot find 'GameController' script");
                        }
	}

	void updateScore () {
	    if(score > -1) {
	        hitCount.text = "Dragon Life : "+ score;
	    }
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
                score--;
                updateScore();
                if(hits < 5) {
                animator.SetTrigger("dizzy");
                dizzyAudio.Play();
                }
                else {
                    animator.SetTrigger("die");
                    Destroy (gameObject, 0.75f);
                    eggCount.text = "You Win!";
                    gameController.restartLevel();
                    dieAudio.Play();
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
