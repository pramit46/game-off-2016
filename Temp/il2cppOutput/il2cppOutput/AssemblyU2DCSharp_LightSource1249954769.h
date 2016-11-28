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

// LightSource
struct  LightSource_t1249954769  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 LightSource::nodeType
	int32_t ___nodeType_2;
	// System.Int32 LightSource::lightNumber
	int32_t ___lightNumber_3;

public:
	inline static int32_t get_offset_of_nodeType_2() { return static_cast<int32_t>(offsetof(LightSource_t1249954769, ___nodeType_2)); }
	inline int32_t get_nodeType_2() const { return ___nodeType_2; }
	inline int32_t* get_address_of_nodeType_2() { return &___nodeType_2; }
	inline void set_nodeType_2(int32_t value)
	{
		___nodeType_2 = value;
	}

	inline static int32_t get_offset_of_lightNumber_3() { return static_cast<int32_t>(offsetof(LightSource_t1249954769, ___lightNumber_3)); }
	inline int32_t get_lightNumber_3() const { return ___lightNumber_3; }
	inline int32_t* get_address_of_lightNumber_3() { return &___lightNumber_3; }
	inline void set_lightNumber_3(int32_t value)
	{
		___lightNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
