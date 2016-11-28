using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Droplet : MonoBehaviour {

	void Start () {
		if (Random.value >= 0.5) {
			Vector3 reverse = transform.localScale;
			reverse.x *= -1;
			transform.localScale = reverse;
		}
		foreach (Transform child in transform) {
			if (child.name == "droplet sprite") {
				Destroy(gameObject, child.gameObject.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length);
			}
		}
	}

	void Update () {

	}
}
