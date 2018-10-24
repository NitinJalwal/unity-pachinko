using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameController : MonoBehaviour {
    public GameObject pin;
    public Vector2 spawnValues;
    public Transform pinSpawn;
    public int pinCount = 20;
    public int rows = 4;
    public Text restartText;
    private bool restart;



	// Use this for initialization
	void Start () {
	    int col = pinCount/rows;
	    float xOffset = 2 * spawnValues.x/col;
	    float yOffset = 2 * spawnValues.y/rows;
	    float offset = 0.6f;
	    float initialY =  -spawnValues.y + offset;

	    for(int i = 0; i<rows; i++){
	        float initialX = -spawnValues.x + offset;
	        offset *= -1;
	        for(int j = 0; j<col; j++){
	            Vector2 spawnPosition = new Vector2(initialX, initialY);
	            Instantiate(pin, spawnPosition, pin.transform.rotation);
	            initialX += xOffset;
	        }
	        initialY += yOffset;
	    }

        restart = false;
        restartText.text = "";

	}

	void Update() {
        if (restart)
        {
            if (Input.GetKeyDown (KeyCode.R))
            {
                Application.LoadLevel (Application.loadedLevel);
            }
        }
	}



	// Update is called once per frame
	public void restartLevel () {
	        restart = true;
            restartText.text = "Press R to restart the game";
	}
}
