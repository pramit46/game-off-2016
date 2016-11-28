using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightSource : MonoBehaviour {

	int nodeType;
	int lightNumber;

	void Start () {
		lightNumber = int.Parse(gameObject.name.Substring(5));
		switch (MainCamera.nodeType) {
			case 0:
				if (lightNumber == 1) {
					gameObject.GetComponent<Light>().color = ColorPicker(2f, 0f, 54f);
				} else {
					gameObject.GetComponent<Light>().color = ColorPicker(133f, 133f, 133f);
				}
				break;
			case 1:
				if (lightNumber == 1) {
					gameObject.GetComponent<Light>().color = ColorPicker(0f, 0f, 0f);
				} else {
					gameObject.GetComponent<Light>().color = ColorPicker(50f, 50f, 50f);
				}
				break;
			case 2:
				if (lightNumber == 1) {
					gameObject.GetComponent<Light>().color = ColorPicker(0f, 0f, 0f);
				} else {
					gameObject.GetComponent<Light>().color = ColorPicker(200f, 200f, 200f);
				}
				break;
			case 3:
				if (lightNumber == 1) {
					gameObject.GetComponent<Light>().color = ColorPicker(255f,255f,255f);
					// gameObject.GetComponent<Light>().intensity = 0f;
				} else {
					gameObject.GetComponent<Light>().color = ColorPicker(255f,255f,255f);
					// gameObject.GetComponent<Light>().intensity = 0f;
				}
				break;
			case 4:
				if (lightNumber == 1) {
					gameObject.GetComponent<Light>().color = ColorPicker(241f,205f,142f);
				} else {
					gameObject.GetComponent<Light>().color = ColorPicker(195f,118f,24f);
				}
				break;
			case 5:
				if (lightNumber == 1) {
					gameObject.GetComponent<Light>().color = ColorPicker(0f, 0f, 0f);
				} else {
					gameObject.GetComponent<Light>().color = ColorPicker(200f, 200f, 200f);
				}
				break;
		}
	}

	Color ColorPicker(float r, float g, float b) {
		return new Color(r/255f, g/255f, b/255f);
	}
}
