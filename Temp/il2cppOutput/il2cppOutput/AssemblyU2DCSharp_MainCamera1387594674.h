#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// BezierCurve
struct BezierCurve_t4194209710;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// DifficultyDropdown
struct DifficultyDropdown_t923519324;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainCamera
struct  MainCamera_t1387594674  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] MainCamera::prefabs
	GameObjectU5BU5D_t3057952154* ___prefabs_2;
	// UnityEngine.GameObject MainCamera::nodePrefab
	GameObject_t1756533147 * ___nodePrefab_3;
	// UnityEngine.GameObject MainCamera::winText
	GameObject_t1756533147 * ___winText_4;
	// System.Single MainCamera::orthoZoomSpeed
	float ___orthoZoomSpeed_12;
	// BezierCurve MainCamera::bezier
	BezierCurve_t4194209710 * ___bezier_14;
	// System.Boolean MainCamera::won
	bool ___won_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MainCamera::nodeList
	List_1_t1125654279 * ___nodeList_16;
	// DifficultyDropdown MainCamera::difficultyDropdown
	DifficultyDropdown_t923519324 * ___difficultyDropdown_17;
	// System.Int32 MainCamera::winDelay
	int32_t ___winDelay_19;
	// System.Int32 MainCamera::branchNode
	int32_t ___branchNode_22;
	// System.Single MainCamera::lengthModifier
	float ___lengthModifier_23;
	// UnityEngine.Material[] MainCamera::materialList
	MaterialU5BU5D_t3123989686* ___materialList_25;
	// UnityEngine.GameObject MainCamera::blurCam
	GameObject_t1756533147 * ___blurCam_26;
	// UnityEngine.GameObject MainCamera::background
	GameObject_t1756533147 * ___background_27;
	// UnityEngine.Material MainCamera::paper2
	Material_t193706927 * ___paper2_28;
	// UnityEngine.Material MainCamera::stringTheoryBlur
	Material_t193706927 * ___stringTheoryBlur_29;
	// UnityEngine.GameObject MainCamera::faucet
	GameObject_t1756533147 * ___faucet_30;
	// UnityEngine.GameObject MainCamera::snow
	GameObject_t1756533147 * ___snow_31;

public:
	inline static int32_t get_offset_of_prefabs_2() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___prefabs_2)); }
	inline GameObjectU5BU5D_t3057952154* get_prefabs_2() const { return ___prefabs_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_prefabs_2() { return &___prefabs_2; }
	inline void set_prefabs_2(GameObjectU5BU5D_t3057952154* value)
	{
		___prefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefabs_2, value);
	}

	inline static int32_t get_offset_of_nodePrefab_3() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___nodePrefab_3)); }
	inline GameObject_t1756533147 * get_nodePrefab_3() const { return ___nodePrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_nodePrefab_3() { return &___nodePrefab_3; }
	inline void set_nodePrefab_3(GameObject_t1756533147 * value)
	{
		___nodePrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___nodePrefab_3, value);
	}

	inline static int32_t get_offset_of_winText_4() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___winText_4)); }
	inline GameObject_t1756533147 * get_winText_4() const { return ___winText_4; }
	inline GameObject_t1756533147 ** get_address_of_winText_4() { return &___winText_4; }
	inline void set_winText_4(GameObject_t1756533147 * value)
	{
		___winText_4 = value;
		Il2CppCodeGenWriteBarrier(&___winText_4, value);
	}

	inline static int32_t get_offset_of_orthoZoomSpeed_12() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___orthoZoomSpeed_12)); }
	inline float get_orthoZoomSpeed_12() const { return ___orthoZoomSpeed_12; }
	inline float* get_address_of_orthoZoomSpeed_12() { return &___orthoZoomSpeed_12; }
	inline void set_orthoZoomSpeed_12(float value)
	{
		___orthoZoomSpeed_12 = value;
	}

	inline static int32_t get_offset_of_bezier_14() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___bezier_14)); }
	inline BezierCurve_t4194209710 * get_bezier_14() const { return ___bezier_14; }
	inline BezierCurve_t4194209710 ** get_address_of_bezier_14() { return &___bezier_14; }
	inline void set_bezier_14(BezierCurve_t4194209710 * value)
	{
		___bezier_14 = value;
		Il2CppCodeGenWriteBarrier(&___bezier_14, value);
	}

	inline static int32_t get_offset_of_won_15() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___won_15)); }
	inline bool get_won_15() const { return ___won_15; }
	inline bool* get_address_of_won_15() { return &___won_15; }
	inline void set_won_15(bool value)
	{
		___won_15 = value;
	}

	inline static int32_t get_offset_of_nodeList_16() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___nodeList_16)); }
	inline List_1_t1125654279 * get_nodeList_16() const { return ___nodeList_16; }
	inline List_1_t1125654279 ** get_address_of_nodeList_16() { return &___nodeList_16; }
	inline void set_nodeList_16(List_1_t1125654279 * value)
	{
		___nodeList_16 = value;
		Il2CppCodeGenWriteBarrier(&___nodeList_16, value);
	}

	inline static int32_t get_offset_of_difficultyDropdown_17() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___difficultyDropdown_17)); }
	inline DifficultyDropdown_t923519324 * get_difficultyDropdown_17() const { return ___difficultyDropdown_17; }
	inline DifficultyDropdown_t923519324 ** get_address_of_difficultyDropdown_17() { return &___difficultyDropdown_17; }
	inline void set_difficultyDropdown_17(DifficultyDropdown_t923519324 * value)
	{
		___difficultyDropdown_17 = value;
		Il2CppCodeGenWriteBarrier(&___difficultyDropdown_17, value);
	}

	inline static int32_t get_offset_of_winDelay_19() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___winDelay_19)); }
	inline int32_t get_winDelay_19() const { return ___winDelay_19; }
	inline int32_t* get_address_of_winDelay_19() { return &___winDelay_19; }
	inline void set_winDelay_19(int32_t value)
	{
		___winDelay_19 = value;
	}

	inline static int32_t get_offset_of_branchNode_22() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___branchNode_22)); }
	inline int32_t get_branchNode_22() const { return ___branchNode_22; }
	inline int32_t* get_address_of_branchNode_22() { return &___branchNode_22; }
	inline void set_branchNode_22(int32_t value)
	{
		___branchNode_22 = value;
	}

	inline static int32_t get_offset_of_lengthModifier_23() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___lengthModifier_23)); }
	inline float get_lengthModifier_23() const { return ___lengthModifier_23; }
	inline float* get_address_of_lengthModifier_23() { return &___lengthModifier_23; }
	inline void set_lengthModifier_23(float value)
	{
		___lengthModifier_23 = value;
	}

	inline static int32_t get_offset_of_materialList_25() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___materialList_25)); }
	inline MaterialU5BU5D_t3123989686* get_materialList_25() const { return ___materialList_25; }
	inline MaterialU5BU5D_t3123989686** get_address_of_materialList_25() { return &___materialList_25; }
	inline void set_materialList_25(MaterialU5BU5D_t3123989686* value)
	{
		___materialList_25 = value;
		Il2CppCodeGenWriteBarrier(&___materialList_25, value);
	}

	inline static int32_t get_offset_of_blurCam_26() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___blurCam_26)); }
	inline GameObject_t1756533147 * get_blurCam_26() const { return ___blurCam_26; }
	inline GameObject_t1756533147 ** get_address_of_blurCam_26() { return &___blurCam_26; }
	inline void set_blurCam_26(GameObject_t1756533147 * value)
	{
		___blurCam_26 = value;
		Il2CppCodeGenWriteBarrier(&___blurCam_26, value);
	}

	inline static int32_t get_offset_of_background_27() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___background_27)); }
	inline GameObject_t1756533147 * get_background_27() const { return ___background_27; }
	inline GameObject_t1756533147 ** get_address_of_background_27() { return &___background_27; }
	inline void set_background_27(GameObject_t1756533147 * value)
	{
		___background_27 = value;
		Il2CppCodeGenWriteBarrier(&___background_27, value);
	}

	inline static int32_t get_offset_of_paper2_28() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___paper2_28)); }
	inline Material_t193706927 * get_paper2_28() const { return ___paper2_28; }
	inline Material_t193706927 ** get_address_of_paper2_28() { return &___paper2_28; }
	inline void set_paper2_28(Material_t193706927 * value)
	{
		___paper2_28 = value;
		Il2CppCodeGenWriteBarrier(&___paper2_28, value);
	}

	inline static int32_t get_offset_of_stringTheoryBlur_29() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___stringTheoryBlur_29)); }
	inline Material_t193706927 * get_stringTheoryBlur_29() const { return ___stringTheoryBlur_29; }
	inline Material_t193706927 ** get_address_of_stringTheoryBlur_29() { return &___stringTheoryBlur_29; }
	inline void set_stringTheoryBlur_29(Material_t193706927 * value)
	{
		___stringTheoryBlur_29 = value;
		Il2CppCodeGenWriteBarrier(&___stringTheoryBlur_29, value);
	}

	inline static int32_t get_offset_of_faucet_30() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___faucet_30)); }
	inline GameObject_t1756533147 * get_faucet_30() const { return ___faucet_30; }
	inline GameObject_t1756533147 ** get_address_of_faucet_30() { return &___faucet_30; }
	inline void set_faucet_30(GameObject_t1756533147 * value)
	{
		___faucet_30 = value;
		Il2CppCodeGenWriteBarrier(&___faucet_30, value);
	}

	inline static int32_t get_offset_of_snow_31() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674, ___snow_31)); }
	inline GameObject_t1756533147 * get_snow_31() const { return ___snow_31; }
	inline GameObject_t1756533147 ** get_address_of_snow_31() { return &___snow_31; }
	inline void set_snow_31(GameObject_t1756533147 * value)
	{
		___snow_31 = value;
		Il2CppCodeGenWriteBarrier(&___snow_31, value);
	}
};

struct MainCamera_t1387594674_StaticFields
{
public:
	// System.Int32 MainCamera::expectedNumberOfNodes
	int32_t ___expectedNumberOfNodes_5;
	// System.Int32 MainCamera::numberOfNodes
	int32_t ___numberOfNodes_6;
	// System.Boolean MainCamera::untied
	bool ___untied_7;
	// System.Boolean MainCamera::setupFinished
	bool ___setupFinished_8;
	// System.Boolean MainCamera::generationFinished
	bool ___generationFinished_9;
	// System.Int32 MainCamera::jigglers
	int32_t ___jigglers_10;
	// System.Int32 MainCamera::frame
	int32_t ___frame_11;
	// System.Boolean MainCamera::dragging
	bool ___dragging_13;
	// System.Int32 MainCamera::nodeType
	int32_t ___nodeType_18;
	// System.Int32 MainCamera::curveCount
	int32_t ___curveCount_20;
	// System.Int32 MainCamera::nodeCount
	int32_t ___nodeCount_21;
	// System.Single[] MainCamera::nodeSpace
	SingleU5BU5D_t577127397* ___nodeSpace_24;

public:
	inline static int32_t get_offset_of_expectedNumberOfNodes_5() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674_StaticFields, ___expectedNumberOfNodes_5)); }
	inline int32_t get_expectedNumberOfNodes_5() const { return ___expectedNumberOfNodes_5; }
	inline int32_t* get_address_of_expectedNumberOfNodes_5() { return &___expectedNumberOfNodes_5; }
	inline void set_expectedNumberOfNodes_5(int32_t value)
	{
		___expectedNumberOfNodes_5 = value;
	}

	inline static int32_t get_offset_of_numberOfNodes_6() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674_StaticFields, ___numberOfNodes_6)); }
	inline int32_t get_numberOfNodes_6() const { return ___numberOfNodes_6; }
	inline int32_t* get_address_of_numberOfNodes_6() { return &___numberOfNodes_6; }
	inline void set_numberOfNodes_6(int32_t value)
	{
		___numberOfNodes_6 = value;
	}

	inline static int32_t get_offset_of_untied_7() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674_StaticFields, ___untied_7)); }
	inline bool get_untied_7() const { return ___untied_7; }
	inline bool* get_address_of_untied_7() { return &___untied_7; }
	inline void set_untied_7(bool value)
	{
		___untied_7 = value;
	}

	inline static int32_t get_offset_of_setupFinished_8() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674_StaticFields, ___setupFinished_8)); }
	inline bool get_setupFinished_8() const { return ___setupFinished_8; }
	inline bool* get_address_of_setupFinished_8() { return &___setupFinished_8; }
	inline void set_setupFinished_8(bool value)
	{
		___setupFinished_8 = value;
	}

	inline static int32_t get_offset_of_generationFinished_9() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674_StaticFields, ___generationFinished_9)); }
	inline bool get_generationFinished_9() const { return ___generationFinished_9; }
	inline bool* get_address_of_generationFinished_9() { return &___generationFinished_9; }
	inline void set_generationFinished_9(bool value)
	{
		___generationFinished_9 = value;
	}

	inline static int32_t get_offset_of_jigglers_10() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674_StaticFields, ___jigglers_10)); }
	inline int32_t get_jigglers_10() const { return ___jigglers_10; }
	inline int32_t* get_address_of_jigglers_10() { return &___jigglers_10; }
	inline void set_jigglers_10(int32_t value)
	{
		___jigglers_10 = value;
	}

	inline static int32_t get_offset_of_frame_11() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674_StaticFields, ___frame_11)); }
	inline int32_t get_frame_11() const { return ___frame_11; }
	inline int32_t* get_address_of_frame_11() { return &___frame_11; }
	inline void set_frame_11(int32_t value)
	{
		___frame_11 = value;
	}

	inline static int32_t get_offset_of_dragging_13() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674_StaticFields, ___dragging_13)); }
	inline bool get_dragging_13() const { return ___dragging_13; }
	inline bool* get_address_of_dragging_13() { return &___dragging_13; }
	inline void set_dragging_13(bool value)
	{
		___dragging_13 = value;
	}

	inline static int32_t get_offset_of_nodeType_18() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674_StaticFields, ___nodeType_18)); }
	inline int32_t get_nodeType_18() const { return ___nodeType_18; }
	inline int32_t* get_address_of_nodeType_18() { return &___nodeType_18; }
	inline void set_nodeType_18(int32_t value)
	{
		___nodeType_18 = value;
	}

	inline static int32_t get_offset_of_curveCount_20() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674_StaticFields, ___curveCount_20)); }
	inline int32_t get_curveCount_20() const { return ___curveCount_20; }
	inline int32_t* get_address_of_curveCount_20() { return &___curveCount_20; }
	inline void set_curveCount_20(int32_t value)
	{
		___curveCount_20 = value;
	}

	inline static int32_t get_offset_of_nodeCount_21() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674_StaticFields, ___nodeCount_21)); }
	inline int32_t get_nodeCount_21() const { return ___nodeCount_21; }
	inline int32_t* get_address_of_nodeCount_21() { return &___nodeCount_21; }
	inline void set_nodeCount_21(int32_t value)
	{
		___nodeCount_21 = value;
	}

	inline static int32_t get_offset_of_nodeSpace_24() { return static_cast<int32_t>(offsetof(MainCamera_t1387594674_StaticFields, ___nodeSpace_24)); }
	inline SingleU5BU5D_t577127397* get_nodeSpace_24() const { return ___nodeSpace_24; }
	inline SingleU5BU5D_t577127397** get_address_of_nodeSpace_24() { return &___nodeSpace_24; }
	inline void set_nodeSpace_24(SingleU5BU5D_t577127397* value)
	{
		___nodeSpace_24 = value;
		Il2CppCodeGenWriteBarrier(&___nodeSpace_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
