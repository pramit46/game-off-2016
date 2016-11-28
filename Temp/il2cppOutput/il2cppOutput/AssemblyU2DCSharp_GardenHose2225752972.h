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
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Nullable_1_gen506773895.h"
#include "mscorlib_System_Nullable_1_gen2293140233.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GardenHose
struct  GardenHose_t2225752972  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GardenHose::drag
	bool ___drag_2;
	// System.Boolean GardenHose::endNode
	bool ___endNode_3;
	// System.Int32 GardenHose::touchIndex
	int32_t ___touchIndex_4;
	// UnityEngine.GameObject GardenHose::previousNode
	GameObject_t1756533147 * ___previousNode_5;
	// UnityEngine.GameObject GardenHose::line
	GameObject_t1756533147 * ___line_6;
	// System.Int32 GardenHose::nodeNumber
	int32_t ___nodeNumber_7;
	// System.Single GardenHose::zMax
	float ___zMax_8;
	// System.Single GardenHose::zMin
	float ___zMin_9;
	// System.Boolean GardenHose::sleeping
	bool ___sleeping_10;
	// System.Boolean GardenHose::initalSleep
	bool ___initalSleep_11;
	// System.Boolean GardenHose::untied
	bool ___untied_12;
	// UnityEngine.LineRenderer GardenHose::lineRenderer
	LineRenderer_t849157671 * ___lineRenderer_13;
	// UnityEngine.SpriteRenderer GardenHose::spriteRenderer
	SpriteRenderer_t1209076198 * ___spriteRenderer_14;
	// UnityEngine.Rigidbody GardenHose::rb
	Rigidbody_t4233889191 * ___rb_15;
	// UnityEngine.Vector3 GardenHose::lastPosition
	Vector3_t2243707580  ___lastPosition_16;
	// System.Boolean GardenHose::lastUntied
	bool ___lastUntied_17;
	// UnityEngine.Transform GardenHose::sprite
	Transform_t3275118058 * ___sprite_18;
	// UnityEngine.GameObject GardenHose::droplet
	GameObject_t1756533147 * ___droplet_19;
	// UnityEngine.Sprite GardenHose::nozzle
	Sprite_t309593783 * ___nozzle_20;
	// System.Nullable`1<UnityEngine.Vector3> GardenHose::initialPos
	Nullable_1_t506773895  ___initialPos_21;
	// System.Nullable`1<UnityEngine.Quaternion> GardenHose::initialRot
	Nullable_1_t2293140233  ___initialRot_22;
	// UnityEngine.GameObject GardenHose::endNodePrefab
	GameObject_t1756533147 * ___endNodePrefab_23;

public:
	inline static int32_t get_offset_of_drag_2() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___drag_2)); }
	inline bool get_drag_2() const { return ___drag_2; }
	inline bool* get_address_of_drag_2() { return &___drag_2; }
	inline void set_drag_2(bool value)
	{
		___drag_2 = value;
	}

	inline static int32_t get_offset_of_endNode_3() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___endNode_3)); }
	inline bool get_endNode_3() const { return ___endNode_3; }
	inline bool* get_address_of_endNode_3() { return &___endNode_3; }
	inline void set_endNode_3(bool value)
	{
		___endNode_3 = value;
	}

	inline static int32_t get_offset_of_touchIndex_4() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___touchIndex_4)); }
	inline int32_t get_touchIndex_4() const { return ___touchIndex_4; }
	inline int32_t* get_address_of_touchIndex_4() { return &___touchIndex_4; }
	inline void set_touchIndex_4(int32_t value)
	{
		___touchIndex_4 = value;
	}

	inline static int32_t get_offset_of_previousNode_5() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___previousNode_5)); }
	inline GameObject_t1756533147 * get_previousNode_5() const { return ___previousNode_5; }
	inline GameObject_t1756533147 ** get_address_of_previousNode_5() { return &___previousNode_5; }
	inline void set_previousNode_5(GameObject_t1756533147 * value)
	{
		___previousNode_5 = value;
		Il2CppCodeGenWriteBarrier(&___previousNode_5, value);
	}

	inline static int32_t get_offset_of_line_6() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___line_6)); }
	inline GameObject_t1756533147 * get_line_6() const { return ___line_6; }
	inline GameObject_t1756533147 ** get_address_of_line_6() { return &___line_6; }
	inline void set_line_6(GameObject_t1756533147 * value)
	{
		___line_6 = value;
		Il2CppCodeGenWriteBarrier(&___line_6, value);
	}

	inline static int32_t get_offset_of_nodeNumber_7() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___nodeNumber_7)); }
	inline int32_t get_nodeNumber_7() const { return ___nodeNumber_7; }
	inline int32_t* get_address_of_nodeNumber_7() { return &___nodeNumber_7; }
	inline void set_nodeNumber_7(int32_t value)
	{
		___nodeNumber_7 = value;
	}

	inline static int32_t get_offset_of_zMax_8() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___zMax_8)); }
	inline float get_zMax_8() const { return ___zMax_8; }
	inline float* get_address_of_zMax_8() { return &___zMax_8; }
	inline void set_zMax_8(float value)
	{
		___zMax_8 = value;
	}

	inline static int32_t get_offset_of_zMin_9() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___zMin_9)); }
	inline float get_zMin_9() const { return ___zMin_9; }
	inline float* get_address_of_zMin_9() { return &___zMin_9; }
	inline void set_zMin_9(float value)
	{
		___zMin_9 = value;
	}

	inline static int32_t get_offset_of_sleeping_10() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___sleeping_10)); }
	inline bool get_sleeping_10() const { return ___sleeping_10; }
	inline bool* get_address_of_sleeping_10() { return &___sleeping_10; }
	inline void set_sleeping_10(bool value)
	{
		___sleeping_10 = value;
	}

	inline static int32_t get_offset_of_initalSleep_11() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___initalSleep_11)); }
	inline bool get_initalSleep_11() const { return ___initalSleep_11; }
	inline bool* get_address_of_initalSleep_11() { return &___initalSleep_11; }
	inline void set_initalSleep_11(bool value)
	{
		___initalSleep_11 = value;
	}

	inline static int32_t get_offset_of_untied_12() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___untied_12)); }
	inline bool get_untied_12() const { return ___untied_12; }
	inline bool* get_address_of_untied_12() { return &___untied_12; }
	inline void set_untied_12(bool value)
	{
		___untied_12 = value;
	}

	inline static int32_t get_offset_of_lineRenderer_13() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___lineRenderer_13)); }
	inline LineRenderer_t849157671 * get_lineRenderer_13() const { return ___lineRenderer_13; }
	inline LineRenderer_t849157671 ** get_address_of_lineRenderer_13() { return &___lineRenderer_13; }
	inline void set_lineRenderer_13(LineRenderer_t849157671 * value)
	{
		___lineRenderer_13 = value;
		Il2CppCodeGenWriteBarrier(&___lineRenderer_13, value);
	}

	inline static int32_t get_offset_of_spriteRenderer_14() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___spriteRenderer_14)); }
	inline SpriteRenderer_t1209076198 * get_spriteRenderer_14() const { return ___spriteRenderer_14; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriteRenderer_14() { return &___spriteRenderer_14; }
	inline void set_spriteRenderer_14(SpriteRenderer_t1209076198 * value)
	{
		___spriteRenderer_14 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_14, value);
	}

	inline static int32_t get_offset_of_rb_15() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___rb_15)); }
	inline Rigidbody_t4233889191 * get_rb_15() const { return ___rb_15; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_15() { return &___rb_15; }
	inline void set_rb_15(Rigidbody_t4233889191 * value)
	{
		___rb_15 = value;
		Il2CppCodeGenWriteBarrier(&___rb_15, value);
	}

	inline static int32_t get_offset_of_lastPosition_16() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___lastPosition_16)); }
	inline Vector3_t2243707580  get_lastPosition_16() const { return ___lastPosition_16; }
	inline Vector3_t2243707580 * get_address_of_lastPosition_16() { return &___lastPosition_16; }
	inline void set_lastPosition_16(Vector3_t2243707580  value)
	{
		___lastPosition_16 = value;
	}

	inline static int32_t get_offset_of_lastUntied_17() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___lastUntied_17)); }
	inline bool get_lastUntied_17() const { return ___lastUntied_17; }
	inline bool* get_address_of_lastUntied_17() { return &___lastUntied_17; }
	inline void set_lastUntied_17(bool value)
	{
		___lastUntied_17 = value;
	}

	inline static int32_t get_offset_of_sprite_18() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___sprite_18)); }
	inline Transform_t3275118058 * get_sprite_18() const { return ___sprite_18; }
	inline Transform_t3275118058 ** get_address_of_sprite_18() { return &___sprite_18; }
	inline void set_sprite_18(Transform_t3275118058 * value)
	{
		___sprite_18 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_18, value);
	}

	inline static int32_t get_offset_of_droplet_19() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___droplet_19)); }
	inline GameObject_t1756533147 * get_droplet_19() const { return ___droplet_19; }
	inline GameObject_t1756533147 ** get_address_of_droplet_19() { return &___droplet_19; }
	inline void set_droplet_19(GameObject_t1756533147 * value)
	{
		___droplet_19 = value;
		Il2CppCodeGenWriteBarrier(&___droplet_19, value);
	}

	inline static int32_t get_offset_of_nozzle_20() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___nozzle_20)); }
	inline Sprite_t309593783 * get_nozzle_20() const { return ___nozzle_20; }
	inline Sprite_t309593783 ** get_address_of_nozzle_20() { return &___nozzle_20; }
	inline void set_nozzle_20(Sprite_t309593783 * value)
	{
		___nozzle_20 = value;
		Il2CppCodeGenWriteBarrier(&___nozzle_20, value);
	}

	inline static int32_t get_offset_of_initialPos_21() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___initialPos_21)); }
	inline Nullable_1_t506773895  get_initialPos_21() const { return ___initialPos_21; }
	inline Nullable_1_t506773895 * get_address_of_initialPos_21() { return &___initialPos_21; }
	inline void set_initialPos_21(Nullable_1_t506773895  value)
	{
		___initialPos_21 = value;
	}

	inline static int32_t get_offset_of_initialRot_22() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___initialRot_22)); }
	inline Nullable_1_t2293140233  get_initialRot_22() const { return ___initialRot_22; }
	inline Nullable_1_t2293140233 * get_address_of_initialRot_22() { return &___initialRot_22; }
	inline void set_initialRot_22(Nullable_1_t2293140233  value)
	{
		___initialRot_22 = value;
	}

	inline static int32_t get_offset_of_endNodePrefab_23() { return static_cast<int32_t>(offsetof(GardenHose_t2225752972, ___endNodePrefab_23)); }
	inline GameObject_t1756533147 * get_endNodePrefab_23() const { return ___endNodePrefab_23; }
	inline GameObject_t1756533147 ** get_address_of_endNodePrefab_23() { return &___endNodePrefab_23; }
	inline void set_endNodePrefab_23(GameObject_t1756533147 * value)
	{
		___endNodePrefab_23 = value;
		Il2CppCodeGenWriteBarrier(&___endNodePrefab_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
