using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class copterMotion : MonoBehaviour {
    private Rigidbody2D coptor;
    public float speed;
    Vector2 direction = new Vector2(1.0f, 0.0f);

    public GameObject egg;
    public Transform eggSpawn;
    private float nextFire = 0.0f;
    private float fireDelta = 0.5f;

    public Text eggCount;
    public int score = 50;
    private GameController gameController;


	// Use this for initialization
	void Start () {
        updateScore();
        GameObject gameControllerObject = GameObject.FindWithTag ("GameController");
        if (gameControllerObject != null)
                {
                    gameController = gameControllerObject.GetComponent <GameController>();
                }
                if (gameController == null)
                {
                    Debug.Log ("Cannot find 'GameController' script");
                }
	}

	// Update is called once per frame
	void Update () {
	    coptor = GetComponent<Rigidbody2D>();
        coptor.velocity = direction * speed;
        if (Input.GetButtonDown("Jump") && Time.time > nextFire && score > 0)
        {
            nextFire = Time.time + fireDelta;
            Instantiate(egg, eggSpawn.position, eggSpawn.rotation);
            score--;
            updateScore();
        }
	}

	void FixedUpdate () {

	}

	void OnTriggerExit2D(Collider2D other)
    {

        if (other.tag == "gameArea") {

            direction *= -1;

            // Multiply the player's x local scale by -1.
            Vector3 theScale = transform.localScale;
            theScale.x *= -1;
            transform.localScale = theScale;
        }
    }

	void updateScore () {
	    eggCount.text = "Egg Count : "+ score;

	    if(score == 0) {
	        eggCount.text = "Game Over!";
	        gameController.restartLevel();
	    }
	}
}
