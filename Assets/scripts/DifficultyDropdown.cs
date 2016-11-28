using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DifficultyDropdown : MonoBehaviour {

	Dropdown dropdown;

	void Start () {
		dropdown = gameObject.GetComponent<Dropdown>();
		UpdateValue();
	}
	void UpdateValue () {
		switch (PlayerPrefs.GetInt("Difficulty")) {
			case 0:
				dropdown.value = PlayerPrefs.GetInt("Difficulty");
				break;
			case 1:
				dropdown.value = PlayerPrefs.GetInt("Difficulty");
				break;
			case 2:
				dropdown.value = PlayerPrefs.GetInt("Difficulty");
				break;
		}
	}

	public int DifficultyScale (int i) {
		switch (i) {
			case 0:
				return 5;
			case 1:
				return 10;
			case 2:
				return 15;
			default:
				return 15;
		}
	}
}
