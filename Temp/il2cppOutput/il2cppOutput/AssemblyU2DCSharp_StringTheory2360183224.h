﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StringTheory
struct  StringTheory_t2360183224  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean StringTheory::drag
	bool ___drag_2;
	// System.Boolean StringTheory::endNode
	bool ___endNode_3;
	// System.Int32 StringTheory::touchIndex
	int32_t ___touchIndex_4;
	// UnityEngine.GameObject StringTheory::previousNode
	GameObject_t1756533147 * ___previousNode_5;
	// UnityEngine.GameObject StringTheory::line
	GameObject_t1756533147 * ___line_6;
	// System.Int32 StringTheory::nodeNumber
	int32_t ___nodeNumber_7;
	// System.Single StringTheory::zMax
	float ___zMax_8;
	// System.Single StringTheory::zMin
	float ___zMin_9;
	// System.Boolean StringTheory::sleeping
	bool ___sleeping_10;
	// System.Boolean StringTheory::initalSleep
	bool ___initalSleep_11;
	// System.Boolean StringTheory::untied
	bool ___untied_12;
	// UnityEngine.LineRenderer StringTheory::lineRenderer
	LineRenderer_t849157671 * ___lineRenderer_13;
	// UnityEngine.SpriteRenderer StringTheory::spriteRenderer
	SpriteRenderer_t1209076198 * ___spriteRenderer_14;
	// UnityEngine.Rigidbody StringTheory::rb
	Rigidbody_t4233889191 * ___rb_15;
	// UnityEngine.Vector3 StringTheory::lastPosition
	Vector3_t2243707580  ___lastPosition_16;
	// System.Boolean StringTheory::lastUntied
	bool ___lastUntied_17;
	// UnityEngine.Material StringTheory::bond
	Material_t193706927 * ___bond_18;
	// UnityEngine.Transform StringTheory::sprite
	Transform_t3275118058 * ___sprite_19;

public:
	inline static int32_t get_offset_of_drag_2() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___drag_2)); }
	inline bool get_drag_2() const { return ___drag_2; }
	inline bool* get_address_of_drag_2() { return &___drag_2; }
	inline void set_drag_2(bool value)
	{
		___drag_2 = value;
	}

	inline static int32_t get_offset_of_endNode_3() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___endNode_3)); }
	inline bool get_endNode_3() const { return ___endNode_3; }
	inline bool* get_address_of_endNode_3() { return &___endNode_3; }
	inline void set_endNode_3(bool value)
	{
		___endNode_3 = value;
	}

	inline static int32_t get_offset_of_touchIndex_4() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___touchIndex_4)); }
	inline int32_t get_touchIndex_4() const { return ___touchIndex_4; }
	inline int32_t* get_address_of_touchIndex_4() { return &___touchIndex_4; }
	inline void set_touchIndex_4(int32_t value)
	{
		___touchIndex_4 = value;
	}

	inline static int32_t get_offset_of_previousNode_5() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___previousNode_5)); }
	inline GameObject_t1756533147 * get_previousNode_5() const { return ___previousNode_5; }
	inline GameObject_t1756533147 ** get_address_of_previousNode_5() { return &___previousNode_5; }
	inline void set_previousNode_5(GameObject_t1756533147 * value)
	{
		___previousNode_5 = value;
		Il2CppCodeGenWriteBarrier(&___previousNode_5, value);
	}

	inline static int32_t get_offset_of_line_6() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___line_6)); }
	inline GameObject_t1756533147 * get_line_6() const { return ___line_6; }
	inline GameObject_t1756533147 ** get_address_of_line_6() { return &___line_6; }
	inline void set_line_6(GameObject_t1756533147 * value)
	{
		___line_6 = value;
		Il2CppCodeGenWriteBarrier(&___line_6, value);
	}

	inline static int32_t get_offset_of_nodeNumber_7() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___nodeNumber_7)); }
	inline int32_t get_nodeNumber_7() const { return ___nodeNumber_7; }
	inline int32_t* get_address_of_nodeNumber_7() { return &___nodeNumber_7; }
	inline void set_nodeNumber_7(int32_t value)
	{
		___nodeNumber_7 = value;
	}

	inline static int32_t get_offset_of_zMax_8() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___zMax_8)); }
	inline float get_zMax_8() const { return ___zMax_8; }
	inline float* get_address_of_zMax_8() { return &___zMax_8; }
	inline void set_zMax_8(float value)
	{
		___zMax_8 = value;
	}

	inline static int32_t get_offset_of_zMin_9() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___zMin_9)); }
	inline float get_zMin_9() const { return ___zMin_9; }
	inline float* get_address_of_zMin_9() { return &___zMin_9; }
	inline void set_zMin_9(float value)
	{
		___zMin_9 = value;
	}

	inline static int32_t get_offset_of_sleeping_10() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___sleeping_10)); }
	inline bool get_sleeping_10() const { return ___sleeping_10; }
	inline bool* get_address_of_sleeping_10() { return &___sleeping_10; }
	inline void set_sleeping_10(bool value)
	{
		___sleeping_10 = value;
	}

	inline static int32_t get_offset_of_initalSleep_11() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___initalSleep_11)); }
	inline bool get_initalSleep_11() const { return ___initalSleep_11; }
	inline bool* get_address_of_initalSleep_11() { return &___initalSleep_11; }
	inline void set_initalSleep_11(bool value)
	{
		___initalSleep_11 = value;
	}

	inline static int32_t get_offset_of_untied_12() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___untied_12)); }
	inline bool get_untied_12() const { return ___untied_12; }
	inline bool* get_address_of_untied_12() { return &___untied_12; }
	inline void set_untied_12(bool value)
	{
		___untied_12 = value;
	}

	inline static int32_t get_offset_of_lineRenderer_13() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___lineRenderer_13)); }
	inline LineRenderer_t849157671 * get_lineRenderer_13() const { return ___lineRenderer_13; }
	inline LineRenderer_t849157671 ** get_address_of_lineRenderer_13() { return &___lineRenderer_13; }
	inline void set_lineRenderer_13(LineRenderer_t849157671 * value)
	{
		___lineRenderer_13 = value;
		Il2CppCodeGenWriteBarrier(&___lineRenderer_13, value);
	}

	inline static int32_t get_offset_of_spriteRenderer_14() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___spriteRenderer_14)); }
	inline SpriteRenderer_t1209076198 * get_spriteRenderer_14() const { return ___spriteRenderer_14; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriteRenderer_14() { return &___spriteRenderer_14; }
	inline void set_spriteRenderer_14(SpriteRenderer_t1209076198 * value)
	{
		___spriteRenderer_14 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_14, value);
	}

	inline static int32_t get_offset_of_rb_15() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___rb_15)); }
	inline Rigidbody_t4233889191 * get_rb_15() const { return ___rb_15; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_15() { return &___rb_15; }
	inline void set_rb_15(Rigidbody_t4233889191 * value)
	{
		___rb_15 = value;
		Il2CppCodeGenWriteBarrier(&___rb_15, value);
	}

	inline static int32_t get_offset_of_lastPosition_16() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___lastPosition_16)); }
	inline Vector3_t2243707580  get_lastPosition_16() const { return ___lastPosition_16; }
	inline Vector3_t2243707580 * get_address_of_lastPosition_16() { return &___lastPosition_16; }
	inline void set_lastPosition_16(Vector3_t2243707580  value)
	{
		___lastPosition_16 = value;
	}

	inline static int32_t get_offset_of_lastUntied_17() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___lastUntied_17)); }
	inline bool get_lastUntied_17() const { return ___lastUntied_17; }
	inline bool* get_address_of_lastUntied_17() { return &___lastUntied_17; }
	inline void set_lastUntied_17(bool value)
	{
		___lastUntied_17 = value;
	}

	inline static int32_t get_offset_of_bond_18() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___bond_18)); }
	inline Material_t193706927 * get_bond_18() const { return ___bond_18; }
	inline Material_t193706927 ** get_address_of_bond_18() { return &___bond_18; }
	inline void set_bond_18(Material_t193706927 * value)
	{
		___bond_18 = value;
		Il2CppCodeGenWriteBarrier(&___bond_18, value);
	}

	inline static int32_t get_offset_of_sprite_19() { return static_cast<int32_t>(offsetof(StringTheory_t2360183224, ___sprite_19)); }
	inline Transform_t3275118058 * get_sprite_19() const { return ___sprite_19; }
	inline Transform_t3275118058 ** get_address_of_sprite_19() { return &___sprite_19; }
	inline void set_sprite_19(Transform_t3275118058 * value)
	{
		___sprite_19 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
