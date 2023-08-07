#include "il2cpp-config.h"

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

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate
struct AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF;
// Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate
struct BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645;
// Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate
struct EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D;

IL2CPP_EXTERN_C RuntimeClass* AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
IL2CPP_EXTERN_C String_t* _stringLiteral068B9FB54D2E608481A5102799A5C272A23C7C31;
IL2CPP_EXTERN_C String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
IL2CPP_EXTERN_C String_t* _stringLiteral8E939268F8E551F2F58A86E31FDDC7319D612E99;
IL2CPP_EXTERN_C String_t* _stringLiteral94E7EFF9A6EC914D6D3A99F4564285D4CE85F4B6;
IL2CPP_EXTERN_C String_t* _stringLiteralFED142E3129D4CE100DAA2A6AD0C08D889F2BB88;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m88692292C0132AEEA3710F8CB2E8E4D66DE57607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC116C5E222D32B750CB03B895AD5F4B987422A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m09FCEE3963121831E3AD8A1844FCF612F8A9CF43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m1F612D56A04DDB37F1BE0D0A470FCDA5D864BFBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkEndPoint_SetRawAddressBytes_m1BB613BF547BED8BF76D6783A07186B514D58242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransportFunctionPointer_1__ctor_m7C3A380D36774CBD852C32BD9890ABE5A1D7CCEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransportFunctionPointer_1__ctor_m99FA00B60102DE5998F4089EA565B7086A4AAE28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransportFunctionPointer_1__ctor_mC9B7F7063034CE410ABD6858E1D9788832045AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPNetworkInterface_AbortSendMessage_m2D2277C29CF9721D4143404F51FAFD7DA7B3ED9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPNetworkInterface_BeginSendMessage_mE825F4B82CCD7FF06BEA57AF7D66AAEAC50646D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPNetworkInterface_CreateInterfaceEndPoint_mCEE29608220F44B4C1227C7BED954298EA84D2D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPNetworkInterface_EndSendMessage_m98325DF88A408B9482B6BF26B0F2495C55645A11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AddressOf_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m689B828F0D5BEBE47FA2D87336A6635E79FA2A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AbortSendMessageDelegate_BeginInvoke_mAA235CC906C01B97608DCC388F54CFBF043FD041_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BeginSendMessageDelegate_BeginInvoke_mF33DCD6745C49511E93B834A07D1E2FA999F8D55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EndSendMessageDelegate_BeginInvoke_m1DDCC310373CB71D57A64095B5AB7F23A45AD68B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint_AddressAsString_m0AFA40D9D4CB91FE013615316E52F89F9D881756_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint_Compare_mAE8457D4CD6A7D684D1B8D1019F01DC6976044F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint_CreateAddress_m24F15B27A5948F9A1C7A7A0FD8C2A272BC13C540_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint_Equals_m6DC01312B2C5E44E7FD56E48515ACD6FCEEC0D95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint_GetHashCode_mD2585758E84F0263DDEC02472E81EEF26C905002_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint_GetRawAddressBytes_m3216D65ED4A40A668EC65242DD93AAD68976C6A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint_SetRawAddressBytes_m1BB613BF547BED8BF76D6783A07186B514D58242_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint_TryParse_m23163432CF3A1B4E98C2D76A046668663B89445A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint__cctor_m7B3E38065FBA46DA95BB7160E4BC76DCCB857163_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint_get_AnyIpv4_mF5C5A510219907BFC8B888F94B1DE258CB387F97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint_get_Port_m38690BA3B68376261CAC75686FC1366971F7B742_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint_get_RawPort_mED5AC3808B0E01F161DE5E3D036DAB43125F3B93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkEndPoint_set_RawPort_mD0E1D11C0544798A61F5570AB74F88897A896176_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkInterfaceEndPoint_Equals_m2FA52DE13A8E9F1D24B9D964D28DDE9B9A6F548B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPNetworkInterface_CreateInterfaceEndPoint_mCEE29608220F44B4C1227C7BED954298EA84D2D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPNetworkInterface_Dispose_m8DE7CFD142ED7EF300FE2189A8934EF807A94CFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPNetworkInterface_GetGenericEndPoint_m5DF19E390E437C36B08437FA3A2D49696C89559B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPNetworkInterface_ParseNetworkAddress_m5BAA9B51B792B3F8C1822BF981FD4FA4DD101FC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPNetworkInterface__cctor_m7AC2881BFA3D5C6CD173B68153F27DA4C8F595FF_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t4E07697E551668FF1B14EE53866EC4F450EAF356 
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

// Unity.Networking.Transport.NativeBindings
struct  NativeBindings_t61FE29610F9A073EE2D8A37AA4A0498728B51A04  : public RuntimeObject
{
public:

public:
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress_<data>e__FixedBuffer
struct  U3CdataU3Ee__FixedBuffer_t26DCEE63408F8531E1C9CD4978124E075F2C0C5B 
{
public:
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress_<data>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CdataU3Ee__FixedBuffer_t26DCEE63408F8531E1C9CD4978124E075F2C0C5B__padding[19];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CdataU3Ee__FixedBuffer_t26DCEE63408F8531E1C9CD4978124E075F2C0C5B, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress_<ipv4_bytes>e__FixedBuffer
struct  U3Cipv4_bytesU3Ee__FixedBuffer_t293D800803767242C7EA56EEC3F321250E06E8F2 
{
public:
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress_<ipv4_bytes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cipv4_bytesU3Ee__FixedBuffer_t293D800803767242C7EA56EEC3F321250E06E8F2__padding[4];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cipv4_bytesU3Ee__FixedBuffer_t293D800803767242C7EA56EEC3F321250E06E8F2, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress_<ipv6>e__FixedBuffer
struct  U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B 
{
public:
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress_<ipv6>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B__padding[16];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Networking.Transport.NetworkInterfaceEndPoint_<data>e__FixedBuffer
struct  U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA 
{
public:
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.NetworkInterfaceEndPoint_<data>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA__padding[56];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Networking.Transport.in_addr
struct  in_addr_t1D8B03B0A509C1CDA32B72068B348112D70CC222 
{
public:
	// System.UInt32 Unity.Networking.Transport.in_addr::s_addr
	uint32_t ___s_addr_0;

public:
	inline static int32_t get_offset_of_s_addr_0() { return static_cast<int32_t>(offsetof(in_addr_t1D8B03B0A509C1CDA32B72068B348112D70CC222, ___s_addr_0)); }
	inline uint32_t get_s_addr_0() const { return ___s_addr_0; }
	inline uint32_t* get_address_of_s_addr_0() { return &___s_addr_0; }
	inline void set_s_addr_0(uint32_t value)
	{
		___s_addr_0 = value;
	}
};


// Unity.Networking.Transport.network_address_<data>e__FixedBuffer
struct  U3CdataU3Ee__FixedBuffer_tBC6A02E2A957AF2E78A5ACEE7C00D7A9C3B17819 
{
public:
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.network_address_<data>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CdataU3Ee__FixedBuffer_tBC6A02E2A957AF2E78A5ACEE7C00D7A9C3B17819__padding[28];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CdataU3Ee__FixedBuffer_tBC6A02E2A957AF2E78A5ACEE7C00D7A9C3B17819, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Networking.Transport.network_iovec
struct  network_iovec_t7065DCF6AFF7D5A17B3D6EABC1920E300C794B2F 
{
public:
	// System.Int32 Unity.Networking.Transport.network_iovec::len
	int32_t ___len_0;
	// System.Void* Unity.Networking.Transport.network_iovec::buf
	void* ___buf_1;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(network_iovec_t7065DCF6AFF7D5A17B3D6EABC1920E300C794B2F, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_buf_1() { return static_cast<int32_t>(offsetof(network_iovec_t7065DCF6AFF7D5A17B3D6EABC1920E300C794B2F, ___buf_1)); }
	inline void* get_buf_1() const { return ___buf_1; }
	inline void** get_address_of_buf_1() { return &___buf_1; }
	inline void set_buf_1(void* value)
	{
		___buf_1 = value;
	}
};


// Unity.Networking.Transport.sa_family_t
struct  sa_family_t_t2C1FD6C99A97D46D74F350A8F6071A436E161A94 
{
public:
	// System.UInt16 Unity.Networking.Transport.sa_family_t::sa_family
	uint16_t ___sa_family_0;

public:
	inline static int32_t get_offset_of_sa_family_0() { return static_cast<int32_t>(offsetof(sa_family_t_t2C1FD6C99A97D46D74F350A8F6071A436E161A94, ___sa_family_0)); }
	inline uint16_t get_sa_family_0() const { return ___sa_family_0; }
	inline uint16_t* get_address_of_sa_family_0() { return &___sa_family_0; }
	inline void set_sa_family_0(uint16_t value)
	{
		___sa_family_0 = value;
	}
};


// Unity.Networking.Transport.sockaddr_in_<data>e__FixedBuffer
struct  U3CdataU3Ee__FixedBuffer_tC41E6354B311EC3B534925959627CEDEF7BA3E16 
{
public:
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.sockaddr_in_<data>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CdataU3Ee__FixedBuffer_tC41E6354B311EC3B534925959627CEDEF7BA3E16__padding[16];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CdataU3Ee__FixedBuffer_tC41E6354B311EC3B534925959627CEDEF7BA3E16, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Networking.Transport.sockaddr_in_<sin_zero>e__FixedBuffer
struct  U3Csin_zeroU3Ee__FixedBuffer_t8F0B5FDEB90B7AD9B55A5D970DF6E1554034FA2E 
{
public:
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.sockaddr_in_<sin_zero>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Csin_zeroU3Ee__FixedBuffer_t8F0B5FDEB90B7AD9B55A5D970DF6E1554034FA2E__padding[8];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Csin_zeroU3Ee__FixedBuffer_t8F0B5FDEB90B7AD9B55A5D970DF6E1554034FA2E, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.Burst.FunctionPointer`1<System.Object>
struct  FunctionPointer_1_t5AF97C37E92E5F70B805E2C94E6BB3582D040303 
{
public:
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;

public:
	inline static int32_t get_offset_of__ptr_0() { return static_cast<int32_t>(offsetof(FunctionPointer_1_t5AF97C37E92E5F70B805E2C94E6BB3582D040303, ____ptr_0)); }
	inline intptr_t get__ptr_0() const { return ____ptr_0; }
	inline intptr_t* get_address_of__ptr_0() { return &____ptr_0; }
	inline void set__ptr_0(intptr_t value)
	{
		____ptr_0 = value;
	}
};


// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate>
struct  FunctionPointer_1_t2EC6A79F8A85D30B46778976EDC115AB45A2EDC7 
{
public:
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;

public:
	inline static int32_t get_offset_of__ptr_0() { return static_cast<int32_t>(offsetof(FunctionPointer_1_t2EC6A79F8A85D30B46778976EDC115AB45A2EDC7, ____ptr_0)); }
	inline intptr_t get__ptr_0() const { return ____ptr_0; }
	inline intptr_t* get_address_of__ptr_0() { return &____ptr_0; }
	inline void set__ptr_0(intptr_t value)
	{
		____ptr_0 = value;
	}
};


// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate>
struct  FunctionPointer_1_t07F98C552F64E560682665659A71D52879BB7469 
{
public:
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;

public:
	inline static int32_t get_offset_of__ptr_0() { return static_cast<int32_t>(offsetof(FunctionPointer_1_t07F98C552F64E560682665659A71D52879BB7469, ____ptr_0)); }
	inline intptr_t get__ptr_0() const { return ____ptr_0; }
	inline intptr_t* get_address_of__ptr_0() { return &____ptr_0; }
	inline void set__ptr_0(intptr_t value)
	{
		____ptr_0 = value;
	}
};


// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate>
struct  FunctionPointer_1_tE7D69B6848358D8896A323A0E6814A895E4DBF4C 
{
public:
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;

public:
	inline static int32_t get_offset_of__ptr_0() { return static_cast<int32_t>(offsetof(FunctionPointer_1_tE7D69B6848358D8896A323A0E6814A895E4DBF4C, ____ptr_0)); }
	inline intptr_t get__ptr_0() const { return ____ptr_0; }
	inline intptr_t* get_address_of__ptr_0() { return &____ptr_0; }
	inline void set__ptr_0(intptr_t value)
	{
		____ptr_0 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Networking.Transport.NetworkEndPoint_AddressType
struct  AddressType_tF76EC6532CB06EAEDE62844ACCC07784F60BC3B3 
{
public:
	// System.Int32 Unity.Networking.Transport.NetworkEndPoint_AddressType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressType_tF76EC6532CB06EAEDE62844ACCC07784F60BC3B3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress
struct  RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress_<data>e__FixedBuffer Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress::data
			U3CdataU3Ee__FixedBuffer_t26DCEE63408F8531E1C9CD4978124E075F2C0C5B  ___data_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CdataU3Ee__FixedBuffer_t26DCEE63408F8531E1C9CD4978124E075F2C0C5B  ___data_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress_<ipv6>e__FixedBuffer Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress::ipv6
			U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B  ___ipv6_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B  ___ipv6_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress_<ipv4_bytes>e__FixedBuffer Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress::ipv4_bytes
			U3Cipv4_bytesU3Ee__FixedBuffer_t293D800803767242C7EA56EEC3F321250E06E8F2  ___ipv4_bytes_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3Cipv4_bytesU3Ee__FixedBuffer_t293D800803767242C7EA56EEC3F321250E06E8F2  ___ipv4_bytes_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress::ipv4
			uint32_t ___ipv4_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___ipv4_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port_4_OffsetPadding[16];
			// System.UInt16 Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress::port
			uint16_t ___port_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port_4_OffsetPadding_forAlignmentOnly[16];
			uint16_t ___port_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___family_5_OffsetPadding[18];
			// System.Byte Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress::family
			uint8_t ___family_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___family_5_OffsetPadding_forAlignmentOnly[18];
			uint8_t ___family_5_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87, ___data_0)); }
	inline U3CdataU3Ee__FixedBuffer_t26DCEE63408F8531E1C9CD4978124E075F2C0C5B  get_data_0() const { return ___data_0; }
	inline U3CdataU3Ee__FixedBuffer_t26DCEE63408F8531E1C9CD4978124E075F2C0C5B * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(U3CdataU3Ee__FixedBuffer_t26DCEE63408F8531E1C9CD4978124E075F2C0C5B  value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_ipv6_1() { return static_cast<int32_t>(offsetof(RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87, ___ipv6_1)); }
	inline U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B  get_ipv6_1() const { return ___ipv6_1; }
	inline U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * get_address_of_ipv6_1() { return &___ipv6_1; }
	inline void set_ipv6_1(U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B  value)
	{
		___ipv6_1 = value;
	}

	inline static int32_t get_offset_of_ipv4_bytes_2() { return static_cast<int32_t>(offsetof(RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87, ___ipv4_bytes_2)); }
	inline U3Cipv4_bytesU3Ee__FixedBuffer_t293D800803767242C7EA56EEC3F321250E06E8F2  get_ipv4_bytes_2() const { return ___ipv4_bytes_2; }
	inline U3Cipv4_bytesU3Ee__FixedBuffer_t293D800803767242C7EA56EEC3F321250E06E8F2 * get_address_of_ipv4_bytes_2() { return &___ipv4_bytes_2; }
	inline void set_ipv4_bytes_2(U3Cipv4_bytesU3Ee__FixedBuffer_t293D800803767242C7EA56EEC3F321250E06E8F2  value)
	{
		___ipv4_bytes_2 = value;
	}

	inline static int32_t get_offset_of_ipv4_3() { return static_cast<int32_t>(offsetof(RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87, ___ipv4_3)); }
	inline uint32_t get_ipv4_3() const { return ___ipv4_3; }
	inline uint32_t* get_address_of_ipv4_3() { return &___ipv4_3; }
	inline void set_ipv4_3(uint32_t value)
	{
		___ipv4_3 = value;
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87, ___port_4)); }
	inline uint16_t get_port_4() const { return ___port_4; }
	inline uint16_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(uint16_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_family_5() { return static_cast<int32_t>(offsetof(RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87, ___family_5)); }
	inline uint8_t get_family_5() const { return ___family_5; }
	inline uint8_t* get_address_of_family_5() { return &___family_5; }
	inline void set_family_5(uint8_t value)
	{
		___family_5 = value;
	}
};


// Unity.Networking.Transport.NetworkFamily
struct  NetworkFamily_t8C1BA2259BB1B3A29FF57D1369A06FDB505E556E 
{
public:
	// System.Int32 Unity.Networking.Transport.NetworkFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkFamily_t8C1BA2259BB1B3A29FF57D1369A06FDB505E556E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Networking.Transport.NetworkInterfaceEndPoint
struct  NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 
{
public:
	// System.Int32 Unity.Networking.Transport.NetworkInterfaceEndPoint::dataLength
	int32_t ___dataLength_0;
	// Unity.Networking.Transport.NetworkInterfaceEndPoint_<data>e__FixedBuffer Unity.Networking.Transport.NetworkInterfaceEndPoint::data
	U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA  ___data_1;

public:
	inline static int32_t get_offset_of_dataLength_0() { return static_cast<int32_t>(offsetof(NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0, ___dataLength_0)); }
	inline int32_t get_dataLength_0() const { return ___dataLength_0; }
	inline int32_t* get_address_of_dataLength_0() { return &___dataLength_0; }
	inline void set_dataLength_0(int32_t value)
	{
		___dataLength_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0, ___data_1)); }
	inline U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA  get_data_1() const { return ___data_1; }
	inline U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA  value)
	{
		___data_1 = value;
	}
};


// Unity.Networking.Transport.NetworkInterfaceSendHandle
struct  NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 
{
public:
	// System.IntPtr Unity.Networking.Transport.NetworkInterfaceSendHandle::data
	intptr_t ___data_0;
	// System.Int32 Unity.Networking.Transport.NetworkInterfaceSendHandle::capacity
	int32_t ___capacity_1;
	// System.Int32 Unity.Networking.Transport.NetworkInterfaceSendHandle::size
	int32_t ___size_2;
	// System.Int32 Unity.Networking.Transport.NetworkInterfaceSendHandle::id
	int32_t ___id_3;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718, ___data_0)); }
	inline intptr_t get_data_0() const { return ___data_0; }
	inline intptr_t* get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(intptr_t value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_capacity_1() { return static_cast<int32_t>(offsetof(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718, ___capacity_1)); }
	inline int32_t get_capacity_1() const { return ___capacity_1; }
	inline int32_t* get_address_of_capacity_1() { return &___capacity_1; }
	inline void set_capacity_1(int32_t value)
	{
		___capacity_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}
};


// Unity.Networking.Transport.NetworkSendQueueHandle
struct  NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 
{
public:
	// System.IntPtr Unity.Networking.Transport.NetworkSendQueueHandle::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// Unity.Networking.Transport.network_address
struct  network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.network_address_<data>e__FixedBuffer Unity.Networking.Transport.network_address::data
			U3CdataU3Ee__FixedBuffer_tBC6A02E2A957AF2E78A5ACEE7C00D7A9C3B17819  ___data_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CdataU3Ee__FixedBuffer_tBC6A02E2A957AF2E78A5ACEE7C00D7A9C3B17819  ___data_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___length_2_OffsetPadding[28];
			// System.Int32 Unity.Networking.Transport.network_address::length
			int32_t ___length_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___length_2_OffsetPadding_forAlignmentOnly[28];
			int32_t ___length_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E, ___data_1)); }
	inline U3CdataU3Ee__FixedBuffer_tBC6A02E2A957AF2E78A5ACEE7C00D7A9C3B17819  get_data_1() const { return ___data_1; }
	inline U3CdataU3Ee__FixedBuffer_tBC6A02E2A957AF2E78A5ACEE7C00D7A9C3B17819 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(U3CdataU3Ee__FixedBuffer_tBC6A02E2A957AF2E78A5ACEE7C00D7A9C3B17819  value)
	{
		___data_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};


// Unity.Networking.Transport.sockaddr_in
struct  sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.sockaddr_in_<data>e__FixedBuffer Unity.Networking.Transport.sockaddr_in::data
			U3CdataU3Ee__FixedBuffer_tC41E6354B311EC3B534925959627CEDEF7BA3E16  ___data_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CdataU3Ee__FixedBuffer_tC41E6354B311EC3B534925959627CEDEF7BA3E16  ___data_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.sa_family_t Unity.Networking.Transport.sockaddr_in::sin_family
			sa_family_t_t2C1FD6C99A97D46D74F350A8F6071A436E161A94  ___sin_family_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			sa_family_t_t2C1FD6C99A97D46D74F350A8F6071A436E161A94  ___sin_family_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sin_port_2_OffsetPadding[2];
			// System.UInt16 Unity.Networking.Transport.sockaddr_in::sin_port
			uint16_t ___sin_port_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sin_port_2_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___sin_port_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sin_addr_3_OffsetPadding[4];
			// Unity.Networking.Transport.in_addr Unity.Networking.Transport.sockaddr_in::sin_addr
			in_addr_t1D8B03B0A509C1CDA32B72068B348112D70CC222  ___sin_addr_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sin_addr_3_OffsetPadding_forAlignmentOnly[4];
			in_addr_t1D8B03B0A509C1CDA32B72068B348112D70CC222  ___sin_addr_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sin_zero_4_OffsetPadding[8];
			// Unity.Networking.Transport.sockaddr_in_<sin_zero>e__FixedBuffer Unity.Networking.Transport.sockaddr_in::sin_zero
			U3Csin_zeroU3Ee__FixedBuffer_t8F0B5FDEB90B7AD9B55A5D970DF6E1554034FA2E  ___sin_zero_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sin_zero_4_OffsetPadding_forAlignmentOnly[8];
			U3Csin_zeroU3Ee__FixedBuffer_t8F0B5FDEB90B7AD9B55A5D970DF6E1554034FA2E  ___sin_zero_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE, ___data_0)); }
	inline U3CdataU3Ee__FixedBuffer_tC41E6354B311EC3B534925959627CEDEF7BA3E16  get_data_0() const { return ___data_0; }
	inline U3CdataU3Ee__FixedBuffer_tC41E6354B311EC3B534925959627CEDEF7BA3E16 * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(U3CdataU3Ee__FixedBuffer_tC41E6354B311EC3B534925959627CEDEF7BA3E16  value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_sin_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE, ___sin_family_1)); }
	inline sa_family_t_t2C1FD6C99A97D46D74F350A8F6071A436E161A94  get_sin_family_1() const { return ___sin_family_1; }
	inline sa_family_t_t2C1FD6C99A97D46D74F350A8F6071A436E161A94 * get_address_of_sin_family_1() { return &___sin_family_1; }
	inline void set_sin_family_1(sa_family_t_t2C1FD6C99A97D46D74F350A8F6071A436E161A94  value)
	{
		___sin_family_1 = value;
	}

	inline static int32_t get_offset_of_sin_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE, ___sin_port_2)); }
	inline uint16_t get_sin_port_2() const { return ___sin_port_2; }
	inline uint16_t* get_address_of_sin_port_2() { return &___sin_port_2; }
	inline void set_sin_port_2(uint16_t value)
	{
		___sin_port_2 = value;
	}

	inline static int32_t get_offset_of_sin_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE, ___sin_addr_3)); }
	inline in_addr_t1D8B03B0A509C1CDA32B72068B348112D70CC222  get_sin_addr_3() const { return ___sin_addr_3; }
	inline in_addr_t1D8B03B0A509C1CDA32B72068B348112D70CC222 * get_address_of_sin_addr_3() { return &___sin_addr_3; }
	inline void set_sin_addr_3(in_addr_t1D8B03B0A509C1CDA32B72068B348112D70CC222  value)
	{
		___sin_addr_3 = value;
	}

	inline static int32_t get_offset_of_sin_zero_4() { return static_cast<int32_t>(offsetof(sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE, ___sin_zero_4)); }
	inline U3Csin_zeroU3Ee__FixedBuffer_t8F0B5FDEB90B7AD9B55A5D970DF6E1554034FA2E  get_sin_zero_4() const { return ___sin_zero_4; }
	inline U3Csin_zeroU3Ee__FixedBuffer_t8F0B5FDEB90B7AD9B55A5D970DF6E1554034FA2E * get_address_of_sin_zero_4() { return &___sin_zero_4; }
	inline void set_sin_zero_4(U3Csin_zeroU3Ee__FixedBuffer_t8F0B5FDEB90B7AD9B55A5D970DF6E1554034FA2E  value)
	{
		___sin_zero_4 = value;
	}
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int64>
struct  NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Networking.Transport.NetworkEndPoint
struct  NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 
{
public:
	// Unity.Networking.Transport.NetworkEndPoint_RawNetworkAddress Unity.Networking.Transport.NetworkEndPoint::rawNetworkAddress
	RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87  ___rawNetworkAddress_1;
	// System.Int32 Unity.Networking.Transport.NetworkEndPoint::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_rawNetworkAddress_1() { return static_cast<int32_t>(offsetof(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4, ___rawNetworkAddress_1)); }
	inline RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87  get_rawNetworkAddress_1() const { return ___rawNetworkAddress_1; }
	inline RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * get_address_of_rawNetworkAddress_1() { return &___rawNetworkAddress_1; }
	inline void set_rawNetworkAddress_1(RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87  value)
	{
		___rawNetworkAddress_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};

struct NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_StaticFields
{
public:
	// System.Boolean Unity.Networking.Transport.NetworkEndPoint::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};


// Unity.Networking.Transport.TransportFunctionPointer`1<System.Object>
struct  TransportFunctionPointer_1_t99C976B7323CDA76F0B34C4B4E65F94D11E6BAB4 
{
public:
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t5AF97C37E92E5F70B805E2C94E6BB3582D040303  ___Ptr_0;

public:
	inline static int32_t get_offset_of_Ptr_0() { return static_cast<int32_t>(offsetof(TransportFunctionPointer_1_t99C976B7323CDA76F0B34C4B4E65F94D11E6BAB4, ___Ptr_0)); }
	inline FunctionPointer_1_t5AF97C37E92E5F70B805E2C94E6BB3582D040303  get_Ptr_0() const { return ___Ptr_0; }
	inline FunctionPointer_1_t5AF97C37E92E5F70B805E2C94E6BB3582D040303 * get_address_of_Ptr_0() { return &___Ptr_0; }
	inline void set_Ptr_0(FunctionPointer_1_t5AF97C37E92E5F70B805E2C94E6BB3582D040303  value)
	{
		___Ptr_0 = value;
	}
};


// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate>
struct  TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67 
{
public:
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t2EC6A79F8A85D30B46778976EDC115AB45A2EDC7  ___Ptr_0;

public:
	inline static int32_t get_offset_of_Ptr_0() { return static_cast<int32_t>(offsetof(TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67, ___Ptr_0)); }
	inline FunctionPointer_1_t2EC6A79F8A85D30B46778976EDC115AB45A2EDC7  get_Ptr_0() const { return ___Ptr_0; }
	inline FunctionPointer_1_t2EC6A79F8A85D30B46778976EDC115AB45A2EDC7 * get_address_of_Ptr_0() { return &___Ptr_0; }
	inline void set_Ptr_0(FunctionPointer_1_t2EC6A79F8A85D30B46778976EDC115AB45A2EDC7  value)
	{
		___Ptr_0 = value;
	}
};


// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate>
struct  TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8 
{
public:
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t07F98C552F64E560682665659A71D52879BB7469  ___Ptr_0;

public:
	inline static int32_t get_offset_of_Ptr_0() { return static_cast<int32_t>(offsetof(TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8, ___Ptr_0)); }
	inline FunctionPointer_1_t07F98C552F64E560682665659A71D52879BB7469  get_Ptr_0() const { return ___Ptr_0; }
	inline FunctionPointer_1_t07F98C552F64E560682665659A71D52879BB7469 * get_address_of_Ptr_0() { return &___Ptr_0; }
	inline void set_Ptr_0(FunctionPointer_1_t07F98C552F64E560682665659A71D52879BB7469  value)
	{
		___Ptr_0 = value;
	}
};


// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate>
struct  TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C 
{
public:
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tE7D69B6848358D8896A323A0E6814A895E4DBF4C  ___Ptr_0;

public:
	inline static int32_t get_offset_of_Ptr_0() { return static_cast<int32_t>(offsetof(TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C, ___Ptr_0)); }
	inline FunctionPointer_1_tE7D69B6848358D8896A323A0E6814A895E4DBF4C  get_Ptr_0() const { return ___Ptr_0; }
	inline FunctionPointer_1_tE7D69B6848358D8896A323A0E6814A895E4DBF4C * get_address_of_Ptr_0() { return &___Ptr_0; }
	inline void set_Ptr_0(FunctionPointer_1_tE7D69B6848358D8896A323A0E6814A895E4DBF4C  value)
	{
		___Ptr_0 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// Unity.Networking.Transport.NetworkSendInterface
struct  NetworkSendInterface_tF39DC7A0481C5CF5D0B885CA5E5A1B53487379FE 
{
public:
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::BeginSendMessage
	TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8  ___BeginSendMessage_0;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::EndSendMessage
	TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C  ___EndSendMessage_1;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::AbortSendMessage
	TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67  ___AbortSendMessage_2;
	// System.IntPtr Unity.Networking.Transport.NetworkSendInterface::UserData
	intptr_t ___UserData_3;

public:
	inline static int32_t get_offset_of_BeginSendMessage_0() { return static_cast<int32_t>(offsetof(NetworkSendInterface_tF39DC7A0481C5CF5D0B885CA5E5A1B53487379FE, ___BeginSendMessage_0)); }
	inline TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8  get_BeginSendMessage_0() const { return ___BeginSendMessage_0; }
	inline TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8 * get_address_of_BeginSendMessage_0() { return &___BeginSendMessage_0; }
	inline void set_BeginSendMessage_0(TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8  value)
	{
		___BeginSendMessage_0 = value;
	}

	inline static int32_t get_offset_of_EndSendMessage_1() { return static_cast<int32_t>(offsetof(NetworkSendInterface_tF39DC7A0481C5CF5D0B885CA5E5A1B53487379FE, ___EndSendMessage_1)); }
	inline TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C  get_EndSendMessage_1() const { return ___EndSendMessage_1; }
	inline TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C * get_address_of_EndSendMessage_1() { return &___EndSendMessage_1; }
	inline void set_EndSendMessage_1(TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C  value)
	{
		___EndSendMessage_1 = value;
	}

	inline static int32_t get_offset_of_AbortSendMessage_2() { return static_cast<int32_t>(offsetof(NetworkSendInterface_tF39DC7A0481C5CF5D0B885CA5E5A1B53487379FE, ___AbortSendMessage_2)); }
	inline TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67  get_AbortSendMessage_2() const { return ___AbortSendMessage_2; }
	inline TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67 * get_address_of_AbortSendMessage_2() { return &___AbortSendMessage_2; }
	inline void set_AbortSendMessage_2(TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67  value)
	{
		___AbortSendMessage_2 = value;
	}

	inline static int32_t get_offset_of_UserData_3() { return static_cast<int32_t>(offsetof(NetworkSendInterface_tF39DC7A0481C5CF5D0B885CA5E5A1B53487379FE, ___UserData_3)); }
	inline intptr_t get_UserData_3() const { return ___UserData_3; }
	inline intptr_t* get_address_of_UserData_3() { return &___UserData_3; }
	inline void set_UserData_3(intptr_t value)
	{
		___UserData_3 = value;
	}
};


// Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate
struct  AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate
struct  BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate
struct  EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Networking.Transport.UDPNetworkInterface
struct  UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 
{
public:
	// Unity.Collections.NativeArray`1<System.Int64> Unity.Networking.Transport.UDPNetworkInterface::m_UserData
	NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78  ___m_UserData_0;

public:
	inline static int32_t get_offset_of_m_UserData_0() { return static_cast<int32_t>(offsetof(UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2, ___m_UserData_0)); }
	inline NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78  get_m_UserData_0() const { return ___m_UserData_0; }
	inline NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 * get_address_of_m_UserData_0() { return &___m_UserData_0; }
	inline void set_m_UserData_0(NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78  value)
	{
		___m_UserData_0 = value;
	}
};

struct UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2_StaticFields
{
public:
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate> Unity.Networking.Transport.UDPNetworkInterface::BeginSendMessageFunctionPointer
	TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8  ___BeginSendMessageFunctionPointer_1;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate> Unity.Networking.Transport.UDPNetworkInterface::EndSendMessageFunctionPointer
	TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C  ___EndSendMessageFunctionPointer_2;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate> Unity.Networking.Transport.UDPNetworkInterface::AbortSendMessageFunctionPointer
	TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67  ___AbortSendMessageFunctionPointer_3;

public:
	inline static int32_t get_offset_of_BeginSendMessageFunctionPointer_1() { return static_cast<int32_t>(offsetof(UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2_StaticFields, ___BeginSendMessageFunctionPointer_1)); }
	inline TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8  get_BeginSendMessageFunctionPointer_1() const { return ___BeginSendMessageFunctionPointer_1; }
	inline TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8 * get_address_of_BeginSendMessageFunctionPointer_1() { return &___BeginSendMessageFunctionPointer_1; }
	inline void set_BeginSendMessageFunctionPointer_1(TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8  value)
	{
		___BeginSendMessageFunctionPointer_1 = value;
	}

	inline static int32_t get_offset_of_EndSendMessageFunctionPointer_2() { return static_cast<int32_t>(offsetof(UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2_StaticFields, ___EndSendMessageFunctionPointer_2)); }
	inline TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C  get_EndSendMessageFunctionPointer_2() const { return ___EndSendMessageFunctionPointer_2; }
	inline TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C * get_address_of_EndSendMessageFunctionPointer_2() { return &___EndSendMessageFunctionPointer_2; }
	inline void set_EndSendMessageFunctionPointer_2(TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C  value)
	{
		___EndSendMessageFunctionPointer_2 = value;
	}

	inline static int32_t get_offset_of_AbortSendMessageFunctionPointer_3() { return static_cast<int32_t>(offsetof(UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2_StaticFields, ___AbortSendMessageFunctionPointer_3)); }
	inline TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67  get_AbortSendMessageFunctionPointer_3() const { return ___AbortSendMessageFunctionPointer_3; }
	inline TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67 * get_address_of_AbortSendMessageFunctionPointer_3() { return &___AbortSendMessageFunctionPointer_3; }
	inline void set_AbortSendMessageFunctionPointer_3(TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67  value)
	{
		___AbortSendMessageFunctionPointer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m1F612D56A04DDB37F1BE0D0A470FCDA5D864BFBE_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m88692292C0132AEEA3710F8CB2E8E4D66DE57607_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___nativeArray0, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<Unity.Networking.Transport.NetworkEndPoint/RawNetworkAddress>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_gshared (RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * ___output0, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<System.Byte>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC116C5E222D32B750CB03B895AD5F4B987422A38_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___nativeArray0, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.UInt32>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m689B828F0D5BEBE47FA2D87336A6635E79FA2A4D_gshared (uint32_t* ___output0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int64>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m09FCEE3963121831E3AD8A1844FCF612F8A9CF43_gshared (NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 * __this, const RuntimeMethod* method);
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportFunctionPointer_1__ctor_m1166806983628D44A4417DBC0BAFD759BC35F265_gshared (TransportFunctionPointer_1_t99C976B7323CDA76F0B34C4B4E65F94D11E6BAB4 * __this, RuntimeObject * ___executeDelegate0, const RuntimeMethod* method);

// System.UInt16 Unity.Networking.Transport.NetworkEndPoint::ByteSwap(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetworkEndPoint_ByteSwap_m2E1932FB51C3E00EAE4933CB437D92D100CE78FF (uint16_t ___val0, const RuntimeMethod* method);
// System.UInt16 Unity.Networking.Transport.NetworkEndPoint::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetworkEndPoint_get_Port_m38690BA3B68376261CAC75686FC1366971F7B742 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method);
// Unity.Networking.Transport.NetworkFamily Unity.Networking.Transport.NetworkEndPoint::get_Family()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkEndPoint_get_Family_mAAAFD4DD31A8696D1EA376AD3493CE573AE23FB3 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method);
// System.Void Unity.Networking.Transport.NetworkEndPoint::set_Family(Unity.Networking.Transport.NetworkFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEndPoint_set_Family_m95C94A903A391BE27287807461EE02829DEB44C1 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m1F612D56A04DDB37F1BE0D0A470FCDA5D864BFBE (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m1F612D56A04DDB37F1BE0D0A470FCDA5D864BFBE_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m88692292C0132AEEA3710F8CB2E8E4D66DE57607 (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m88692292C0132AEEA3710F8CB2E8E4D66DE57607_gshared)(___nativeArray0, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<Unity.Networking.Transport.NetworkEndPoint/RawNetworkAddress>(!!0&)
inline void* UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD (RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * ___output0, const RuntimeMethod* method)
{
	return ((  void* (*) (RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 *, const RuntimeMethod*))UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_gshared)(___output0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkEndPoint::GetRawAddressBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  NetworkEndPoint_GetRawAddressBytes_m3216D65ED4A40A668EC65242DD93AAD68976C6A6 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<System.Byte>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC116C5E222D32B750CB03B895AD5F4B987422A38 (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC116C5E222D32B750CB03B895AD5F4B987422A38_gshared)(___nativeArray0, method);
}
// System.Void Unity.Networking.Transport.NetworkEndPoint::SetRawAddressBytes(Unity.Collections.NativeArray`1<System.Byte>,Unity.Networking.Transport.NetworkFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEndPoint_SetRawAddressBytes_m1BB613BF547BED8BF76D6783A07186B514D58242 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___bytes0, int32_t ___family1, const RuntimeMethod* method);
// System.UInt16 Unity.Networking.Transport.NetworkEndPoint::get_RawPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetworkEndPoint_get_RawPort_mED5AC3808B0E01F161DE5E3D036DAB43125F3B93 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method);
// System.Void Unity.Networking.Transport.NetworkEndPoint::set_RawPort(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEndPoint_set_RawPort_mD0E1D11C0544798A61F5570AB74F88897A896176 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.String Unity.Networking.Transport.NetworkEndPoint::AddressAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkEndPoint_AddressAsString_m0AFA40D9D4CB91FE013615316E52F89F9D881756 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method);
// System.String Unity.Networking.Transport.NetworkEndPoint::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkEndPoint_get_Address_m71B08B9A8394D42577350E72DF4A30F23AD9F5A8 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_get_IsValid_m9AA29EF5B4960261F50354EEB97D8C709AE0909B (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method);
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::CreateAddress(System.UInt16,Unity.Networking.Transport.NetworkEndPoint/AddressType,Unity.Networking.Transport.NetworkFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  NetworkEndPoint_CreateAddress_m24F15B27A5948F9A1C7A7A0FD8C2A272BC13C540 (uint16_t ___port0, int32_t ___type1, int32_t ___family2, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.UInt32 Unity.Networking.Transport.NetworkEndPoint::ByteSwap(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkEndPoint_ByteSwap_m8102F3407880255D362C9A48F5B5F5737411C5BD (uint32_t ___val0, const RuntimeMethod* method);
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::Compare(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_Compare_mAE8457D4CD6A7D684D1B8D1019F01DC6976044F3 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  ___other0, const RuntimeMethod* method);
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::op_Equality(Unity.Networking.Transport.NetworkEndPoint,Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_op_Equality_m89D4B029CF44EB80585F8A25D67E30B42AEA5336 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  ___lhs0, NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  ___rhs1, const RuntimeMethod* method);
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_Equals_m6DC01312B2C5E44E7FD56E48515ACD6FCEEC0D95 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 Unity.Networking.Transport.NetworkEndPoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkEndPoint_GetHashCode_mD2585758E84F0263DDEC02472E81EEF26C905002 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCmp(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_MemCmp_mDA7B6D4A6677206212DBD89D1F3AE5D5A5672FC8 (void* ___ptr10, void* ___ptr21, int64_t ___size2, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Boolean Unity.Networking.Transport.NetworkInterfaceEndPoint::Compare(Unity.Networking.Transport.NetworkInterfaceEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceEndPoint_Compare_m22D67F8E2007CCB5758BC9A501CD94E8B8E2879C (NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * __this, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  ___other0, const RuntimeMethod* method);
// System.Boolean Unity.Networking.Transport.NetworkInterfaceEndPoint::op_Equality(Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.NetworkInterfaceEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceEndPoint_op_Equality_m881EAFED3A1273EF9C31886B7D633597853212B7 (NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  ___lhs0, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  ___rhs1, const RuntimeMethod* method);
// System.Boolean Unity.Networking.Transport.NetworkInterfaceEndPoint::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceEndPoint_Equals_m2FA52DE13A8E9F1D24B9D964D28DDE9B9A6F548B (NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 Unity.Networking.Transport.NetworkInterfaceEndPoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkInterfaceEndPoint_GetHashCode_mB9E7512A0CB786C5C5D31231A0344D2CA4E1D17E (NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Networking.Transport.UDPNetworkInterface::BeginSendMessage(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDPNetworkInterface_BeginSendMessage_mE825F4B82CCD7FF06BEA57AF7D66AAEAC50646D4 (NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, intptr_t ___userData1, int32_t ___requiredPayloadSize2, const RuntimeMethod* method);
// System.Int32 Unity.Networking.Transport.UDPNetworkInterface::EndSendMessage(Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.IntPtr,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDPNetworkInterface_EndSendMessage_m98325DF88A408B9482B6BF26B0F2495C55645A11 (NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * ___address1, intptr_t ___userData2, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 * ___sendQueue3, const RuntimeMethod* method);
// System.Void Unity.Networking.Transport.UDPNetworkInterface::AbortSendMessage(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPNetworkInterface_AbortSendMessage_m2D2277C29CF9721D4143404F51FAFD7DA7B3ED9A (NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, intptr_t ___userData1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// Unity.Networking.Transport.NetworkInterfaceEndPoint Unity.Networking.Transport.UDPNetworkInterface::ParseNetworkAddress(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  UDPNetworkInterface_ParseNetworkAddress_m5BAA9B51B792B3F8C1822BF981FD4FA4DD101FC3 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  ___endPoint0, const RuntimeMethod* method);
// Unity.Networking.Transport.NetworkInterfaceEndPoint Unity.Networking.Transport.UDPNetworkInterface::CreateInterfaceEndPoint(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  UDPNetworkInterface_CreateInterfaceEndPoint_mCEE29608220F44B4C1227C7BED954298EA84D2D0 (UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 * __this, NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  ___endPoint0, const RuntimeMethod* method);
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::get_AnyIpv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  NetworkEndPoint_get_AnyIpv4_mF5C5A510219907BFC8B888F94B1DE258CB387F97 (const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.UInt32>(!!0&)
inline void* UnsafeUtility_AddressOf_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m689B828F0D5BEBE47FA2D87336A6635E79FA2A4D (uint32_t* ___output0, const RuntimeMethod* method)
{
	return ((  void* (*) (uint32_t*, const RuntimeMethod*))UnsafeUtility_AddressOf_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m689B828F0D5BEBE47FA2D87336A6635E79FA2A4D_gshared)(___output0, method);
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.UDPNetworkInterface::GetGenericEndPoint(Unity.Networking.Transport.NetworkInterfaceEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  UDPNetworkInterface_GetGenericEndPoint_m5DF19E390E437C36B08437FA3A2D49696C89559B (UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 * __this, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  ___endpoint0, const RuntimeMethod* method);
// System.Void Unity.Networking.Transport.UDPNetworkInterface::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPNetworkInterface_Close_mF5BD73EA728C95817A0E0D9E771CA4738804680B (UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Networking.Transport.NativeBindings::network_terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_terminate_mEF70B9B8D12FC0F4F49563851C133B8D88641133 (const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int64>::Dispose()
inline void NativeArray_1_Dispose_m09FCEE3963121831E3AD8A1844FCF612F8A9CF43 (NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 *, const RuntimeMethod*))NativeArray_1_Dispose_m09FCEE3963121831E3AD8A1844FCF612F8A9CF43_gshared)(__this, method);
}
// System.Void Unity.Networking.Transport.UDPNetworkInterface::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPNetworkInterface_Dispose_m8DE7CFD142ED7EF300FE2189A8934EF807A94CFD (UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Networking.Transport.NativeBindings::network_close(System.Int64&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_close_m7A1F3BEADF84033AED54F8375356DD81DE05A00D (int64_t* ___socket_handle0, int32_t* ___errorcode1, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_Malloc_m43BC7C9BE1437A70DD9A236418B0906CD3617331 (int64_t ___size0, int32_t ___alignment1, int32_t ___allocator2, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21 (void* ___value0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.Int32 Unity.Networking.Transport.NativeBindings::network_sendmsg(System.Int64,System.Void*,System.Int32,Unity.Networking.Transport.network_address&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_sendmsg_mF5550350119C08CDEDB5D9D6429D3BA858138A3F (int64_t ___socket_handle0, void* ___iov1, int32_t ___iov_len2, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E * ___address3, int32_t* ___errorcode4, const RuntimeMethod* method);
// System.Void Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeginSendMessageDelegate__ctor_mBABA51ACBE18164BDD4C0464E98106AB70E9B8C7 (BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>::.ctor(T)
inline void TransportFunctionPointer_1__ctor_mC9B7F7063034CE410ABD6858E1D9788832045AD9 (TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8 * __this, BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645 * ___executeDelegate0, const RuntimeMethod* method)
{
	((  void (*) (TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8 *, BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645 *, const RuntimeMethod*))TransportFunctionPointer_1__ctor_m1166806983628D44A4417DBC0BAFD759BC35F265_gshared)(__this, ___executeDelegate0, method);
}
// System.Void Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndSendMessageDelegate__ctor_mE5E0E71FFF4EA46BB0C20F05F55FD4215C802BA8 (EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>::.ctor(T)
inline void TransportFunctionPointer_1__ctor_m7C3A380D36774CBD852C32BD9890ABE5A1D7CCEA (TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C * __this, EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D * ___executeDelegate0, const RuntimeMethod* method)
{
	((  void (*) (TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C *, EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D *, const RuntimeMethod*))TransportFunctionPointer_1__ctor_m1166806983628D44A4417DBC0BAFD759BC35F265_gshared)(__this, ___executeDelegate0, method);
}
// System.Void Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbortSendMessageDelegate__ctor_mDB6B7932166F5A16426EA890D990CDFE6C6EECC5 (AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>::.ctor(T)
inline void TransportFunctionPointer_1__ctor_m99FA00B60102DE5998F4089EA565B7086A4AAE28 (TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67 * __this, AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF * ___executeDelegate0, const RuntimeMethod* method)
{
	((  void (*) (TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67 *, AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF *, const RuntimeMethod*))TransportFunctionPointer_1__ctor_m1166806983628D44A4417DBC0BAFD759BC35F265_gshared)(__this, ___executeDelegate0, method);
}
// System.Boolean Unity.Networking.Transport.network_address::Equals(Unity.Networking.Transport.network_address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool network_address_Equals_mC9677EEEF83970F9C047554855E8142CB2B01033 (network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E * __this, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E  ___other0, const RuntimeMethod* method);
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
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL network_terminate();
#endif
// System.Int32 Unity.Networking.Transport.NativeBindings::network_terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_terminate_mEF70B9B8D12FC0F4F49563851C133B8D88641133 (const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("network.bindings"), "network_terminate", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(network_terminate)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL network_create_and_bind(int64_t*, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *, int32_t*);
#endif
// System.Int32 Unity.Networking.Transport.NativeBindings::network_create_and_bind(System.Int64&,Unity.Networking.Transport.network_address&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_create_and_bind_m57FC3336FCB886B173D34E8EEA72A856D8A7E967 (int64_t* ___socket_handle0, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E * ___address1, int32_t* ___errorcode2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t*, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t*) + sizeof(network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("network.bindings"), "network_create_and_bind", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(network_create_and_bind)(___socket_handle0, ___address1, ___errorcode2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket_handle0, ___address1, ___errorcode2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL network_close(int64_t*, int32_t*);
#endif
// System.Int32 Unity.Networking.Transport.NativeBindings::network_close(System.Int64&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_close_m7A1F3BEADF84033AED54F8375356DD81DE05A00D (int64_t* ___socket_handle0, int32_t* ___errorcode1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("network.bindings"), "network_close", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(network_close)(___socket_handle0, ___errorcode1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket_handle0, ___errorcode1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL network_set_nonblocking(int64_t, int32_t*);
#endif
// System.Int32 Unity.Networking.Transport.NativeBindings::network_set_nonblocking(System.Int64,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_set_nonblocking_mBFB251AADCFBDAE5314ADBD7847DC3E65CEC930A (int64_t ___socket_handle0, int32_t* ___errorcode1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("network.bindings"), "network_set_nonblocking", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(network_set_nonblocking)(___socket_handle0, ___errorcode1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket_handle0, ___errorcode1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL network_set_send_buffer_size(int64_t, int32_t, int32_t*);
#endif
// System.Int32 Unity.Networking.Transport.NativeBindings::network_set_send_buffer_size(System.Int64,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_set_send_buffer_size_m3FF9871B752F9B824A7D7C7D9AA12090282959CD (int64_t ___socket_handle0, int32_t ___size1, int32_t* ___errorcode2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("network.bindings"), "network_set_send_buffer_size", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(network_set_send_buffer_size)(___socket_handle0, ___size1, ___errorcode2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket_handle0, ___size1, ___errorcode2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL network_set_receive_buffer_size(int64_t, int32_t, int32_t*);
#endif
// System.Int32 Unity.Networking.Transport.NativeBindings::network_set_receive_buffer_size(System.Int64,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_set_receive_buffer_size_m47E74091BB5FA99C25060BF63D670DCB090EC742 (int64_t ___socket_handle0, int32_t ___size1, int32_t* ___errorcode2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("network.bindings"), "network_set_receive_buffer_size", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(network_set_receive_buffer_size)(___socket_handle0, ___size1, ___errorcode2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket_handle0, ___size1, ___errorcode2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL network_get_send_buffer_size(int64_t, int32_t*, int32_t*);
#endif
// System.Int32 Unity.Networking.Transport.NativeBindings::network_get_send_buffer_size(System.Int64,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_get_send_buffer_size_m8C68A1EB225809415C670322082E8D6D9D97DD96 (int64_t ___socket_handle0, int32_t* ___size1, int32_t* ___errorcode2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("network.bindings"), "network_get_send_buffer_size", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(network_get_send_buffer_size)(___socket_handle0, ___size1, ___errorcode2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket_handle0, ___size1, ___errorcode2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL network_get_receive_buffer_size(int64_t, int32_t*, int32_t*);
#endif
// System.Int32 Unity.Networking.Transport.NativeBindings::network_get_receive_buffer_size(System.Int64,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_get_receive_buffer_size_m94B7D3A6B41A4BED2C830F3901EBF8E306191BDE (int64_t ___socket_handle0, int32_t* ___size1, int32_t* ___errorcode2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("network.bindings"), "network_get_receive_buffer_size", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(network_get_receive_buffer_size)(___socket_handle0, ___size1, ___errorcode2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket_handle0, ___size1, ___errorcode2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL network_set_connection_reset(int64_t, int32_t);
#endif
// System.Int32 Unity.Networking.Transport.NativeBindings::network_set_connection_reset(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_set_connection_reset_mFF9086D9DE39F34E301F9E23F7A78CDF2DEA35A8 (int64_t ___socket_handle0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("network.bindings"), "network_set_connection_reset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(network_set_connection_reset)(___socket_handle0, ___value1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket_handle0, ___value1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL network_sendmsg(int64_t, void*, int32_t, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *, int32_t*);
#endif
// System.Int32 Unity.Networking.Transport.NativeBindings::network_sendmsg(System.Int64,System.Void*,System.Int32,Unity.Networking.Transport.network_address&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_sendmsg_mF5550350119C08CDEDB5D9D6429D3BA858138A3F (int64_t ___socket_handle0, void* ___iov1, int32_t ___iov_len2, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E * ___address3, int32_t* ___errorcode4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, void*, int32_t, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(void*) + sizeof(int32_t) + sizeof(network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("network.bindings"), "network_sendmsg", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(network_sendmsg)(___socket_handle0, ___iov1, ___iov_len2, ___address3, ___errorcode4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket_handle0, ___iov1, ___iov_len2, ___address3, ___errorcode4);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL network_recvmsg(int64_t, void*, int32_t, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *, int32_t*);
#endif
// System.Int32 Unity.Networking.Transport.NativeBindings::network_recvmsg(System.Int64,System.Void*,System.Int32,Unity.Networking.Transport.network_address&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_network_recvmsg_mC758C4B214BD84EBF42F5B89ACB1D17FA89BF474 (int64_t ___socket_handle0, void* ___iov1, int32_t ___iov_len2, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E * ___remote3, int32_t* ___errorcode4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, void*, int32_t, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(void*) + sizeof(int32_t) + sizeof(network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("network.bindings"), "network_recvmsg", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(network_recvmsg)(___socket_handle0, ___iov1, ___iov_len2, ___remote3, ___errorcode4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket_handle0, ___iov1, ___iov_len2, ___remote3, ___errorcode4);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Networking.Transport.NetworkEndPoint::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEndPoint__cctor_m7B3E38065FBA46DA95BB7160E4BC76DCCB857163 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint__cctor_m7B3E38065FBA46DA95BB7160E4BC76DCCB857163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	{
		// private static readonly bool IsLittleEndian = true;
		((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_StaticFields*)il2cpp_codegen_static_fields_for(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var))->set_IsLittleEndian_0((bool)1);
		// uint test = 1;
		V_0 = 1;
		// byte* test_b = (byte*) &test;
		V_1 = (uint8_t*)(((uintptr_t)(&V_0)));
		// IsLittleEndian = test_b[0] == 1;
		uint8_t* L_0 = V_1;
		int32_t L_1 = *((uint8_t*)L_0);
		((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_StaticFields*)il2cpp_codegen_static_fields_for(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var))->set_IsLittleEndian_0((bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0));
		// }
		return;
	}
}
// System.UInt16 Unity.Networking.Transport.NetworkEndPoint::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetworkEndPoint_get_Port_m38690BA3B68376261CAC75686FC1366971F7B742 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint_get_Port_m38690BA3B68376261CAC75686FC1366971F7B742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => IsLittleEndian ? ByteSwap(rawNetworkAddress.port) : rawNetworkAddress.port;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var);
		bool L_0 = ((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_StaticFields*)il2cpp_codegen_static_fields_for(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_1 = __this->get_address_of_rawNetworkAddress_1();
		uint16_t L_2 = L_1->get_port_4();
		return L_2;
	}

IL_0013:
	{
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_3 = __this->get_address_of_rawNetworkAddress_1();
		uint16_t L_4 = L_3->get_port_4();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var);
		uint16_t L_5 = NetworkEndPoint_ByteSwap_m2E1932FB51C3E00EAE4933CB437D92D100CE78FF(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  uint16_t NetworkEndPoint_get_Port_m38690BA3B68376261CAC75686FC1366971F7B742_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	return NetworkEndPoint_get_Port_m38690BA3B68376261CAC75686FC1366971F7B742(_thisAdjusted, method);
}
// Unity.Networking.Transport.NetworkFamily Unity.Networking.Transport.NetworkEndPoint::get_Family()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkEndPoint_get_Family_mAAAFD4DD31A8696D1EA376AD3493CE573AE23FB3 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method)
{
	{
		// get => (NetworkFamily) rawNetworkAddress.family;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_0 = __this->get_address_of_rawNetworkAddress_1();
		uint8_t L_1 = L_0->get_family_5();
		return (int32_t)(L_1);
	}
}
IL2CPP_EXTERN_C  int32_t NetworkEndPoint_get_Family_mAAAFD4DD31A8696D1EA376AD3493CE573AE23FB3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	return NetworkEndPoint_get_Family_mAAAFD4DD31A8696D1EA376AD3493CE573AE23FB3(_thisAdjusted, method);
}
// System.Void Unity.Networking.Transport.NetworkEndPoint::set_Family(Unity.Networking.Transport.NetworkFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEndPoint_set_Family_m95C94A903A391BE27287807461EE02829DEB44C1 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => rawNetworkAddress.family = (byte) value;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_0 = __this->get_address_of_rawNetworkAddress_1();
		int32_t L_1 = ___value0;
		L_0->set_family_5((uint8_t)(((int32_t)((uint8_t)L_1))));
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkEndPoint_set_Family_m95C94A903A391BE27287807461EE02829DEB44C1_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	NetworkEndPoint_set_Family_m95C94A903A391BE27287807461EE02829DEB44C1(_thisAdjusted, ___value0, method);
}
// Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkEndPoint::GetRawAddressBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  NetworkEndPoint_GetRawAddressBytes_m3216D65ED4A40A668EC65242DD93AAD68976C6A6 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint_GetRawAddressBytes_m3216D65ED4A40A668EC65242DD93AAD68976C6A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Family == NetworkFamily.Ipv4)
		int32_t L_0 = NetworkEndPoint_get_Family_mAAAFD4DD31A8696D1EA376AD3493CE573AE23FB3((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_002a;
		}
	}
	{
		// var bytes = new NativeArray<byte>(rawIpv4Length, Allocator.Temp);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m1F612D56A04DDB37F1BE0D0A470FCDA5D864BFBE((&L_1), 4, 2, 1, /*hidden argument*/NativeArray_1__ctor_m1F612D56A04DDB37F1BE0D0A470FCDA5D864BFBE_RuntimeMethod_var);
		// UnsafeUtility.MemCpy(bytes.GetUnsafePtr(), UnsafeUtility.AddressOf(ref rawNetworkAddress), rawIpv4Length);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_2 = L_1;
		void* L_3 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m88692292C0132AEEA3710F8CB2E8E4D66DE57607(L_2, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m88692292C0132AEEA3710F8CB2E8E4D66DE57607_RuntimeMethod_var);
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_4 = __this->get_address_of_rawNetworkAddress_1();
		void* L_5 = UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD((RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 *)L_4, /*hidden argument*/UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_RuntimeMethod_var);
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_3, (void*)(void*)L_5, (((int64_t)((int64_t)4))), /*hidden argument*/NULL);
		// return bytes;
		return L_2;
	}

IL_002a:
	{
		// else if (Family == NetworkFamily.Ipv6)
		int32_t L_6 = NetworkEndPoint_get_Family_mAAAFD4DD31A8696D1EA376AD3493CE573AE23FB3((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_0057;
		}
	}
	{
		// var bytes = new NativeArray<byte>(rawIpv6Length, Allocator.Temp);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_7;
		memset((&L_7), 0, sizeof(L_7));
		NativeArray_1__ctor_m1F612D56A04DDB37F1BE0D0A470FCDA5D864BFBE((&L_7), ((int32_t)16), 2, 1, /*hidden argument*/NativeArray_1__ctor_m1F612D56A04DDB37F1BE0D0A470FCDA5D864BFBE_RuntimeMethod_var);
		// UnsafeUtility.MemCpy(bytes.GetUnsafePtr(), UnsafeUtility.AddressOf(ref rawNetworkAddress), rawIpv6Length);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_8 = L_7;
		void* L_9 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m88692292C0132AEEA3710F8CB2E8E4D66DE57607(L_8, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m88692292C0132AEEA3710F8CB2E8E4D66DE57607_RuntimeMethod_var);
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_10 = __this->get_address_of_rawNetworkAddress_1();
		void* L_11 = UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD((RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 *)L_10, /*hidden argument*/UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_RuntimeMethod_var);
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_9, (void*)(void*)L_11, (((int64_t)((int64_t)((int32_t)16)))), /*hidden argument*/NULL);
		// return bytes;
		return L_8;
	}

IL_0057:
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 ));
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  NetworkEndPoint_GetRawAddressBytes_m3216D65ED4A40A668EC65242DD93AAD68976C6A6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	return NetworkEndPoint_GetRawAddressBytes_m3216D65ED4A40A668EC65242DD93AAD68976C6A6(_thisAdjusted, method);
}
// System.Void Unity.Networking.Transport.NetworkEndPoint::SetRawAddressBytes(Unity.Collections.NativeArray`1<System.Byte>,Unity.Networking.Transport.NetworkFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEndPoint_SetRawAddressBytes_m1BB613BF547BED8BF76D6783A07186B514D58242 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___bytes0, int32_t ___family1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint_SetRawAddressBytes_m1BB613BF547BED8BF76D6783A07186B514D58242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (family == NetworkFamily.Ipv4)
		int32_t L_0 = ___family1;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_004a;
		}
	}
	{
		// if (bytes.Length != rawIpv4Length)
		int32_t L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(&___bytes0))->___m_Length_1);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_002a;
		}
	}
	{
		// throw new InvalidOperationException($"Bad input length, a ipv4 address is 4 bytes long not {bytes.Length}");
		int32_t L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(&___bytes0))->___m_Length_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral068B9FB54D2E608481A5102799A5C272A23C7C31, L_4, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_6 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NetworkEndPoint_SetRawAddressBytes_m1BB613BF547BED8BF76D6783A07186B514D58242_RuntimeMethod_var);
	}

IL_002a:
	{
		// UnsafeUtility.MemCpy(UnsafeUtility.AddressOf(ref rawNetworkAddress), bytes.GetUnsafeReadOnlyPtr(), rawIpv4Length);
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_7 = __this->get_address_of_rawNetworkAddress_1();
		void* L_8 = UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD((RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 *)L_7, /*hidden argument*/UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_RuntimeMethod_var);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_9 = ___bytes0;
		void* L_10 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC116C5E222D32B750CB03B895AD5F4B987422A38(L_9, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC116C5E222D32B750CB03B895AD5F4B987422A38_RuntimeMethod_var);
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_8, (void*)(void*)L_10, (((int64_t)((int64_t)4))), /*hidden argument*/NULL);
		// Family = family;
		int32_t L_11 = ___family1;
		NetworkEndPoint_set_Family_m95C94A903A391BE27287807461EE02829DEB44C1((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)__this, L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004a:
	{
		// else if (family == NetworkFamily.Ipv6)
		int32_t L_12 = ___family1;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_0096;
		}
	}
	{
		// if (bytes.Length != rawIpv6Length)
		int32_t L_13 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(&___bytes0))->___m_Length_1);
		if ((((int32_t)L_13) == ((int32_t)((int32_t)16))))
		{
			goto IL_0076;
		}
	}
	{
		// throw new InvalidOperationException($"Bad input length, a ipv6 address is 16 bytes long not {bytes.Length}");
		int32_t L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(&___bytes0))->___m_Length_1);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral8E939268F8E551F2F58A86E31FDDC7319D612E99, L_16, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_18 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NetworkEndPoint_SetRawAddressBytes_m1BB613BF547BED8BF76D6783A07186B514D58242_RuntimeMethod_var);
	}

IL_0076:
	{
		// UnsafeUtility.MemCpy(UnsafeUtility.AddressOf(ref rawNetworkAddress), bytes.GetUnsafeReadOnlyPtr(), rawIpv6Length);
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_19 = __this->get_address_of_rawNetworkAddress_1();
		void* L_20 = UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD((RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 *)L_19, /*hidden argument*/UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_RuntimeMethod_var);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_21 = ___bytes0;
		void* L_22 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC116C5E222D32B750CB03B895AD5F4B987422A38(L_21, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC116C5E222D32B750CB03B895AD5F4B987422A38_RuntimeMethod_var);
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_20, (void*)(void*)L_22, (((int64_t)((int64_t)((int32_t)16)))), /*hidden argument*/NULL);
		// Family = family;
		int32_t L_23 = ___family1;
		NetworkEndPoint_set_Family_m95C94A903A391BE27287807461EE02829DEB44C1((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)__this, L_23, /*hidden argument*/NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkEndPoint_SetRawAddressBytes_m1BB613BF547BED8BF76D6783A07186B514D58242_AdjustorThunk (RuntimeObject * __this, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___bytes0, int32_t ___family1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	NetworkEndPoint_SetRawAddressBytes_m1BB613BF547BED8BF76D6783A07186B514D58242(_thisAdjusted, ___bytes0, ___family1, method);
}
// System.UInt16 Unity.Networking.Transport.NetworkEndPoint::get_RawPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetworkEndPoint_get_RawPort_mED5AC3808B0E01F161DE5E3D036DAB43125F3B93 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint_get_RawPort_mED5AC3808B0E01F161DE5E3D036DAB43125F3B93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t* V_0 = NULL;
	{
		// ushort *port = (ushort*)((byte*) UnsafeUtility.AddressOf(ref rawNetworkAddress) + rawDataLength);
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_0 = __this->get_address_of_rawNetworkAddress_1();
		void* L_1 = UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD((RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 *)L_0, /*hidden argument*/UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_RuntimeMethod_var);
		V_0 = (uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)((int32_t)16)));
		// return *port;
		uint16_t* L_2 = V_0;
		int32_t L_3 = *((uint16_t*)L_2);
		return (uint16_t)L_3;
	}
}
IL2CPP_EXTERN_C  uint16_t NetworkEndPoint_get_RawPort_mED5AC3808B0E01F161DE5E3D036DAB43125F3B93_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	return NetworkEndPoint_get_RawPort_mED5AC3808B0E01F161DE5E3D036DAB43125F3B93(_thisAdjusted, method);
}
// System.Void Unity.Networking.Transport.NetworkEndPoint::set_RawPort(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEndPoint_set_RawPort_mD0E1D11C0544798A61F5570AB74F88897A896176 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint_set_RawPort_mD0E1D11C0544798A61F5570AB74F88897A896176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t* V_0 = NULL;
	{
		// ushort *port = (ushort*)((byte*) UnsafeUtility.AddressOf(ref rawNetworkAddress) + rawDataLength);
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_0 = __this->get_address_of_rawNetworkAddress_1();
		void* L_1 = UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD((RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 *)L_0, /*hidden argument*/UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_RuntimeMethod_var);
		V_0 = (uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)((int32_t)16)));
		// *port = value;
		uint16_t* L_2 = V_0;
		uint16_t L_3 = ___value0;
		*((int16_t*)L_2) = (int16_t)L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkEndPoint_set_RawPort_mD0E1D11C0544798A61F5570AB74F88897A896176_AdjustorThunk (RuntimeObject * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	NetworkEndPoint_set_RawPort_mD0E1D11C0544798A61F5570AB74F88897A896176(_thisAdjusted, ___value0, method);
}
// System.String Unity.Networking.Transport.NetworkEndPoint::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkEndPoint_get_Address_m71B08B9A8394D42577350E72DF4A30F23AD9F5A8 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method)
{
	{
		// public string Address => AddressAsString();
		String_t* L_0 = NetworkEndPoint_AddressAsString_m0AFA40D9D4CB91FE013615316E52F89F9D881756((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* NetworkEndPoint_get_Address_m71B08B9A8394D42577350E72DF4A30F23AD9F5A8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	return NetworkEndPoint_get_Address_m71B08B9A8394D42577350E72DF4A30F23AD9F5A8(_thisAdjusted, method);
}
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_get_IsValid_m9AA29EF5B4960261F50354EEB97D8C709AE0909B (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsValid => Family != 0;
		int32_t L_0 = NetworkEndPoint_get_Family_mAAAFD4DD31A8696D1EA376AD3493CE573AE23FB3((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)__this, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkEndPoint_get_IsValid_m9AA29EF5B4960261F50354EEB97D8C709AE0909B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	return NetworkEndPoint_get_IsValid_m9AA29EF5B4960261F50354EEB97D8C709AE0909B(_thisAdjusted, method);
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::get_AnyIpv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  NetworkEndPoint_get_AnyIpv4_mF5C5A510219907BFC8B888F94B1DE258CB387F97 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint_get_AnyIpv4_mF5C5A510219907BFC8B888F94B1DE258CB387F97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkEndPoint AnyIpv4 => CreateAddress(0);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var);
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  L_0 = NetworkEndPoint_CreateAddress_m24F15B27A5948F9A1C7A7A0FD8C2A272BC13C540((uint16_t)0, 0, 2, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::TryParse(System.String,System.UInt16,Unity.Networking.Transport.NetworkEndPoint&,Unity.Networking.Transport.NetworkFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_TryParse_m23163432CF3A1B4E98C2D76A046668663B89445A (String_t* ___address0, uint16_t ___port1, NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * ___endpoint2, int32_t ___family3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint_TryParse_m23163432CF3A1B4E98C2D76A046668663B89445A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * G_B34_0 = NULL;
	RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * G_B33_0 = NULL;
	uint32_t G_B35_0 = 0;
	RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * G_B35_1 = NULL;
	{
		// endpoint = default(NetworkEndPoint);
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * L_0 = ___endpoint2;
		il2cpp_codegen_initobj(L_0, sizeof(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 ));
		// if (family != NetworkFamily.Ipv4)
		int32_t L_1 = ___family3;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// if (address == null || address.Length < 7)
		String_t* L_2 = ___address0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = ___address0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) >= ((int32_t)7)))
		{
			goto IL_001b;
		}
	}

IL_0019:
	{
		// return false;
		return (bool)0;
	}

IL_001b:
	{
		// uint ipaddr = 0;
		V_0 = 0;
		// var pos = 0;
		V_1 = 0;
		// for (var part = 0; part < 4; ++part)
		V_2 = 0;
		goto IL_00aa;
	}

IL_0026:
	{
		// if (pos >= address.Length || address[pos] < '0' || address[pos] > '9')
		int32_t L_5 = V_1;
		String_t* L_6 = ___address0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_8 = ___address0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Il2CppChar L_10 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_8, L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_11 = ___address0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Il2CppChar L_13 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_11, L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0047;
		}
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// uint byteVal = 0;
		V_3 = 0;
		goto IL_005f;
	}

IL_004b:
	{
		// byteVal = byteVal * 10 + (uint)(address[pos] - '0');
		uint32_t L_14 = V_3;
		String_t* L_15 = ___address0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppChar L_17 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_15, L_16, /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)((int32_t)10))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)48)))));
		// ++pos;
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005f:
	{
		// while (pos < address.Length && address[pos] >= '0' && address[pos] <= '9')
		int32_t L_19 = V_1;
		String_t* L_20 = ___address0;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_19) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_22 = ___address0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		Il2CppChar L_24 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_22, L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)48))))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_25 = ___address0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		Il2CppChar L_27 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_25, L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}

IL_007e:
	{
		// if (byteVal > 255)
		uint32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0088;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0088:
	{
		// ipaddr = (ipaddr << 8) | byteVal;
		uint32_t L_29 = V_0;
		uint32_t L_30 = V_3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_29<<(int32_t)8))|(int32_t)L_30));
		// if (pos < address.Length && address[pos] == '.')
		int32_t L_31 = V_1;
		String_t* L_32 = ___address0;
		NullCheck(L_32);
		int32_t L_33 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_31) >= ((int32_t)L_33)))
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_34 = ___address0;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		Il2CppChar L_36 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_34, L_35, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_00a6;
		}
	}
	{
		// ++pos;
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00a6:
	{
		// for (var part = 0; part < 4; ++part)
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00aa:
	{
		// for (var part = 0; part < 4; ++part)
		int32_t L_39 = V_2;
		if ((((int32_t)L_39) < ((int32_t)4)))
		{
			goto IL_0026;
		}
	}
	{
		// if (pos + 1 < address.Length && address[pos] == ':')
		int32_t L_40 = V_1;
		String_t* L_41 = ___address0;
		NullCheck(L_41);
		int32_t L_42 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_41, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1))) >= ((int32_t)L_42)))
		{
			goto IL_0115;
		}
	}
	{
		String_t* L_43 = ___address0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		Il2CppChar L_45 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_43, L_44, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0115;
		}
	}
	{
		// ++pos;
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		// uint customPort = 0;
		V_4 = 0;
		goto IL_00e6;
	}

IL_00d0:
	{
		// customPort = customPort * 10 + (uint)(address[pos] - '0');
		uint32_t L_47 = V_4;
		String_t* L_48 = ___address0;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		Il2CppChar L_50 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_48, L_49, /*hidden argument*/NULL);
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_47, (int32_t)((int32_t)10))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)((int32_t)48)))));
		// ++pos;
		int32_t L_51 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00e6:
	{
		// while (pos < address.Length && address[pos] >= '0' && address[pos] <= '9')
		int32_t L_52 = V_1;
		String_t* L_53 = ___address0;
		NullCheck(L_53);
		int32_t L_54 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_53, /*hidden argument*/NULL);
		if ((((int32_t)L_52) >= ((int32_t)L_54)))
		{
			goto IL_0105;
		}
	}
	{
		String_t* L_55 = ___address0;
		int32_t L_56 = V_1;
		NullCheck(L_55);
		Il2CppChar L_57 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_55, L_56, /*hidden argument*/NULL);
		if ((((int32_t)L_57) < ((int32_t)((int32_t)48))))
		{
			goto IL_0105;
		}
	}
	{
		String_t* L_58 = ___address0;
		int32_t L_59 = V_1;
		NullCheck(L_58);
		Il2CppChar L_60 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_58, L_59, /*hidden argument*/NULL);
		if ((((int32_t)L_60) <= ((int32_t)((int32_t)57))))
		{
			goto IL_00d0;
		}
	}

IL_0105:
	{
		// if (customPort > ushort.MaxValue)
		uint32_t L_61 = V_4;
		if ((!(((uint32_t)L_61) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0110;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0110:
	{
		// port = (ushort)customPort;
		uint32_t L_62 = V_4;
		___port1 = (uint16_t)(((int32_t)((uint16_t)L_62)));
	}

IL_0115:
	{
		// endpoint = CreateAddress(port);
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * L_63 = ___endpoint2;
		uint16_t L_64 = ___port1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var);
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  L_65 = NetworkEndPoint_CreateAddress_m24F15B27A5948F9A1C7A7A0FD8C2A272BC13C540(L_64, 0, 2, /*hidden argument*/NULL);
		*(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)L_63 = L_65;
		// endpoint.rawNetworkAddress.ipv4 = IsLittleEndian ? ByteSwap(ipaddr) : ipaddr;
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * L_66 = ___endpoint2;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_67 = L_66->get_address_of_rawNetworkAddress_1();
		bool L_68 = ((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_StaticFields*)il2cpp_codegen_static_fields_for(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		G_B33_0 = L_67;
		if (L_68)
		{
			G_B34_0 = L_67;
			goto IL_0133;
		}
	}
	{
		uint32_t L_69 = V_0;
		G_B35_0 = L_69;
		G_B35_1 = G_B33_0;
		goto IL_0139;
	}

IL_0133:
	{
		uint32_t L_70 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var);
		uint32_t L_71 = NetworkEndPoint_ByteSwap_m8102F3407880255D362C9A48F5B5F5737411C5BD(L_70, /*hidden argument*/NULL);
		G_B35_0 = L_71;
		G_B35_1 = G_B34_0;
	}

IL_0139:
	{
		G_B35_1->set_ipv4_3(G_B35_0);
		// return endpoint.IsValid;
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * L_72 = ___endpoint2;
		bool L_73 = NetworkEndPoint_get_IsValid_m9AA29EF5B4960261F50354EEB97D8C709AE0909B((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)L_72, /*hidden argument*/NULL);
		return L_73;
	}
}
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::op_Equality(Unity.Networking.Transport.NetworkEndPoint,Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_op_Equality_m89D4B029CF44EB80585F8A25D67E30B42AEA5336 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  ___lhs0, NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Compare(rhs);
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  L_0 = ___rhs1;
		bool L_1 = NetworkEndPoint_Compare_mAE8457D4CD6A7D684D1B8D1019F01DC6976044F3((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_Equals_m6DC01312B2C5E44E7FD56E48515ACD6FCEEC0D95 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint_Equals_m6DC01312B2C5E44E7FD56E48515ACD6FCEEC0D95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this == (NetworkEndPoint) other;
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  L_0 = (*(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)__this);
		RuntimeObject * L_1 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var);
		bool L_2 = NetworkEndPoint_op_Equality_m89D4B029CF44EB80585F8A25D67E30B42AEA5336(L_0, ((*(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)UnBox(L_1, NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool NetworkEndPoint_Equals_m6DC01312B2C5E44E7FD56E48515ACD6FCEEC0D95_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	return NetworkEndPoint_Equals_m6DC01312B2C5E44E7FD56E48515ACD6FCEEC0D95(_thisAdjusted, ___other0, method);
}
// System.Int32 Unity.Networking.Transport.NetworkEndPoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkEndPoint_GetHashCode_mD2585758E84F0263DDEC02472E81EEF26C905002 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint_GetHashCode_mD2585758E84F0263DDEC02472E81EEF26C905002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var p = (byte*) UnsafeUtility.AddressOf(ref rawNetworkAddress);
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_0 = __this->get_address_of_rawNetworkAddress_1();
		void* L_1 = UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD((RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 *)L_0, /*hidden argument*/UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_RuntimeMethod_var);
		V_0 = (uint8_t*)L_1;
		// var result = 0;
		V_1 = 0;
		// for (int i = 0; i < rawLength; i++)
		V_2 = 0;
		goto IL_0020;
	}

IL_0012:
	{
		// result = (result * 31) ^ (int)p[i];
		int32_t L_2 = V_1;
		uint8_t* L_3 = V_0;
		int32_t L_4 = V_2;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)L_4)));
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)31)))^(int32_t)L_5));
		// for (int i = 0; i < rawLength; i++)
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0020:
	{
		// for (int i = 0; i < rawLength; i++)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)19))))
		{
			goto IL_0012;
		}
	}
	{
		// return result;
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t NetworkEndPoint_GetHashCode_mD2585758E84F0263DDEC02472E81EEF26C905002_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	return NetworkEndPoint_GetHashCode_mD2585758E84F0263DDEC02472E81EEF26C905002(_thisAdjusted, method);
}
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::Compare(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_Compare_mAE8457D4CD6A7D684D1B8D1019F01DC6976044F3 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint_Compare_mAE8457D4CD6A7D684D1B8D1019F01DC6976044F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// var p = (byte*) UnsafeUtility.AddressOf(ref rawNetworkAddress);
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_0 = __this->get_address_of_rawNetworkAddress_1();
		void* L_1 = UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD((RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 *)L_0, /*hidden argument*/UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_RuntimeMethod_var);
		V_0 = (uint8_t*)L_1;
		// var p1 = (byte*) UnsafeUtility.AddressOf(ref other.rawNetworkAddress);
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_2 = (&___other0)->get_address_of_rawNetworkAddress_1();
		void* L_3 = UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD((RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 *)L_2, /*hidden argument*/UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_RuntimeMethod_var);
		V_1 = (uint8_t*)L_3;
		// return UnsafeUtility.MemCmp(p, p1, rawLength) == 0;
		uint8_t* L_4 = V_0;
		uint8_t* L_5 = V_1;
		int32_t L_6 = UnsafeUtility_MemCmp_mDA7B6D4A6677206212DBD89D1F3AE5D5A5672FC8((void*)(void*)L_4, (void*)(void*)L_5, (((int64_t)((int64_t)((int32_t)19)))), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkEndPoint_Compare_mAE8457D4CD6A7D684D1B8D1019F01DC6976044F3_AdjustorThunk (RuntimeObject * __this, NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	return NetworkEndPoint_Compare_mAE8457D4CD6A7D684D1B8D1019F01DC6976044F3(_thisAdjusted, ___other0, method);
}
// System.String Unity.Networking.Transport.NetworkEndPoint::AddressAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkEndPoint_AddressAsString_m0AFA40D9D4CB91FE013615316E52F89F9D881756 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint_AddressAsString_m0AFA40D9D4CB91FE013615316E52F89F9D881756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (Family)
		int32_t L_0 = NetworkEndPoint_get_Family_mAAAFD4DD31A8696D1EA376AD3493CE573AE23FB3((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)23))))
		{
			goto IL_00bd;
		}
	}
	{
		goto IL_026a;
	}

IL_0018:
	{
		//                     return string.Concat(
		// #if UNITY_TRANSPORT_ENABLE_BASELIB
		//                         
		//                         rawNetworkAddress.data0, ".",
		//                         rawNetworkAddress.data1, ".",
		//                         rawNetworkAddress.data2, ".",
		//                         rawNetworkAddress.data3,
		// #else
		//                         rawNetworkAddress.ipv4_bytes[0], ".",
		//                         rawNetworkAddress.ipv4_bytes[1], ".",
		//                         rawNetworkAddress.ipv4_bytes[2], ".",
		//                         rawNetworkAddress.ipv4_bytes[3],
		// #endif
		//                         ":", Port
		//                     );
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_5 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv4_bytesU3Ee__FixedBuffer_t293D800803767242C7EA56EEC3F321250E06E8F2 * L_6 = L_5->get_address_of_ipv4_bytes_2();
		uint8_t* L_7 = L_6->get_address_of_FixedElementField_0();
		int32_t L_8 = *((uint8_t*)L_7);
		uint8_t L_9 = ((uint8_t)L_8);
		RuntimeObject * L_10 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_10);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_13 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv4_bytesU3Ee__FixedBuffer_t293D800803767242C7EA56EEC3F321250E06E8F2 * L_14 = L_13->get_address_of_ipv4_bytes_2();
		uint8_t* L_15 = L_14->get_address_of_FixedElementField_0();
		int32_t L_16 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, (int32_t)1)));
		uint8_t L_17 = ((uint8_t)L_16);
		RuntimeObject * L_18 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_18);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_12;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_19;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_21 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv4_bytesU3Ee__FixedBuffer_t293D800803767242C7EA56EEC3F321250E06E8F2 * L_22 = L_21->get_address_of_ipv4_bytes_2();
		uint8_t* L_23 = L_22->get_address_of_FixedElementField_0();
		int32_t L_24 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_23, (int32_t)2)));
		uint8_t L_25 = ((uint8_t)L_24);
		RuntimeObject * L_26 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_26);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_26);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_20;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = L_27;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_29 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv4_bytesU3Ee__FixedBuffer_t293D800803767242C7EA56EEC3F321250E06E8F2 * L_30 = L_29->get_address_of_ipv4_bytes_2();
		uint8_t* L_31 = L_30->get_address_of_FixedElementField_0();
		int32_t L_32 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_31, (int32_t)3)));
		uint8_t L_33 = ((uint8_t)L_32);
		RuntimeObject * L_34 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_34);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_34);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = L_28;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = L_35;
		uint16_t L_37 = NetworkEndPoint_get_Port_m38690BA3B68376261CAC75686FC1366971F7B742((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)__this, /*hidden argument*/NULL);
		uint16_t L_38 = L_37;
		RuntimeObject * L_39 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_39);
		String_t* L_40 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_36, /*hidden argument*/NULL);
		return L_40;
	}

IL_00bd:
	{
		// return String.Format(numberFormat,
		//     rawNetworkAddress.ipv6[1] | (rawNetworkAddress.ipv6[0] << 8),
		//     rawNetworkAddress.ipv6[3] | (rawNetworkAddress.ipv6[2] << 8),
		//     rawNetworkAddress.ipv6[5] | (rawNetworkAddress.ipv6[4] << 8),
		//     rawNetworkAddress.ipv6[7] | (rawNetworkAddress.ipv6[6] << 8),
		//     rawNetworkAddress.ipv6[9] | (rawNetworkAddress.ipv6[8] << 8),
		//     rawNetworkAddress.ipv6[11] | (rawNetworkAddress.ipv6[10] << 8),
		//     rawNetworkAddress.ipv6[12] | (rawNetworkAddress.ipv6[13] << 8),
		//     rawNetworkAddress.ipv6[14] | (rawNetworkAddress.ipv6[15] << 8),
		//     Port
		// );
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = L_41;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_43 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_44 = L_43->get_address_of_ipv6_1();
		uint8_t* L_45 = L_44->get_address_of_FixedElementField_0();
		int32_t L_46 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_45, (int32_t)1)));
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_47 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_48 = L_47->get_address_of_ipv6_1();
		uint8_t* L_49 = L_48->get_address_of_FixedElementField_0();
		int32_t L_50 = *((uint8_t*)L_49);
		int32_t L_51 = ((int32_t)((int32_t)L_46|(int32_t)((int32_t)((int32_t)L_50<<(int32_t)8))));
		RuntimeObject * L_52 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_52);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_52);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_53 = L_42;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_54 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_55 = L_54->get_address_of_ipv6_1();
		uint8_t* L_56 = L_55->get_address_of_FixedElementField_0();
		int32_t L_57 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_56, (int32_t)3)));
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_58 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_59 = L_58->get_address_of_ipv6_1();
		uint8_t* L_60 = L_59->get_address_of_FixedElementField_0();
		int32_t L_61 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, (int32_t)2)));
		int32_t L_62 = ((int32_t)((int32_t)L_57|(int32_t)((int32_t)((int32_t)L_61<<(int32_t)8))));
		RuntimeObject * L_63 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_63);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_63);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_64 = L_53;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_65 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_66 = L_65->get_address_of_ipv6_1();
		uint8_t* L_67 = L_66->get_address_of_FixedElementField_0();
		int32_t L_68 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_67, (int32_t)5)));
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_69 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_70 = L_69->get_address_of_ipv6_1();
		uint8_t* L_71 = L_70->get_address_of_FixedElementField_0();
		int32_t L_72 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, (int32_t)4)));
		int32_t L_73 = ((int32_t)((int32_t)L_68|(int32_t)((int32_t)((int32_t)L_72<<(int32_t)8))));
		RuntimeObject * L_74 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_73);
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_74);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_74);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_75 = L_64;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_76 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_77 = L_76->get_address_of_ipv6_1();
		uint8_t* L_78 = L_77->get_address_of_FixedElementField_0();
		int32_t L_79 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_78, (int32_t)7)));
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_80 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_81 = L_80->get_address_of_ipv6_1();
		uint8_t* L_82 = L_81->get_address_of_FixedElementField_0();
		int32_t L_83 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_82, (int32_t)6)));
		int32_t L_84 = ((int32_t)((int32_t)L_79|(int32_t)((int32_t)((int32_t)L_83<<(int32_t)8))));
		RuntimeObject * L_85 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_84);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_85);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_85);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_86 = L_75;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_87 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_88 = L_87->get_address_of_ipv6_1();
		uint8_t* L_89 = L_88->get_address_of_FixedElementField_0();
		int32_t L_90 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_89, (int32_t)((int32_t)9))));
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_91 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_92 = L_91->get_address_of_ipv6_1();
		uint8_t* L_93 = L_92->get_address_of_FixedElementField_0();
		int32_t L_94 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_93, (int32_t)8)));
		int32_t L_95 = ((int32_t)((int32_t)L_90|(int32_t)((int32_t)((int32_t)L_94<<(int32_t)8))));
		RuntimeObject * L_96 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_95);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_96);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_96);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_97 = L_86;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_98 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_99 = L_98->get_address_of_ipv6_1();
		uint8_t* L_100 = L_99->get_address_of_FixedElementField_0();
		int32_t L_101 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_100, (int32_t)((int32_t)11))));
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_102 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_103 = L_102->get_address_of_ipv6_1();
		uint8_t* L_104 = L_103->get_address_of_FixedElementField_0();
		int32_t L_105 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_104, (int32_t)((int32_t)10))));
		int32_t L_106 = ((int32_t)((int32_t)L_101|(int32_t)((int32_t)((int32_t)L_105<<(int32_t)8))));
		RuntimeObject * L_107 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_106);
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, L_107);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_107);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_108 = L_97;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_109 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_110 = L_109->get_address_of_ipv6_1();
		uint8_t* L_111 = L_110->get_address_of_FixedElementField_0();
		int32_t L_112 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_111, (int32_t)((int32_t)12))));
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_113 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_114 = L_113->get_address_of_ipv6_1();
		uint8_t* L_115 = L_114->get_address_of_FixedElementField_0();
		int32_t L_116 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_115, (int32_t)((int32_t)13))));
		int32_t L_117 = ((int32_t)((int32_t)L_112|(int32_t)((int32_t)((int32_t)L_116<<(int32_t)8))));
		RuntimeObject * L_118 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_117);
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, L_118);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_118);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_119 = L_108;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_120 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_121 = L_120->get_address_of_ipv6_1();
		uint8_t* L_122 = L_121->get_address_of_FixedElementField_0();
		int32_t L_123 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_122, (int32_t)((int32_t)14))));
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_124 = __this->get_address_of_rawNetworkAddress_1();
		U3Cipv6U3Ee__FixedBuffer_tA4F55FE8437757B88BCD6DCE99D081F025F9690B * L_125 = L_124->get_address_of_ipv6_1();
		uint8_t* L_126 = L_125->get_address_of_FixedElementField_0();
		int32_t L_127 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_126, (int32_t)((int32_t)15))));
		int32_t L_128 = ((int32_t)((int32_t)L_123|(int32_t)((int32_t)((int32_t)L_127<<(int32_t)8))));
		RuntimeObject * L_129 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_128);
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_129);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_129);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_130 = L_119;
		uint16_t L_131 = NetworkEndPoint_get_Port_m38690BA3B68376261CAC75686FC1366971F7B742((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)__this, /*hidden argument*/NULL);
		uint16_t L_132 = L_131;
		RuntimeObject * L_133 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_132);
		NullCheck(L_130);
		ArrayElementTypeCheck (L_130, L_133);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_133);
		String_t* L_134 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral94E7EFF9A6EC914D6D3A99F4564285D4CE85F4B6, L_130, /*hidden argument*/NULL);
		return L_134;
	}

IL_026a:
	{
		// return string.Empty;
		String_t* L_135 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_135;
	}
}
IL2CPP_EXTERN_C  String_t* NetworkEndPoint_AddressAsString_m0AFA40D9D4CB91FE013615316E52F89F9D881756_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 * _thisAdjusted = reinterpret_cast<NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *>(__this + _offset);
	return NetworkEndPoint_AddressAsString_m0AFA40D9D4CB91FE013615316E52F89F9D881756(_thisAdjusted, method);
}
// System.UInt16 Unity.Networking.Transport.NetworkEndPoint::ByteSwap(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetworkEndPoint_ByteSwap_m2E1932FB51C3E00EAE4933CB437D92D100CE78FF (uint16_t ___val0, const RuntimeMethod* method)
{
	{
		// return (ushort) (((val & 0xff) << 8) | (val >> 8));
		uint16_t L_0 = ___val0;
		uint16_t L_1 = ___val0;
		return (uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)255)))<<(int32_t)8))|(int32_t)((int32_t)((int32_t)L_1>>(int32_t)8)))))));
	}
}
// System.UInt32 Unity.Networking.Transport.NetworkEndPoint::ByteSwap(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkEndPoint_ByteSwap_m8102F3407880255D362C9A48F5B5F5737411C5BD (uint32_t ___val0, const RuntimeMethod* method)
{
	{
		// return (uint) (((val & 0xff) << 24) | ((val & 0xff00) << 8) | ((val >> 8) & 0xff00) | (val >> 24));
		uint32_t L_0 = ___val0;
		uint32_t L_1 = ___val0;
		uint32_t L_2 = ___val0;
		uint32_t L_3 = ___val0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)65280)))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_2>>8))&(int32_t)((int32_t)65280)))))|(int32_t)((int32_t)((uint32_t)L_3>>((int32_t)24)))));
	}
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::CreateAddress(System.UInt16,Unity.Networking.Transport.NetworkEndPoint_AddressType,Unity.Networking.Transport.NetworkFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  NetworkEndPoint_CreateAddress_m24F15B27A5948F9A1C7A7A0FD8C2A272BC13C540 (uint16_t ___port0, int32_t ___type1, int32_t ___family2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkEndPoint_CreateAddress_m24F15B27A5948F9A1C7A7A0FD8C2A272BC13C540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (family == NetworkFamily.Invalid)
		int32_t L_0 = ___family2;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_2), sizeof(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 ));
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  L_1 = V_2;
		return L_1;
	}

IL_000d:
	{
		// uint ipv4Loopback = (127 << 24) | 1;
		V_0 = ((int32_t)2130706433);
		// if (IsLittleEndian)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var);
		bool L_2 = ((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_StaticFields*)il2cpp_codegen_static_fields_for(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// port = ByteSwap(port);
		uint16_t L_3 = ___port0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var);
		uint16_t L_4 = NetworkEndPoint_ByteSwap_m2E1932FB51C3E00EAE4933CB437D92D100CE78FF(L_3, /*hidden argument*/NULL);
		___port0 = L_4;
		// ipv4Loopback = ByteSwap(ipv4Loopback);
		uint32_t L_5 = V_0;
		uint32_t L_6 = NetworkEndPoint_ByteSwap_m8102F3407880255D362C9A48F5B5F5737411C5BD(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0029:
	{
		// var ep = new NetworkEndPoint
		// {
		//     Family = family,
		//     RawPort = port,
		//     length = rawLength
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 ));
		int32_t L_7 = ___family2;
		NetworkEndPoint_set_Family_m95C94A903A391BE27287807461EE02829DEB44C1((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)(&V_2), L_7, /*hidden argument*/NULL);
		uint16_t L_8 = ___port0;
		NetworkEndPoint_set_RawPort_mD0E1D11C0544798A61F5570AB74F88897A896176((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)(&V_2), L_8, /*hidden argument*/NULL);
		(&V_2)->set_length_2(((int32_t)19));
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  L_9 = V_2;
		V_1 = L_9;
		// if (type == AddressType.Loopback)
		int32_t L_10 = ___type1;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0062;
		}
	}
	{
		// if (family == NetworkFamily.Ipv4)
		int32_t L_11 = ___family2;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0062;
		}
	}
	{
		// *(uint*) UnsafeUtility.AddressOf(ref ep.rawNetworkAddress) = ipv4Loopback;
		RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 * L_12 = (&V_1)->get_address_of_rawNetworkAddress_1();
		void* L_13 = UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD((RawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87 *)L_12, /*hidden argument*/UnsafeUtility_AddressOf_TisRawNetworkAddress_tE2378E775202706E2D39477D9FD053F832592B87_m3EFA0426B8420E6704C9BF5A12DF9F10884EC3AD_RuntimeMethod_var);
		uint32_t L_14 = V_0;
		*((int32_t*)L_13) = (int32_t)L_14;
	}

IL_0062:
	{
		// return ep;
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  L_15 = V_1;
		return L_15;
	}
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
// System.Boolean Unity.Networking.Transport.NetworkInterfaceEndPoint::op_Equality(Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.NetworkInterfaceEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceEndPoint_op_Equality_m881EAFED3A1273EF9C31886B7D633597853212B7 (NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  ___lhs0, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Compare(rhs);
		NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  L_0 = ___rhs1;
		bool L_1 = NetworkInterfaceEndPoint_Compare_m22D67F8E2007CCB5758BC9A501CD94E8B8E2879C((NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.Networking.Transport.NetworkInterfaceEndPoint::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceEndPoint_Equals_m2FA52DE13A8E9F1D24B9D964D28DDE9B9A6F548B (NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkInterfaceEndPoint_Equals_m2FA52DE13A8E9F1D24B9D964D28DDE9B9A6F548B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this == (NetworkInterfaceEndPoint) other;
		NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  L_0 = (*(NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *)__this);
		RuntimeObject * L_1 = ___other0;
		bool L_2 = NetworkInterfaceEndPoint_op_Equality_m881EAFED3A1273EF9C31886B7D633597853212B7(L_0, ((*(NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *)((NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *)UnBox(L_1, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool NetworkInterfaceEndPoint_Equals_m2FA52DE13A8E9F1D24B9D964D28DDE9B9A6F548B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * _thisAdjusted = reinterpret_cast<NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *>(__this + _offset);
	return NetworkInterfaceEndPoint_Equals_m2FA52DE13A8E9F1D24B9D964D28DDE9B9A6F548B(_thisAdjusted, ___other0, method);
}
// System.Int32 Unity.Networking.Transport.NetworkInterfaceEndPoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkInterfaceEndPoint_GetHashCode_mB9E7512A0CB786C5C5D31231A0344D2CA4E1D17E (NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * __this, const RuntimeMethod* method)
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// {
		U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA * L_0 = __this->get_address_of_data_1();
		uint8_t* L_1 = L_0->get_address_of_FixedElementField_0();
		V_1 = (uint8_t*)L_1;
		// fixed (byte* p = data)
		uint8_t* L_2 = V_1;
		V_0 = (uint8_t*)(((uintptr_t)L_2));
		// var result = 0;
		V_2 = 0;
		// for (int i = 0; i < dataLength; i++)
		V_3 = 0;
		goto IL_0023;
	}

IL_0015:
	{
		// result = (result * 31) ^ (int)p[i];
		int32_t L_3 = V_2;
		uint8_t* L_4 = V_0;
		int32_t L_5 = V_3;
		int32_t L_6 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_5)));
		V_2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)31)))^(int32_t)L_6));
		// for (int i = 0; i < dataLength; i++)
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		// for (int i = 0; i < dataLength; i++)
		int32_t L_8 = V_3;
		int32_t L_9 = __this->get_dataLength_0();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0015;
		}
	}
	{
		// return result;
		int32_t L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t NetworkInterfaceEndPoint_GetHashCode_mB9E7512A0CB786C5C5D31231A0344D2CA4E1D17E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * _thisAdjusted = reinterpret_cast<NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *>(__this + _offset);
	return NetworkInterfaceEndPoint_GetHashCode_mB9E7512A0CB786C5C5D31231A0344D2CA4E1D17E(_thisAdjusted, method);
}
// System.Boolean Unity.Networking.Transport.NetworkInterfaceEndPoint::Compare(Unity.Networking.Transport.NetworkInterfaceEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceEndPoint_Compare_m22D67F8E2007CCB5758BC9A501CD94E8B8E2879C (NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * __this, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  ___other0, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// if (dataLength != other.dataLength)
		int32_t L_0 = __this->get_dataLength_0();
		NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  L_1 = ___other0;
		int32_t L_2 = L_1.get_dataLength_0();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA * L_3 = __this->get_address_of_data_1();
		uint8_t* L_4 = L_3->get_address_of_FixedElementField_0();
		V_1 = (uint8_t*)L_4;
		// fixed (void* p = this.data)
		uint8_t* L_5 = V_1;
		V_0 = (void*)(((uintptr_t)L_5));
		// return UnsafeUtility.MemCmp(p, other.data, dataLength) == 0;
		void* L_6 = V_0;
		U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA * L_7 = (&___other0)->get_address_of_data_1();
		uint8_t* L_8 = L_7->get_address_of_FixedElementField_0();
		int32_t L_9 = __this->get_dataLength_0();
		int32_t L_10 = UnsafeUtility_MemCmp_mDA7B6D4A6677206212DBD89D1F3AE5D5A5672FC8((void*)(void*)L_6, (void*)(void*)(((uintptr_t)L_8)), (((int64_t)((int64_t)L_9))), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkInterfaceEndPoint_Compare_m22D67F8E2007CCB5758BC9A501CD94E8B8E2879C_AdjustorThunk (RuntimeObject * __this, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * _thisAdjusted = reinterpret_cast<NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *>(__this + _offset);
	return NetworkInterfaceEndPoint_Compare_m22D67F8E2007CCB5758BC9A501CD94E8B8E2879C(_thisAdjusted, ___other0, method);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF (AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF * __this, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, intptr_t ___userData1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___handle0, ___userData1);

}
// System.Void Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbortSendMessageDelegate__ctor_mDB6B7932166F5A16426EA890D990CDFE6C6EECC5 (AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate::Invoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbortSendMessageDelegate_Invoke_mE73985F95E05E17F7F8061204618069273F9F176 (AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF * __this, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, intptr_t ___userData1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handle0, ___userData1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___userData1, targetMethod);
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
						GenericInterfaceActionInvoker2< NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t >::Invoke(targetMethod, targetThis, ___handle0, ___userData1);
					else
						GenericVirtActionInvoker2< NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t >::Invoke(targetMethod, targetThis, ___handle0, ___userData1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handle0, ___userData1);
					else
						VirtActionInvoker2< NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handle0, ___userData1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___handle0) - 1), ___userData1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(___handle0) - 1), ___userData1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___userData1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate::BeginInvoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AbortSendMessageDelegate_BeginInvoke_mAA235CC906C01B97608DCC388F54CFBF043FD041 (AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF * __this, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, intptr_t ___userData1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbortSendMessageDelegate_BeginInvoke_mAA235CC906C01B97608DCC388F54CFBF043FD041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718_il2cpp_TypeInfo_var, &*___handle0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userData1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate::EndInvoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbortSendMessageDelegate_EndInvoke_m5E7C6E499CDA054ECC8ADA4FC0866482C4181598 (AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF * __this, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___handle0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645 (BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645 * __this, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, intptr_t ___userData1, int32_t ___requiredPatyloadSize2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___userData1, ___requiredPatyloadSize2);

	return returnValue;
}
// System.Void Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeginSendMessageDelegate__ctor_mBABA51ACBE18164BDD4C0464E98106AB70E9B8C7 (BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate::Invoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BeginSendMessageDelegate_Invoke_mDDD214EC6CCDB7BEE5D8C89AB02AE972D6D993A8 (BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645 * __this, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, intptr_t ___userData1, int32_t ___requiredPatyloadSize2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___userData1, ___requiredPatyloadSize2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___userData1, ___requiredPatyloadSize2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___handle0, ___userData1, ___requiredPatyloadSize2);
					else
						result = GenericVirtFuncInvoker3< int32_t, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___handle0, ___userData1, ___requiredPatyloadSize2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handle0, ___userData1, ___requiredPatyloadSize2);
					else
						result = VirtFuncInvoker3< int32_t, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handle0, ___userData1, ___requiredPatyloadSize2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___handle0) - 1), ___userData1, ___requiredPatyloadSize2, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(___handle0) - 1), ___userData1, ___requiredPatyloadSize2, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___userData1, ___requiredPatyloadSize2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate::BeginInvoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BeginSendMessageDelegate_BeginInvoke_mF33DCD6745C49511E93B834A07D1E2FA999F8D55 (BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645 * __this, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, intptr_t ___userData1, int32_t ___requiredPatyloadSize2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BeginSendMessageDelegate_BeginInvoke_mF33DCD6745C49511E93B834A07D1E2FA999F8D55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718_il2cpp_TypeInfo_var, &*___handle0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userData1);
	__d_args[2] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___requiredPatyloadSize2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate::EndInvoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BeginSendMessageDelegate_EndInvoke_mD3133AD3D9E86EF85290896400A9A1BFC93C27BF (BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645 * __this, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___handle0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D (EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D * __this, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * ___address1, intptr_t ___userData2, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 * ___sendQueue3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *, intptr_t, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___address1, ___userData2, ___sendQueue3);

	return returnValue;
}
// System.Void Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndSendMessageDelegate__ctor_mE5E0E71FFF4EA46BB0C20F05F55FD4215C802BA8 (EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate::Invoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.IntPtr,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EndSendMessageDelegate_Invoke_m4CC0B2D83D4F050FB85C6BD3E4CA71D3AEE07B28 (EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D * __this, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * ___address1, intptr_t ___userData2, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 * ___sendQueue3, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *, intptr_t, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___address1, ___userData2, ___sendQueue3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *, intptr_t, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___address1, ___userData2, ___sendQueue3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< int32_t, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *, intptr_t, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 * >::Invoke(targetMethod, targetThis, ___handle0, ___address1, ___userData2, ___sendQueue3);
					else
						result = GenericVirtFuncInvoker4< int32_t, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *, intptr_t, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 * >::Invoke(targetMethod, targetThis, ___handle0, ___address1, ___userData2, ___sendQueue3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< int32_t, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *, intptr_t, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handle0, ___address1, ___userData2, ___sendQueue3);
					else
						result = VirtFuncInvoker4< int32_t, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *, intptr_t, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handle0, ___address1, ___userData2, ___sendQueue3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *, intptr_t, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___handle0) - 1), ___address1, ___userData2, ___sendQueue3, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *, intptr_t, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(___handle0) - 1), ___address1, ___userData2, ___sendQueue3, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 *, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *, intptr_t, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___address1, ___userData2, ___sendQueue3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate::BeginInvoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.IntPtr,Unity.Networking.Transport.NetworkSendQueueHandle&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndSendMessageDelegate_BeginInvoke_m1DDCC310373CB71D57A64095B5AB7F23A45AD68B (EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D * __this, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * ___address1, intptr_t ___userData2, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 * ___sendQueue3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndSendMessageDelegate_BeginInvoke_m1DDCC310373CB71D57A64095B5AB7F23A45AD68B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718_il2cpp_TypeInfo_var, &*___handle0);
	__d_args[1] = Box(NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0_il2cpp_TypeInfo_var, &*___address1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userData2);
	__d_args[3] = Box(NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41_il2cpp_TypeInfo_var, &*___sendQueue3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Int32 Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate::EndInvoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkInterfaceEndPoint&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EndSendMessageDelegate_EndInvoke_mB3FD95156A770DA1C1CFFAEDAE8290B838F06A8B (EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D * __this, NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * ___address1, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 * ___sendQueue2, RuntimeObject* ___result3, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___handle0,
	___address1,
	___sendQueue2,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result3, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
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
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_UDPNetworkInterface_BeginSendMessage_mE825F4B82CCD7FF06BEA57AF7D66AAEAC50646D4(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, intptr_t ___userData1, int32_t ___requiredPayloadSize2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___handle0' to managed representation
	NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718  ____handle0_empty;
	memset((&____handle0_empty), 0, sizeof(____handle0_empty));

	// Managed method invocation
	int32_t returnValue = UDPNetworkInterface_BeginSendMessage_mE825F4B82CCD7FF06BEA57AF7D66AAEAC50646D4((&____handle0_empty), ___userData1, ___requiredPayloadSize2, NULL);

	// Marshaling of parameter '___handle0' back from managed representation
	*___handle0 = ____handle0_empty;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_UDPNetworkInterface_EndSendMessage_m98325DF88A408B9482B6BF26B0F2495C55645A11(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * ___address1, intptr_t ___userData2, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 * ___sendQueue3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue = UDPNetworkInterface_EndSendMessage_m98325DF88A408B9482B6BF26B0F2495C55645A11(___handle0, ___address1, ___userData2, ___sendQueue3, NULL);

	return returnValue;
}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UDPNetworkInterface_AbortSendMessage_m2D2277C29CF9721D4143404F51FAFD7DA7B3ED9A(NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, intptr_t ___userData1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	UDPNetworkInterface_AbortSendMessage_m2D2277C29CF9721D4143404F51FAFD7DA7B3ED9A(___handle0, ___userData1, NULL);

}
// Unity.Networking.Transport.NetworkInterfaceEndPoint Unity.Networking.Transport.UDPNetworkInterface::ParseNetworkAddress(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  UDPNetworkInterface_ParseNetworkAddress_m5BAA9B51B792B3F8C1822BF981FD4FA4DD101FC3 (NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  ___endPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPNetworkInterface_ParseNetworkAddress_m5BAA9B51B792B3F8C1822BF981FD4FA4DD101FC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E * V_1 = NULL;
	sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE * V_2 = NULL;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// NetworkInterfaceEndPoint ep = default(NetworkInterfaceEndPoint);
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 ));
		// var addr = (network_address*) ep.data;
		U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA * L_0 = (&V_0)->get_address_of_data_1();
		uint8_t* L_1 = L_0->get_address_of_FixedElementField_0();
		V_1 = (network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *)(((uintptr_t)L_1));
		// var sai = (sockaddr_in*) addr->data;
		network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E * L_2 = V_1;
		NullCheck(L_2);
		U3CdataU3Ee__FixedBuffer_tBC6A02E2A957AF2E78A5ACEE7C00D7A9C3B17819 * L_3 = L_2->get_address_of_data_1();
		uint8_t* L_4 = L_3->get_address_of_FixedElementField_0();
		V_2 = (sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE *)(((uintptr_t)L_4));
		// sai->sin_family.sa_family = (ushort) NetworkFamily.Ipv4;
		sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE * L_5 = V_2;
		NullCheck(L_5);
		sa_family_t_t2C1FD6C99A97D46D74F350A8F6071A436E161A94 * L_6 = L_5->get_address_of_sin_family_1();
		L_6->set_sa_family_0((uint16_t)2);
		// sai->sin_port = endPoint.RawPort;
		sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE * L_7 = V_2;
		uint16_t L_8 = NetworkEndPoint_get_RawPort_mED5AC3808B0E01F161DE5E3D036DAB43125F3B93((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)(&___endPoint0), /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_sin_port_2(L_8);
		// var bytes = endPoint.GetRawAddressBytes();
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_9 = NetworkEndPoint_GetRawAddressBytes_m3216D65ED4A40A668EC65242DD93AAD68976C6A6((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)(&___endPoint0), /*hidden argument*/NULL);
		V_3 = L_9;
		// sai->sin_addr.s_addr = *(uint*) bytes.GetUnsafeReadOnlyPtr();
		sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE * L_10 = V_2;
		NullCheck(L_10);
		in_addr_t1D8B03B0A509C1CDA32B72068B348112D70CC222 * L_11 = L_10->get_address_of_sin_addr_3();
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_12 = V_3;
		void* L_13 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC116C5E222D32B750CB03B895AD5F4B987422A38(L_12, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC116C5E222D32B750CB03B895AD5F4B987422A38_RuntimeMethod_var);
		int32_t L_14 = *((uint32_t*)L_13);
		L_11->set_s_addr_0(L_14);
		// addr->length = sizeof(sockaddr_in);
		network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E * L_15 = V_1;
		uint32_t L_16 = sizeof(sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE );
		NullCheck(L_15);
		L_15->set_length_2(L_16);
		// ep.dataLength = sizeof(network_address);
		uint32_t L_17 = sizeof(network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E );
		(&V_0)->set_dataLength_0(L_17);
		// return ep;
		NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  L_18 = V_0;
		return L_18;
	}
}
// Unity.Networking.Transport.NetworkInterfaceEndPoint Unity.Networking.Transport.UDPNetworkInterface::CreateInterfaceEndPoint(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  UDPNetworkInterface_CreateInterfaceEndPoint_mCEE29608220F44B4C1227C7BED954298EA84D2D0 (UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 * __this, NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  ___endPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPNetworkInterface_CreateInterfaceEndPoint_mCEE29608220F44B4C1227C7BED954298EA84D2D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (endPoint.Family != NetworkFamily.Ipv4)
		int32_t L_0 = NetworkEndPoint_get_Family_mAAAFD4DD31A8696D1EA376AD3493CE573AE23FB3((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)(&___endPoint0), /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		// throw new ArgumentException("Invalid family type");
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, _stringLiteralFED142E3129D4CE100DAA2A6AD0C08D889F2BB88, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, UDPNetworkInterface_CreateInterfaceEndPoint_mCEE29608220F44B4C1227C7BED954298EA84D2D0_RuntimeMethod_var);
	}

IL_0015:
	{
		// return ParseNetworkAddress(endPoint);
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  L_2 = ___endPoint0;
		IL2CPP_RUNTIME_CLASS_INIT(UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2_il2cpp_TypeInfo_var);
		NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  L_3 = UDPNetworkInterface_ParseNetworkAddress_m5BAA9B51B792B3F8C1822BF981FD4FA4DD101FC3(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  UDPNetworkInterface_CreateInterfaceEndPoint_mCEE29608220F44B4C1227C7BED954298EA84D2D0_AdjustorThunk (RuntimeObject * __this, NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  ___endPoint0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 * _thisAdjusted = reinterpret_cast<UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 *>(__this + _offset);
	return UDPNetworkInterface_CreateInterfaceEndPoint_mCEE29608220F44B4C1227C7BED954298EA84D2D0(_thisAdjusted, ___endPoint0, method);
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.UDPNetworkInterface::GetGenericEndPoint(Unity.Networking.Transport.NetworkInterfaceEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  UDPNetworkInterface_GetGenericEndPoint_m5DF19E390E437C36B08437FA3A2D49696C89559B (UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 * __this, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  ___endpoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPNetworkInterface_GetGenericEndPoint_m5DF19E390E437C36B08437FA3A2D49696C89559B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E * V_1 = NULL;
	sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE * V_2 = NULL;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var address = NetworkEndPoint.AnyIpv4;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4_il2cpp_TypeInfo_var);
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  L_0 = NetworkEndPoint_get_AnyIpv4_mF5C5A510219907BFC8B888F94B1DE258CB387F97(/*hidden argument*/NULL);
		V_0 = L_0;
		// var addr = (network_address*) endpoint.data;
		U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA * L_1 = (&___endpoint0)->get_address_of_data_1();
		uint8_t* L_2 = L_1->get_address_of_FixedElementField_0();
		V_1 = (network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *)(((uintptr_t)L_2));
		// var sai = (sockaddr_in*) addr->data;
		network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E * L_3 = V_1;
		NullCheck(L_3);
		U3CdataU3Ee__FixedBuffer_tBC6A02E2A957AF2E78A5ACEE7C00D7A9C3B17819 * L_4 = L_3->get_address_of_data_1();
		uint8_t* L_5 = L_4->get_address_of_FixedElementField_0();
		V_2 = (sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE *)(((uintptr_t)L_5));
		// address.RawPort = sai->sin_port;
		sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE * L_6 = V_2;
		NullCheck(L_6);
		uint16_t L_7 = L_6->get_sin_port_2();
		NetworkEndPoint_set_RawPort_mD0E1D11C0544798A61F5570AB74F88897A896176((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)(&V_0), L_7, /*hidden argument*/NULL);
		// if (sai->sin_addr.s_addr != 0)
		sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE * L_8 = V_2;
		NullCheck(L_8);
		in_addr_t1D8B03B0A509C1CDA32B72068B348112D70CC222 * L_9 = L_8->get_address_of_sin_addr_3();
		uint32_t L_10 = L_9->get_s_addr_0();
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		// var bytes = new NativeArray<byte>(4, Allocator.Temp);
		NativeArray_1__ctor_m1F612D56A04DDB37F1BE0D0A470FCDA5D864BFBE((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(&V_3), 4, 2, 1, /*hidden argument*/NativeArray_1__ctor_m1F612D56A04DDB37F1BE0D0A470FCDA5D864BFBE_RuntimeMethod_var);
		// UnsafeUtility.MemCpy(bytes.GetUnsafePtr(), UnsafeUtility.AddressOf(ref sai->sin_addr.s_addr),  4);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_11 = V_3;
		void* L_12 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m88692292C0132AEEA3710F8CB2E8E4D66DE57607(L_11, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m88692292C0132AEEA3710F8CB2E8E4D66DE57607_RuntimeMethod_var);
		sockaddr_in_t4F17A713E95413645ACE930C329D2F5B8235BAAE * L_13 = V_2;
		NullCheck(L_13);
		in_addr_t1D8B03B0A509C1CDA32B72068B348112D70CC222 * L_14 = L_13->get_address_of_sin_addr_3();
		uint32_t* L_15 = L_14->get_address_of_s_addr_0();
		void* L_16 = UnsafeUtility_AddressOf_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m689B828F0D5BEBE47FA2D87336A6635E79FA2A4D((uint32_t*)L_15, /*hidden argument*/UnsafeUtility_AddressOf_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m689B828F0D5BEBE47FA2D87336A6635E79FA2A4D_RuntimeMethod_var);
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_12, (void*)(void*)L_16, (((int64_t)((int64_t)4))), /*hidden argument*/NULL);
		// address.SetRawAddressBytes(bytes);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_17 = V_3;
		NetworkEndPoint_SetRawAddressBytes_m1BB613BF547BED8BF76D6783A07186B514D58242((NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4 *)(&V_0), L_17, 2, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// return address;
		NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C  NetworkEndPoint_tBC876968714FA49C75B6ECFD2305A4DC724FD9F4  UDPNetworkInterface_GetGenericEndPoint_m5DF19E390E437C36B08437FA3A2D49696C89559B_AdjustorThunk (RuntimeObject * __this, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  ___endpoint0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 * _thisAdjusted = reinterpret_cast<UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 *>(__this + _offset);
	return UDPNetworkInterface_GetGenericEndPoint_m5DF19E390E437C36B08437FA3A2D49696C89559B(_thisAdjusted, ___endpoint0, method);
}
// System.Void Unity.Networking.Transport.UDPNetworkInterface::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPNetworkInterface_Dispose_m8DE7CFD142ED7EF300FE2189A8934EF807A94CFD (UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPNetworkInterface_Dispose_m8DE7CFD142ED7EF300FE2189A8934EF807A94CFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Close();
		UDPNetworkInterface_Close_mF5BD73EA728C95817A0E0D9E771CA4738804680B((UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 *)__this, /*hidden argument*/NULL);
		// NativeBindings.network_terminate();
		NativeBindings_network_terminate_mEF70B9B8D12FC0F4F49563851C133B8D88641133(/*hidden argument*/NULL);
		// m_UserData.Dispose();
		NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 * L_0 = __this->get_address_of_m_UserData_0();
		NativeArray_1_Dispose_m09FCEE3963121831E3AD8A1844FCF612F8A9CF43((NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 *)L_0, /*hidden argument*/NativeArray_1_Dispose_m09FCEE3963121831E3AD8A1844FCF612F8A9CF43_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UDPNetworkInterface_Dispose_m8DE7CFD142ED7EF300FE2189A8934EF807A94CFD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 * _thisAdjusted = reinterpret_cast<UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 *>(__this + _offset);
	UDPNetworkInterface_Dispose_m8DE7CFD142ED7EF300FE2189A8934EF807A94CFD(_thisAdjusted, method);
}
// System.Void Unity.Networking.Transport.UDPNetworkInterface::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPNetworkInterface_Close_mF5BD73EA728C95817A0E0D9E771CA4738804680B (UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		// if (m_UserData[0] < 0)
		NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 * L_0 = __this->get_address_of_m_UserData_0();
		int64_t L_1 = IL2CPP_NATIVEARRAY_GET_ITEM(int64_t, ((NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 *)L_0)->___m_Buffer_0, 0);
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// int errorcode = 0;
		V_0 = 0;
		// long sockHand = m_UserData[0];
		NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 * L_2 = __this->get_address_of_m_UserData_0();
		int64_t L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(int64_t, ((NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 *)L_2)->___m_Buffer_0, 0);
		V_1 = L_3;
		// NativeBindings.network_close(ref sockHand, ref errorcode);
		NativeBindings_network_close_m7A1F3BEADF84033AED54F8375356DD81DE05A00D((int64_t*)(&V_1), (int32_t*)(&V_0), /*hidden argument*/NULL);
		// m_UserData[0] = -1;
		NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 * L_4 = __this->get_address_of_m_UserData_0();
		IL2CPP_NATIVEARRAY_SET_ITEM(int64_t, ((NativeArray_1_t23C509A785AAF7A77A442A6D3A41F95AE1E83B78 *)L_4)->___m_Buffer_0, 0, (((int64_t)((int64_t)(-1)))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UDPNetworkInterface_Close_mF5BD73EA728C95817A0E0D9E771CA4738804680B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 * _thisAdjusted = reinterpret_cast<UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2 *>(__this + _offset);
	UDPNetworkInterface_Close_mF5BD73EA728C95817A0E0D9E771CA4738804680B(_thisAdjusted, method);
}
// System.Int32 Unity.Networking.Transport.UDPNetworkInterface::BeginSendMessage(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDPNetworkInterface_BeginSendMessage_mE825F4B82CCD7FF06BEA57AF7D66AAEAC50646D4 (NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, intptr_t ___userData1, int32_t ___requiredPayloadSize2, const RuntimeMethod* method)
{
	{
		// handle.id = 0;
		NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * L_0 = ___handle0;
		L_0->set_id_3(0);
		// handle.size = 0;
		NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * L_1 = ___handle0;
		L_1->set_size_2(0);
		// handle.capacity = requiredPayloadSize;
		NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * L_2 = ___handle0;
		int32_t L_3 = ___requiredPayloadSize2;
		L_2->set_capacity_1(L_3);
		// handle.data = (IntPtr)UnsafeUtility.Malloc(handle.capacity, 8, Allocator.Temp);
		NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * L_4 = ___handle0;
		NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * L_5 = ___handle0;
		int32_t L_6 = L_5->get_capacity_1();
		void* L_7 = UnsafeUtility_Malloc_m43BC7C9BE1437A70DD9A236418B0906CD3617331((((int64_t)((int64_t)L_6))), 8, 2, /*hidden argument*/NULL);
		intptr_t L_8 = IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21((void*)(void*)L_7, /*hidden argument*/NULL);
		L_4->set_data_0((intptr_t)L_8);
		// return 0;
		return 0;
	}
}
// System.Int32 Unity.Networking.Transport.UDPNetworkInterface::EndSendMessage(Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.IntPtr,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDPNetworkInterface_EndSendMessage_m98325DF88A408B9482B6BF26B0F2495C55645A11 (NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * ___address1, intptr_t ___userData2, NetworkSendQueueHandle_t062E01B87BC050A2F4EA63A2D090D892CA4C2C41 * ___sendQueue3, const RuntimeMethod* method)
{
	network_iovec_t7065DCF6AFF7D5A17B3D6EABC1920E300C794B2F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// iov.buf = (void*)handle.data;
		NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * L_0 = ___handle0;
		intptr_t L_1 = L_0->get_data_0();
		void* L_2 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_1, /*hidden argument*/NULL);
		(&V_0)->set_buf_1((void*)L_2);
		// iov.len = handle.size;
		NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * L_3 = ___handle0;
		int32_t L_4 = L_3->get_size_2();
		(&V_0)->set_len_0(L_4);
		// int errorcode = 0;
		V_1 = 0;
		// var addr = address;
		NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 * L_5 = ___address1;
		NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0  L_6 = (*(NetworkInterfaceEndPoint_t4ED85163506474C80BC2E6F3BEB33A0A111D5DE0 *)L_5);
		V_2 = L_6;
		// return NativeBindings.network_sendmsg(*(long*)userData, &iov, 1, ref *(network_address*)addr.data, ref errorcode);
		intptr_t L_7 = ___userData2;
		void* L_8 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_7, /*hidden argument*/NULL);
		int64_t L_9 = *((int64_t*)L_8);
		U3CdataU3Ee__FixedBuffer_t71F36EF2089E68D98C7F463E58C46FF20B18ADEA * L_10 = (&V_2)->get_address_of_data_1();
		uint8_t* L_11 = L_10->get_address_of_FixedElementField_0();
		int32_t L_12 = NativeBindings_network_sendmsg_mF5550350119C08CDEDB5D9D6429D3BA858138A3F(L_9, (void*)(void*)(((uintptr_t)(&V_0))), 1, (network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *)(((uintptr_t)L_11)), (int32_t*)(&V_1), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void Unity.Networking.Transport.UDPNetworkInterface::AbortSendMessage(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPNetworkInterface_AbortSendMessage_m2D2277C29CF9721D4143404F51FAFD7DA7B3ED9A (NetworkInterfaceSendHandle_tC1F893205BB72036F1448F8AF32EC9A726BA2718 * ___handle0, intptr_t ___userData1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.UDPNetworkInterface::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPNetworkInterface__cctor_m7AC2881BFA3D5C6CD173B68153F27DA4C8F595FF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPNetworkInterface__cctor_m7AC2881BFA3D5C6CD173B68153F27DA4C8F595FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static TransportFunctionPointer<NetworkSendInterface.BeginSendMessageDelegate> BeginSendMessageFunctionPointer = new TransportFunctionPointer<NetworkSendInterface.BeginSendMessageDelegate>(BeginSendMessage);
		BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645 * L_0 = (BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645 *)il2cpp_codegen_object_new(BeginSendMessageDelegate_tF362412E67268B3D97957CE162110D8FA7AC8645_il2cpp_TypeInfo_var);
		BeginSendMessageDelegate__ctor_mBABA51ACBE18164BDD4C0464E98106AB70E9B8C7(L_0, NULL, (intptr_t)((intptr_t)UDPNetworkInterface_BeginSendMessage_mE825F4B82CCD7FF06BEA57AF7D66AAEAC50646D4_RuntimeMethod_var), /*hidden argument*/NULL);
		TransportFunctionPointer_1_t5D4264C9C1E84ED1EFE927DB13426118D945CCC8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		TransportFunctionPointer_1__ctor_mC9B7F7063034CE410ABD6858E1D9788832045AD9((&L_1), L_0, /*hidden argument*/TransportFunctionPointer_1__ctor_mC9B7F7063034CE410ABD6858E1D9788832045AD9_RuntimeMethod_var);
		((UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2_StaticFields*)il2cpp_codegen_static_fields_for(UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2_il2cpp_TypeInfo_var))->set_BeginSendMessageFunctionPointer_1(L_1);
		// static TransportFunctionPointer<NetworkSendInterface.EndSendMessageDelegate> EndSendMessageFunctionPointer = new TransportFunctionPointer<NetworkSendInterface.EndSendMessageDelegate>(EndSendMessage);
		EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D * L_2 = (EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D *)il2cpp_codegen_object_new(EndSendMessageDelegate_t68237E355D1E0FB5A254293DEC37338AA3DAE11D_il2cpp_TypeInfo_var);
		EndSendMessageDelegate__ctor_mE5E0E71FFF4EA46BB0C20F05F55FD4215C802BA8(L_2, NULL, (intptr_t)((intptr_t)UDPNetworkInterface_EndSendMessage_m98325DF88A408B9482B6BF26B0F2495C55645A11_RuntimeMethod_var), /*hidden argument*/NULL);
		TransportFunctionPointer_1_t88EA7F4F4D2AB28A7C1F850FB6BFDC512EB45D8C  L_3;
		memset((&L_3), 0, sizeof(L_3));
		TransportFunctionPointer_1__ctor_m7C3A380D36774CBD852C32BD9890ABE5A1D7CCEA((&L_3), L_2, /*hidden argument*/TransportFunctionPointer_1__ctor_m7C3A380D36774CBD852C32BD9890ABE5A1D7CCEA_RuntimeMethod_var);
		((UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2_StaticFields*)il2cpp_codegen_static_fields_for(UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2_il2cpp_TypeInfo_var))->set_EndSendMessageFunctionPointer_2(L_3);
		// static TransportFunctionPointer<NetworkSendInterface.AbortSendMessageDelegate> AbortSendMessageFunctionPointer = new TransportFunctionPointer<NetworkSendInterface.AbortSendMessageDelegate>(AbortSendMessage);
		AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF * L_4 = (AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF *)il2cpp_codegen_object_new(AbortSendMessageDelegate_tFD99D2679DE67C03E9950810A79F9F63CAFD51CF_il2cpp_TypeInfo_var);
		AbortSendMessageDelegate__ctor_mDB6B7932166F5A16426EA890D990CDFE6C6EECC5(L_4, NULL, (intptr_t)((intptr_t)UDPNetworkInterface_AbortSendMessage_m2D2277C29CF9721D4143404F51FAFD7DA7B3ED9A_RuntimeMethod_var), /*hidden argument*/NULL);
		TransportFunctionPointer_1_t8C06B87B3C2D8D7F422A9E1E60B1BF8C73738D67  L_5;
		memset((&L_5), 0, sizeof(L_5));
		TransportFunctionPointer_1__ctor_m99FA00B60102DE5998F4089EA565B7086A4AAE28((&L_5), L_4, /*hidden argument*/TransportFunctionPointer_1__ctor_m99FA00B60102DE5998F4089EA565B7086A4AAE28_RuntimeMethod_var);
		((UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2_StaticFields*)il2cpp_codegen_static_fields_for(UDPNetworkInterface_tC6702085D4155010DABE1E37C30433CC3461E4F2_il2cpp_TypeInfo_var))->set_AbortSendMessageFunctionPointer_3(L_5);
		return;
	}
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
// System.Boolean Unity.Networking.Transport.network_address::Equals(Unity.Networking.Transport.network_address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool network_address_Equals_mC9677EEEF83970F9C047554855E8142CB2B01033 (network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E * __this, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E  ___other0, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// if (length != other.length)
		int32_t L_0 = __this->get_length_2();
		network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E  L_1 = ___other0;
		int32_t L_2 = L_1.get_length_2();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		U3CdataU3Ee__FixedBuffer_tBC6A02E2A957AF2E78A5ACEE7C00D7A9C3B17819 * L_3 = __this->get_address_of_data_1();
		uint8_t* L_4 = L_3->get_address_of_FixedElementField_0();
		V_1 = (uint8_t*)L_4;
		// fixed (void* p = this.data)
		uint8_t* L_5 = V_1;
		V_0 = (void*)(((uintptr_t)L_5));
		// return UnsafeUtility.MemCmp(p, other.data, length) == 0;
		void* L_6 = V_0;
		U3CdataU3Ee__FixedBuffer_tBC6A02E2A957AF2E78A5ACEE7C00D7A9C3B17819 * L_7 = (&___other0)->get_address_of_data_1();
		uint8_t* L_8 = L_7->get_address_of_FixedElementField_0();
		int32_t L_9 = __this->get_length_2();
		int32_t L_10 = UnsafeUtility_MemCmp_mDA7B6D4A6677206212DBD89D1F3AE5D5A5672FC8((void*)(void*)L_6, (void*)(void*)(((uintptr_t)L_8)), (((int64_t)((int64_t)L_9))), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool network_address_Equals_mC9677EEEF83970F9C047554855E8142CB2B01033_AdjustorThunk (RuntimeObject * __this, network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E * _thisAdjusted = reinterpret_cast<network_address_tEA3D15D6859A3B46F133C87F52D6EBD8FF6DCC2E *>(__this + _offset);
	return network_address_Equals_mC9677EEEF83970F9C047554855E8142CB2B01033(_thisAdjusted, ___other0, method);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
