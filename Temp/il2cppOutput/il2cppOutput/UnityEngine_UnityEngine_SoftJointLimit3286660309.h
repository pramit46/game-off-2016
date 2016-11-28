#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SoftJointLimit
struct  SoftJointLimit_t3286660309 
{
public:
	// System.Single UnityEngine.SoftJointLimit::m_Limit
	float ___m_Limit_0;
	// System.Single UnityEngine.SoftJointLimit::m_Bounciness
	float ___m_Bounciness_1;
	// System.Single UnityEngine.SoftJointLimit::m_ContactDistance
	float ___m_ContactDistance_2;

public:
	inline static int32_t get_offset_of_m_Limit_0() { return static_cast<int32_t>(offsetof(SoftJointLimit_t3286660309, ___m_Limit_0)); }
	inline float get_m_Limit_0() const { return ___m_Limit_0; }
	inline float* get_address_of_m_Limit_0() { return &___m_Limit_0; }
	inline void set_m_Limit_0(float value)
	{
		___m_Limit_0 = value;
	}

	inline static int32_t get_offset_of_m_Bounciness_1() { return static_cast<int32_t>(offsetof(SoftJointLimit_t3286660309, ___m_Bounciness_1)); }
	inline float get_m_Bounciness_1() const { return ___m_Bounciness_1; }
	inline float* get_address_of_m_Bounciness_1() { return &___m_Bounciness_1; }
	inline void set_m_Bounciness_1(float value)
	{
		___m_Bounciness_1 = value;
	}

	inline static int32_t get_offset_of_m_ContactDistance_2() { return static_cast<int32_t>(offsetof(SoftJointLimit_t3286660309, ___m_ContactDistance_2)); }
	inline float get_m_ContactDistance_2() const { return ___m_ContactDistance_2; }
	inline float* get_address_of_m_ContactDistance_2() { return &___m_ContactDistance_2; }
	inline void set_m_ContactDistance_2(float value)
	{
		___m_ContactDistance_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
