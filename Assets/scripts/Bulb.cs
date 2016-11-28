using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bulb : MonoBehaviour {

	float lockPos = 0;
	int bulbNumber;

	void Start () {
		bulbNumber = int.Parse(gameObject.name.Substring(4));
	}

	void Update () {
		transform.rotation = gameObject.transform.parent.transform.rotation;
		if (bulbNumber % 4 == 0 && bulbNumber != 0) {
			transform.eulerAngles = transform.eulerAngles + new Vector3(0f, 0f, 180f);
		}
	}

	void OnMouseDown () {
		gameObject.transform.parent.GetComponent<ChristmasLights>().Drag = true;
	}

	void OnMouseUp () {
		gameObject.transform.parent.GetComponent<ChristmasLights>().Drag = false;
	}
}
