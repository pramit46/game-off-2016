#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// BezierCurve
struct BezierCurve_t4194209710;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadBars
struct  LoadBars_t3542034350  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject LoadBars::lightBar
	GameObject_t1756533147 * ___lightBar_2;
	// UnityEngine.GameObject LoadBars::darkBar
	GameObject_t1756533147 * ___darkBar_3;
	// System.Int32 LoadBars::totalExpectedNodes
	int32_t ___totalExpectedNodes_4;
	// BezierCurve LoadBars::bezier
	BezierCurve_t4194209710 * ___bezier_5;

public:
	inline static int32_t get_offset_of_lightBar_2() { return static_cast<int32_t>(offsetof(LoadBars_t3542034350, ___lightBar_2)); }
	inline GameObject_t1756533147 * get_lightBar_2() const { return ___lightBar_2; }
	inline GameObject_t1756533147 ** get_address_of_lightBar_2() { return &___lightBar_2; }
	inline void set_lightBar_2(GameObject_t1756533147 * value)
	{
		___lightBar_2 = value;
		Il2CppCodeGenWriteBarrier(&___lightBar_2, value);
	}

	inline static int32_t get_offset_of_darkBar_3() { return static_cast<int32_t>(offsetof(LoadBars_t3542034350, ___darkBar_3)); }
	inline GameObject_t1756533147 * get_darkBar_3() const { return ___darkBar_3; }
	inline GameObject_t1756533147 ** get_address_of_darkBar_3() { return &___darkBar_3; }
	inline void set_darkBar_3(GameObject_t1756533147 * value)
	{
		___darkBar_3 = value;
		Il2CppCodeGenWriteBarrier(&___darkBar_3, value);
	}

	inline static int32_t get_offset_of_totalExpectedNodes_4() { return static_cast<int32_t>(offsetof(LoadBars_t3542034350, ___totalExpectedNodes_4)); }
	inline int32_t get_totalExpectedNodes_4() const { return ___totalExpectedNodes_4; }
	inline int32_t* get_address_of_totalExpectedNodes_4() { return &___totalExpectedNodes_4; }
	inline void set_totalExpectedNodes_4(int32_t value)
	{
		___totalExpectedNodes_4 = value;
	}

	inline static int32_t get_offset_of_bezier_5() { return static_cast<int32_t>(offsetof(LoadBars_t3542034350, ___bezier_5)); }
	inline BezierCurve_t4194209710 * get_bezier_5() const { return ___bezier_5; }
	inline BezierCurve_t4194209710 ** get_address_of_bezier_5() { return &___bezier_5; }
	inline void set_bezier_5(BezierCurve_t4194209710 * value)
	{
		___bezier_5 = value;
		Il2CppCodeGenWriteBarrier(&___bezier_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
