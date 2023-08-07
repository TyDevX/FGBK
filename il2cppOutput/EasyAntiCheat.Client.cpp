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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// EasyAntiCheat.Client.Debug/DummyWriter
struct DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318;
// EasyAntiCheat.Client.Debug/DummyWriter/<>c
struct U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07;
// EasyAntiCheat.Client.Debug/WriterDelegate
struct WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE;
// EasyAntiCheat.Client.Hydra.NativeClient/CallbackFinished
struct CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD;
// EasyAntiCheat.Client.Hydra.NativeClient/CallbackHostValidation
struct CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB;
// EasyAntiCheat.Client.Hydra.NativeClient/CallbackIntegrity
struct CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89;
// EasyAntiCheat.Client.Hydra.NativeClient/CallbackProgress
struct CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E;
// EasyAntiCheat.Client.Hydra.NativeClient/INativeModule
struct INativeModule_t059C7D3E4CBC4C1533A7F9D338287F76E316C70C;
// EasyAntiCheat.Client.Hydra.NativeClient/UnityModule
struct UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9;
// EasyAntiCheat.Client.Hydra.NetProtect.NetProtect
struct NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916;
// EasyAntiCheat.Client.Hydra.Runtime/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389;
// EasyAntiCheat.Client.LoadCompletedEventArgs
struct LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF;
// EasyAntiCheat.Client.LoadEventArgs
struct LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83;
// EasyAntiCheat.Client.LoadProgressEventArgs
struct LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D;
// EasyAntiCheat.Client.StateChangedEventArgs
struct StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45;
// EasyAntiCheat.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tB862CD8A4424E1C882DD67CA464FB1AFC2641E7F;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ApplicationException
struct ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
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
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler`1<EasyAntiCheat.Client.LoadCompletedEventArgs>
struct EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2;
// System.EventHandler`1<EasyAntiCheat.Client.LoadProgressEventArgs>
struct EventHandler_1_tC8329854515E65389BF0F95338C5D896570E2202;
// System.EventHandler`1<EasyAntiCheat.Client.StateChangedEventArgs>
struct EventHandler_1_tD5F9F6E3F43558013AB4A4D218A5347CE39C0A31;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientIntegrityViolationType_t634D181D073815BAF124692111467B6928862E9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostValidationResult_tBEC35F8EE3673FF6270EBCE5FD90097245FC9BF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeModule_t059C7D3E4CBC4C1533A7F9D338287F76E316C70C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadResult_t50135A2413C7A087C2CE202EA4A50615F328C74B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral48B166B41B6B0800CBDBF1C5B5021F5159A3C151;
IL2CPP_EXTERN_C String_t* _stringLiteral615E24B4442F56EA947633EEF17C5DBA0B3F065D;
IL2CPP_EXTERN_C String_t* _stringLiteralAAA3B3A5C3119AB0A35975C81661AE4FA4E4C5A5;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCF68DA0E071D775A3F5ED5ED36F153D28A78EF;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandlerExtensions_Raise_TisLoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF_m4B86C0202C1E3513F939F103C36AAB741E773F4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandlerExtensions_Raise_TisLoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D_m195525CB11530B497B87C3A8B8D8C2C49ABEF12B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandlerExtensions_Raise_TisStateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45_mAB6BABE1CBE0240495F98BA75AB3829BFA3749BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m05F6D28DB841B29CAEF19EC0DA4E7EE8EDA8D5A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Runtime_Initialize_m699F6EC0F2F3EF876D8C0F471383B773E0475EF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Runtime_OnHostValidation_m66FBBABCE1BA3978CF8FA66116077C5C790E9387_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Runtime_OnIntegrityViolation_mE2A096601FE3115468EDA21ADE1538F0A549FAD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Runtime_OnInternalEvent_m4FC7A4543FA084ACD0881C1B3C97EDB0CD8AE326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Runtime_OnInternalProgress_m949550073D812A398A322826D6248E2D79D7E86D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_0_m6A16B2044572D9736F29C7B0370E4469ED80A11E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CInitializeU3Eb__0_mD9C1F27CFEAAFF5795854D3EA65F6A5688B7B3D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CallbackFinished_BeginInvoke_m1879E88A1222816E1BFCC0B5EB6B441574B96E7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CallbackHostValidation_BeginInvoke_m1A43A1EEA5FED43662C70DB7B9F1D90BA18387B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CallbackIntegrity_BeginInvoke_mED7A7E1D9825D1F1C7C85155EC70EA92513489F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CallbackProgress_BeginInvoke_m8643E3AB5B895C3D822D3FB460C7C4EE2DB28FA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Debug_SetOut_m4804E18AD4359EBA7059E74F388A46AEEFAF0D44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Debug_WriteLine_mD1081EBB51DC61F236E41525BF05215F5E6C3FCF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyWriter__ctor_m890234B2634D1E935F6211D7839FF819F3EC668C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LoadCompletedEventArgs_ToString_mD8A743051BE5826B8575C7FB6AB400DF8E650D14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LoadEventArgs__ctor_m4FFBE12D6476D2C967FBEEC043DFAAA7A4B28B08_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeClient_ConnectionReset_m3FD5D284D5BD809E507952495338B2426E7EDADE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeClient_Dispose_mF138EF8CF4CDE63924CA3AF6EFD64B83975B3F7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeClient_Initialize_mFAA18EB3D6E5FC4FB63FEF5FC8BF968B1BBCFA6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeClient_IsStartedWithEasyAntiCheat_m0FD29489D0462D20ED7DA6FB13465CF220D0CB93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeClient_NetProtect_mBE4424368534E1646E6A3985549AEB72D4CFFEAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeClient_PollStatus_mA569FB6843F744CB73CE0DFFFC0B1D63B0BEEF2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeClient_PopNetworkMessage_m70FBDA184324FFFB255F835AF8B75336BA1A53A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeClient_PushNetworkMessage_mF80567D34805538727C90845B0F848385721C16E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeClient__cctor_m905BDEA31AFC71A818965222640598E712F3EFFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeNetProtect_SetInstance_m2E4A418E5EB91016A934429342AE969B6B955CADEasyAntiCheat_Client_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeNetProtect_SetInstance_m2E4A418E5EB91016A934429342AE969B6B955CAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeNetProtect__cctor_mB2BE06DB27E0357A05B208BE913BF2FEC7C431EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetProtect__ctor_mA3F5B413BA572E5B9B587B2B941C998E49776332_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_ConnectionReset_m6CA978D0FB48EE7971E2984C9D8FA87AA9AD7F9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_Initialize_m699F6EC0F2F3EF876D8C0F471383B773E0475EF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_IsActive_m5F94B6E72395F6287636A166E1ECB7C45BAC5022_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_OnHostValidation_m66FBBABCE1BA3978CF8FA66116077C5C790E9387_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_OnIntegrityViolation_mE2A096601FE3115468EDA21ADE1538F0A549FAD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_OnInternalEvent_m4FC7A4543FA084ACD0881C1B3C97EDB0CD8AE326_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_OnInternalProgress_m949550073D812A398A322826D6248E2D79D7E86D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_PollStatus_mF9D8EC0C011471E40DBC34F0F62DF9276D767794_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_PopNetworkMessage_mB5461433DCF3BBC3B395BE99D35812EEC2A19BC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_PushNetworkMessage_mC98500012F89F66E1EED8DFD4E77D33A2B267536_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_Release_mD6651462078337E0F174B63483B6369BD25A8413_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime__cctor_m7D529D90754D7B557DEF17CD02C3768A62B0DD61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_get_Initialized_mD7C2EBC73DC0130D67BF285D0F3CCDE678E8DF99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_set_HostValidation_m818D0EBF39DA7EB4AD4A983EEBCE5B3F172F43F2EasyAntiCheat_Client_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_set_HostValidation_m818D0EBF39DA7EB4AD4A983EEBCE5B3F172F43F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_set_Initialized_m3FDE6D1E2ECFEEBA21AA217D70204AF68FEC615BEasyAntiCheat_Client_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_set_Initialized_m3FDE6D1E2ECFEEBA21AA217D70204AF68FEC615B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_set_Integrity_m7C4FF8EE04636995F16196E7D1678DA7909EC64AEasyAntiCheat_Client_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Runtime_set_Integrity_m7C4FF8EE04636995F16196E7D1678DA7909EC64A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StateChangedEventArgs__ctor_mF506907B1CF97D10BEB107EDC06F267854865CEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass19_0_U3CInitializeU3Eb__0_mD9C1F27CFEAAFF5795854D3EA65F6A5688B7B3D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m45F312B11EF2D49BE9549D824D3F0F034DDAA31A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityModule_ConnectionReset_m7D79EEF7DBB6130B5BF81184CB33F1661B19B238_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityModule_Create_mA135EFC8BD19DB2CADE931D571630926CFA0C301_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityModule_Destroy_mC6A2A4A0C5F2CB755B43177F53136AA754C80DF3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityModule_Initialize_m202451DAB44832C962BAE26DB11DAE822ED2179D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityModule_NetProtect_mE037E19021F2E1AD46FF7640FCA4C2AA510BB04E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityModule_PollStatus_m0178571C0647380AA0DAF6D2DECB8DDF57F58062_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityModule_PopNetworkMessage_m89FB50446F796C9FA04EAF01A602257EF4AE5C13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityModule_PushNetworkMessage_m41DB78C291C88F917CBA12A3D50D65F74BCB2575_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
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
struct  U3CModuleU3E_t2DF5A2EDFBCF59CE48461B391DD14F84B45F4C8A 
{
public:

public:
};


// System.Object


// EasyAntiCheat.Client.Debug
struct  Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105  : public RuntimeObject
{
public:

public:
};

struct Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105_StaticFields
{
public:
	// System.IO.TextWriter EasyAntiCheat.Client.Debug::writer
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___writer_0;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105_StaticFields, ___writer_0)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_writer_0() const { return ___writer_0; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_0), (void*)value);
	}
};


// EasyAntiCheat.Client.Debug_DummyWriter_<>c
struct  U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_StaticFields
{
public:
	// EasyAntiCheat.Client.Debug_DummyWriter_<>c EasyAntiCheat.Client.Debug_DummyWriter_<>c::<>9
	U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07 * ___U3CU3E9_0;
	// EasyAntiCheat.Client.Debug_WriterDelegate EasyAntiCheat.Client.Debug_DummyWriter_<>c::<>9__3_0
	WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_StaticFields, ___U3CU3E9__3_0_1)); }
	inline WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// EasyAntiCheat.Client.EventHandlerExtensions
struct  EventHandlerExtensions_t72C69134D58E91B04FD35C4BF5C46595139F3070  : public RuntimeObject
{
public:

public:
};


// EasyAntiCheat.Client.Hydra.NativeClient_UnityModule
struct  UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9  : public RuntimeObject
{
public:

public:
};


// EasyAntiCheat.Client.Hydra.NetProtect.NetProtect
struct  NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916  : public RuntimeObject
{
public:

public:
};


// EasyAntiCheat.Client.Hydra.Runtime_<>c__DisplayClass19_0
struct  U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389  : public RuntimeObject
{
public:
	// System.EventHandler`1<EasyAntiCheat.Client.LoadCompletedEventArgs> EasyAntiCheat.Client.Hydra.Runtime_<>c__DisplayClass19_0::onCompleted
	EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * ___onCompleted_0;

public:
	inline static int32_t get_offset_of_onCompleted_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389, ___onCompleted_0)); }
	inline EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * get_onCompleted_0() const { return ___onCompleted_0; }
	inline EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 ** get_address_of_onCompleted_0() { return &___onCompleted_0; }
	inline void set_onCompleted_0(EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * value)
	{
		___onCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleted_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_56)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_59)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_60)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
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

// EasyAntiCheat.Client.IntegrityDescriptor
struct  IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 
{
public:
	// System.Boolean EasyAntiCheat.Client.IntegrityDescriptor::<Violated>k__BackingField
	bool ___U3CViolatedU3Ek__BackingField_0;
	// System.String EasyAntiCheat.Client.IntegrityDescriptor::<ViolationMessage>k__BackingField
	String_t* ___U3CViolationMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CViolatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1, ___U3CViolatedU3Ek__BackingField_0)); }
	inline bool get_U3CViolatedU3Ek__BackingField_0() const { return ___U3CViolatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CViolatedU3Ek__BackingField_0() { return &___U3CViolatedU3Ek__BackingField_0; }
	inline void set_U3CViolatedU3Ek__BackingField_0(bool value)
	{
		___U3CViolatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CViolationMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1, ___U3CViolationMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CViolationMessageU3Ek__BackingField_1() const { return ___U3CViolationMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CViolationMessageU3Ek__BackingField_1() { return &___U3CViolationMessageU3Ek__BackingField_1; }
	inline void set_U3CViolationMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CViolationMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CViolationMessageU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of EasyAntiCheat.Client.IntegrityDescriptor
struct IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshaled_pinvoke
{
	int32_t ___U3CViolatedU3Ek__BackingField_0;
	char* ___U3CViolationMessageU3Ek__BackingField_1;
};
// Native definition for COM marshalling of EasyAntiCheat.Client.IntegrityDescriptor
struct IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshaled_com
{
	int32_t ___U3CViolatedU3Ek__BackingField_0;
	Il2CppChar* ___U3CViolationMessageU3Ek__BackingField_1;
};

// EasyAntiCheat.Client.LoadEventArgs
struct  LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String EasyAntiCheat.Client.LoadEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}
};


// EasyAntiCheat.MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_tB862CD8A4424E1C882DD67CA464FB1AFC2641E7F  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
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

// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
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


// EasyAntiCheat.Client.ClientIntegrityViolationType
struct  ClientIntegrityViolationType_t634D181D073815BAF124692111467B6928862E9A 
{
public:
	// System.Int32 EasyAntiCheat.Client.ClientIntegrityViolationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientIntegrityViolationType_t634D181D073815BAF124692111467B6928862E9A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyAntiCheat.Client.Debug_DummyWriter
struct  DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318  : public TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0
{
public:
	// EasyAntiCheat.Client.Debug_WriterDelegate EasyAntiCheat.Client.Debug_DummyWriter::writer
	WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * ___writer_11;

public:
	inline static int32_t get_offset_of_writer_11() { return static_cast<int32_t>(offsetof(DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318, ___writer_11)); }
	inline WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * get_writer_11() const { return ___writer_11; }
	inline WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE ** get_address_of_writer_11() { return &___writer_11; }
	inline void set_writer_11(WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * value)
	{
		___writer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_11), (void*)value);
	}
};


// EasyAntiCheat.Client.HostValidationResult
struct  HostValidationResult_tBEC35F8EE3673FF6270EBCE5FD90097245FC9BF7 
{
public:
	// System.Int32 EasyAntiCheat.Client.HostValidationResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HostValidationResult_tBEC35F8EE3673FF6270EBCE5FD90097245FC9BF7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyAntiCheat.Client.Hydra.NativeClient
struct  NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA  : public RuntimeObject
{
public:

public:
};

struct NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields
{
public:
	// System.String EasyAntiCheat.Client.Hydra.NativeClient::InterfaceVersion
	String_t* ___InterfaceVersion_0;
	// EasyAntiCheat.Client.Hydra.NativeClient_INativeModule EasyAntiCheat.Client.Hydra.NativeClient::Module
	RuntimeObject* ___Module_1;
	// System.IntPtr EasyAntiCheat.Client.Hydra.NativeClient::Instance
	intptr_t ___Instance_2;
	// System.Byte[] EasyAntiCheat.Client.Hydra.NativeClient::StaticMsgBuf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___StaticMsgBuf_3;
	// EasyAntiCheat.Client.Hydra.NativeClient_CallbackProgress EasyAntiCheat.Client.Hydra.NativeClient::nogcOnProgress
	CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * ___nogcOnProgress_4;
	// EasyAntiCheat.Client.Hydra.NativeClient_CallbackFinished EasyAntiCheat.Client.Hydra.NativeClient::nogcOnFinished
	CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * ___nogcOnFinished_5;
	// EasyAntiCheat.Client.Hydra.NativeClient_CallbackIntegrity EasyAntiCheat.Client.Hydra.NativeClient::nogcOnIntegrityViolation
	CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * ___nogcOnIntegrityViolation_6;
	// EasyAntiCheat.Client.Hydra.NativeClient_CallbackHostValidation EasyAntiCheat.Client.Hydra.NativeClient::nogcOnHostValidation
	CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * ___nogcOnHostValidation_7;

public:
	inline static int32_t get_offset_of_InterfaceVersion_0() { return static_cast<int32_t>(offsetof(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields, ___InterfaceVersion_0)); }
	inline String_t* get_InterfaceVersion_0() const { return ___InterfaceVersion_0; }
	inline String_t** get_address_of_InterfaceVersion_0() { return &___InterfaceVersion_0; }
	inline void set_InterfaceVersion_0(String_t* value)
	{
		___InterfaceVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InterfaceVersion_0), (void*)value);
	}

	inline static int32_t get_offset_of_Module_1() { return static_cast<int32_t>(offsetof(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields, ___Module_1)); }
	inline RuntimeObject* get_Module_1() const { return ___Module_1; }
	inline RuntimeObject** get_address_of_Module_1() { return &___Module_1; }
	inline void set_Module_1(RuntimeObject* value)
	{
		___Module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Module_1), (void*)value);
	}

	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields, ___Instance_2)); }
	inline intptr_t get_Instance_2() const { return ___Instance_2; }
	inline intptr_t* get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(intptr_t value)
	{
		___Instance_2 = value;
	}

	inline static int32_t get_offset_of_StaticMsgBuf_3() { return static_cast<int32_t>(offsetof(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields, ___StaticMsgBuf_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_StaticMsgBuf_3() const { return ___StaticMsgBuf_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_StaticMsgBuf_3() { return &___StaticMsgBuf_3; }
	inline void set_StaticMsgBuf_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___StaticMsgBuf_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StaticMsgBuf_3), (void*)value);
	}

	inline static int32_t get_offset_of_nogcOnProgress_4() { return static_cast<int32_t>(offsetof(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields, ___nogcOnProgress_4)); }
	inline CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * get_nogcOnProgress_4() const { return ___nogcOnProgress_4; }
	inline CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E ** get_address_of_nogcOnProgress_4() { return &___nogcOnProgress_4; }
	inline void set_nogcOnProgress_4(CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * value)
	{
		___nogcOnProgress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nogcOnProgress_4), (void*)value);
	}

	inline static int32_t get_offset_of_nogcOnFinished_5() { return static_cast<int32_t>(offsetof(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields, ___nogcOnFinished_5)); }
	inline CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * get_nogcOnFinished_5() const { return ___nogcOnFinished_5; }
	inline CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD ** get_address_of_nogcOnFinished_5() { return &___nogcOnFinished_5; }
	inline void set_nogcOnFinished_5(CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * value)
	{
		___nogcOnFinished_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nogcOnFinished_5), (void*)value);
	}

	inline static int32_t get_offset_of_nogcOnIntegrityViolation_6() { return static_cast<int32_t>(offsetof(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields, ___nogcOnIntegrityViolation_6)); }
	inline CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * get_nogcOnIntegrityViolation_6() const { return ___nogcOnIntegrityViolation_6; }
	inline CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 ** get_address_of_nogcOnIntegrityViolation_6() { return &___nogcOnIntegrityViolation_6; }
	inline void set_nogcOnIntegrityViolation_6(CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * value)
	{
		___nogcOnIntegrityViolation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nogcOnIntegrityViolation_6), (void*)value);
	}

	inline static int32_t get_offset_of_nogcOnHostValidation_7() { return static_cast<int32_t>(offsetof(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields, ___nogcOnHostValidation_7)); }
	inline CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * get_nogcOnHostValidation_7() const { return ___nogcOnHostValidation_7; }
	inline CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB ** get_address_of_nogcOnHostValidation_7() { return &___nogcOnHostValidation_7; }
	inline void set_nogcOnHostValidation_7(CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * value)
	{
		___nogcOnHostValidation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nogcOnHostValidation_7), (void*)value);
	}
};


// EasyAntiCheat.Client.Hydra.NativeNetProtect
struct  NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22  : public RuntimeObject
{
public:

public:
};

struct NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22_StaticFields
{
public:
	// System.IntPtr EasyAntiCheat.Client.Hydra.NativeNetProtect::Instance
	intptr_t ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22_StaticFields, ___Instance_0)); }
	inline intptr_t get_Instance_0() const { return ___Instance_0; }
	inline intptr_t* get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(intptr_t value)
	{
		___Instance_0 = value;
	}
};


// EasyAntiCheat.Client.LoadProgressEventArgs
struct  LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D  : public LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83
{
public:
	// System.Int32 EasyAntiCheat.Client.LoadProgressEventArgs::<Progress>k__BackingField
	int32_t ___U3CProgressU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CProgressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D, ___U3CProgressU3Ek__BackingField_2)); }
	inline int32_t get_U3CProgressU3Ek__BackingField_2() const { return ___U3CProgressU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CProgressU3Ek__BackingField_2() { return &___U3CProgressU3Ek__BackingField_2; }
	inline void set_U3CProgressU3Ek__BackingField_2(int32_t value)
	{
		___U3CProgressU3Ek__BackingField_2 = value;
	}
};


// EasyAntiCheat.Client.LoadResult
struct  LoadResult_t50135A2413C7A087C2CE202EA4A50615F328C74B 
{
public:
	// System.Int32 EasyAntiCheat.Client.LoadResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadResult_t50135A2413C7A087C2CE202EA4A50615F328C74B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyAntiCheat.Client.StateChangeType
struct  StateChangeType_t6F4121B8D442A4ED1B3383270460BA9AC48B2CE4 
{
public:
	// System.Int32 EasyAntiCheat.Client.StateChangeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StateChangeType_t6F4121B8D442A4ED1B3383270460BA9AC48B2CE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// EasyAntiCheat.Client.Hydra.Runtime
struct  Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72  : public RuntimeObject
{
public:

public:
};

struct Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields
{
public:
	// EasyAntiCheat.Client.Hydra.NativeClient_CallbackProgress EasyAntiCheat.Client.Hydra.Runtime::nogc_AntiCheatProgress
	CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * ___nogc_AntiCheatProgress_0;
	// EasyAntiCheat.Client.Hydra.NativeClient_CallbackFinished EasyAntiCheat.Client.Hydra.Runtime::nogc_AntiCheatEvent
	CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * ___nogc_AntiCheatEvent_1;
	// System.Boolean EasyAntiCheat.Client.Hydra.Runtime::initializeCalled
	bool ___initializeCalled_2;
	// System.EventHandler`1<EasyAntiCheat.Client.StateChangedEventArgs> EasyAntiCheat.Client.Hydra.Runtime::onStateChanged
	EventHandler_1_tD5F9F6E3F43558013AB4A4D218A5347CE39C0A31 * ___onStateChanged_3;
	// System.EventHandler`1<EasyAntiCheat.Client.LoadCompletedEventArgs> EasyAntiCheat.Client.Hydra.Runtime::onLoadCompleted
	EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * ___onLoadCompleted_4;
	// System.EventHandler`1<EasyAntiCheat.Client.LoadProgressEventArgs> EasyAntiCheat.Client.Hydra.Runtime::onProgress
	EventHandler_1_tC8329854515E65389BF0F95338C5D896570E2202 * ___onProgress_5;
	// EasyAntiCheat.Client.Hydra.NetProtect.NetProtect EasyAntiCheat.Client.Hydra.Runtime::_NetProtect
	NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916 * ____NetProtect_6;
	// System.Boolean EasyAntiCheat.Client.Hydra.Runtime::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_7;
	// EasyAntiCheat.Client.IntegrityDescriptor EasyAntiCheat.Client.Hydra.Runtime::<Integrity>k__BackingField
	IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1  ___U3CIntegrityU3Ek__BackingField_8;
	// EasyAntiCheat.Client.HostValidationResult EasyAntiCheat.Client.Hydra.Runtime::<HostValidation>k__BackingField
	int32_t ___U3CHostValidationU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_nogc_AntiCheatProgress_0() { return static_cast<int32_t>(offsetof(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields, ___nogc_AntiCheatProgress_0)); }
	inline CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * get_nogc_AntiCheatProgress_0() const { return ___nogc_AntiCheatProgress_0; }
	inline CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E ** get_address_of_nogc_AntiCheatProgress_0() { return &___nogc_AntiCheatProgress_0; }
	inline void set_nogc_AntiCheatProgress_0(CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * value)
	{
		___nogc_AntiCheatProgress_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nogc_AntiCheatProgress_0), (void*)value);
	}

	inline static int32_t get_offset_of_nogc_AntiCheatEvent_1() { return static_cast<int32_t>(offsetof(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields, ___nogc_AntiCheatEvent_1)); }
	inline CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * get_nogc_AntiCheatEvent_1() const { return ___nogc_AntiCheatEvent_1; }
	inline CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD ** get_address_of_nogc_AntiCheatEvent_1() { return &___nogc_AntiCheatEvent_1; }
	inline void set_nogc_AntiCheatEvent_1(CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * value)
	{
		___nogc_AntiCheatEvent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nogc_AntiCheatEvent_1), (void*)value);
	}

	inline static int32_t get_offset_of_initializeCalled_2() { return static_cast<int32_t>(offsetof(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields, ___initializeCalled_2)); }
	inline bool get_initializeCalled_2() const { return ___initializeCalled_2; }
	inline bool* get_address_of_initializeCalled_2() { return &___initializeCalled_2; }
	inline void set_initializeCalled_2(bool value)
	{
		___initializeCalled_2 = value;
	}

	inline static int32_t get_offset_of_onStateChanged_3() { return static_cast<int32_t>(offsetof(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields, ___onStateChanged_3)); }
	inline EventHandler_1_tD5F9F6E3F43558013AB4A4D218A5347CE39C0A31 * get_onStateChanged_3() const { return ___onStateChanged_3; }
	inline EventHandler_1_tD5F9F6E3F43558013AB4A4D218A5347CE39C0A31 ** get_address_of_onStateChanged_3() { return &___onStateChanged_3; }
	inline void set_onStateChanged_3(EventHandler_1_tD5F9F6E3F43558013AB4A4D218A5347CE39C0A31 * value)
	{
		___onStateChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStateChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_onLoadCompleted_4() { return static_cast<int32_t>(offsetof(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields, ___onLoadCompleted_4)); }
	inline EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * get_onLoadCompleted_4() const { return ___onLoadCompleted_4; }
	inline EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 ** get_address_of_onLoadCompleted_4() { return &___onLoadCompleted_4; }
	inline void set_onLoadCompleted_4(EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * value)
	{
		___onLoadCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onLoadCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_onProgress_5() { return static_cast<int32_t>(offsetof(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields, ___onProgress_5)); }
	inline EventHandler_1_tC8329854515E65389BF0F95338C5D896570E2202 * get_onProgress_5() const { return ___onProgress_5; }
	inline EventHandler_1_tC8329854515E65389BF0F95338C5D896570E2202 ** get_address_of_onProgress_5() { return &___onProgress_5; }
	inline void set_onProgress_5(EventHandler_1_tC8329854515E65389BF0F95338C5D896570E2202 * value)
	{
		___onProgress_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onProgress_5), (void*)value);
	}

	inline static int32_t get_offset_of__NetProtect_6() { return static_cast<int32_t>(offsetof(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields, ____NetProtect_6)); }
	inline NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916 * get__NetProtect_6() const { return ____NetProtect_6; }
	inline NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916 ** get_address_of__NetProtect_6() { return &____NetProtect_6; }
	inline void set__NetProtect_6(NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916 * value)
	{
		____NetProtect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NetProtect_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInitializedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields, ___U3CInitializedU3Ek__BackingField_7)); }
	inline bool get_U3CInitializedU3Ek__BackingField_7() const { return ___U3CInitializedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CInitializedU3Ek__BackingField_7() { return &___U3CInitializedU3Ek__BackingField_7; }
	inline void set_U3CInitializedU3Ek__BackingField_7(bool value)
	{
		___U3CInitializedU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIntegrityU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields, ___U3CIntegrityU3Ek__BackingField_8)); }
	inline IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1  get_U3CIntegrityU3Ek__BackingField_8() const { return ___U3CIntegrityU3Ek__BackingField_8; }
	inline IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 * get_address_of_U3CIntegrityU3Ek__BackingField_8() { return &___U3CIntegrityU3Ek__BackingField_8; }
	inline void set_U3CIntegrityU3Ek__BackingField_8(IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1  value)
	{
		___U3CIntegrityU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CIntegrityU3Ek__BackingField_8))->___U3CViolationMessageU3Ek__BackingField_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CHostValidationU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields, ___U3CHostValidationU3Ek__BackingField_9)); }
	inline int32_t get_U3CHostValidationU3Ek__BackingField_9() const { return ___U3CHostValidationU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CHostValidationU3Ek__BackingField_9() { return &___U3CHostValidationU3Ek__BackingField_9; }
	inline void set_U3CHostValidationU3Ek__BackingField_9(int32_t value)
	{
		___U3CHostValidationU3Ek__BackingField_9 = value;
	}
};


// EasyAntiCheat.Client.LoadCompletedEventArgs
struct  LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF  : public LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83
{
public:
	// EasyAntiCheat.Client.LoadResult EasyAntiCheat.Client.LoadCompletedEventArgs::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF, ___U3CStatusU3Ek__BackingField_2)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_2() const { return ___U3CStatusU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_2() { return &___U3CStatusU3Ek__BackingField_2; }
	inline void set_U3CStatusU3Ek__BackingField_2(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_2 = value;
	}
};


// EasyAntiCheat.Client.StateChangedEventArgs
struct  StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String EasyAntiCheat.Client.StateChangedEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// EasyAntiCheat.Client.StateChangeType EasyAntiCheat.Client.StateChangedEventArgs::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45, ___U3CTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_2() const { return ___U3CTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_2() { return &___U3CTypeU3Ek__BackingField_2; }
	inline void set_U3CTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_2 = value;
	}
};


// System.ApplicationException
struct  ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
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

// EasyAntiCheat.Client.Debug_WriterDelegate
struct  WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE  : public MulticastDelegate_t
{
public:

public:
};


// EasyAntiCheat.Client.Hydra.NativeClient_CallbackFinished
struct  CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD  : public MulticastDelegate_t
{
public:

public:
};


// EasyAntiCheat.Client.Hydra.NativeClient_CallbackHostValidation
struct  CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB  : public MulticastDelegate_t
{
public:

public:
};


// EasyAntiCheat.Client.Hydra.NativeClient_CallbackIntegrity
struct  CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89  : public MulticastDelegate_t
{
public:

public:
};


// EasyAntiCheat.Client.Hydra.NativeClient_CallbackProgress
struct  CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E  : public MulticastDelegate_t
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


// System.EventHandler`1<EasyAntiCheat.Client.LoadCompletedEventArgs>
struct  EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<EasyAntiCheat.Client.LoadProgressEventArgs>
struct  EventHandler_1_tC8329854515E65389BF0F95338C5D896570E2202  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<EasyAntiCheat.Client.StateChangedEventArgs>
struct  EventHandler_1_tD5F9F6E3F43558013AB4A4D218A5347CE39C0A31  : public MulticastDelegate_t
{
public:

public:
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
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m2F4B147DEC855146FD0EDA4C46398F7DA148FD1B_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.EventHandlerExtensions::Raise<System.Object>(System.EventHandler`1<T>,System.Object,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandlerExtensions_Raise_TisRuntimeObject_mAE5E589245B07325BCD66F9CD257014CD19AD43D_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * ___eventHandler0, RuntimeObject * ___sender1, RuntimeObject * ___eventArgs2, const RuntimeMethod* method);

// System.Void EasyAntiCheat.Client.Debug::SetOut(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_SetOut_m4804E18AD4359EBA7059E74F388A46AEEFAF0D44 (TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___writer0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Debug/DummyWriter::.ctor(EasyAntiCheat.Client.Debug/WriterDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyWriter__ctor_m890234B2634D1E935F6211D7839FF819F3EC668C (DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318 * __this, WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * ___writer0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_Default_m625C78C2A9A8504B8BA4141994412513DC470CE2 (const RuntimeMethod* method);
// System.Void System.IO.TextWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriter__ctor_m9E003066292D16C33BCD9F462445436BCBF9AAFA (TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * __this, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Debug/WriterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterDelegate__ctor_m6F952B3B8A8AA2CB96F088EA05E8018517265135 (WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Debug/WriterDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterDelegate_Invoke_mECAF3001B92BB139AAE6EF1EF4E2453360508E3C (WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Debug/DummyWriter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m02E93880094B8887C6D509C2E522FFBB69BE7335 (U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient/UnityModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule__ctor_m2E477444DAD1BC4E7D7A4F496FBDB327DB958026 (UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.IntPtr EasyAntiCheat.Client.Hydra.NativeClient/UnityModule::CreateGameClient(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityModule_CreateGameClient_mFD751B5AB2980EB1463224816E7ABFAADF1162DC (String_t* ___InterfaceVersion0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient/UnityModule::GameClient_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_GameClient_Destroy_m36D7122FECB1B10AF8E01C29BA4310A3027D2A5D (intptr_t ___Instance0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient/UnityModule::GameClient_Initialize(System.IntPtr,EasyAntiCheat.Client.Hydra.NativeClient/CallbackProgress,EasyAntiCheat.Client.Hydra.NativeClient/CallbackFinished,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_GameClient_Initialize_mD7ADFA468E58312B206D9A53516D977F69396715 (intptr_t ___Instance0, CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * ___OnProgress1, CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * ___OnFinished2, intptr_t ___CallbackParameter3, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient/UnityModule::GameClient_ConnectionReset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_GameClient_ConnectionReset_m31B70B5B7AC43490CC0C18DF37BCDCDBC25A9DFA (intptr_t ___Instance0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Boolean EasyAntiCheat.Client.Hydra.NativeClient/UnityModule::GameClient_PopNetworkMessage(System.IntPtr,System.IntPtr&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityModule_GameClient_PopNetworkMessage_mA6087D0C08955B0A0BD14C1A90A15F1293AB1502 (intptr_t ___Instance0, intptr_t* ___MessageBuffer1, uint32_t* ___MessageLength2, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m174F4957D6DEDB6359835123005304B14E79132E (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2 (intptr_t ___source0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient/UnityModule::GameClient_PushNetworkMessage(System.IntPtr,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_GameClient_PushNetworkMessage_m359CE60BFB1DEFF42D91D992EC6D38E4CBE3F270 (intptr_t ___Instance0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___MessageBuffer1, uint32_t ___MessageLength2, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient/UnityModule::GameClient_PollStatus(System.IntPtr,EasyAntiCheat.Client.Hydra.NativeClient/CallbackIntegrity,EasyAntiCheat.Client.Hydra.NativeClient/CallbackHostValidation,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_GameClient_PollStatus_mAE04787A77298911888E857A86D58E422E39AC75 (intptr_t ___Instance0, CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * ___OnIntegrityViolation1, CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * ___OnHostValidation2, intptr_t ___CallbackParameter3, const RuntimeMethod* method);
// System.IntPtr EasyAntiCheat.Client.Hydra.NativeClient/UnityModule::GameClient_NetProtect(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityModule_GameClient_NetProtect_m5C22A6A2A47DE1176689814EE5E8B542DFF0B82C (intptr_t ___Instance0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeNetProtect::SetInstance(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NativeNetProtect_SetInstance_m2E4A418E5EB91016A934429342AE969B6B955CAD_inline (intptr_t ___NetProtectInstance0, const RuntimeMethod* method);
// System.UInt32 EasyAntiCheat.Client.Hydra.Runtime::OnInternalProgress(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Runtime_OnInternalProgress_m949550073D812A398A322826D6248E2D79D7E86D (uint32_t ___Progress0, intptr_t ___CallbackParameter1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.Runtime::OnInternalEvent(EasyAntiCheat.Client.LoadResult,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Runtime_OnInternalEvent_m4FC7A4543FA084ACD0881C1B3C97EDB0CD8AE326 (int32_t ___Result0, String_t* ___Message1, intptr_t ___CallbackParameter2, const RuntimeMethod* method);
// System.UInt32 EasyAntiCheat.Client.Hydra.Runtime::OnIntegrityViolation(EasyAntiCheat.Client.ClientIntegrityViolationType,System.String,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Runtime_OnIntegrityViolation_mE2A096601FE3115468EDA21ADE1538F0A549FAD6 (int32_t ___ViolationType0, String_t* ___ViolationCause1, String_t* ___DefaultMessage2, intptr_t ___CallbackParameter3, const RuntimeMethod* method);
// System.Boolean EasyAntiCheat.Client.Hydra.Runtime::OnHostValidation(EasyAntiCheat.Client.HostValidationResult,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Runtime_OnHostValidation_m66FBBABCE1BA3978CF8FA66116077C5C790E9387 (int32_t ___Result0, String_t* ___Message1, intptr_t ___CallbackParameter2, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.Runtime/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mCE3F45446C08B7010A19EBBFD9A919B9C9A8C9C3 (U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389 * __this, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308 (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<EasyAntiCheat.Client.LoadCompletedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m05F6D28DB841B29CAEF19EC0DA4E7EE8EDA8D5A6 (EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2F4B147DEC855146FD0EDA4C46398F7DA148FD1B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient/CallbackProgress::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackProgress__ctor_m0685BB8DBC5FB80BB7C27587CFF480DD90D1684D (CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient/CallbackFinished::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFinished__ctor_mADF616E921124E9506F62CB60AD49C6410D93C87 (CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient/CallbackIntegrity::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackIntegrity__ctor_m3E3C7B5EF0E0F17A355BD96D15DC4DDB0C40A4BA (CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient/CallbackHostValidation::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackHostValidation__ctor_mD406CCB4F2C51CBD0EEE01C19B637965050BAD12 (CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient::Initialize(EasyAntiCheat.Client.Hydra.NativeClient/CallbackProgress,EasyAntiCheat.Client.Hydra.NativeClient/CallbackFinished,EasyAntiCheat.Client.Hydra.NativeClient/CallbackIntegrity,EasyAntiCheat.Client.Hydra.NativeClient/CallbackHostValidation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClient_Initialize_mFAA18EB3D6E5FC4FB63FEF5FC8BF968B1BBCFA6E (CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * ___OnProgress0, CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * ___OnFinished1, CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * ___OnIntegrityViolation2, CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * ___OnHostValidation3, const RuntimeMethod* method);
// System.Boolean EasyAntiCheat.Client.Hydra.NativeClient::IsStartedWithEasyAntiCheat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeClient_IsStartedWithEasyAntiCheat_m0FD29489D0462D20ED7DA6FB13465CF220D0CB93 (const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NetProtect.NetProtect::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetProtect__ctor_mA3F5B413BA572E5B9B587B2B941C998E49776332 (NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916 * __this, intptr_t ___Instance0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClient_Dispose_mF138EF8CF4CDE63924CA3AF6EFD64B83975B3F7D (const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient::ConnectionReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClient_ConnectionReset_m3FD5D284D5BD809E507952495338B2426E7EDADE (const RuntimeMethod* method);
// System.Boolean EasyAntiCheat.Client.Hydra.NativeClient::PopNetworkMessage(System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeClient_PopNetworkMessage_m70FBDA184324FFFB255F835AF8B75336BA1A53A3 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___MessageBuffer0, int32_t* ___MessageLength1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient::PushNetworkMessage(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClient_PushNetworkMessage_mF80567D34805538727C90845B0F848385721C16E (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___MessageBuffer0, int32_t ___MessageLength1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.NativeClient::PollStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClient_PollStatus_mA569FB6843F744CB73CE0DFFFC0B1D63B0BEEF2D (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.LoadProgressEventArgs::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadProgressEventArgs__ctor_m38229B8E1A2146D01CFBC3A9FC79F849F0C0EC74 (LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D * __this, String_t* ___message0, int32_t ___progress1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.EventHandlerExtensions::Raise<EasyAntiCheat.Client.LoadProgressEventArgs>(System.EventHandler`1<T>,System.Object,T)
inline void EventHandlerExtensions_Raise_TisLoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D_m195525CB11530B497B87C3A8B8D8C2C49ABEF12B (EventHandler_1_tC8329854515E65389BF0F95338C5D896570E2202 * ___eventHandler0, RuntimeObject * ___sender1, LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D * ___eventArgs2, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC8329854515E65389BF0F95338C5D896570E2202 *, RuntimeObject *, LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D *, const RuntimeMethod*))EventHandlerExtensions_Raise_TisRuntimeObject_mAE5E589245B07325BCD66F9CD257014CD19AD43D_gshared)(___eventHandler0, ___sender1, ___eventArgs2, method);
}
// System.Void EasyAntiCheat.Client.Debug::WriteLine(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_WriteLine_mD1081EBB51DC61F236E41525BF05215F5E6C3FCF (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.LoadCompletedEventArgs::.ctor(EasyAntiCheat.Client.LoadResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCompletedEventArgs__ctor_m1DDBCEDC5429948068D218317BDA889094A9DEA2 (LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * __this, int32_t ___Result0, String_t* ___Message1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.EventHandlerExtensions::Raise<EasyAntiCheat.Client.LoadCompletedEventArgs>(System.EventHandler`1<T>,System.Object,T)
inline void EventHandlerExtensions_Raise_TisLoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF_m4B86C0202C1E3513F939F103C36AAB741E773F4D (EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * ___eventHandler0, RuntimeObject * ___sender1, LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * ___eventArgs2, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 *, RuntimeObject *, LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF *, const RuntimeMethod*))EventHandlerExtensions_Raise_TisRuntimeObject_mAE5E589245B07325BCD66F9CD257014CD19AD43D_gshared)(___eventHandler0, ___sender1, ___eventArgs2, method);
}
// System.Void EasyAntiCheat.Client.IntegrityDescriptor::.ctor(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegrityDescriptor__ctor_m3C79D1E7051B3035D33B43F26E704866F189ABA8 (IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 * __this, bool ___violated0, String_t* ___message1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.Runtime::set_Integrity(EasyAntiCheat.Client.IntegrityDescriptor)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Runtime_set_Integrity_m7C4FF8EE04636995F16196E7D1678DA7909EC64A_inline (IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1  ___value0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.StateChangedEventArgs::.ctor(EasyAntiCheat.Client.StateChangeType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedEventArgs__ctor_mF506907B1CF97D10BEB107EDC06F267854865CEE (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, int32_t ___stateChangeType0, String_t* ___message1, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.EventHandlerExtensions::Raise<EasyAntiCheat.Client.StateChangedEventArgs>(System.EventHandler`1<T>,System.Object,T)
inline void EventHandlerExtensions_Raise_TisStateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45_mAB6BABE1CBE0240495F98BA75AB3829BFA3749BD (EventHandler_1_tD5F9F6E3F43558013AB4A4D218A5347CE39C0A31 * ___eventHandler0, RuntimeObject * ___sender1, StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * ___eventArgs2, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD5F9F6E3F43558013AB4A4D218A5347CE39C0A31 *, RuntimeObject *, StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 *, const RuntimeMethod*))EventHandlerExtensions_Raise_TisRuntimeObject_mAE5E589245B07325BCD66F9CD257014CD19AD43D_gshared)(___eventHandler0, ___sender1, ___eventArgs2, method);
}
// System.Void EasyAntiCheat.Client.Hydra.Runtime::set_HostValidation(EasyAntiCheat.Client.HostValidationResult)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Runtime_set_HostValidation_m818D0EBF39DA7EB4AD4A983EEBCE5B3F172F43F2_inline (int32_t ___value0, const RuntimeMethod* method);
// EasyAntiCheat.Client.LoadResult EasyAntiCheat.Client.LoadCompletedEventArgs::get_Status()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t LoadCompletedEventArgs_get_Status_m28AD24F5988452E110ACED1B2A29FA42D072A16C_inline (LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * __this, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.Hydra.Runtime::set_Initialized(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Runtime_set_Initialized_m3FDE6D1E2ECFEEBA21AA217D70204AF68FEC615B_inline (bool ___value0, const RuntimeMethod* method);
// System.IntPtr EasyAntiCheat.Client.Hydra.NativeClient::NetProtect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeClient_NetProtect_mBE4424368534E1646E6A3985549AEB72D4CFFEAD (const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.IntegrityDescriptor::set_Violated(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void IntegrityDescriptor_set_Violated_m007BE84023A3F8C732975EA325173860CE93DAB6_inline (IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.IntegrityDescriptor::set_ViolationMessage(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void IntegrityDescriptor_set_ViolationMessage_m20455ABBE4EC82E1EA701348DF61BB33551DE00E_inline (IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.LoadEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadEventArgs__ctor_m4FFBE12D6476D2C967FBEEC043DFAAA7A4B28B08 (LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.LoadCompletedEventArgs::set_Status(EasyAntiCheat.Client.LoadResult)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void LoadCompletedEventArgs_set_Status_m006A9DB803CF7C4C28B473D1A0AA69DFAFDB9E6F_inline (LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String EasyAntiCheat.Client.LoadEventArgs::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadEventArgs_get_Message_mB7AD70A864B42515F68FD2EE0D8CC4D9B0B82E63_inline (LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.LoadEventArgs::set_Message(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void LoadEventArgs_set_Message_m311B1287DFFA159B48DE2908FFE5DD6BEEC23E30_inline (LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.LoadProgressEventArgs::set_Progress(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void LoadProgressEventArgs_set_Progress_m6F0C2E83F29AC9F916FA256970ABD1EBC9E1F927_inline (LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.StateChangedEventArgs::set_Type(EasyAntiCheat.Client.StateChangeType)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StateChangedEventArgs_set_Type_m453586707566B1B98E9846BA922DEB8EA01AD6CA_inline (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void EasyAntiCheat.Client.StateChangedEventArgs::set_Message(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StateChangedEventArgs_set_Message_m8A81B050B92D84B41A3B39D63A66820DC096E586_inline (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String EasyAntiCheat.Client.StateChangedEventArgs::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* StateChangedEventArgs_get_Message_mB16A9E69196436E40533446EF7D93A368BA009E8_inline (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
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
// System.Void EasyAntiCheat.Client.Debug::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug__cctor_m0483640D7F8AC33655AE3AA18AE2A75A51F60D45 (const RuntimeMethod* method)
{
	{
		Debug_SetOut_m4804E18AD4359EBA7059E74F388A46AEEFAF0D44((TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Debug::SetOut(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_SetOut_m4804E18AD4359EBA7059E74F388A46AEEFAF0D44 (TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debug_SetOut_m4804E18AD4359EBA7059E74F388A46AEEFAF0D44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318 * G_B3_0 = NULL;
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318 * L_1 = (DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318 *)il2cpp_codegen_object_new(DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318_il2cpp_TypeInfo_var);
		DummyWriter__ctor_m890234B2634D1E935F6211D7839FF819F3EC668C(L_1, (WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE *)NULL, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_000c;
	}

IL_000b:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_2 = ___writer0;
		G_B3_0 = ((DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318 *)(L_2));
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105_il2cpp_TypeInfo_var);
		((Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105_il2cpp_TypeInfo_var))->set_writer_0(G_B3_0);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Debug::WriteLine(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_WriteLine_mD1081EBB51DC61F236E41525BF05215F5E6C3FCF (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debug_WriteLine_mD1081EBB51DC61F236E41525BF05215F5E6C3FCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_0 = ((Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105_il2cpp_TypeInfo_var))->get_writer_0();
		String_t* L_1 = ___format0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args1;
		String_t* L_3 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_0, L_3);
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
// System.Text.Encoding EasyAntiCheat.Client.Debug_DummyWriter::get_Encoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * DummyWriter_get_Encoding_mC29B6135AE17B7729198CBFBE596BD7495D4E1EA (DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318 * __this, const RuntimeMethod* method)
{
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_Default_m625C78C2A9A8504B8BA4141994412513DC470CE2(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void EasyAntiCheat.Client.Debug_DummyWriter::.ctor(EasyAntiCheat.Client.Debug_WriterDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyWriter__ctor_m890234B2634D1E935F6211D7839FF819F3EC668C (DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318 * __this, WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyWriter__ctor_m890234B2634D1E935F6211D7839FF819F3EC668C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * G_B3_0 = NULL;
	DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318 * G_B3_1 = NULL;
	WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * G_B1_0 = NULL;
	DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318 * G_B1_1 = NULL;
	WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * G_B2_0 = NULL;
	DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318 * G_B2_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_il2cpp_TypeInfo_var);
		TextWriter__ctor_m9E003066292D16C33BCD9F462445436BCBF9AAFA(__this, /*hidden argument*/NULL);
		WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * L_0 = ___writer0;
		WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B3_0 = L_1;
			G_B3_1 = __this;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_il2cpp_TypeInfo_var);
		WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * L_2 = ((U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = G_B1_1;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_il2cpp_TypeInfo_var);
		U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07 * L_4 = ((U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * L_5 = (WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE *)il2cpp_codegen_object_new(WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE_il2cpp_TypeInfo_var);
		WriterDelegate__ctor_m6F952B3B8A8AA2CB96F088EA05E8018517265135(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__3_0_m6A16B2044572D9736F29C7B0370E4469ED80A11E_RuntimeMethod_var), /*hidden argument*/NULL);
		WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * L_6 = L_5;
		((U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_6);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_1;
	}

IL_002b:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_writer_11(G_B3_0);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Debug_DummyWriter::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyWriter_WriteLine_m56A45690BC3E6F390F2CB893DF07B06E3F590AA3 (DummyWriter_t58020FEF8B43CC6FDEE621B9832140DE97341318 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * L_0 = __this->get_writer_11();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		WriterDelegate_Invoke_mECAF3001B92BB139AAE6EF1EF4E2453360508E3C(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void EasyAntiCheat.Client.Debug_DummyWriter_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m45F312B11EF2D49BE9549D824D3F0F034DDAA31A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m45F312B11EF2D49BE9549D824D3F0F034DDAA31A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07 * L_0 = (U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07 *)il2cpp_codegen_object_new(U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m02E93880094B8887C6D509C2E522FFBB69BE7335(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Debug_DummyWriter_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m02E93880094B8887C6D509C2E522FFBB69BE7335 (U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Debug_DummyWriter_<>c::<.ctor>b__3_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__3_0_m6A16B2044572D9736F29C7B0370E4469ED80A11E (U3CU3Ec_t089DAE074D974E95CD564E306A2AA7020AFCDA07 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE (WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void EasyAntiCheat.Client.Debug_WriterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterDelegate__ctor_m6F952B3B8A8AA2CB96F088EA05E8018517265135 (WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyAntiCheat.Client.Debug_WriterDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterDelegate_Invoke_mECAF3001B92BB139AAE6EF1EF4E2453360508E3C (WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * __this, String_t* ___message0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyAntiCheat.Client.Debug_WriterDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriterDelegate_BeginInvoke_m43209E1BA6045572413CE39071FC80A57A30623E (WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void EasyAntiCheat.Client.Debug_WriterDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterDelegate_EndInvoke_mEF0CCD663DB471F06B61335497954BCBEC09120A (WriterDelegate_t05F0952D41E511DCB283636E33582048FE48E8CE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void EasyAntiCheat.Client.Hydra.NativeClient::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClient__cctor_m905BDEA31AFC71A818965222640598E712F3EFFB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeClient__cctor_m905BDEA31AFC71A818965222640598E712F3EFFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->set_InterfaceVersion_0(_stringLiteralCCCF68DA0E071D775A3F5ED5ED36F153D28A78EF);
		((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->set_Instance_2((intptr_t)(0));
		UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9 * L_0 = (UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9 *)il2cpp_codegen_object_new(UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9_il2cpp_TypeInfo_var);
		UnityModule__ctor_m2E477444DAD1BC4E7D7A4F496FBDB327DB958026(L_0, /*hidden argument*/NULL);
		((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->set_Module_1(L_0);
		RuntimeObject* L_1 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Module_1();
		NullCheck(L_1);
		intptr_t L_2 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr EasyAntiCheat.Client.Hydra.NativeClient/INativeModule::Create() */, INativeModule_t059C7D3E4CBC4C1533A7F9D338287F76E316C70C_il2cpp_TypeInfo_var, L_1);
		((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->set_Instance_2((intptr_t)L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->set_StaticMsgBuf_3(L_3);
		return;
	}
}
// System.Boolean EasyAntiCheat.Client.Hydra.NativeClient::IsStartedWithEasyAntiCheat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeClient_IsStartedWithEasyAntiCheat_m0FD29489D0462D20ED7DA6FB13465CF220D0CB93 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeClient_IsStartedWithEasyAntiCheat_m0FD29489D0462D20ED7DA6FB13465CF220D0CB93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Instance_2();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClient_Dispose_mF138EF8CF4CDE63924CA3AF6EFD64B83975B3F7D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeClient_Dispose_mF138EF8CF4CDE63924CA3AF6EFD64B83975B3F7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Instance_2();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Module_1();
		intptr_t L_3 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Instance_2();
		NullCheck(L_2);
		InterfaceActionInvoker1< intptr_t >::Invoke(1 /* System.Void EasyAntiCheat.Client.Hydra.NativeClient/INativeModule::Destroy(System.IntPtr) */, INativeModule_t059C7D3E4CBC4C1533A7F9D338287F76E316C70C_il2cpp_TypeInfo_var, L_2, (intptr_t)L_3);
		((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->set_Instance_2((intptr_t)(0));
	}

IL_002a:
	{
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient::Initialize(EasyAntiCheat.Client.Hydra.NativeClient_CallbackProgress,EasyAntiCheat.Client.Hydra.NativeClient_CallbackFinished,EasyAntiCheat.Client.Hydra.NativeClient_CallbackIntegrity,EasyAntiCheat.Client.Hydra.NativeClient_CallbackHostValidation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClient_Initialize_mFAA18EB3D6E5FC4FB63FEF5FC8BF968B1BBCFA6E (CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * ___OnProgress0, CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * ___OnFinished1, CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * ___OnIntegrityViolation2, CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * ___OnHostValidation3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeClient_Initialize_mFAA18EB3D6E5FC4FB63FEF5FC8BF968B1BBCFA6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Instance_2();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * L_2 = ___OnProgress0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->set_nogcOnProgress_4(L_2);
		CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * L_3 = ___OnFinished1;
		((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->set_nogcOnFinished_5(L_3);
		CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * L_4 = ___OnIntegrityViolation2;
		((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->set_nogcOnIntegrityViolation_6(L_4);
		CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * L_5 = ___OnHostValidation3;
		((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->set_nogcOnHostValidation_7(L_5);
		RuntimeObject* L_6 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Module_1();
		intptr_t L_7 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Instance_2();
		CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * L_8 = ___OnProgress0;
		CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * L_9 = ___OnFinished1;
		NullCheck(L_6);
		InterfaceActionInvoker4< intptr_t, CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E *, CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD *, intptr_t >::Invoke(2 /* System.Void EasyAntiCheat.Client.Hydra.NativeClient/INativeModule::Initialize(System.IntPtr,EasyAntiCheat.Client.Hydra.NativeClient/CallbackProgress,EasyAntiCheat.Client.Hydra.NativeClient/CallbackFinished,System.IntPtr) */, INativeModule_t059C7D3E4CBC4C1533A7F9D338287F76E316C70C_il2cpp_TypeInfo_var, L_6, (intptr_t)L_7, L_8, L_9, (intptr_t)(0));
	}

IL_003f:
	{
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient::ConnectionReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClient_ConnectionReset_m3FD5D284D5BD809E507952495338B2426E7EDADE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeClient_ConnectionReset_m3FD5D284D5BD809E507952495338B2426E7EDADE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Module_1();
		intptr_t L_1 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Instance_2();
		NullCheck(L_0);
		InterfaceActionInvoker1< intptr_t >::Invoke(3 /* System.Void EasyAntiCheat.Client.Hydra.NativeClient/INativeModule::ConnectionReset(System.IntPtr) */, INativeModule_t059C7D3E4CBC4C1533A7F9D338287F76E316C70C_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		return;
	}
}
// System.Boolean EasyAntiCheat.Client.Hydra.NativeClient::PopNetworkMessage(System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeClient_PopNetworkMessage_m70FBDA184324FFFB255F835AF8B75336BA1A53A3 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___MessageBuffer0, int32_t* ___MessageLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeClient_PopNetworkMessage_m70FBDA184324FFFB255F835AF8B75336BA1A53A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Module_1();
		intptr_t L_1 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Instance_2();
		int32_t* L_2 = ___MessageLength1;
		NullCheck(L_0);
		bool L_3 = InterfaceFuncInvoker3< bool, intptr_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**, int32_t* >::Invoke(4 /* System.Boolean EasyAntiCheat.Client.Hydra.NativeClient/INativeModule::PopNetworkMessage(System.IntPtr,System.Byte[]&,System.Int32&) */, INativeModule_t059C7D3E4CBC4C1533A7F9D338287F76E316C70C_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_address_of_StaticMsgBuf_3()), (int32_t*)L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_4 = ___MessageBuffer0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_StaticMsgBuf_3();
		*((RuntimeObject **)L_4) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)L_5);
		return L_3;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient::PushNetworkMessage(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClient_PushNetworkMessage_mF80567D34805538727C90845B0F848385721C16E (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___MessageBuffer0, int32_t ___MessageLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeClient_PushNetworkMessage_mF80567D34805538727C90845B0F848385721C16E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Module_1();
		intptr_t L_1 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Instance_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___MessageBuffer0;
		int32_t L_3 = ___MessageLength1;
		NullCheck(L_0);
		InterfaceActionInvoker3< intptr_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(5 /* System.Void EasyAntiCheat.Client.Hydra.NativeClient/INativeModule::PushNetworkMessage(System.IntPtr,System.Byte[],System.Int32) */, INativeModule_t059C7D3E4CBC4C1533A7F9D338287F76E316C70C_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, L_2, L_3);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient::PollStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClient_PollStatus_mA569FB6843F744CB73CE0DFFFC0B1D63B0BEEF2D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeClient_PollStatus_mA569FB6843F744CB73CE0DFFFC0B1D63B0BEEF2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Module_1();
		intptr_t L_1 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Instance_2();
		CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * L_2 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_nogcOnIntegrityViolation_6();
		CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * L_3 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_nogcOnHostValidation_7();
		NullCheck(L_0);
		InterfaceActionInvoker4< intptr_t, CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 *, CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB *, intptr_t >::Invoke(6 /* System.Void EasyAntiCheat.Client.Hydra.NativeClient/INativeModule::PollStatus(System.IntPtr,EasyAntiCheat.Client.Hydra.NativeClient/CallbackIntegrity,EasyAntiCheat.Client.Hydra.NativeClient/CallbackHostValidation,System.IntPtr) */, INativeModule_t059C7D3E4CBC4C1533A7F9D338287F76E316C70C_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, L_2, L_3, (intptr_t)(0));
		return;
	}
}
// System.IntPtr EasyAntiCheat.Client.Hydra.NativeClient::NetProtect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeClient_NetProtect_mBE4424368534E1646E6A3985549AEB72D4CFFEAD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeClient_NetProtect_mBE4424368534E1646E6A3985549AEB72D4CFFEAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Module_1();
		intptr_t L_1 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_Instance_2();
		NullCheck(L_0);
		intptr_t L_2 = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(7 /* System.IntPtr EasyAntiCheat.Client.Hydra.NativeClient/INativeModule::NetProtect(System.IntPtr) */, INativeModule_t059C7D3E4CBC4C1533A7F9D338287F76E316C70C_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		return (intptr_t)L_2;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD (CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * __this, int32_t ___Result0, String_t* ___Message1, intptr_t ___CallbackParameter2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___Message1' to native representation
	char* ____Message1_marshaled = NULL;
	____Message1_marshaled = il2cpp_codegen_marshal_string(___Message1);

	// Native function invocation
	il2cppPInvokeFunc(___Result0, ____Message1_marshaled, ___CallbackParameter2);

	// Marshaling cleanup of parameter '___Message1' native representation
	il2cpp_codegen_marshal_free(____Message1_marshaled);
	____Message1_marshaled = NULL;

}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_CallbackFinished::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFinished__ctor_mADF616E921124E9506F62CB60AD49C6410D93C87 (CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_CallbackFinished::Invoke(EasyAntiCheat.Client.LoadResult,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFinished_Invoke_mD68404D594AB54C828D9B1B0D5ACEB1DA9D2915D (CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * __this, int32_t ___Result0, String_t* ___Message1, intptr_t ___CallbackParameter2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___Result0, ___Message1, ___CallbackParameter2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___Result0, ___Message1, ___CallbackParameter2, targetMethod);
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
						GenericInterfaceActionInvoker3< int32_t, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___Result0, ___Message1, ___CallbackParameter2);
					else
						GenericVirtActionInvoker3< int32_t, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___Result0, ___Message1, ___CallbackParameter2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___Result0, ___Message1, ___CallbackParameter2);
					else
						VirtActionInvoker3< int32_t, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___Result0, ___Message1, ___CallbackParameter2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___Result0) - 1), ___Message1, ___CallbackParameter2, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___Result0) - 1), ___Message1, ___CallbackParameter2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, String_t*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___Result0, ___Message1, ___CallbackParameter2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyAntiCheat.Client.Hydra.NativeClient_CallbackFinished::BeginInvoke(EasyAntiCheat.Client.LoadResult,System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackFinished_BeginInvoke_m1879E88A1222816E1BFCC0B5EB6B441574B96E7B (CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * __this, int32_t ___Result0, String_t* ___Message1, intptr_t ___CallbackParameter2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackFinished_BeginInvoke_m1879E88A1222816E1BFCC0B5EB6B441574B96E7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(LoadResult_t50135A2413C7A087C2CE202EA4A50615F328C74B_il2cpp_TypeInfo_var, &___Result0);
	__d_args[1] = ___Message1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___CallbackParameter2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_CallbackFinished::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFinished_EndInvoke_m1C9742E410929A12123C53D8E8E51F423ACD9959 (CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB (CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * __this, int32_t ___Result0, String_t* ___Message1, intptr_t ___CallbackParameter2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(int32_t, char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___Message1' to native representation
	char* ____Message1_marshaled = NULL;
	____Message1_marshaled = il2cpp_codegen_marshal_string(___Message1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___Result0, ____Message1_marshaled, ___CallbackParameter2);

	// Marshaling cleanup of parameter '___Message1' native representation
	il2cpp_codegen_marshal_free(____Message1_marshaled);
	____Message1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_CallbackHostValidation::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackHostValidation__ctor_mD406CCB4F2C51CBD0EEE01C19B637965050BAD12 (CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean EasyAntiCheat.Client.Hydra.NativeClient_CallbackHostValidation::Invoke(EasyAntiCheat.Client.HostValidationResult,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CallbackHostValidation_Invoke_m09B08E83F5F000008B9E7059855D6D8DB5B33FFC (CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * __this, int32_t ___Result0, String_t* ___Message1, intptr_t ___CallbackParameter2, const RuntimeMethod* method)
{
	bool result = false;
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
				typedef bool (*FunctionPointerType) (int32_t, String_t*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___Result0, ___Message1, ___CallbackParameter2, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, int32_t, String_t*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___Result0, ___Message1, ___CallbackParameter2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< bool, int32_t, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___Result0, ___Message1, ___CallbackParameter2);
					else
						result = GenericVirtFuncInvoker3< bool, int32_t, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___Result0, ___Message1, ___CallbackParameter2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< bool, int32_t, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___Result0, ___Message1, ___CallbackParameter2);
					else
						result = VirtFuncInvoker3< bool, int32_t, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___Result0, ___Message1, ___CallbackParameter2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, String_t*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___Result0) - 1), ___Message1, ___CallbackParameter2, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, String_t*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___Result0) - 1), ___Message1, ___CallbackParameter2, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, int32_t, String_t*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___Result0, ___Message1, ___CallbackParameter2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult EasyAntiCheat.Client.Hydra.NativeClient_CallbackHostValidation::BeginInvoke(EasyAntiCheat.Client.HostValidationResult,System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackHostValidation_BeginInvoke_m1A43A1EEA5FED43662C70DB7B9F1D90BA18387B3 (CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * __this, int32_t ___Result0, String_t* ___Message1, intptr_t ___CallbackParameter2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackHostValidation_BeginInvoke_m1A43A1EEA5FED43662C70DB7B9F1D90BA18387B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(HostValidationResult_tBEC35F8EE3673FF6270EBCE5FD90097245FC9BF7_il2cpp_TypeInfo_var, &___Result0);
	__d_args[1] = ___Message1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___CallbackParameter2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Boolean EasyAntiCheat.Client.Hydra.NativeClient_CallbackHostValidation::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CallbackHostValidation_EndInvoke_m81B3DD7AB7BBE70E362B6099D04B987239893DB3 (CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 (CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * __this, int32_t ___ViolationType0, String_t* ___ViolationCause1, String_t* ___DefaultMessage2, intptr_t ___CallbackParameter3, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(int32_t, char*, char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___ViolationCause1' to native representation
	char* ____ViolationCause1_marshaled = NULL;
	____ViolationCause1_marshaled = il2cpp_codegen_marshal_string(___ViolationCause1);

	// Marshaling of parameter '___DefaultMessage2' to native representation
	char* ____DefaultMessage2_marshaled = NULL;
	____DefaultMessage2_marshaled = il2cpp_codegen_marshal_string(___DefaultMessage2);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ViolationType0, ____ViolationCause1_marshaled, ____DefaultMessage2_marshaled, ___CallbackParameter3);

	// Marshaling cleanup of parameter '___ViolationCause1' native representation
	il2cpp_codegen_marshal_free(____ViolationCause1_marshaled);
	____ViolationCause1_marshaled = NULL;

	// Marshaling cleanup of parameter '___DefaultMessage2' native representation
	il2cpp_codegen_marshal_free(____DefaultMessage2_marshaled);
	____DefaultMessage2_marshaled = NULL;

	return returnValue;
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_CallbackIntegrity::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackIntegrity__ctor_m3E3C7B5EF0E0F17A355BD96D15DC4DDB0C40A4BA (CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 EasyAntiCheat.Client.Hydra.NativeClient_CallbackIntegrity::Invoke(EasyAntiCheat.Client.ClientIntegrityViolationType,System.String,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CallbackIntegrity_Invoke_m5E1BE4BC80744D464FE2EBB85DFF5700FB688198 (CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * __this, int32_t ___ViolationType0, String_t* ___ViolationCause1, String_t* ___DefaultMessage2, intptr_t ___CallbackParameter3, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (int32_t, String_t*, String_t*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ViolationType0, ___ViolationCause1, ___DefaultMessage2, ___CallbackParameter3, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, int32_t, String_t*, String_t*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ViolationType0, ___ViolationCause1, ___DefaultMessage2, ___CallbackParameter3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< uint32_t, int32_t, String_t*, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___ViolationType0, ___ViolationCause1, ___DefaultMessage2, ___CallbackParameter3);
					else
						result = GenericVirtFuncInvoker4< uint32_t, int32_t, String_t*, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___ViolationType0, ___ViolationCause1, ___DefaultMessage2, ___CallbackParameter3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< uint32_t, int32_t, String_t*, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ViolationType0, ___ViolationCause1, ___DefaultMessage2, ___CallbackParameter3);
					else
						result = VirtFuncInvoker4< uint32_t, int32_t, String_t*, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ViolationType0, ___ViolationCause1, ___DefaultMessage2, ___CallbackParameter3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___ViolationType0) - 1), ___ViolationCause1, ___DefaultMessage2, ___CallbackParameter3, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___ViolationType0) - 1), ___ViolationCause1, ___DefaultMessage2, ___CallbackParameter3, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, int32_t, String_t*, String_t*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ViolationType0, ___ViolationCause1, ___DefaultMessage2, ___CallbackParameter3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult EasyAntiCheat.Client.Hydra.NativeClient_CallbackIntegrity::BeginInvoke(EasyAntiCheat.Client.ClientIntegrityViolationType,System.String,System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackIntegrity_BeginInvoke_mED7A7E1D9825D1F1C7C85155EC70EA92513489F6 (CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * __this, int32_t ___ViolationType0, String_t* ___ViolationCause1, String_t* ___DefaultMessage2, intptr_t ___CallbackParameter3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackIntegrity_BeginInvoke_mED7A7E1D9825D1F1C7C85155EC70EA92513489F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(ClientIntegrityViolationType_t634D181D073815BAF124692111467B6928862E9A_il2cpp_TypeInfo_var, &___ViolationType0);
	__d_args[1] = ___ViolationCause1;
	__d_args[2] = ___DefaultMessage2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___CallbackParameter3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.UInt32 EasyAntiCheat.Client.Hydra.NativeClient_CallbackIntegrity::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CallbackIntegrity_EndInvoke_m88D9CB61A2A4A71AAA3123DBD034FAE1D831EE31 (CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E (CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * __this, uint32_t ___Progress0, intptr_t ___CallbackParameter1, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(uint32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___Progress0, ___CallbackParameter1);

	return returnValue;
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_CallbackProgress::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackProgress__ctor_m0685BB8DBC5FB80BB7C27587CFF480DD90D1684D (CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 EasyAntiCheat.Client.Hydra.NativeClient_CallbackProgress::Invoke(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CallbackProgress_Invoke_mC263DAC953830546CEC33FF1B93CD4201F236013 (CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * __this, uint32_t ___Progress0, intptr_t ___CallbackParameter1, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (uint32_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___Progress0, ___CallbackParameter1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, uint32_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___Progress0, ___CallbackParameter1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< uint32_t, uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___Progress0, ___CallbackParameter1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___Progress0, ___CallbackParameter1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___Progress0, ___CallbackParameter1);
					else
						result = VirtFuncInvoker2< uint32_t, uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___Progress0, ___CallbackParameter1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___Progress0) - 1), ___CallbackParameter1, targetMethod);
				}
				typedef uint32_t (*FunctionPointerType) (void*, uint32_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___Progress0, ___CallbackParameter1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult EasyAntiCheat.Client.Hydra.NativeClient_CallbackProgress::BeginInvoke(System.UInt32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackProgress_BeginInvoke_m8643E3AB5B895C3D822D3FB460C7C4EE2DB28FA6 (CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * __this, uint32_t ___Progress0, intptr_t ___CallbackParameter1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackProgress_BeginInvoke_m8643E3AB5B895C3D822D3FB460C7C4EE2DB28FA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___Progress0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___CallbackParameter1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.UInt32 EasyAntiCheat.Client.Hydra.NativeClient_CallbackProgress::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CallbackProgress_EndInvoke_m75D3F9785050CF9E974F31F5CB659070E3136BB3 (CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL CreateGameClient(char*);
#endif
// System.IntPtr EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::CreateGameClient(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityModule_CreateGameClient_mFD751B5AB2980EB1463224816E7ABFAADF1162DC (String_t* ___InterfaceVersion0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("easyanticheat"), "CreateGameClient", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___InterfaceVersion0' to native representation
	char* ____InterfaceVersion0_marshaled = NULL;
	____InterfaceVersion0_marshaled = il2cpp_codegen_marshal_string(___InterfaceVersion0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(CreateGameClient)(____InterfaceVersion0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____InterfaceVersion0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___InterfaceVersion0' native representation
	il2cpp_codegen_marshal_free(____InterfaceVersion0_marshaled);
	____InterfaceVersion0_marshaled = NULL;

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void STDCALL GameClient_Destroy(intptr_t);
#endif
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::GameClient_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_GameClient_Destroy_m36D7122FECB1B10AF8E01C29BA4310A3027D2A5D (intptr_t ___Instance0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("easyanticheat"), "GameClient_Destroy", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(GameClient_Destroy)(___Instance0);
	#else
	il2cppPInvokeFunc(___Instance0);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void STDCALL GameClient_Initialize(intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, intptr_t);
#endif
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::GameClient_Initialize(System.IntPtr,EasyAntiCheat.Client.Hydra.NativeClient_CallbackProgress,EasyAntiCheat.Client.Hydra.NativeClient_CallbackFinished,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_GameClient_Initialize_mD7ADFA468E58312B206D9A53516D977F69396715 (intptr_t ___Instance0, CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * ___OnProgress1, CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * ___OnFinished2, intptr_t ___CallbackParameter3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("easyanticheat"), "GameClient_Initialize", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___OnProgress1' to native representation
	Il2CppMethodPointer ____OnProgress1_marshaled = NULL;
	____OnProgress1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___OnProgress1));

	// Marshaling of parameter '___OnFinished2' to native representation
	Il2CppMethodPointer ____OnFinished2_marshaled = NULL;
	____OnFinished2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___OnFinished2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(GameClient_Initialize)(___Instance0, ____OnProgress1_marshaled, ____OnFinished2_marshaled, ___CallbackParameter3);
	#else
	il2cppPInvokeFunc(___Instance0, ____OnProgress1_marshaled, ____OnFinished2_marshaled, ___CallbackParameter3);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void STDCALL GameClient_ConnectionReset(intptr_t);
#endif
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::GameClient_ConnectionReset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_GameClient_ConnectionReset_m31B70B5B7AC43490CC0C18DF37BCDCDBC25A9DFA (intptr_t ___Instance0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("easyanticheat"), "GameClient_ConnectionReset", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(GameClient_ConnectionReset)(___Instance0);
	#else
	il2cppPInvokeFunc(___Instance0);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL GameClient_PopNetworkMessage(intptr_t, intptr_t*, uint32_t*);
#endif
// System.Boolean EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::GameClient_PopNetworkMessage(System.IntPtr,System.IntPtr&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityModule_GameClient_PopNetworkMessage_mA6087D0C08955B0A0BD14C1A90A15F1293AB1502 (intptr_t ___Instance0, intptr_t* ___MessageBuffer1, uint32_t* ___MessageLength2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t, intptr_t*, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("easyanticheat"), "GameClient_PopNetworkMessage", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GameClient_PopNetworkMessage)(___Instance0, ___MessageBuffer1, ___MessageLength2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___Instance0, ___MessageBuffer1, ___MessageLength2);
	#endif

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void STDCALL GameClient_PushNetworkMessage(intptr_t, uint8_t*, uint32_t);
#endif
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::GameClient_PushNetworkMessage(System.IntPtr,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_GameClient_PushNetworkMessage_m359CE60BFB1DEFF42D91D992EC6D38E4CBE3F270 (intptr_t ___Instance0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___MessageBuffer1, uint32_t ___MessageLength2, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc) (intptr_t, uint8_t*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("easyanticheat"), "GameClient_PushNetworkMessage", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___MessageBuffer1' to native representation
	uint8_t* ____MessageBuffer1_marshaled = NULL;
	if (___MessageBuffer1 != NULL)
	{
		____MessageBuffer1_marshaled = reinterpret_cast<uint8_t*>((___MessageBuffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(GameClient_PushNetworkMessage)(___Instance0, ____MessageBuffer1_marshaled, ___MessageLength2);
	#else
	il2cppPInvokeFunc(___Instance0, ____MessageBuffer1_marshaled, ___MessageLength2);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void STDCALL GameClient_PollStatus(intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, intptr_t);
#endif
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::GameClient_PollStatus(System.IntPtr,EasyAntiCheat.Client.Hydra.NativeClient_CallbackIntegrity,EasyAntiCheat.Client.Hydra.NativeClient_CallbackHostValidation,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_GameClient_PollStatus_mAE04787A77298911888E857A86D58E422E39AC75 (intptr_t ___Instance0, CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * ___OnIntegrityViolation1, CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * ___OnHostValidation2, intptr_t ___CallbackParameter3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("easyanticheat"), "GameClient_PollStatus", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___OnIntegrityViolation1' to native representation
	Il2CppMethodPointer ____OnIntegrityViolation1_marshaled = NULL;
	____OnIntegrityViolation1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___OnIntegrityViolation1));

	// Marshaling of parameter '___OnHostValidation2' to native representation
	Il2CppMethodPointer ____OnHostValidation2_marshaled = NULL;
	____OnHostValidation2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___OnHostValidation2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(GameClient_PollStatus)(___Instance0, ____OnIntegrityViolation1_marshaled, ____OnHostValidation2_marshaled, ___CallbackParameter3);
	#else
	il2cppPInvokeFunc(___Instance0, ____OnIntegrityViolation1_marshaled, ____OnHostValidation2_marshaled, ___CallbackParameter3);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL GameClient_NetProtect(intptr_t);
#endif
// System.IntPtr EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::GameClient_NetProtect(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityModule_GameClient_NetProtect_m5C22A6A2A47DE1176689814EE5E8B542DFF0B82C (intptr_t ___Instance0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("easyanticheat"), "GameClient_NetProtect", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GameClient_NetProtect)(___Instance0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___Instance0);
	#endif

	return returnValue;
}
// System.IntPtr EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityModule_Create_mA135EFC8BD19DB2CADE931D571630926CFA0C301 (UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityModule_Create_mA135EFC8BD19DB2CADE931D571630926CFA0C301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_InterfaceVersion_0();
		intptr_t L_1 = UnityModule_CreateGameClient_mFD751B5AB2980EB1463224816E7ABFAADF1162DC(L_0, /*hidden argument*/NULL);
		return (intptr_t)L_1;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_Destroy_mC6A2A4A0C5F2CB755B43177F53136AA754C80DF3 (UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9 * __this, intptr_t ___Instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityModule_Destroy_mC6A2A4A0C5F2CB755B43177F53136AA754C80DF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___Instance0;
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		intptr_t L_2 = ___Instance0;
		UnityModule_GameClient_Destroy_m36D7122FECB1B10AF8E01C29BA4310A3027D2A5D((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::Initialize(System.IntPtr,EasyAntiCheat.Client.Hydra.NativeClient_CallbackProgress,EasyAntiCheat.Client.Hydra.NativeClient_CallbackFinished,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_Initialize_m202451DAB44832C962BAE26DB11DAE822ED2179D (UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9 * __this, intptr_t ___Instance0, CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * ___OnProgress1, CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * ___OnFinished2, intptr_t ___CallbackParameter3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityModule_Initialize_m202451DAB44832C962BAE26DB11DAE822ED2179D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___Instance0;
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_2 = ___Instance0;
		CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * L_3 = ___OnProgress1;
		CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * L_4 = ___OnFinished2;
		intptr_t L_5 = ___CallbackParameter3;
		UnityModule_GameClient_Initialize_mD7ADFA468E58312B206D9A53516D977F69396715((intptr_t)L_2, L_3, L_4, (intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::ConnectionReset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_ConnectionReset_m7D79EEF7DBB6130B5BF81184CB33F1661B19B238 (UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9 * __this, intptr_t ___Instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityModule_ConnectionReset_m7D79EEF7DBB6130B5BF81184CB33F1661B19B238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___Instance0;
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		intptr_t L_2 = ___Instance0;
		UnityModule_GameClient_ConnectionReset_m31B70B5B7AC43490CC0C18DF37BCDCDBC25A9DFA((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::PopNetworkMessage(System.IntPtr,System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityModule_PopNetworkMessage_m89FB50446F796C9FA04EAF01A602257EF4AE5C13 (UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9 * __this, intptr_t ___Instance0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___MessageBuffer1, int32_t* ___MessageLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityModule_PopNetworkMessage_m89FB50446F796C9FA04EAF01A602257EF4AE5C13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	{
		V_0 = 0;
		V_1 = (intptr_t)(0);
		intptr_t L_0 = ___Instance0;
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t* L_2 = ___MessageLength2;
		*((int32_t*)L_2) = (int32_t)0;
		return (bool)0;
	}

IL_001a:
	{
		intptr_t L_3 = ___Instance0;
		bool L_4 = UnityModule_GameClient_PopNetworkMessage_mA6087D0C08955B0A0BD14C1A90A15F1293AB1502((intptr_t)L_3, (intptr_t*)(&V_1), (uint32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t* L_5 = ___MessageLength2;
		uint32_t L_6 = V_0;
		*((int32_t*)L_5) = (int32_t)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_StaticMsgBuf_3();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_StaticMsgBuf_3();
		NullCheck(L_8);
		Array_Clear_m174F4957D6DEDB6359835123005304B14E79132E((RuntimeArray *)(RuntimeArray *)L_7, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))), /*hidden argument*/NULL);
		bool L_9 = L_4;
		G_B3_0 = L_9;
		if (!L_9)
		{
			G_B4_0 = L_9;
			goto IL_004a;
		}
	}
	{
		intptr_t L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_StaticMsgBuf_3();
		int32_t* L_12 = ___MessageLength2;
		int32_t L_13 = *((int32_t*)L_12);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_10, L_11, 0, L_13, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_14 = ___MessageBuffer1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ((NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_StaticFields*)il2cpp_codegen_static_fields_for(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var))->get_StaticMsgBuf_3();
		*((RuntimeObject **)L_14) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_14, (void*)(RuntimeObject *)L_15);
		return G_B4_0;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::PushNetworkMessage(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_PushNetworkMessage_m41DB78C291C88F917CBA12A3D50D65F74BCB2575 (UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9 * __this, intptr_t ___Instance0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Message1, int32_t ___MessageLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityModule_PushNetworkMessage_m41DB78C291C88F917CBA12A3D50D65F74BCB2575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___Instance0;
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		intptr_t L_2 = ___Instance0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___Message1;
		int32_t L_4 = ___MessageLength2;
		UnityModule_GameClient_PushNetworkMessage_m359CE60BFB1DEFF42D91D992EC6D38E4CBE3F270((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::PollStatus(System.IntPtr,EasyAntiCheat.Client.Hydra.NativeClient_CallbackIntegrity,EasyAntiCheat.Client.Hydra.NativeClient_CallbackHostValidation,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule_PollStatus_m0178571C0647380AA0DAF6D2DECB8DDF57F58062 (UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9 * __this, intptr_t ___Instance0, CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * ___OnIntegrityViolation1, CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * ___OnHostValidation2, intptr_t ___CallbackParameter3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityModule_PollStatus_m0178571C0647380AA0DAF6D2DECB8DDF57F58062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___Instance0;
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_2 = ___Instance0;
		CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * L_3 = ___OnIntegrityViolation1;
		CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * L_4 = ___OnHostValidation2;
		intptr_t L_5 = ___CallbackParameter3;
		UnityModule_GameClient_PollStatus_mAE04787A77298911888E857A86D58E422E39AC75((intptr_t)L_2, L_3, L_4, (intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::NetProtect(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityModule_NetProtect_mE037E19021F2E1AD46FF7640FCA4C2AA510BB04E (UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9 * __this, intptr_t ___Instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityModule_NetProtect_mE037E19021F2E1AD46FF7640FCA4C2AA510BB04E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___Instance0;
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		intptr_t L_2 = ___Instance0;
		intptr_t L_3 = UnityModule_GameClient_NetProtect_m5C22A6A2A47DE1176689814EE5E8B542DFF0B82C((intptr_t)L_2, /*hidden argument*/NULL);
		return (intptr_t)L_3;
	}

IL_0014:
	{
		return (intptr_t)(0);
	}
}
// System.Void EasyAntiCheat.Client.Hydra.NativeClient_UnityModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityModule__ctor_m2E477444DAD1BC4E7D7A4F496FBDB327DB958026 (UnityModule_t99892776002803691F58CDF14CBBA4F6A915F2D9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void EasyAntiCheat.Client.Hydra.NativeNetProtect::SetInstance(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeNetProtect_SetInstance_m2E4A418E5EB91016A934429342AE969B6B955CAD (intptr_t ___NetProtectInstance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeNetProtect_SetInstance_m2E4A418E5EB91016A934429342AE969B6B955CAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___NetProtectInstance0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22_il2cpp_TypeInfo_var);
		((NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22_StaticFields*)il2cpp_codegen_static_fields_for(NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22_il2cpp_TypeInfo_var))->set_Instance_0((intptr_t)L_0);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.NativeNetProtect::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeNetProtect__cctor_mB2BE06DB27E0357A05B208BE913BF2FEC7C431EF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeNetProtect__cctor_mB2BE06DB27E0357A05B208BE913BF2FEC7C431EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22_StaticFields*)il2cpp_codegen_static_fields_for(NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22_il2cpp_TypeInfo_var))->set_Instance_0((intptr_t)(0));
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
// System.Void EasyAntiCheat.Client.Hydra.NetProtect.NetProtect::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetProtect__ctor_mA3F5B413BA572E5B9B587B2B941C998E49776332 (NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916 * __this, intptr_t ___Instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetProtect__ctor_mA3F5B413BA572E5B9B587B2B941C998E49776332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___Instance0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22_il2cpp_TypeInfo_var);
		NativeNetProtect_SetInstance_m2E4A418E5EB91016A934429342AE969B6B955CAD_inline((intptr_t)L_0, /*hidden argument*/NULL);
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
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_Runtime_OnInternalProgress_m949550073D812A398A322826D6248E2D79D7E86D(uint32_t ___Progress0, intptr_t ___CallbackParameter1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue = Runtime_OnInternalProgress_m949550073D812A398A322826D6248E2D79D7E86D(___Progress0, ___CallbackParameter1, NULL);

	return returnValue;
}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Runtime_OnInternalEvent_m4FC7A4543FA084ACD0881C1B3C97EDB0CD8AE326(int32_t ___Result0, char* ___Message1, intptr_t ___CallbackParameter2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___Message1' to managed representation
	String_t* ____Message1_unmarshaled = NULL;
	____Message1_unmarshaled = il2cpp_codegen_marshal_string_result(___Message1);

	// Managed method invocation
	Runtime_OnInternalEvent_m4FC7A4543FA084ACD0881C1B3C97EDB0CD8AE326(___Result0, ____Message1_unmarshaled, ___CallbackParameter2, NULL);

}
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_Runtime_OnIntegrityViolation_mE2A096601FE3115468EDA21ADE1538F0A549FAD6(int32_t ___ViolationType0, char* ___ViolationCause1, char* ___DefaultMessage2, intptr_t ___CallbackParameter3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___ViolationCause1' to managed representation
	String_t* ____ViolationCause1_unmarshaled = NULL;
	____ViolationCause1_unmarshaled = il2cpp_codegen_marshal_string_result(___ViolationCause1);

	// Marshaling of parameter '___DefaultMessage2' to managed representation
	String_t* ____DefaultMessage2_unmarshaled = NULL;
	____DefaultMessage2_unmarshaled = il2cpp_codegen_marshal_string_result(___DefaultMessage2);

	// Managed method invocation
	uint32_t returnValue = Runtime_OnIntegrityViolation_mE2A096601FE3115468EDA21ADE1538F0A549FAD6(___ViolationType0, ____ViolationCause1_unmarshaled, ____DefaultMessage2_unmarshaled, ___CallbackParameter3, NULL);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Runtime_OnHostValidation_m66FBBABCE1BA3978CF8FA66116077C5C790E9387(int32_t ___Result0, char* ___Message1, intptr_t ___CallbackParameter2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___Message1' to managed representation
	String_t* ____Message1_unmarshaled = NULL;
	____Message1_unmarshaled = il2cpp_codegen_marshal_string_result(___Message1);

	// Managed method invocation
	bool returnValue = Runtime_OnHostValidation_m66FBBABCE1BA3978CF8FA66116077C5C790E9387(___Result0, ____Message1_unmarshaled, ___CallbackParameter2, NULL);

	return static_cast<int32_t>(returnValue);
}
// System.Boolean EasyAntiCheat.Client.Hydra.Runtime::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Runtime_get_Initialized_mD7C2EBC73DC0130D67BF285D0F3CCDE678E8DF99 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_get_Initialized_mD7C2EBC73DC0130D67BF285D0F3CCDE678E8DF99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		bool L_0 = ((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->get_U3CInitializedU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.Runtime::set_Initialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Runtime_set_Initialized_m3FDE6D1E2ECFEEBA21AA217D70204AF68FEC615B (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_set_Initialized_m3FDE6D1E2ECFEEBA21AA217D70204AF68FEC615B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_U3CInitializedU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.Runtime::set_Integrity(EasyAntiCheat.Client.IntegrityDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Runtime_set_Integrity_m7C4FF8EE04636995F16196E7D1678DA7909EC64A (IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_set_Integrity_m7C4FF8EE04636995F16196E7D1678DA7909EC64A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_U3CIntegrityU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.Runtime::set_HostValidation(EasyAntiCheat.Client.HostValidationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Runtime_set_HostValidation_m818D0EBF39DA7EB4AD4A983EEBCE5B3F172F43F2 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_set_HostValidation_m818D0EBF39DA7EB4AD4A983EEBCE5B3F172F43F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_U3CHostValidationU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.Runtime::Initialize(System.EventHandler`1<EasyAntiCheat.Client.StateChangedEventArgs>,System.EventHandler`1<EasyAntiCheat.Client.LoadCompletedEventArgs>,System.EventHandler`1<EasyAntiCheat.Client.LoadProgressEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Runtime_Initialize_m699F6EC0F2F3EF876D8C0F471383B773E0475EF6 (EventHandler_1_tD5F9F6E3F43558013AB4A4D218A5347CE39C0A31 * ___onStateChanged0, EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * ___onCompleted1, EventHandler_1_tC8329854515E65389BF0F95338C5D896570E2202 * ___onProgress2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_Initialize_m699F6EC0F2F3EF876D8C0F471383B773E0475EF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389 * G_B2_0 = NULL;
	U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389 * G_B1_0 = NULL;
	{
		U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389 * L_0 = (U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass19_0__ctor_mCE3F45446C08B7010A19EBBFD9A919B9C9A8C9C3(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389 * L_1 = L_0;
		EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * L_2 = ___onCompleted1;
		NullCheck(L_1);
		L_1->set_onCompleted_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		bool L_3 = ((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->get_initializeCalled_2();
		G_B1_0 = L_1;
		if (!L_3)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_4 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308(L_4, _stringLiteralAAA3B3A5C3119AB0A35975C81661AE4FA4E4C5A5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, Runtime_Initialize_m699F6EC0F2F3EF876D8C0F471383B773E0475EF6_RuntimeMethod_var);
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_initializeCalled_2((bool)1);
		EventHandler_1_tD5F9F6E3F43558013AB4A4D218A5347CE39C0A31 * L_5 = ___onStateChanged0;
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_onStateChanged_3(L_5);
		EventHandler_1_tC8329854515E65389BF0F95338C5D896570E2202 * L_6 = ___onProgress2;
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_onProgress_5(L_6);
		EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * L_7 = (EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 *)il2cpp_codegen_object_new(EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m05F6D28DB841B29CAEF19EC0DA4E7EE8EDA8D5A6(L_7, G_B2_0, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass19_0_U3CInitializeU3Eb__0_mD9C1F27CFEAAFF5795854D3EA65F6A5688B7B3D8_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m05F6D28DB841B29CAEF19EC0DA4E7EE8EDA8D5A6_RuntimeMethod_var);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_onLoadCompleted_4(L_7);
		CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * L_8 = (CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E *)il2cpp_codegen_object_new(CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E_il2cpp_TypeInfo_var);
		CallbackProgress__ctor_m0685BB8DBC5FB80BB7C27587CFF480DD90D1684D(L_8, NULL, (intptr_t)((intptr_t)Runtime_OnInternalProgress_m949550073D812A398A322826D6248E2D79D7E86D_RuntimeMethod_var), /*hidden argument*/NULL);
		CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * L_9 = (CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD *)il2cpp_codegen_object_new(CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD_il2cpp_TypeInfo_var);
		CallbackFinished__ctor_mADF616E921124E9506F62CB60AD49C6410D93C87(L_9, NULL, (intptr_t)((intptr_t)Runtime_OnInternalEvent_m4FC7A4543FA084ACD0881C1B3C97EDB0CD8AE326_RuntimeMethod_var), /*hidden argument*/NULL);
		CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 * L_10 = (CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89 *)il2cpp_codegen_object_new(CallbackIntegrity_tE759721D92BE12EA642EBF20882504CDAE6BBD89_il2cpp_TypeInfo_var);
		CallbackIntegrity__ctor_m3E3C7B5EF0E0F17A355BD96D15DC4DDB0C40A4BA(L_10, NULL, (intptr_t)((intptr_t)Runtime_OnIntegrityViolation_mE2A096601FE3115468EDA21ADE1538F0A549FAD6_RuntimeMethod_var), /*hidden argument*/NULL);
		CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB * L_11 = (CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB *)il2cpp_codegen_object_new(CallbackHostValidation_t3A6DE3AE55B3C86C1779EF8837E5A7CA2A22FFEB_il2cpp_TypeInfo_var);
		CallbackHostValidation__ctor_mD406CCB4F2C51CBD0EEE01C19B637965050BAD12(L_11, NULL, (intptr_t)((intptr_t)Runtime_OnHostValidation_m66FBBABCE1BA3978CF8FA66116077C5C790E9387_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		NativeClient_Initialize_mFAA18EB3D6E5FC4FB63FEF5FC8BF968B1BBCFA6E(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EasyAntiCheat.Client.Hydra.Runtime::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Runtime_IsActive_m5F94B6E72395F6287636A166E1ECB7C45BAC5022 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_IsActive_m5F94B6E72395F6287636A166E1ECB7C45BAC5022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		bool L_0 = NativeClient_IsStartedWithEasyAntiCheat_m0FD29489D0462D20ED7DA6FB13465CF220D0CB93(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.Runtime::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Runtime_Release_mD6651462078337E0F174B63483B6369BD25A8413 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_Release_mD6651462078337E0F174B63483B6369BD25A8413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916 * L_0 = (NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916 *)il2cpp_codegen_object_new(NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916_il2cpp_TypeInfo_var);
		NetProtect__ctor_mA3F5B413BA572E5B9B587B2B941C998E49776332(L_0, (intptr_t)(0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set__NetProtect_6(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		NativeClient_Dispose_mF138EF8CF4CDE63924CA3AF6EFD64B83975B3F7D(/*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.Runtime::ConnectionReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Runtime_ConnectionReset_m6CA978D0FB48EE7971E2984C9D8FA87AA9AD7F9C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_ConnectionReset_m6CA978D0FB48EE7971E2984C9D8FA87AA9AD7F9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		NativeClient_ConnectionReset_m3FD5D284D5BD809E507952495338B2426E7EDADE(/*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EasyAntiCheat.Client.Hydra.Runtime::PopNetworkMessage(System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Runtime_PopNetworkMessage_mB5461433DCF3BBC3B395BE99D35812EEC2A19BC1 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___MessageBuffer0, int32_t* ___MessageLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_PopNetworkMessage_mB5461433DCF3BBC3B395BE99D35812EEC2A19BC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_0 = ___MessageBuffer0;
		int32_t* L_1 = ___MessageLength1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		bool L_2 = NativeClient_PopNetworkMessage_m70FBDA184324FFFB255F835AF8B75336BA1A53A3((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.Runtime::PushNetworkMessage(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Runtime_PushNetworkMessage_mC98500012F89F66E1EED8DFD4E77D33A2B267536 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___MessageBuffer0, int32_t ___MessageLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_PushNetworkMessage_mC98500012F89F66E1EED8DFD4E77D33A2B267536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___MessageBuffer0;
		int32_t L_1 = ___MessageLength1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		NativeClient_PushNetworkMessage_mF80567D34805538727C90845B0F848385721C16E(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.Runtime::PollStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Runtime_PollStatus_mF9D8EC0C011471E40DBC34F0F62DF9276D767794 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_PollStatus_mF9D8EC0C011471E40DBC34F0F62DF9276D767794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		NativeClient_PollStatus_mA569FB6843F744CB73CE0DFFFC0B1D63B0BEEF2D(/*hidden argument*/NULL);
		return;
	}
}
// System.UInt32 EasyAntiCheat.Client.Hydra.Runtime::OnInternalProgress(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Runtime_OnInternalProgress_m949550073D812A398A322826D6248E2D79D7E86D (uint32_t ___Progress0, intptr_t ___CallbackParameter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_OnInternalProgress_m949550073D812A398A322826D6248E2D79D7E86D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		uint32_t L_0 = ___Progress0;
		uint32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral48B166B41B6B0800CBDBF1C5B5021F5159A3C151, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		EventHandler_1_tC8329854515E65389BF0F95338C5D896570E2202 * L_4 = ((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->get_onProgress_5();
		String_t* L_5 = V_0;
		uint32_t L_6 = ___Progress0;
		LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D * L_7 = (LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D *)il2cpp_codegen_object_new(LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D_il2cpp_TypeInfo_var);
		LoadProgressEventArgs__ctor_m38229B8E1A2146D01CFBC3A9FC79F849F0C0EC74(L_7, L_5, L_6, /*hidden argument*/NULL);
		EventHandlerExtensions_Raise_TisLoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D_m195525CB11530B497B87C3A8B8D8C2C49ABEF12B(L_4, NULL, L_7, /*hidden argument*/EventHandlerExtensions_Raise_TisLoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D_m195525CB11530B497B87C3A8B8D8C2C49ABEF12B_RuntimeMethod_var);
		return 0;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.Runtime::OnInternalEvent(EasyAntiCheat.Client.LoadResult,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Runtime_OnInternalEvent_m4FC7A4543FA084ACD0881C1B3C97EDB0CD8AE326 (int32_t ___Result0, String_t* ___Message1, intptr_t ___CallbackParameter2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_OnInternalEvent_m4FC7A4543FA084ACD0881C1B3C97EDB0CD8AE326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = ___Result0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(LoadResult_t50135A2413C7A087C2CE202EA4A50615F328C74B_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		String_t* L_6 = ___Message1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105_il2cpp_TypeInfo_var);
		Debug_WriteLine_mD1081EBB51DC61F236E41525BF05215F5E6C3FCF(_stringLiteral615E24B4442F56EA947633EEF17C5DBA0B3F065D, L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___Result0;
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_8 = ___Result0;
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_9 = ___Result0;
		if ((!(((uint32_t)L_9) == ((uint32_t)7))))
		{
			goto IL_003a;
		}
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * L_10 = ((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->get_onLoadCompleted_4();
		int32_t L_11 = ___Result0;
		String_t* L_12 = ___Message1;
		LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * L_13 = (LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF *)il2cpp_codegen_object_new(LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF_il2cpp_TypeInfo_var);
		LoadCompletedEventArgs__ctor_m1DDBCEDC5429948068D218317BDA889094A9DEA2(L_13, L_11, L_12, /*hidden argument*/NULL);
		EventHandlerExtensions_Raise_TisLoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF_m4B86C0202C1E3513F939F103C36AAB741E773F4D(L_10, NULL, L_13, /*hidden argument*/EventHandlerExtensions_Raise_TisLoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF_m4B86C0202C1E3513F939F103C36AAB741E773F4D_RuntimeMethod_var);
	}

IL_003a:
	{
		return;
	}
}
// System.UInt32 EasyAntiCheat.Client.Hydra.Runtime::OnIntegrityViolation(EasyAntiCheat.Client.ClientIntegrityViolationType,System.String,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Runtime_OnIntegrityViolation_mE2A096601FE3115468EDA21ADE1538F0A549FAD6 (int32_t ___ViolationType0, String_t* ___ViolationCause1, String_t* ___DefaultMessage2, intptr_t ___CallbackParameter3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_OnIntegrityViolation_mE2A096601FE3115468EDA21ADE1538F0A549FAD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = ___ViolationType0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(ClientIntegrityViolationType_t634D181D073815BAF124692111467B6928862E9A_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		String_t* L_6 = ___DefaultMessage2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105_il2cpp_TypeInfo_var);
		Debug_WriteLine_mD1081EBB51DC61F236E41525BF05215F5E6C3FCF(_stringLiteral615E24B4442F56EA947633EEF17C5DBA0B3F065D, L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___DefaultMessage2;
		IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1  L_8;
		memset((&L_8), 0, sizeof(L_8));
		IntegrityDescriptor__ctor_m3C79D1E7051B3035D33B43F26E704866F189ABA8((&L_8), (bool)1, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		Runtime_set_Integrity_m7C4FF8EE04636995F16196E7D1678DA7909EC64A_inline(L_8, /*hidden argument*/NULL);
		EventHandler_1_tD5F9F6E3F43558013AB4A4D218A5347CE39C0A31 * L_9 = ((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->get_onStateChanged_3();
		String_t* L_10 = ___DefaultMessage2;
		StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * L_11 = (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 *)il2cpp_codegen_object_new(StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45_il2cpp_TypeInfo_var);
		StateChangedEventArgs__ctor_mF506907B1CF97D10BEB107EDC06F267854865CEE(L_11, 1, L_10, /*hidden argument*/NULL);
		EventHandlerExtensions_Raise_TisStateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45_mAB6BABE1CBE0240495F98BA75AB3829BFA3749BD(L_9, NULL, L_11, /*hidden argument*/EventHandlerExtensions_Raise_TisStateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45_mAB6BABE1CBE0240495F98BA75AB3829BFA3749BD_RuntimeMethod_var);
		return 1;
	}
}
// System.Boolean EasyAntiCheat.Client.Hydra.Runtime::OnHostValidation(EasyAntiCheat.Client.HostValidationResult,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Runtime_OnHostValidation_m66FBBABCE1BA3978CF8FA66116077C5C790E9387 (int32_t ___Result0, String_t* ___Message1, intptr_t ___CallbackParameter2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_OnHostValidation_m66FBBABCE1BA3978CF8FA66116077C5C790E9387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = ___Result0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(HostValidationResult_tBEC35F8EE3673FF6270EBCE5FD90097245FC9BF7_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		String_t* L_6 = ___Message1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t29064D21EC50A5FAA624645E7BA21D6EF4D53105_il2cpp_TypeInfo_var);
		Debug_WriteLine_mD1081EBB51DC61F236E41525BF05215F5E6C3FCF(_stringLiteral615E24B4442F56EA947633EEF17C5DBA0B3F065D, L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___Result0;
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		Runtime_set_HostValidation_m818D0EBF39DA7EB4AD4A983EEBCE5B3F172F43F2_inline(L_7, /*hidden argument*/NULL);
		EventHandler_1_tD5F9F6E3F43558013AB4A4D218A5347CE39C0A31 * L_8 = ((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->get_onStateChanged_3();
		String_t* L_9 = ___Message1;
		StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * L_10 = (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 *)il2cpp_codegen_object_new(StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45_il2cpp_TypeInfo_var);
		StateChangedEventArgs__ctor_mF506907B1CF97D10BEB107EDC06F267854865CEE(L_10, 2, L_9, /*hidden argument*/NULL);
		EventHandlerExtensions_Raise_TisStateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45_mAB6BABE1CBE0240495F98BA75AB3829BFA3749BD(L_8, NULL, L_10, /*hidden argument*/EventHandlerExtensions_Raise_TisStateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45_mAB6BABE1CBE0240495F98BA75AB3829BFA3749BD_RuntimeMethod_var);
		return (bool)1;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.Runtime::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Runtime__cctor_m7D529D90754D7B557DEF17CD02C3768A62B0DD61 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime__cctor_m7D529D90754D7B557DEF17CD02C3768A62B0DD61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E * L_0 = (CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E *)il2cpp_codegen_object_new(CallbackProgress_t10A6C11902FE524D75B07684CB50F66E94C4674E_il2cpp_TypeInfo_var);
		CallbackProgress__ctor_m0685BB8DBC5FB80BB7C27587CFF480DD90D1684D(L_0, NULL, (intptr_t)((intptr_t)Runtime_OnInternalProgress_m949550073D812A398A322826D6248E2D79D7E86D_RuntimeMethod_var), /*hidden argument*/NULL);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_nogc_AntiCheatProgress_0(L_0);
		CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD * L_1 = (CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD *)il2cpp_codegen_object_new(CallbackFinished_t7213E472CC0EA95CE618F9A34BA196D5CA26ECFD_il2cpp_TypeInfo_var);
		CallbackFinished__ctor_mADF616E921124E9506F62CB60AD49C6410D93C87(L_1, NULL, (intptr_t)((intptr_t)Runtime_OnInternalEvent_m4FC7A4543FA084ACD0881C1B3C97EDB0CD8AE326_RuntimeMethod_var), /*hidden argument*/NULL);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_nogc_AntiCheatEvent_1(L_1);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_initializeCalled_2((bool)0);
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
// System.Void EasyAntiCheat.Client.Hydra.Runtime_<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mCE3F45446C08B7010A19EBBFD9A919B9C9A8C9C3 (U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAntiCheat.Client.Hydra.Runtime_<>c__DisplayClass19_0::<Initialize>b__0(System.Object,EasyAntiCheat.Client.LoadCompletedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CInitializeU3Eb__0_mD9C1F27CFEAAFF5795854D3EA65F6A5688B7B3D8 (U3CU3Ec__DisplayClass19_0_t125E28710AB5FFF3694715F85B3F1E97C4734389 * __this, RuntimeObject * ___s0, LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass19_0_U3CInitializeU3Eb__0_mD9C1F27CFEAAFF5795854D3EA65F6A5688B7B3D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * L_0 = ___args1;
		NullCheck(L_0);
		int32_t L_1 = LoadCompletedEventArgs_get_Status_m28AD24F5988452E110ACED1B2A29FA42D072A16C_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		Runtime_set_Initialized_m3FDE6D1E2ECFEEBA21AA217D70204AF68FEC615B_inline((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * L_2 = ___args1;
		NullCheck(L_2);
		int32_t L_3 = LoadCompletedEventArgs_get_Status_m28AD24F5988452E110ACED1B2A29FA42D072A16C_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeClient_t41ADE43131225394960A5A6C19D29860C22089BA_il2cpp_TypeInfo_var);
		intptr_t L_4 = NativeClient_NetProtect_mBE4424368534E1646E6A3985549AEB72D4CFFEAD(/*hidden argument*/NULL);
		NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916 * L_5 = (NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916 *)il2cpp_codegen_object_new(NetProtect_t105035E2E33FD60AE8085F0A061EED2C07260916_il2cpp_TypeInfo_var);
		NetProtect__ctor_mA3F5B413BA572E5B9B587B2B941C998E49776332(L_5, (intptr_t)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set__NetProtect_6(L_5);
	}

IL_0025:
	{
		EventHandler_1_tC6475F028604537E15EDDC499A753FF5E346B7A2 * L_6 = __this->get_onCompleted_0();
		LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * L_7 = ___args1;
		EventHandlerExtensions_Raise_TisLoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF_m4B86C0202C1E3513F939F103C36AAB741E773F4D(L_6, NULL, L_7, /*hidden argument*/EventHandlerExtensions_Raise_TisLoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF_m4B86C0202C1E3513F939F103C36AAB741E773F4D_RuntimeMethod_var);
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
// Conversion methods for marshalling of: EasyAntiCheat.Client.IntegrityDescriptor
IL2CPP_EXTERN_C void IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshal_pinvoke(const IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1& unmarshaled, IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CViolatedU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.get_U3CViolatedU3Ek__BackingField_0());
	marshaled.___U3CViolationMessageU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CViolationMessageU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshal_pinvoke_back(const IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshaled_pinvoke& marshaled, IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1& unmarshaled)
{
	bool unmarshaled_U3CViolatedU3Ek__BackingField_temp_0 = false;
	unmarshaled_U3CViolatedU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CViolatedU3Ek__BackingField_0);
	unmarshaled.set_U3CViolatedU3Ek__BackingField_0(unmarshaled_U3CViolatedU3Ek__BackingField_temp_0);
	unmarshaled.set_U3CViolationMessageU3Ek__BackingField_1(il2cpp_codegen_marshal_string_result(marshaled.___U3CViolationMessageU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: EasyAntiCheat.Client.IntegrityDescriptor
IL2CPP_EXTERN_C void IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshal_pinvoke_cleanup(IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CViolationMessageU3Ek__BackingField_1);
	marshaled.___U3CViolationMessageU3Ek__BackingField_1 = NULL;
}
// Conversion methods for marshalling of: EasyAntiCheat.Client.IntegrityDescriptor
IL2CPP_EXTERN_C void IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshal_com(const IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1& unmarshaled, IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshaled_com& marshaled)
{
	marshaled.___U3CViolatedU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.get_U3CViolatedU3Ek__BackingField_0());
	marshaled.___U3CViolationMessageU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CViolationMessageU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshal_com_back(const IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshaled_com& marshaled, IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1& unmarshaled)
{
	bool unmarshaled_U3CViolatedU3Ek__BackingField_temp_0 = false;
	unmarshaled_U3CViolatedU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CViolatedU3Ek__BackingField_0);
	unmarshaled.set_U3CViolatedU3Ek__BackingField_0(unmarshaled_U3CViolatedU3Ek__BackingField_temp_0);
	unmarshaled.set_U3CViolationMessageU3Ek__BackingField_1(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CViolationMessageU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: EasyAntiCheat.Client.IntegrityDescriptor
IL2CPP_EXTERN_C void IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshal_com_cleanup(IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CViolationMessageU3Ek__BackingField_1);
	marshaled.___U3CViolationMessageU3Ek__BackingField_1 = NULL;
}
// System.Void EasyAntiCheat.Client.IntegrityDescriptor::.ctor(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegrityDescriptor__ctor_m3C79D1E7051B3035D33B43F26E704866F189ABA8 (IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 * __this, bool ___violated0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 ));
		bool L_0 = ___violated0;
		IntegrityDescriptor_set_Violated_m007BE84023A3F8C732975EA325173860CE93DAB6_inline((IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 *)__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		IntegrityDescriptor_set_ViolationMessage_m20455ABBE4EC82E1EA701348DF61BB33551DE00E_inline((IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void IntegrityDescriptor__ctor_m3C79D1E7051B3035D33B43F26E704866F189ABA8_AdjustorThunk (RuntimeObject * __this, bool ___violated0, String_t* ___message1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 * _thisAdjusted = reinterpret_cast<IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 *>(__this + _offset);
	IntegrityDescriptor__ctor_m3C79D1E7051B3035D33B43F26E704866F189ABA8(_thisAdjusted, ___violated0, ___message1, method);
}
// System.Void EasyAntiCheat.Client.IntegrityDescriptor::set_Violated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegrityDescriptor_set_Violated_m007BE84023A3F8C732975EA325173860CE93DAB6 (IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CViolatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void IntegrityDescriptor_set_Violated_m007BE84023A3F8C732975EA325173860CE93DAB6_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 * _thisAdjusted = reinterpret_cast<IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 *>(__this + _offset);
	IntegrityDescriptor_set_Violated_m007BE84023A3F8C732975EA325173860CE93DAB6_inline(_thisAdjusted, ___value0, method);
}
// System.Void EasyAntiCheat.Client.IntegrityDescriptor::set_ViolationMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegrityDescriptor_set_ViolationMessage_m20455ABBE4EC82E1EA701348DF61BB33551DE00E (IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CViolationMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void IntegrityDescriptor_set_ViolationMessage_m20455ABBE4EC82E1EA701348DF61BB33551DE00E_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 * _thisAdjusted = reinterpret_cast<IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 *>(__this + _offset);
	IntegrityDescriptor_set_ViolationMessage_m20455ABBE4EC82E1EA701348DF61BB33551DE00E_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAntiCheat.Client.LoadCompletedEventArgs::.ctor(EasyAntiCheat.Client.LoadResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCompletedEventArgs__ctor_m1DDBCEDC5429948068D218317BDA889094A9DEA2 (LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * __this, int32_t ___Result0, String_t* ___Message1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___Message1;
		LoadEventArgs__ctor_m4FFBE12D6476D2C967FBEEC043DFAAA7A4B28B08(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___Result0;
		LoadCompletedEventArgs_set_Status_m006A9DB803CF7C4C28B473D1A0AA69DFAFDB9E6F_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// EasyAntiCheat.Client.LoadResult EasyAntiCheat.Client.LoadCompletedEventArgs::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadCompletedEventArgs_get_Status_m28AD24F5988452E110ACED1B2A29FA42D072A16C (LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void EasyAntiCheat.Client.LoadCompletedEventArgs::set_Status(EasyAntiCheat.Client.LoadResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCompletedEventArgs_set_Status_m006A9DB803CF7C4C28B473D1A0AA69DFAFDB9E6F (LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStatusU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String EasyAntiCheat.Client.LoadCompletedEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadCompletedEventArgs_ToString_mD8A743051BE5826B8575C7FB6AB400DF8E650D14 (LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoadCompletedEventArgs_ToString_mD8A743051BE5826B8575C7FB6AB400DF8E650D14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = LoadCompletedEventArgs_get_Status_m28AD24F5988452E110ACED1B2A29FA42D072A16C_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(LoadResult_t50135A2413C7A087C2CE202EA4A50615F328C74B_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = LoadEventArgs_get_Message_mB7AD70A864B42515F68FD2EE0D8CC4D9B0B82E63_inline(__this, /*hidden argument*/NULL);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral615E24B4442F56EA947633EEF17C5DBA0B3F065D, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void EasyAntiCheat.Client.LoadEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadEventArgs__ctor_m4FFBE12D6476D2C967FBEEC043DFAAA7A4B28B08 (LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoadEventArgs__ctor_m4FFBE12D6476D2C967FBEEC043DFAAA7A4B28B08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___message0;
		LoadEventArgs_set_Message_m311B1287DFFA159B48DE2908FFE5DD6BEEC23E30_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String EasyAntiCheat.Client.LoadEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadEventArgs_get_Message_mB7AD70A864B42515F68FD2EE0D8CC4D9B0B82E63 (LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void EasyAntiCheat.Client.LoadEventArgs::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadEventArgs_set_Message_m311B1287DFFA159B48DE2908FFE5DD6BEEC23E30 (LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String EasyAntiCheat.Client.LoadEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadEventArgs_ToString_m1A9CB1D3D22E6BB86991A196420D89CC99A25761 (LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = LoadEventArgs_get_Message_mB7AD70A864B42515F68FD2EE0D8CC4D9B0B82E63_inline(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void EasyAntiCheat.Client.LoadProgressEventArgs::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadProgressEventArgs__ctor_m38229B8E1A2146D01CFBC3A9FC79F849F0C0EC74 (LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D * __this, String_t* ___message0, int32_t ___progress1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		LoadEventArgs__ctor_m4FFBE12D6476D2C967FBEEC043DFAAA7A4B28B08(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___progress1;
		LoadProgressEventArgs_set_Progress_m6F0C2E83F29AC9F916FA256970ABD1EBC9E1F927_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAntiCheat.Client.LoadProgressEventArgs::set_Progress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadProgressEventArgs_set_Progress_m6F0C2E83F29AC9F916FA256970ABD1EBC9E1F927 (LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CProgressU3Ek__BackingField_2(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAntiCheat.Client.StateChangedEventArgs::.ctor(EasyAntiCheat.Client.StateChangeType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedEventArgs__ctor_mF506907B1CF97D10BEB107EDC06F267854865CEE (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, int32_t ___stateChangeType0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StateChangedEventArgs__ctor_mF506907B1CF97D10BEB107EDC06F267854865CEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___stateChangeType0;
		StateChangedEventArgs_set_Type_m453586707566B1B98E9846BA922DEB8EA01AD6CA_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		StateChangedEventArgs_set_Message_m8A81B050B92D84B41A3B39D63A66820DC096E586_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String EasyAntiCheat.Client.StateChangedEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StateChangedEventArgs_get_Message_mB16A9E69196436E40533446EF7D93A368BA009E8 (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void EasyAntiCheat.Client.StateChangedEventArgs::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedEventArgs_set_Message_m8A81B050B92D84B41A3B39D63A66820DC096E586 (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
// EasyAntiCheat.Client.StateChangeType EasyAntiCheat.Client.StateChangedEventArgs::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateChangedEventArgs_get_Type_m41C3AFD35FCBCE5D59D365693DA3F9E7C57F5A30 (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void EasyAntiCheat.Client.StateChangedEventArgs::set_Type(EasyAntiCheat.Client.StateChangeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedEventArgs_set_Type_m453586707566B1B98E9846BA922DEB8EA01AD6CA (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String EasyAntiCheat.Client.StateChangedEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StateChangedEventArgs_ToString_m8BCB5E63420908AF1B820D776A0366F552830DE2 (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = StateChangedEventArgs_get_Message_mB16A9E69196436E40533446EF7D93A368BA009E8_inline(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void EasyAntiCheat.MonoPInvokeCallbackAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m9EC11164968F57AFD53CB313196B97CFE33FAD91 (MonoPInvokeCallbackAttribute_tB862CD8A4424E1C882DD67CA464FB1AFC2641E7F * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NativeNetProtect_SetInstance_m2E4A418E5EB91016A934429342AE969B6B955CAD_inline (intptr_t ___NetProtectInstance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeNetProtect_SetInstance_m2E4A418E5EB91016A934429342AE969B6B955CADEasyAntiCheat_Client_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___NetProtectInstance0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22_il2cpp_TypeInfo_var);
		((NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22_StaticFields*)il2cpp_codegen_static_fields_for(NativeNetProtect_t5F6F95AA1275A76B8F522E1A53080C6F8145FB22_il2cpp_TypeInfo_var))->set_Instance_0((intptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Runtime_set_Integrity_m7C4FF8EE04636995F16196E7D1678DA7909EC64A_inline (IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_set_Integrity_m7C4FF8EE04636995F16196E7D1678DA7909EC64AEasyAntiCheat_Client_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_U3CIntegrityU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Runtime_set_HostValidation_m818D0EBF39DA7EB4AD4A983EEBCE5B3F172F43F2_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_set_HostValidation_m818D0EBF39DA7EB4AD4A983EEBCE5B3F172F43F2EasyAntiCheat_Client_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_U3CHostValidationU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t LoadCompletedEventArgs_get_Status_m28AD24F5988452E110ACED1B2A29FA42D072A16C_inline (LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Runtime_set_Initialized_m3FDE6D1E2ECFEEBA21AA217D70204AF68FEC615B_inline (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runtime_set_Initialized_m3FDE6D1E2ECFEEBA21AA217D70204AF68FEC615BEasyAntiCheat_Client_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var);
		((Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_StaticFields*)il2cpp_codegen_static_fields_for(Runtime_tD1EB635D3C319E0608DA7A324AA6C9CE95218D72_il2cpp_TypeInfo_var))->set_U3CInitializedU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void IntegrityDescriptor_set_Violated_m007BE84023A3F8C732975EA325173860CE93DAB6_inline (IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CViolatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void IntegrityDescriptor_set_ViolationMessage_m20455ABBE4EC82E1EA701348DF61BB33551DE00E_inline (IntegrityDescriptor_t8A268E5EA73411C532EBDF4BF20E4767C46BC9F1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CViolationMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void LoadCompletedEventArgs_set_Status_m006A9DB803CF7C4C28B473D1A0AA69DFAFDB9E6F_inline (LoadCompletedEventArgs_tFF68CF3AD77456CC8E878AB5B8CB917F5A08DAEF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStatusU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadEventArgs_get_Message_mB7AD70A864B42515F68FD2EE0D8CC4D9B0B82E63_inline (LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void LoadEventArgs_set_Message_m311B1287DFFA159B48DE2908FFE5DD6BEEC23E30_inline (LoadEventArgs_tB19EBC444AC39A3783FAF0A6CA3B5AA9BABA8C83 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void LoadProgressEventArgs_set_Progress_m6F0C2E83F29AC9F916FA256970ABD1EBC9E1F927_inline (LoadProgressEventArgs_t8DDFB05AD2A3DAECCDCE843A11AA7C648EF09F6D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CProgressU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StateChangedEventArgs_set_Type_m453586707566B1B98E9846BA922DEB8EA01AD6CA_inline (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StateChangedEventArgs_set_Message_m8A81B050B92D84B41A3B39D63A66820DC096E586_inline (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* StateChangedEventArgs_get_Message_mB16A9E69196436E40533446EF7D93A368BA009E8_inline (StateChangedEventArgs_tABF072479DF3AD2DE3668DFECA0C93C0CBD29B45 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
