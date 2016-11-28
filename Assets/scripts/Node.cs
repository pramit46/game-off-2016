using UnityEngine;
using System.Collections;

public class Node : MonoBehaviour, IUntieable {

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

	void Start () {
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
		line = GameObject.Find("line" + nodeNumber);
		lineRenderer = line.GetComponent<LineRenderer>();
		spriteRenderer = gameObject.GetComponent<SpriteRenderer>();
		rb = gameObject.GetComponent<Rigidbody>();
		SetupJoint();
		MainCamera.numberOfNodes += 1;
		lastPosition = transform.position;
		lastUntied = false;
		transform.localScale = new Vector3(0.4f, 0.4f, 0.4f);
		ColorScale();
		DrawLine();
		ScaleIncrease();
	}

	void ScaleIncrease() {
		float increment = 0.05f;
		if (transform.localScale[0] < 1.2f) {
			transform.localScale += new Vector3(increment, increment, increment);
			if (previousNode) {
				lineRenderer.SetWidth(previousNode.transform.localScale[0]/3, transform.localScale[0]/3);
			}
		}
	}

	bool Moved () {
		if ((lastPosition - transform.position).magnitude > 0.0001f) {
			return true;
		} else {
			return false;
		}
	}

	void Update () {
		if (Moved() || lastUntied != untied) {
			ColorScale();
			DrawLine();
		}
		ScaleIncrease();
		StopJiggle();
		#if UNITY_ANDROID || UNITY_IOS
			ResetDrag();
		#endif
		lastPosition = transform.position;
		lastUntied = untied;
		transform.rotation = Quaternion.Euler(0f, 0f, transform.rotation.eulerAngles.z);
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
		if (untied == true) {
			spriteRenderer.color = Color.Lerp(new Color(255.0f/255.0f, 213.0f/255.0f, 0.0f/255.0f, 1.0f), Color.white, Mathf.InverseLerp(zMax, zMin, gameObject.transform.position.z));
		} else {
			spriteRenderer.color = Color.Lerp(Color.black, new Color(115.0f/255.0f, 226.0f/255.0f, 255.0f/255.0f, 1.0f), Mathf.InverseLerp(zMax, zMin, gameObject.transform.position.z));
		}
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

}
