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

// BezierPoint
struct BezierPoint_t181545057;
// BezierCurve
struct BezierCurve_t4194209710;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BezierCurve4194209710.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void BezierPoint::.ctor()
extern "C"  void BezierPoint__ctor_m4221720562 (BezierPoint_t181545057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BezierCurve BezierPoint::get_curve()
extern "C"  BezierCurve_t4194209710 * BezierPoint_get_curve_m3156031813 (BezierPoint_t181545057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPoint::set_curve(BezierCurve)
extern "C"  void BezierPoint_set_curve_m2302642650 (BezierPoint_t181545057 * __this, BezierCurve_t4194209710 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierPoint::get_position()
extern "C"  Vector3_t2243707580  BezierPoint_get_position_m1726314428 (BezierPoint_t181545057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPoint::set_position(UnityEngine.Vector3)
extern "C"  void BezierPoint_set_position_m2397150317 (BezierPoint_t181545057 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierPoint::get_localPosition()
extern "C"  Vector3_t2243707580  BezierPoint_get_localPosition_m703997955 (BezierPoint_t181545057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPoint::set_localPosition(UnityEngine.Vector3)
extern "C"  void BezierPoint_set_localPosition_m914775358 (BezierPoint_t181545057 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierPoint::get_handle1()
extern "C"  Vector3_t2243707580  BezierPoint_get_handle1_m3588653190 (BezierPoint_t181545057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPoint::set_handle1(UnityEngine.Vector3)
extern "C"  void BezierPoint_set_handle1_m588734991 (BezierPoint_t181545057 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierPoint::get_globalHandle1()
extern "C"  Vector3_t2243707580  BezierPoint_get_globalHandle1_m474106919 (BezierPoint_t181545057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPoint::set_globalHandle1(UnityEngine.Vector3)
extern "C"  void BezierPoint_set_globalHandle1_m1728933978 (BezierPoint_t181545057 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierPoint::get_handle2()
extern "C"  Vector3_t2243707580  BezierPoint_get_handle2_m1760447223 (BezierPoint_t181545057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPoint::set_handle2(UnityEngine.Vector3)
extern "C"  void BezierPoint_set_handle2_m1042378942 (BezierPoint_t181545057 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierPoint::get_globalHandle2()
extern "C"  Vector3_t2243707580  BezierPoint_get_globalHandle2_m1737662882 (BezierPoint_t181545057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPoint::set_globalHandle2(UnityEngine.Vector3)
extern "C"  void BezierPoint_set_globalHandle2_m1339275839 (BezierPoint_t181545057 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierPoint::Update()
extern "C"  void BezierPoint_Update_m2426760749 (BezierPoint_t181545057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
