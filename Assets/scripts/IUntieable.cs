using UnityEngine;
using System.Collections;

public interface IUntieable {
  bool Untied { get; set;}
  bool Sleeping { get; set;}
  bool Drag { get; set;}
  GameObject PreviousNode { get; set;}
  void EndNode();
}
