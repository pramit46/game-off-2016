#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BezierPoint[]
struct BezierPointU5BU5D_t1242557692;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BezierCurve
struct  BezierCurve_t4194209710  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 BezierCurve::resolution
	int32_t ___resolution_2;
	// System.Boolean BezierCurve::<dirty>k__BackingField
	bool ___U3CdirtyU3Ek__BackingField_3;
	// UnityEngine.Color BezierCurve::drawColor
	Color_t2020392075  ___drawColor_4;
	// System.Boolean BezierCurve::_close
	bool ____close_5;
	// System.Single BezierCurve::_length
	float ____length_6;
	// BezierPoint[] BezierCurve::points
	BezierPointU5BU5D_t1242557692* ___points_7;

public:
	inline static int32_t get_offset_of_resolution_2() { return static_cast<int32_t>(offsetof(BezierCurve_t4194209710, ___resolution_2)); }
	inline int32_t get_resolution_2() const { return ___resolution_2; }
	inline int32_t* get_address_of_resolution_2() { return &___resolution_2; }
	inline void set_resolution_2(int32_t value)
	{
		___resolution_2 = value;
	}

	inline static int32_t get_offset_of_U3CdirtyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BezierCurve_t4194209710, ___U3CdirtyU3Ek__BackingField_3)); }
	inline bool get_U3CdirtyU3Ek__BackingField_3() const { return ___U3CdirtyU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CdirtyU3Ek__BackingField_3() { return &___U3CdirtyU3Ek__BackingField_3; }
	inline void set_U3CdirtyU3Ek__BackingField_3(bool value)
	{
		___U3CdirtyU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_drawColor_4() { return static_cast<int32_t>(offsetof(BezierCurve_t4194209710, ___drawColor_4)); }
	inline Color_t2020392075  get_drawColor_4() const { return ___drawColor_4; }
	inline Color_t2020392075 * get_address_of_drawColor_4() { return &___drawColor_4; }
	inline void set_drawColor_4(Color_t2020392075  value)
	{
		___drawColor_4 = value;
	}

	inline static int32_t get_offset_of__close_5() { return static_cast<int32_t>(offsetof(BezierCurve_t4194209710, ____close_5)); }
	inline bool get__close_5() const { return ____close_5; }
	inline bool* get_address_of__close_5() { return &____close_5; }
	inline void set__close_5(bool value)
	{
		____close_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(BezierCurve_t4194209710, ____length_6)); }
	inline float get__length_6() const { return ____length_6; }
	inline float* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(float value)
	{
		____length_6 = value;
	}

	inline static int32_t get_offset_of_points_7() { return static_cast<int32_t>(offsetof(BezierCurve_t4194209710, ___points_7)); }
	inline BezierPointU5BU5D_t1242557692* get_points_7() const { return ___points_7; }
	inline BezierPointU5BU5D_t1242557692** get_address_of_points_7() { return &___points_7; }
	inline void set_points_7(BezierPointU5BU5D_t1242557692* value)
	{
		___points_7 = value;
		Il2CppCodeGenWriteBarrier(&___points_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
