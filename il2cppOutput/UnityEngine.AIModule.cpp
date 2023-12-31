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
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t NavMeshAgent_get_path_mDB083A01203230D74C3852089D26040EEE224178_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavMeshPath_Finalize_m23F790F8E5479FBF2F8F1DF6154A882FE0D1E8C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavMesh_Internal_CallOnNavMeshPreUpdate_mED6CAB94A6CB61A5FD547B7026DB4C96F2AF5B60_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t0D6B4C74FDBD279171DC0A75C631E11FDAA32C13 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.AI.NavMesh
struct  NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A  : public RuntimeObject
{
public:

public:
};

struct NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_StaticFields
{
public:
	// UnityEngine.AI.NavMesh_OnNavMeshPreUpdate UnityEngine.AI.NavMesh::onPreUpdate
	OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * ___onPreUpdate_0;

public:
	inline static int32_t get_offset_of_onPreUpdate_0() { return static_cast<int32_t>(offsetof(NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_StaticFields, ___onPreUpdate_0)); }
	inline OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * get_onPreUpdate_0() const { return ___onPreUpdate_0; }
	inline OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 ** get_address_of_onPreUpdate_0() { return &___onPreUpdate_0; }
	inline void set_onPreUpdate_0(OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * value)
	{
		___onPreUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreUpdate_0), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.AI.NavMeshHit
struct  NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 
{
public:
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.Single UnityEngine.AI.NavMeshHit::m_Distance
	float ___m_Distance_2;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Mask
	int32_t ___m_Mask_3;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Hit
	int32_t ___m_Hit_4;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5, ___m_Position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}

	inline static int32_t get_offset_of_m_Mask_3() { return static_cast<int32_t>(offsetof(NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5, ___m_Mask_3)); }
	inline int32_t get_m_Mask_3() const { return ___m_Mask_3; }
	inline int32_t* get_address_of_m_Mask_3() { return &___m_Mask_3; }
	inline void set_m_Mask_3(int32_t value)
	{
		___m_Mask_3 = value;
	}

	inline static int32_t get_offset_of_m_Hit_4() { return static_cast<int32_t>(offsetof(NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5, ___m_Hit_4)); }
	inline int32_t get_m_Hit_4() const { return ___m_Hit_4; }
	inline int32_t* get_address_of_m_Hit_4() { return &___m_Hit_4; }
	inline void set_m_Hit_4(int32_t value)
	{
		___m_Hit_4 = value;
	}
};


// UnityEngine.AI.NavMeshPath
struct  NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Corners_1() { return static_cast<int32_t>(offsetof(NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317, ___m_Corners_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_1() const { return ___m_Corners_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_1() { return &___m_Corners_1; }
	inline void set_m_Corners_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___m_Corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___m_Corners_1;
};

// UnityEngine.AI.NavMeshPathStatus
struct  NavMeshPathStatus_t8B03A707F6104915CB4D77771D4A9720FD51A491 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshPathStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NavMeshPathStatus_t8B03A707F6104915CB4D77771D4A9720FD51A491, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AI.ObstacleAvoidanceType
struct  ObstacleAvoidanceType_t5A5143756D6386B3F6313443A22103D40147700A 
{
public:
	// System.Int32 UnityEngine.AI.ObstacleAvoidanceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObstacleAvoidanceType_t5A5143756D6386B3F6313443A22103D40147700A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AI.OffMeshLinkType
struct  OffMeshLinkType_t4325BC73D3AFB6FB56E40720F21B2C0398036E28 
{
public:
	// System.Int32 UnityEngine.AI.OffMeshLinkType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OffMeshLinkType_t4325BC73D3AFB6FB56E40720F21B2C0398036E28, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.AI.NavMeshData
struct  NavMeshData_tC90B4D9A9C5C4160B493944607AE247FEDAA589B  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.AI.OffMeshLinkData
struct  OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED 
{
public:
	// System.Int32 UnityEngine.AI.OffMeshLinkData::m_Valid
	int32_t ___m_Valid_0;
	// System.Int32 UnityEngine.AI.OffMeshLinkData::m_Activated
	int32_t ___m_Activated_1;
	// System.Int32 UnityEngine.AI.OffMeshLinkData::m_InstanceID
	int32_t ___m_InstanceID_2;
	// UnityEngine.AI.OffMeshLinkType UnityEngine.AI.OffMeshLinkData::m_LinkType
	int32_t ___m_LinkType_3;
	// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::m_StartPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_StartPos_4;
	// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::m_EndPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_EndPos_5;

public:
	inline static int32_t get_offset_of_m_Valid_0() { return static_cast<int32_t>(offsetof(OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED, ___m_Valid_0)); }
	inline int32_t get_m_Valid_0() const { return ___m_Valid_0; }
	inline int32_t* get_address_of_m_Valid_0() { return &___m_Valid_0; }
	inline void set_m_Valid_0(int32_t value)
	{
		___m_Valid_0 = value;
	}

	inline static int32_t get_offset_of_m_Activated_1() { return static_cast<int32_t>(offsetof(OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED, ___m_Activated_1)); }
	inline int32_t get_m_Activated_1() const { return ___m_Activated_1; }
	inline int32_t* get_address_of_m_Activated_1() { return &___m_Activated_1; }
	inline void set_m_Activated_1(int32_t value)
	{
		___m_Activated_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_LinkType_3() { return static_cast<int32_t>(offsetof(OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED, ___m_LinkType_3)); }
	inline int32_t get_m_LinkType_3() const { return ___m_LinkType_3; }
	inline int32_t* get_address_of_m_LinkType_3() { return &___m_LinkType_3; }
	inline void set_m_LinkType_3(int32_t value)
	{
		___m_LinkType_3 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_4() { return static_cast<int32_t>(offsetof(OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED, ___m_StartPos_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_StartPos_4() const { return ___m_StartPos_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_StartPos_4() { return &___m_StartPos_4; }
	inline void set_m_StartPos_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_StartPos_4 = value;
	}

	inline static int32_t get_offset_of_m_EndPos_5() { return static_cast<int32_t>(offsetof(OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED, ___m_EndPos_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_EndPos_5() const { return ___m_EndPos_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_EndPos_5() { return &___m_EndPos_5; }
	inline void set_m_EndPos_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_EndPos_5 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AI.NavMesh_OnNavMeshPreUpdate
struct  OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.AI.NavMeshAgent
struct  NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.AI.NavMeshObstacle
struct  NavMeshObstacle_t0C742596AC467FAF334FFAA79C703CFFEA8D6168  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.AI.OffMeshLink
struct  OffMeshLink_tD3F889B0374EEFCE58F0B3ED42839A78DC15EB97  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};



// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mE56CD30B200FECFD94AD4B22923B32BD789D70F0 (OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshPath::ClearCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_ClearCorners_mB0B7FF49CE2AAD120C9C8279A9F47467C422C051 (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePathInternal_m5D4F3A7F26D2A2FA51E85D29E279CA70919C764C (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___sourcePosition0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition1, int32_t ___areaMask2, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * ___path3, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePathInternal_Injected_mF0ED4ECC69594E07FC412C14366F68BB29AE28F5 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___sourcePosition0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___targetPosition1, int32_t ___areaMask2, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * ___path3, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMesh::FindClosestEdge_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_FindClosestEdge_Injected_m41EFCB3C5D679FC2F7C37AE713D72BA3C4EA2C1C (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___sourcePosition0, NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * ___hit1, int32_t ___areaMask2, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_Injected_mF979357B944CC071BB59B94C8962F664F9390550 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___sourcePosition0, NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * ___hit1, float ___maxDistance2, int32_t ___areaMask3, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_Injected_m03F00018E71D91B109510C2EF1F01A3ECD84FF89 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::get_destination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_destination_Injected_m9511EDAA7C1AB027DA66BC4B41F42A5423F09B60 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::get_nextPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_nextPosition_Injected_m2A9B049296CEF9061ECF549009817F9BD4AF75FD (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_nextPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_nextPosition_Injected_m0B587F80814CBC1A34E5F6AEF0131FE8818986CB (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::get_desiredVelocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_desiredVelocity_Injected_m57EB8C1C7151A42BBEC5677CE1E5823AAE6F6D8A (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// UnityEngine.AI.OffMeshLinkData UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED  NavMeshAgent_GetCurrentOffMeshLinkDataInternal_mA06FDA5FF5CAC132D2FEA11B99EBDFE5C6506052 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal_Injected(UnityEngine.AI.OffMeshLinkData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_GetCurrentOffMeshLinkDataInternal_Injected_m00377CC810AFA5B16992273B778B4D4AF93B9C17 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED * ___ret0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMeshAgent::Warp_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_Warp_Injected_mFCA10F43C2EF33F19B74AD59EC9E4F57179E60CC (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___newPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_m97A90951BF188A25A9BD247CEDE6C2A8045A1B3C (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::CopyPathTo(UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_CopyPathTo_m39B933053469982AFFDE778BFDC493484EE30C50 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * ___path0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavMeshHit_get_position_m0AEED90D6B4FDE74045975E40B0A9C365F152F9E (NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AI.NavMeshHit::get_mask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshHit_get_mask_mCCB5AAE13E84AD0037F8A68ACB846DBC532E1E43 (NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AI.NavMeshPath::InitializeNavMeshPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NavMeshPath_InitializeNavMeshPath_m813BB3AF473DA864BCACAA16EACA97FF754F5720 (const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshPath::DestroyNavMeshPath(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_DestroyNavMeshPath_mA533E9C84A96BCD0D10A3B0CB384378A2269E48F (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshPath::ClearCornersInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_ClearCornersInternal_mAA7B067EB75C4E3DC1B663053DBD6DFC87395277 (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::CalculateCornersInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* NavMeshPath_CalculateCornersInternal_m0F634AB4FF3D313AB384965D6E7AD7EE6062F047 (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshPath::CalculateCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_CalculateCorners_mEB2CA95B66A63C50BFEDB7E68E62D58D30C0D740 (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::get_startPos()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  OffMeshLinkData_get_startPos_mE4F3E1584843DA41AEB4E825D6B4BC3402BAE102_inline (OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::get_endPos()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  OffMeshLinkData_get_endPos_m5323AA6DD85DF5931D9C4FA5B29D28865AD8C1AB_inline (OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_Internal_CallOnNavMeshPreUpdate_mED6CAB94A6CB61A5FD547B7026DB4C96F2AF5B60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMesh_Internal_CallOnNavMeshPreUpdate_mED6CAB94A6CB61A5FD547B7026DB4C96F2AF5B60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * L_0 = ((NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_il2cpp_TypeInfo_var))->get_onPreUpdate_0();
		V_0 = (bool)((!(((RuntimeObject*)(OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * L_2 = ((NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_tA4816D7EDC559C21816DEAE4EBD002CAC8B7330A_il2cpp_TypeInfo_var))->get_onPreUpdate_0();
		NullCheck(L_2);
		OnNavMeshPreUpdate_Invoke_mE56CD30B200FECFD94AD4B22923B32BD789D70F0(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePath_mCF9690B429137161B20FF8AEA81DB02A1D825D62 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___sourcePosition0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition1, int32_t ___areaMask2, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * ___path3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * L_0 = ___path3;
		NullCheck(L_0);
		NavMeshPath_ClearCorners_mB0B7FF49CE2AAD120C9C8279A9F47467C422C051(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___sourcePosition0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___targetPosition1;
		int32_t L_3 = ___areaMask2;
		NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * L_4 = ___path3;
		bool L_5 = NavMesh_CalculatePathInternal_m5D4F3A7F26D2A2FA51E85D29E279CA70919C764C(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePathInternal_m5D4F3A7F26D2A2FA51E85D29E279CA70919C764C (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___sourcePosition0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition1, int32_t ___areaMask2, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * ___path3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___areaMask2;
		NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * L_1 = ___path3;
		bool L_2 = NavMesh_CalculatePathInternal_Injected_mF0ED4ECC69594E07FC412C14366F68BB29AE28F5((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___sourcePosition0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___targetPosition1), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::FindClosestEdge(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_FindClosestEdge_m1555BBE4B7C5DE4C45B05205E383416260DDC462 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___sourcePosition0, NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * ___hit1, int32_t ___areaMask2, const RuntimeMethod* method)
{
	{
		NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * L_0 = ___hit1;
		int32_t L_1 = ___areaMask2;
		bool L_2 = NavMesh_FindClosestEdge_Injected_m41EFCB3C5D679FC2F7C37AE713D72BA3C4EA2C1C((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___sourcePosition0), (NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 *)L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_m783F8639449F56E7CA222A58E40323404E56C19E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___sourcePosition0, NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * ___hit1, float ___maxDistance2, int32_t ___areaMask3, const RuntimeMethod* method)
{
	{
		NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * L_0 = ___hit1;
		float L_1 = ___maxDistance2;
		int32_t L_2 = ___areaMask3;
		bool L_3 = NavMesh_SamplePosition_Injected_mF979357B944CC071BB59B94C8962F664F9390550((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___sourcePosition0), (NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 *)L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.AI.NavMesh::GetAreaFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMesh_GetAreaFromName_m3796CB0ABAFEDDBFC94792B8888926A17361CD81 (String_t* ___areaName0, const RuntimeMethod* method)
{
	typedef int32_t (*NavMesh_GetAreaFromName_m3796CB0ABAFEDDBFC94792B8888926A17361CD81_ftn) (String_t*);
	static NavMesh_GetAreaFromName_m3796CB0ABAFEDDBFC94792B8888926A17361CD81_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_GetAreaFromName_m3796CB0ABAFEDDBFC94792B8888926A17361CD81_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::GetAreaFromName(System.String)");
	int32_t retVal = _il2cpp_icall_func(___areaName0);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePathInternal_Injected_mF0ED4ECC69594E07FC412C14366F68BB29AE28F5 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___sourcePosition0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___targetPosition1, int32_t ___areaMask2, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * ___path3, const RuntimeMethod* method)
{
	typedef bool (*NavMesh_CalculatePathInternal_Injected_mF0ED4ECC69594E07FC412C14366F68BB29AE28F5_ftn) (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, int32_t, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 *);
	static NavMesh_CalculatePathInternal_Injected_mF0ED4ECC69594E07FC412C14366F68BB29AE28F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_CalculatePathInternal_Injected_mF0ED4ECC69594E07FC412C14366F68BB29AE28F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Int32,UnityEngine.AI.NavMeshPath)");
	bool retVal = _il2cpp_icall_func(___sourcePosition0, ___targetPosition1, ___areaMask2, ___path3);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMesh::FindClosestEdge_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_FindClosestEdge_Injected_m41EFCB3C5D679FC2F7C37AE713D72BA3C4EA2C1C (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___sourcePosition0, NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * ___hit1, int32_t ___areaMask2, const RuntimeMethod* method)
{
	typedef bool (*NavMesh_FindClosestEdge_Injected_m41EFCB3C5D679FC2F7C37AE713D72BA3C4EA2C1C_ftn) (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 *, int32_t);
	static NavMesh_FindClosestEdge_Injected_m41EFCB3C5D679FC2F7C37AE713D72BA3C4EA2C1C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_FindClosestEdge_Injected_m41EFCB3C5D679FC2F7C37AE713D72BA3C4EA2C1C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::FindClosestEdge_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Int32)");
	bool retVal = _il2cpp_icall_func(___sourcePosition0, ___hit1, ___areaMask2);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_Injected_mF979357B944CC071BB59B94C8962F664F9390550 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___sourcePosition0, NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * ___hit1, float ___maxDistance2, int32_t ___areaMask3, const RuntimeMethod* method)
{
	typedef bool (*NavMesh_SamplePosition_Injected_mF979357B944CC071BB59B94C8962F664F9390550_ftn) (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 *, float, int32_t);
	static NavMesh_SamplePosition_Injected_mF979357B944CC071BB59B94C8962F664F9390550_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_SamplePosition_Injected_mF979357B944CC071BB59B94C8962F664F9390550_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::SamplePosition_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)");
	bool retVal = _il2cpp_icall_func(___sourcePosition0, ___hit1, ___maxDistance2, ___areaMask3);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 (OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AI.NavMesh_OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate__ctor_mD019C429BD8D299B85C320A6EFB2FFEDC3F85F42 (OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AI.NavMesh_OnNavMeshPreUpdate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mE56CD30B200FECFD94AD4B22923B32BD789D70F0 (OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AI.NavMesh_OnNavMeshPreUpdate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnNavMeshPreUpdate_BeginInvoke_m67FA7767274E77169A57ADFE041EA9B914E752C6 (OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.AI.NavMesh_OnNavMeshPreUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_EndInvoke_mB55765702AA123A6D7C3DF8DDC597E3DEBC79836 (OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mDCFFAB501EFCC89E17EA13F49A917D340AEF0BC8 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___target0, const RuntimeMethod* method)
{
	{
		bool L_0 = NavMeshAgent_SetDestination_Injected_m03F00018E71D91B109510C2EF1F01A3ECD84FF89(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___target0), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_destination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavMeshAgent_get_destination_m6F870DB794CB124DD13B1FF848A6CB049DC9D83E (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NavMeshAgent_get_destination_Injected_m9511EDAA7C1AB027DA66BC4B41F42A5423F09B60(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::set_stoppingDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_stoppingDistance_m35D1EA6B92D1C9C4C14458E1565DC8F7DC4313E8 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_stoppingDistance_m35D1EA6B92D1C9C4C14458E1565DC8F7DC4313E8_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, float);
	static NavMeshAgent_set_stoppingDistance_m35D1EA6B92D1C9C4C14458E1565DC8F7DC4313E8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_stoppingDistance_m35D1EA6B92D1C9C4C14458E1565DC8F7DC4313E8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_stoppingDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_nextPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavMeshAgent_get_nextPosition_m205132AD4D7424904ADC23D862DA82DBF1E60324 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NavMeshAgent_get_nextPosition_Injected_m2A9B049296CEF9061ECF549009817F9BD4AF75FD(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::set_nextPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_nextPosition_m643A24894C244D0E38DFF652FB871B45D249D9D9 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		NavMeshAgent_set_nextPosition_Injected_m0B587F80814CBC1A34E5F6AEF0131FE8818986CB(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_desiredVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavMeshAgent_get_desiredVelocity_mE10A8D32D38E6C09DDAFDFF924C4032FED344A2D (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NavMeshAgent_get_desiredVelocity_Injected_m57EB8C1C7151A42BBEC5677CE1E5823AAE6F6D8A(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::set_baseOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_baseOffset_m0DA408C5A50732B3544624A444AA852EABE83F8F (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_baseOffset_m0DA408C5A50732B3544624A444AA852EABE83F8F_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, float);
	static NavMeshAgent_set_baseOffset_m0DA408C5A50732B3544624A444AA852EABE83F8F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_baseOffset_m0DA408C5A50732B3544624A444AA852EABE83F8F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_baseOffset(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_isOnOffMeshLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_isOnOffMeshLink_m38DEAC060DE2EF6D5DD76A8565FEE3714B4C8BE6 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_get_isOnOffMeshLink_m38DEAC060DE2EF6D5DD76A8565FEE3714B4C8BE6_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *);
	static NavMeshAgent_get_isOnOffMeshLink_m38DEAC060DE2EF6D5DD76A8565FEE3714B4C8BE6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_isOnOffMeshLink_m38DEAC060DE2EF6D5DD76A8565FEE3714B4C8BE6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_isOnOffMeshLink()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AI.OffMeshLinkData UnityEngine.AI.NavMeshAgent::get_currentOffMeshLinkData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED  NavMeshAgent_get_currentOffMeshLinkData_mBE074FBE47FBBE2B6870A5A6194551EAA5BF7402 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	{
		OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED  L_0 = NavMeshAgent_GetCurrentOffMeshLinkDataInternal_mA06FDA5FF5CAC132D2FEA11B99EBDFE5C6506052(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AI.OffMeshLinkData UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED  NavMeshAgent_GetCurrentOffMeshLinkDataInternal_mA06FDA5FF5CAC132D2FEA11B99EBDFE5C6506052 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NavMeshAgent_GetCurrentOffMeshLinkDataInternal_Injected_m00377CC810AFA5B16992273B778B4D4AF93B9C17(__this, (OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED *)(&V_0), /*hidden argument*/NULL);
		OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::set_autoTraverseOffMeshLink(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_autoTraverseOffMeshLink_m17EF1B38A7E241F29402334A2D01660DA68D766E (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_autoTraverseOffMeshLink_m17EF1B38A7E241F29402334A2D01660DA68D766E_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, bool);
	static NavMeshAgent_set_autoTraverseOffMeshLink_m17EF1B38A7E241F29402334A2D01660DA68D766E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_autoTraverseOffMeshLink_m17EF1B38A7E241F29402334A2D01660DA68D766E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_autoTraverseOffMeshLink(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_autoBraking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_autoBraking_m2B293376C0453D228E7A976449C4970488EF949B (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_autoBraking_m2B293376C0453D228E7A976449C4970488EF949B_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, bool);
	static NavMeshAgent_set_autoBraking_m2B293376C0453D228E7A976449C4970488EF949B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_autoBraking_m2B293376C0453D228E7A976449C4970488EF949B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_autoBraking(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_autoRepath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_autoRepath_m88A0DC38794D20979FAE19736F736B81CABF7300 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_autoRepath_m88A0DC38794D20979FAE19736F736B81CABF7300_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, bool);
	static NavMeshAgent_set_autoRepath_m88A0DC38794D20979FAE19736F736B81CABF7300_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_autoRepath_m88A0DC38794D20979FAE19736F736B81CABF7300_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_autoRepath(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_hasPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_hasPath_mBBE9EE18E2E915F36B78E72A6049EFCBD60AA1D5 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_get_hasPath_mBBE9EE18E2E915F36B78E72A6049EFCBD60AA1D5_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *);
	static NavMeshAgent_get_hasPath_mBBE9EE18E2E915F36B78E72A6049EFCBD60AA1D5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_hasPath_mBBE9EE18E2E915F36B78E72A6049EFCBD60AA1D5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_hasPath()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_pathPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_pathPending_m542D83599C5ED9DD09CB1A981A1F5D4C707542B4 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_get_pathPending_m542D83599C5ED9DD09CB1A981A1F5D4C707542B4_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *);
	static NavMeshAgent_get_pathPending_m542D83599C5ED9DD09CB1A981A1F5D4C707542B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_pathPending_m542D83599C5ED9DD09CB1A981A1F5D4C707542B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_pathPending()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AI.NavMeshPathStatus UnityEngine.AI.NavMeshAgent::get_pathStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshAgent_get_pathStatus_m4771E65EE49770022C83F97B24E520064F72B22C (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	typedef int32_t (*NavMeshAgent_get_pathStatus_m4771E65EE49770022C83F97B24E520064F72B22C_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *);
	static NavMeshAgent_get_pathStatus_m4771E65EE49770022C83F97B24E520064F72B22C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_pathStatus_m4771E65EE49770022C83F97B24E520064F72B22C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_pathStatus()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMeshAgent::Warp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_Warp_m364A2B156D1325BE4F4907E44D0AAE0416C470BE (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___newPosition0, const RuntimeMethod* method)
{
	{
		bool L_0 = NavMeshAgent_Warp_Injected_mFCA10F43C2EF33F19B74AD59EC9E4F57179E60CC(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___newPosition0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_isStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_isStopped_mDDB1D71B22CDF03B2AB45DF354CD7FBDBB23207B (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_get_isStopped_mDDB1D71B22CDF03B2AB45DF354CD7FBDBB23207B_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *);
	static NavMeshAgent_get_isStopped_mDDB1D71B22CDF03B2AB45DF354CD7FBDBB23207B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_isStopped_mDDB1D71B22CDF03B2AB45DF354CD7FBDBB23207B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_isStopped()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_isStopped_m3E8EA397B333B4E93272834CC398F87CEA572F81 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_isStopped_m3E8EA397B333B4E93272834CC398F87CEA572F81_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, bool);
	static NavMeshAgent_set_isStopped_m3E8EA397B333B4E93272834CC398F87CEA572F81_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_isStopped_m3E8EA397B333B4E93272834CC398F87CEA572F81_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::ResetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_ResetPath_m8DBBB03A3FDBB3A70420AE0EC11FE39B5A914DBD (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_ResetPath_m8DBBB03A3FDBB3A70420AE0EC11FE39B5A914DBD_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *);
	static NavMeshAgent_ResetPath_m8DBBB03A3FDBB3A70420AE0EC11FE39B5A914DBD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_ResetPath_m8DBBB03A3FDBB3A70420AE0EC11FE39B5A914DBD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::ResetPath()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::SetPath(UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetPath_mF7D5D0C94BB1A936E405BE8E300FD2734FE9E24C (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * ___path0, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_SetPath_mF7D5D0C94BB1A936E405BE8E300FD2734FE9E24C_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 *);
	static NavMeshAgent_SetPath_mF7D5D0C94BB1A936E405BE8E300FD2734FE9E24C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_SetPath_mF7D5D0C94BB1A936E405BE8E300FD2734FE9E24C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::SetPath(UnityEngine.AI.NavMeshPath)");
	bool retVal = _il2cpp_icall_func(__this, ___path0);
	return retVal;
}
// UnityEngine.AI.NavMeshPath UnityEngine.AI.NavMeshAgent::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * NavMeshAgent_get_path_mDB083A01203230D74C3852089D26040EEE224178 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshAgent_get_path_mDB083A01203230D74C3852089D26040EEE224178_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * V_0 = NULL;
	NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * V_1 = NULL;
	{
		NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * L_0 = (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 *)il2cpp_codegen_object_new(NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_il2cpp_TypeInfo_var);
		NavMeshPath__ctor_m97A90951BF188A25A9BD247CEDE6C2A8045A1B3C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * L_1 = V_0;
		NavMeshAgent_CopyPathTo_m39B933053469982AFFDE778BFDC493484EE30C50(__this, L_1, /*hidden argument*/NULL);
		NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::CopyPathTo(UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_CopyPathTo_m39B933053469982AFFDE778BFDC493484EE30C50 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * ___path0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_CopyPathTo_m39B933053469982AFFDE778BFDC493484EE30C50_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 *);
	static NavMeshAgent_CopyPathTo_m39B933053469982AFFDE778BFDC493484EE30C50_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_CopyPathTo_m39B933053469982AFFDE778BFDC493484EE30C50_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::CopyPathTo(UnityEngine.AI.NavMeshPath)");
	_il2cpp_icall_func(__this, ___path0);
}
// System.Int32 UnityEngine.AI.NavMeshAgent::get_areaMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshAgent_get_areaMask_m6DEDC591AAA3D0E046D7F3967F2E417ECF549709 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	typedef int32_t (*NavMeshAgent_get_areaMask_m6DEDC591AAA3D0E046D7F3967F2E417ECF549709_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *);
	static NavMeshAgent_get_areaMask_m6DEDC591AAA3D0E046D7F3967F2E417ECF549709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_areaMask_m6DEDC591AAA3D0E046D7F3967F2E417ECF549709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_areaMask()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_mE709E788BFB285190B9504F6DB3199B35B9B0D35 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_speed_mE709E788BFB285190B9504F6DB3199B35B9B0D35_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, float);
	static NavMeshAgent_set_speed_mE709E788BFB285190B9504F6DB3199B35B9B0D35_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_speed_mE709E788BFB285190B9504F6DB3199B35B9B0D35_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_angularSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_angularSpeed_m90DB947AF61F1AEA798FF5194961B2DA63219FC0 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_angularSpeed_m90DB947AF61F1AEA798FF5194961B2DA63219FC0_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, float);
	static NavMeshAgent_set_angularSpeed_m90DB947AF61F1AEA798FF5194961B2DA63219FC0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_angularSpeed_m90DB947AF61F1AEA798FF5194961B2DA63219FC0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_angularSpeed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_acceleration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_acceleration_mA37022F97D535F75B34C7D07FA50A8D89639F3F7 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_acceleration_mA37022F97D535F75B34C7D07FA50A8D89639F3F7_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, float);
	static NavMeshAgent_set_acceleration_mA37022F97D535F75B34C7D07FA50A8D89639F3F7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_acceleration_mA37022F97D535F75B34C7D07FA50A8D89639F3F7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_acceleration(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_updatePosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_updatePosition_m8F28C0A5DA1051B0EBED424C00F3A7B6656B69F2 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_updatePosition_m8F28C0A5DA1051B0EBED424C00F3A7B6656B69F2_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, bool);
	static NavMeshAgent_set_updatePosition_m8F28C0A5DA1051B0EBED424C00F3A7B6656B69F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_updatePosition_m8F28C0A5DA1051B0EBED424C00F3A7B6656B69F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_updatePosition(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_updateRotation_m1E4DC8D291EFB628A3A2D353DB7B3E2C54321084 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_updateRotation_m1E4DC8D291EFB628A3A2D353DB7B3E2C54321084_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, bool);
	static NavMeshAgent_set_updateRotation_m1E4DC8D291EFB628A3A2D353DB7B3E2C54321084_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_updateRotation_m1E4DC8D291EFB628A3A2D353DB7B3E2C54321084_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_updateUpAxis(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_updateUpAxis_m0D6816BA9322023C11579CE53D4AAC65FEDCA535 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_updateUpAxis_m0D6816BA9322023C11579CE53D4AAC65FEDCA535_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, bool);
	static NavMeshAgent_set_updateUpAxis_m0D6816BA9322023C11579CE53D4AAC65FEDCA535_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_updateUpAxis_m0D6816BA9322023C11579CE53D4AAC65FEDCA535_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_updateUpAxis(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AI.NavMeshAgent::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_radius_m198C01AF5BF7DEBB051A058598118B6338A51AF6 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	typedef float (*NavMeshAgent_get_radius_m198C01AF5BF7DEBB051A058598118B6338A51AF6_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *);
	static NavMeshAgent_get_radius_m198C01AF5BF7DEBB051A058598118B6338A51AF6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_radius_m198C01AF5BF7DEBB051A058598118B6338A51AF6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_radius()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_radius_m2E463B45C10BF90FB30A154104FF2B34DCDD50FB (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_radius_m2E463B45C10BF90FB30A154104FF2B34DCDD50FB_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, float);
	static NavMeshAgent_set_radius_m2E463B45C10BF90FB30A154104FF2B34DCDD50FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_radius_m2E463B45C10BF90FB30A154104FF2B34DCDD50FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_radius(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AI.NavMeshAgent::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_height_m20E9A1FF19845A0BDA3853731E22D51CCAA85E88 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	typedef float (*NavMeshAgent_get_height_m20E9A1FF19845A0BDA3853731E22D51CCAA85E88_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *);
	static NavMeshAgent_get_height_m20E9A1FF19845A0BDA3853731E22D51CCAA85E88_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_height_m20E9A1FF19845A0BDA3853731E22D51CCAA85E88_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_height()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_height_mA2242A62C68F278070968A9792598EA0CE27FE2B (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_height_mA2242A62C68F278070968A9792598EA0CE27FE2B_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, float);
	static NavMeshAgent_set_height_mA2242A62C68F278070968A9792598EA0CE27FE2B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_height_mA2242A62C68F278070968A9792598EA0CE27FE2B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_height(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_obstacleAvoidanceType(UnityEngine.AI.ObstacleAvoidanceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_obstacleAvoidanceType_m91F68AD6A6DCAFE076BE152BE713A8FDFFE154E3 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_obstacleAvoidanceType_m91F68AD6A6DCAFE076BE152BE713A8FDFFE154E3_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, int32_t);
	static NavMeshAgent_set_obstacleAvoidanceType_m91F68AD6A6DCAFE076BE152BE713A8FDFFE154E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_obstacleAvoidanceType_m91F68AD6A6DCAFE076BE152BE713A8FDFFE154E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_obstacleAvoidanceType(UnityEngine.AI.ObstacleAvoidanceType)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_avoidancePriority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_avoidancePriority_mE28A441410C3BB27917007729ADED20FCB397740 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_avoidancePriority_mE28A441410C3BB27917007729ADED20FCB397740_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, int32_t);
	static NavMeshAgent_set_avoidancePriority_mE28A441410C3BB27917007729ADED20FCB397740_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_avoidancePriority_mE28A441410C3BB27917007729ADED20FCB397740_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_avoidancePriority(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_isOnNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_isOnNavMesh_m7F5F0133872F0F90877F36D0D00141B0F97B51C7 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_get_isOnNavMesh_m7F5F0133872F0F90877F36D0D00141B0F97B51C7_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *);
	static NavMeshAgent_get_isOnNavMesh_m7F5F0133872F0F90877F36D0D00141B0F97B51C7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_isOnNavMesh_m7F5F0133872F0F90877F36D0D00141B0F97B51C7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_isOnNavMesh()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_Injected_m03F00018E71D91B109510C2EF1F01A3ECD84FF89 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___target0, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_SetDestination_Injected_m03F00018E71D91B109510C2EF1F01A3ECD84FF89_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static NavMeshAgent_SetDestination_Injected_m03F00018E71D91B109510C2EF1F01A3ECD84FF89_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_SetDestination_Injected_m03F00018E71D91B109510C2EF1F01A3ECD84FF89_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)");
	bool retVal = _il2cpp_icall_func(__this, ___target0);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::get_destination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_destination_Injected_m9511EDAA7C1AB027DA66BC4B41F42A5423F09B60 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_get_destination_Injected_m9511EDAA7C1AB027DA66BC4B41F42A5423F09B60_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static NavMeshAgent_get_destination_Injected_m9511EDAA7C1AB027DA66BC4B41F42A5423F09B60_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_destination_Injected_m9511EDAA7C1AB027DA66BC4B41F42A5423F09B60_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_destination_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.AI.NavMeshAgent::get_nextPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_nextPosition_Injected_m2A9B049296CEF9061ECF549009817F9BD4AF75FD (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_get_nextPosition_Injected_m2A9B049296CEF9061ECF549009817F9BD4AF75FD_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static NavMeshAgent_get_nextPosition_Injected_m2A9B049296CEF9061ECF549009817F9BD4AF75FD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_nextPosition_Injected_m2A9B049296CEF9061ECF549009817F9BD4AF75FD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_nextPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_nextPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_nextPosition_Injected_m0B587F80814CBC1A34E5F6AEF0131FE8818986CB (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_nextPosition_Injected_m0B587F80814CBC1A34E5F6AEF0131FE8818986CB_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static NavMeshAgent_set_nextPosition_Injected_m0B587F80814CBC1A34E5F6AEF0131FE8818986CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_nextPosition_Injected_m0B587F80814CBC1A34E5F6AEF0131FE8818986CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_nextPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::get_desiredVelocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_desiredVelocity_Injected_m57EB8C1C7151A42BBEC5677CE1E5823AAE6F6D8A (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_get_desiredVelocity_Injected_m57EB8C1C7151A42BBEC5677CE1E5823AAE6F6D8A_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static NavMeshAgent_get_desiredVelocity_Injected_m57EB8C1C7151A42BBEC5677CE1E5823AAE6F6D8A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_desiredVelocity_Injected_m57EB8C1C7151A42BBEC5677CE1E5823AAE6F6D8A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_desiredVelocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal_Injected(UnityEngine.AI.OffMeshLinkData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_GetCurrentOffMeshLinkDataInternal_Injected_m00377CC810AFA5B16992273B778B4D4AF93B9C17 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED * ___ret0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_GetCurrentOffMeshLinkDataInternal_Injected_m00377CC810AFA5B16992273B778B4D4AF93B9C17_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED *);
	static NavMeshAgent_GetCurrentOffMeshLinkDataInternal_Injected_m00377CC810AFA5B16992273B778B4D4AF93B9C17_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_GetCurrentOffMeshLinkDataInternal_Injected_m00377CC810AFA5B16992273B778B4D4AF93B9C17_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal_Injected(UnityEngine.AI.OffMeshLinkData&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::Warp_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_Warp_Injected_mFCA10F43C2EF33F19B74AD59EC9E4F57179E60CC (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___newPosition0, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_Warp_Injected_mFCA10F43C2EF33F19B74AD59EC9E4F57179E60CC_ftn) (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static NavMeshAgent_Warp_Injected_mFCA10F43C2EF33F19B74AD59EC9E4F57179E60CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_Warp_Injected_mFCA10F43C2EF33F19B74AD59EC9E4F57179E60CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::Warp_Injected(UnityEngine.Vector3&)");
	bool retVal = _il2cpp_icall_func(__this, ___newPosition0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavMeshHit_get_position_m0AEED90D6B4FDE74045975E40B0A9C365F152F9E (NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_Position_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavMeshHit_get_position_m0AEED90D6B4FDE74045975E40B0A9C365F152F9E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * _thisAdjusted = reinterpret_cast<NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 *>(__this + _offset);
	return NavMeshHit_get_position_m0AEED90D6B4FDE74045975E40B0A9C365F152F9E(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AI.NavMeshHit::get_mask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshHit_get_mask_mCCB5AAE13E84AD0037F8A68ACB846DBC532E1E43 (NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Mask_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t NavMeshHit_get_mask_mCCB5AAE13E84AD0037F8A68ACB846DBC532E1E43_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 * _thisAdjusted = reinterpret_cast<NavMeshHit_t6B1A57F3E61AF653EFECA1658DCF69F9A629FEB5 *>(__this + _offset);
	return NavMeshHit_get_mask_mCCB5AAE13E84AD0037F8A68ACB846DBC532E1E43(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AI.NavMeshPath
IL2CPP_EXTERN_C void NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshal_pinvoke(const NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317& unmarshaled, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	if (unmarshaled.get_m_Corners_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_m_Corners_Length = (unmarshaled.get_m_Corners_1())->max_length;
		marshaled.___m_Corners_1 = il2cpp_codegen_marshal_allocate_array<Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 >(_unmarshaled_m_Corners_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_m_Corners_Length); i++)
		{
			(marshaled.___m_Corners_1)[i] = (unmarshaled.get_m_Corners_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Corners_1 = NULL;
	}
}
IL2CPP_EXTERN_C void NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshal_pinvoke_back(const NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshaled_pinvoke& marshaled, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	if (marshaled.___m_Corners_1 != NULL)
	{
		if (unmarshaled.get_m_Corners_1() == NULL)
		{
			unmarshaled.set_m_Corners_1(reinterpret_cast<Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*>((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_m_Corners_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_m_Corners_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Corners_1)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.AI.NavMeshPath
IL2CPP_EXTERN_C void NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshal_pinvoke_cleanup(NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshaled_pinvoke& marshaled)
{
	if (marshaled.___m_Corners_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Corners_1);
		marshaled.___m_Corners_1 = NULL;
	}
}
// Conversion methods for marshalling of: UnityEngine.AI.NavMeshPath
IL2CPP_EXTERN_C void NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshal_com(const NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317& unmarshaled, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	if (unmarshaled.get_m_Corners_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_m_Corners_Length = (unmarshaled.get_m_Corners_1())->max_length;
		marshaled.___m_Corners_1 = il2cpp_codegen_marshal_allocate_array<Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 >(_unmarshaled_m_Corners_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_m_Corners_Length); i++)
		{
			(marshaled.___m_Corners_1)[i] = (unmarshaled.get_m_Corners_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Corners_1 = NULL;
	}
}
IL2CPP_EXTERN_C void NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshal_com_back(const NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshaled_com& marshaled, NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	if (marshaled.___m_Corners_1 != NULL)
	{
		if (unmarshaled.get_m_Corners_1() == NULL)
		{
			unmarshaled.set_m_Corners_1(reinterpret_cast<Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*>((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_m_Corners_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_m_Corners_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Corners_1)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.AI.NavMeshPath
IL2CPP_EXTERN_C void NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshal_com_cleanup(NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317_marshaled_com& marshaled)
{
	if (marshaled.___m_Corners_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Corners_1);
		marshaled.___m_Corners_1 = NULL;
	}
}
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_m97A90951BF188A25A9BD247CEDE6C2A8045A1B3C (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = NavMeshPath_InitializeNavMeshPath_m813BB3AF473DA864BCACAA16EACA97FF754F5720(/*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshPath::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_Finalize_m23F790F8E5479FBF2F8F1DF6154A882FE0D1E8C5 (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshPath_Finalize_m23F790F8E5479FBF2F8F1DF6154A882FE0D1E8C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		intptr_t L_0 = __this->get_m_Ptr_0();
		NavMeshPath_DestroyNavMeshPath_mA533E9C84A96BCD0D10A3B0CB384378A2269E48F((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
		IL2CPP_LEAVE(0x23, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x23, IL_0023)
	}

IL_0023:
	{
		return;
	}
}
// System.IntPtr UnityEngine.AI.NavMeshPath::InitializeNavMeshPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NavMeshPath_InitializeNavMeshPath_m813BB3AF473DA864BCACAA16EACA97FF754F5720 (const RuntimeMethod* method)
{
	typedef intptr_t (*NavMeshPath_InitializeNavMeshPath_m813BB3AF473DA864BCACAA16EACA97FF754F5720_ftn) ();
	static NavMeshPath_InitializeNavMeshPath_m813BB3AF473DA864BCACAA16EACA97FF754F5720_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_InitializeNavMeshPath_m813BB3AF473DA864BCACAA16EACA97FF754F5720_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::InitializeNavMeshPath()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshPath::DestroyNavMeshPath(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_DestroyNavMeshPath_mA533E9C84A96BCD0D10A3B0CB384378A2269E48F (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*NavMeshPath_DestroyNavMeshPath_mA533E9C84A96BCD0D10A3B0CB384378A2269E48F_ftn) (intptr_t);
	static NavMeshPath_DestroyNavMeshPath_mA533E9C84A96BCD0D10A3B0CB384378A2269E48F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_DestroyNavMeshPath_mA533E9C84A96BCD0D10A3B0CB384378A2269E48F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::DestroyNavMeshPath(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::CalculateCornersInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* NavMeshPath_CalculateCornersInternal_m0F634AB4FF3D313AB384965D6E7AD7EE6062F047 (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method)
{
	typedef Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*NavMeshPath_CalculateCornersInternal_m0F634AB4FF3D313AB384965D6E7AD7EE6062F047_ftn) (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 *);
	static NavMeshPath_CalculateCornersInternal_m0F634AB4FF3D313AB384965D6E7AD7EE6062F047_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_CalculateCornersInternal_m0F634AB4FF3D313AB384965D6E7AD7EE6062F047_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::CalculateCornersInternal()");
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshPath::ClearCornersInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_ClearCornersInternal_mAA7B067EB75C4E3DC1B663053DBD6DFC87395277 (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method)
{
	typedef void (*NavMeshPath_ClearCornersInternal_mAA7B067EB75C4E3DC1B663053DBD6DFC87395277_ftn) (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 *);
	static NavMeshPath_ClearCornersInternal_mAA7B067EB75C4E3DC1B663053DBD6DFC87395277_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_ClearCornersInternal_mAA7B067EB75C4E3DC1B663053DBD6DFC87395277_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::ClearCornersInternal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AI.NavMeshPath::ClearCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_ClearCorners_mB0B7FF49CE2AAD120C9C8279A9F47467C422C051 (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method)
{
	{
		NavMeshPath_ClearCornersInternal_mAA7B067EB75C4E3DC1B663053DBD6DFC87395277(__this, /*hidden argument*/NULL);
		__this->set_m_Corners_1((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshPath::CalculateCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_CalculateCorners_mEB2CA95B66A63C50BFEDB7E68E62D58D30C0D740 (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = __this->get_m_Corners_1();
		V_0 = (bool)((((RuntimeObject*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = NavMeshPath_CalculateCornersInternal_m0F634AB4FF3D313AB384965D6E7AD7EE6062F047(__this, /*hidden argument*/NULL);
		__this->set_m_Corners_1(L_2);
	}

IL_001a:
	{
		return;
	}
}
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* NavMeshPath_get_corners_mE33DBAFAD3C5E7E558138EA6CF026DD9AFEA1FCA (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method)
{
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	{
		NavMeshPath_CalculateCorners_mEB2CA95B66A63C50BFEDB7E68E62D58D30C0D740(__this, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = __this->get_m_Corners_1();
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AI.NavMeshPathStatus UnityEngine.AI.NavMeshPath::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshPath_get_status_mD9455D8007F954FD0E487D468D3A3BABAE5FA8EE (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*NavMeshPath_get_status_mD9455D8007F954FD0E487D468D3A3BABAE5FA8EE_ftn) (NavMeshPath_t90CECCAF38A818BDCE3F723FA238186F845C4317 *);
	static NavMeshPath_get_status_mD9455D8007F954FD0E487D468D3A3BABAE5FA8EE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_get_status_mD9455D8007F954FD0E487D468D3A3BABAE5FA8EE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::get_status()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::get_startPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  OffMeshLinkData_get_startPos_mE4F3E1584843DA41AEB4E825D6B4BC3402BAE102 (OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_StartPos_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  OffMeshLinkData_get_startPos_mE4F3E1584843DA41AEB4E825D6B4BC3402BAE102_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED * _thisAdjusted = reinterpret_cast<OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED *>(__this + _offset);
	return OffMeshLinkData_get_startPos_mE4F3E1584843DA41AEB4E825D6B4BC3402BAE102_inline(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::get_endPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  OffMeshLinkData_get_endPos_m5323AA6DD85DF5931D9C4FA5B29D28865AD8C1AB (OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_EndPos_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  OffMeshLinkData_get_endPos_m5323AA6DD85DF5931D9C4FA5B29D28865AD8C1AB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED * _thisAdjusted = reinterpret_cast<OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED *>(__this + _offset);
	return OffMeshLinkData_get_endPos_m5323AA6DD85DF5931D9C4FA5B29D28865AD8C1AB_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  OffMeshLinkData_get_startPos_mE4F3E1584843DA41AEB4E825D6B4BC3402BAE102_inline (OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_StartPos_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  OffMeshLinkData_get_endPos_m5323AA6DD85DF5931D9C4FA5B29D28865AD8C1AB_inline (OffMeshLinkData_tA4DABC0753CB8BBCEDED8952117871C31E4346ED * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_EndPos_5();
		return L_0;
	}
}
