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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// MiniJSON.Json/Parser
struct Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B;
// MiniJSON.Json/Serializer
struct Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IList
struct IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
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
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.StringReader
struct StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12;
// System.IO.TextReader
struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C;
IL2CPP_EXTERN_C String_t* _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5;
IL2CPP_EXTERN_C String_t* _stringLiteral21AE27F947EF77236FD5E0029FDFE3E0913B464B;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
IL2CPP_EXTERN_C String_t* _stringLiteral2BFBE0BC53277529025720589E902C25BF01F2F4;
IL2CPP_EXTERN_C String_t* _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5;
IL2CPP_EXTERN_C String_t* _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB;
IL2CPP_EXTERN_C String_t* _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7;
IL2CPP_EXTERN_C String_t* _stringLiteral9E94758983980504AF303EF297FD2BF9D9CEA063;
IL2CPP_EXTERN_C String_t* _stringLiteralAB006BB8AACDF6E68299BC1DFFCCC9BCC8AC3EAF;
IL2CPP_EXTERN_C String_t* _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8;
IL2CPP_EXTERN_C String_t* _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Parser_EatWhitespace_mDCA2A8231769E8A7AD23E698B0CD2E4753C00805_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_IsWordBreak_mF146B2B6B113BC21D0A8BB5748AC432CB820C077_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseArray_m3A20BA4E468B08468CDAA88BD0C619E30E185F84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseByToken_m4413192F6E8740D096EAA3DE1D5E0CBB847DE111_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseNumber_m8BEF139429F891F3B31335333E338793BF6AD0D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseObject_m0D73F32AD418F1AFC9CAE48F633302AA2EF192DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseString_m1A1D5EF8309D5D344A5FF4E7A5EBBA23763EC0B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_Parse_mCE36D38CE3D122EC9CA9E576AF0C31DF52B6940A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser__ctor_m423B1535BE99DF11639642C08D6DC4315F908C22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextChar_m122227E2FF4DFCED43AD27F53E5478F138D971DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextToken_m0F399F0DB84B11D76D8F4450F6F26192A98FB085_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_PeekChar_mA8AC20F847527FAF5E2A3A538A241C7694DD1C3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeArray_m0091F8B0962C7AA38FBCB64758A489D9F9CA83A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeObject_m6B92006D563FC19575E83063DA0C629846E143E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeOther_m99B6CB1E99EA0703FD927BAEA828C289AFEF6241_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeString_mD522C12207E8DE0CFEF5951552CA7DD52562D4DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeValue_m7D5AF33A458F1DE09DAD6868B529F521A0A346B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_Serialize_mB94C1D0F7F34CFAFA665670B5E6A0EC6B482CD0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer__ctor_m81A8C122EE1F43BED3E250A93FE15EB885C8B32D_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tBBD89D60C2FC379D6085A0ED19A434728A20392C 
{
public:

public:
};


// System.Object


// MiniJSON.Json
struct  Json_tF717BE754758E43B05CC7AB2E5FF1CB60783751D  : public RuntimeObject
{
public:

public:
};


// MiniJSON.Json_Parser
struct  Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B  : public RuntimeObject
{
public:
	// System.IO.StringReader MiniJSON.Json_Parser::json
	StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * ___json_0;
	// System.Text.StringBuilder MiniJSON.Json_Parser::stringBuilder
	StringBuilder_t * ___stringBuilder_1;

public:
	inline static int32_t get_offset_of_json_0() { return static_cast<int32_t>(offsetof(Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B, ___json_0)); }
	inline StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * get_json_0() const { return ___json_0; }
	inline StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 ** get_address_of_json_0() { return &___json_0; }
	inline void set_json_0(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * value)
	{
		___json_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_0), (void*)value);
	}

	inline static int32_t get_offset_of_stringBuilder_1() { return static_cast<int32_t>(offsetof(Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B, ___stringBuilder_1)); }
	inline StringBuilder_t * get_stringBuilder_1() const { return ___stringBuilder_1; }
	inline StringBuilder_t ** get_address_of_stringBuilder_1() { return &___stringBuilder_1; }
	inline void set_stringBuilder_1(StringBuilder_t * value)
	{
		___stringBuilder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringBuilder_1), (void*)value);
	}
};


// MiniJSON.Json_Serializer
struct  Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F  : public RuntimeObject
{
public:
	// System.Text.StringBuilder MiniJSON.Json_Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
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

// System.IO.TextReader
struct  TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ___Null_3)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_Null_3() const { return ___Null_3; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// MiniJSON.Json_Parser_TOKEN
struct  TOKEN_tAB3FCEAEF30EBEDF233C5116B3B9EE07898EC13A 
{
public:
	// System.Int32 MiniJSON.Json_Parser_TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_tAB3FCEAEF30EBEDF233C5116B3B9EE07898EC13A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct  NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StringReader
struct  StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12  : public TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Object MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_mCE36D38CE3D122EC9CA9E576AF0C31DF52B6940A (String_t* ___jsonString0, const RuntimeMethod* method);
// System.String MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mB94C1D0F7F34CFAFA665670B5E6A0EC6B482CD0D (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_mA55383C19EFBC075E762145D88F15A2B8B0CDA17 (StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m423B1535BE99DF11639642C08D6DC4315F908C22 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m97E4194DEEA18964D895FD2D89EB3E214F710473 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_m9DA31CD42D5E73A1452F4EEC014C5703B5872930 (TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// MiniJSON.Json/Parser/TOKEN MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m0F399F0DB84B11D76D8F4450F6F26192A98FB085 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method);
// System.String MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m1A1D5EF8309D5D344A5FF4E7A5EBBA23763EC0B4 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Object MiniJSON.Json/Parser::ParseByToken(MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m4413192F6E8740D096EAA3DE1D5E0CBB847DE111 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Object MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m8BEF139429F891F3B31335333E338793BF6AD0D3 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * Parser_ParseObject_m0D73F32AD418F1AFC9CAE48F633302AA2EF192DB (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Parser_ParseArray_m3A20BA4E468B08468CDAA88BD0C619E30E185F84 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Char MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m122227E2FF4DFCED43AD27F53E5478F138D971DD (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8DC81C7C49EE4A9334E71E45E3A220644E45B4F4 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.String MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m47ACC6789FF4B70A4BC9EEAFD4F0DC2320A100CB (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m8CE5F89833C03A091273A4EF48C69E86E1F81ACC (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m1A7BCBA90DE896E448E3CA09AAD1CA43846567D7 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method);
// System.Char MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mA8AC20F847527FAF5E2A3A538A241C7694DD1C3A (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245 (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean MiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mF146B2B6B113BC21D0A8BB5748AC432CB820C077 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mDCA2A8231769E8A7AD23E698B0CD2E4753C00805 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m81A8C122EE1F43BED3E250A93FE15EB885C8B32D (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * __this, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m7D5AF33A458F1DE09DAD6868B529F521A0A346B5 (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mD522C12207E8DE0CFEF5951552CA7DD52562D4DA (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m0091F8B0962C7AA38FBCB64758A489D9F9CA83A4 (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m6B92006D563FC19575E83063DA0C629846E143E1 (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m0E7BBCE09E386877E2B63BF7FA36B956BF221C93 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m99B6CB1E99EA0703FD927BAEA828C289AFEF6241 (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* String_ToCharArray_mFCFF32A5EC698E81075E0C72C874282B9ED197A6 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8BE65713C8D5E0AD45D53B82A5A7BD187BEBA917 (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE527694B0C55AE14FDCBE1D9C848446C18E22C09 (int32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756 (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65 (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mAB66BA75AC3CDFA1FEC09E3125EA444B46CD7050 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m1D341E667E85E9E18783A14CB02982643E96C616 (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
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
// System.Object MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m450B6AFD494DABA802C9E597CF4B645F94F8F19C (String_t* ___json0, const RuntimeMethod* method)
{
	{
		// if (json == null) {
		String_t* L_0 = ___json0;
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
		// return Parser.Parse(json);
		String_t* L_1 = ___json0;
		RuntimeObject * L_2 = Parser_Parse_mCE36D38CE3D122EC9CA9E576AF0C31DF52B6940A(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m404871727EA36C84CD5D7B8B54E82B7B1D21F2D4 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// return Serializer.Serialize(obj);
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1 = Serializer_Serialize_mB94C1D0F7F34CFAFA665670B5E6A0EC6B482CD0D(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Boolean MiniJSON.Json_Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mF146B2B6B113BC21D0A8BB5748AC432CB820C077 (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_IsWordBreak_mF146B2B6B113BC21D0A8BB5748AC432CB820C077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Char.IsWhiteSpace(c) || WORD_BREAK.IndexOf(c) != -1;
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral21AE27F947EF77236FD5E0029FDFE3E0913B464B);
		int32_t L_3 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(_stringLiteral21AE27F947EF77236FD5E0029FDFE3E0913B464B, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Void MiniJSON.Json_Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m423B1535BE99DF11639642C08D6DC4315F908C22 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__ctor_m423B1535BE99DF11639642C08D6DC4315F908C22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Parser(string jsonString) {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// json = new StringReader(jsonString);
		String_t* L_0 = ___jsonString0;
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = (StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 *)il2cpp_codegen_object_new(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_il2cpp_TypeInfo_var);
		StringReader__ctor_mA55383C19EFBC075E762145D88F15A2B8B0CDA17(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_0(L_1);
		// stringBuilder = new StringBuilder(32);
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_2, ((int32_t)32), /*hidden argument*/NULL);
		__this->set_stringBuilder_1(L_2);
		// }
		return;
	}
}
// System.Object MiniJSON.Json_Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_mCE36D38CE3D122EC9CA9E576AF0C31DF52B6940A (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Parse_mCE36D38CE3D122EC9CA9E576AF0C31DF52B6940A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var instance = new Parser(jsonString)) {
		String_t* L_0 = ___jsonString0;
		Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * L_1 = (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B *)il2cpp_codegen_object_new(Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B_il2cpp_TypeInfo_var);
		Parser__ctor_m423B1535BE99DF11639642C08D6DC4315F908C22(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// return instance.ParseValue();
		Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = Parser_ParseValue_m97E4194DEEA18964D895FD2D89EB3E214F710473(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1A, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		{
			Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0019;
			}
		}

IL_0013:
		{
			Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_5);
		}

IL_0019:
		{
			IL2CPP_END_FINALLY(16)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		// }
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void MiniJSON.Json_Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_m044ACDA74C8E4295C5EF03A76CC60A39B1919011 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method)
{
	{
		// json.Dispose();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		TextReader_Dispose_m9DA31CD42D5E73A1452F4EEC014C5703B5872930(L_0, /*hidden argument*/NULL);
		// json = null;
		__this->set_json_0((StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 *)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json_Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * Parser_ParseObject_m0D73F32AD418F1AFC9CAE48F633302AA2EF192DB (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseObject_m0D73F32AD418F1AFC9CAE48F633302AA2EF192DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// Dictionary<string, object> table = new Dictionary<string, object>();
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken) {
		int32_t L_2 = Parser_get_NextToken_m0F399F0DB84B11D76D8F4450F6F26192A98FB085(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_6 = V_0;
		return L_6;
	}

IL_002a:
	{
		// string name = ParseString();
		String_t* L_7 = Parser_ParseString_m1A1D5EF8309D5D344A5FF4E7A5EBBA23763EC0B4(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		// if (name == null) {
		String_t* L_8 = V_2;
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return null;
		return (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)NULL;
	}

IL_0036:
	{
		// if (NextToken != TOKEN.COLON) {
		int32_t L_9 = Parser_get_NextToken_m0F399F0DB84B11D76D8F4450F6F26192A98FB085(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		// return null;
		return (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)NULL;
	}

IL_0041:
	{
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_10 = __this->get_json_0();
		NullCheck(L_10);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_10);
		// table[name] = ParseValue();
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_11 = V_0;
		String_t* L_12 = V_2;
		RuntimeObject * L_13 = Parser_ParseValue_m97E4194DEEA18964D895FD2D89EB3E214F710473(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json_Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Parser_ParseArray_m3A20BA4E468B08468CDAA88BD0C619E30E185F84 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseArray_m3A20BA4E468B08468CDAA88BD0C619E30E185F84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		// List<object> array = new List<object>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var);
		List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3(L_0, /*hidden argument*/List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_2 = Parser_get_NextToken_m0F399F0DB84B11D76D8F4450F6F26192A98FB085(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		// switch (nextToken) {
		int32_t L_3 = V_2;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken(nextToken);
		int32_t L_6 = V_2;
		RuntimeObject * L_7 = Parser_ParseByToken_m4413192F6E8740D096EAA3DE1D5E0CBB847DE111(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// array.Add(value);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		NullCheck(L_8);
		List_1_Add_m6930161974C7504C80F52EC379EF012387D43138(L_8, L_9, /*hidden argument*/List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing) {
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = V_0;
		return L_11;
	}
}
// System.Object MiniJSON.Json_Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m97E4194DEEA18964D895FD2D89EB3E214F710473 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0 = Parser_get_NextToken_m0F399F0DB84B11D76D8F4450F6F26192A98FB085(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// return ParseByToken(nextToken);
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = Parser_ParseByToken_m4413192F6E8740D096EAA3DE1D5E0CBB847DE111(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object MiniJSON.Json_Parser::ParseByToken(MiniJSON.Json_Parser_TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m4413192F6E8740D096EAA3DE1D5E0CBB847DE111 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseByToken_m4413192F6E8740D096EAA3DE1D5E0CBB847DE111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (token) {
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString();
		String_t* L_1 = Parser_ParseString_m1A1D5EF8309D5D344A5FF4E7A5EBBA23763EC0B4(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber();
		RuntimeObject * L_2 = Parser_ParseNumber_m8BEF139429F891F3B31335333E338793BF6AD0D3(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject();
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_3 = Parser_ParseObject_m0D73F32AD418F1AFC9CAE48F633302AA2EF192DB(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = Parser_ParseArray_m3A20BA4E468B08468CDAA88BD0C619E30E185F84(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject * L_6 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject * L_8 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String MiniJSON.Json_Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m1A1D5EF8309D5D344A5FF4E7A5EBBA23763EC0B4 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseString_m1A1D5EF8309D5D344A5FF4E7A5EBBA23763EC0B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = stringBuilder;
		StringBuilder_t * L_0 = __this->get_stringBuilder_1();
		V_0 = L_0;
		// s.Length = 0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_1, 0, /*hidden argument*/NULL);
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_2 = __this->get_json_0();
		NullCheck(L_2);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_2);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_013f;
	}

IL_0021:
	{
		// if (json.Peek() == -1) {
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_3 = __this->get_json_0();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0036;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0145;
	}

IL_0036:
	{
		// c = NextChar;
		Il2CppChar L_5 = Parser_get_NextChar_m122227E2FF4DFCED43AD27F53E5478F138D971DD(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		// switch (c) {
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0137;
	}

IL_004c:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013f;
	}

IL_0053:
	{
		// if (json.Peek() == -1) {
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_8 = __this->get_json_0();
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0068;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013f;
	}

IL_0068:
	{
		// c = NextChar;
		Il2CppChar L_10 = Parser_get_NextChar_m122227E2FF4DFCED43AD27F53E5478F138D971DD(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		// switch (c) {
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0088;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_00bf;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)47))))
		{
			goto IL_00bf;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)92))))
		{
			goto IL_00bf;
		}
	}
	{
		goto IL_013f;
	}

IL_0088:
	{
		Il2CppChar L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_009c;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c9;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_013f;
	}

IL_009c:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_00de;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e9;
			}
			case 1:
			{
				goto IL_013f;
			}
			case 2:
			{
				goto IL_00f4;
			}
			case 3:
			{
				goto IL_00ff;
			}
		}
	}
	{
		goto IL_013f;
	}

IL_00bf:
	{
		// s.Append(c);
		StringBuilder_t * L_20 = V_0;
		Il2CppChar L_21 = V_1;
		NullCheck(L_20);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_20, L_21, /*hidden argument*/NULL);
		// break;
		goto IL_013f;
	}

IL_00c9:
	{
		// s.Append('\b');
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_22, 8, /*hidden argument*/NULL);
		// break;
		goto IL_013f;
	}

IL_00d3:
	{
		// s.Append('\f');
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_23, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_013f;
	}

IL_00de:
	{
		// s.Append('\n');
		StringBuilder_t * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_24, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_013f;
	}

IL_00e9:
	{
		// s.Append('\r');
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_25, ((int32_t)13), /*hidden argument*/NULL);
		// break;
		goto IL_013f;
	}

IL_00f4:
	{
		// s.Append('\t');
		StringBuilder_t * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_26, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_013f;
	}

IL_00ff:
	{
		// var hex = new char[4];
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_27 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_27;
		// for (int i=0; i< 4; i++) {
		V_4 = 0;
		goto IL_011b;
	}

IL_010b:
	{
		// hex[i] = NextChar;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_28 = V_3;
		int32_t L_29 = V_4;
		Il2CppChar L_30 = Parser_get_NextChar_m122227E2FF4DFCED43AD27F53E5478F138D971DD(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Il2CppChar)L_30);
		// for (int i=0; i< 4; i++) {
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_011b:
	{
		// for (int i=0; i< 4; i++) {
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) < ((int32_t)4)))
		{
			goto IL_010b;
		}
	}
	{
		// s.Append((char) Convert.ToInt32(new string(hex), 16));
		StringBuilder_t * L_33 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_34 = V_3;
		String_t* L_35 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_36 = Convert_ToInt32_m8DC81C7C49EE4A9334E71E45E3A220644E45B4F4(L_35, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_33);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_33, (((int32_t)((uint16_t)L_36))), /*hidden argument*/NULL);
		// break;
		goto IL_013f;
	}

IL_0137:
	{
		// s.Append(c);
		StringBuilder_t * L_37 = V_0;
		Il2CppChar L_38 = V_1;
		NullCheck(L_37);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_37, L_38, /*hidden argument*/NULL);
	}

IL_013f:
	{
		// while (parsing) {
		bool L_39 = V_2;
		if (L_39)
		{
			goto IL_0021;
		}
	}

IL_0145:
	{
		// return s.ToString();
		StringBuilder_t * L_40 = V_0;
		NullCheck(L_40);
		String_t* L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		return L_41;
	}
}
// System.Object MiniJSON.Json_Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m8BEF139429F891F3B31335333E338793BF6AD0D3 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseNumber_m8BEF139429F891F3B31335333E338793BF6AD0D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		// string number = NextWord;
		String_t* L_0 = Parser_get_NextWord_m47ACC6789FF4B70A4BC9EEAFD4F0DC2320A100CB(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (number.IndexOf('.') == -1) {
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002c;
		}
	}
	{
		// Int64.TryParse(number, System.Globalization.NumberStyles.Any, System.Globalization.CultureInfo.InvariantCulture, out parsedInt);
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_4 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		Int64_TryParse_m8CE5F89833C03A091273A4EF48C69E86E1F81ACC(L_3, ((int32_t)511), L_4, (int64_t*)(&V_2), /*hidden argument*/NULL);
		// return parsedInt;
		int64_t L_5 = V_2;
		int64_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_002c:
	{
		// Double.TryParse(number, System.Globalization.NumberStyles.Any, System.Globalization.CultureInfo.InvariantCulture, out parsedDouble);
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_9 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var);
		Double_TryParse_m1A7BCBA90DE896E448E3CA09AAD1CA43846567D7(L_8, ((int32_t)511), L_9, (double*)(&V_1), /*hidden argument*/NULL);
		// return parsedDouble;
		double L_10 = V_1;
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void MiniJSON.Json_Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mDCA2A8231769E8A7AD23E698B0CD2E4753C00805 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EatWhitespace_mDCA2A8231769E8A7AD23E698B0CD2E4753C00805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek() == -1) {
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		// while (Char.IsWhiteSpace(PeekChar)) {
		Il2CppChar L_3 = Parser_get_PeekChar_mA8AC20F847527FAF5E2A3A538A241C7694DD1C3A(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Char MiniJSON.Json_Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mA8AC20F847527FAF5E2A3A538A241C7694DD1C3A (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_PeekChar_mA8AC20F847527FAF5E2A3A538A241C7694DD1C3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Peek());
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char MiniJSON.Json_Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m122227E2FF4DFCED43AD27F53E5478F138D971DD (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextChar_m122227E2FF4DFCED43AD27F53E5478F138D971DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Read());
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String MiniJSON.Json_Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m47ACC6789FF4B70A4BC9EEAFD4F0DC2320A100CB (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method)
{
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder word = stringBuilder;
		StringBuilder_t * L_0 = __this->get_stringBuilder_1();
		V_0 = L_0;
		// word.Length = 0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_1, 0, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_0010:
	{
		// word.Append(NextChar);
		StringBuilder_t * L_2 = V_0;
		Il2CppChar L_3 = Parser_get_NextChar_m122227E2FF4DFCED43AD27F53E5478F138D971DD(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_2, L_3, /*hidden argument*/NULL);
		// if (json.Peek() == -1) {
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_4 = __this->get_json_0();
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0038;
		}
	}

IL_002b:
	{
		// while (!IsWordBreak(PeekChar)) {
		Il2CppChar L_6 = Parser_get_PeekChar_mA8AC20F847527FAF5E2A3A538A241C7694DD1C3A(__this, /*hidden argument*/NULL);
		bool L_7 = Parser_IsWordBreak_mF146B2B6B113BC21D0A8BB5748AC432CB820C077(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0010;
		}
	}

IL_0038:
	{
		// return word.ToString();
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// MiniJSON.Json_Parser_TOKEN MiniJSON.Json_Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m0F399F0DB84B11D76D8F4450F6F26192A98FB085 (Parser_tD0E523A89CC3F5358456D0CE6DFBB747C9832B1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextToken_m0F399F0DB84B11D76D8F4450F6F26192A98FB085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace();
		Parser_EatWhitespace_mDCA2A8231769E8A7AD23E698B0CD2E4753C00805(__this, /*hidden argument*/NULL);
		// if (json.Peek() == -1) {
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// switch (PeekChar) {
		Il2CppChar L_2 = Parser_get_PeekChar_mA8AC20F847527FAF5E2A3A538A241C7694DD1C3A(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_9 = __this->get_json_0();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_10 = __this->get_json_0();
		NullCheck(L_10);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_10);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read();
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_11 = __this->get_json_0();
		NullCheck(L_11);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// switch (NextWord) {
		String_t* L_12 = Parser_get_NextWord_m47ACC6789FF4B70A4BC9EEAFD4F0DC2320A100CB(__this, /*hidden argument*/NULL);
		V_1 = L_12;
		String_t* L_13 = V_1;
		bool L_14 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_13, _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_010b;
		}
	}
	{
		String_t* L_15 = V_1;
		bool L_16 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_15, _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_17 = V_1;
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0114;
	}

IL_010b:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_010e:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0111:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0114:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
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
// System.Void MiniJSON.Json_Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m81A8C122EE1F43BED3E250A93FE15EB885C8B32D (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_m81A8C122EE1F43BED3E250A93FE15EB885C8B32D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer() {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// builder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		// }
		return;
	}
}
// System.String MiniJSON.Json_Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mB94C1D0F7F34CFAFA665670B5E6A0EC6B482CD0D (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_mB94C1D0F7F34CFAFA665670B5E6A0EC6B482CD0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer();
		Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * L_0 = (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F *)il2cpp_codegen_object_new(Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F_il2cpp_TypeInfo_var);
		Serializer__ctor_m81A8C122EE1F43BED3E250A93FE15EB885C8B32D(L_0, /*hidden argument*/NULL);
		// instance.SerializeValue(obj);
		Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m7D5AF33A458F1DE09DAD6868B529F521A0A346B5(L_1, L_2, /*hidden argument*/NULL);
		// return instance.builder.ToString();
		NullCheck(L_1);
		StringBuilder_t * L_3 = L_1->get_builder_0();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void MiniJSON.Json_Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m7D5AF33A458F1DE09DAD6868B529F521A0A346B5 (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_m7D5AF33A458F1DE09DAD6868B529F521A0A346B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		// if (value == null) {
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_1, _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833, /*hidden argument*/NULL);
		// } else if ((asStr = value as string) != null) {
		return;
	}

IL_0015:
	{
		// } else if ((asStr = value as string) != null) {
		RuntimeObject * L_2 = ___value0;
		String_t* L_3 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_4 = V_2;
		Serializer_SerializeString_mD522C12207E8DE0CFEF5951552CA7DD52562D4DA(__this, L_4, /*hidden argument*/NULL);
		// } else if (value is bool) {
		return;
	}

IL_0027:
	{
		// } else if (value is bool) {
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		// builder.Append((bool) value ? "true" : "false");
		StringBuilder_t * L_6 = __this->get_builder_0();
		RuntimeObject * L_7 = ___value0;
		G_B6_0 = L_6;
		if (((*(bool*)((bool*)UnBox(L_7, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		// } else if ((asList = value as IList) != null) {
		return;
	}

IL_0050:
	{
		// } else if ((asList = value as IList) != null) {
		RuntimeObject * L_8 = ___value0;
		RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_10 = V_0;
		Serializer_SerializeArray_m0091F8B0962C7AA38FBCB64758A489D9F9CA83A4(__this, L_10, /*hidden argument*/NULL);
		// } else if ((asDict = value as IDictionary) != null) {
		return;
	}

IL_0062:
	{
		// } else if ((asDict = value as IDictionary) != null) {
		RuntimeObject * L_11 = ___value0;
		RuntimeObject* L_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_13 = V_1;
		Serializer_SerializeObject_m6B92006D563FC19575E83063DA0C629846E143E1(__this, L_13, /*hidden argument*/NULL);
		// } else if (value is char) {
		return;
	}

IL_0074:
	{
		// } else if (value is char) {
		RuntimeObject * L_14 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		// SerializeString(new string((char) value, 1));
		RuntimeObject * L_15 = ___value0;
		String_t* L_16 = String_CreateString_m0E7BBCE09E386877E2B63BF7FA36B956BF221C93(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_15, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_mD522C12207E8DE0CFEF5951552CA7DD52562D4DA(__this, L_16, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_008f:
	{
		// SerializeOther(value);
		RuntimeObject * L_17 = ___value0;
		Serializer_SerializeOther_m99B6CB1E99EA0703FD927BAEA828C289AFEF6241(__this, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MiniJSON.Json_Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m6B92006D563FC19575E83063DA0C629846E143E1 (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m6B92006D563FC19575E83063DA0C629846E143E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_0, ((int32_t)123), /*hidden argument*/NULL);
		// foreach (object e in obj.Keys)
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			// foreach (object e in obj.Keys)
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			// if (!first)
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0036;
			}
		}

IL_0028:
		{
			// builder.Append(',');
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0036:
		{
			// SerializeString(e.ToString());
			RuntimeObject * L_8 = V_2;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_mD522C12207E8DE0CFEF5951552CA7DD52562D4DA(__this, L_9, /*hidden argument*/NULL);
			// builder.Append(':');
			StringBuilder_t * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_10, ((int32_t)58), /*hidden argument*/NULL);
			// SerializeValue(obj[e]);
			RuntimeObject* L_11 = ___obj0;
			RuntimeObject * L_12 = V_2;
			NullCheck(L_11);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m7D5AF33A458F1DE09DAD6868B529F521A0A346B5(__this, L_13, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_005f:
		{
			// foreach (object e in obj.Keys)
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_001e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_17 = V_3;
			if (!L_17)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_18);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// builder.Append('}');
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_19, ((int32_t)125), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MiniJSON.Json_Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m0091F8B0962C7AA38FBCB64758A489D9F9CA83A4 (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_m0091F8B0962C7AA38FBCB64758A489D9F9CA83A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// builder.Append('[');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_0, ((int32_t)91), /*hidden argument*/NULL);
		// bool first = true;
		V_0 = (bool)1;
		// foreach (object obj in anArray)
		RuntimeObject* L_1 = ___anArray0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0019:
		{
			// foreach (object obj in anArray)
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			// if (!first)
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0031;
			}
		}

IL_0023:
		{
			// builder.Append(',');
			StringBuilder_t * L_6 = __this->get_builder_0();
			NullCheck(L_6);
			StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0031:
		{
			// SerializeValue(obj);
			RuntimeObject * L_7 = V_2;
			Serializer_SerializeValue_m7D5AF33A458F1DE09DAD6868B529F521A0A346B5(__this, L_7, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_003a:
		{
			// foreach (object obj in anArray)
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0019;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_3;
			if (!L_11)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_12);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		// builder.Append(']');
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_13, ((int32_t)93), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MiniJSON.Json_Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mD522C12207E8DE0CFEF5951552CA7DD52562D4DA (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_mD522C12207E8DE0CFEF5951552CA7DD52562D4DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_0, ((int32_t)34), /*hidden argument*/NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = String_ToCharArray_mFCFF32A5EC698E81075E0C72C874282B9ED197A6(L_1, /*hidden argument*/NULL);
		// foreach (var c in charArray) {
		V_0 = L_2;
		V_1 = 0;
		goto IL_0132;
	}

IL_001c:
	{
		// foreach (var c in charArray) {
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// switch (c) {
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t * L_10 = __this->get_builder_0();
		NullCheck(L_10);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_10, _stringLiteralAB006BB8AACDF6E68299BC1DFFCCC9BCC8AC3EAF, /*hidden argument*/NULL);
		// break;
		goto IL_012e;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_11, _stringLiteral9E94758983980504AF303EF297FD2BF9D9CEA063, /*hidden argument*/NULL);
		// break;
		goto IL_012e;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_12, _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5, /*hidden argument*/NULL);
		// break;
		goto IL_012e;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_13, _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385, /*hidden argument*/NULL);
		// break;
		goto IL_012e;
	}

IL_00a7:
	{
		// builder.Append("\\n");
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_14, _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8, /*hidden argument*/NULL);
		// break;
		goto IL_012e;
	}

IL_00ba:
	{
		// builder.Append("\\r");
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_15, _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01, /*hidden argument*/NULL);
		// break;
		goto IL_012e;
	}

IL_00cd:
	{
		// builder.Append("\\t");
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_16, _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7, /*hidden argument*/NULL);
		// break;
		goto IL_012e;
	}

IL_00e0:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_18 = Convert_ToInt32_m8BE65713C8D5E0AD45D53B82A5A7BD187BEBA917(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// if ((codepoint >= 32) && (codepoint <= 126)) {
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t * L_21 = __this->get_builder_0();
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_21, L_22, /*hidden argument*/NULL);
		// } else {
		goto IL_012e;
	}

IL_0100:
	{
		// builder.Append("\\u");
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_23, _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5, /*hidden argument*/NULL);
		// builder.Append(codepoint.ToString("x4", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t * L_24 = __this->get_builder_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_25 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_26 = Int32_ToString_mE527694B0C55AE14FDCBE1D9C848446C18E22C09((int32_t*)(&V_3), _stringLiteral2BFBE0BC53277529025720589E902C25BF01F2F4, L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_24, L_26, /*hidden argument*/NULL);
	}

IL_012e:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0132:
	{
		// foreach (var c in charArray) {
		int32_t L_28 = V_1;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_29 = V_0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t * L_30 = __this->get_builder_0();
		NullCheck(L_30);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_30, ((int32_t)34), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MiniJSON.Json_Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m99B6CB1E99EA0703FD927BAEA828C289AFEF6241 (Serializer_t14C792E43C1CEC76B6419D78A78E18B45C7F4D4F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m99B6CB1E99EA0703FD927BAEA828C289AFEF6241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// if (value is float) {
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		// builder.Append(((float) value).ToString("R", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_3 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_4 = Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756((float*)(&V_0), _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_1, L_4, /*hidden argument*/NULL);
		// } else if (value is int
		return;
	}

IL_002d:
	{
		// } else if (value is int
		//     || value is uint
		//     || value is long
		//     || value is sbyte
		//     || value is byte
		//     || value is short
		//     || value is ushort
		//     || value is ulong) {
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}

IL_006d:
	{
		// builder.Append(value);
		StringBuilder_t * L_13 = __this->get_builder_0();
		RuntimeObject * L_14 = ___value0;
		NullCheck(L_13);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_13, L_14, /*hidden argument*/NULL);
		// } else if (value is double
		return;
	}

IL_007b:
	{
		// } else if (value is double
		//     || value is decimal) {
		RuntimeObject * L_15 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject * L_16 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}

IL_008b:
	{
		// builder.Append(Convert.ToDouble(value).ToString("R", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t * L_17 = __this->get_builder_0();
		RuntimeObject * L_18 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_19 = Convert_ToDouble_mAB66BA75AC3CDFA1FEC09E3125EA444B46CD7050(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_20 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_21 = Double_ToString_m1D341E667E85E9E18783A14CB02982643E96C616((double*)(&V_1), _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_17, L_21, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_00b0:
	{
		// SerializeString(value.ToString());
		RuntimeObject * L_22 = ___value0;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		Serializer_SerializeString_mD522C12207E8DE0CFEF5951552CA7DD52562D4DA(__this, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
