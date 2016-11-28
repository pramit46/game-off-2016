using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityStandardAssets.ImageEffects;


public class MainCamera : MonoBehaviour {
	public GameObject[] prefabs;

	GameObject nodePrefab;
	public GameObject winText;
	public static int expectedNumberOfNodes;
	public static int numberOfNodes;
	public static bool untied;
	public static bool setupFinished;
	public static bool generationFinished;
	public static int jigglers;
	public static int frame;
	public float orthoZoomSpeed;
	public static bool dragging;
	BezierCurve bezier;
	bool won;
	public List<GameObject> nodeList;
	DifficultyDropdown difficultyDropdown;
	public static int nodeType;
	int winDelay;
	public static int curveCount;
	public static int nodeCount;
	int branchNode;
	float lengthModifier;
	public static float[] nodeSpace;
	public Material[] materialList;
	GameObject blurCam;
	GameObject background;
	public Material paper2;
	public Material stringTheoryBlur;
	public GameObject faucet;
	public GameObject snow;

	void Start () {
		nodeSpace = new float[]{0.25f, 0.25f, 0.25f, 0.5f, 0.25f, 0.25f};
		nodeType = PlayerPrefs.GetInt("NodeType");
		lengthModifier = 1f;
		blurCam = GameObject.Find("Blur Cam");
		background = GameObject.Find("Background");
		background.GetComponent<MeshRenderer>().material = materialList[nodeType];
		if (nodeType == 3) {
			blurCam.SetActive(true);
		} else {
			blurCam.SetActive(false);
		}
		if (nodeType == 5) {
			Instantiate(faucet, Vector3.zero, Quaternion.identity);
		}
		difficultyDropdown = GameObject.Find("DifficultyDropdown").GetComponent<DifficultyDropdown>();
		nodeList = new List<GameObject>();
		won = false;
		setupFinished = false;
		generationFinished = false;
		untied = false;
		jigglers = 0;
		frame = 0;
		numberOfNodes = 0;
		winDelay = 0;
		if (!PlayerPrefs.HasKey("knotsUntied")) {
			PlayerPrefs.SetInt("knotsUntied", 0);
		}
		Bloom();
		LengthModifier();
		curveCount = 0;
		nodeCount = 0;
		if (nodeType == 1) {
			Instantiate(snow, new Vector3(0f,7f,0f), Quaternion.Euler(-90,0,0));
		}
		GameObject bezier = RandomCurve(Vector3.zero, (int)(difficultyDropdown.DifficultyScale(PlayerPrefs.GetInt("Difficulty"))*lengthModifier));
		if (nodeType == 2) {
			int secondPointsCount = (int)Mathf.Round(difficultyDropdown.DifficultyScale(PlayerPrefs.GetInt("Difficulty"))*lengthModifier * 0.4f);
			if (secondPointsCount < 2) {
				secondPointsCount = 2;
			}
			Headphones.earbudCount = 0;
			RandomCurve((Vector3)bezier.GetComponent<BezierCurve>().GetPointAt(0.66f), secondPointsCount);
			branchNode = (int)((bezier.GetComponent<BezierCurve>().length/0.25f)*0.66);
		}
		StartCoroutine("GenerateString");
	}

	void Update () {
		if (frame == 1) {
			jigglers = numberOfNodes;
		}
		if (setupFinished) {
			#if UNITY_ANDROID || UNITY_IOS
				TouchCheck();
			#endif
			UntiedCheck();
		}
		SetupFinishedCheck();
		untied = false;
		frame += 1;
	}

	IEnumerator GenerateString () {
		for (int j = 1; j <= curveCount; j++) {
			bezier = GameObject.Find("BezierCurve" + j).GetComponent<BezierCurve>();
			expectedNumberOfNodes = (int)(bezier.length/nodeSpace[nodeType]);
			GameObject previousNode = null;
			nodePrefab = prefabs[nodeType];

			for (int i = 0; i < expectedNumberOfNodes; i++) {
				Vector3? loc = bezier.GetPointAt((i)/(float)expectedNumberOfNodes);
				if (loc == null) {
					NodeScript(previousNode).EndNode();
					yield return null;
				} else {
					GameObject prefab = Instantiate(nodePrefab, (Vector3)loc, Quaternion.identity) as GameObject;
					prefab.name = "node" + nodeCount;
					if (nodeType == 2 && j == 2 && i == 0) {   //first node of second branch
						prefab.GetComponent<Headphones>().previousNode = GameObject.Find("node" + branchNode);
					}
					if (previousNode) {
						NodeScript(prefab).PreviousNode = previousNode;
					}
					if (i == expectedNumberOfNodes - 1) {
						NodeScript(prefab).EndNode();
					}
					GameObject lineObject = new GameObject("line" + nodeCount);
					LineRenderer line = lineObject.AddComponent<LineRenderer>();
					line.transform.parent = prefab.transform;
		     	line.SetWidth(0.4F, 0.4F);
					line.material = new Material(Shader.Find("Sprites/Default"));
			    line.SetColors(Color.white, Color.white);
			   	line.SetVertexCount(2);
					nodeList.Add(prefab);
					yield return null;
					previousNode = prefab;
					nodeCount++;
				}
			}
		}
		generationFinished = true;
	}

	GameObject RandomCurve (Vector3 startPoint, int pointsCount) {
		curveCount++;
		float handleMagnitude = 3.0f;
		float pointDistance = (float)difficultyDropdown.DifficultyScale(PlayerPrefs.GetInt("Difficulty"))/30;
		GameObject curve = Instantiate(GameObject.Find("BezierCurveTemp"), Vector3.zero, Quaternion.identity);
		curve.name = "BezierCurve" + curveCount;
		BezierCurve bezier = curve.GetComponent<BezierCurve>();
		BezierPoint[] points = bezier.GetAnchorPoints();
		for (int i = 0; i < 4; i++) {
			bezier.RemovePoint(points[i]);
		}
		Vector3 lastPointPos = new Vector3(0.0f, 0.0f, 0.0f);
		for (int i = 0; i < pointsCount; i++) {
			BezierPoint point;
			if (i == 0) {
				point = bezier.AddPointAt(startPoint);
			} else {
				point = bezier.AddPointAt(new Vector3(Random.Range(pointDistance, -pointDistance), Random.Range(pointDistance, -pointDistance), Random.Range(pointDistance, -pointDistance)) + startPoint);
			}
			point.handle1 = new Vector3(Random.Range(handleMagnitude, -handleMagnitude), Random.Range(handleMagnitude, -handleMagnitude), Random.Range(handleMagnitude, -handleMagnitude));
			lastPointPos = point.transform.position;
		}
		return curve;
	}

	void SetupFinishedCheck () {
		if (generationFinished && setupFinished == false) {
			setupFinished = true;
			foreach (GameObject node in nodeList) {
				if (node != null) {
					if (NodeScript(node).Sleeping == false) {
						setupFinished = false;
					}
				}
			}
		}
	}

	#if UNITY_ANDROID || UNITY_IOS
		void TouchCheck () {
			if (setupFinished) {
				RaycastHit hit = new RaycastHit();
				if (Input.touchCount > 0) {
					Touch touch = Input.GetTouch(0);
					if (touch.phase == TouchPhase.Began) {
						Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
						if (Physics.Raycast(ray, out hit, 50.0f)) {
							if (nodeType == 3 || nodeType == 5) {
								NodeScript(hit.collider.transform.parent.gameObject).Drag = true;
							} else {
								NodeScript(hit.collider.gameObject).Drag = true;
							}
							dragging = true;
						}
					}
				} else {
					MainCamera.dragging = false;
				}
			}
		}
	#endif

	void UntiedCheck () {
		RaycastHit hit;
		untied = true;

		foreach (GameObject node in nodeList) {
			NodeScript(node).Untied = true;
			int nodeNumber = int.Parse(node.name.Substring(4));
			int layerMask = 1 << 10;
			layerMask = ~layerMask;
			if (untied) {
				int collisionNode = -1;
				if (Physics.Raycast(node.transform.position, new Vector3(0.0f, 0.0f, 1.0f), out hit, 25.0f, layerMask)) {
					collisionNode = int.Parse(hit.collider.gameObject.name.Substring(4));
				} else if (Physics.Raycast(node.transform.position, new Vector3(0.0f, 0.0f, -1.0f), out hit, 25.0f, layerMask)) {
					collisionNode = int.Parse(hit.collider.gameObject.name.Substring(4));
				}
				if (collisionNode != -1 && collisionNode != nodeNumber + 1 && collisionNode != nodeNumber - 1) { //make this range larger than just a node's first neighbors. Make it go to two neighbors on either side.
					NodeScript(node).Untied = false;
					untied = false;
					winDelay = 0;
				}
			} else {
				NodeScript(node).Untied = false;
				winDelay = 0;
			}
		}
		if (untied && !won) {
			if (winDelay > 5) {
				int prev = PlayerPrefs.GetInt("knotsUntied");
				PlayerPrefs.SetInt("knotsUntied", prev + 1);
				won = true;
				PlayerPrefs.Save();
				WinText();
			}
			winDelay++;
		}
	}

	void WinText () {
		string[] winTextList = new string[]{"Great Job!", "Wow!", "Sweet Untie!", "Oh, Cool!", "Awesome!", "Another One!", "Was that fun?"};
		GameObject winPrefab = Instantiate(winText, new Vector3(0f,0f,0f), Quaternion.identity) as GameObject;
		winPrefab.GetComponentInChildren<Text>().text = winTextList[Random.Range(0,winTextList.Length)];
		Text current = GameObject.Find("WinTextKnotsUntiedInt").GetComponent<Text>();
		Text next = GameObject.Find("WinTextKnotsUntiedIntNew").GetComponent<Text>();
		int knotsUntied = PlayerPrefs.GetInt("knotsUntied");
		current.text = (knotsUntied - 1).ToString();
		next.text = knotsUntied.ToString();
		winPrefab.GetComponent<Animator>().Play("wintext");
	}

	IUntieable NodeScript (GameObject node) {
		switch (nodeType) {
			case 0:
				return ((IUntieable) node.GetComponent<Node>());
			case 1:
				return ((IUntieable) node.GetComponent<ChristmasLights>());
			case 2:
				return ((IUntieable) node.GetComponent<Headphones>());
			case 3:
				return ((IUntieable) node.GetComponent<StringTheory>());
			case 4:
				return ((IUntieable) node.GetComponent<Sausages>());
			case 5:
				return ((IUntieable) node.GetComponent<GardenHose>());
			default:
				return ((IUntieable) node.GetComponent<Node>());
		}
	}

	void Bloom () {
		BloomOptimized bloom = gameObject.GetComponent<BloomOptimized>();
		switch (nodeType) {
			case 0:
				bloom.threshold = 0.8f;
				break;
			case 1:
				bloom.threshold = 0.3f;
				break;
			case 2:
				bloom.threshold = 1.0f;
				break;
			case 3:
				bloom.threshold = 0.3f;
				break;
			case 4:
				bloom.threshold = 1.0f;
				break;
			default:
				bloom.threshold = 0.8f;
				break;
		}
	}

	void LengthModifier () {
		switch (nodeType) {
			case 2:
				lengthModifier = 0.8f;
				break;
			case 5:
				lengthModifier = 0.8f;
				break;
			default:
				lengthModifier = 1.0f;
				break;
		}
	}

}
