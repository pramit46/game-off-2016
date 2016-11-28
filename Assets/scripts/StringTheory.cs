using UnityEngine;
using System.Collections;

public class StringTheory : MonoBehaviour, IUntieable {

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
	public Material bond;
	public Transform sprite;

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
		spriteRenderer = gameObject.GetComponentInChildren<SpriteRenderer>();
		rb = gameObject.GetComponent<Rigidbody>();
		SetupJoint();
		MainCamera.numberOfNodes += 1;
		lastPosition = transform.position;
		lastUntied = false;
		foreach (Transform child in transform) {
			if (child.name == "sprite") {
				sprite = child;
			} else if (child.name == "collider"){
				child.name = "coll" + nodeNumber;
			}
		}
		sprite.localScale = new Vector3(0.4f, 0.4f, 0.4f);
		sprite.localPosition = new Vector3(0f,0f,0.1f);
		ColorScale();
		DrawLine();
		ScaleIncrease();
	}

	void Update () {
		ColorScale();
		DrawLine();
		StopJiggle();
		#if UNITY_ANDROID || UNITY_IOS
			ResetDrag();
		#endif
		lastPosition = transform.position;
		lastUntied = untied;
		transform.rotation = Quaternion.Euler(0f, 0f, transform.rotation.eulerAngles.z);
		ScaleIncrease();
	}

	void FixedUpdate () {
		Draggable();
	}

	void ScaleIncrease() {
		float max = 1.9f;
		float min = 1.2f;
		float tiedMax = 2.2f;
		float increment = 0.05f;
		float interval = 3f;
		if (untied == true) {
			float scale = waveScale(interval, MainCamera.frame, min, max);
			if (scale >= max * 0.99) {
				spriteRenderer.color = Color.white;
			} else {
				ColorScale();
			}
			sprite.localScale = new Vector3(scale, scale, scale);
		} else {
			if (sprite.localScale[0] < (tiedMax)) {
				sprite.localScale += new Vector3(increment, increment, increment);
			} else if (sprite.localScale[0] > (tiedMax)) {
				sprite.localScale += new Vector3(-increment, -increment, -increment);
			}
		}
		if (previousNode) {
			lineRenderer.SetWidth(sprite.localScale[0]/2.5f, previousNode.GetComponent<StringTheory>().sprite.localScale[0]/2.5f);
		}
		transform.position += new Vector3(Random.Range(-0.01f, 0.01f), Random.Range(-0.01f, 0.01f), 0f);
	}

	float waveScale(float interval, float frame, float min, float max) {
		float x = (frame - nodeNumber)/interval;
		float editedCurve = ((Mathf.Sin(x) + 1)/2);
		return editedCurve * (max - min) + min;
	}

	bool Moved () {
		if ((lastPosition - transform.position).magnitude > 0.0001f) {
			return true;
		} else {
			return false;
		}
	}

	void DrawLine () {
		if (previousNode) {
			Vector3 start = gameObject.transform.position;
			start.z -= 0.5f;
			Vector3 end = previousNode.transform.position;
			end.z -= 0.5f;
	    lineRenderer.SetPosition(0, start);
			lineRenderer.SetPosition(1, end);
			lineRenderer.SetColors(spriteRenderer.color, previousNode.GetComponentInChildren<SpriteRenderer>().color);
			lineRenderer.material = bond;
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
			// spriteRenderer.color = Color.Lerp(ColorPicker(175f,175f,175f), Color.white, Mathf.InverseLerp(zMax, zMin, gameObject.transform.position.z));
			spriteRenderer.color = Color.Lerp(ColorPicker(100f,128f,128f), Color.white, Mathf.InverseLerp(zMax, zMin, gameObject.transform.position.z));
			gameObject.layer = LayerMask.NameToLayer("Default");
			foreach (Transform child in transform) {
				if (child.name != "collider") {
					child.gameObject.layer = LayerMask.NameToLayer("Default");
				}
			}
		} else {
			spriteRenderer.color = Color.Lerp(ColorPicker(100f,128f,128f), Color.white, Mathf.InverseLerp(zMax, zMin, gameObject.transform.position.z));
			gameObject.layer = LayerMask.NameToLayer("String Theory Hidden");
			foreach (Transform child in transform) {
				if (child.name != "collider") {
					child.gameObject.layer = LayerMask.NameToLayer("String Theory Hidden");
				}
			}
		}
	}

	void SetupJoint () {
		if (previousNode) {
			ConfigurableJoint joint = gameObject.GetComponent<ConfigurableJoint>();
			joint.connectedBody = previousNode.GetComponent<Rigidbody>();
			joint.autoConfigureConnectedAnchor = false;
			SoftJointLimit temp = joint.linearLimit;
			temp.limit = 0.6f;
			joint.linearLimit = temp;
		}
	}

	void StopJiggle () {
		if (sleeping == false) {
			if (rb.velocity.magnitude < 0.15f) {
				sleeping = true;
				MainCamera.jigglers -= 1;
			} else {
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

	Color ColorPicker(float r, float g, float b, float a = 1.0f) {
		return new Color(r/255f, g/255f, b/255f, a);
	}

}
