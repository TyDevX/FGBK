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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Mediatonic.Tools.ParsingUtils.CMSCachedReference
struct CMSCachedReference_tACCE4D02DD5CACE789BB0F58B6C2162C65BD32CA;
// Mediatonic.Tools.ParsingUtils.CMSCachedReferenceArray
struct CMSCachedReferenceArray_t5A71CFAE9C52C5C3F21C678F00729DA4A7A66845;
// Mediatonic.Tools.ParsingUtils.CMSCollectionField
struct CMSCollectionField_tB9038CB96BD9E9F074F7332DA7B90BB9A9134E3E;
// Mediatonic.Tools.ParsingUtils.CMSDataCollection
struct CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3;
// Mediatonic.Tools.ParsingUtils.CMSDataGroup
struct CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1;
// Mediatonic.Tools.ParsingUtils.CMSDefault
struct CMSDefault_tE0A71FF751743D8B88ACB5C535C976026180635F;
// Mediatonic.Tools.ParsingUtils.CMSField
struct CMSField_t2FFE7CCFBA785CFDAFEB33FD83B94C165ECCD199;
// Mediatonic.Tools.ParsingUtils.CMSGroup
struct CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977;
// Mediatonic.Tools.ParsingUtils.CMSIndexedDictionary
struct CMSIndexedDictionary_tF96EF00EB0059A2E6AB0518DAA3718D5206B879C;
// Mediatonic.Tools.ParsingUtils.CMSParseFunction
struct CMSParseFunction_t3973CCCD9D265C6D9B29FA5BE4085825C36757C1;
// Mediatonic.Tools.ParsingUtils.CMSReference
struct CMSReference_t13C5CF2C4B36AC9A0333D1D4E05250893B5A3494;
// Mediatonic.Tools.ParsingUtils.CMSReferenceCache
struct CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B;
// Mediatonic.Tools.ParsingUtils.CMSValidationEntry[]
struct CMSValidationEntryU5BU5D_t402DED69706B0B25116EB14919186CF1B3B0C3C1;
// Mediatonic.Tools.ParsingUtils.CMSValidationResult
struct CMSValidationResult_t37C02D44AFD12321DA85D8B13DFBD0EA5777C788;
// Mediatonic.Tools.ParsingUtils.IAsserts
struct IAsserts_t8554830C6D2280109415D6700C724353A8DE68FD;
// Mediatonic.Tools.ParsingUtils.ILogger
struct ILogger_tB04B245B7CFE8BBC9E1526F73B16AADEF30563B9;
// Mediatonic.Tools.ParsingUtils.MixedDataType
struct MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C;
// Mediatonic.Tools.ParsingUtils.ParsingUtils/PauseApplicationDelegate
struct PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD;
// Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsAssert
struct Unity3dParsingUtilsAssert_tDF658AEDF2DF97412D3D3326048E1A2A9B6DBAE2;
// Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsLogger
struct Unity3dParsingUtilsLogger_tE07FF6F7770935AF14DB59F33F5234F459185F6A;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.List`1<Mediatonic.Tools.ParsingUtils.CMSCachedReference>>[]
struct EntryU5BU5D_tA29707A7199ABA979B223CEF5CFBF2533043FE14;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.List`1<Mediatonic.Tools.ParsingUtils.CMSCachedReference>>
struct KeyCollection_t501A2F9C5FFBDC1938E307FC336653C1343A416D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.List`1<Mediatonic.Tools.ParsingUtils.CMSCachedReference>>
struct ValueCollection_t4785055B1049386E3605BB7E39CEC6A7C297CD5C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Mediatonic.Tools.ParsingUtils.CMSCachedReference>>
struct Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t9B9CB136E3BB6C7C95E42EC9BC17D9F781AFAD23;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.List`1<Mediatonic.Tools.ParsingUtils.CMSValidationEntry>
struct List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Reflection.FieldInfo>
struct List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
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
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsserts_t8554830C6D2280109415D6700C724353A8DE68FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tB04B245B7CFE8BBC9E1526F73B16AADEF30563B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral114DA77D324E01066E1AD08B44BCB890E01C350D;
IL2CPP_EXTERN_C String_t* _stringLiteral347EF7E1F4544544FC4F8A84DE9E20177F5294FC;
IL2CPP_EXTERN_C String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
IL2CPP_EXTERN_C String_t* _stringLiteral53A0ACFAD59379B3E050338BF9F23CFC172EE787;
IL2CPP_EXTERN_C String_t* _stringLiteral5EBFB8FDC3CA52030A98BC331BDB942030AFCD5C;
IL2CPP_EXTERN_C String_t* _stringLiteral63D56719EE521BF6BEEA5DA0B91AD1FF3BD1FEF8;
IL2CPP_EXTERN_C String_t* _stringLiteral85C5602911FB543F4D3BE79EF22F1F3A6D863E40;
IL2CPP_EXTERN_C String_t* _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547;
IL2CPP_EXTERN_C String_t* _stringLiteral8CD0FE2A7130C13942FD423EC4042B7EBD9D18B6;
IL2CPP_EXTERN_C String_t* _stringLiteral9379604B6A6C960E91B62D7AF4A51545E42F9BE7;
IL2CPP_EXTERN_C String_t* _stringLiteralB7E45A36FF3610E06A3801FD14FA6C1E6B89312F;
IL2CPP_EXTERN_C String_t* _stringLiteralD1F4DA1AA45851629A289946FA5946BD311900F2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE419CFB3F6C28D9777A7C4E6D730B4BD8856BE1A;
IL2CPP_EXTERN_C String_t* _stringLiteralEF18543D0183CCD4064EBF22C74A64A775403C90;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE20EECF01EEE9A1020A5C60AC93E5DF6BA3F4331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8A35CF2FC42DB1C9E906EDD3C182929EC7BB2215_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7AF446110E4C3A19ECF5CECDDD9504376318881F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC0F9187C44B0FDC5FC1F3DD48F6BFEA0BFACE68D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mD07425BBACDADAC32A4B42FDE00C5DAAEC59880D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAsserts_IsNotNull_TisDictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_mEBF72FF6EDAFF77341822F8B723F774AC9932241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m30981C1920D25249C9A970AE2B382842D8F21078_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF7FFDF2DCADE3D4A27EDA2810572F7710DD1347C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m947A6734F882B4670D90F258AB44BB349271BCAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB81EEE384AE5720F0732F47132AE29791D873838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parsing_ParseDictionaries_m7CC0720674E0A8D5A1791238743EDC95DFB65ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_t99E4B52AC24AAFFAD2210FF8D8301BD9DBCAD398_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Parsing_t56FF824D95BA6FCD5FBBB5D9D672D5DC78C6B804_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t CMSReferenceCache__ctor_m9984A71CCC357E35DA1F6F7D710F9DF43FCB7566_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CMSValidationResult__ctor_mF2FC1FC5465935CD55A3E367AE15F7BAA30C5BE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingExtensions_GetCmsReferenceId_mE5A0EB6FC4A4F45C819170A0D6F9793EDED02EE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_Init_mE668038B08A706C7F778C0D69662F3A9C8CC7D56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_get_Assert_mC4DE7A7E217F402C4FF5ED6C0775CC4544B2A91CParsingUtils_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_get_Assert_mC4DE7A7E217F402C4FF5ED6C0775CC4544B2A91C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_get_IsInitialised_mD3FA9F0CED462A9D29418F2742A52DB769D9D75AParsingUtils_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_get_IsInitialised_mD3FA9F0CED462A9D29418F2742A52DB769D9D75A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_get_Logger_m2171ACBF8F93020B7E53AFB40915523D78E65377ParsingUtils_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_get_Logger_m2171ACBF8F93020B7E53AFB40915523D78E65377_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_set_Assert_m68FE24D5EE0BEE45094CF88B1AA2D248E6FA4BF3ParsingUtils_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_set_Assert_m68FE24D5EE0BEE45094CF88B1AA2D248E6FA4BF3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_set_IsInitialised_m4443087785B4B806353B65DDCCDDB2D573A67BEAParsingUtils_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_set_IsInitialised_m4443087785B4B806353B65DDCCDDB2D573A67BEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_set_Logger_mB97D826AAD42F55F43F57B22000C5AC45BA09848ParsingUtils_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_set_Logger_mB97D826AAD42F55F43F57B22000C5AC45BA09848_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_set_PauseDelegate_m3BE2D414EB50C3EC15266731ADEF8430C0504025ParsingUtils_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingUtils_set_PauseDelegate_m3BE2D414EB50C3EC15266731ADEF8430C0504025_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_CrossReferenceAll_mF50A104F10EF7ABA681073765C01FA0F9D4A9685_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseArrayNonGeneric_m1B48E8CA51F3F84C3B1FEAFBBDDEFFD15370352F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseBool_m1927B72F161E53A16217D733621E094EB0649268_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseByType_m439FB24ACC2AEA51AD41ADD3BFFA299C2BF7DAC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseDateTime_mF0A6B2DA87542CC0C0CDB6EFDAC6714729C0491B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseDictionaries_m7CC0720674E0A8D5A1791238743EDC95DFB65ABE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseEnum_mB8D25E878DEE05DF41F84C449B6DCB448E9922F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseFloat_m9F4404F925895CBD1CCCFA69777DC67022B5D3C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseInt_m54B8A8DC9EA377DEDE3D297629EA8F5B9129D03F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseLong_m09AE5CF5D1B7ADDBEADFC92939F62EB9F7587481_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseMixedDataType_mF01A14943670A152FE71A474041DD21137FC4FA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseStringArray_mF574522B0EF69EEC37144E284E2B35401715F8AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseStringHashSet_mF990552D47A4C500A8EBC0030AFC46E4F9C3C0CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseString_m16D5BB24DD504D35CA9CF33FD05F935DBA9BB3D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ParseUint_m736DCB798D013CE4D933BAD8B93CFCAB61E606F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parsing_ValidateDataDictionaries_m9D8CB10E7AE82336EBE15026FC75BF3D6BADAD3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Unity3dParsingUtilsLogger_ErrorFormat_mBAE283E2221F3E1F6B2D0B1B330F4E5FBC684F88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Unity3dParsingUtilsLogger_Warning_m1BC45E41C11E519312F8CBD0BACB0DAC232B94E0_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE;
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tC5932D0602A1A4508F178335F7DB707273F69029 
{
public:

public:
};


// System.Object


// Mediatonic.Tools.ParsingUtils.CMSCachedReference
struct  CMSCachedReference_tACCE4D02DD5CACE789BB0F58B6C2162C65BD32CA  : public RuntimeObject
{
public:
	// System.Object Mediatonic.Tools.ParsingUtils.CMSCachedReference::m_parent
	RuntimeObject * ___m_parent_0;
	// System.Reflection.MemberInfo Mediatonic.Tools.ParsingUtils.CMSCachedReference::m_field
	MemberInfo_t * ___m_field_1;
	// System.String Mediatonic.Tools.ParsingUtils.CMSCachedReference::m_key
	String_t* ___m_key_2;

public:
	inline static int32_t get_offset_of_m_parent_0() { return static_cast<int32_t>(offsetof(CMSCachedReference_tACCE4D02DD5CACE789BB0F58B6C2162C65BD32CA, ___m_parent_0)); }
	inline RuntimeObject * get_m_parent_0() const { return ___m_parent_0; }
	inline RuntimeObject ** get_address_of_m_parent_0() { return &___m_parent_0; }
	inline void set_m_parent_0(RuntimeObject * value)
	{
		___m_parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_field_1() { return static_cast<int32_t>(offsetof(CMSCachedReference_tACCE4D02DD5CACE789BB0F58B6C2162C65BD32CA, ___m_field_1)); }
	inline MemberInfo_t * get_m_field_1() const { return ___m_field_1; }
	inline MemberInfo_t ** get_address_of_m_field_1() { return &___m_field_1; }
	inline void set_m_field_1(MemberInfo_t * value)
	{
		___m_field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_field_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_key_2() { return static_cast<int32_t>(offsetof(CMSCachedReference_tACCE4D02DD5CACE789BB0F58B6C2162C65BD32CA, ___m_key_2)); }
	inline String_t* get_m_key_2() const { return ___m_key_2; }
	inline String_t** get_address_of_m_key_2() { return &___m_key_2; }
	inline void set_m_key_2(String_t* value)
	{
		___m_key_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_key_2), (void*)value);
	}
};


// Mediatonic.Tools.ParsingUtils.CMSDataCollection
struct  CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo[] Mediatonic.Tools.ParsingUtils.CMSDataCollection::<FieldInfo>k__BackingField
	FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* ___U3CFieldInfoU3Ek__BackingField_0;
	// System.Reflection.PropertyInfo[] Mediatonic.Tools.ParsingUtils.CMSDataCollection::<PropertyInfo>k__BackingField
	PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* ___U3CPropertyInfoU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CFieldInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3, ___U3CFieldInfoU3Ek__BackingField_0)); }
	inline FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* get_U3CFieldInfoU3Ek__BackingField_0() const { return ___U3CFieldInfoU3Ek__BackingField_0; }
	inline FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE** get_address_of_U3CFieldInfoU3Ek__BackingField_0() { return &___U3CFieldInfoU3Ek__BackingField_0; }
	inline void set_U3CFieldInfoU3Ek__BackingField_0(FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* value)
	{
		___U3CFieldInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFieldInfoU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyInfoU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3, ___U3CPropertyInfoU3Ek__BackingField_1)); }
	inline PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* get_U3CPropertyInfoU3Ek__BackingField_1() const { return ___U3CPropertyInfoU3Ek__BackingField_1; }
	inline PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E** get_address_of_U3CPropertyInfoU3Ek__BackingField_1() { return &___U3CPropertyInfoU3Ek__BackingField_1; }
	inline void set_U3CPropertyInfoU3Ek__BackingField_1(PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* value)
	{
		___U3CPropertyInfoU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyInfoU3Ek__BackingField_1), (void*)value);
	}
};


// Mediatonic.Tools.ParsingUtils.MixedDataType
struct  MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C  : public RuntimeObject
{
public:
	// System.Boolean Mediatonic.Tools.ParsingUtils.MixedDataType::<BoolValue>k__BackingField
	bool ___U3CBoolValueU3Ek__BackingField_0;
	// System.String Mediatonic.Tools.ParsingUtils.MixedDataType::<StringValue>k__BackingField
	String_t* ___U3CStringValueU3Ek__BackingField_1;
	// System.Int32 Mediatonic.Tools.ParsingUtils.MixedDataType::<IntValue>k__BackingField
	int32_t ___U3CIntValueU3Ek__BackingField_2;
	// System.Single Mediatonic.Tools.ParsingUtils.MixedDataType::<FloatValue>k__BackingField
	float ___U3CFloatValueU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CBoolValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C, ___U3CBoolValueU3Ek__BackingField_0)); }
	inline bool get_U3CBoolValueU3Ek__BackingField_0() const { return ___U3CBoolValueU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CBoolValueU3Ek__BackingField_0() { return &___U3CBoolValueU3Ek__BackingField_0; }
	inline void set_U3CBoolValueU3Ek__BackingField_0(bool value)
	{
		___U3CBoolValueU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStringValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C, ___U3CStringValueU3Ek__BackingField_1)); }
	inline String_t* get_U3CStringValueU3Ek__BackingField_1() const { return ___U3CStringValueU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CStringValueU3Ek__BackingField_1() { return &___U3CStringValueU3Ek__BackingField_1; }
	inline void set_U3CStringValueU3Ek__BackingField_1(String_t* value)
	{
		___U3CStringValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStringValueU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIntValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C, ___U3CIntValueU3Ek__BackingField_2)); }
	inline int32_t get_U3CIntValueU3Ek__BackingField_2() const { return ___U3CIntValueU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CIntValueU3Ek__BackingField_2() { return &___U3CIntValueU3Ek__BackingField_2; }
	inline void set_U3CIntValueU3Ek__BackingField_2(int32_t value)
	{
		___U3CIntValueU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFloatValueU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C, ___U3CFloatValueU3Ek__BackingField_3)); }
	inline float get_U3CFloatValueU3Ek__BackingField_3() const { return ___U3CFloatValueU3Ek__BackingField_3; }
	inline float* get_address_of_U3CFloatValueU3Ek__BackingField_3() { return &___U3CFloatValueU3Ek__BackingField_3; }
	inline void set_U3CFloatValueU3Ek__BackingField_3(float value)
	{
		___U3CFloatValueU3Ek__BackingField_3 = value;
	}
};


// Mediatonic.Tools.ParsingUtils.Parsing
struct  Parsing_t56FF824D95BA6FCD5FBBB5D9D672D5DC78C6B804  : public RuntimeObject
{
public:

public:
};


// Mediatonic.Tools.ParsingUtils.ParsingExtensions
struct  ParsingExtensions_t76DE0B1042B443E97EB5C5AC056A9ADD7CE7601B  : public RuntimeObject
{
public:

public:
};


// Mediatonic.Tools.ParsingUtils.ParsingUtils
struct  ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D  : public RuntimeObject
{
public:

public:
};

struct ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields
{
public:
	// System.Boolean Mediatonic.Tools.ParsingUtils.ParsingUtils::<IsInitialised>k__BackingField
	bool ___U3CIsInitialisedU3Ek__BackingField_0;
	// Mediatonic.Tools.ParsingUtils.ILogger Mediatonic.Tools.ParsingUtils.ParsingUtils::<Logger>k__BackingField
	RuntimeObject* ___U3CLoggerU3Ek__BackingField_1;
	// Mediatonic.Tools.ParsingUtils.IAsserts Mediatonic.Tools.ParsingUtils.ParsingUtils::<Assert>k__BackingField
	RuntimeObject* ___U3CAssertU3Ek__BackingField_2;
	// Mediatonic.Tools.ParsingUtils.ParsingUtils_PauseApplicationDelegate Mediatonic.Tools.ParsingUtils.ParsingUtils::<PauseDelegate>k__BackingField
	PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * ___U3CPauseDelegateU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIsInitialisedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields, ___U3CIsInitialisedU3Ek__BackingField_0)); }
	inline bool get_U3CIsInitialisedU3Ek__BackingField_0() const { return ___U3CIsInitialisedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsInitialisedU3Ek__BackingField_0() { return &___U3CIsInitialisedU3Ek__BackingField_0; }
	inline void set_U3CIsInitialisedU3Ek__BackingField_0(bool value)
	{
		___U3CIsInitialisedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLoggerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields, ___U3CLoggerU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLoggerU3Ek__BackingField_1() const { return ___U3CLoggerU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLoggerU3Ek__BackingField_1() { return &___U3CLoggerU3Ek__BackingField_1; }
	inline void set_U3CLoggerU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLoggerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoggerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAssertU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields, ___U3CAssertU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CAssertU3Ek__BackingField_2() const { return ___U3CAssertU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CAssertU3Ek__BackingField_2() { return &___U3CAssertU3Ek__BackingField_2; }
	inline void set_U3CAssertU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CAssertU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAssertU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPauseDelegateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields, ___U3CPauseDelegateU3Ek__BackingField_3)); }
	inline PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * get_U3CPauseDelegateU3Ek__BackingField_3() const { return ___U3CPauseDelegateU3Ek__BackingField_3; }
	inline PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD ** get_address_of_U3CPauseDelegateU3Ek__BackingField_3() { return &___U3CPauseDelegateU3Ek__BackingField_3; }
	inline void set_U3CPauseDelegateU3Ek__BackingField_3(PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * value)
	{
		___U3CPauseDelegateU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPauseDelegateU3Ek__BackingField_3), (void*)value);
	}
};


// Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsAssert
struct  Unity3dParsingUtilsAssert_tDF658AEDF2DF97412D3D3326048E1A2A9B6DBAE2  : public RuntimeObject
{
public:

public:
};


// Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsLogger
struct  Unity3dParsingUtilsLogger_tE07FF6F7770935AF14DB59F33F5234F459185F6A  : public RuntimeObject
{
public:

public:
};


// Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsPauseer
struct  Unity3dParsingUtilsPauseer_tBCA01C61170B13303CB62A5802A4672A7D5B53FE  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Mediatonic.Tools.ParsingUtils.CMSCachedReference>>
struct  Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA29707A7199ABA979B223CEF5CFBF2533043FE14* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t501A2F9C5FFBDC1938E307FC336653C1343A416D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4785055B1049386E3605BB7E39CEC6A7C297CD5C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A, ___entries_1)); }
	inline EntryU5BU5D_tA29707A7199ABA979B223CEF5CFBF2533043FE14* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA29707A7199ABA979B223CEF5CFBF2533043FE14** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA29707A7199ABA979B223CEF5CFBF2533043FE14* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A, ___keys_7)); }
	inline KeyCollection_t501A2F9C5FFBDC1938E307FC336653C1343A416D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t501A2F9C5FFBDC1938E307FC336653C1343A416D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t501A2F9C5FFBDC1938E307FC336653C1343A416D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A, ___values_8)); }
	inline ValueCollection_t4785055B1049386E3605BB7E39CEC6A7C297CD5C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4785055B1049386E3605BB7E39CEC6A7C297CD5C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4785055B1049386E3605BB7E39CEC6A7C297CD5C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____slots_8)); }
	inline SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mediatonic.Tools.ParsingUtils.CMSValidationEntry>
struct  List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CMSValidationEntryU5BU5D_t402DED69706B0B25116EB14919186CF1B3B0C3C1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF, ____items_1)); }
	inline CMSValidationEntryU5BU5D_t402DED69706B0B25116EB14919186CF1B3B0C3C1* get__items_1() const { return ____items_1; }
	inline CMSValidationEntryU5BU5D_t402DED69706B0B25116EB14919186CF1B3B0C3C1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CMSValidationEntryU5BU5D_t402DED69706B0B25116EB14919186CF1B3B0C3C1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CMSValidationEntryU5BU5D_t402DED69706B0B25116EB14919186CF1B3B0C3C1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF_StaticFields, ____emptyArray_5)); }
	inline CMSValidationEntryU5BU5D_t402DED69706B0B25116EB14919186CF1B3B0C3C1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CMSValidationEntryU5BU5D_t402DED69706B0B25116EB14919186CF1B3B0C3C1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CMSValidationEntryU5BU5D_t402DED69706B0B25116EB14919186CF1B3B0C3C1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Reflection.FieldInfo>
struct  List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA, ____items_1)); }
	inline FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* get__items_1() const { return ____items_1; }
	inline FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA_StaticFields, ____emptyArray_5)); }
	inline FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// Mediatonic.Tools.ParsingUtils.CMSCachedReferenceArray
struct  CMSCachedReferenceArray_t5A71CFAE9C52C5C3F21C678F00729DA4A7A66845  : public CMSCachedReference_tACCE4D02DD5CACE789BB0F58B6C2162C65BD32CA
{
public:
	// System.Object Mediatonic.Tools.ParsingUtils.CMSCachedReferenceArray::m_parent
	RuntimeObject * ___m_parent_3;
	// System.Reflection.MemberInfo Mediatonic.Tools.ParsingUtils.CMSCachedReferenceArray::m_field
	MemberInfo_t * ___m_field_4;
	// System.Collections.Generic.List`1<System.String> Mediatonic.Tools.ParsingUtils.CMSCachedReferenceArray::m_keys
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_keys_5;

public:
	inline static int32_t get_offset_of_m_parent_3() { return static_cast<int32_t>(offsetof(CMSCachedReferenceArray_t5A71CFAE9C52C5C3F21C678F00729DA4A7A66845, ___m_parent_3)); }
	inline RuntimeObject * get_m_parent_3() const { return ___m_parent_3; }
	inline RuntimeObject ** get_address_of_m_parent_3() { return &___m_parent_3; }
	inline void set_m_parent_3(RuntimeObject * value)
	{
		___m_parent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_field_4() { return static_cast<int32_t>(offsetof(CMSCachedReferenceArray_t5A71CFAE9C52C5C3F21C678F00729DA4A7A66845, ___m_field_4)); }
	inline MemberInfo_t * get_m_field_4() const { return ___m_field_4; }
	inline MemberInfo_t ** get_address_of_m_field_4() { return &___m_field_4; }
	inline void set_m_field_4(MemberInfo_t * value)
	{
		___m_field_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_field_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_keys_5() { return static_cast<int32_t>(offsetof(CMSCachedReferenceArray_t5A71CFAE9C52C5C3F21C678F00729DA4A7A66845, ___m_keys_5)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_keys_5() const { return ___m_keys_5; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_keys_5() { return &___m_keys_5; }
	inline void set_m_keys_5(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_keys_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keys_5), (void*)value);
	}
};


// Mediatonic.Tools.ParsingUtils.CMSCollectionField
struct  CMSCollectionField_tB9038CB96BD9E9F074F7332DA7B90BB9A9134E3E  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String Mediatonic.Tools.ParsingUtils.CMSCollectionField::_name
	String_t* ____name_0;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(CMSCollectionField_tB9038CB96BD9E9F074F7332DA7B90BB9A9134E3E, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_0), (void*)value);
	}
};


// Mediatonic.Tools.ParsingUtils.CMSDataGroup
struct  CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1  : public CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3
{
public:
	// System.String Mediatonic.Tools.ParsingUtils.CMSDataGroup::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1, ___U3CIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CIdU3Ek__BackingField_2() const { return ___U3CIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_2() { return &___U3CIdU3Ek__BackingField_2; }
	inline void set_U3CIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_2), (void*)value);
	}
};


// Mediatonic.Tools.ParsingUtils.CMSDefault
struct  CMSDefault_tE0A71FF751743D8B88ACB5C535C976026180635F  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Object Mediatonic.Tools.ParsingUtils.CMSDefault::_value
	RuntimeObject * ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(CMSDefault_tE0A71FF751743D8B88ACB5C535C976026180635F, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}
};


// Mediatonic.Tools.ParsingUtils.CMSField
struct  CMSField_t2FFE7CCFBA785CFDAFEB33FD83B94C165ECCD199  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String Mediatonic.Tools.ParsingUtils.CMSField::_name
	String_t* ____name_0;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(CMSField_t2FFE7CCFBA785CFDAFEB33FD83B94C165ECCD199, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_0), (void*)value);
	}
};


// Mediatonic.Tools.ParsingUtils.CMSGroup
struct  CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String Mediatonic.Tools.ParsingUtils.CMSGroup::_key
	String_t* ____key_0;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977, ____key_0)); }
	inline String_t* get__key_0() const { return ____key_0; }
	inline String_t** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(String_t* value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}
};


// Mediatonic.Tools.ParsingUtils.CMSIndexedDictionary
struct  CMSIndexedDictionary_tF96EF00EB0059A2E6AB0518DAA3718D5206B879C  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String Mediatonic.Tools.ParsingUtils.CMSIndexedDictionary::_fieldIndex
	String_t* ____fieldIndex_0;

public:
	inline static int32_t get_offset_of__fieldIndex_0() { return static_cast<int32_t>(offsetof(CMSIndexedDictionary_tF96EF00EB0059A2E6AB0518DAA3718D5206B879C, ____fieldIndex_0)); }
	inline String_t* get__fieldIndex_0() const { return ____fieldIndex_0; }
	inline String_t** get_address_of__fieldIndex_0() { return &____fieldIndex_0; }
	inline void set__fieldIndex_0(String_t* value)
	{
		____fieldIndex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fieldIndex_0), (void*)value);
	}
};


// Mediatonic.Tools.ParsingUtils.CMSParseFunction
struct  CMSParseFunction_t3973CCCD9D265C6D9B29FA5BE4085825C36757C1  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String Mediatonic.Tools.ParsingUtils.CMSParseFunction::_functionName
	String_t* ____functionName_0;

public:
	inline static int32_t get_offset_of__functionName_0() { return static_cast<int32_t>(offsetof(CMSParseFunction_t3973CCCD9D265C6D9B29FA5BE4085825C36757C1, ____functionName_0)); }
	inline String_t* get__functionName_0() const { return ____functionName_0; }
	inline String_t** get_address_of__functionName_0() { return &____functionName_0; }
	inline void set__functionName_0(String_t* value)
	{
		____functionName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____functionName_0), (void*)value);
	}
};


// Mediatonic.Tools.ParsingUtils.CMSReference
struct  CMSReference_t13C5CF2C4B36AC9A0333D1D4E05250893B5A3494  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// Mediatonic.Tools.ParsingUtils.CMSReferenceCache
struct  CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B  : public Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A
{
public:

public:
};


// Mediatonic.Tools.ParsingUtils.CMSValidationResult
struct  CMSValidationResult_t37C02D44AFD12321DA85D8B13DFBD0EA5777C788  : public List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Reflection.FieldInfo>
struct  Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	FieldInfo_t * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B, ___list_0)); }
	inline List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA * get_list_0() const { return ___list_0; }
	inline List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B, ___current_3)); }
	inline FieldInfo_t * get_current_3() const { return ___current_3; }
	inline FieldInfo_t ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(FieldInfo_t * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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


// Mediatonic.Tools.ParsingUtils.CMSValidationEntryType
struct  CMSValidationEntryType_t21E354467049DE036BFC2B8D978B7606042F5399 
{
public:
	// System.Int32 Mediatonic.Tools.ParsingUtils.CMSValidationEntryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CMSValidationEntryType_t21E354467049DE036BFC2B8D978B7606042F5399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeKind
struct  DateTimeKind_t6BC23532930B812ABFCCEB2B61BC233712B180EE 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_t6BC23532930B812ABFCCEB2B61BC233712B180EE, ___value___2)); }
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

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Mediatonic.Tools.ParsingUtils.CMSValidationEntry
struct  CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49 
{
public:
	// Mediatonic.Tools.ParsingUtils.CMSValidationEntryType Mediatonic.Tools.ParsingUtils.CMSValidationEntry::Type
	int32_t ___Type_0;
	// System.String Mediatonic.Tools.ParsingUtils.CMSValidationEntry::Message
	String_t* ___Message_1;
	// Mediatonic.Tools.ParsingUtils.CMSDataGroup Mediatonic.Tools.ParsingUtils.CMSValidationEntry::Group
	CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1 * ___Group_2;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_1), (void*)value);
	}

	inline static int32_t get_offset_of_Group_2() { return static_cast<int32_t>(offsetof(CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49, ___Group_2)); }
	inline CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1 * get_Group_2() const { return ___Group_2; }
	inline CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1 ** get_address_of_Group_2() { return &___Group_2; }
	inline void set_Group_2(CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1 * value)
	{
		___Group_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Group_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mediatonic.Tools.ParsingUtils.CMSValidationEntry
struct CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshaled_pinvoke
{
	int32_t ___Type_0;
	char* ___Message_1;
	CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1 * ___Group_2;
};
// Native definition for COM marshalling of Mediatonic.Tools.ParsingUtils.CMSValidationEntry
struct CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshaled_com
{
	int32_t ___Type_0;
	Il2CppChar* ___Message_1;
	CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1 * ___Group_2;
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


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Mediatonic.Tools.ParsingUtils.ParsingUtils_PauseApplicationDelegate
struct  PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD  : public MulticastDelegate_t
{
public:

public:
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


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mediatonic.Tools.ParsingUtils.CMSValidationEntry>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m947A6734F882B4670D90F258AB44BB349271BCAD_gshared (List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m8A209D312FD08A21AFB5551881E7A6946A07C0D5_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m1A3167674F8646F908B2AF4977144E4D8175D695_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.CMSCachedReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSCachedReference__ctor_mB6069AEA72219DB07DCAB1227181A2619EAB5DD6 (CMSCachedReference_tACCE4D02DD5CACE789BB0F58B6C2162C65BD32CA * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* Type_GetFields_mFE461EB4CB4624DFA0621793F3F738B1057426AC (Type_t * __this, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.CMSDataCollection::set_FieldInfo(System.Reflection.FieldInfo[])
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CMSDataCollection_set_FieldInfo_m4D4876D3CA39B30135FEC58BEC398DF6A523DB04_inline (CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3 * __this, FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* ___value0, const RuntimeMethod* method);
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D (Type_t * __this, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.CMSDataCollection::set_PropertyInfo(System.Reflection.PropertyInfo[])
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CMSDataCollection_set_PropertyInfo_mC7758464511EE3F1CC408ACEB07312DF8CF25D18_inline (CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3 * __this, PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* ___value0, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.CMSDataCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSDataCollection__ctor_mDC1DC4FA893E60EF9D20C25FE6A889F913016376 (CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3 * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Mediatonic.Tools.ParsingUtils.CMSCachedReference>>::.ctor()
inline void Dictionary_2__ctor_mE20EECF01EEE9A1020A5C60AC93E5DF6BA3F4331 (Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2C480A4981F064A477B27C8CC5E9D2D2CC16757A *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mediatonic.Tools.ParsingUtils.CMSValidationEntry>::.ctor()
inline void List_1__ctor_m947A6734F882B4670D90F258AB44BB349271BCAD (List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF *, const RuntimeMethod*))List_1__ctor_m947A6734F882B4670D90F258AB44BB349271BCAD_gshared)(__this, method);
}
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::set_BoolValue(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedDataType_set_BoolValue_mDC070824D2353CA6E74588FE690A40557EEEEC2B_inline (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::set_StringValue(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedDataType_set_StringValue_m99C8B830602946698FB989BE649F258884EF734E_inline (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::set_IntValue(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedDataType_set_IntValue_m0C48AF9B2AE5ED3255F75BF03578521F155117E6_inline (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Mediatonic.Tools.ParsingUtils.MixedDataType::get_IntValue()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedDataType_get_IntValue_m57856CE1A5D371430201A5E38322EA56367674E0_inline (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::set_FloatValue(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedDataType_set_FloatValue_mF64AE9046423B0AA7ABC89F98E85EEF7540AA7B3_inline (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, float ___value0, const RuntimeMethod* method);
// System.Single Mediatonic.Tools.ParsingUtils.MixedDataType::get_FloatValue()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedDataType_get_FloatValue_m3E9C3E9EFEAC875A01B0B02B700CF3BC538E4EF5_inline (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Reflection.FieldInfo>::.ctor()
inline void List_1__ctor_mB81EEE384AE5720F0732F47132AE29791D873838 (List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.FieldInfo>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m30981C1920D25249C9A970AE2B382842D8F21078 (List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Reflection.FieldInfo>::GetEnumerator()
inline Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B  List_1_GetEnumerator_mF7FFDF2DCADE3D4A27EDA2810572F7710DD1347C (List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B  (*) (List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Reflection.FieldInfo>::get_Current()
inline FieldInfo_t * Enumerator_get_Current_mC0F9187C44B0FDC5FC1F3DD48F6BFEA0BFACE68D_inline (Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B * __this, const RuntimeMethod* method)
{
	return ((  FieldInfo_t * (*) (Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mB8368D44E32C205D279BA3BB9E6FE1D09D45A6DE (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Reflection.FieldInfo>::MoveNext()
inline bool Enumerator_MoveNext_m7AF446110E4C3A19ECF5CECDDD9504376318881F (Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.FieldInfo>::Dispose()
inline void Enumerator_Dispose_m8A35CF2FC42DB1C9E906EDD3C182929EC7BB2215 (Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// Mediatonic.Tools.ParsingUtils.IAsserts Mediatonic.Tools.ParsingUtils.ParsingUtils::get_Assert()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ParsingUtils_get_Assert_mC4DE7A7E217F402C4FF5ED6C0775CC4544B2A91C_inline (const RuntimeMethod* method);
// System.String Mediatonic.Tools.ParsingUtils.CMSGroup::get_Key()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* CMSGroup_get_Key_m51EC5EB710636F0D09F91E5C1B9CADAF45A52AB3_inline (CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41 (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Exception System.Exception::get_InnerException()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_mCB68CC8CBF2540EF381CB17A4E4E3F6D0E33453F_inline (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Object Mediatonic.Tools.ParsingUtils.Parsing::ParseArrayNonGeneric(System.Type,System.Object,Mediatonic.Tools.ParsingUtils.CMSReferenceCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parsing_ParseArrayNonGeneric_m1B48E8CA51F3F84C3B1FEAFBBDDEFFD15370352F (Type_t * ___t0, RuntimeObject * ___data1, CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * ___referenceCache2, const RuntimeMethod* method);
// System.String Mediatonic.Tools.ParsingUtils.Parsing::ParseString(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parsing_ParseString_m16D5BB24DD504D35CA9CF33FD05F935DBA9BB3D0 (RuntimeObject * ___data0, const RuntimeMethod* method);
// System.Boolean Mediatonic.Tools.ParsingUtils.Parsing::ParseBool(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parsing_ParseBool_m1927B72F161E53A16217D733621E094EB0649268 (RuntimeObject * ___data0, const RuntimeMethod* method);
// System.Int32 Mediatonic.Tools.ParsingUtils.Parsing::ParseInt(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parsing_ParseInt_m54B8A8DC9EA377DEDE3D297629EA8F5B9129D03F (RuntimeObject * ___data0, const RuntimeMethod* method);
// System.UInt32 Mediatonic.Tools.ParsingUtils.Parsing::ParseUint(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Parsing_ParseUint_m736DCB798D013CE4D933BAD8B93CFCAB61E606F8 (RuntimeObject * ___data0, const RuntimeMethod* method);
// System.Int64 Mediatonic.Tools.ParsingUtils.Parsing::ParseLong(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Parsing_ParseLong_m09AE5CF5D1B7ADDBEADFC92939F62EB9F7587481 (RuntimeObject * ___data0, const RuntimeMethod* method);
// System.Single Mediatonic.Tools.ParsingUtils.Parsing::ParseFloat(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parsing_ParseFloat_m9F4404F925895CBD1CCCFA69777DC67022B5D3C1 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String[] Mediatonic.Tools.ParsingUtils.Parsing::ParseStringArray(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Parsing_ParseStringArray_mF574522B0EF69EEC37144E284E2B35401715F8AF (RuntimeObject * ___objArray0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1<System.String> Mediatonic.Tools.ParsingUtils.Parsing::ParseStringHashSet(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * Parsing_ParseStringHashSet_mF990552D47A4C500A8EBC0030AFC46E4F9C3C0CC (RuntimeObject * ___objArray0, const RuntimeMethod* method);
// System.Object Mediatonic.Tools.ParsingUtils.Parsing::ParseDateTime(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parsing_ParseDateTime_mF0A6B2DA87542CC0C0CDB6EFDAC6714729C0491B (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Object Mediatonic.Tools.ParsingUtils.Parsing::ParseEnum(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parsing_ParseEnum_mB8D25E878DEE05DF41F84C449B6DCB448E9922F8 (Type_t * ___fieldType0, RuntimeObject * ___data1, const RuntimeMethod* method);
// System.Object Mediatonic.Tools.ParsingUtils.Parsing::ParseMixedDataType(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parsing_ParseMixedDataType_mF01A14943670A152FE71A474041DD21137FC4FA9 (RuntimeObject * ___data0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_mC51A0BD680AC2D2152A541E2A8475DB61A83A6E7 (Type_t * ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedDataType__ctor_m21B0DE8F31F2696EBC99CA20CE74F22D0B9190B2 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, bool ___boolValue0, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedDataType__ctor_mB8032F60C6927C7F74407E2D6EA55CCFEBC9ABC7 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, String_t* ___stringValue0, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedDataType__ctor_m52C151B18AA25E46A8742111B6D0D1BDFA4E07B3 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, int32_t ___intValue0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mAB66BA75AC3CDFA1FEC09E3125EA444B46CD7050 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedDataType__ctor_mE591921D2BE7599F4815A8863612801D0F19DF53 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, float ___floatValue0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Array_CreateInstance_mE3FF1559BCD06302A7DA79FCE32232941AC38F3F (Type_t * ___elementType0, int32_t ___length1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Object Mediatonic.Tools.ParsingUtils.Parsing::ParseByType(System.Type,System.Object,Mediatonic.Tools.ParsingUtils.CMSReferenceCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parsing_ParseByType_m439FB24ACC2AEA51AD41ADD3BFFA299C2BF7DAC6 (Type_t * ___fieldType0, RuntimeObject * ___data1, CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * ___referenceCache2, const RuntimeMethod* method);
// System.Object System.Enum::ToObject(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_ToObject_mED18F2B01F4BA412C1882396CE977411BB54165D (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA (RuntimeArray * __this, RuntimeObject * ___value0, int32_t ___index1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34 (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472 (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m341EA42F7782B136FA7335771DA3C6C96AF6BD86 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_Parse_mFB11F5C0061CEAD9A2F51E3814DEBE0475F2BA37 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mEB21F0E1968B663D04B2D088DC510A91CA698B2B (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_AddSeconds_m36DC8835432569A70AC5120359527350DD65D6B2 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, double ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_mD07425BBACDADAC32A4B42FDE00C5DAAEC59880D (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A *, const RuntimeMethod*))HashSet_1__ctor_m8A209D312FD08A21AFB5551881E7A6946A07C0D5_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(!0)
inline bool HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1 (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A *, String_t*, const RuntimeMethod*))HashSet_1_Add_m1A3167674F8646F908B2AF4977144E4D8175D695_gshared)(__this, ___item0, method);
}
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Boolean Mediatonic.Tools.ParsingUtils.ParsingUtils::get_IsInitialised()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ParsingUtils_get_IsInitialised_mD3FA9F0CED462A9D29418F2742A52DB769D9D75A_inline (const RuntimeMethod* method);
// Mediatonic.Tools.ParsingUtils.ILogger Mediatonic.Tools.ParsingUtils.ParsingUtils::get_Logger()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ParsingUtils_get_Logger_m2171ACBF8F93020B7E53AFB40915523D78E65377_inline (const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.ParsingUtils::set_Logger(Mediatonic.Tools.ParsingUtils.ILogger)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ParsingUtils_set_Logger_mB97D826AAD42F55F43F57B22000C5AC45BA09848_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.ParsingUtils::set_Assert(Mediatonic.Tools.ParsingUtils.IAsserts)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ParsingUtils_set_Assert_m68FE24D5EE0BEE45094CF88B1AA2D248E6FA4BF3_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.ParsingUtils::set_PauseDelegate(Mediatonic.Tools.ParsingUtils.ParsingUtils/PauseApplicationDelegate)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ParsingUtils_set_PauseDelegate_m3BE2D414EB50C3EC15266731ADEF8430C0504025_inline (PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * ___value0, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ParsingUtils.ParsingUtils::set_IsInitialised(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ParsingUtils_set_IsInitialised_m4443087785B4B806353B65DDCCDDB2D573A67BEA_inline (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void Mediatonic.Tools.ParsingUtils.CMSCachedReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSCachedReference__ctor_mB6069AEA72219DB07DCAB1227181A2619EAB5DD6 (CMSCachedReference_tACCE4D02DD5CACE789BB0F58B6C2162C65BD32CA * __this, const RuntimeMethod* method)
{
	{
		// public CMSCachedReference()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.CMSCachedReference::.ctor(System.Object,System.Reflection.MemberInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSCachedReference__ctor_m51ACEE480966A9A6FE19246E4C2EE0ACA803C568 (CMSCachedReference_tACCE4D02DD5CACE789BB0F58B6C2162C65BD32CA * __this, RuntimeObject * ___parent0, MemberInfo_t * ___field1, String_t* ___key2, const RuntimeMethod* method)
{
	{
		// public CMSCachedReference(object parent, MemberInfo field, string key)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_parent = parent;
		RuntimeObject * L_0 = ___parent0;
		__this->set_m_parent_0(L_0);
		// m_field = field;
		MemberInfo_t * L_1 = ___field1;
		__this->set_m_field_1(L_1);
		// m_key = key;
		String_t* L_2 = ___key2;
		__this->set_m_key_2(L_2);
		// }
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
// System.Void Mediatonic.Tools.ParsingUtils.CMSCachedReferenceArray::.ctor(System.Object,System.Reflection.MemberInfo,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSCachedReferenceArray__ctor_m042B74D1BDF15828D39A5D8A6D0AFA42FD9F3B8D (CMSCachedReferenceArray_t5A71CFAE9C52C5C3F21C678F00729DA4A7A66845 * __this, RuntimeObject * ___parent0, MemberInfo_t * ___field1, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___keys2, const RuntimeMethod* method)
{
	{
		// public CMSCachedReferenceArray(object parent, MemberInfo field, List<string> keys)
		CMSCachedReference__ctor_mB6069AEA72219DB07DCAB1227181A2619EAB5DD6(__this, /*hidden argument*/NULL);
		// m_parent = parent;
		RuntimeObject * L_0 = ___parent0;
		__this->set_m_parent_3(L_0);
		// m_field = field;
		MemberInfo_t * L_1 = ___field1;
		__this->set_m_field_4(L_1);
		// m_keys = keys;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = ___keys2;
		__this->set_m_keys_5(L_2);
		// }
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
// System.String Mediatonic.Tools.ParsingUtils.CMSCollectionField::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CMSCollectionField_get_Name_mED651268FA25F077FEB2EB19B1F9451CB35744F7 (CMSCollectionField_tB9038CB96BD9E9F074F7332DA7B90BB9A9134E3E * __this, const RuntimeMethod* method)
{
	{
		// return _name;
		String_t* L_0 = __this->get__name_0();
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
// System.Void Mediatonic.Tools.ParsingUtils.CMSDataCollection::set_FieldInfo(System.Reflection.FieldInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSDataCollection_set_FieldInfo_m4D4876D3CA39B30135FEC58BEC398DF6A523DB04 (CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3 * __this, FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_0 = ___value0;
		__this->set_U3CFieldInfoU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.CMSDataCollection::set_PropertyInfo(System.Reflection.PropertyInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSDataCollection_set_PropertyInfo_mC7758464511EE3F1CC408ACEB07312DF8CF25D18 (CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3 * __this, PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_0 = ___value0;
		__this->set_U3CPropertyInfoU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.CMSDataCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSDataCollection__ctor_mDC1DC4FA893E60EF9D20C25FE6A889F913016376 (CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3 * __this, const RuntimeMethod* method)
{
	{
		// public CMSDataCollection()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.CMSDataCollection::PostParse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSDataCollection_PostParse_m3FC36581AD2158A076BEA2C081D7A0944B52A766 (CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3 * __this, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	{
		// var type = this.GetType();
		Type_t * L_0 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// FieldInfo = type.GetFields();
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_2 = Type_GetFields_mFE461EB4CB4624DFA0621793F3F738B1057426AC(L_1, /*hidden argument*/NULL);
		CMSDataCollection_set_FieldInfo_m4D4876D3CA39B30135FEC58BEC398DF6A523DB04_inline(__this, L_2, /*hidden argument*/NULL);
		// PropertyInfo = type.GetProperties();
		Type_t * L_3 = V_0;
		NullCheck(L_3);
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_4 = Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D(L_3, /*hidden argument*/NULL);
		CMSDataCollection_set_PropertyInfo_mC7758464511EE3F1CC408ACEB07312DF8CF25D18_inline(__this, L_4, /*hidden argument*/NULL);
		// }
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
// System.String Mediatonic.Tools.ParsingUtils.CMSDataGroup::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CMSDataGroup_get_Id_m584780329DA20A7CD745147080B2C355BB4E3944 (CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1 * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; protected set; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.CMSDataGroup::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSDataGroup_set_Id_m915B9E9418DD377F65F48E381029E89A40E4B3AA (CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Id { get; protected set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.CMSDataGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSDataGroup__ctor_mBE86A8133E18949143D77B25A0D275B2327206CF (CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1 * __this, const RuntimeMethod* method)
{
	{
		// public CMSDataGroup()
		CMSDataCollection__ctor_mDC1DC4FA893E60EF9D20C25FE6A889F913016376(__this, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.CMSDataGroup::ValidateData(Mediatonic.Tools.ParsingUtils.CMSValidationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSDataGroup_ValidateData_m069D8539F62ECD0237566B54AD99138DBFF3299F (CMSDataGroup_t3E1030BB2C15D69C2A712EABC570716C1CA627C1 * __this, CMSValidationResult_t37C02D44AFD12321DA85D8B13DFBD0EA5777C788 * ___validationResults0, const RuntimeMethod* method)
{
	{
		// public virtual void ValidateData(CMSValidationResult validationResults) { }
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
// System.Void Mediatonic.Tools.ParsingUtils.CMSDefault::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSDefault__ctor_m7042D40377EE572D8BA59D632E14F7A19DEAA5FE (CMSDefault_tE0A71FF751743D8B88ACB5C535C976026180635F * __this, const RuntimeMethod* method)
{
	{
		// public CMSDefault()
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		// _value = null;
		__this->set__value_0(NULL);
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.CMSDefault::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSDefault__ctor_m94BFAD1B88FCE916288B550E9B4804BCD3156EF9 (CMSDefault_tE0A71FF751743D8B88ACB5C535C976026180635F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public CMSDefault(object value)
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		// _value = value;
		RuntimeObject * L_0 = ___value0;
		__this->set__value_0(L_0);
		// }
		return;
	}
}
// System.Object Mediatonic.Tools.ParsingUtils.CMSDefault::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CMSDefault_get_Value_mD42201ABCA640208F89B38E69E8276ECDB2A9AAF (CMSDefault_tE0A71FF751743D8B88ACB5C535C976026180635F * __this, const RuntimeMethod* method)
{
	{
		// return _value;
		RuntimeObject * L_0 = __this->get__value_0();
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
// System.Void Mediatonic.Tools.ParsingUtils.CMSField::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSField__ctor_m8582E352B716562B9CBE2EE44512132E3993C596 (CMSField_t2FFE7CCFBA785CFDAFEB33FD83B94C165ECCD199 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// public CMSField(string name)
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		// _name = name;
		String_t* L_0 = ___name0;
		__this->set__name_0(L_0);
		// }
		return;
	}
}
// System.String Mediatonic.Tools.ParsingUtils.CMSField::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CMSField_get_Name_m3417FA06EB4ED0E8982E28A4D8D29537CE2EBE05 (CMSField_t2FFE7CCFBA785CFDAFEB33FD83B94C165ECCD199 * __this, const RuntimeMethod* method)
{
	{
		// return _name;
		String_t* L_0 = __this->get__name_0();
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
// System.Void Mediatonic.Tools.ParsingUtils.CMSGroup::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSGroup__ctor_mA37A0DA206430373214EFF2F5286EFAFE7B575F3 (CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977 * __this, String_t* ___groupId0, const RuntimeMethod* method)
{
	{
		// public CMSGroup(string groupId)
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		// _key = groupId;
		String_t* L_0 = ___groupId0;
		__this->set__key_0(L_0);
		// }
		return;
	}
}
// System.String Mediatonic.Tools.ParsingUtils.CMSGroup::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CMSGroup_get_Key_m51EC5EB710636F0D09F91E5C1B9CADAF45A52AB3 (CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977 * __this, const RuntimeMethod* method)
{
	{
		// return _key;
		String_t* L_0 = __this->get__key_0();
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
// System.String Mediatonic.Tools.ParsingUtils.CMSIndexedDictionary::get_FieldIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CMSIndexedDictionary_get_FieldIndex_m689E895492CE09865D1F56BFCABEE7854B88ABD7 (CMSIndexedDictionary_tF96EF00EB0059A2E6AB0518DAA3718D5206B879C * __this, const RuntimeMethod* method)
{
	{
		// return _fieldIndex;
		String_t* L_0 = __this->get__fieldIndex_0();
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
// System.String Mediatonic.Tools.ParsingUtils.CMSParseFunction::get_FunctionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CMSParseFunction_get_FunctionName_mE5C43E4D56E5D9117BF5FA63F07657137ECC4623 (CMSParseFunction_t3973CCCD9D265C6D9B29FA5BE4085825C36757C1 * __this, const RuntimeMethod* method)
{
	{
		// return _functionName;
		String_t* L_0 = __this->get__functionName_0();
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
// System.Void Mediatonic.Tools.ParsingUtils.CMSReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSReference__ctor_mCC0233BFC5622B295A24B0658BA7E7F472A762B5 (CMSReference_t13C5CF2C4B36AC9A0333D1D4E05250893B5A3494 * __this, const RuntimeMethod* method)
{
	{
		// public CMSReference()
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		// }
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
// System.Void Mediatonic.Tools.ParsingUtils.CMSReferenceCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSReferenceCache__ctor_m9984A71CCC357E35DA1F6F7D710F9DF43FCB7566 (CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CMSReferenceCache__ctor_m9984A71CCC357E35DA1F6F7D710F9DF43FCB7566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2__ctor_mE20EECF01EEE9A1020A5C60AC93E5DF6BA3F4331(__this, /*hidden argument*/Dictionary_2__ctor_mE20EECF01EEE9A1020A5C60AC93E5DF6BA3F4331_RuntimeMethod_var);
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
// Conversion methods for marshalling of: Mediatonic.Tools.ParsingUtils.CMSValidationEntry
IL2CPP_EXTERN_C void CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshal_pinvoke(const CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49& unmarshaled, CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Group_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Group' of type 'CMSValidationEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Group_2Exception, NULL);
}
IL2CPP_EXTERN_C void CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshal_pinvoke_back(const CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshaled_pinvoke& marshaled, CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49& unmarshaled)
{
	Exception_t* ___Group_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Group' of type 'CMSValidationEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Group_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mediatonic.Tools.ParsingUtils.CMSValidationEntry
IL2CPP_EXTERN_C void CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshal_pinvoke_cleanup(CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mediatonic.Tools.ParsingUtils.CMSValidationEntry
IL2CPP_EXTERN_C void CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshal_com(const CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49& unmarshaled, CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshaled_com& marshaled)
{
	Exception_t* ___Group_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Group' of type 'CMSValidationEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Group_2Exception, NULL);
}
IL2CPP_EXTERN_C void CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshal_com_back(const CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshaled_com& marshaled, CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49& unmarshaled)
{
	Exception_t* ___Group_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Group' of type 'CMSValidationEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Group_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mediatonic.Tools.ParsingUtils.CMSValidationEntry
IL2CPP_EXTERN_C void CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshal_com_cleanup(CMSValidationEntry_tF0DF0C0F2CE947A8F67DC72C9156B1B810B44D49_marshaled_com& marshaled)
{
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
// System.Void Mediatonic.Tools.ParsingUtils.CMSValidationResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMSValidationResult__ctor_mF2FC1FC5465935CD55A3E367AE15F7BAA30C5BE6 (CMSValidationResult_t37C02D44AFD12321DA85D8B13DFBD0EA5777C788 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CMSValidationResult__ctor_mF2FC1FC5465935CD55A3E367AE15F7BAA30C5BE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t38E8F445D3DF9B42523DAE51DC1946ED162BD5FF_il2cpp_TypeInfo_var);
		List_1__ctor_m947A6734F882B4670D90F258AB44BB349271BCAD(__this, /*hidden argument*/List_1__ctor_m947A6734F882B4670D90F258AB44BB349271BCAD_RuntimeMethod_var);
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
// System.Boolean Mediatonic.Tools.ParsingUtils.MixedDataType::get_BoolValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedDataType_get_BoolValue_m949F4A02B82FCEA820F175353332D74D5817BF56 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, const RuntimeMethod* method)
{
	{
		// public bool BoolValue { get; private set; }
		bool L_0 = __this->get_U3CBoolValueU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::set_BoolValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedDataType_set_BoolValue_mDC070824D2353CA6E74588FE690A40557EEEEC2B (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BoolValue { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CBoolValueU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Mediatonic.Tools.ParsingUtils.MixedDataType::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedDataType_get_StringValue_m2ADDF8054534DE402F764070FC2EAA64C4F2FF39 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, const RuntimeMethod* method)
{
	{
		// public string StringValue { get; private set; }
		String_t* L_0 = __this->get_U3CStringValueU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::set_StringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedDataType_set_StringValue_m99C8B830602946698FB989BE649F258884EF734E (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string StringValue { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CStringValueU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Mediatonic.Tools.ParsingUtils.MixedDataType::get_IntValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedDataType_get_IntValue_m57856CE1A5D371430201A5E38322EA56367674E0 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, const RuntimeMethod* method)
{
	{
		// public int IntValue { get; private set; }
		int32_t L_0 = __this->get_U3CIntValueU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::set_IntValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedDataType_set_IntValue_m0C48AF9B2AE5ED3255F75BF03578521F155117E6 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int IntValue { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIntValueU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Single Mediatonic.Tools.ParsingUtils.MixedDataType::get_FloatValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedDataType_get_FloatValue_m3E9C3E9EFEAC875A01B0B02B700CF3BC538E4EF5 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, const RuntimeMethod* method)
{
	{
		// public float FloatValue { get; private set; }
		float L_0 = __this->get_U3CFloatValueU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::set_FloatValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedDataType_set_FloatValue_mF64AE9046423B0AA7ABC89F98E85EEF7540AA7B3 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FloatValue { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CFloatValueU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedDataType__ctor_m21B0DE8F31F2696EBC99CA20CE74F22D0B9190B2 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, bool ___boolValue0, const RuntimeMethod* method)
{
	{
		// public MixedDataType(bool boolValue)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// BoolValue = boolValue;
		bool L_0 = ___boolValue0;
		MixedDataType_set_BoolValue_mDC070824D2353CA6E74588FE690A40557EEEEC2B_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedDataType__ctor_mB8032F60C6927C7F74407E2D6EA55CCFEBC9ABC7 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, String_t* ___stringValue0, const RuntimeMethod* method)
{
	{
		// public MixedDataType(string stringValue)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// StringValue = stringValue;
		String_t* L_0 = ___stringValue0;
		MixedDataType_set_StringValue_m99C8B830602946698FB989BE649F258884EF734E_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedDataType__ctor_m52C151B18AA25E46A8742111B6D0D1BDFA4E07B3 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, int32_t ___intValue0, const RuntimeMethod* method)
{
	{
		// public MixedDataType(int intValue)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// IntValue = intValue;
		int32_t L_0 = ___intValue0;
		MixedDataType_set_IntValue_m0C48AF9B2AE5ED3255F75BF03578521F155117E6_inline(__this, L_0, /*hidden argument*/NULL);
		// FloatValue = (float)IntValue;
		int32_t L_1 = MixedDataType_get_IntValue_m57856CE1A5D371430201A5E38322EA56367674E0_inline(__this, /*hidden argument*/NULL);
		MixedDataType_set_FloatValue_mF64AE9046423B0AA7ABC89F98E85EEF7540AA7B3_inline(__this, (((float)((float)L_1))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.MixedDataType::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedDataType__ctor_mE591921D2BE7599F4815A8863612801D0F19DF53 (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, float ___floatValue0, const RuntimeMethod* method)
{
	{
		// public MixedDataType(float floatValue)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// FloatValue = floatValue;
		float L_0 = ___floatValue0;
		MixedDataType_set_FloatValue_mF64AE9046423B0AA7ABC89F98E85EEF7540AA7B3_inline(__this, L_0, /*hidden argument*/NULL);
		// IntValue = (int)FloatValue;
		float L_1 = MixedDataType_get_FloatValue_m3E9C3E9EFEAC875A01B0B02B700CF3BC538E4EF5_inline(__this, /*hidden argument*/NULL);
		MixedDataType_set_IntValue_m0C48AF9B2AE5ED3255F75BF03578521F155117E6_inline(__this, (((int32_t)((int32_t)L_1))), /*hidden argument*/NULL);
		// }
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
// System.Void Mediatonic.Tools.ParsingUtils.Parsing::ValidateDataDictionaries(System.Object,Mediatonic.Tools.ParsingUtils.CMSValidationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parsing_ValidateDataDictionaries_m9D8CB10E7AE82336EBE15026FC75BF3D6BADAD3D (RuntimeObject * ___obj0, CMSValidationResult_t37C02D44AFD12321DA85D8B13DFBD0EA5777C788 * ___validationResults1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ValidateDataDictionaries_m9D8CB10E7AE82336EBE15026FC75BF3D6BADAD3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	FieldInfo_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_4 = NULL;
	int32_t V_5 = 0;
	Type_t * V_6 = NULL;
	RuntimeObject * V_7 = NULL;
	MethodInfo_t * V_8 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var members = new List<FieldInfo>();
		List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA * L_0 = (List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA *)il2cpp_codegen_object_new(List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA_il2cpp_TypeInfo_var);
		List_1__ctor_mB81EEE384AE5720F0732F47132AE29791D873838(L_0, /*hidden argument*/List_1__ctor_mB81EEE384AE5720F0732F47132AE29791D873838_RuntimeMethod_var);
		// members.AddRange(obj.GetType().GetFields());
		List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_4 = Type_GetFields_mFE461EB4CB4624DFA0621793F3F738B1057426AC(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_AddRange_m30981C1920D25249C9A970AE2B382842D8F21078(L_1, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/List_1_AddRange_m30981C1920D25249C9A970AE2B382842D8F21078_RuntimeMethod_var);
		// foreach (FieldInfo m in members)
		NullCheck(L_1);
		Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B  L_5 = List_1_GetEnumerator_mF7FFDF2DCADE3D4A27EDA2810572F7710DD1347C(L_1, /*hidden argument*/List_1_GetEnumerator_mF7FFDF2DCADE3D4A27EDA2810572F7710DD1347C_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013c;
		}

IL_0021:
		{
			// foreach (FieldInfo m in members)
			FieldInfo_t * L_6 = Enumerator_get_Current_mC0F9187C44B0FDC5FC1F3DD48F6BFEA0BFACE68D_inline((Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC0F9187C44B0FDC5FC1F3DD48F6BFEA0BFACE68D_RuntimeMethod_var);
			V_1 = L_6;
			// var type = m.FieldType;
			FieldInfo_t * L_7 = V_1;
			NullCheck(L_7);
			Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_7);
			V_2 = L_8;
			// if (type.IsGenericType && type.GetGenericTypeDefinition() == typeof(Dictionary<,>))
			Type_t * L_9 = V_2;
			NullCheck(L_9);
			bool L_10 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_9);
			if (!L_10)
			{
				goto IL_0060;
			}
		}

IL_0038:
		{
			Type_t * L_11 = V_2;
			NullCheck(L_11);
			Type_t * L_12 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_11);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (Dictionary_2_t99E4B52AC24AAFFAD2210FF8D8301BD9DBCAD398_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_13, /*hidden argument*/NULL);
			bool L_15 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_12, L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0060;
			}
		}

IL_004f:
		{
			// attributeList = type.GetGenericArguments()[1].GetCustomAttributes(true);
			Type_t * L_16 = V_2;
			NullCheck(L_16);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_17 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_16);
			NullCheck(L_17);
			int32_t L_18 = 1;
			Type_t * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			NullCheck(L_19);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = VirtFuncInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_19, (bool)1);
			V_3 = L_20;
			// }
			goto IL_00a3;
		}

IL_0060:
		{
			// else if (type.BaseType.IsGenericType && type.BaseType.GetGenericTypeDefinition() == typeof(Dictionary<,>))
			Type_t * L_21 = V_2;
			NullCheck(L_21);
			Type_t * L_22 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Type::get_BaseType() */, L_21);
			NullCheck(L_22);
			bool L_23 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_22);
			if (!L_23)
			{
				goto IL_013c;
			}
		}

IL_0070:
		{
			Type_t * L_24 = V_2;
			NullCheck(L_24);
			Type_t * L_25 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Type::get_BaseType() */, L_24);
			NullCheck(L_25);
			Type_t * L_26 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_25);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_27 = { reinterpret_cast<intptr_t> (Dictionary_2_t99E4B52AC24AAFFAD2210FF8D8301BD9DBCAD398_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_27, /*hidden argument*/NULL);
			bool L_29 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_26, L_28, /*hidden argument*/NULL);
			if (!L_29)
			{
				goto IL_013c;
			}
		}

IL_008f:
		{
			// attributeList = type.BaseType.GetGenericArguments()[1].GetCustomAttributes(true);
			Type_t * L_30 = V_2;
			NullCheck(L_30);
			Type_t * L_31 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Type::get_BaseType() */, L_30);
			NullCheck(L_31);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_32 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_31);
			NullCheck(L_32);
			int32_t L_33 = 1;
			Type_t * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			NullCheck(L_34);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = VirtFuncInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_34, (bool)1);
			V_3 = L_35;
		}

IL_00a3:
		{
			// foreach (Attribute a in attributeList)
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = V_3;
			V_4 = L_36;
			V_5 = 0;
			goto IL_0131;
		}

IL_00ae:
		{
			// foreach (Attribute a in attributeList)
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = V_4;
			int32_t L_38 = V_5;
			NullCheck(L_37);
			int32_t L_39 = L_38;
			RuntimeObject * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
			// CMSGroup keyAttribute = a as CMSGroup;
			// if (keyAttribute != null)
			if (!((CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977 *)IsInstClass((RuntimeObject*)((Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 *)CastclassClass((RuntimeObject*)L_40, Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74_il2cpp_TypeInfo_var)), CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977_il2cpp_TypeInfo_var)))
			{
				goto IL_012b;
			}
		}

IL_00bf:
		{
			// Type memberType = m.FieldType;
			FieldInfo_t * L_41 = V_1;
			NullCheck(L_41);
			Type_t * L_42 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_41);
			V_6 = L_42;
			// if (!memberType.IsGenericType)
			Type_t * L_43 = V_6;
			NullCheck(L_43);
			bool L_44 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_43);
			if (L_44)
			{
				goto IL_00d9;
			}
		}

IL_00d0:
		{
			// memberType = memberType.BaseType;
			Type_t * L_45 = V_6;
			NullCheck(L_45);
			Type_t * L_46 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Type::get_BaseType() */, L_45);
			V_6 = L_46;
		}

IL_00d9:
		{
			// object objectDict = m.GetValue(obj);
			FieldInfo_t * L_47 = V_1;
			RuntimeObject * L_48 = ___obj0;
			NullCheck(L_47);
			RuntimeObject * L_49 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_47, L_48);
			V_7 = L_49;
			// MethodInfo method = typeof(Parsing).GetMethod("ValidateData");
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_50 = { reinterpret_cast<intptr_t> (Parsing_t56FF824D95BA6FCD5FBBB5D9D672D5DC78C6B804_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_51 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_50, /*hidden argument*/NULL);
			NullCheck(L_51);
			MethodInfo_t * L_52 = Type_GetMethod_mB8368D44E32C205D279BA3BB9E6FE1D09D45A6DE(L_51, _stringLiteral8CD0FE2A7130C13942FD423EC4042B7EBD9D18B6, /*hidden argument*/NULL);
			// MethodInfo methodGeneric = method.MakeGenericMethod(new Type[] { memberType.GetGenericArguments()[1] });
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_53 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_54 = L_53;
			Type_t * L_55 = V_6;
			NullCheck(L_55);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_56 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_55);
			NullCheck(L_56);
			int32_t L_57 = 1;
			Type_t * L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
			NullCheck(L_54);
			ArrayElementTypeCheck (L_54, L_58);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_58);
			NullCheck(L_52);
			MethodInfo_t * L_59 = VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(46 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_52, L_54);
			V_8 = L_59;
			// object[] parameters = new object[] { objectDict, validationResults };
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_60 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_61 = L_60;
			RuntimeObject * L_62 = V_7;
			NullCheck(L_61);
			ArrayElementTypeCheck (L_61, L_62);
			(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_62);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_63 = L_61;
			CMSValidationResult_t37C02D44AFD12321DA85D8B13DFBD0EA5777C788 * L_64 = ___validationResults1;
			NullCheck(L_63);
			ArrayElementTypeCheck (L_63, L_64);
			(L_63)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_64);
			V_9 = L_63;
			// methodGeneric.Invoke(null, parameters);
			MethodInfo_t * L_65 = V_8;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_66 = V_9;
			NullCheck(L_65);
			MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_65, NULL, L_66, /*hidden argument*/NULL);
		}

IL_012b:
		{
			int32_t L_67 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		}

IL_0131:
		{
			// foreach (Attribute a in attributeList)
			int32_t L_68 = V_5;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_69 = V_4;
			NullCheck(L_69);
			if ((((int32_t)L_68) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))))
			{
				goto IL_00ae;
			}
		}

IL_013c:
		{
			// foreach (FieldInfo m in members)
			bool L_70 = Enumerator_MoveNext_m7AF446110E4C3A19ECF5CECDDD9504376318881F((Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7AF446110E4C3A19ECF5CECDDD9504376318881F_RuntimeMethod_var);
			if (L_70)
			{
				goto IL_0021;
			}
		}

IL_0148:
		{
			IL2CPP_LEAVE(0x158, FINALLY_014a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_014a;
	}

FINALLY_014a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8A35CF2FC42DB1C9E906EDD3C182929EC7BB2215((Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m8A35CF2FC42DB1C9E906EDD3C182929EC7BB2215_RuntimeMethod_var);
		IL2CPP_END_FINALLY(330)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(330)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x158, IL_0158)
	}

IL_0158:
	{
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.Parsing::CrossReferenceAll(System.Object,Mediatonic.Tools.ParsingUtils.CMSReferenceCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parsing_CrossReferenceAll_mF50A104F10EF7ABA681073765C01FA0F9D4A9685 (RuntimeObject * ___obj0, CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * ___referenceCache1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_CrossReferenceAll_mF50A104F10EF7ABA681073765C01FA0F9D4A9685_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	FieldInfo_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_4 = NULL;
	int32_t V_5 = 0;
	Type_t * V_6 = NULL;
	RuntimeObject * V_7 = NULL;
	MethodInfo_t * V_8 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var members = new List<FieldInfo>();
		List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA * L_0 = (List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA *)il2cpp_codegen_object_new(List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA_il2cpp_TypeInfo_var);
		List_1__ctor_mB81EEE384AE5720F0732F47132AE29791D873838(L_0, /*hidden argument*/List_1__ctor_mB81EEE384AE5720F0732F47132AE29791D873838_RuntimeMethod_var);
		// members.AddRange(obj.GetType().GetFields());
		List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_4 = Type_GetFields_mFE461EB4CB4624DFA0621793F3F738B1057426AC(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_AddRange_m30981C1920D25249C9A970AE2B382842D8F21078(L_1, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/List_1_AddRange_m30981C1920D25249C9A970AE2B382842D8F21078_RuntimeMethod_var);
		// foreach (FieldInfo m in members)
		NullCheck(L_1);
		Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B  L_5 = List_1_GetEnumerator_mF7FFDF2DCADE3D4A27EDA2810572F7710DD1347C(L_1, /*hidden argument*/List_1_GetEnumerator_mF7FFDF2DCADE3D4A27EDA2810572F7710DD1347C_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013c;
		}

IL_0021:
		{
			// foreach (FieldInfo m in members)
			FieldInfo_t * L_6 = Enumerator_get_Current_mC0F9187C44B0FDC5FC1F3DD48F6BFEA0BFACE68D_inline((Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC0F9187C44B0FDC5FC1F3DD48F6BFEA0BFACE68D_RuntimeMethod_var);
			V_1 = L_6;
			// var type = m.FieldType;
			FieldInfo_t * L_7 = V_1;
			NullCheck(L_7);
			Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_7);
			V_2 = L_8;
			// if (type.IsGenericType && type.GetGenericTypeDefinition() == typeof(Dictionary<,>))
			Type_t * L_9 = V_2;
			NullCheck(L_9);
			bool L_10 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_9);
			if (!L_10)
			{
				goto IL_0060;
			}
		}

IL_0038:
		{
			Type_t * L_11 = V_2;
			NullCheck(L_11);
			Type_t * L_12 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_11);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (Dictionary_2_t99E4B52AC24AAFFAD2210FF8D8301BD9DBCAD398_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_13, /*hidden argument*/NULL);
			bool L_15 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_12, L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0060;
			}
		}

IL_004f:
		{
			// attributeList = type.GetGenericArguments()[1].GetCustomAttributes(true);
			Type_t * L_16 = V_2;
			NullCheck(L_16);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_17 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_16);
			NullCheck(L_17);
			int32_t L_18 = 1;
			Type_t * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			NullCheck(L_19);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = VirtFuncInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_19, (bool)1);
			V_3 = L_20;
			// }
			goto IL_00a3;
		}

IL_0060:
		{
			// else if (type.BaseType.IsGenericType && type.BaseType.GetGenericTypeDefinition() == typeof(Dictionary<,>))
			Type_t * L_21 = V_2;
			NullCheck(L_21);
			Type_t * L_22 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Type::get_BaseType() */, L_21);
			NullCheck(L_22);
			bool L_23 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_22);
			if (!L_23)
			{
				goto IL_013c;
			}
		}

IL_0070:
		{
			Type_t * L_24 = V_2;
			NullCheck(L_24);
			Type_t * L_25 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Type::get_BaseType() */, L_24);
			NullCheck(L_25);
			Type_t * L_26 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_25);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_27 = { reinterpret_cast<intptr_t> (Dictionary_2_t99E4B52AC24AAFFAD2210FF8D8301BD9DBCAD398_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_27, /*hidden argument*/NULL);
			bool L_29 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_26, L_28, /*hidden argument*/NULL);
			if (!L_29)
			{
				goto IL_013c;
			}
		}

IL_008f:
		{
			// attributeList = type.BaseType.GetGenericArguments()[1].GetCustomAttributes(true);
			Type_t * L_30 = V_2;
			NullCheck(L_30);
			Type_t * L_31 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Type::get_BaseType() */, L_30);
			NullCheck(L_31);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_32 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_31);
			NullCheck(L_32);
			int32_t L_33 = 1;
			Type_t * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			NullCheck(L_34);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = VirtFuncInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_34, (bool)1);
			V_3 = L_35;
		}

IL_00a3:
		{
			// foreach (Attribute a in attributeList)
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = V_3;
			V_4 = L_36;
			V_5 = 0;
			goto IL_0131;
		}

IL_00ae:
		{
			// foreach (Attribute a in attributeList)
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = V_4;
			int32_t L_38 = V_5;
			NullCheck(L_37);
			int32_t L_39 = L_38;
			RuntimeObject * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
			// CMSGroup keyAttribute = a as CMSGroup;
			// if (keyAttribute != null)
			if (!((CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977 *)IsInstClass((RuntimeObject*)((Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 *)CastclassClass((RuntimeObject*)L_40, Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74_il2cpp_TypeInfo_var)), CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977_il2cpp_TypeInfo_var)))
			{
				goto IL_012b;
			}
		}

IL_00bf:
		{
			// Type memberType = m.FieldType;
			FieldInfo_t * L_41 = V_1;
			NullCheck(L_41);
			Type_t * L_42 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_41);
			V_6 = L_42;
			// if (!memberType.IsGenericType)
			Type_t * L_43 = V_6;
			NullCheck(L_43);
			bool L_44 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_43);
			if (L_44)
			{
				goto IL_00d9;
			}
		}

IL_00d0:
		{
			// memberType = memberType.BaseType;
			Type_t * L_45 = V_6;
			NullCheck(L_45);
			Type_t * L_46 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Type::get_BaseType() */, L_45);
			V_6 = L_46;
		}

IL_00d9:
		{
			// object objectDict = m.GetValue(obj);
			FieldInfo_t * L_47 = V_1;
			RuntimeObject * L_48 = ___obj0;
			NullCheck(L_47);
			RuntimeObject * L_49 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_47, L_48);
			V_7 = L_49;
			// MethodInfo method = typeof(Parsing).GetMethod("CrossReference");
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_50 = { reinterpret_cast<intptr_t> (Parsing_t56FF824D95BA6FCD5FBBB5D9D672D5DC78C6B804_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_51 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_50, /*hidden argument*/NULL);
			NullCheck(L_51);
			MethodInfo_t * L_52 = Type_GetMethod_mB8368D44E32C205D279BA3BB9E6FE1D09D45A6DE(L_51, _stringLiteralE419CFB3F6C28D9777A7C4E6D730B4BD8856BE1A, /*hidden argument*/NULL);
			// MethodInfo methodGeneric = method.MakeGenericMethod(new Type[] { memberType.GetGenericArguments()[1] });
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_53 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_54 = L_53;
			Type_t * L_55 = V_6;
			NullCheck(L_55);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_56 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_55);
			NullCheck(L_56);
			int32_t L_57 = 1;
			Type_t * L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
			NullCheck(L_54);
			ArrayElementTypeCheck (L_54, L_58);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_58);
			NullCheck(L_52);
			MethodInfo_t * L_59 = VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(46 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_52, L_54);
			V_8 = L_59;
			// object[] parameters = new object[] { objectDict, referenceCache };
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_60 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_61 = L_60;
			RuntimeObject * L_62 = V_7;
			NullCheck(L_61);
			ArrayElementTypeCheck (L_61, L_62);
			(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_62);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_63 = L_61;
			CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * L_64 = ___referenceCache1;
			NullCheck(L_63);
			ArrayElementTypeCheck (L_63, L_64);
			(L_63)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_64);
			V_9 = L_63;
			// methodGeneric.Invoke(null, parameters);
			MethodInfo_t * L_65 = V_8;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_66 = V_9;
			NullCheck(L_65);
			MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_65, NULL, L_66, /*hidden argument*/NULL);
		}

IL_012b:
		{
			int32_t L_67 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		}

IL_0131:
		{
			// foreach (Attribute a in attributeList)
			int32_t L_68 = V_5;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_69 = V_4;
			NullCheck(L_69);
			if ((((int32_t)L_68) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))))
			{
				goto IL_00ae;
			}
		}

IL_013c:
		{
			// foreach (FieldInfo m in members)
			bool L_70 = Enumerator_MoveNext_m7AF446110E4C3A19ECF5CECDDD9504376318881F((Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7AF446110E4C3A19ECF5CECDDD9504376318881F_RuntimeMethod_var);
			if (L_70)
			{
				goto IL_0021;
			}
		}

IL_0148:
		{
			IL2CPP_LEAVE(0x158, FINALLY_014a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_014a;
	}

FINALLY_014a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8A35CF2FC42DB1C9E906EDD3C182929EC7BB2215((Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m8A35CF2FC42DB1C9E906EDD3C182929EC7BB2215_RuntimeMethod_var);
		IL2CPP_END_FINALLY(330)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(330)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x158, IL_0158)
	}

IL_0158:
	{
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.Parsing::ParseDictionaries(System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>,Mediatonic.Tools.ParsingUtils.CMSReferenceCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parsing_ParseDictionaries_m7CC0720674E0A8D5A1791238743EDC95DFB65ABE (RuntimeObject * ___obj0, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___data1, CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * ___referenceCache2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseDictionaries_m7CC0720674E0A8D5A1791238743EDC95DFB65ABE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	FieldInfo_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_4 = NULL;
	int32_t V_5 = 0;
	CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977 * V_6 = NULL;
	String_t* V_7 = NULL;
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_8 = NULL;
	Type_t * V_9 = NULL;
	RuntimeObject * V_10 = NULL;
	MethodInfo_t * V_11 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_12 = NULL;
	Exception_t * V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// ParsingUtils.Assert.IsNotNull(data, "Data dictionary is empty");
		RuntimeObject* L_0 = ParsingUtils_get_Assert_mC4DE7A7E217F402C4FF5ED6C0775CC4544B2A91C_inline(/*hidden argument*/NULL);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_1 = ___data1;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t* >::Invoke(IAsserts_IsNotNull_TisDictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_mEBF72FF6EDAFF77341822F8B723F774AC9932241_RuntimeMethod_var, L_0, L_1, _stringLiteral9379604B6A6C960E91B62D7AF4A51545E42F9BE7);
		// var members = new List<FieldInfo>();
		List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA * L_2 = (List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA *)il2cpp_codegen_object_new(List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA_il2cpp_TypeInfo_var);
		List_1__ctor_mB81EEE384AE5720F0732F47132AE29791D873838(L_2, /*hidden argument*/List_1__ctor_mB81EEE384AE5720F0732F47132AE29791D873838_RuntimeMethod_var);
		// members.AddRange(obj.GetType().GetFields());
		List_1_t0F52CF0559ED3BE13F054035F8208B5FDEB9D9DA * L_3 = L_2;
		RuntimeObject * L_4 = ___obj0;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_6 = Type_GetFields_mFE461EB4CB4624DFA0621793F3F738B1057426AC(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_AddRange_m30981C1920D25249C9A970AE2B382842D8F21078(L_3, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/List_1_AddRange_m30981C1920D25249C9A970AE2B382842D8F21078_RuntimeMethod_var);
		// foreach (FieldInfo m in members)
		NullCheck(L_3);
		Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B  L_7 = List_1_GetEnumerator_mF7FFDF2DCADE3D4A27EDA2810572F7710DD1347C(L_3, /*hidden argument*/List_1_GetEnumerator_mF7FFDF2DCADE3D4A27EDA2810572F7710DD1347C_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d4;
		}

IL_0031:
		{
			// foreach (FieldInfo m in members)
			FieldInfo_t * L_8 = Enumerator_get_Current_mC0F9187C44B0FDC5FC1F3DD48F6BFEA0BFACE68D_inline((Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC0F9187C44B0FDC5FC1F3DD48F6BFEA0BFACE68D_RuntimeMethod_var);
			V_1 = L_8;
			// var type = m.FieldType;
			FieldInfo_t * L_9 = V_1;
			NullCheck(L_9);
			Type_t * L_10 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_9);
			V_2 = L_10;
			// if (type.IsGenericType && type.GetGenericTypeDefinition() == typeof(Dictionary<,>))
			Type_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_11);
			if (!L_12)
			{
				goto IL_0070;
			}
		}

IL_0048:
		{
			Type_t * L_13 = V_2;
			NullCheck(L_13);
			Type_t * L_14 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_13);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_15 = { reinterpret_cast<intptr_t> (Dictionary_2_t99E4B52AC24AAFFAD2210FF8D8301BD9DBCAD398_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_16 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_15, /*hidden argument*/NULL);
			bool L_17 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_14, L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_0070;
			}
		}

IL_005f:
		{
			// attributeList = type.GetGenericArguments()[1].GetCustomAttributes(true);
			Type_t * L_18 = V_2;
			NullCheck(L_18);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_19 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_18);
			NullCheck(L_19);
			int32_t L_20 = 1;
			Type_t * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			NullCheck(L_21);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = VirtFuncInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_21, (bool)1);
			V_3 = L_22;
			// }
			goto IL_00b3;
		}

IL_0070:
		{
			// else if (type.BaseType.IsGenericType && type.BaseType.GetGenericTypeDefinition() == typeof(Dictionary<,>))
			Type_t * L_23 = V_2;
			NullCheck(L_23);
			Type_t * L_24 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Type::get_BaseType() */, L_23);
			NullCheck(L_24);
			bool L_25 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_24);
			if (!L_25)
			{
				goto IL_01d4;
			}
		}

IL_0080:
		{
			Type_t * L_26 = V_2;
			NullCheck(L_26);
			Type_t * L_27 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Type::get_BaseType() */, L_26);
			NullCheck(L_27);
			Type_t * L_28 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_27);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_29 = { reinterpret_cast<intptr_t> (Dictionary_2_t99E4B52AC24AAFFAD2210FF8D8301BD9DBCAD398_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_30 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_29, /*hidden argument*/NULL);
			bool L_31 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_28, L_30, /*hidden argument*/NULL);
			if (!L_31)
			{
				goto IL_01d4;
			}
		}

IL_009f:
		{
			// attributeList = type.BaseType.GetGenericArguments()[1].GetCustomAttributes(true);
			Type_t * L_32 = V_2;
			NullCheck(L_32);
			Type_t * L_33 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Type::get_BaseType() */, L_32);
			NullCheck(L_33);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_34 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_33);
			NullCheck(L_34);
			int32_t L_35 = 1;
			Type_t * L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
			NullCheck(L_36);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = VirtFuncInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_36, (bool)1);
			V_3 = L_37;
		}

IL_00b3:
		{
			// foreach (Attribute a in attributeList)
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = V_3;
			V_4 = L_38;
			V_5 = 0;
			goto IL_01c9;
		}

IL_00be:
		{
			// foreach (Attribute a in attributeList)
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_39 = V_4;
			int32_t L_40 = V_5;
			NullCheck(L_39);
			int32_t L_41 = L_40;
			RuntimeObject * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
			// CMSGroup groupAttribute = a as CMSGroup;
			V_6 = ((CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977 *)IsInstClass((RuntimeObject*)((Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 *)CastclassClass((RuntimeObject*)L_42, Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74_il2cpp_TypeInfo_var)), CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977_il2cpp_TypeInfo_var));
			// if (groupAttribute != null)
			CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977 * L_43 = V_6;
			if (!L_43)
			{
				goto IL_01c3;
			}
		}

IL_00d6:
		{
			// string key = groupAttribute.Key;
			CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977 * L_44 = V_6;
			NullCheck(L_44);
			String_t* L_45 = CMSGroup_get_Key_m51EC5EB710636F0D09F91E5C1B9CADAF45A52AB3_inline(L_44, /*hidden argument*/NULL);
			V_7 = L_45;
			// ParsingUtils.Assert.IsTrue(data.ContainsKey(key), "Data does not contain: " + key);
			RuntimeObject* L_46 = ParsingUtils_get_Assert_mC4DE7A7E217F402C4FF5ED6C0775CC4544B2A91C_inline(/*hidden argument*/NULL);
			Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_47 = ___data1;
			String_t* L_48 = V_7;
			NullCheck(L_47);
			bool L_49 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_47, L_48, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
			String_t* L_50 = V_7;
			String_t* L_51 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral85C5602911FB543F4D3BE79EF22F1F3A6D863E40, L_50, /*hidden argument*/NULL);
			NullCheck(L_46);
			InterfaceActionInvoker2< bool, String_t* >::Invoke(0 /* System.Void Mediatonic.Tools.ParsingUtils.IAsserts::IsTrue(System.Boolean,System.String) */, IAsserts_t8554830C6D2280109415D6700C724353A8DE68FD_il2cpp_TypeInfo_var, L_46, L_49, L_51);
			// List<object> array = (List<object>)data[key];
			Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_52 = ___data1;
			String_t* L_53 = V_7;
			NullCheck(L_52);
			RuntimeObject * L_54 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_52, L_53, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
			V_8 = ((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)CastclassClass((RuntimeObject*)L_54, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var));
			// Type memberType = m.FieldType;
			FieldInfo_t * L_55 = V_1;
			NullCheck(L_55);
			Type_t * L_56 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_55);
			V_9 = L_56;
			// if (!memberType.IsGenericType)
			Type_t * L_57 = V_9;
			NullCheck(L_57);
			bool L_58 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_57);
			if (L_58)
			{
				goto IL_0126;
			}
		}

IL_011d:
		{
			// memberType = memberType.BaseType;
			Type_t * L_59 = V_9;
			NullCheck(L_59);
			Type_t * L_60 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Type::get_BaseType() */, L_59);
			V_9 = L_60;
		}

IL_0126:
		{
			// object objectDict = Activator.CreateInstance(m.FieldType);
			FieldInfo_t * L_61 = V_1;
			NullCheck(L_61);
			Type_t * L_62 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_61);
			RuntimeObject * L_63 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_62, /*hidden argument*/NULL);
			V_10 = L_63;
			// m.SetValue(obj, objectDict);
			FieldInfo_t * L_64 = V_1;
			RuntimeObject * L_65 = ___obj0;
			RuntimeObject * L_66 = V_10;
			NullCheck(L_64);
			FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41(L_64, L_65, L_66, /*hidden argument*/NULL);
			// MethodInfo method = typeof(Parsing).GetMethod("ParseListToDictionary");
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_67 = { reinterpret_cast<intptr_t> (Parsing_t56FF824D95BA6FCD5FBBB5D9D672D5DC78C6B804_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_68 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_67, /*hidden argument*/NULL);
			NullCheck(L_68);
			MethodInfo_t * L_69 = Type_GetMethod_mB8368D44E32C205D279BA3BB9E6FE1D09D45A6DE(L_68, _stringLiteral5EBFB8FDC3CA52030A98BC331BDB942030AFCD5C, /*hidden argument*/NULL);
			// MethodInfo methodGeneric = method.MakeGenericMethod(memberType.GetGenericArguments());
			Type_t * L_70 = V_9;
			NullCheck(L_70);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_71 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_70);
			NullCheck(L_69);
			MethodInfo_t * L_72 = VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(46 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_69, L_71);
			V_11 = L_72;
			// object[] parameters = new object[] { objectDict, array, referenceCache, "id" };
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_73 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_74 = L_73;
			RuntimeObject * L_75 = V_10;
			NullCheck(L_74);
			ArrayElementTypeCheck (L_74, L_75);
			(L_74)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_75);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_76 = L_74;
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_77 = V_8;
			NullCheck(L_76);
			ArrayElementTypeCheck (L_76, L_77);
			(L_76)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_77);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_78 = L_76;
			CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * L_79 = ___referenceCache2;
			NullCheck(L_78);
			ArrayElementTypeCheck (L_78, L_79);
			(L_78)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_79);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_80 = L_78;
			NullCheck(L_80);
			ArrayElementTypeCheck (L_80, _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547);
			(L_80)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral87EA5DFC8B8E384D848979496E706390B497E547);
			V_12 = L_80;
		}

IL_017c:
		try
		{ // begin try (depth: 2)
			// methodGeneric.Invoke(null, parameters);
			MethodInfo_t * L_81 = V_11;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_82 = V_12;
			NullCheck(L_81);
			MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_81, NULL, L_82, /*hidden argument*/NULL);
			// }
			goto IL_01c3;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0189;
			throw e;
		}

CATCH_0189:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_13 = ((Exception_t *)__exception_local);
			// if (e.InnerException != null)
			Exception_t * L_83 = V_13;
			NullCheck(L_83);
			Exception_get_InnerException_mCB68CC8CBF2540EF381CB17A4E4E3F6D0E33453F_inline(L_83, /*hidden argument*/NULL);
			// throw new Exception("Error occured parsing '" + memberType + "' type!: " + e.Message);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_84 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_85 = L_84;
			NullCheck(L_85);
			ArrayElementTypeCheck (L_85, _stringLiteral63D56719EE521BF6BEEA5DA0B91AD1FF3BD1FEF8);
			(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral63D56719EE521BF6BEEA5DA0B91AD1FF3BD1FEF8);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_86 = L_85;
			Type_t * L_87 = V_9;
			NullCheck(L_86);
			ArrayElementTypeCheck (L_86, L_87);
			(L_86)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_87);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_88 = L_86;
			NullCheck(L_88);
			ArrayElementTypeCheck (L_88, _stringLiteral347EF7E1F4544544FC4F8A84DE9E20177F5294FC);
			(L_88)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral347EF7E1F4544544FC4F8A84DE9E20177F5294FC);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_89 = L_88;
			Exception_t * L_90 = V_13;
			NullCheck(L_90);
			String_t* L_91 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_90);
			NullCheck(L_89);
			ArrayElementTypeCheck (L_89, L_91);
			(L_89)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_91);
			String_t* L_92 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_89, /*hidden argument*/NULL);
			Exception_t * L_93 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_93, L_92, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_93, Parsing_ParseDictionaries_m7CC0720674E0A8D5A1791238743EDC95DFB65ABE_RuntimeMethod_var);
		} // end catch (depth: 2)

IL_01c3:
		{
			int32_t L_94 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		}

IL_01c9:
		{
			// foreach (Attribute a in attributeList)
			int32_t L_95 = V_5;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_96 = V_4;
			NullCheck(L_96);
			if ((((int32_t)L_95) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_96)->max_length)))))))
			{
				goto IL_00be;
			}
		}

IL_01d4:
		{
			// foreach (FieldInfo m in members)
			bool L_97 = Enumerator_MoveNext_m7AF446110E4C3A19ECF5CECDDD9504376318881F((Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7AF446110E4C3A19ECF5CECDDD9504376318881F_RuntimeMethod_var);
			if (L_97)
			{
				goto IL_0031;
			}
		}

IL_01e0:
		{
			IL2CPP_LEAVE(0x1F0, FINALLY_01e2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01e2;
	}

FINALLY_01e2:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8A35CF2FC42DB1C9E906EDD3C182929EC7BB2215((Enumerator_t39B8EDEC53DCCCECB9386B5CFCA6459D81FFDA7B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m8A35CF2FC42DB1C9E906EDD3C182929EC7BB2215_RuntimeMethod_var);
		IL2CPP_END_FINALLY(482)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(482)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F0, IL_01f0)
	}

IL_01f0:
	{
		// }
		return;
	}
}
// System.Object Mediatonic.Tools.ParsingUtils.Parsing::ParseByType(System.Type,System.Object,Mediatonic.Tools.ParsingUtils.CMSReferenceCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parsing_ParseByType_m439FB24ACC2AEA51AD41ADD3BFFA299C2BF7DAC6 (Type_t * ___fieldType0, RuntimeObject * ___data1, CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * ___referenceCache2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseByType_m439FB24ACC2AEA51AD41ADD3BFFA299C2BF7DAC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 16);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (data == null)
		RuntimeObject * L_0 = ___data1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0005:
	{
		// if (fieldType.GetElementType() != null) 
		Type_t * L_1 = ___fieldType0;
		NullCheck(L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(108 /* System.Type System.Type::GetElementType() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return ParseArrayNonGeneric(fieldType.GetElementType(), data, referenceCache);
		Type_t * L_4 = ___fieldType0;
		NullCheck(L_4);
		Type_t * L_5 = VirtFuncInvoker0< Type_t * >::Invoke(108 /* System.Type System.Type::GetElementType() */, L_4);
		RuntimeObject * L_6 = ___data1;
		CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * L_7 = ___referenceCache2;
		RuntimeObject * L_8 = Parsing_ParseArrayNonGeneric_m1B48E8CA51F3F84C3B1FEAFBBDDEFFD15370352F(L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0021:
	{
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			// if (fieldType == typeof(string))
			Type_t * L_9 = ___fieldType0;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_10, /*hidden argument*/NULL);
			bool L_12 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0040;
			}
		}

IL_0034:
		{
			// return ParseString(data);
			RuntimeObject * L_13 = ___data1;
			String_t* L_14 = Parsing_ParseString_m16D5BB24DD504D35CA9CF33FD05F935DBA9BB3D0(L_13, /*hidden argument*/NULL);
			V_0 = L_14;
			goto IL_0211;
		}

IL_0040:
		{
			// else if (fieldType == typeof(bool))
			Type_t * L_15 = ___fieldType0;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_16 = { reinterpret_cast<intptr_t> (Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_17 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_16, /*hidden argument*/NULL);
			bool L_18 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_15, L_17, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0063;
			}
		}

IL_0052:
		{
			// return ParseBool(data);
			RuntimeObject * L_19 = ___data1;
			bool L_20 = Parsing_ParseBool_m1927B72F161E53A16217D733621E094EB0649268(L_19, /*hidden argument*/NULL);
			bool L_21 = L_20;
			RuntimeObject * L_22 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_21);
			V_0 = L_22;
			goto IL_0211;
		}

IL_0063:
		{
			// else if (fieldType == typeof(int))
			Type_t * L_23 = ___fieldType0;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_24 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_25 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_24, /*hidden argument*/NULL);
			bool L_26 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_23, L_25, /*hidden argument*/NULL);
			if (!L_26)
			{
				goto IL_0086;
			}
		}

IL_0075:
		{
			// return ParseInt(data);
			RuntimeObject * L_27 = ___data1;
			int32_t L_28 = Parsing_ParseInt_m54B8A8DC9EA377DEDE3D297629EA8F5B9129D03F(L_27, /*hidden argument*/NULL);
			int32_t L_29 = L_28;
			RuntimeObject * L_30 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_29);
			V_0 = L_30;
			goto IL_0211;
		}

IL_0086:
		{
			// else if (fieldType == typeof(uint))
			Type_t * L_31 = ___fieldType0;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_32 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_33 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_32, /*hidden argument*/NULL);
			bool L_34 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_31, L_33, /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_00a9;
			}
		}

IL_0098:
		{
			// return ParseUint(data);
			RuntimeObject * L_35 = ___data1;
			uint32_t L_36 = Parsing_ParseUint_m736DCB798D013CE4D933BAD8B93CFCAB61E606F8(L_35, /*hidden argument*/NULL);
			uint32_t L_37 = L_36;
			RuntimeObject * L_38 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_37);
			V_0 = L_38;
			goto IL_0211;
		}

IL_00a9:
		{
			// else if (fieldType == typeof(long))
			Type_t * L_39 = ___fieldType0;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_40 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_41 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_40, /*hidden argument*/NULL);
			bool L_42 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_39, L_41, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_00cc;
			}
		}

IL_00bb:
		{
			// return ParseLong(data);
			RuntimeObject * L_43 = ___data1;
			int64_t L_44 = Parsing_ParseLong_m09AE5CF5D1B7ADDBEADFC92939F62EB9F7587481(L_43, /*hidden argument*/NULL);
			int64_t L_45 = L_44;
			RuntimeObject * L_46 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_45);
			V_0 = L_46;
			goto IL_0211;
		}

IL_00cc:
		{
			// else if (fieldType == typeof(float))
			Type_t * L_47 = ___fieldType0;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_48 = { reinterpret_cast<intptr_t> (Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_49 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_48, /*hidden argument*/NULL);
			bool L_50 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_47, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_00ef;
			}
		}

IL_00de:
		{
			// return ParseFloat(data);
			RuntimeObject * L_51 = ___data1;
			float L_52 = Parsing_ParseFloat_m9F4404F925895CBD1CCCFA69777DC67022B5D3C1(L_51, /*hidden argument*/NULL);
			float L_53 = L_52;
			RuntimeObject * L_54 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_53);
			V_0 = L_54;
			goto IL_0211;
		}

IL_00ef:
		{
			// else if (fieldType == typeof(string[]))
			Type_t * L_55 = ___fieldType0;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_56 = { reinterpret_cast<intptr_t> (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_57 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_56, /*hidden argument*/NULL);
			bool L_58 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_55, L_57, /*hidden argument*/NULL);
			if (!L_58)
			{
				goto IL_010d;
			}
		}

IL_0101:
		{
			// return ParseStringArray(data);
			RuntimeObject * L_59 = ___data1;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_60 = Parsing_ParseStringArray_mF574522B0EF69EEC37144E284E2B35401715F8AF(L_59, /*hidden argument*/NULL);
			V_0 = (RuntimeObject *)L_60;
			goto IL_0211;
		}

IL_010d:
		{
			// else if (fieldType == typeof(HashSet<string>))
			Type_t * L_61 = ___fieldType0;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_62 = { reinterpret_cast<intptr_t> (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_63 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_62, /*hidden argument*/NULL);
			bool L_64 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_61, L_63, /*hidden argument*/NULL);
			if (!L_64)
			{
				goto IL_012b;
			}
		}

IL_011f:
		{
			// return ParseStringHashSet(data);
			RuntimeObject * L_65 = ___data1;
			HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_66 = Parsing_ParseStringHashSet_mF990552D47A4C500A8EBC0030AFC46E4F9C3C0CC(L_65, /*hidden argument*/NULL);
			V_0 = L_66;
			goto IL_0211;
		}

IL_012b:
		{
			// else if (fieldType == typeof(DateTime))
			Type_t * L_67 = ___fieldType0;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_68 = { reinterpret_cast<intptr_t> (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_69 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_68, /*hidden argument*/NULL);
			bool L_70 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_67, L_69, /*hidden argument*/NULL);
			if (!L_70)
			{
				goto IL_0149;
			}
		}

IL_013d:
		{
			// return ParseDateTime(data);
			RuntimeObject * L_71 = ___data1;
			RuntimeObject * L_72 = Parsing_ParseDateTime_mF0A6B2DA87542CC0C0CDB6EFDAC6714729C0491B(L_71, /*hidden argument*/NULL);
			V_0 = L_72;
			goto IL_0211;
		}

IL_0149:
		{
			// else if (fieldType.IsEnum)
			Type_t * L_73 = ___fieldType0;
			NullCheck(L_73);
			bool L_74 = VirtFuncInvoker0< bool >::Invoke(80 /* System.Boolean System.Type::get_IsEnum() */, L_73);
			if (!L_74)
			{
				goto IL_015e;
			}
		}

IL_0151:
		{
			// return ParseEnum(fieldType, data);
			Type_t * L_75 = ___fieldType0;
			RuntimeObject * L_76 = ___data1;
			RuntimeObject * L_77 = Parsing_ParseEnum_mB8D25E878DEE05DF41F84C449B6DCB448E9922F8(L_75, L_76, /*hidden argument*/NULL);
			V_0 = L_77;
			goto IL_0211;
		}

IL_015e:
		{
			// else if (fieldType == typeof(MixedDataType))
			Type_t * L_78 = ___fieldType0;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_79 = { reinterpret_cast<intptr_t> (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_80 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_79, /*hidden argument*/NULL);
			bool L_81 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_78, L_80, /*hidden argument*/NULL);
			if (!L_81)
			{
				goto IL_017c;
			}
		}

IL_0170:
		{
			// return ParseMixedDataType(data);
			RuntimeObject * L_82 = ___data1;
			RuntimeObject * L_83 = Parsing_ParseMixedDataType_mF01A14943670A152FE71A474041DD21137FC4FA9(L_82, /*hidden argument*/NULL);
			V_0 = L_83;
			goto IL_0211;
		}

IL_017c:
		{
			// else if (typeof(CMSDataCollection).IsAssignableFrom(fieldType))
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_84 = { reinterpret_cast<intptr_t> (CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_85 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_84, /*hidden argument*/NULL);
			Type_t * L_86 = ___fieldType0;
			NullCheck(L_85);
			bool L_87 = VirtFuncInvoker1< bool, Type_t * >::Invoke(121 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_85, L_86);
			if (!L_87)
			{
				goto IL_0208;
			}
		}

IL_018e:
		{
			// MethodInfo method = typeof(Parsing).GetMethod("Parse");
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_88 = { reinterpret_cast<intptr_t> (Parsing_t56FF824D95BA6FCD5FBBB5D9D672D5DC78C6B804_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_89 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_88, /*hidden argument*/NULL);
			NullCheck(L_89);
			MethodInfo_t * L_90 = Type_GetMethod_mB8368D44E32C205D279BA3BB9E6FE1D09D45A6DE(L_89, _stringLiteralB7E45A36FF3610E06A3801FD14FA6C1E6B89312F, /*hidden argument*/NULL);
			V_1 = L_90;
			// Type[] parametersGeneric = new Type[] { fieldType };
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_91 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_92 = L_91;
			Type_t * L_93 = ___fieldType0;
			NullCheck(L_92);
			ArrayElementTypeCheck (L_92, L_93);
			(L_92)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_93);
			V_2 = L_92;
			// if (data is List<object> && ((List<object>)data).Count == 1)
			RuntimeObject * L_94 = ___data1;
			if (!((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)IsInstClass((RuntimeObject*)L_94, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var)))
			{
				goto IL_01d2;
			}
		}

IL_01b6:
		{
			RuntimeObject * L_95 = ___data1;
			NullCheck(((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)CastclassClass((RuntimeObject*)L_95, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var)));
			int32_t L_96 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline(((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)CastclassClass((RuntimeObject*)L_95, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
			if ((!(((uint32_t)L_96) == ((uint32_t)1))))
			{
				goto IL_01d2;
			}
		}

IL_01c4:
		{
			// data = ((List<object>)data)[0];
			RuntimeObject * L_97 = ___data1;
			NullCheck(((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)CastclassClass((RuntimeObject*)L_97, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var)));
			RuntimeObject * L_98 = List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_inline(((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)CastclassClass((RuntimeObject*)L_97, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var)), 0, /*hidden argument*/List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_RuntimeMethod_var);
			___data1 = L_98;
		}

IL_01d2:
		{
			// MethodInfo generic = method.MakeGenericMethod(parametersGeneric);
			MethodInfo_t * L_99 = V_1;
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_100 = V_2;
			NullCheck(L_99);
			MethodInfo_t * L_101 = VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(46 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_99, L_100);
			V_3 = L_101;
			// object[] parameters = new object[] { null, data, referenceCache, "" };
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_102 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_103 = L_102;
			RuntimeObject * L_104 = ___data1;
			NullCheck(L_103);
			ArrayElementTypeCheck (L_103, L_104);
			(L_103)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_104);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_105 = L_103;
			CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * L_106 = ___referenceCache2;
			NullCheck(L_105);
			ArrayElementTypeCheck (L_105, L_106);
			(L_105)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_106);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_107 = L_105;
			NullCheck(L_107);
			ArrayElementTypeCheck (L_107, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
			(L_107)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
			V_4 = L_107;
		}

IL_01f2:
		try
		{ // begin try (depth: 2)
			// generic.Invoke(null, parameters);
			MethodInfo_t * L_108 = V_3;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_109 = V_4;
			NullCheck(L_108);
			MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_108, NULL, L_109, /*hidden argument*/NULL);
			// }
			goto IL_0201;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_01fe;
			throw e;
		}

CATCH_01fe:
		{ // begin catch(System.ArgumentException)
			// catch (ArgumentException)
			// }
			goto IL_0201;
		} // end catch (depth: 2)

IL_0201:
		{
			// return parameters[0];
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_110 = V_4;
			NullCheck(L_110);
			int32_t L_111 = 0;
			RuntimeObject * L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
			V_0 = L_112;
			goto IL_0211;
		}

IL_0208:
		{
			// }
			goto IL_020f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_020a;
		throw e;
	}

CATCH_020a:
	{ // begin catch(System.InvalidCastException)
		// catch (InvalidCastException)
		// return null;
		V_0 = NULL;
		goto IL_0211;
	} // end catch (depth: 1)

IL_020f:
	{
		// return null;
		return NULL;
	}

IL_0211:
	{
		// }
		RuntimeObject * L_113 = V_0;
		return L_113;
	}
}
// System.Boolean Mediatonic.Tools.ParsingUtils.Parsing::ParseBool(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parsing_ParseBool_m1927B72F161E53A16217D733621E094EB0649268 (RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseBool_m1927B72F161E53A16217D733621E094EB0649268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (bool)data;
		RuntimeObject * L_0 = ___data0;
		return ((*(bool*)((bool*)UnBox(L_0, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var))));
	}
}
// System.String Mediatonic.Tools.ParsingUtils.Parsing::ParseString(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parsing_ParseString_m16D5BB24DD504D35CA9CF33FD05F935DBA9BB3D0 (RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseString_m16D5BB24DD504D35CA9CF33FD05F935DBA9BB3D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (string)data;
		RuntimeObject * L_0 = ___data0;
		return ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Int32 Mediatonic.Tools.ParsingUtils.Parsing::ParseInt(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parsing_ParseInt_m54B8A8DC9EA377DEDE3D297629EA8F5B9129D03F (RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseInt_m54B8A8DC9EA377DEDE3D297629EA8F5B9129D03F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (int)(long)data;
		RuntimeObject * L_0 = ___data0;
		return (((int32_t)((int32_t)((*(int64_t*)((int64_t*)UnBox(L_0, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))))));
	}
}
// System.UInt32 Mediatonic.Tools.ParsingUtils.Parsing::ParseUint(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Parsing_ParseUint_m736DCB798D013CE4D933BAD8B93CFCAB61E606F8 (RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseUint_m736DCB798D013CE4D933BAD8B93CFCAB61E606F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// long l = (long)data;
		RuntimeObject * L_0 = ___data0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox(L_0, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var))));
		// return l >= 0 ? (uint)l : (uint)0;
		int64_t L_1 = V_0;
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int64_t L_2 = V_0;
		return (((int32_t)((uint32_t)L_2)));
	}
}
// System.Int64 Mediatonic.Tools.ParsingUtils.Parsing::ParseLong(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Parsing_ParseLong_m09AE5CF5D1B7ADDBEADFC92939F62EB9F7587481 (RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseLong_m09AE5CF5D1B7ADDBEADFC92939F62EB9F7587481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (long)data;
		RuntimeObject * L_0 = ___data0;
		return ((*(int64_t*)((int64_t*)UnBox(L_0, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var))));
	}
}
// System.Object Mediatonic.Tools.ParsingUtils.Parsing::ParseEnum(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parsing_ParseEnum_mB8D25E878DEE05DF41F84C449B6DCB448E9922F8 (Type_t * ___fieldType0, RuntimeObject * ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseEnum_mB8D25E878DEE05DF41F84C449B6DCB448E9922F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// return (int)System.Enum.Parse(fieldType, ((string)(data)).Replace("_", ""), true);
		Type_t * L_0 = ___fieldType0;
		RuntimeObject * L_1 = ___data1;
		NullCheck(((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)));
		String_t* L_2 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), _stringLiteral53A0ACFAD59379B3E050338BF9F23CFC172EE787, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Enum_Parse_mC51A0BD680AC2D2152A541E2A8475DB61A83A6E7(L_0, L_2, (bool)1, /*hidden argument*/NULL);
		int32_t L_4 = ((*(int32_t*)((int32_t*)UnBox(L_3, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		V_0 = L_5;
		goto IL_004e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0029;
		throw e;
	}

CATCH_0029:
	{ // begin catch(System.ArgumentException)
		{
			// catch (ArgumentException)
		}

IL_002a:
		try
		{ // begin try (depth: 2)
			// return (int)System.Enum.Parse(fieldType, (string)(data), true);
			Type_t * L_6 = ___fieldType0;
			RuntimeObject * L_7 = ___data1;
			IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
			RuntimeObject * L_8 = Enum_Parse_mC51A0BD680AC2D2152A541E2A8475DB61A83A6E7(L_6, ((String_t*)CastclassSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)), (bool)1, /*hidden argument*/NULL);
			int32_t L_9 = ((*(int32_t*)((int32_t*)UnBox(L_8, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
			RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
			V_0 = L_10;
			goto IL_004e;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0044;
			throw e;
		}

CATCH_0044:
		{ // begin catch(System.Object)
			// catch
			// return 0;
			int32_t L_11 = 0;
			RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
			V_0 = L_12;
			goto IL_004e;
		} // end catch (depth: 2)
	} // end catch (depth: 1)

IL_004e:
	{
		// }
		RuntimeObject * L_13 = V_0;
		return L_13;
	}
}
// System.Object Mediatonic.Tools.ParsingUtils.Parsing::ParseMixedDataType(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parsing_ParseMixedDataType_mF01A14943670A152FE71A474041DD21137FC4FA9 (RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseMixedDataType_mF01A14943670A152FE71A474041DD21137FC4FA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (data is bool)
		RuntimeObject * L_0 = ___data0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		// bool b = ParseBool(data);
		RuntimeObject * L_1 = ___data0;
		bool L_2 = Parsing_ParseBool_m1927B72F161E53A16217D733621E094EB0649268(L_1, /*hidden argument*/NULL);
		// return new MixedDataType(b);
		MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * L_3 = (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C *)il2cpp_codegen_object_new(MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C_il2cpp_TypeInfo_var);
		MixedDataType__ctor_m21B0DE8F31F2696EBC99CA20CE74F22D0B9190B2(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0014:
	{
		// else if (data is string)
		RuntimeObject * L_4 = ___data0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		// string s = ParseString(data);
		RuntimeObject * L_5 = ___data0;
		String_t* L_6 = Parsing_ParseString_m16D5BB24DD504D35CA9CF33FD05F935DBA9BB3D0(L_5, /*hidden argument*/NULL);
		// return new MixedDataType(s);
		MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * L_7 = (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C *)il2cpp_codegen_object_new(MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C_il2cpp_TypeInfo_var);
		MixedDataType__ctor_mB8032F60C6927C7F74407E2D6EA55CCFEBC9ABC7(L_7, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0028:
	{
		// else if (data is long) 
		RuntimeObject * L_8 = ___data0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		// int i = ParseInt(data);
		RuntimeObject * L_9 = ___data0;
		int32_t L_10 = Parsing_ParseInt_m54B8A8DC9EA377DEDE3D297629EA8F5B9129D03F(L_9, /*hidden argument*/NULL);
		// return new MixedDataType(i);
		MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * L_11 = (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C *)il2cpp_codegen_object_new(MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C_il2cpp_TypeInfo_var);
		MixedDataType__ctor_m52C151B18AA25E46A8742111B6D0D1BDFA4E07B3(L_11, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_003c:
	{
		// else if (data is float)
		RuntimeObject * L_12 = ___data0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var)))
		{
			goto IL_0051;
		}
	}
	{
		// float f = (float)Convert.ToDouble(data);
		RuntimeObject * L_13 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_14 = Convert_ToDouble_mAB66BA75AC3CDFA1FEC09E3125EA444B46CD7050(L_13, /*hidden argument*/NULL);
		// return new MixedDataType(f);
		MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * L_15 = (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C *)il2cpp_codegen_object_new(MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C_il2cpp_TypeInfo_var);
		MixedDataType__ctor_mE591921D2BE7599F4815A8863612801D0F19DF53(L_15, (((float)((float)L_14))), /*hidden argument*/NULL);
		return L_15;
	}

IL_0051:
	{
		// else if (data is double)
		RuntimeObject * L_16 = ___data0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))
		{
			goto IL_0066;
		}
	}
	{
		// float f = (float)(double)data;
		RuntimeObject * L_17 = ___data0;
		// return new MixedDataType(f);
		MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * L_18 = (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C *)il2cpp_codegen_object_new(MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C_il2cpp_TypeInfo_var);
		MixedDataType__ctor_mE591921D2BE7599F4815A8863612801D0F19DF53(L_18, (((float)((float)((*(double*)((double*)UnBox(L_17, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
		return L_18;
	}

IL_0066:
	{
		// ParsingUtils.Assert.Fail(
		//     string.Format(
		//         "Failed to parse MixedDataType field, with value type: {0} and value {1}",
		//         data.GetType(),
		//         data));
		RuntimeObject* L_19 = ParsingUtils_get_Assert_mC4DE7A7E217F402C4FF5ED6C0775CC4544B2A91C_inline(/*hidden argument*/NULL);
		RuntimeObject * L_20 = ___data0;
		NullCheck(L_20);
		Type_t * L_21 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_20, /*hidden argument*/NULL);
		RuntimeObject * L_22 = ___data0;
		String_t* L_23 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralEF18543D0183CCD4064EBF22C74A64A775403C90, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Mediatonic.Tools.ParsingUtils.IAsserts::Fail(System.String) */, IAsserts_t8554830C6D2280109415D6700C724353A8DE68FD_il2cpp_TypeInfo_var, L_19, L_23);
		// return null;
		return NULL;
	}
}
// System.Object Mediatonic.Tools.ParsingUtils.Parsing::ParseArrayNonGeneric(System.Type,System.Object,Mediatonic.Tools.ParsingUtils.CMSReferenceCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parsing_ParseArrayNonGeneric_m1B48E8CA51F3F84C3B1FEAFBBDDEFFD15370352F (Type_t * ___t0, RuntimeObject * ___data1, CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * ___referenceCache2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseArrayNonGeneric_m1B48E8CA51F3F84C3B1FEAFBBDDEFFD15370352F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	int32_t V_2 = 0;
	Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// List<object> list = data as List<object>;
		RuntimeObject * L_0 = ___data1;
		V_0 = ((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)IsInstClass((RuntimeObject*)L_0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var));
		// object arr = Array.CreateInstance(t, list.Count);
		Type_t * L_1 = ___t0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline(L_2, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		RuntimeArray * L_4 = Array_CreateInstance_mE3FF1559BCD06302A7DA79FCE32232941AC38F3F(L_1, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// int n = 0;
		V_2 = 0;
		// foreach (object obj in list)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = V_0;
		NullCheck(L_5);
		Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_6 = List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D(L_5, /*hidden argument*/List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_RuntimeMethod_var);
		V_3 = L_6;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006a;
		}

IL_001f:
		{
			// foreach (object obj in list)
			RuntimeObject * L_7 = Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_3), /*hidden argument*/Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_RuntimeMethod_var);
			V_4 = L_7;
			// if (t.IsEnum)
			Type_t * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = VirtFuncInvoker0< bool >::Invoke(80 /* System.Boolean System.Type::get_IsEnum() */, L_8);
			if (!L_9)
			{
				goto IL_0051;
			}
		}

IL_0030:
		{
			// ((Array)arr).SetValue(Enum.ToObject(t, ParseByType(t, obj, referenceCache)), n++);
			RuntimeObject * L_10 = V_1;
			Type_t * L_11 = ___t0;
			Type_t * L_12 = ___t0;
			RuntimeObject * L_13 = V_4;
			CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * L_14 = ___referenceCache2;
			RuntimeObject * L_15 = Parsing_ParseByType_m439FB24ACC2AEA51AD41ADD3BFFA299C2BF7DAC6(L_12, L_13, L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
			RuntimeObject * L_16 = Enum_ToObject_mED18F2B01F4BA412C1882396CE977411BB54165D(L_11, L_15, /*hidden argument*/NULL);
			int32_t L_17 = V_2;
			int32_t L_18 = L_17;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
			NullCheck(((RuntimeArray *)CastclassClass((RuntimeObject*)L_10, RuntimeArray_il2cpp_TypeInfo_var)));
			Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA(((RuntimeArray *)CastclassClass((RuntimeObject*)L_10, RuntimeArray_il2cpp_TypeInfo_var)), L_16, L_18, /*hidden argument*/NULL);
			// }
			goto IL_006a;
		}

IL_0051:
		{
			// ((Array)arr).SetValue(ParseByType(t, obj, referenceCache), n++);
			RuntimeObject * L_19 = V_1;
			Type_t * L_20 = ___t0;
			RuntimeObject * L_21 = V_4;
			CMSReferenceCache_tCCD67686181AFBEEE378BD3644B0D899617A150B * L_22 = ___referenceCache2;
			RuntimeObject * L_23 = Parsing_ParseByType_m439FB24ACC2AEA51AD41ADD3BFFA299C2BF7DAC6(L_20, L_21, L_22, /*hidden argument*/NULL);
			int32_t L_24 = V_2;
			int32_t L_25 = L_24;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
			NullCheck(((RuntimeArray *)CastclassClass((RuntimeObject*)L_19, RuntimeArray_il2cpp_TypeInfo_var)));
			Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA(((RuntimeArray *)CastclassClass((RuntimeObject*)L_19, RuntimeArray_il2cpp_TypeInfo_var)), L_23, L_25, /*hidden argument*/NULL);
		}

IL_006a:
		{
			// foreach (object obj in list)
			bool L_26 = Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_001f;
			}
		}

IL_0073:
		{
			IL2CPP_LEAVE(0x83, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_3), /*hidden argument*/Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_RuntimeMethod_var);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
	}

IL_0083:
	{
		// return arr;
		RuntimeObject * L_27 = V_1;
		return L_27;
	}
}
// System.Single Mediatonic.Tools.ParsingUtils.Parsing::ParseFloat(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parsing_ParseFloat_m9F4404F925895CBD1CCCFA69777DC67022B5D3C1 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseFloat_m9F4404F925895CBD1CCCFA69777DC67022B5D3C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj is long)
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))
		{
			goto IL_0010;
		}
	}
	{
		// return (float)Convert.ToDouble(obj);
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_2 = Convert_ToDouble_mAB66BA75AC3CDFA1FEC09E3125EA444B46CD7050(L_1, /*hidden argument*/NULL);
		return (((float)((float)L_2)));
	}

IL_0010:
	{
		// else if (obj is string) 
		RuntimeObject * L_3 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		// return float.Parse((string)obj, System.Globalization.CultureInfo.InvariantCulture);
		RuntimeObject * L_4 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_5 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		float L_6 = Single_Parse_m341EA42F7782B136FA7335771DA3C6C96AF6BD86(((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0029:
	{
		// return (float)(double)obj;
		RuntimeObject * L_7 = ___obj0;
		return (((float)((float)((*(double*)((double*)UnBox(L_7, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))))));
	}
}
// System.Object Mediatonic.Tools.ParsingUtils.Parsing::ParseDateTime(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parsing_ParseDateTime_mF0A6B2DA87542CC0C0CDB6EFDAC6714729C0491B (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseDateTime_mF0A6B2DA87542CC0C0CDB6EFDAC6714729C0491B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (obj is string)
		RuntimeObject * L_0 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		// DateTime result = DateTime.Parse((string)obj, System.Globalization.CultureInfo.InvariantCulture);
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_2 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = DateTime_Parse_mFB11F5C0061CEAD9A2F51E3814DEBE0475F2BA37(((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), L_2, /*hidden argument*/NULL);
		// return result;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_4 = L_3;
		RuntimeObject * L_5 = Box(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}

IL_001e:
	{
		// else if (obj is Int64)
		RuntimeObject * L_6 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))
		{
			goto IL_004f;
		}
	}
	{
		// DateTime unixConversion = new DateTime(1970, 1, 1, 0, 0, 0, 0, System.DateTimeKind.Utc);
		DateTime__ctor_mEB21F0E1968B663D04B2D088DC510A91CA698B2B((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		// unixConversion = unixConversion.AddSeconds((Int64)obj);
		RuntimeObject * L_7 = ___obj0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_8 = DateTime_AddSeconds_m36DC8835432569A70AC5120359527350DD65D6B2((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), (((double)((double)((*(int64_t*)((int64_t*)UnBox(L_7, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
		V_0 = L_8;
		// return unixConversion;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_9 = V_0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_10 = L_9;
		RuntimeObject * L_11 = Box(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var, &L_10);
		return L_11;
	}

IL_004f:
	{
		// ParsingUtils.Assert.Fail(
		//     string.Format(
		//         "Failed to ParseDateTime field, with value type: {0} and value {1}",
		//         obj.GetType(),
		//         obj));
		RuntimeObject* L_12 = ParsingUtils_get_Assert_mC4DE7A7E217F402C4FF5ED6C0775CC4544B2A91C_inline(/*hidden argument*/NULL);
		RuntimeObject * L_13 = ___obj0;
		NullCheck(L_13);
		Type_t * L_14 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_13, /*hidden argument*/NULL);
		RuntimeObject * L_15 = ___obj0;
		String_t* L_16 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral114DA77D324E01066E1AD08B44BCB890E01C350D, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Mediatonic.Tools.ParsingUtils.IAsserts::Fail(System.String) */, IAsserts_t8554830C6D2280109415D6700C724353A8DE68FD_il2cpp_TypeInfo_var, L_12, L_16);
		// return null;
		return NULL;
	}
}
// System.String[] Mediatonic.Tools.ParsingUtils.Parsing::ParseStringArray(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Parsing_ParseStringArray_mF574522B0EF69EEC37144E284E2B35401715F8AF (RuntimeObject * ___objArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseStringArray_mF574522B0EF69EEC37144E284E2B35401715F8AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// List<object> list = objArray as List<object>;
		RuntimeObject * L_0 = ___objArray0;
		// string[] arr = new string[list.Count];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)IsInstClass((RuntimeObject*)L_0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var));
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline(L_1, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		// int n = 0;
		V_1 = 0;
		// foreach (object obj in list)
		NullCheck(L_1);
		Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_4 = List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D(L_1, /*hidden argument*/List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_001c:
		{
			// foreach (object obj in list)
			RuntimeObject * L_5 = Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_2), /*hidden argument*/Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_RuntimeMethod_var);
			V_3 = L_5;
			// arr[n++] = (string)obj;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			RuntimeObject * L_9 = V_3;
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, ((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)));
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (String_t*)((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)));
		}

IL_0031:
		{
			// foreach (object obj in list)
			bool L_10 = Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_001c;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_2), /*hidden argument*/Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_RuntimeMethod_var);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		// return arr;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = V_0;
		return L_11;
	}
}
// System.Collections.Generic.HashSet`1<System.String> Mediatonic.Tools.ParsingUtils.Parsing::ParseStringHashSet(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * Parsing_ParseStringHashSet_mF990552D47A4C500A8EBC0030AFC46E4F9C3C0CC (RuntimeObject * ___objArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parsing_ParseStringHashSet_mF990552D47A4C500A8EBC0030AFC46E4F9C3C0CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * V_0 = NULL;
	Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// List<object> list = objArray as List<object>;
		RuntimeObject * L_0 = ___objArray0;
		// var hashSet = new HashSet<string>();
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_1 = (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A *)il2cpp_codegen_object_new(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mD07425BBACDADAC32A4B42FDE00C5DAAEC59880D(L_1, /*hidden argument*/HashSet_1__ctor_mD07425BBACDADAC32A4B42FDE00C5DAAEC59880D_RuntimeMethod_var);
		V_0 = L_1;
		// foreach (object obj in list)
		NullCheck(((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)IsInstClass((RuntimeObject*)L_0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var)));
		Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_2 = List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D(((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)IsInstClass((RuntimeObject*)L_0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0014:
		{
			// foreach (object obj in list)
			RuntimeObject * L_3 = Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_1), /*hidden argument*/Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_RuntimeMethod_var);
			V_2 = L_3;
			// hashSet.Add((string)obj);
			HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_4 = V_0;
			RuntimeObject * L_5 = V_2;
			NullCheck(L_4);
			HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1(L_4, ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1_RuntimeMethod_var);
		}

IL_0029:
		{
			// foreach (object obj in list)
			bool L_6 = Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0014;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x42, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_1), /*hidden argument*/Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_RuntimeMethod_var);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		// return hashSet;
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_7 = V_0;
		return L_7;
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
// System.String Mediatonic.Tools.ParsingUtils.ParsingExtensions::GetCmsReferenceId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsingExtensions_GetCmsReferenceId_mE5A0EB6FC4A4F45C819170A0D6F9793EDED02EE8 (String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingExtensions_GetCmsReferenceId_mE5A0EB6FC4A4F45C819170A0D6F9793EDED02EE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s.Substring(s.IndexOf(".") + 1);
		String_t* L_0 = ___s0;
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B(L_1, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_3 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), /*hidden argument*/NULL);
		return L_3;
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
// System.Void Mediatonic.Tools.ParsingUtils.ParsingUtils::set_IsInitialised(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingUtils_set_IsInitialised_m4443087785B4B806353B65DDCCDDB2D573A67BEA (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_set_IsInitialised_m4443087785B4B806353B65DDCCDDB2D573A67BEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsInitialised { private set; get; }
		bool L_0 = ___value0;
		((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->set_U3CIsInitialisedU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean Mediatonic.Tools.ParsingUtils.ParsingUtils::get_IsInitialised()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParsingUtils_get_IsInitialised_mD3FA9F0CED462A9D29418F2742A52DB769D9D75A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_get_IsInitialised_mD3FA9F0CED462A9D29418F2742A52DB769D9D75A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsInitialised { private set; get; }
		bool L_0 = ((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->get_U3CIsInitialisedU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.ParsingUtils::set_Logger(Mediatonic.Tools.ParsingUtils.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingUtils_set_Logger_mB97D826AAD42F55F43F57B22000C5AC45BA09848 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_set_Logger_mB97D826AAD42F55F43F57B22000C5AC45BA09848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ILogger Logger { private set; get; }
		RuntimeObject* L_0 = ___value0;
		((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->set_U3CLoggerU3Ek__BackingField_1(L_0);
		return;
	}
}
// Mediatonic.Tools.ParsingUtils.ILogger Mediatonic.Tools.ParsingUtils.ParsingUtils::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParsingUtils_get_Logger_m2171ACBF8F93020B7E53AFB40915523D78E65377 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_get_Logger_m2171ACBF8F93020B7E53AFB40915523D78E65377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ILogger Logger { private set; get; }
		RuntimeObject* L_0 = ((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->get_U3CLoggerU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.ParsingUtils::set_Assert(Mediatonic.Tools.ParsingUtils.IAsserts)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingUtils_set_Assert_m68FE24D5EE0BEE45094CF88B1AA2D248E6FA4BF3 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_set_Assert_m68FE24D5EE0BEE45094CF88B1AA2D248E6FA4BF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IAsserts Assert { private set; get; }
		RuntimeObject* L_0 = ___value0;
		((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->set_U3CAssertU3Ek__BackingField_2(L_0);
		return;
	}
}
// Mediatonic.Tools.ParsingUtils.IAsserts Mediatonic.Tools.ParsingUtils.ParsingUtils::get_Assert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParsingUtils_get_Assert_mC4DE7A7E217F402C4FF5ED6C0775CC4544B2A91C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_get_Assert_mC4DE7A7E217F402C4FF5ED6C0775CC4544B2A91C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IAsserts Assert { private set; get; }
		RuntimeObject* L_0 = ((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->get_U3CAssertU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.ParsingUtils::set_PauseDelegate(Mediatonic.Tools.ParsingUtils.ParsingUtils_PauseApplicationDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingUtils_set_PauseDelegate_m3BE2D414EB50C3EC15266731ADEF8430C0504025 (PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_set_PauseDelegate_m3BE2D414EB50C3EC15266731ADEF8430C0504025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PauseApplicationDelegate PauseDelegate { private set; get; }
		PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * L_0 = ___value0;
		((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->set_U3CPauseDelegateU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.ParsingUtils::Init(Mediatonic.Tools.ParsingUtils.ILogger,Mediatonic.Tools.ParsingUtils.IAsserts,Mediatonic.Tools.ParsingUtils.ParsingUtils_PauseApplicationDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingUtils_Init_mE668038B08A706C7F778C0D69662F3A9C8CC7D56 (RuntimeObject* ___logger0, RuntimeObject* ___assert1, PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * ___pauseApplicationDelegate2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_Init_mE668038B08A706C7F778C0D69662F3A9C8CC7D56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsInitialised)
		bool L_0 = ParsingUtils_get_IsInitialised_mD3FA9F0CED462A9D29418F2742A52DB769D9D75A_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// Logger.Warning("ParsingUtils is already initialised");
		RuntimeObject* L_1 = ParsingUtils_get_Logger_m2171ACBF8F93020B7E53AFB40915523D78E65377_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(0 /* System.Void Mediatonic.Tools.ParsingUtils.ILogger::Warning(System.Object) */, ILogger_tB04B245B7CFE8BBC9E1526F73B16AADEF30563B9_il2cpp_TypeInfo_var, L_1, _stringLiteralD1F4DA1AA45851629A289946FA5946BD311900F2);
		// return;
		return;
	}

IL_0017:
	{
		// Logger = logger;
		RuntimeObject* L_2 = ___logger0;
		ParsingUtils_set_Logger_mB97D826AAD42F55F43F57B22000C5AC45BA09848_inline(L_2, /*hidden argument*/NULL);
		// Assert = assert;
		RuntimeObject* L_3 = ___assert1;
		ParsingUtils_set_Assert_m68FE24D5EE0BEE45094CF88B1AA2D248E6FA4BF3_inline(L_3, /*hidden argument*/NULL);
		// PauseDelegate = pauseApplicationDelegate;
		PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * L_4 = ___pauseApplicationDelegate2;
		ParsingUtils_set_PauseDelegate_m3BE2D414EB50C3EC15266731ADEF8430C0504025_inline(L_4, /*hidden argument*/NULL);
		// IsInitialised = true;
		ParsingUtils_set_IsInitialised_m4443087785B4B806353B65DDCCDDB2D573A67BEA_inline((bool)1, /*hidden argument*/NULL);
		// }
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD (PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Mediatonic.Tools.ParsingUtils.ParsingUtils_PauseApplicationDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseApplicationDelegate__ctor_m65E20E020465520D2B10EBB0A1D2C503A3AC2AB9 (PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mediatonic.Tools.ParsingUtils.ParsingUtils_PauseApplicationDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseApplicationDelegate_Invoke_m4CE2253BDA13A489E214D92A48EA94B12B93806E (PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * __this, const RuntimeMethod* method)
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
// System.IAsyncResult Mediatonic.Tools.ParsingUtils.ParsingUtils_PauseApplicationDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PauseApplicationDelegate_BeginInvoke_m560E0EE88C619846EFA9C1275CE7D76B52EDF1E1 (PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Mediatonic.Tools.ParsingUtils.ParsingUtils_PauseApplicationDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseApplicationDelegate_EndInvoke_m762D62DB8F32B99330B6CC48EBC205656DB44CA6 (PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsAssert::IsTrue(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity3dParsingUtilsAssert_IsTrue_m5E85A908B40794E9FEF74832D0BCCA0338931867 (Unity3dParsingUtilsAssert_tDF658AEDF2DF97412D3D3326048E1A2A9B6DBAE2 * __this, bool ___condition0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsAssert::Fail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity3dParsingUtilsAssert_Fail_m7466B6986D483553F7B63ABCBF4786388122ACEB (Unity3dParsingUtilsAssert_tDF658AEDF2DF97412D3D3326048E1A2A9B6DBAE2 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsAssert::IsNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity3dParsingUtilsAssert_IsNotNull_mEDFF386756FC2E955B88B511F53E9973F878F975 (Unity3dParsingUtilsAssert_tDF658AEDF2DF97412D3D3326048E1A2A9B6DBAE2 * __this, RuntimeObject * ___value0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsAssert::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity3dParsingUtilsAssert__ctor_mCF6786598E0BF66867A8C5D046A466D08C2008C4 (Unity3dParsingUtilsAssert_tDF658AEDF2DF97412D3D3326048E1A2A9B6DBAE2 * __this, const RuntimeMethod* method)
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
// System.Void Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsLogger::Warning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity3dParsingUtilsLogger_Warning_m1BC45E41C11E519312F8CBD0BACB0DAC232B94E0 (Unity3dParsingUtilsLogger_tE07FF6F7770935AF14DB59F33F5234F459185F6A * __this, RuntimeObject * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Unity3dParsingUtilsLogger_Warning_m1BC45E41C11E519312F8CBD0BACB0DAC232B94E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogWarning(message);
		RuntimeObject * L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsLogger::ErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity3dParsingUtilsLogger_ErrorFormat_mBAE283E2221F3E1F6B2D0B1B330F4E5FBC684F88 (Unity3dParsingUtilsLogger_tE07FF6F7770935AF14DB59F33F5234F459185F6A * __this, String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Unity3dParsingUtilsLogger_ErrorFormat_mBAE283E2221F3E1F6B2D0B1B330F4E5FBC684F88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogErrorFormat(format, args);
		String_t* L_0 = ___format0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity3dParsingUtilsLogger__ctor_mD298F2147B5E18D862DF67943385056645177F0A (Unity3dParsingUtilsLogger_tE07FF6F7770935AF14DB59F33F5234F459185F6A * __this, const RuntimeMethod* method)
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
// System.Void Mediatonic.Tools.ParsingUtils.Unity3dParsingUtilsPauseer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity3dParsingUtilsPauseer_Pause_m6E656E2C7132CA5EB1DBCF8B6265727A0FA2CFC0 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CMSDataCollection_set_FieldInfo_m4D4876D3CA39B30135FEC58BEC398DF6A523DB04_inline (CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3 * __this, FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_0 = ___value0;
		__this->set_U3CFieldInfoU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CMSDataCollection_set_PropertyInfo_mC7758464511EE3F1CC408ACEB07312DF8CF25D18_inline (CMSDataCollection_tC8EC50DB6879AAEC73C9300FA35896A80264A3F3 * __this, PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_0 = ___value0;
		__this->set_U3CPropertyInfoU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedDataType_set_BoolValue_mDC070824D2353CA6E74588FE690A40557EEEEC2B_inline (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BoolValue { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CBoolValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedDataType_set_StringValue_m99C8B830602946698FB989BE649F258884EF734E_inline (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string StringValue { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CStringValueU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedDataType_set_IntValue_m0C48AF9B2AE5ED3255F75BF03578521F155117E6_inline (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int IntValue { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIntValueU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedDataType_get_IntValue_m57856CE1A5D371430201A5E38322EA56367674E0_inline (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, const RuntimeMethod* method)
{
	{
		// public int IntValue { get; private set; }
		int32_t L_0 = __this->get_U3CIntValueU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedDataType_set_FloatValue_mF64AE9046423B0AA7ABC89F98E85EEF7540AA7B3_inline (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FloatValue { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CFloatValueU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedDataType_get_FloatValue_m3E9C3E9EFEAC875A01B0B02B700CF3BC538E4EF5_inline (MixedDataType_tFDB53CBA81FA7991E44F030B0187A812331C411C * __this, const RuntimeMethod* method)
{
	{
		// public float FloatValue { get; private set; }
		float L_0 = __this->get_U3CFloatValueU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ParsingUtils_get_Assert_mC4DE7A7E217F402C4FF5ED6C0775CC4544B2A91C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_get_Assert_mC4DE7A7E217F402C4FF5ED6C0775CC4544B2A91CParsingUtils_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IAsserts Assert { private set; get; }
		RuntimeObject* L_0 = ((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->get_U3CAssertU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* CMSGroup_get_Key_m51EC5EB710636F0D09F91E5C1B9CADAF45A52AB3_inline (CMSGroup_t85EABB70519383D08F2CA3D38C5F7440C324C977 * __this, const RuntimeMethod* method)
{
	{
		// return _key;
		String_t* L_0 = __this->get__key_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_mCB68CC8CBF2540EF381CB17A4E4E3F6D0E33453F_inline (Exception_t * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get__innerException_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ParsingUtils_get_IsInitialised_mD3FA9F0CED462A9D29418F2742A52DB769D9D75A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_get_IsInitialised_mD3FA9F0CED462A9D29418F2742A52DB769D9D75AParsingUtils_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsInitialised { private set; get; }
		bool L_0 = ((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->get_U3CIsInitialisedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ParsingUtils_get_Logger_m2171ACBF8F93020B7E53AFB40915523D78E65377_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_get_Logger_m2171ACBF8F93020B7E53AFB40915523D78E65377ParsingUtils_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ILogger Logger { private set; get; }
		RuntimeObject* L_0 = ((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->get_U3CLoggerU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ParsingUtils_set_Logger_mB97D826AAD42F55F43F57B22000C5AC45BA09848_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_set_Logger_mB97D826AAD42F55F43F57B22000C5AC45BA09848ParsingUtils_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ILogger Logger { private set; get; }
		RuntimeObject* L_0 = ___value0;
		((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->set_U3CLoggerU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ParsingUtils_set_Assert_m68FE24D5EE0BEE45094CF88B1AA2D248E6FA4BF3_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_set_Assert_m68FE24D5EE0BEE45094CF88B1AA2D248E6FA4BF3ParsingUtils_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IAsserts Assert { private set; get; }
		RuntimeObject* L_0 = ___value0;
		((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->set_U3CAssertU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ParsingUtils_set_PauseDelegate_m3BE2D414EB50C3EC15266731ADEF8430C0504025_inline (PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_set_PauseDelegate_m3BE2D414EB50C3EC15266731ADEF8430C0504025ParsingUtils_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PauseApplicationDelegate PauseDelegate { private set; get; }
		PauseApplicationDelegate_t9DD0C6D1A42EA7CCC63ECDFF7E6D3C5ED91B78BD * L_0 = ___value0;
		((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->set_U3CPauseDelegateU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ParsingUtils_set_IsInitialised_m4443087785B4B806353B65DDCCDDB2D573A67BEA_inline (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingUtils_set_IsInitialised_m4443087785B4B806353B65DDCCDDB2D573A67BEAParsingUtils_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsInitialised { private set; get; }
		bool L_0 = ___value0;
		((ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_StaticFields*)il2cpp_codegen_static_fields_for(ParsingUtils_t5FBC67718BA63C6A2AC7334E2642F76F55131A5D_il2cpp_TypeInfo_var))->set_U3CIsInitialisedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
