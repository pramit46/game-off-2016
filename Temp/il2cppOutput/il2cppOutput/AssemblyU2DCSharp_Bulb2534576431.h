#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bulb
struct  Bulb_t2534576431  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Bulb::lockPos
	float ___lockPos_2;
	// System.Int32 Bulb::bulbNumber
	int32_t ___bulbNumber_3;

public:
	inline static int32_t get_offset_of_lockPos_2() { return static_cast<int32_t>(offsetof(Bulb_t2534576431, ___lockPos_2)); }
	inline float get_lockPos_2() const { return ___lockPos_2; }
	inline float* get_address_of_lockPos_2() { return &___lockPos_2; }
	inline void set_lockPos_2(float value)
	{
		___lockPos_2 = value;
	}

	inline static int32_t get_offset_of_bulbNumber_3() { return static_cast<int32_t>(offsetof(Bulb_t2534576431, ___bulbNumber_3)); }
	inline int32_t get_bulbNumber_3() const { return ___bulbNumber_3; }
	inline int32_t* get_address_of_bulbNumber_3() { return &___bulbNumber_3; }
	inline void set_bulbNumber_3(int32_t value)
	{
		___bulbNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
