#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Nullable_1_gen506773895.h"
#include "mscorlib_System_Nullable_1_gen2293140233.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Headphones
struct  Headphones_t212797877  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Headphones::drag
	bool ___drag_2;
	// System.Boolean Headphones::endNode
	bool ___endNode_3;
	// System.Int32 Headphones::touchIndex
	int32_t ___touchIndex_4;
	// UnityEngine.Sprite Headphones::earbudL
	Sprite_t309593783 * ___earbudL_5;
	// UnityEngine.Sprite Headphones::earbudR
	Sprite_t309593783 * ___earbudR_6;
	// UnityEngine.Sprite Headphones::aux
	Sprite_t309593783 * ___aux_8;
	// UnityEngine.GameObject Headphones::previousNode
	GameObject_t1756533147 * ___previousNode_9;
	// UnityEngine.GameObject Headphones::line
	GameObject_t1756533147 * ___line_10;
	// System.Int32 Headphones::nodeNumber
	int32_t ___nodeNumber_11;
	// System.Single Headphones::zMax
	float ___zMax_12;
	// System.Single Headphones::zMin
	float ___zMin_13;
	// System.Boolean Headphones::sleeping
	bool ___sleeping_14;
	// System.Boolean Headphones::initalSleep
	bool ___initalSleep_15;
	// System.Boolean Headphones::untied
	bool ___untied_16;
	// UnityEngine.LineRenderer Headphones::lineRenderer
	LineRenderer_t849157671 * ___lineRenderer_17;
	// UnityEngine.SpriteRenderer Headphones::spriteRenderer
	SpriteRenderer_t1209076198 * ___spriteRenderer_18;
	// UnityEngine.Rigidbody Headphones::rb
	Rigidbody_t4233889191 * ___rb_19;
	// UnityEngine.Vector3 Headphones::lastPosition
	Vector3_t2243707580  ___lastPosition_20;
	// System.Boolean Headphones::lastUntied
	bool ___lastUntied_21;
	// UnityEngine.GameObject Headphones::node1
	GameObject_t1756533147 * ___node1_22;
	// System.Nullable`1<UnityEngine.Vector3> Headphones::initialPos
	Nullable_1_t506773895  ___initialPos_23;
	// System.Nullable`1<UnityEngine.Quaternion> Headphones::initialRot
	Nullable_1_t2293140233  ___initialRot_24;
	// UnityEngine.GameObject Headphones::endNodePrefab
	GameObject_t1756533147 * ___endNodePrefab_25;

public:
	inline static int32_t get_offset_of_drag_2() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___drag_2)); }
	inline bool get_drag_2() const { return ___drag_2; }
	inline bool* get_address_of_drag_2() { return &___drag_2; }
	inline void set_drag_2(bool value)
	{
		___drag_2 = value;
	}

	inline static int32_t get_offset_of_endNode_3() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___endNode_3)); }
	inline bool get_endNode_3() const { return ___endNode_3; }
	inline bool* get_address_of_endNode_3() { return &___endNode_3; }
	inline void set_endNode_3(bool value)
	{
		___endNode_3 = value;
	}

	inline static int32_t get_offset_of_touchIndex_4() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___touchIndex_4)); }
	inline int32_t get_touchIndex_4() const { return ___touchIndex_4; }
	inline int32_t* get_address_of_touchIndex_4() { return &___touchIndex_4; }
	inline void set_touchIndex_4(int32_t value)
	{
		___touchIndex_4 = value;
	}

	inline static int32_t get_offset_of_earbudL_5() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___earbudL_5)); }
	inline Sprite_t309593783 * get_earbudL_5() const { return ___earbudL_5; }
	inline Sprite_t309593783 ** get_address_of_earbudL_5() { return &___earbudL_5; }
	inline void set_earbudL_5(Sprite_t309593783 * value)
	{
		___earbudL_5 = value;
		Il2CppCodeGenWriteBarrier(&___earbudL_5, value);
	}

	inline static int32_t get_offset_of_earbudR_6() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___earbudR_6)); }
	inline Sprite_t309593783 * get_earbudR_6() const { return ___earbudR_6; }
	inline Sprite_t309593783 ** get_address_of_earbudR_6() { return &___earbudR_6; }
	inline void set_earbudR_6(Sprite_t309593783 * value)
	{
		___earbudR_6 = value;
		Il2CppCodeGenWriteBarrier(&___earbudR_6, value);
	}

	inline static int32_t get_offset_of_aux_8() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___aux_8)); }
	inline Sprite_t309593783 * get_aux_8() const { return ___aux_8; }
	inline Sprite_t309593783 ** get_address_of_aux_8() { return &___aux_8; }
	inline void set_aux_8(Sprite_t309593783 * value)
	{
		___aux_8 = value;
		Il2CppCodeGenWriteBarrier(&___aux_8, value);
	}

	inline static int32_t get_offset_of_previousNode_9() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___previousNode_9)); }
	inline GameObject_t1756533147 * get_previousNode_9() const { return ___previousNode_9; }
	inline GameObject_t1756533147 ** get_address_of_previousNode_9() { return &___previousNode_9; }
	inline void set_previousNode_9(GameObject_t1756533147 * value)
	{
		___previousNode_9 = value;
		Il2CppCodeGenWriteBarrier(&___previousNode_9, value);
	}

	inline static int32_t get_offset_of_line_10() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___line_10)); }
	inline GameObject_t1756533147 * get_line_10() const { return ___line_10; }
	inline GameObject_t1756533147 ** get_address_of_line_10() { return &___line_10; }
	inline void set_line_10(GameObject_t1756533147 * value)
	{
		___line_10 = value;
		Il2CppCodeGenWriteBarrier(&___line_10, value);
	}

	inline static int32_t get_offset_of_nodeNumber_11() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___nodeNumber_11)); }
	inline int32_t get_nodeNumber_11() const { return ___nodeNumber_11; }
	inline int32_t* get_address_of_nodeNumber_11() { return &___nodeNumber_11; }
	inline void set_nodeNumber_11(int32_t value)
	{
		___nodeNumber_11 = value;
	}

	inline static int32_t get_offset_of_zMax_12() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___zMax_12)); }
	inline float get_zMax_12() const { return ___zMax_12; }
	inline float* get_address_of_zMax_12() { return &___zMax_12; }
	inline void set_zMax_12(float value)
	{
		___zMax_12 = value;
	}

	inline static int32_t get_offset_of_zMin_13() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___zMin_13)); }
	inline float get_zMin_13() const { return ___zMin_13; }
	inline float* get_address_of_zMin_13() { return &___zMin_13; }
	inline void set_zMin_13(float value)
	{
		___zMin_13 = value;
	}

	inline static int32_t get_offset_of_sleeping_14() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___sleeping_14)); }
	inline bool get_sleeping_14() const { return ___sleeping_14; }
	inline bool* get_address_of_sleeping_14() { return &___sleeping_14; }
	inline void set_sleeping_14(bool value)
	{
		___sleeping_14 = value;
	}

	inline static int32_t get_offset_of_initalSleep_15() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___initalSleep_15)); }
	inline bool get_initalSleep_15() const { return ___initalSleep_15; }
	inline bool* get_address_of_initalSleep_15() { return &___initalSleep_15; }
	inline void set_initalSleep_15(bool value)
	{
		___initalSleep_15 = value;
	}

	inline static int32_t get_offset_of_untied_16() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___untied_16)); }
	inline bool get_untied_16() const { return ___untied_16; }
	inline bool* get_address_of_untied_16() { return &___untied_16; }
	inline void set_untied_16(bool value)
	{
		___untied_16 = value;
	}

	inline static int32_t get_offset_of_lineRenderer_17() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___lineRenderer_17)); }
	inline LineRenderer_t849157671 * get_lineRenderer_17() const { return ___lineRenderer_17; }
	inline LineRenderer_t849157671 ** get_address_of_lineRenderer_17() { return &___lineRenderer_17; }
	inline void set_lineRenderer_17(LineRenderer_t849157671 * value)
	{
		___lineRenderer_17 = value;
		Il2CppCodeGenWriteBarrier(&___lineRenderer_17, value);
	}

	inline static int32_t get_offset_of_spriteRenderer_18() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___spriteRenderer_18)); }
	inline SpriteRenderer_t1209076198 * get_spriteRenderer_18() const { return ___spriteRenderer_18; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriteRenderer_18() { return &___spriteRenderer_18; }
	inline void set_spriteRenderer_18(SpriteRenderer_t1209076198 * value)
	{
		___spriteRenderer_18 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_18, value);
	}

	inline static int32_t get_offset_of_rb_19() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___rb_19)); }
	inline Rigidbody_t4233889191 * get_rb_19() const { return ___rb_19; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_19() { return &___rb_19; }
	inline void set_rb_19(Rigidbody_t4233889191 * value)
	{
		___rb_19 = value;
		Il2CppCodeGenWriteBarrier(&___rb_19, value);
	}

	inline static int32_t get_offset_of_lastPosition_20() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___lastPosition_20)); }
	inline Vector3_t2243707580  get_lastPosition_20() const { return ___lastPosition_20; }
	inline Vector3_t2243707580 * get_address_of_lastPosition_20() { return &___lastPosition_20; }
	inline void set_lastPosition_20(Vector3_t2243707580  value)
	{
		___lastPosition_20 = value;
	}

	inline static int32_t get_offset_of_lastUntied_21() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___lastUntied_21)); }
	inline bool get_lastUntied_21() const { return ___lastUntied_21; }
	inline bool* get_address_of_lastUntied_21() { return &___lastUntied_21; }
	inline void set_lastUntied_21(bool value)
	{
		___lastUntied_21 = value;
	}

	inline static int32_t get_offset_of_node1_22() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___node1_22)); }
	inline GameObject_t1756533147 * get_node1_22() const { return ___node1_22; }
	inline GameObject_t1756533147 ** get_address_of_node1_22() { return &___node1_22; }
	inline void set_node1_22(GameObject_t1756533147 * value)
	{
		___node1_22 = value;
		Il2CppCodeGenWriteBarrier(&___node1_22, value);
	}

	inline static int32_t get_offset_of_initialPos_23() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___initialPos_23)); }
	inline Nullable_1_t506773895  get_initialPos_23() const { return ___initialPos_23; }
	inline Nullable_1_t506773895 * get_address_of_initialPos_23() { return &___initialPos_23; }
	inline void set_initialPos_23(Nullable_1_t506773895  value)
	{
		___initialPos_23 = value;
	}

	inline static int32_t get_offset_of_initialRot_24() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___initialRot_24)); }
	inline Nullable_1_t2293140233  get_initialRot_24() const { return ___initialRot_24; }
	inline Nullable_1_t2293140233 * get_address_of_initialRot_24() { return &___initialRot_24; }
	inline void set_initialRot_24(Nullable_1_t2293140233  value)
	{
		___initialRot_24 = value;
	}

	inline static int32_t get_offset_of_endNodePrefab_25() { return static_cast<int32_t>(offsetof(Headphones_t212797877, ___endNodePrefab_25)); }
	inline GameObject_t1756533147 * get_endNodePrefab_25() const { return ___endNodePrefab_25; }
	inline GameObject_t1756533147 ** get_address_of_endNodePrefab_25() { return &___endNodePrefab_25; }
	inline void set_endNodePrefab_25(GameObject_t1756533147 * value)
	{
		___endNodePrefab_25 = value;
		Il2CppCodeGenWriteBarrier(&___endNodePrefab_25, value);
	}
};

struct Headphones_t212797877_StaticFields
{
public:
	// System.Int32 Headphones::earbudCount
	int32_t ___earbudCount_7;

public:
	inline static int32_t get_offset_of_earbudCount_7() { return static_cast<int32_t>(offsetof(Headphones_t212797877_StaticFields, ___earbudCount_7)); }
	inline int32_t get_earbudCount_7() const { return ___earbudCount_7; }
	inline int32_t* get_address_of_earbudCount_7() { return &___earbudCount_7; }
	inline void set_earbudCount_7(int32_t value)
	{
		___earbudCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
