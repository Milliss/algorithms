using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Char : MonoBehaviour {
    // public  score_test;
    // Use this for initialization
    public Text Text2;
    public float score;
	void Start () {
		
	}
    void OnCollisionEnter(Collision collision)
    {

        if (collision.gameObject.name == "coin")
        {
            Destroy(collision.gameObject);
            score += 100;
            Text2.text = score.ToString();
        }
        if (collision.gameObject.name == "Portal1")
        {
           
            gameObject.transform.localPosition = new Vector3(498.7438F, 0.09998041F, 498.4573F); //起點
        }


        // Destroy(collision.gameObject);
    }
    // Update is called once per frame
    void Update () {
		
	}
}