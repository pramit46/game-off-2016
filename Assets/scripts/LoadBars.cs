using UnityEngine;
using System.Collections;

public class LoadBars : MonoBehaviour {

	GameObject lightBar;
	GameObject darkBar;
	int totalExpectedNodes;
	BezierCurve bezier;

	void Start () {
		gameObject.SetActive(true);
		lightBar = GameObject.Find("LoadBarLight");
		darkBar = GameObject.Find("LoadBarDark");
		totalExpectedNodes = 0;
		for (int j = 1; j <= MainCamera.curveCount; j++) {
			bezier = GameObject.Find("BezierCurve" + j).GetComponent<BezierCurve>();
			totalExpectedNodes += (int)(bezier.length/MainCamera.nodeSpace[MainCamera.nodeType]);
		}
	}

	void Update () {
		if (MainCamera.setupFinished == false) {
			float left = Mathf.Lerp(0.25f, 0.75f, Mathf.InverseLerp(totalExpectedNodes, 0, totalExpectedNodes-MainCamera.nodeCount));
			float right = Mathf.Lerp(0.25f, 0.75f, Mathf.InverseLerp(totalExpectedNodes, 0, totalExpectedNodes-MainCamera.nodeCount));
			lightBar.GetComponent<RectTransform>().anchorMax = new Vector2(right, lightBar.GetComponent<RectTransform>().anchorMax.y);
			darkBar.GetComponent<RectTransform>().anchorMin = new Vector2(left, darkBar.GetComponent<RectTransform>().anchorMin.y);
		} else {
			gameObject.SetActive(false);
		}
	}
}
