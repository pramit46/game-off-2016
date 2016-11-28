#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// BezierPoint
struct BezierPoint_t181545057;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_BezierPoint181545057.h"

#pragma once
// BezierPoint[]
struct BezierPointU5BU5D_t1242557692  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BezierPoint_t181545057 * m_Items[1];

public:
	inline BezierPoint_t181545057 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BezierPoint_t181545057 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BezierPoint_t181545057 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline BezierPoint_t181545057 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BezierPoint_t181545057 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BezierPoint_t181545057 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
