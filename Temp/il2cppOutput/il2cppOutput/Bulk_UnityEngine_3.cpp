﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngineInternal.GenericStack
struct GenericStack_t3718539591;
// System.Delegate
struct Delegate_t3022476291;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t1390152093;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityEngine_UnityEngineInternal_GenericStack3718539591.h"
#include "UnityEngine_UnityEngineInternal_GenericStack3718539591MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Collections_Stack1043988394MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal715669973.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal715669973MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtension4275971970.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtension4275971970MethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Delegate3022476291.h"
#include "mscorlib_System_Delegate3022476291MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_ScriptingUtils2804582268.h"
#include "UnityEngine_UnityEngineInternal_ScriptingUtils2804582268MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleA1390152093.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleA1390152093MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules1810425448.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Attribute542643598MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules1810425448MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_WebRequestUtils4100941042.h"
#include "UnityEngine_UnityEngineInternal_WebRequestUtils4100941042MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "System_System_Uri19570940MethodDeclarations.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Char3454481338.h"
#include "mscorlib_System_Int322071877448.h"
#include "System_System_UriKind1128731744.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C"  void GenericStack__ctor_m1256224477 (GenericStack_t3718539591 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m521896492(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern Il2CppClass* MathfInternal_t715669973_il2cpp_TypeInfo_var;
extern const uint32_t MathfInternal__cctor_m1836685460_MetadataUsageId;
extern "C"  void MathfInternal__cctor_m1836685460 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m1836685460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t715669973_StaticFields*)MathfInternal_t715669973_il2cpp_TypeInfo_var->static_fields)->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t715669973_StaticFields*)MathfInternal_t715669973_il2cpp_TypeInfo_var->static_fields)->set_FloatMinDenormal_1((1.401298E-45f));
		((MathfInternal_t715669973_StaticFields*)MathfInternal_t715669973_il2cpp_TypeInfo_var->static_fields)->set_IsFlushToZeroEnabled_2((bool)1);
		return;
	}
}
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C"  Delegate_t3022476291 * NetFxCoreExtensions_CreateDelegate_m2492743074 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, Il2CppObject * ___target2, const MethodInfo* method)
{
	Delegate_t3022476291 * V_0 = NULL;
	{
		Type_t * L_0 = ___delegateType1;
		Il2CppObject * L_1 = ___target2;
		MethodInfo_t * L_2 = ___self0;
		Delegate_t3022476291 * L_3 = Delegate_CreateDelegate_m2101460062(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		Delegate_t3022476291 * L_4 = V_0;
		return L_4;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C"  MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m2715372889 (Il2CppObject * __this /* static, unused */, Delegate_t3022476291 * ___self0, const MethodInfo* method)
{
	MethodInfo_t * V_0 = NULL;
	{
		Delegate_t3022476291 * L_0 = ___self0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m2968370506(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		MethodInfo_t * L_2 = V_0;
		return L_2;
	}
}
// System.Delegate UnityEngineInternal.ScriptingUtils::CreateDelegate(System.Type,System.Reflection.MethodInfo)
extern "C"  Delegate_t3022476291 * ScriptingUtils_CreateDelegate_m1848023196 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, MethodInfo_t * ___methodInfo1, const MethodInfo* method)
{
	Delegate_t3022476291 * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		MethodInfo_t * L_1 = ___methodInfo1;
		Delegate_t3022476291 * L_2 = Delegate_CreateDelegate_m3441190144(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		Delegate_t3022476291 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern Il2CppClass* TypeInferenceRules_t1810425448_il2cpp_TypeInfo_var;
extern const uint32_t TypeInferenceRuleAttribute__ctor_m599630929_MetadataUsageId;
extern "C"  void TypeInferenceRuleAttribute__ctor_m599630929 (TypeInferenceRuleAttribute_t1390152093 * __this, int32_t ___rule0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m599630929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppObject * L_0 = Box(TypeInferenceRules_t1810425448_il2cpp_TypeInfo_var, (&___rule0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		TypeInferenceRuleAttribute__ctor_m470566337(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C"  void TypeInferenceRuleAttribute__ctor_m470566337 (TypeInferenceRuleAttribute_t1390152093 * __this, String_t* ___rule0, const MethodInfo* method)
{
	{
		Attribute__ctor_m1730479323(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule0;
		__this->set__rule_0(L_0);
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C"  String_t* TypeInferenceRuleAttribute_ToString_m3941510216 (TypeInferenceRuleAttribute_t1390152093 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get__rule_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
extern Il2CppClass* Uri_t19570940_il2cpp_TypeInfo_var;
extern const uint32_t WebRequestUtils_RedirectTo_m3803295888_MetadataUsageId;
extern "C"  String_t* WebRequestUtils_RedirectTo_m3803295888 (Il2CppObject * __this /* static, unused */, String_t* ___baseUri0, String_t* ___redirectUri1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_RedirectTo_m3803295888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t19570940 * V_0 = NULL;
	String_t* V_1 = NULL;
	Uri_t19570940 * V_2 = NULL;
	Uri_t19570940 * V_3 = NULL;
	{
		String_t* L_0 = ___redirectUri1;
		NullCheck(L_0);
		Il2CppChar L_1 = String_get_Chars_m4230566705(L_0, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___redirectUri1;
		Uri_t19570940 * L_3 = (Uri_t19570940 *)il2cpp_codegen_object_new(Uri_t19570940_il2cpp_TypeInfo_var);
		Uri__ctor_m1027317340(L_3, L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_001c:
	{
		String_t* L_4 = ___redirectUri1;
		Uri_t19570940 * L_5 = (Uri_t19570940 *)il2cpp_codegen_object_new(Uri_t19570940_il2cpp_TypeInfo_var);
		Uri__ctor_m1027317340(L_5, L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0024:
	{
		Uri_t19570940 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Uri_get_IsAbsoluteUri_m4123650233(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_8 = ___redirectUri1;
		V_1 = L_8;
		goto IL_0052;
	}

IL_0036:
	{
		String_t* L_9 = ___baseUri0;
		Uri_t19570940 * L_10 = (Uri_t19570940 *)il2cpp_codegen_object_new(Uri_t19570940_il2cpp_TypeInfo_var);
		Uri__ctor_m1027317340(L_10, L_9, 1, /*hidden argument*/NULL);
		V_2 = L_10;
		Uri_t19570940 * L_11 = V_2;
		Uri_t19570940 * L_12 = V_0;
		Uri_t19570940 * L_13 = (Uri_t19570940 *)il2cpp_codegen_object_new(Uri_t19570940_il2cpp_TypeInfo_var);
		Uri__ctor_m371762263(L_13, L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		Uri_t19570940 * L_14 = V_3;
		NullCheck(L_14);
		String_t* L_15 = Uri_get_AbsoluteUri_m2120317928(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_0052;
	}

IL_0052:
	{
		String_t* L_16 = V_1;
		return L_16;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
