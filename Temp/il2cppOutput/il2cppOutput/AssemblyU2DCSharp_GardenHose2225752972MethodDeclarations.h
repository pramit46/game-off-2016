#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GardenHose
struct GardenHose_t2225752972;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void GardenHose::.ctor()
extern "C"  void GardenHose__ctor_m1163269853 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GardenHose::get_Drag()
extern "C"  bool GardenHose_get_Drag_m3989698814 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::set_Drag(System.Boolean)
extern "C"  void GardenHose_set_Drag_m4039216655 (GardenHose_t2225752972 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GardenHose::get_PreviousNode()
extern "C"  GameObject_t1756533147 * GardenHose_get_PreviousNode_m1262860274 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::set_PreviousNode(UnityEngine.GameObject)
extern "C"  void GardenHose_set_PreviousNode_m821537741 (GardenHose_t2225752972 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GardenHose::get_Sleeping()
extern "C"  bool GardenHose_get_Sleeping_m2679031775 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::set_Sleeping(System.Boolean)
extern "C"  void GardenHose_set_Sleeping_m2885891146 (GardenHose_t2225752972 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GardenHose::get_Untied()
extern "C"  bool GardenHose_get_Untied_m2456721863 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::set_Untied(System.Boolean)
extern "C"  void GardenHose_set_Untied_m1547436674 (GardenHose_t2225752972 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::Start()
extern "C"  void GardenHose_Start_m3774619437 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::Update()
extern "C"  void GardenHose_Update_m4164758998 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::FixedUpdate()
extern "C"  void GardenHose_FixedUpdate_m3614129076 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::ScaleIncrease()
extern "C"  void GardenHose_ScaleIncrease_m219126821 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GardenHose::waveScale(System.Single,System.Single,System.Single,System.Single)
extern "C"  float GardenHose_waveScale_m3604663446 (GardenHose_t2225752972 * __this, float ___interval0, float ___frame1, float ___min2, float ___max3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GardenHose::Moved()
extern "C"  bool GardenHose_Moved_m2424508194 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Color)
extern "C"  void GardenHose_DrawLine_m1198054511 (GardenHose_t2225752972 * __this, Vector3_t2243707580  ___start0, Vector3_t2243707580  ___end1, Color_t2020392075  ___startColor2, Color_t2020392075  ___endColor3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::Draggable()
extern "C"  void GardenHose_Draggable_m1120150980 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::ColorScale()
extern "C"  void GardenHose_ColorScale_m2083399592 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::SetupJoint()
extern "C"  void GardenHose_SetupJoint_m1179533916 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::StopJiggle()
extern "C"  void GardenHose_StopJiggle_m2747461147 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::StartNode()
extern "C"  void GardenHose_StartNode_m4165218177 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::EndNode()
extern "C"  void GardenHose_EndNode_m1728925494 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GardenHose::ResetDrag()
extern "C"  void GardenHose_ResetDrag_m2487458082 (GardenHose_t2225752972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color GardenHose::ColorPicker(System.Single,System.Single,System.Single,System.Single)
extern "C"  Color_t2020392075  GardenHose_ColorPicker_m3460465691 (GardenHose_t2225752972 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
