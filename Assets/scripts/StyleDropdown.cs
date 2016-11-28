using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StyleDropdown : MonoBehaviour {

	Dropdown dropdown;

	void Start () {
		dropdown = gameObject.GetComponent<Dropdown>();
		UpdateValue();
	}
	void UpdateValue () {
		dropdown.value = PlayerPrefs.GetInt("NodeType");
	}
}
