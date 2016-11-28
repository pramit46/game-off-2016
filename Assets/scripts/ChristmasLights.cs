using UnityEngine;
using System.Collections;

public class ChristmasLights : MonoBehaviour, IUntieable {

	public bool Drag {
		get {return drag;}
		set {drag = value;}
	}
	public bool drag;
	bool endNode;
	public int touchIndex;
	public GameObject PreviousNode {
		get {return previousNode;}
		set {previousNode = value;}
	}
	public GameObject previousNode;
	GameObject line;
	public int nodeNumber;
	float zMax;
	float zMin;
	private bool sleeping;
	public bool Sleeping {
		get {return sleeping;}
		set {sleeping = value;}
	}
	public bool initalSleep;
	private bool untied;
	public bool Untied {
		get {return untied;}
		set {untied = value;}
	}
	LineRenderer lineRenderer;
	SpriteRenderer spriteRenderer;
	Rigidbody rb;
	Vector3 lastPosition;
	bool lastUntied;
	public GameObject bulb;
	Color[] colors;
	Color bulbColor;
	GameObject bulbPrefab;
	GameObject mainCamera;
	GameObject node1;


	void Start () {
		mainCamera = GameObject.Find("Main Camera");
		colors = new Color[]{ColorPicker(216f, 15f, 15f), ColorPicker(54f, 193f, 0f), ColorPicker(255f, 208f, 0f), ColorPicker(0f, 122f, 193f)};
		bulbColor = colors[Random.Range(0,colors.Length)];
		if (gameObject.name == "node0") {
			Destroy(gameObject.GetComponent<ConfigurableJoint>());
		}
		untied = false;
		drag = false;
		touchIndex = 0;
		zMax = 2.5f;
		zMin = -2.5f;
		sleeping = false;
		initalSleep = false;
		nodeNumber = int.Parse(gameObject.name.Substring(4));
		if (nodeNumber % 2 == 0) {
			bulbPrefab = Instantiate(bulb, gameObject.transform.position, gameObject.transform.rotation) as GameObject;
			bulbPrefab.name = "bulb" + nodeNumber;
			bulbPrefab.transform.parent = gameObject.transform;
			// bulbPrefab.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
			bulbPrefab.GetComponent<SpriteRenderer>().color = bulbColor;
		}
		line = GameObject.Find("line" + nodeNumber);
		lineRenderer = line.GetComponent<LineRenderer>();
		spriteRenderer = gameObject.GetComponent<SpriteRenderer>();
		rb = gameObject.GetComponent<Rigidbody>();
		SetupJoint();
		MainCamera.numberOfNodes += 1;
		lastPosition = transform.position;
		lastUntied = false;
		// transform.localScale = new Vector3(0.4f, 0.4f, 0.4f);
		ColorScale();
		DrawLine();
		// ScaleIncrease();
	}

	void Update () {
		if (Moved() || lastUntied != untied) {
			ColorScale();
			DrawLine();
		}
		// ScaleIncrease();
		StopJiggle();
		#if UNITY_ANDROID || UNITY_IOS
			ResetDrag();
		#endif
		lastPosition = transform.position;
		lastUntied = untied;
		if (gameObject.name != "node0") {
			Vector3 v = transform.position - previousNode.transform.position;
  		transform.rotation = Quaternion.FromToRotation(Vector3.right, v);
		} else {
			if (node1) {
				Vector3 v = transform.position - node1.transform.position;
	  		transform.rotation = Quaternion.FromToRotation(Vector3.right, v);
			} else {
				node1 = GameObject.Find("node1");
			}
		}
		transform.rotation = Quaternion.Euler(0f, 0f, transform.rotation.eulerAngles.z);
	}

	bool Moved () {
		if ((lastPosition - transform.position).magnitude > 0.0001f) {
			return true;
		} else {
			return false;
		}
	}

	void FixedUpdate () {
		Draggable();
	}

	void DrawLine () {
		if (previousNode) {
			Vector3 start = gameObject.transform.position;
			Vector3 end = previousNode.transform.position;

	    lineRenderer.SetPosition(0, start);
			lineRenderer.SetPosition(1, end);
			float size = gameObject.transform.localScale.x * 0.33f;
			lineRenderer.startWidth = size;
			lineRenderer.endWidth = size;
			lineRenderer.SetColors(spriteRenderer.color, previousNode.GetComponent<SpriteRenderer>().color);
		} else {
			Destroy(line);
		}
	}

	void Draggable () {
		if (drag && MainCamera.setupFinished) {
			Vector3 pos;
			Vector3 inputPos;
			#if UNITY_ANDROID || UNITY_IOS
				inputPos = Input.GetTouch(touchIndex).position;
			#endif
			#if UNITY_STANDALONE
				inputPos = Input.mousePosition;
			#endif
			Vector3 touchPosition = Camera.main.ScreenToWorldPoint(inputPos);
			touchPosition.z = gameObject.transform.position.z;
			pos = Vector3.Lerp(touchPosition,gameObject.transform.position, 0.0f);
			gameObject.GetComponent<Rigidbody>().MovePosition(pos);
		}
	}

	void ColorScale () {
		if (untied == true || nodeNumber == 2) {
			if (nodeNumber % 2 == 0) {
				bulbPrefab.GetComponent<SpriteRenderer>().color = Color.Lerp(Color.white, bulbColor, 0.8f);
			}
			// spriteRenderer.color = Color.Lerp(Color.black, Color.gray, Mathf.InverseLerp(zMax, zMin, gameObject.transform.position.z));
		} else {
			if (nodeNumber % 2 == 0) {
				bulbPrefab.GetComponent<SpriteRenderer>().color = Color.Lerp(Color.black, bulbColor, 0.2f);
			}
		}
		spriteRenderer.color = Color.Lerp(Color.black, ColorPicker(0f, 80f, 25f), Mathf.InverseLerp(zMax, zMin, gameObject.transform.position.z));
	}

	void SetupJoint () {
		if (previousNode) {
			ConfigurableJoint joint = gameObject.GetComponent<ConfigurableJoint>();
			joint.connectedBody = previousNode.GetComponent<Rigidbody>();
			joint.autoConfigureConnectedAnchor = false;
		}
	}

	void StopJiggle () {
		if (sleeping == false) {
			if (rb.velocity.magnitude < 0.15f) {
				sleeping = true;
				MainCamera.jigglers -= 1;
			} else {
				// gameObject.GetComponent<SpriteRenderer>().color = Color.red;
				if (MainCamera.generationFinished && MainCamera.frame % 40 == 0 && MainCamera.jigglers <= 100) {
					rb.MovePosition(gameObject.transform.position + new Vector3(0.25f, 0.25f, 0.25f));
				}
			}
		}
	}

	void StartNode () {
		if (nodeNumber == 0) {
			rb.MovePosition(new Vector3(0.0f, 0.0f, 3.0f));
		}
	}

	public void EndNode () {
		endNode = true;
	}

	void ResetDrag () {
		if (Input.touchCount == 0) {
			drag = false;
			MainCamera.dragging = false;
		}
	}
	#if UNITY_STANDALONE
	void OnMouseDown() {
		drag = true;
	}
	#endif

	#if UNITY_STANDALONE
	void OnMouseUp() {
		drag = false;
	}
	#endif


	Color ColorPicker(float r, float g, float b) {
		return new Color(r/255f, g/255f, b/255f);
	}

}
