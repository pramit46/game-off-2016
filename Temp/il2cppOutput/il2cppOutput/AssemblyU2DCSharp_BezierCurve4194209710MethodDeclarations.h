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

// BezierCurve
struct BezierCurve_t4194209710;
// BezierPoint
struct BezierPoint_t181545057;
// BezierPoint[]
struct BezierPointU5BU5D_t1242557692;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BezierPoint181545057.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Nullable_1_gen506773895.h"

// System.Void BezierCurve::.ctor()
extern "C"  void BezierCurve__ctor_m2523678383 (BezierCurve_t4194209710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BezierCurve::get_dirty()
extern "C"  bool BezierCurve_get_dirty_m574785912 (BezierCurve_t4194209710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierCurve::set_dirty(System.Boolean)
extern "C"  void BezierCurve_set_dirty_m3706997655 (BezierCurve_t4194209710 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BezierCurve::get_close()
extern "C"  bool BezierCurve_get_close_m2404293168 (BezierCurve_t4194209710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierCurve::set_close(System.Boolean)
extern "C"  void BezierCurve_set_close_m116980043 (BezierCurve_t4194209710 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BezierPoint BezierCurve::get_Item(System.Int32)
extern "C"  BezierPoint_t181545057 * BezierCurve_get_Item_m2126092202 (BezierCurve_t4194209710 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BezierCurve::get_pointCount()
extern "C"  int32_t BezierCurve_get_pointCount_m1092766327 (BezierCurve_t4194209710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BezierCurve::get_length()
extern "C"  float BezierCurve_get_length_m3499506190 (BezierCurve_t4194209710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierCurve::OnDrawGizmos()
extern "C"  void BezierCurve_OnDrawGizmos_m3272600235 (BezierCurve_t4194209710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierCurve::Awake()
extern "C"  void BezierCurve_Awake_m2750653006 (BezierCurve_t4194209710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierCurve::AddPoint(BezierPoint)
extern "C"  void BezierCurve_AddPoint_m1765864673 (BezierCurve_t4194209710 * __this, BezierPoint_t181545057 * ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BezierPoint BezierCurve::AddPointAt(UnityEngine.Vector3)
extern "C"  BezierPoint_t181545057 * BezierCurve_AddPointAt_m2403886552 (BezierCurve_t4194209710 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierCurve::RemovePoint(BezierPoint)
extern "C"  void BezierCurve_RemovePoint_m4136860210 (BezierCurve_t4194209710 * __this, BezierPoint_t181545057 * ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BezierPoint[] BezierCurve::GetAnchorPoints()
extern "C"  BezierPointU5BU5D_t1242557692* BezierCurve_GetAnchorPoints_m2240118177 (BezierCurve_t4194209710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Vector3> BezierCurve::GetPointAt(System.Single)
extern "C"  Nullable_1_t506773895  BezierCurve_GetPointAt_m3728233000 (BezierCurve_t4194209710 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BezierCurve::GetPointIndex(BezierPoint)
extern "C"  int32_t BezierCurve_GetPointIndex_m822531640 (BezierCurve_t4194209710 * __this, BezierPoint_t181545057 * ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierCurve::SetDirty()
extern "C"  void BezierCurve_SetDirty_m2719928223 (BezierCurve_t4194209710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierCurve::DrawCurve(BezierPoint,BezierPoint,System.Int32)
extern "C"  void BezierCurve_DrawCurve_m3113271333 (Il2CppObject * __this /* static, unused */, BezierPoint_t181545057 * ___p10, BezierPoint_t181545057 * ___p21, int32_t ___resolution2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::GetPoint(BezierPoint,BezierPoint,System.Single)
extern "C"  Vector3_t2243707580  BezierCurve_GetPoint_m224600286 (Il2CppObject * __this /* static, unused */, BezierPoint_t181545057 * ___p10, BezierPoint_t181545057 * ___p21, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::GetCubicCurvePoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  BezierCurve_GetCubicCurvePoint_m3293396103 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___p10, Vector3_t2243707580  ___p21, Vector3_t2243707580  ___p32, Vector3_t2243707580  ___p43, float ___t4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::GetQuadraticCurvePoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  BezierCurve_GetQuadraticCurvePoint_m843261156 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___p10, Vector3_t2243707580  ___p21, Vector3_t2243707580  ___p32, float ___t3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::GetLinearPoint(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  BezierCurve_GetLinearPoint_m3932950979 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___p10, Vector3_t2243707580  ___p21, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierCurve::GetPoint(System.Single,UnityEngine.Vector3[])
extern "C"  Vector3_t2243707580  BezierCurve_GetPoint_m1684268205 (Il2CppObject * __this /* static, unused */, float ___t0, Vector3U5BU5D_t1172311765* ___points1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BezierCurve::ApproximateLength(BezierPoint,BezierPoint,System.Int32)
extern "C"  float BezierCurve_ApproximateLength_m45560444 (Il2CppObject * __this /* static, unused */, BezierPoint_t181545057 * ___p10, BezierPoint_t181545057 * ___p21, int32_t ___resolution2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BezierCurve::BinomialCoefficient(System.Int32,System.Int32)
extern "C"  int32_t BezierCurve_BinomialCoefficient_m3951812643 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BezierCurve::Factoral(System.Int32)
extern "C"  int32_t BezierCurve_Factoral_m1537329568 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
