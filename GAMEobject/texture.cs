using UnityEngine;
using System.Collections;

public class Guitexturesize : MonoBehaviour {

	public Vector2 oriScale = new Vector2(1440.0f, 900.0f);
	
	void Start () {
		GUITexture[] guis = FindObjectsOfType(typeof(GUITexture)) as GUITexture[];
		Vector2 size = new Vector2();
		size.x = Screen.width / oriScale.x;
		size.y = Screen.height / oriScale.y;
		foreach(GUITexture gui in guis)
		{
			gui.pixelInset = new Rect(gui.pixelInset.x * size.x, gui.pixelInset.y * size.y, gui.pixelInset.width * size.x, gui.pixelInset.height * size.y);
		}
	}
}
