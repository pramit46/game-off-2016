#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BezierCurve
struct BezierCurve_t4194209710;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_BezierPoint_HandleStyle2989967675.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BezierPoint
struct  BezierPoint_t181545057  : public MonoBehaviour_t1158329972
{
public:
	// BezierCurve BezierPoint::_curve
	BezierCurve_t4194209710 * ____curve_2;
	// BezierPoint/HandleStyle BezierPoint::handleStyle
	int32_t ___handleStyle_3;
	// UnityEngine.Vector3 BezierPoint::_handle1
	Vector3_t2243707580  ____handle1_4;
	// UnityEngine.Vector3 BezierPoint::_handle2
	Vector3_t2243707580  ____handle2_5;
	// UnityEngine.Vector3 BezierPoint::lastPosition
	Vector3_t2243707580  ___lastPosition_6;

public:
	inline static int32_t get_offset_of__curve_2() { return static_cast<int32_t>(offsetof(BezierPoint_t181545057, ____curve_2)); }
	inline BezierCurve_t4194209710 * get__curve_2() const { return ____curve_2; }
	inline BezierCurve_t4194209710 ** get_address_of__curve_2() { return &____curve_2; }
	inline void set__curve_2(BezierCurve_t4194209710 * value)
	{
		____curve_2 = value;
		Il2CppCodeGenWriteBarrier(&____curve_2, value);
	}

	inline static int32_t get_offset_of_handleStyle_3() { return static_cast<int32_t>(offsetof(BezierPoint_t181545057, ___handleStyle_3)); }
	inline int32_t get_handleStyle_3() const { return ___handleStyle_3; }
	inline int32_t* get_address_of_handleStyle_3() { return &___handleStyle_3; }
	inline void set_handleStyle_3(int32_t value)
	{
		___handleStyle_3 = value;
	}

	inline static int32_t get_offset_of__handle1_4() { return static_cast<int32_t>(offsetof(BezierPoint_t181545057, ____handle1_4)); }
	inline Vector3_t2243707580  get__handle1_4() const { return ____handle1_4; }
	inline Vector3_t2243707580 * get_address_of__handle1_4() { return &____handle1_4; }
	inline void set__handle1_4(Vector3_t2243707580  value)
	{
		____handle1_4 = value;
	}

	inline static int32_t get_offset_of__handle2_5() { return static_cast<int32_t>(offsetof(BezierPoint_t181545057, ____handle2_5)); }
	inline Vector3_t2243707580  get__handle2_5() const { return ____handle2_5; }
	inline Vector3_t2243707580 * get_address_of__handle2_5() { return &____handle2_5; }
	inline void set__handle2_5(Vector3_t2243707580  value)
	{
		____handle2_5 = value;
	}

	inline static int32_t get_offset_of_lastPosition_6() { return static_cast<int32_t>(offsetof(BezierPoint_t181545057, ___lastPosition_6)); }
	inline Vector3_t2243707580  get_lastPosition_6() const { return ___lastPosition_6; }
	inline Vector3_t2243707580 * get_address_of_lastPosition_6() { return &___lastPosition_6; }
	inline void set_lastPosition_6(Vector3_t2243707580  value)
	{
		___lastPosition_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
