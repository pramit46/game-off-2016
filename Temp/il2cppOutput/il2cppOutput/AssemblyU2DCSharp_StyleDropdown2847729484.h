#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Dropdown
struct Dropdown_t1985816271;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StyleDropdown
struct  StyleDropdown_t2847729484  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Dropdown StyleDropdown::dropdown
	Dropdown_t1985816271 * ___dropdown_2;

public:
	inline static int32_t get_offset_of_dropdown_2() { return static_cast<int32_t>(offsetof(StyleDropdown_t2847729484, ___dropdown_2)); }
	inline Dropdown_t1985816271 * get_dropdown_2() const { return ___dropdown_2; }
	inline Dropdown_t1985816271 ** get_address_of_dropdown_2() { return &___dropdown_2; }
	inline void set_dropdown_2(Dropdown_t1985816271 * value)
	{
		___dropdown_2 = value;
		Il2CppCodeGenWriteBarrier(&___dropdown_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
