using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuButtons : MonoBehaviour {

	GameObject menuPanel;
	GameObject openMenuButton;
	GameObject setupPanel;
	GameObject knotsUntiedInt;

	void Start () {
		setupPanel = GameObject.Find("SetupPanel");
		menuPanel = GameObject.Find("MenuPanel");
		openMenuButton = GameObject.Find("OpenMenuButton");
		if (menuPanel) {
			menuPanel.SetActive(false);
		}
	}

	void Update () {
		if (GameObject.Find("MenuPanel")) {
			KnotsUntied();
		}
	}

	public void OpenMenu () {
		menuPanel.SetActive(true);
		openMenuButton.SetActive(false);
		Animation anim = menuPanel.GetComponent<Animation>();
		anim["menuOpen"].speed = 0.8f;
		anim["menuOpen"].time = 0;
		anim.Play("menuOpen");
	}

	public void CloseMenu () {
		Animation anim = menuPanel.GetComponent<Animation>();
		// anim["menuClose"].speed = 0.8f;
		// anim["menuClose"].time = 0;
		anim.Play("menuClose");
		StartCoroutine(WaitToClose(anim));
	}

	IEnumerator WaitToClose ( Animation animation ){
	    while ( animation.isPlaying ){
	        yield return null;
	    }
			menuPanel.SetActive(false);
			openMenuButton.SetActive(true);
	}

	public void NewKnot () {
		if (setupPanel) {
			setupPanel.SetActive(true);
		}
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
	}

	public void KnotsUntied () {
		knotsUntiedInt = GameObject.Find("KnotsUntiedInt");
		if (knotsUntiedInt) {
			knotsUntiedInt.GetComponent<Text>().text = PlayerPrefs.GetInt("knotsUntied").ToString();
		}
	}
	public void Difficulty (int i) {
		PlayerPrefs.SetInt("Difficulty", i);
		PlayerPrefs.Save();
	}

	public void NodeType (int i) {
		PlayerPrefs.SetInt("NodeType", i);
		PlayerPrefs.Save();
	}
}
