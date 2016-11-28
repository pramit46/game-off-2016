using UnityEngine;
using System.Collections;

public class GardenHose : MonoBehaviour, IUntieable {

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
	public Transform sprite;
	public GameObject droplet;
	public Sprite nozzle;
	Vector3? initialPos;
	Quaternion? initialRot;
	public GameObject endNodePrefab;

	void Start () {
		initialPos = null;
		initialRot = null;
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
		ColorScale();
		if (previousNode) {
			DrawLine(gameObject.transform.position, previousNode.transform.position, spriteRenderer.color, previousNode.GetComponentInChildren<SpriteRenderer>().color);
		} else {
			DrawLine(gameObject.transform.position, Vector3.zero, spriteRenderer.color, spriteRenderer.color);
		}
		ScaleIncrease();
	}

	void Update () {
		ColorScale();
		if (previousNode) {
			if (endNode) {
				DrawLine(gameObject.transform.position, previousNode.transform.position, previousNode.GetComponentInChildren<SpriteRenderer>().color, previousNode.GetComponentInChildren<SpriteRenderer>().color);
			} else {
				DrawLine(gameObject.transform.position, previousNode.transform.position, spriteRenderer.color, previousNode.GetComponentInChildren<SpriteRenderer>().color);
			}
		} else {
			DrawLine(gameObject.transform.position, Vector3.zero, spriteRenderer.color, spriteRenderer.color);
		}
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
		float max = 2.4f;
		float min = 1.2f;
		float tiedMax = 1.2f;
		float increment = 0.05f;
		float interval = 3f;
		if (untied == true && !endNode) {
			float scale = waveScale(interval, Mathf.Floor(MainCamera.frame/2f), min, max);
			if (scale >= max * 0.995) {
				if (nodeNumber % 10 == 0) {
					GameObject dropletPrefab = Instantiate(droplet, transform.position, Quaternion.identity);
				}
				scale *= 1.1f;
				sprite.localScale = new Vector3(scale, scale, scale);
			} else {
				sprite.localScale = new Vector3(1.5f, 1.5f, 1.5f);
			}
			transform.position += new Vector3(Random.Range(-0.01f, 0.01f), Random.Range(-0.01f, 0.01f), 0f);
		} else {
			if (sprite.localScale[0] < (tiedMax * 0.95)) {
				sprite.localScale += new Vector3(increment, increment, increment);
			} else if (sprite.localScale[0] > (tiedMax * 1.05)) {
				sprite.localScale += new Vector3(-increment, -increment, -increment);
			}
		}
		if (previousNode) {
			// lineRenderer.SetWidth(0.55f, 0.55f);
			lineRenderer.SetWidth(sprite.localScale[0]/2.5f, previousNode.GetComponent<GardenHose>().sprite.localScale[0]/2.5f);
		} else {
			Debug.Log(Time.deltaTime);
			lineRenderer.SetWidth(sprite.localScale[0]/2.5f, sprite.localScale[0]/2.5f);
		}
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

	void DrawLine (Vector3 start, Vector3 end, Color startColor, Color endColor) {
	    lineRenderer.SetPosition(0, start);
			lineRenderer.SetPosition(1, end);
			lineRenderer.SetColors(startColor, endColor);
	}

	void Draggable () {
		if (drag && MainCamera.setupFinished) {
			Vector3 pos;
			Vector3? inputPos;
			#if UNITY_ANDROID || UNITY_IOS
				if (Input.touchCount > 0) {
					inputPos = Input.GetTouch(touchIndex).position;
				} else {
					inputPos = null;
				}
			#endif
			#if UNITY_STANDALONE
				inputPos = Input.mousePosition;
			#endif
			if (inputPos != null) {
				Vector3 touchPosition = Camera.main.ScreenToWorldPoint((Vector3)inputPos);
				touchPosition.z = gameObject.transform.position.z;
				if (initialPos == null) {
					initialPos = gameObject.transform.position - touchPosition;
				}
				if (initialRot == null) {
					initialRot = gameObject.transform.rotation;
				}
				pos = touchPosition + (Vector3)initialPos;
				gameObject.transform.rotation = (Quaternion)initialRot;
				gameObject.GetComponent<Rigidbody>().MovePosition(pos);
			}
		}
	}

	void ColorScale () {
		// if (untied == true) {
			spriteRenderer.color = Color.Lerp(ColorPicker(45f, 130f, 55f), ColorPicker(60f, 170f, 75f), Mathf.InverseLerp(zMax, zMin, gameObject.transform.position.z));
		// } else {
		// 	spriteRenderer.color = Color.Lerp(ColorPicker(45f, 130f, 55f), ColorPicker(60f, 170f, 75f), Mathf.InverseLerp(zMax, zMin, gameObject.transform.position.z));
		// }
		// if (endNode) {
		// 	spriteRenderer.color = ColorPicker(181f, 166f, 66f);
		// }
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
		GameObject collider = gameObject.GetComponentInChildren<SphereCollider>().gameObject;
		BoxCollider box = collider.AddComponent<BoxCollider>();
		box.center = new Vector3(0f, 0.5f, 0f);
		box.size = new Vector3(0.3f, 1.0f, 0.2f);
		gameObject.layer = LayerMask.NameToLayer("triggers");

		GameObject endPrefab = Instantiate(endNodePrefab, transform.position, Quaternion.identity);
		endPrefab.transform.parent = transform;
		endPrefab.transform.localPosition = new Vector3(0f,0f,-0.1f);
		endPrefab.transform.localScale = new Vector3(1.1f, 1.2f, 1.0f);
		endPrefab.GetComponent<SpriteRenderer>().sprite = nozzle;
		endPrefab.name = "nozzle" + nodeNumber;
		// foreach (SpriteRenderer spriteRenderer in gameObject.GetComponentsInChildren<SpriteRenderer>()) {
		// 	if (spriteRenderer.gameObject.name == "sprite") {
		// 		spriteRenderer.sprite = nozzle;
		// 	}
		// }
	}

	void ResetDrag () {
		if (Input.touchCount == 0) {
			drag = false;
			MainCamera.dragging = false;
			initialPos = null;
			initialRot = null;
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
		initialPos = null;
		initialRot = null;
	}
	#endif

	Color ColorPicker(float r, float g, float b, float a = 1.0f) {
		return new Color(r/255f, g/255f, b/255f, a);
	}

}
