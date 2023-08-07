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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Mediatonic.Tools.ControllerGlyphs.ControllerEntry
struct ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159;
// Mediatonic.Tools.ControllerGlyphs.ControllerEntry[]
struct ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137;
// Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs
struct ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF;
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry
struct GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A;
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry[]
struct GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99;
// Mediatonic.Tools.ControllerGlyphs.KeyboardEntry
struct KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8;
// Mediatonic.Tools.ControllerGlyphs.MouseEntry
struct MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934;
// Rewired.ActionElementMap
struct ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7;
// Rewired.CalibrationMap
struct CalibrationMap_t52D0C36A8E4195533E3CDF25F67BA8DA3EFB51A3;
// Rewired.Controller
struct Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671;
// Rewired.Controller/Axis2D[]
struct Axis2DU5BU5D_t3EA76FC4806A467C9FF20A2DB0C67407FEFFAB01;
// Rewired.Controller/Axis[]
struct AxisU5BU5D_t4A9D9CB010B4F05D4472FB918F08E8B1434B7BEB;
// Rewired.Controller/Button[]
struct ButtonU5BU5D_tEB078799E0930AD6615B644AD177B6C1AF07577C;
// Rewired.Controller/Extension
struct Extension_tB52F54389416488161F1C79DFA089F142E5AD3FD;
// Rewired.ControllerDataUpdater
struct ControllerDataUpdater_tBB4E0047FF8D6FAC9C5641EE94260D70C6DE1B9F;
// Rewired.ControllerElementIdentifier
struct ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66;
// Rewired.ControllerElementIdentifier[]
struct ControllerElementIdentifierU5BU5D_tA8BA3AEF17F1DDBADB44C5BE04B7F34917625DEE;
// Rewired.ControllerMap
struct ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB;
// Rewired.ControllerMapEnabler
struct ControllerMapEnabler_t72022B3413E35CE64277E9F8F6F64236C8F0148D;
// Rewired.ControllerMapLayoutManager
struct ControllerMapLayoutManager_t58D8D581E5DB2F37D020E1A35F0182997BE98781;
// Rewired.ControllerMapWithAxes
struct ControllerMapWithAxes_t6D095E9EE41B757831830413DC6FE457D1892C36;
// Rewired.Data.Mapping.HardwareJoystickMap
struct HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB;
// Rewired.Data.Mapping.HardwareJoystickMap/CompoundElement[]
struct CompoundElementU5BU5D_t99A80F4322F7288CB752671D33337B32F7A0E79C;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_DirectInput
struct Platform_DirectInput_t8384F48EB39207EF4B476BF85EEE95C48F113399;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_Fallback
struct Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_InternalDriver
struct Platform_InternalDriver_t8A5A88BC6C79D793F1E687A676A4EC95C644007F;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_Linux
struct Platform_Linux_t5C50A8A935B1AE1D30D6F7912DA10AEAFFD53EB5;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_NintendoSwitch
struct Platform_NintendoSwitch_t2696C2B97DA28B7AFFF2A0AA8CE74563C99F99C8;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_OSX
struct Platform_OSX_t03A46AF339888AC6E808D1D31A7467AD14FCA357;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_Ouya
struct Platform_Ouya_t6E1DA960C43511902B179E0E6746B8230AE60092;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_PS4
struct Platform_PS4_t5B4B7E5A8EF60DFB5E1F1CE6756ADD5BD5FB4FA1;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_RawInput
struct Platform_RawInput_tFA8A4734C93ADCCF4CE7C2E3947003AB875E5FBD;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_SDL2
struct Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_Stadia
struct Platform_Stadia_tA031EC4B1DB0F157B0B2C7A38B31AB46E2E92D65;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_WebGL
struct Platform_WebGL_t7C026B328916B42D37B442AE084EABCB320F318A;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_WindowsUWP
struct Platform_WindowsUWP_t79A50D7432962C9DD8B8CDFFAFC55B27BB32C06A;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_XInput
struct Platform_XInput_t44E2E6F0FD4F4A22A7FB6C031984FFC5F82BDC16;
// Rewired.Data.Mapping.HardwareJoystickMap/Platform_XboxOne
struct Platform_XboxOne_tF5ACC52C21E7D086DBC6B842E36075C1582AA2C4;
// Rewired.HardwareControllerMap_Game
struct HardwareControllerMap_Game_t941EA366B3E6D843EBE08EEBA0930D8A338B49D3;
// Rewired.IControllerTemplate[]
struct IControllerTemplateU5BU5D_t6B3C97490FB9ECABF62EFD5CE8335DABC6E527B6;
// Rewired.InputAction
struct InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA;
// Rewired.Interfaces.IUnifiedKeyboardSource
struct IUnifiedKeyboardSource_t94183BB51C9B2A7CA8011D4C731C2CB013B5E591;
// Rewired.Interfaces.IUnifiedMouseSource
struct IUnifiedMouseSource_tF1958F0193D41ADC2F469AE84F413647B71B31FB;
// Rewired.JoystickMap
struct JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24;
// Rewired.JoystickType[]
struct JoystickTypeU5BU5D_t441284FE2D4324E2C6DA63D5E966FB756FA283FA;
// Rewired.Keyboard
struct Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004;
// Rewired.KeyboardKeyCode[]
struct KeyboardKeyCodeU5BU5D_t88F2320800F8F14E7935678C5AA693EEF40514B2;
// Rewired.Mouse
struct Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3;
// Rewired.Player
struct Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F;
// Rewired.Player/ControllerHelper
struct ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC;
// Rewired.Player/ControllerHelper/ConflictCheckingHelper
struct ConflictCheckingHelper_t3B5BA120121109EB2736D5466BA25742F049F1B1;
// Rewired.Player/ControllerHelper/GqnPeUIbcSSlBOJNyjZOqiQQwsP
struct GqnPeUIbcSSlBOJNyjZOqiQQwsP_t88DB650EABF0E0AEFC0DC50DD77638AD18D8C07B;
// Rewired.Player/ControllerHelper/MapHelper
struct MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92;
// Rewired.Player/ControllerHelper/PollingHelper
struct PollingHelper_tE345DB668E84431AA09C97B278D2F36D1716CB24;
// Rewired.Player/ControllerHelper/XOUXKFmDauQRcgFLXykxdGnytYO
struct XOUXKFmDauQRcgFLXykxdGnytYO_tEA3238F1006D794970CFC28E9908F81C3D9435BC;
// Rewired.ReInput/ControllerHelper
struct ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62;
// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper
struct ConflictCheckingHelper_t86BCFF8098407F0F2AC252C2EDB520222E11E531;
// Rewired.ReInput/ControllerHelper/PollingHelper
struct PollingHelper_t69EDA9E24833EACC807B10BC63FCE58E1090A29A;
// Rewired.ReInput/MappingHelper
struct MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6;
// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap>
struct AList_1_t3CE454271698B03A6EA53DA068272454E1A22108;
// Rewired.Utils.Classes.Utility.TimerAbs
struct TimerAbs_t89BDE70DB29168CBB45BE2FF477F04A84CC82429;
// Rewired.Utils.SafeAction`1<Rewired.ControllerAssignmentChangedEventArgs>
struct SafeAction_1_tA11ADD9DAB6EF8AEDCEBEB2219B2D1624292FB90;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<System.Exception>
struct Action_1_t114FA5D778AE43CC5A12F16A8CCD137F67ED6962;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<Rewired.ActionElementMap>
struct IEnumerable_1_t7ABBD6A4BFA4F1D248B261DCF0E5FD0F76286101;
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerElementIdentifier>
struct IEnumerable_1_tD6342033827336E237259AF495FEE3664E09239E;
// System.Collections.Generic.IList`1<Rewired.ActionElementMap>
struct IList_1_t1C1B8D350299A24510230CF5E934B02259CD3E4C;
// System.Collections.Generic.IList`1<Rewired.Controller/Element>
struct IList_1_t743C6DA41FA4F41F7DDEC5C049DA8C51F315819C;
// System.Collections.Generic.IList`1<Rewired.ControllerElementIdentifier>
struct IList_1_t6120EA8B34A2D2D09685DAC6C13DF0D247609195;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap>
struct ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Axis2D>
struct ReadOnlyCollection_1_t0DE413092804EC8FE479436075E87B4EC39398DD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Axis>
struct ReadOnlyCollection_1_t2FC4D82F7AABEAB28A14216C3A57818B355A98EB;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Button>
struct ReadOnlyCollection_1_tCA51394B27F18929AD1D619E80250F91DC20B383;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Element>
struct ReadOnlyCollection_1_tBF1621D3F7F9871C04D918E0DF726F42C36F91F4;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.IControllerTemplate>
struct ReadOnlyCollection_1_t29628C2D08376268FE32FB6C6D7854BE606C1802;
// System.Func`2<Rewired.KeyboardKeyCode,System.Int32>
struct Func_2_t20DE2EBC38186DD09844EAE5633BA6EF803D8900;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_t7E959DEAF1C1E69DDAA4CC9284FA7F005E80606E;
// System.Func`3<Rewired.Controller,System.Guid,System.Boolean>
struct Func_3_t01432DF24DAEAC832D9079B28AE7CD1B99E3AACE;
// System.Func`3<Rewired.Controller,System.Type,System.Boolean>
struct Func_3_t722B6E01079F18BA4476D2B9A59F2DD94555B0F1;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// iEgjLlOreUSDVgWDWrBMOCDTeuU
struct iEgjLlOreUSDVgWDWrBMOCDTeuU_tCB1DE948364BE3C64A7DDA1F3F774DF4A67DB4A7;
// jivAlIeTxgkfKLAvxWnUhUQShNEb
struct jivAlIeTxgkfKLAvxWnUhUQShNEb_tF40853EB6FC68CC4C8D500312171EBC4107F53EC;
// oXtnTogodcGKPKeQtmXCNVdeNoE
struct oXtnTogodcGKPKeQtmXCNVdeNoE_tF6ADDA62CF05DDB7636DF9869F829E7441232CC2;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t4C2D36173FE0F6360DA6F15A0F87FA9BA7A13407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7ABBD6A4BFA4F1D248B261DCF0E5FD0F76286101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tD6342033827336E237259AF495FEE3664E09239E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t62E0BA06CEF38BC2D5839771D2A23781A0945E7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6C243004613624AE1771418164AC4C40E3AFD38A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReInput_t660C845029E93C5E11722938F53BCA3AED33D0BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CDCE7CC78E5D1E9072CDECC7BF2BB1FEE9204DA;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57B94CB80DA76C7B5C31B49C5B20DA5049315F;
IL2CPP_EXTERN_C String_t* _stringLiteral8322CC541E5CE19127CE5A929D6CE87E5C8CDE1A;
IL2CPP_EXTERN_C String_t* _stringLiteral85D3350C1961481DF632FC7ADA53ED2A0AA2754B;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE866D3D50A59FB62520C14BF613F09B5595B8E10;
IL2CPP_EXTERN_C String_t* _stringLiteralFC2F9382F0BAC688AAD25A0CD5070034A81F1950;
IL2CPP_EXTERN_C String_t* _stringLiteralFF4C9DB2CB72EA1E78144D46BE67AC0218A4832A;
IL2CPP_EXTERN_C const uint32_t ControllerEntry_CreateGlyphEntries_m95C2A882D2F84EA4B605CD6BC7CF8FEB00F570B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerGlyphs_GetActionControllerSprite_m65F34B5FBD7335BF73E277FB1B187F28CCECE868_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerGlyphs_GetActionControllerSprite_mCB33CF405BDA276016A71A7CEDEBAEE43E837E55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerGlyphs_GetGlyphFromHardwareGuid_m173DE72D2D3DE62747D42E88A3DFC35A3EA20737_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerGlyphs__ctor_m92178394655E7BBD6BBC2FF6CC11CAAB4BAC973D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GlyphEntryReturnedInfo_Equals_mF6BBB69093ABB8D67C11CF85CA48E1CCE68A92C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GlyphEntryReturnedInfo_GetHashCode_mA290615C65A492FA4421FAFCB9C086AE6FB17406_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GlyphEntry_GetGlyphInfo_mABB5775B3C6DF0B4DE78A8A2B7354A9A62743E92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KeyboardEntry_CreateGlyphEntries_m48FCC55807B41DCE664D3C927AC096EBB95C87AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEntry_CreateGlyphEntries_mFF84FDFD8C8170177E76D2829575CB690AC51EEE_MetadataUsageId;

struct ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137;
struct GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t93B6BCF2F836A144BB3D6B3F6F743C093A9E203F 
{
public:

public:
};


// System.Object


// Mediatonic.Tools.ControllerGlyphs.GlyphEntry
struct  GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A  : public RuntimeObject
{
public:
	// System.String Mediatonic.Tools.ControllerGlyphs.GlyphEntry::Name
	String_t* ___Name_0;
	// System.Int32 Mediatonic.Tools.ControllerGlyphs.GlyphEntry::ElementIdentifierId
	int32_t ___ElementIdentifierId_1;
	// UnityEngine.Sprite Mediatonic.Tools.ControllerGlyphs.GlyphEntry::Glyph
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___Glyph_2;
	// System.String Mediatonic.Tools.ControllerGlyphs.GlyphEntry::TextGlyph
	String_t* ___TextGlyph_3;
	// System.String Mediatonic.Tools.ControllerGlyphs.GlyphEntry::SpriteAtlasName
	String_t* ___SpriteAtlasName_4;
	// UnityEngine.Sprite Mediatonic.Tools.ControllerGlyphs.GlyphEntry::GlyphPos
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___GlyphPos_5;
	// System.String Mediatonic.Tools.ControllerGlyphs.GlyphEntry::TextGlyphPos
	String_t* ___TextGlyphPos_6;
	// System.String Mediatonic.Tools.ControllerGlyphs.GlyphEntry::SpriteAtlasNamePos
	String_t* ___SpriteAtlasNamePos_7;
	// UnityEngine.Sprite Mediatonic.Tools.ControllerGlyphs.GlyphEntry::GlyphNeg
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___GlyphNeg_8;
	// System.String Mediatonic.Tools.ControllerGlyphs.GlyphEntry::TextGlyphNeg
	String_t* ___TextGlyphNeg_9;
	// System.String Mediatonic.Tools.ControllerGlyphs.GlyphEntry::SpriteAtlasNameNeg
	String_t* ___SpriteAtlasNameNeg_10;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_ElementIdentifierId_1() { return static_cast<int32_t>(offsetof(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A, ___ElementIdentifierId_1)); }
	inline int32_t get_ElementIdentifierId_1() const { return ___ElementIdentifierId_1; }
	inline int32_t* get_address_of_ElementIdentifierId_1() { return &___ElementIdentifierId_1; }
	inline void set_ElementIdentifierId_1(int32_t value)
	{
		___ElementIdentifierId_1 = value;
	}

	inline static int32_t get_offset_of_Glyph_2() { return static_cast<int32_t>(offsetof(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A, ___Glyph_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_Glyph_2() const { return ___Glyph_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_Glyph_2() { return &___Glyph_2; }
	inline void set_Glyph_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___Glyph_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Glyph_2), (void*)value);
	}

	inline static int32_t get_offset_of_TextGlyph_3() { return static_cast<int32_t>(offsetof(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A, ___TextGlyph_3)); }
	inline String_t* get_TextGlyph_3() const { return ___TextGlyph_3; }
	inline String_t** get_address_of_TextGlyph_3() { return &___TextGlyph_3; }
	inline void set_TextGlyph_3(String_t* value)
	{
		___TextGlyph_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextGlyph_3), (void*)value);
	}

	inline static int32_t get_offset_of_SpriteAtlasName_4() { return static_cast<int32_t>(offsetof(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A, ___SpriteAtlasName_4)); }
	inline String_t* get_SpriteAtlasName_4() const { return ___SpriteAtlasName_4; }
	inline String_t** get_address_of_SpriteAtlasName_4() { return &___SpriteAtlasName_4; }
	inline void set_SpriteAtlasName_4(String_t* value)
	{
		___SpriteAtlasName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpriteAtlasName_4), (void*)value);
	}

	inline static int32_t get_offset_of_GlyphPos_5() { return static_cast<int32_t>(offsetof(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A, ___GlyphPos_5)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_GlyphPos_5() const { return ___GlyphPos_5; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_GlyphPos_5() { return &___GlyphPos_5; }
	inline void set_GlyphPos_5(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___GlyphPos_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GlyphPos_5), (void*)value);
	}

	inline static int32_t get_offset_of_TextGlyphPos_6() { return static_cast<int32_t>(offsetof(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A, ___TextGlyphPos_6)); }
	inline String_t* get_TextGlyphPos_6() const { return ___TextGlyphPos_6; }
	inline String_t** get_address_of_TextGlyphPos_6() { return &___TextGlyphPos_6; }
	inline void set_TextGlyphPos_6(String_t* value)
	{
		___TextGlyphPos_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextGlyphPos_6), (void*)value);
	}

	inline static int32_t get_offset_of_SpriteAtlasNamePos_7() { return static_cast<int32_t>(offsetof(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A, ___SpriteAtlasNamePos_7)); }
	inline String_t* get_SpriteAtlasNamePos_7() const { return ___SpriteAtlasNamePos_7; }
	inline String_t** get_address_of_SpriteAtlasNamePos_7() { return &___SpriteAtlasNamePos_7; }
	inline void set_SpriteAtlasNamePos_7(String_t* value)
	{
		___SpriteAtlasNamePos_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpriteAtlasNamePos_7), (void*)value);
	}

	inline static int32_t get_offset_of_GlyphNeg_8() { return static_cast<int32_t>(offsetof(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A, ___GlyphNeg_8)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_GlyphNeg_8() const { return ___GlyphNeg_8; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_GlyphNeg_8() { return &___GlyphNeg_8; }
	inline void set_GlyphNeg_8(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___GlyphNeg_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GlyphNeg_8), (void*)value);
	}

	inline static int32_t get_offset_of_TextGlyphNeg_9() { return static_cast<int32_t>(offsetof(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A, ___TextGlyphNeg_9)); }
	inline String_t* get_TextGlyphNeg_9() const { return ___TextGlyphNeg_9; }
	inline String_t** get_address_of_TextGlyphNeg_9() { return &___TextGlyphNeg_9; }
	inline void set_TextGlyphNeg_9(String_t* value)
	{
		___TextGlyphNeg_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextGlyphNeg_9), (void*)value);
	}

	inline static int32_t get_offset_of_SpriteAtlasNameNeg_10() { return static_cast<int32_t>(offsetof(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A, ___SpriteAtlasNameNeg_10)); }
	inline String_t* get_SpriteAtlasNameNeg_10() const { return ___SpriteAtlasNameNeg_10; }
	inline String_t** get_address_of_SpriteAtlasNameNeg_10() { return &___SpriteAtlasNameNeg_10; }
	inline void set_SpriteAtlasNameNeg_10(String_t* value)
	{
		___SpriteAtlasNameNeg_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpriteAtlasNameNeg_10), (void*)value);
	}
};


// Rewired.Player
struct  Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F  : public RuntimeObject
{
public:
	// iEgjLlOreUSDVgWDWrBMOCDTeuU Rewired.Player::qEwfixIuHpHCNflXFXWFSsjxniYo
	iEgjLlOreUSDVgWDWrBMOCDTeuU_tCB1DE948364BE3C64A7DDA1F3F774DF4A67DB4A7 * ___qEwfixIuHpHCNflXFXWFSsjxniYo_0;
	// System.Boolean Rewired.Player::GbIEWhwbXRerFPXKlfNxIvHLFQaC
	bool ___GbIEWhwbXRerFPXKlfNxIvHLFQaC_1;
	// System.Int32 Rewired.Player::JYVLucfrtTNrKVxEqPQOOFTpfkmg
	int32_t ___JYVLucfrtTNrKVxEqPQOOFTpfkmg_2;
	// System.String Rewired.Player::ijKNNiDIebiHjrqkcohpViowzqm
	String_t* ___ijKNNiDIebiHjrqkcohpViowzqm_3;
	// System.String Rewired.Player::XXeaYaAcCZjJwdoyxYwXyiLqWSf
	String_t* ___XXeaYaAcCZjJwdoyxYwXyiLqWSf_4;
	// System.Boolean Rewired.Player::pnRuWPRVPbnDCkFzlACmtiCxzrP
	bool ___pnRuWPRVPbnDCkFzlACmtiCxzrP_5;
	// System.Int32 Rewired.Player::XRiLMbBOiecmHaqfwSBskCfekqL
	int32_t ___XRiLMbBOiecmHaqfwSBskCfekqL_6;
	// Rewired.Player_ControllerHelper Rewired.Player::controllers
	ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC * ___controllers_7;

public:
	inline static int32_t get_offset_of_qEwfixIuHpHCNflXFXWFSsjxniYo_0() { return static_cast<int32_t>(offsetof(Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F, ___qEwfixIuHpHCNflXFXWFSsjxniYo_0)); }
	inline iEgjLlOreUSDVgWDWrBMOCDTeuU_tCB1DE948364BE3C64A7DDA1F3F774DF4A67DB4A7 * get_qEwfixIuHpHCNflXFXWFSsjxniYo_0() const { return ___qEwfixIuHpHCNflXFXWFSsjxniYo_0; }
	inline iEgjLlOreUSDVgWDWrBMOCDTeuU_tCB1DE948364BE3C64A7DDA1F3F774DF4A67DB4A7 ** get_address_of_qEwfixIuHpHCNflXFXWFSsjxniYo_0() { return &___qEwfixIuHpHCNflXFXWFSsjxniYo_0; }
	inline void set_qEwfixIuHpHCNflXFXWFSsjxniYo_0(iEgjLlOreUSDVgWDWrBMOCDTeuU_tCB1DE948364BE3C64A7DDA1F3F774DF4A67DB4A7 * value)
	{
		___qEwfixIuHpHCNflXFXWFSsjxniYo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qEwfixIuHpHCNflXFXWFSsjxniYo_0), (void*)value);
	}

	inline static int32_t get_offset_of_GbIEWhwbXRerFPXKlfNxIvHLFQaC_1() { return static_cast<int32_t>(offsetof(Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F, ___GbIEWhwbXRerFPXKlfNxIvHLFQaC_1)); }
	inline bool get_GbIEWhwbXRerFPXKlfNxIvHLFQaC_1() const { return ___GbIEWhwbXRerFPXKlfNxIvHLFQaC_1; }
	inline bool* get_address_of_GbIEWhwbXRerFPXKlfNxIvHLFQaC_1() { return &___GbIEWhwbXRerFPXKlfNxIvHLFQaC_1; }
	inline void set_GbIEWhwbXRerFPXKlfNxIvHLFQaC_1(bool value)
	{
		___GbIEWhwbXRerFPXKlfNxIvHLFQaC_1 = value;
	}

	inline static int32_t get_offset_of_JYVLucfrtTNrKVxEqPQOOFTpfkmg_2() { return static_cast<int32_t>(offsetof(Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F, ___JYVLucfrtTNrKVxEqPQOOFTpfkmg_2)); }
	inline int32_t get_JYVLucfrtTNrKVxEqPQOOFTpfkmg_2() const { return ___JYVLucfrtTNrKVxEqPQOOFTpfkmg_2; }
	inline int32_t* get_address_of_JYVLucfrtTNrKVxEqPQOOFTpfkmg_2() { return &___JYVLucfrtTNrKVxEqPQOOFTpfkmg_2; }
	inline void set_JYVLucfrtTNrKVxEqPQOOFTpfkmg_2(int32_t value)
	{
		___JYVLucfrtTNrKVxEqPQOOFTpfkmg_2 = value;
	}

	inline static int32_t get_offset_of_ijKNNiDIebiHjrqkcohpViowzqm_3() { return static_cast<int32_t>(offsetof(Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F, ___ijKNNiDIebiHjrqkcohpViowzqm_3)); }
	inline String_t* get_ijKNNiDIebiHjrqkcohpViowzqm_3() const { return ___ijKNNiDIebiHjrqkcohpViowzqm_3; }
	inline String_t** get_address_of_ijKNNiDIebiHjrqkcohpViowzqm_3() { return &___ijKNNiDIebiHjrqkcohpViowzqm_3; }
	inline void set_ijKNNiDIebiHjrqkcohpViowzqm_3(String_t* value)
	{
		___ijKNNiDIebiHjrqkcohpViowzqm_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ijKNNiDIebiHjrqkcohpViowzqm_3), (void*)value);
	}

	inline static int32_t get_offset_of_XXeaYaAcCZjJwdoyxYwXyiLqWSf_4() { return static_cast<int32_t>(offsetof(Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F, ___XXeaYaAcCZjJwdoyxYwXyiLqWSf_4)); }
	inline String_t* get_XXeaYaAcCZjJwdoyxYwXyiLqWSf_4() const { return ___XXeaYaAcCZjJwdoyxYwXyiLqWSf_4; }
	inline String_t** get_address_of_XXeaYaAcCZjJwdoyxYwXyiLqWSf_4() { return &___XXeaYaAcCZjJwdoyxYwXyiLqWSf_4; }
	inline void set_XXeaYaAcCZjJwdoyxYwXyiLqWSf_4(String_t* value)
	{
		___XXeaYaAcCZjJwdoyxYwXyiLqWSf_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XXeaYaAcCZjJwdoyxYwXyiLqWSf_4), (void*)value);
	}

	inline static int32_t get_offset_of_pnRuWPRVPbnDCkFzlACmtiCxzrP_5() { return static_cast<int32_t>(offsetof(Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F, ___pnRuWPRVPbnDCkFzlACmtiCxzrP_5)); }
	inline bool get_pnRuWPRVPbnDCkFzlACmtiCxzrP_5() const { return ___pnRuWPRVPbnDCkFzlACmtiCxzrP_5; }
	inline bool* get_address_of_pnRuWPRVPbnDCkFzlACmtiCxzrP_5() { return &___pnRuWPRVPbnDCkFzlACmtiCxzrP_5; }
	inline void set_pnRuWPRVPbnDCkFzlACmtiCxzrP_5(bool value)
	{
		___pnRuWPRVPbnDCkFzlACmtiCxzrP_5 = value;
	}

	inline static int32_t get_offset_of_XRiLMbBOiecmHaqfwSBskCfekqL_6() { return static_cast<int32_t>(offsetof(Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F, ___XRiLMbBOiecmHaqfwSBskCfekqL_6)); }
	inline int32_t get_XRiLMbBOiecmHaqfwSBskCfekqL_6() const { return ___XRiLMbBOiecmHaqfwSBskCfekqL_6; }
	inline int32_t* get_address_of_XRiLMbBOiecmHaqfwSBskCfekqL_6() { return &___XRiLMbBOiecmHaqfwSBskCfekqL_6; }
	inline void set_XRiLMbBOiecmHaqfwSBskCfekqL_6(int32_t value)
	{
		___XRiLMbBOiecmHaqfwSBskCfekqL_6 = value;
	}

	inline static int32_t get_offset_of_controllers_7() { return static_cast<int32_t>(offsetof(Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F, ___controllers_7)); }
	inline ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC * get_controllers_7() const { return ___controllers_7; }
	inline ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC ** get_address_of_controllers_7() { return &___controllers_7; }
	inline void set_controllers_7(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC * value)
	{
		___controllers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllers_7), (void*)value);
	}
};


// Rewired.Player_ControllerHelper
struct  ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC  : public RuntimeObject
{
public:
	// Rewired.Player_ControllerHelper_GqnPeUIbcSSlBOJNyjZOqiQQwsP Rewired.Player_ControllerHelper::KYAWfXXmpccNKecKXiyMEQLhJIsp
	GqnPeUIbcSSlBOJNyjZOqiQQwsP_t88DB650EABF0E0AEFC0DC50DD77638AD18D8C07B * ___KYAWfXXmpccNKecKXiyMEQLhJIsp_0;
	// System.Boolean Rewired.Player_ControllerHelper::lYRjtOmHKvLPrHywNrTQtEoDfDGF
	bool ___lYRjtOmHKvLPrHywNrTQtEoDfDGF_1;
	// System.Boolean Rewired.Player_ControllerHelper::KfRzIEuegWtinwFjtJcalwOMFnM
	bool ___KfRzIEuegWtinwFjtJcalwOMFnM_2;
	// System.Boolean Rewired.Player_ControllerHelper::tSEulNlCOrPjXNmFOAFUAYOWdCW
	bool ___tSEulNlCOrPjXNmFOAFUAYOWdCW_3;
	// System.Single Rewired.Player_ControllerHelper::XYMyeIGSgUUqCXIdclPPGARxDCQ
	float ___XYMyeIGSgUUqCXIdclPPGARxDCQ_4;
	// System.Single Rewired.Player_ControllerHelper::BbsJqmLrWxMZcYnLfhyjmyXQSDm
	float ___BbsJqmLrWxMZcYnLfhyjmyXQSDm_5;
	// Rewired.Utils.SafeAction`1<Rewired.ControllerAssignmentChangedEventArgs> Rewired.Player_ControllerHelper::VqBddDioDyqDFiwGCVwjoyPDfDAf
	SafeAction_1_tA11ADD9DAB6EF8AEDCEBEB2219B2D1624292FB90 * ___VqBddDioDyqDFiwGCVwjoyPDfDAf_6;
	// Rewired.Utils.SafeAction`1<Rewired.ControllerAssignmentChangedEventArgs> Rewired.Player_ControllerHelper::UZpgVWVMSMxmqseLggWqlYVOmlv
	SafeAction_1_tA11ADD9DAB6EF8AEDCEBEB2219B2D1624292FB90 * ___UZpgVWVMSMxmqseLggWqlYVOmlv_7;
	// Rewired.Player_ControllerHelper_XOUXKFmDauQRcgFLXykxdGnytYO Rewired.Player_ControllerHelper::nClbQwQPIOnnHFhPFHLPipLXAUWR
	XOUXKFmDauQRcgFLXykxdGnytYO_tEA3238F1006D794970CFC28E9908F81C3D9435BC * ___nClbQwQPIOnnHFhPFHLPipLXAUWR_8;
	// Rewired.Player Rewired.Player_ControllerHelper::GTyehtjpWABkXDhwTdDFpaBldplb
	Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F * ___GTyehtjpWABkXDhwTdDFpaBldplb_9;
	// oXtnTogodcGKPKeQtmXCNVdeNoE Rewired.Player_ControllerHelper::hCzBRLhYTVGDaaBQAgGvUDjdIwL
	oXtnTogodcGKPKeQtmXCNVdeNoE_tF6ADDA62CF05DDB7636DF9869F829E7441232CC2 * ___hCzBRLhYTVGDaaBQAgGvUDjdIwL_10;
	// System.Int32 Rewired.Player_ControllerHelper::XRiLMbBOiecmHaqfwSBskCfekqL
	int32_t ___XRiLMbBOiecmHaqfwSBskCfekqL_11;
	// Rewired.Player_ControllerHelper_MapHelper Rewired.Player_ControllerHelper::maps
	MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92 * ___maps_12;
	// Rewired.Player_ControllerHelper_ConflictCheckingHelper Rewired.Player_ControllerHelper::conflictChecking
	ConflictCheckingHelper_t3B5BA120121109EB2736D5466BA25742F049F1B1 * ___conflictChecking_13;
	// Rewired.Player_ControllerHelper_PollingHelper Rewired.Player_ControllerHelper::polling
	PollingHelper_tE345DB668E84431AA09C97B278D2F36D1716CB24 * ___polling_14;

public:
	inline static int32_t get_offset_of_KYAWfXXmpccNKecKXiyMEQLhJIsp_0() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___KYAWfXXmpccNKecKXiyMEQLhJIsp_0)); }
	inline GqnPeUIbcSSlBOJNyjZOqiQQwsP_t88DB650EABF0E0AEFC0DC50DD77638AD18D8C07B * get_KYAWfXXmpccNKecKXiyMEQLhJIsp_0() const { return ___KYAWfXXmpccNKecKXiyMEQLhJIsp_0; }
	inline GqnPeUIbcSSlBOJNyjZOqiQQwsP_t88DB650EABF0E0AEFC0DC50DD77638AD18D8C07B ** get_address_of_KYAWfXXmpccNKecKXiyMEQLhJIsp_0() { return &___KYAWfXXmpccNKecKXiyMEQLhJIsp_0; }
	inline void set_KYAWfXXmpccNKecKXiyMEQLhJIsp_0(GqnPeUIbcSSlBOJNyjZOqiQQwsP_t88DB650EABF0E0AEFC0DC50DD77638AD18D8C07B * value)
	{
		___KYAWfXXmpccNKecKXiyMEQLhJIsp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KYAWfXXmpccNKecKXiyMEQLhJIsp_0), (void*)value);
	}

	inline static int32_t get_offset_of_lYRjtOmHKvLPrHywNrTQtEoDfDGF_1() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___lYRjtOmHKvLPrHywNrTQtEoDfDGF_1)); }
	inline bool get_lYRjtOmHKvLPrHywNrTQtEoDfDGF_1() const { return ___lYRjtOmHKvLPrHywNrTQtEoDfDGF_1; }
	inline bool* get_address_of_lYRjtOmHKvLPrHywNrTQtEoDfDGF_1() { return &___lYRjtOmHKvLPrHywNrTQtEoDfDGF_1; }
	inline void set_lYRjtOmHKvLPrHywNrTQtEoDfDGF_1(bool value)
	{
		___lYRjtOmHKvLPrHywNrTQtEoDfDGF_1 = value;
	}

	inline static int32_t get_offset_of_KfRzIEuegWtinwFjtJcalwOMFnM_2() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___KfRzIEuegWtinwFjtJcalwOMFnM_2)); }
	inline bool get_KfRzIEuegWtinwFjtJcalwOMFnM_2() const { return ___KfRzIEuegWtinwFjtJcalwOMFnM_2; }
	inline bool* get_address_of_KfRzIEuegWtinwFjtJcalwOMFnM_2() { return &___KfRzIEuegWtinwFjtJcalwOMFnM_2; }
	inline void set_KfRzIEuegWtinwFjtJcalwOMFnM_2(bool value)
	{
		___KfRzIEuegWtinwFjtJcalwOMFnM_2 = value;
	}

	inline static int32_t get_offset_of_tSEulNlCOrPjXNmFOAFUAYOWdCW_3() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___tSEulNlCOrPjXNmFOAFUAYOWdCW_3)); }
	inline bool get_tSEulNlCOrPjXNmFOAFUAYOWdCW_3() const { return ___tSEulNlCOrPjXNmFOAFUAYOWdCW_3; }
	inline bool* get_address_of_tSEulNlCOrPjXNmFOAFUAYOWdCW_3() { return &___tSEulNlCOrPjXNmFOAFUAYOWdCW_3; }
	inline void set_tSEulNlCOrPjXNmFOAFUAYOWdCW_3(bool value)
	{
		___tSEulNlCOrPjXNmFOAFUAYOWdCW_3 = value;
	}

	inline static int32_t get_offset_of_XYMyeIGSgUUqCXIdclPPGARxDCQ_4() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___XYMyeIGSgUUqCXIdclPPGARxDCQ_4)); }
	inline float get_XYMyeIGSgUUqCXIdclPPGARxDCQ_4() const { return ___XYMyeIGSgUUqCXIdclPPGARxDCQ_4; }
	inline float* get_address_of_XYMyeIGSgUUqCXIdclPPGARxDCQ_4() { return &___XYMyeIGSgUUqCXIdclPPGARxDCQ_4; }
	inline void set_XYMyeIGSgUUqCXIdclPPGARxDCQ_4(float value)
	{
		___XYMyeIGSgUUqCXIdclPPGARxDCQ_4 = value;
	}

	inline static int32_t get_offset_of_BbsJqmLrWxMZcYnLfhyjmyXQSDm_5() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___BbsJqmLrWxMZcYnLfhyjmyXQSDm_5)); }
	inline float get_BbsJqmLrWxMZcYnLfhyjmyXQSDm_5() const { return ___BbsJqmLrWxMZcYnLfhyjmyXQSDm_5; }
	inline float* get_address_of_BbsJqmLrWxMZcYnLfhyjmyXQSDm_5() { return &___BbsJqmLrWxMZcYnLfhyjmyXQSDm_5; }
	inline void set_BbsJqmLrWxMZcYnLfhyjmyXQSDm_5(float value)
	{
		___BbsJqmLrWxMZcYnLfhyjmyXQSDm_5 = value;
	}

	inline static int32_t get_offset_of_VqBddDioDyqDFiwGCVwjoyPDfDAf_6() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___VqBddDioDyqDFiwGCVwjoyPDfDAf_6)); }
	inline SafeAction_1_tA11ADD9DAB6EF8AEDCEBEB2219B2D1624292FB90 * get_VqBddDioDyqDFiwGCVwjoyPDfDAf_6() const { return ___VqBddDioDyqDFiwGCVwjoyPDfDAf_6; }
	inline SafeAction_1_tA11ADD9DAB6EF8AEDCEBEB2219B2D1624292FB90 ** get_address_of_VqBddDioDyqDFiwGCVwjoyPDfDAf_6() { return &___VqBddDioDyqDFiwGCVwjoyPDfDAf_6; }
	inline void set_VqBddDioDyqDFiwGCVwjoyPDfDAf_6(SafeAction_1_tA11ADD9DAB6EF8AEDCEBEB2219B2D1624292FB90 * value)
	{
		___VqBddDioDyqDFiwGCVwjoyPDfDAf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VqBddDioDyqDFiwGCVwjoyPDfDAf_6), (void*)value);
	}

	inline static int32_t get_offset_of_UZpgVWVMSMxmqseLggWqlYVOmlv_7() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___UZpgVWVMSMxmqseLggWqlYVOmlv_7)); }
	inline SafeAction_1_tA11ADD9DAB6EF8AEDCEBEB2219B2D1624292FB90 * get_UZpgVWVMSMxmqseLggWqlYVOmlv_7() const { return ___UZpgVWVMSMxmqseLggWqlYVOmlv_7; }
	inline SafeAction_1_tA11ADD9DAB6EF8AEDCEBEB2219B2D1624292FB90 ** get_address_of_UZpgVWVMSMxmqseLggWqlYVOmlv_7() { return &___UZpgVWVMSMxmqseLggWqlYVOmlv_7; }
	inline void set_UZpgVWVMSMxmqseLggWqlYVOmlv_7(SafeAction_1_tA11ADD9DAB6EF8AEDCEBEB2219B2D1624292FB90 * value)
	{
		___UZpgVWVMSMxmqseLggWqlYVOmlv_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UZpgVWVMSMxmqseLggWqlYVOmlv_7), (void*)value);
	}

	inline static int32_t get_offset_of_nClbQwQPIOnnHFhPFHLPipLXAUWR_8() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___nClbQwQPIOnnHFhPFHLPipLXAUWR_8)); }
	inline XOUXKFmDauQRcgFLXykxdGnytYO_tEA3238F1006D794970CFC28E9908F81C3D9435BC * get_nClbQwQPIOnnHFhPFHLPipLXAUWR_8() const { return ___nClbQwQPIOnnHFhPFHLPipLXAUWR_8; }
	inline XOUXKFmDauQRcgFLXykxdGnytYO_tEA3238F1006D794970CFC28E9908F81C3D9435BC ** get_address_of_nClbQwQPIOnnHFhPFHLPipLXAUWR_8() { return &___nClbQwQPIOnnHFhPFHLPipLXAUWR_8; }
	inline void set_nClbQwQPIOnnHFhPFHLPipLXAUWR_8(XOUXKFmDauQRcgFLXykxdGnytYO_tEA3238F1006D794970CFC28E9908F81C3D9435BC * value)
	{
		___nClbQwQPIOnnHFhPFHLPipLXAUWR_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nClbQwQPIOnnHFhPFHLPipLXAUWR_8), (void*)value);
	}

	inline static int32_t get_offset_of_GTyehtjpWABkXDhwTdDFpaBldplb_9() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___GTyehtjpWABkXDhwTdDFpaBldplb_9)); }
	inline Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F * get_GTyehtjpWABkXDhwTdDFpaBldplb_9() const { return ___GTyehtjpWABkXDhwTdDFpaBldplb_9; }
	inline Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F ** get_address_of_GTyehtjpWABkXDhwTdDFpaBldplb_9() { return &___GTyehtjpWABkXDhwTdDFpaBldplb_9; }
	inline void set_GTyehtjpWABkXDhwTdDFpaBldplb_9(Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F * value)
	{
		___GTyehtjpWABkXDhwTdDFpaBldplb_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GTyehtjpWABkXDhwTdDFpaBldplb_9), (void*)value);
	}

	inline static int32_t get_offset_of_hCzBRLhYTVGDaaBQAgGvUDjdIwL_10() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___hCzBRLhYTVGDaaBQAgGvUDjdIwL_10)); }
	inline oXtnTogodcGKPKeQtmXCNVdeNoE_tF6ADDA62CF05DDB7636DF9869F829E7441232CC2 * get_hCzBRLhYTVGDaaBQAgGvUDjdIwL_10() const { return ___hCzBRLhYTVGDaaBQAgGvUDjdIwL_10; }
	inline oXtnTogodcGKPKeQtmXCNVdeNoE_tF6ADDA62CF05DDB7636DF9869F829E7441232CC2 ** get_address_of_hCzBRLhYTVGDaaBQAgGvUDjdIwL_10() { return &___hCzBRLhYTVGDaaBQAgGvUDjdIwL_10; }
	inline void set_hCzBRLhYTVGDaaBQAgGvUDjdIwL_10(oXtnTogodcGKPKeQtmXCNVdeNoE_tF6ADDA62CF05DDB7636DF9869F829E7441232CC2 * value)
	{
		___hCzBRLhYTVGDaaBQAgGvUDjdIwL_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hCzBRLhYTVGDaaBQAgGvUDjdIwL_10), (void*)value);
	}

	inline static int32_t get_offset_of_XRiLMbBOiecmHaqfwSBskCfekqL_11() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___XRiLMbBOiecmHaqfwSBskCfekqL_11)); }
	inline int32_t get_XRiLMbBOiecmHaqfwSBskCfekqL_11() const { return ___XRiLMbBOiecmHaqfwSBskCfekqL_11; }
	inline int32_t* get_address_of_XRiLMbBOiecmHaqfwSBskCfekqL_11() { return &___XRiLMbBOiecmHaqfwSBskCfekqL_11; }
	inline void set_XRiLMbBOiecmHaqfwSBskCfekqL_11(int32_t value)
	{
		___XRiLMbBOiecmHaqfwSBskCfekqL_11 = value;
	}

	inline static int32_t get_offset_of_maps_12() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___maps_12)); }
	inline MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92 * get_maps_12() const { return ___maps_12; }
	inline MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92 ** get_address_of_maps_12() { return &___maps_12; }
	inline void set_maps_12(MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92 * value)
	{
		___maps_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maps_12), (void*)value);
	}

	inline static int32_t get_offset_of_conflictChecking_13() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___conflictChecking_13)); }
	inline ConflictCheckingHelper_t3B5BA120121109EB2736D5466BA25742F049F1B1 * get_conflictChecking_13() const { return ___conflictChecking_13; }
	inline ConflictCheckingHelper_t3B5BA120121109EB2736D5466BA25742F049F1B1 ** get_address_of_conflictChecking_13() { return &___conflictChecking_13; }
	inline void set_conflictChecking_13(ConflictCheckingHelper_t3B5BA120121109EB2736D5466BA25742F049F1B1 * value)
	{
		___conflictChecking_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conflictChecking_13), (void*)value);
	}

	inline static int32_t get_offset_of_polling_14() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC, ___polling_14)); }
	inline PollingHelper_tE345DB668E84431AA09C97B278D2F36D1716CB24 * get_polling_14() const { return ___polling_14; }
	inline PollingHelper_tE345DB668E84431AA09C97B278D2F36D1716CB24 ** get_address_of_polling_14() { return &___polling_14; }
	inline void set_polling_14(PollingHelper_tE345DB668E84431AA09C97B278D2F36D1716CB24 * value)
	{
		___polling_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polling_14), (void*)value);
	}
};

struct ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC_StaticFields
{
public:
	// System.Action`1<System.Exception> Rewired.Player_ControllerHelper::qeRooqtCrhAnPfQQlxEgMJdiuTM
	Action_1_t114FA5D778AE43CC5A12F16A8CCD137F67ED6962 * ___qeRooqtCrhAnPfQQlxEgMJdiuTM_15;
	// System.Action`1<System.Exception> Rewired.Player_ControllerHelper::mxMdKreNJWPhUcsMjxWgyZHFWiLQ
	Action_1_t114FA5D778AE43CC5A12F16A8CCD137F67ED6962 * ___mxMdKreNJWPhUcsMjxWgyZHFWiLQ_16;

public:
	inline static int32_t get_offset_of_qeRooqtCrhAnPfQQlxEgMJdiuTM_15() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC_StaticFields, ___qeRooqtCrhAnPfQQlxEgMJdiuTM_15)); }
	inline Action_1_t114FA5D778AE43CC5A12F16A8CCD137F67ED6962 * get_qeRooqtCrhAnPfQQlxEgMJdiuTM_15() const { return ___qeRooqtCrhAnPfQQlxEgMJdiuTM_15; }
	inline Action_1_t114FA5D778AE43CC5A12F16A8CCD137F67ED6962 ** get_address_of_qeRooqtCrhAnPfQQlxEgMJdiuTM_15() { return &___qeRooqtCrhAnPfQQlxEgMJdiuTM_15; }
	inline void set_qeRooqtCrhAnPfQQlxEgMJdiuTM_15(Action_1_t114FA5D778AE43CC5A12F16A8CCD137F67ED6962 * value)
	{
		___qeRooqtCrhAnPfQQlxEgMJdiuTM_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qeRooqtCrhAnPfQQlxEgMJdiuTM_15), (void*)value);
	}

	inline static int32_t get_offset_of_mxMdKreNJWPhUcsMjxWgyZHFWiLQ_16() { return static_cast<int32_t>(offsetof(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC_StaticFields, ___mxMdKreNJWPhUcsMjxWgyZHFWiLQ_16)); }
	inline Action_1_t114FA5D778AE43CC5A12F16A8CCD137F67ED6962 * get_mxMdKreNJWPhUcsMjxWgyZHFWiLQ_16() const { return ___mxMdKreNJWPhUcsMjxWgyZHFWiLQ_16; }
	inline Action_1_t114FA5D778AE43CC5A12F16A8CCD137F67ED6962 ** get_address_of_mxMdKreNJWPhUcsMjxWgyZHFWiLQ_16() { return &___mxMdKreNJWPhUcsMjxWgyZHFWiLQ_16; }
	inline void set_mxMdKreNJWPhUcsMjxWgyZHFWiLQ_16(Action_1_t114FA5D778AE43CC5A12F16A8CCD137F67ED6962 * value)
	{
		___mxMdKreNJWPhUcsMjxWgyZHFWiLQ_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mxMdKreNJWPhUcsMjxWgyZHFWiLQ_16), (void*)value);
	}
};


// Rewired.Utils.Classes.CodeHelper
struct  CodeHelper_t8618ECFBF040A78FEDA26D398742608E1AA036AB  : public RuntimeObject
{
public:

public:
};

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

// Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo
struct  GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 
{
public:
	// UnityEngine.Sprite Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo::sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___sprite_0;
	// System.String Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo::text
	String_t* ___text_1;
	// System.String Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo::spriteAtlasName
	String_t* ___spriteAtlasName_2;

public:
	inline static int32_t get_offset_of_sprite_0() { return static_cast<int32_t>(offsetof(GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2, ___sprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_sprite_0() const { return ___sprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_sprite_0() { return &___sprite_0; }
	inline void set_sprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___sprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAtlasName_2() { return static_cast<int32_t>(offsetof(GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2, ___spriteAtlasName_2)); }
	inline String_t* get_spriteAtlasName_2() const { return ___spriteAtlasName_2; }
	inline String_t** get_address_of_spriteAtlasName_2() { return &___spriteAtlasName_2; }
	inline void set_spriteAtlasName_2(String_t* value)
	{
		___spriteAtlasName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAtlasName_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo
struct GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___sprite_0;
	char* ___text_1;
	char* ___spriteAtlasName_2;
};
// Native definition for COM marshalling of Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo
struct GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___sprite_0;
	Il2CppChar* ___text_1;
	Il2CppChar* ___spriteAtlasName_2;
};

// Rewired.Player_ControllerHelper_MapHelper
struct  MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92  : public CodeHelper_t8618ECFBF040A78FEDA26D398742608E1AA036AB
{
public:
	// jivAlIeTxgkfKLAvxWnUhUQShNEb Rewired.Player_ControllerHelper_MapHelper::SPwlTjxFvUZNvJxzgZFPYSaMihv
	jivAlIeTxgkfKLAvxWnUhUQShNEb_tF40853EB6FC68CC4C8D500312171EBC4107F53EC * ___SPwlTjxFvUZNvJxzgZFPYSaMihv_0;
	// Rewired.Player Rewired.Player_ControllerHelper_MapHelper::GTyehtjpWABkXDhwTdDFpaBldplb
	Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F * ___GTyehtjpWABkXDhwTdDFpaBldplb_1;
	// Rewired.Player_ControllerHelper Rewired.Player_ControllerHelper_MapHelper::sIKXUkmhktWoJNsXUPgDfKqmScA
	ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC * ___sIKXUkmhktWoJNsXUPgDfKqmScA_2;
	// Rewired.ControllerMapEnabler Rewired.Player_ControllerHelper_MapHelper::AtvAoYEkUEcuykdrMdAeVWwRsPg
	ControllerMapEnabler_t72022B3413E35CE64277E9F8F6F64236C8F0148D * ___AtvAoYEkUEcuykdrMdAeVWwRsPg_3;
	// Rewired.ControllerMapLayoutManager Rewired.Player_ControllerHelper_MapHelper::kvogSRrxobWwODeENvhBxffjPSz
	ControllerMapLayoutManager_t58D8D581E5DB2F37D020E1A35F0182997BE98781 * ___kvogSRrxobWwODeENvhBxffjPSz_4;
	// System.Int32 Rewired.Player_ControllerHelper_MapHelper::XRiLMbBOiecmHaqfwSBskCfekqL
	int32_t ___XRiLMbBOiecmHaqfwSBskCfekqL_5;

public:
	inline static int32_t get_offset_of_SPwlTjxFvUZNvJxzgZFPYSaMihv_0() { return static_cast<int32_t>(offsetof(MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92, ___SPwlTjxFvUZNvJxzgZFPYSaMihv_0)); }
	inline jivAlIeTxgkfKLAvxWnUhUQShNEb_tF40853EB6FC68CC4C8D500312171EBC4107F53EC * get_SPwlTjxFvUZNvJxzgZFPYSaMihv_0() const { return ___SPwlTjxFvUZNvJxzgZFPYSaMihv_0; }
	inline jivAlIeTxgkfKLAvxWnUhUQShNEb_tF40853EB6FC68CC4C8D500312171EBC4107F53EC ** get_address_of_SPwlTjxFvUZNvJxzgZFPYSaMihv_0() { return &___SPwlTjxFvUZNvJxzgZFPYSaMihv_0; }
	inline void set_SPwlTjxFvUZNvJxzgZFPYSaMihv_0(jivAlIeTxgkfKLAvxWnUhUQShNEb_tF40853EB6FC68CC4C8D500312171EBC4107F53EC * value)
	{
		___SPwlTjxFvUZNvJxzgZFPYSaMihv_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SPwlTjxFvUZNvJxzgZFPYSaMihv_0), (void*)value);
	}

	inline static int32_t get_offset_of_GTyehtjpWABkXDhwTdDFpaBldplb_1() { return static_cast<int32_t>(offsetof(MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92, ___GTyehtjpWABkXDhwTdDFpaBldplb_1)); }
	inline Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F * get_GTyehtjpWABkXDhwTdDFpaBldplb_1() const { return ___GTyehtjpWABkXDhwTdDFpaBldplb_1; }
	inline Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F ** get_address_of_GTyehtjpWABkXDhwTdDFpaBldplb_1() { return &___GTyehtjpWABkXDhwTdDFpaBldplb_1; }
	inline void set_GTyehtjpWABkXDhwTdDFpaBldplb_1(Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F * value)
	{
		___GTyehtjpWABkXDhwTdDFpaBldplb_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GTyehtjpWABkXDhwTdDFpaBldplb_1), (void*)value);
	}

	inline static int32_t get_offset_of_sIKXUkmhktWoJNsXUPgDfKqmScA_2() { return static_cast<int32_t>(offsetof(MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92, ___sIKXUkmhktWoJNsXUPgDfKqmScA_2)); }
	inline ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC * get_sIKXUkmhktWoJNsXUPgDfKqmScA_2() const { return ___sIKXUkmhktWoJNsXUPgDfKqmScA_2; }
	inline ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC ** get_address_of_sIKXUkmhktWoJNsXUPgDfKqmScA_2() { return &___sIKXUkmhktWoJNsXUPgDfKqmScA_2; }
	inline void set_sIKXUkmhktWoJNsXUPgDfKqmScA_2(ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC * value)
	{
		___sIKXUkmhktWoJNsXUPgDfKqmScA_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sIKXUkmhktWoJNsXUPgDfKqmScA_2), (void*)value);
	}

	inline static int32_t get_offset_of_AtvAoYEkUEcuykdrMdAeVWwRsPg_3() { return static_cast<int32_t>(offsetof(MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92, ___AtvAoYEkUEcuykdrMdAeVWwRsPg_3)); }
	inline ControllerMapEnabler_t72022B3413E35CE64277E9F8F6F64236C8F0148D * get_AtvAoYEkUEcuykdrMdAeVWwRsPg_3() const { return ___AtvAoYEkUEcuykdrMdAeVWwRsPg_3; }
	inline ControllerMapEnabler_t72022B3413E35CE64277E9F8F6F64236C8F0148D ** get_address_of_AtvAoYEkUEcuykdrMdAeVWwRsPg_3() { return &___AtvAoYEkUEcuykdrMdAeVWwRsPg_3; }
	inline void set_AtvAoYEkUEcuykdrMdAeVWwRsPg_3(ControllerMapEnabler_t72022B3413E35CE64277E9F8F6F64236C8F0148D * value)
	{
		___AtvAoYEkUEcuykdrMdAeVWwRsPg_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AtvAoYEkUEcuykdrMdAeVWwRsPg_3), (void*)value);
	}

	inline static int32_t get_offset_of_kvogSRrxobWwODeENvhBxffjPSz_4() { return static_cast<int32_t>(offsetof(MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92, ___kvogSRrxobWwODeENvhBxffjPSz_4)); }
	inline ControllerMapLayoutManager_t58D8D581E5DB2F37D020E1A35F0182997BE98781 * get_kvogSRrxobWwODeENvhBxffjPSz_4() const { return ___kvogSRrxobWwODeENvhBxffjPSz_4; }
	inline ControllerMapLayoutManager_t58D8D581E5DB2F37D020E1A35F0182997BE98781 ** get_address_of_kvogSRrxobWwODeENvhBxffjPSz_4() { return &___kvogSRrxobWwODeENvhBxffjPSz_4; }
	inline void set_kvogSRrxobWwODeENvhBxffjPSz_4(ControllerMapLayoutManager_t58D8D581E5DB2F37D020E1A35F0182997BE98781 * value)
	{
		___kvogSRrxobWwODeENvhBxffjPSz_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kvogSRrxobWwODeENvhBxffjPSz_4), (void*)value);
	}

	inline static int32_t get_offset_of_XRiLMbBOiecmHaqfwSBskCfekqL_5() { return static_cast<int32_t>(offsetof(MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92, ___XRiLMbBOiecmHaqfwSBskCfekqL_5)); }
	inline int32_t get_XRiLMbBOiecmHaqfwSBskCfekqL_5() const { return ___XRiLMbBOiecmHaqfwSBskCfekqL_5; }
	inline int32_t* get_address_of_XRiLMbBOiecmHaqfwSBskCfekqL_5() { return &___XRiLMbBOiecmHaqfwSBskCfekqL_5; }
	inline void set_XRiLMbBOiecmHaqfwSBskCfekqL_5(int32_t value)
	{
		___XRiLMbBOiecmHaqfwSBskCfekqL_5 = value;
	}
};


// Rewired.ReInput_ControllerHelper
struct  ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62  : public CodeHelper_t8618ECFBF040A78FEDA26D398742608E1AA036AB
{
public:
	// Rewired.ReInput_ControllerHelper_PollingHelper Rewired.ReInput_ControllerHelper::polling
	PollingHelper_t69EDA9E24833EACC807B10BC63FCE58E1090A29A * ___polling_1;
	// Rewired.ReInput_ControllerHelper_ConflictCheckingHelper Rewired.ReInput_ControllerHelper::conflictChecking
	ConflictCheckingHelper_t86BCFF8098407F0F2AC252C2EDB520222E11E531 * ___conflictChecking_2;

public:
	inline static int32_t get_offset_of_polling_1() { return static_cast<int32_t>(offsetof(ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62, ___polling_1)); }
	inline PollingHelper_t69EDA9E24833EACC807B10BC63FCE58E1090A29A * get_polling_1() const { return ___polling_1; }
	inline PollingHelper_t69EDA9E24833EACC807B10BC63FCE58E1090A29A ** get_address_of_polling_1() { return &___polling_1; }
	inline void set_polling_1(PollingHelper_t69EDA9E24833EACC807B10BC63FCE58E1090A29A * value)
	{
		___polling_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polling_1), (void*)value);
	}

	inline static int32_t get_offset_of_conflictChecking_2() { return static_cast<int32_t>(offsetof(ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62, ___conflictChecking_2)); }
	inline ConflictCheckingHelper_t86BCFF8098407F0F2AC252C2EDB520222E11E531 * get_conflictChecking_2() const { return ___conflictChecking_2; }
	inline ConflictCheckingHelper_t86BCFF8098407F0F2AC252C2EDB520222E11E531 ** get_address_of_conflictChecking_2() { return &___conflictChecking_2; }
	inline void set_conflictChecking_2(ConflictCheckingHelper_t86BCFF8098407F0F2AC252C2EDB520222E11E531 * value)
	{
		___conflictChecking_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conflictChecking_2), (void*)value);
	}
};

struct ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62_StaticFields
{
public:
	// Rewired.ReInput_ControllerHelper Rewired.ReInput_ControllerHelper::SKaSgvEcTBKFypeqLENThspQhtg
	ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 * ___SKaSgvEcTBKFypeqLENThspQhtg_0;

public:
	inline static int32_t get_offset_of_SKaSgvEcTBKFypeqLENThspQhtg_0() { return static_cast<int32_t>(offsetof(ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62_StaticFields, ___SKaSgvEcTBKFypeqLENThspQhtg_0)); }
	inline ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 * get_SKaSgvEcTBKFypeqLENThspQhtg_0() const { return ___SKaSgvEcTBKFypeqLENThspQhtg_0; }
	inline ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 ** get_address_of_SKaSgvEcTBKFypeqLENThspQhtg_0() { return &___SKaSgvEcTBKFypeqLENThspQhtg_0; }
	inline void set_SKaSgvEcTBKFypeqLENThspQhtg_0(ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 * value)
	{
		___SKaSgvEcTBKFypeqLENThspQhtg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SKaSgvEcTBKFypeqLENThspQhtg_0), (void*)value);
	}
};


// Rewired.ReInput_MappingHelper
struct  MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6  : public CodeHelper_t8618ECFBF040A78FEDA26D398742608E1AA036AB
{
public:

public:
};

struct MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6_StaticFields
{
public:
	// Rewired.ReInput_MappingHelper Rewired.ReInput_MappingHelper::SKaSgvEcTBKFypeqLENThspQhtg
	MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * ___SKaSgvEcTBKFypeqLENThspQhtg_0;

public:
	inline static int32_t get_offset_of_SKaSgvEcTBKFypeqLENThspQhtg_0() { return static_cast<int32_t>(offsetof(MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6_StaticFields, ___SKaSgvEcTBKFypeqLENThspQhtg_0)); }
	inline MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * get_SKaSgvEcTBKFypeqLENThspQhtg_0() const { return ___SKaSgvEcTBKFypeqLENThspQhtg_0; }
	inline MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 ** get_address_of_SKaSgvEcTBKFypeqLENThspQhtg_0() { return &___SKaSgvEcTBKFypeqLENThspQhtg_0; }
	inline void set_SKaSgvEcTBKFypeqLENThspQhtg_0(MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * value)
	{
		___SKaSgvEcTBKFypeqLENThspQhtg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SKaSgvEcTBKFypeqLENThspQhtg_0), (void*)value);
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
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


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// Rewired.AxisRange
struct  AxisRange_tA638B2A1F196452BCDD82118BFBB4C3E6F60D652 
{
public:
	// System.Int32 Rewired.AxisRange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisRange_tA638B2A1F196452BCDD82118BFBB4C3E6F60D652, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.CompoundControllerElementType
struct  CompoundControllerElementType_t38C73D05390CC2625D0760EB81BACFDEC36EB6B2 
{
public:
	// System.Int32 Rewired.CompoundControllerElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompoundControllerElementType_t38C73D05390CC2625D0760EB81BACFDEC36EB6B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ControllerElementType
struct  ControllerElementType_t02BD9FCE85DCC570ED6DBB195E970B84462558BA 
{
public:
	// System.Int32 Rewired.ControllerElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControllerElementType_t02BD9FCE85DCC570ED6DBB195E970B84462558BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ControllerType
struct  ControllerType_t5D12288D0D40A6917EAF01DB5DE37090A586B2D4 
{
public:
	// System.Int32 Rewired.ControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControllerType_t5D12288D0D40A6917EAF01DB5DE37090A586B2D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.InputActionType
struct  InputActionType_t4764596952F35642172A92C2B52AF61BF19955A4 
{
public:
	// System.Int32 Rewired.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_t4764596952F35642172A92C2B52AF61BF19955A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.InputSource
struct  InputSource_t704235FB75FAAFE4F5ADF403D5028663D7E75D3B 
{
public:
	// System.Int32 Rewired.InputSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSource_t704235FB75FAAFE4F5ADF403D5028663D7E75D3B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.KeyboardKeyCode
struct  KeyboardKeyCode_tD0801C51ECEC814EC673F6E1849B0264EC307854 
{
public:
	// System.Int32 Rewired.KeyboardKeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyboardKeyCode_tD0801C51ECEC814EC673F6E1849B0264EC307854, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ModifierKey
struct  ModifierKey_t300DA428522CD195A6C4121312A8A2BD4EA7ACE0 
{
public:
	// System.Int32 Rewired.ModifierKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ModifierKey_t300DA428522CD195A6C4121312A8A2BD4EA7ACE0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ModifierKeyFlags
struct  ModifierKeyFlags_t4E8D341CA3EDC0A08C57C86EAB6FA1917CB65651 
{
public:
	// System.Int32 Rewired.ModifierKeyFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ModifierKeyFlags_t4E8D341CA3EDC0A08C57C86EAB6FA1917CB65651, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.Pole
struct  Pole_t67AC5251C8FF2201B5D8F674A185F8786845BE3C 
{
public:
	// System.Int32 Rewired.Pole::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pole_t67AC5251C8FF2201B5D8F674A185F8786845BE3C, ___value___2)); }
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

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ActionElementMap
struct  ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ActionElementMap::_actionCategoryId
	int32_t ____actionCategoryId_0;
	// System.Int32 Rewired.ActionElementMap::_actionId
	int32_t ____actionId_1;
	// Rewired.ControllerElementType Rewired.ActionElementMap::_elementType
	int32_t ____elementType_2;
	// System.Int32 Rewired.ActionElementMap::_elementIdentifierId
	int32_t ____elementIdentifierId_3;
	// Rewired.AxisRange Rewired.ActionElementMap::_axisRange
	int32_t ____axisRange_4;
	// System.Boolean Rewired.ActionElementMap::_invert
	bool ____invert_5;
	// Rewired.Pole Rewired.ActionElementMap::_axisContribution
	int32_t ____axisContribution_6;
	// Rewired.KeyboardKeyCode Rewired.ActionElementMap::_keyboardKeyCode
	int32_t ____keyboardKeyCode_7;
	// Rewired.ModifierKey Rewired.ActionElementMap::_modifierKey1
	int32_t ____modifierKey1_8;
	// Rewired.ModifierKey Rewired.ActionElementMap::_modifierKey2
	int32_t ____modifierKey2_9;
	// Rewired.ModifierKey Rewired.ActionElementMap::_modifierKey3
	int32_t ____modifierKey3_10;
	// Rewired.ControllerMap Rewired.ActionElementMap::dEHGvBFAZExdrGYrzYsIMQPndgw
	ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * ___dEHGvBFAZExdrGYrzYsIMQPndgw_11;
	// System.Boolean Rewired.ActionElementMap::fnEgHedGGTIhZFVgBCvIMHGQrCIX
	bool ___fnEgHedGGTIhZFVgBCvIMHGQrCIX_12;
	// System.String Rewired.ActionElementMap::EFiIWrBaYkVUDRnhFLUglPmQJRrp
	String_t* ___EFiIWrBaYkVUDRnhFLUglPmQJRrp_13;
	// System.String Rewired.ActionElementMap::VLNqOiKKonytFFaVoCqRrLSMJAo
	String_t* ___VLNqOiKKonytFFaVoCqRrLSMJAo_14;
	// System.Int32 Rewired.ActionElementMap::CtZFwDLIxxtEJxezcGxpiRuielWC
	int32_t ___CtZFwDLIxxtEJxezcGxpiRuielWC_15;
	// System.Int32 Rewired.ActionElementMap::JYVLucfrtTNrKVxEqPQOOFTpfkmg
	int32_t ___JYVLucfrtTNrKVxEqPQOOFTpfkmg_16;

public:
	inline static int32_t get_offset_of__actionCategoryId_0() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ____actionCategoryId_0)); }
	inline int32_t get__actionCategoryId_0() const { return ____actionCategoryId_0; }
	inline int32_t* get_address_of__actionCategoryId_0() { return &____actionCategoryId_0; }
	inline void set__actionCategoryId_0(int32_t value)
	{
		____actionCategoryId_0 = value;
	}

	inline static int32_t get_offset_of__actionId_1() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ____actionId_1)); }
	inline int32_t get__actionId_1() const { return ____actionId_1; }
	inline int32_t* get_address_of__actionId_1() { return &____actionId_1; }
	inline void set__actionId_1(int32_t value)
	{
		____actionId_1 = value;
	}

	inline static int32_t get_offset_of__elementType_2() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ____elementType_2)); }
	inline int32_t get__elementType_2() const { return ____elementType_2; }
	inline int32_t* get_address_of__elementType_2() { return &____elementType_2; }
	inline void set__elementType_2(int32_t value)
	{
		____elementType_2 = value;
	}

	inline static int32_t get_offset_of__elementIdentifierId_3() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ____elementIdentifierId_3)); }
	inline int32_t get__elementIdentifierId_3() const { return ____elementIdentifierId_3; }
	inline int32_t* get_address_of__elementIdentifierId_3() { return &____elementIdentifierId_3; }
	inline void set__elementIdentifierId_3(int32_t value)
	{
		____elementIdentifierId_3 = value;
	}

	inline static int32_t get_offset_of__axisRange_4() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ____axisRange_4)); }
	inline int32_t get__axisRange_4() const { return ____axisRange_4; }
	inline int32_t* get_address_of__axisRange_4() { return &____axisRange_4; }
	inline void set__axisRange_4(int32_t value)
	{
		____axisRange_4 = value;
	}

	inline static int32_t get_offset_of__invert_5() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ____invert_5)); }
	inline bool get__invert_5() const { return ____invert_5; }
	inline bool* get_address_of__invert_5() { return &____invert_5; }
	inline void set__invert_5(bool value)
	{
		____invert_5 = value;
	}

	inline static int32_t get_offset_of__axisContribution_6() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ____axisContribution_6)); }
	inline int32_t get__axisContribution_6() const { return ____axisContribution_6; }
	inline int32_t* get_address_of__axisContribution_6() { return &____axisContribution_6; }
	inline void set__axisContribution_6(int32_t value)
	{
		____axisContribution_6 = value;
	}

	inline static int32_t get_offset_of__keyboardKeyCode_7() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ____keyboardKeyCode_7)); }
	inline int32_t get__keyboardKeyCode_7() const { return ____keyboardKeyCode_7; }
	inline int32_t* get_address_of__keyboardKeyCode_7() { return &____keyboardKeyCode_7; }
	inline void set__keyboardKeyCode_7(int32_t value)
	{
		____keyboardKeyCode_7 = value;
	}

	inline static int32_t get_offset_of__modifierKey1_8() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ____modifierKey1_8)); }
	inline int32_t get__modifierKey1_8() const { return ____modifierKey1_8; }
	inline int32_t* get_address_of__modifierKey1_8() { return &____modifierKey1_8; }
	inline void set__modifierKey1_8(int32_t value)
	{
		____modifierKey1_8 = value;
	}

	inline static int32_t get_offset_of__modifierKey2_9() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ____modifierKey2_9)); }
	inline int32_t get__modifierKey2_9() const { return ____modifierKey2_9; }
	inline int32_t* get_address_of__modifierKey2_9() { return &____modifierKey2_9; }
	inline void set__modifierKey2_9(int32_t value)
	{
		____modifierKey2_9 = value;
	}

	inline static int32_t get_offset_of__modifierKey3_10() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ____modifierKey3_10)); }
	inline int32_t get__modifierKey3_10() const { return ____modifierKey3_10; }
	inline int32_t* get_address_of__modifierKey3_10() { return &____modifierKey3_10; }
	inline void set__modifierKey3_10(int32_t value)
	{
		____modifierKey3_10 = value;
	}

	inline static int32_t get_offset_of_dEHGvBFAZExdrGYrzYsIMQPndgw_11() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ___dEHGvBFAZExdrGYrzYsIMQPndgw_11)); }
	inline ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * get_dEHGvBFAZExdrGYrzYsIMQPndgw_11() const { return ___dEHGvBFAZExdrGYrzYsIMQPndgw_11; }
	inline ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB ** get_address_of_dEHGvBFAZExdrGYrzYsIMQPndgw_11() { return &___dEHGvBFAZExdrGYrzYsIMQPndgw_11; }
	inline void set_dEHGvBFAZExdrGYrzYsIMQPndgw_11(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * value)
	{
		___dEHGvBFAZExdrGYrzYsIMQPndgw_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dEHGvBFAZExdrGYrzYsIMQPndgw_11), (void*)value);
	}

	inline static int32_t get_offset_of_fnEgHedGGTIhZFVgBCvIMHGQrCIX_12() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ___fnEgHedGGTIhZFVgBCvIMHGQrCIX_12)); }
	inline bool get_fnEgHedGGTIhZFVgBCvIMHGQrCIX_12() const { return ___fnEgHedGGTIhZFVgBCvIMHGQrCIX_12; }
	inline bool* get_address_of_fnEgHedGGTIhZFVgBCvIMHGQrCIX_12() { return &___fnEgHedGGTIhZFVgBCvIMHGQrCIX_12; }
	inline void set_fnEgHedGGTIhZFVgBCvIMHGQrCIX_12(bool value)
	{
		___fnEgHedGGTIhZFVgBCvIMHGQrCIX_12 = value;
	}

	inline static int32_t get_offset_of_EFiIWrBaYkVUDRnhFLUglPmQJRrp_13() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ___EFiIWrBaYkVUDRnhFLUglPmQJRrp_13)); }
	inline String_t* get_EFiIWrBaYkVUDRnhFLUglPmQJRrp_13() const { return ___EFiIWrBaYkVUDRnhFLUglPmQJRrp_13; }
	inline String_t** get_address_of_EFiIWrBaYkVUDRnhFLUglPmQJRrp_13() { return &___EFiIWrBaYkVUDRnhFLUglPmQJRrp_13; }
	inline void set_EFiIWrBaYkVUDRnhFLUglPmQJRrp_13(String_t* value)
	{
		___EFiIWrBaYkVUDRnhFLUglPmQJRrp_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EFiIWrBaYkVUDRnhFLUglPmQJRrp_13), (void*)value);
	}

	inline static int32_t get_offset_of_VLNqOiKKonytFFaVoCqRrLSMJAo_14() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ___VLNqOiKKonytFFaVoCqRrLSMJAo_14)); }
	inline String_t* get_VLNqOiKKonytFFaVoCqRrLSMJAo_14() const { return ___VLNqOiKKonytFFaVoCqRrLSMJAo_14; }
	inline String_t** get_address_of_VLNqOiKKonytFFaVoCqRrLSMJAo_14() { return &___VLNqOiKKonytFFaVoCqRrLSMJAo_14; }
	inline void set_VLNqOiKKonytFFaVoCqRrLSMJAo_14(String_t* value)
	{
		___VLNqOiKKonytFFaVoCqRrLSMJAo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VLNqOiKKonytFFaVoCqRrLSMJAo_14), (void*)value);
	}

	inline static int32_t get_offset_of_CtZFwDLIxxtEJxezcGxpiRuielWC_15() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ___CtZFwDLIxxtEJxezcGxpiRuielWC_15)); }
	inline int32_t get_CtZFwDLIxxtEJxezcGxpiRuielWC_15() const { return ___CtZFwDLIxxtEJxezcGxpiRuielWC_15; }
	inline int32_t* get_address_of_CtZFwDLIxxtEJxezcGxpiRuielWC_15() { return &___CtZFwDLIxxtEJxezcGxpiRuielWC_15; }
	inline void set_CtZFwDLIxxtEJxezcGxpiRuielWC_15(int32_t value)
	{
		___CtZFwDLIxxtEJxezcGxpiRuielWC_15 = value;
	}

	inline static int32_t get_offset_of_JYVLucfrtTNrKVxEqPQOOFTpfkmg_16() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7, ___JYVLucfrtTNrKVxEqPQOOFTpfkmg_16)); }
	inline int32_t get_JYVLucfrtTNrKVxEqPQOOFTpfkmg_16() const { return ___JYVLucfrtTNrKVxEqPQOOFTpfkmg_16; }
	inline int32_t* get_address_of_JYVLucfrtTNrKVxEqPQOOFTpfkmg_16() { return &___JYVLucfrtTNrKVxEqPQOOFTpfkmg_16; }
	inline void set_JYVLucfrtTNrKVxEqPQOOFTpfkmg_16(int32_t value)
	{
		___JYVLucfrtTNrKVxEqPQOOFTpfkmg_16 = value;
	}
};

struct ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7_StaticFields
{
public:
	// System.Int32 Rewired.ActionElementMap::uidCounter
	int32_t ___uidCounter_17;
	// System.Text.StringBuilder Rewired.ActionElementMap::s_toStringSB
	StringBuilder_t * ___s_toStringSB_18;

public:
	inline static int32_t get_offset_of_uidCounter_17() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7_StaticFields, ___uidCounter_17)); }
	inline int32_t get_uidCounter_17() const { return ___uidCounter_17; }
	inline int32_t* get_address_of_uidCounter_17() { return &___uidCounter_17; }
	inline void set_uidCounter_17(int32_t value)
	{
		___uidCounter_17 = value;
	}

	inline static int32_t get_offset_of_s_toStringSB_18() { return static_cast<int32_t>(offsetof(ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7_StaticFields, ___s_toStringSB_18)); }
	inline StringBuilder_t * get_s_toStringSB_18() const { return ___s_toStringSB_18; }
	inline StringBuilder_t ** get_address_of_s_toStringSB_18() { return &___s_toStringSB_18; }
	inline void set_s_toStringSB_18(StringBuilder_t * value)
	{
		___s_toStringSB_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_toStringSB_18), (void*)value);
	}
};


// Rewired.ControllerElementIdentifier
struct  ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ControllerElementIdentifier::_id
	int32_t ____id_0;
	// System.String Rewired.ControllerElementIdentifier::_name
	String_t* ____name_1;
	// System.String Rewired.ControllerElementIdentifier::_positiveName
	String_t* ____positiveName_2;
	// System.String Rewired.ControllerElementIdentifier::_negativeName
	String_t* ____negativeName_3;
	// Rewired.ControllerElementType Rewired.ControllerElementIdentifier::_elementType
	int32_t ____elementType_4;
	// Rewired.CompoundControllerElementType Rewired.ControllerElementIdentifier::_compoundElementType
	int32_t ____compoundElementType_5;
	// System.Boolean Rewired.ControllerElementIdentifier::isMappableOnPlatform
	bool ___isMappableOnPlatform_6;
	// System.Boolean Rewired.ControllerElementIdentifier::WxRPixZvUROOepXWuIkwTVaRTIQ
	bool ___WxRPixZvUROOepXWuIkwTVaRTIQ_7;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66, ____id_0)); }
	inline int32_t get__id_0() const { return ____id_0; }
	inline int32_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(int32_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_1), (void*)value);
	}

	inline static int32_t get_offset_of__positiveName_2() { return static_cast<int32_t>(offsetof(ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66, ____positiveName_2)); }
	inline String_t* get__positiveName_2() const { return ____positiveName_2; }
	inline String_t** get_address_of__positiveName_2() { return &____positiveName_2; }
	inline void set__positiveName_2(String_t* value)
	{
		____positiveName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____positiveName_2), (void*)value);
	}

	inline static int32_t get_offset_of__negativeName_3() { return static_cast<int32_t>(offsetof(ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66, ____negativeName_3)); }
	inline String_t* get__negativeName_3() const { return ____negativeName_3; }
	inline String_t** get_address_of__negativeName_3() { return &____negativeName_3; }
	inline void set__negativeName_3(String_t* value)
	{
		____negativeName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____negativeName_3), (void*)value);
	}

	inline static int32_t get_offset_of__elementType_4() { return static_cast<int32_t>(offsetof(ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66, ____elementType_4)); }
	inline int32_t get__elementType_4() const { return ____elementType_4; }
	inline int32_t* get_address_of__elementType_4() { return &____elementType_4; }
	inline void set__elementType_4(int32_t value)
	{
		____elementType_4 = value;
	}

	inline static int32_t get_offset_of__compoundElementType_5() { return static_cast<int32_t>(offsetof(ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66, ____compoundElementType_5)); }
	inline int32_t get__compoundElementType_5() const { return ____compoundElementType_5; }
	inline int32_t* get_address_of__compoundElementType_5() { return &____compoundElementType_5; }
	inline void set__compoundElementType_5(int32_t value)
	{
		____compoundElementType_5 = value;
	}

	inline static int32_t get_offset_of_isMappableOnPlatform_6() { return static_cast<int32_t>(offsetof(ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66, ___isMappableOnPlatform_6)); }
	inline bool get_isMappableOnPlatform_6() const { return ___isMappableOnPlatform_6; }
	inline bool* get_address_of_isMappableOnPlatform_6() { return &___isMappableOnPlatform_6; }
	inline void set_isMappableOnPlatform_6(bool value)
	{
		___isMappableOnPlatform_6 = value;
	}

	inline static int32_t get_offset_of_WxRPixZvUROOepXWuIkwTVaRTIQ_7() { return static_cast<int32_t>(offsetof(ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66, ___WxRPixZvUROOepXWuIkwTVaRTIQ_7)); }
	inline bool get_WxRPixZvUROOepXWuIkwTVaRTIQ_7() const { return ___WxRPixZvUROOepXWuIkwTVaRTIQ_7; }
	inline bool* get_address_of_WxRPixZvUROOepXWuIkwTVaRTIQ_7() { return &___WxRPixZvUROOepXWuIkwTVaRTIQ_7; }
	inline void set_WxRPixZvUROOepXWuIkwTVaRTIQ_7(bool value)
	{
		___WxRPixZvUROOepXWuIkwTVaRTIQ_7 = value;
	}
};

struct ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66_StaticFields
{
public:
	// Rewired.ControllerElementIdentifier Rewired.ControllerElementIdentifier::AopiYsqKmOCtSMLhVBrkbTtCWLW
	ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * ___AopiYsqKmOCtSMLhVBrkbTtCWLW_8;

public:
	inline static int32_t get_offset_of_AopiYsqKmOCtSMLhVBrkbTtCWLW_8() { return static_cast<int32_t>(offsetof(ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66_StaticFields, ___AopiYsqKmOCtSMLhVBrkbTtCWLW_8)); }
	inline ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * get_AopiYsqKmOCtSMLhVBrkbTtCWLW_8() const { return ___AopiYsqKmOCtSMLhVBrkbTtCWLW_8; }
	inline ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 ** get_address_of_AopiYsqKmOCtSMLhVBrkbTtCWLW_8() { return &___AopiYsqKmOCtSMLhVBrkbTtCWLW_8; }
	inline void set_AopiYsqKmOCtSMLhVBrkbTtCWLW_8(ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * value)
	{
		___AopiYsqKmOCtSMLhVBrkbTtCWLW_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AopiYsqKmOCtSMLhVBrkbTtCWLW_8), (void*)value);
	}
};


// Rewired.ControllerIdentifier
struct  ControllerIdentifier_t725D2A7A9387931F93131874C32B08A3BCFF9DD6 
{
public:
	// System.Int32 Rewired.ControllerIdentifier::RsdRxoYtACpWUxaljACOKVTUFUQG
	int32_t ___RsdRxoYtACpWUxaljACOKVTUFUQG_0;
	// Rewired.ControllerType Rewired.ControllerIdentifier::JjncvnyXkxUQBKPGilMFeLuJlVV
	int32_t ___JjncvnyXkxUQBKPGilMFeLuJlVV_1;
	// System.Guid Rewired.ControllerIdentifier::gluVFzqymVBSvnEcIgFcHIerhjMH
	Guid_t  ___gluVFzqymVBSvnEcIgFcHIerhjMH_2;
	// System.String Rewired.ControllerIdentifier::qqypdEWhNuIpZgZUUsfbSmMbqYm
	String_t* ___qqypdEWhNuIpZgZUUsfbSmMbqYm_3;
	// System.Guid Rewired.ControllerIdentifier::nDDIHEihARcYXZdPJHsZTFJsipPv
	Guid_t  ___nDDIHEihARcYXZdPJHsZTFJsipPv_4;

public:
	inline static int32_t get_offset_of_RsdRxoYtACpWUxaljACOKVTUFUQG_0() { return static_cast<int32_t>(offsetof(ControllerIdentifier_t725D2A7A9387931F93131874C32B08A3BCFF9DD6, ___RsdRxoYtACpWUxaljACOKVTUFUQG_0)); }
	inline int32_t get_RsdRxoYtACpWUxaljACOKVTUFUQG_0() const { return ___RsdRxoYtACpWUxaljACOKVTUFUQG_0; }
	inline int32_t* get_address_of_RsdRxoYtACpWUxaljACOKVTUFUQG_0() { return &___RsdRxoYtACpWUxaljACOKVTUFUQG_0; }
	inline void set_RsdRxoYtACpWUxaljACOKVTUFUQG_0(int32_t value)
	{
		___RsdRxoYtACpWUxaljACOKVTUFUQG_0 = value;
	}

	inline static int32_t get_offset_of_JjncvnyXkxUQBKPGilMFeLuJlVV_1() { return static_cast<int32_t>(offsetof(ControllerIdentifier_t725D2A7A9387931F93131874C32B08A3BCFF9DD6, ___JjncvnyXkxUQBKPGilMFeLuJlVV_1)); }
	inline int32_t get_JjncvnyXkxUQBKPGilMFeLuJlVV_1() const { return ___JjncvnyXkxUQBKPGilMFeLuJlVV_1; }
	inline int32_t* get_address_of_JjncvnyXkxUQBKPGilMFeLuJlVV_1() { return &___JjncvnyXkxUQBKPGilMFeLuJlVV_1; }
	inline void set_JjncvnyXkxUQBKPGilMFeLuJlVV_1(int32_t value)
	{
		___JjncvnyXkxUQBKPGilMFeLuJlVV_1 = value;
	}

	inline static int32_t get_offset_of_gluVFzqymVBSvnEcIgFcHIerhjMH_2() { return static_cast<int32_t>(offsetof(ControllerIdentifier_t725D2A7A9387931F93131874C32B08A3BCFF9DD6, ___gluVFzqymVBSvnEcIgFcHIerhjMH_2)); }
	inline Guid_t  get_gluVFzqymVBSvnEcIgFcHIerhjMH_2() const { return ___gluVFzqymVBSvnEcIgFcHIerhjMH_2; }
	inline Guid_t * get_address_of_gluVFzqymVBSvnEcIgFcHIerhjMH_2() { return &___gluVFzqymVBSvnEcIgFcHIerhjMH_2; }
	inline void set_gluVFzqymVBSvnEcIgFcHIerhjMH_2(Guid_t  value)
	{
		___gluVFzqymVBSvnEcIgFcHIerhjMH_2 = value;
	}

	inline static int32_t get_offset_of_qqypdEWhNuIpZgZUUsfbSmMbqYm_3() { return static_cast<int32_t>(offsetof(ControllerIdentifier_t725D2A7A9387931F93131874C32B08A3BCFF9DD6, ___qqypdEWhNuIpZgZUUsfbSmMbqYm_3)); }
	inline String_t* get_qqypdEWhNuIpZgZUUsfbSmMbqYm_3() const { return ___qqypdEWhNuIpZgZUUsfbSmMbqYm_3; }
	inline String_t** get_address_of_qqypdEWhNuIpZgZUUsfbSmMbqYm_3() { return &___qqypdEWhNuIpZgZUUsfbSmMbqYm_3; }
	inline void set_qqypdEWhNuIpZgZUUsfbSmMbqYm_3(String_t* value)
	{
		___qqypdEWhNuIpZgZUUsfbSmMbqYm_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qqypdEWhNuIpZgZUUsfbSmMbqYm_3), (void*)value);
	}

	inline static int32_t get_offset_of_nDDIHEihARcYXZdPJHsZTFJsipPv_4() { return static_cast<int32_t>(offsetof(ControllerIdentifier_t725D2A7A9387931F93131874C32B08A3BCFF9DD6, ___nDDIHEihARcYXZdPJHsZTFJsipPv_4)); }
	inline Guid_t  get_nDDIHEihARcYXZdPJHsZTFJsipPv_4() const { return ___nDDIHEihARcYXZdPJHsZTFJsipPv_4; }
	inline Guid_t * get_address_of_nDDIHEihARcYXZdPJHsZTFJsipPv_4() { return &___nDDIHEihARcYXZdPJHsZTFJsipPv_4; }
	inline void set_nDDIHEihARcYXZdPJHsZTFJsipPv_4(Guid_t  value)
	{
		___nDDIHEihARcYXZdPJHsZTFJsipPv_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Rewired.ControllerIdentifier
struct ControllerIdentifier_t725D2A7A9387931F93131874C32B08A3BCFF9DD6_marshaled_pinvoke
{
	int32_t ___RsdRxoYtACpWUxaljACOKVTUFUQG_0;
	int32_t ___JjncvnyXkxUQBKPGilMFeLuJlVV_1;
	Guid_t  ___gluVFzqymVBSvnEcIgFcHIerhjMH_2;
	char* ___qqypdEWhNuIpZgZUUsfbSmMbqYm_3;
	Guid_t  ___nDDIHEihARcYXZdPJHsZTFJsipPv_4;
};
// Native definition for COM marshalling of Rewired.ControllerIdentifier
struct ControllerIdentifier_t725D2A7A9387931F93131874C32B08A3BCFF9DD6_marshaled_com
{
	int32_t ___RsdRxoYtACpWUxaljACOKVTUFUQG_0;
	int32_t ___JjncvnyXkxUQBKPGilMFeLuJlVV_1;
	Guid_t  ___gluVFzqymVBSvnEcIgFcHIerhjMH_2;
	Il2CppChar* ___qqypdEWhNuIpZgZUUsfbSmMbqYm_3;
	Guid_t  ___nDDIHEihARcYXZdPJHsZTFJsipPv_4;
};

// Rewired.ControllerMap
struct  ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ControllerMap::_id
	int32_t ____id_0;
	// System.Int32 Rewired.ControllerMap::_sourceMapId
	int32_t ____sourceMapId_1;
	// System.Int32 Rewired.ControllerMap::_categoryId
	int32_t ____categoryId_2;
	// System.Int32 Rewired.ControllerMap::_layoutId
	int32_t ____layoutId_3;
	// System.String Rewired.ControllerMap::_name
	String_t* ____name_4;
	// System.Guid Rewired.ControllerMap::_hardwareGuid
	Guid_t  ____hardwareGuid_5;
	// System.Boolean Rewired.ControllerMap::_enabled
	bool ____enabled_6;
	// System.Int32 Rewired.ControllerMap::XRiLMbBOiecmHaqfwSBskCfekqL
	int32_t ___XRiLMbBOiecmHaqfwSBskCfekqL_7;
	// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap> Rewired.ControllerMap::KLLBlkaKdVDwQNGXLoPkBBMOLnQH
	AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 * ___KLLBlkaKdVDwQNGXLoPkBBMOLnQH_8;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap> Rewired.ControllerMap::CPwjwtVNcHpPhAgdDmjLsUEhSIt
	ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * ___CPwjwtVNcHpPhAgdDmjLsUEhSIt_9;
	// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap> Rewired.ControllerMap::bAJLhhQtYbhUTbNBPQIXayvnIiU
	AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 * ___bAJLhhQtYbhUTbNBPQIXayvnIiU_10;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap> Rewired.ControllerMap::vcNdUVfEbiIfmzOwkahCYyzLoZq
	ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * ___vcNdUVfEbiIfmzOwkahCYyzLoZq_11;
	// System.Int32 Rewired.ControllerMap::_playerId
	int32_t ____playerId_12;
	// System.Int32 Rewired.ControllerMap::_controllerId
	int32_t ____controllerId_13;
	// Rewired.ControllerType Rewired.ControllerMap::_controllerType
	int32_t ____controllerType_14;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____id_0)); }
	inline int32_t get__id_0() const { return ____id_0; }
	inline int32_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(int32_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__sourceMapId_1() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____sourceMapId_1)); }
	inline int32_t get__sourceMapId_1() const { return ____sourceMapId_1; }
	inline int32_t* get_address_of__sourceMapId_1() { return &____sourceMapId_1; }
	inline void set__sourceMapId_1(int32_t value)
	{
		____sourceMapId_1 = value;
	}

	inline static int32_t get_offset_of__categoryId_2() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____categoryId_2)); }
	inline int32_t get__categoryId_2() const { return ____categoryId_2; }
	inline int32_t* get_address_of__categoryId_2() { return &____categoryId_2; }
	inline void set__categoryId_2(int32_t value)
	{
		____categoryId_2 = value;
	}

	inline static int32_t get_offset_of__layoutId_3() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____layoutId_3)); }
	inline int32_t get__layoutId_3() const { return ____layoutId_3; }
	inline int32_t* get_address_of__layoutId_3() { return &____layoutId_3; }
	inline void set__layoutId_3(int32_t value)
	{
		____layoutId_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_4), (void*)value);
	}

	inline static int32_t get_offset_of__hardwareGuid_5() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____hardwareGuid_5)); }
	inline Guid_t  get__hardwareGuid_5() const { return ____hardwareGuid_5; }
	inline Guid_t * get_address_of__hardwareGuid_5() { return &____hardwareGuid_5; }
	inline void set__hardwareGuid_5(Guid_t  value)
	{
		____hardwareGuid_5 = value;
	}

	inline static int32_t get_offset_of__enabled_6() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____enabled_6)); }
	inline bool get__enabled_6() const { return ____enabled_6; }
	inline bool* get_address_of__enabled_6() { return &____enabled_6; }
	inline void set__enabled_6(bool value)
	{
		____enabled_6 = value;
	}

	inline static int32_t get_offset_of_XRiLMbBOiecmHaqfwSBskCfekqL_7() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ___XRiLMbBOiecmHaqfwSBskCfekqL_7)); }
	inline int32_t get_XRiLMbBOiecmHaqfwSBskCfekqL_7() const { return ___XRiLMbBOiecmHaqfwSBskCfekqL_7; }
	inline int32_t* get_address_of_XRiLMbBOiecmHaqfwSBskCfekqL_7() { return &___XRiLMbBOiecmHaqfwSBskCfekqL_7; }
	inline void set_XRiLMbBOiecmHaqfwSBskCfekqL_7(int32_t value)
	{
		___XRiLMbBOiecmHaqfwSBskCfekqL_7 = value;
	}

	inline static int32_t get_offset_of_KLLBlkaKdVDwQNGXLoPkBBMOLnQH_8() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ___KLLBlkaKdVDwQNGXLoPkBBMOLnQH_8)); }
	inline AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 * get_KLLBlkaKdVDwQNGXLoPkBBMOLnQH_8() const { return ___KLLBlkaKdVDwQNGXLoPkBBMOLnQH_8; }
	inline AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 ** get_address_of_KLLBlkaKdVDwQNGXLoPkBBMOLnQH_8() { return &___KLLBlkaKdVDwQNGXLoPkBBMOLnQH_8; }
	inline void set_KLLBlkaKdVDwQNGXLoPkBBMOLnQH_8(AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 * value)
	{
		___KLLBlkaKdVDwQNGXLoPkBBMOLnQH_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KLLBlkaKdVDwQNGXLoPkBBMOLnQH_8), (void*)value);
	}

	inline static int32_t get_offset_of_CPwjwtVNcHpPhAgdDmjLsUEhSIt_9() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ___CPwjwtVNcHpPhAgdDmjLsUEhSIt_9)); }
	inline ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * get_CPwjwtVNcHpPhAgdDmjLsUEhSIt_9() const { return ___CPwjwtVNcHpPhAgdDmjLsUEhSIt_9; }
	inline ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 ** get_address_of_CPwjwtVNcHpPhAgdDmjLsUEhSIt_9() { return &___CPwjwtVNcHpPhAgdDmjLsUEhSIt_9; }
	inline void set_CPwjwtVNcHpPhAgdDmjLsUEhSIt_9(ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * value)
	{
		___CPwjwtVNcHpPhAgdDmjLsUEhSIt_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CPwjwtVNcHpPhAgdDmjLsUEhSIt_9), (void*)value);
	}

	inline static int32_t get_offset_of_bAJLhhQtYbhUTbNBPQIXayvnIiU_10() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ___bAJLhhQtYbhUTbNBPQIXayvnIiU_10)); }
	inline AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 * get_bAJLhhQtYbhUTbNBPQIXayvnIiU_10() const { return ___bAJLhhQtYbhUTbNBPQIXayvnIiU_10; }
	inline AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 ** get_address_of_bAJLhhQtYbhUTbNBPQIXayvnIiU_10() { return &___bAJLhhQtYbhUTbNBPQIXayvnIiU_10; }
	inline void set_bAJLhhQtYbhUTbNBPQIXayvnIiU_10(AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 * value)
	{
		___bAJLhhQtYbhUTbNBPQIXayvnIiU_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bAJLhhQtYbhUTbNBPQIXayvnIiU_10), (void*)value);
	}

	inline static int32_t get_offset_of_vcNdUVfEbiIfmzOwkahCYyzLoZq_11() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ___vcNdUVfEbiIfmzOwkahCYyzLoZq_11)); }
	inline ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * get_vcNdUVfEbiIfmzOwkahCYyzLoZq_11() const { return ___vcNdUVfEbiIfmzOwkahCYyzLoZq_11; }
	inline ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 ** get_address_of_vcNdUVfEbiIfmzOwkahCYyzLoZq_11() { return &___vcNdUVfEbiIfmzOwkahCYyzLoZq_11; }
	inline void set_vcNdUVfEbiIfmzOwkahCYyzLoZq_11(ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * value)
	{
		___vcNdUVfEbiIfmzOwkahCYyzLoZq_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vcNdUVfEbiIfmzOwkahCYyzLoZq_11), (void*)value);
	}

	inline static int32_t get_offset_of__playerId_12() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____playerId_12)); }
	inline int32_t get__playerId_12() const { return ____playerId_12; }
	inline int32_t* get_address_of__playerId_12() { return &____playerId_12; }
	inline void set__playerId_12(int32_t value)
	{
		____playerId_12 = value;
	}

	inline static int32_t get_offset_of__controllerId_13() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____controllerId_13)); }
	inline int32_t get__controllerId_13() const { return ____controllerId_13; }
	inline int32_t* get_address_of__controllerId_13() { return &____controllerId_13; }
	inline void set__controllerId_13(int32_t value)
	{
		____controllerId_13 = value;
	}

	inline static int32_t get_offset_of__controllerType_14() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____controllerType_14)); }
	inline int32_t get__controllerType_14() const { return ____controllerType_14; }
	inline int32_t* get_address_of__controllerType_14() { return &____controllerType_14; }
	inline void set__controllerType_14(int32_t value)
	{
		____controllerType_14 = value;
	}
};

struct ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB_StaticFields
{
public:
	// System.Int32 Rewired.ControllerMap::KBqGNZYoqeFXMjKeAxKSoTlHpWY
	int32_t ___KBqGNZYoqeFXMjKeAxKSoTlHpWY_15;

public:
	inline static int32_t get_offset_of_KBqGNZYoqeFXMjKeAxKSoTlHpWY_15() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB_StaticFields, ___KBqGNZYoqeFXMjKeAxKSoTlHpWY_15)); }
	inline int32_t get_KBqGNZYoqeFXMjKeAxKSoTlHpWY_15() const { return ___KBqGNZYoqeFXMjKeAxKSoTlHpWY_15; }
	inline int32_t* get_address_of_KBqGNZYoqeFXMjKeAxKSoTlHpWY_15() { return &___KBqGNZYoqeFXMjKeAxKSoTlHpWY_15; }
	inline void set_KBqGNZYoqeFXMjKeAxKSoTlHpWY_15(int32_t value)
	{
		___KBqGNZYoqeFXMjKeAxKSoTlHpWY_15 = value;
	}
};


// Rewired.InputAction
struct  InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA  : public RuntimeObject
{
public:
	// System.Int32 Rewired.InputAction::_id
	int32_t ____id_0;
	// System.String Rewired.InputAction::_name
	String_t* ____name_1;
	// Rewired.InputActionType Rewired.InputAction::_type
	int32_t ____type_2;
	// System.String Rewired.InputAction::_descriptiveName
	String_t* ____descriptiveName_3;
	// System.String Rewired.InputAction::_positiveDescriptiveName
	String_t* ____positiveDescriptiveName_4;
	// System.String Rewired.InputAction::_negativeDescriptiveName
	String_t* ____negativeDescriptiveName_5;
	// System.Int32 Rewired.InputAction::_behaviorId
	int32_t ____behaviorId_6;
	// System.Boolean Rewired.InputAction::_userAssignable
	bool ____userAssignable_7;
	// System.Int32 Rewired.InputAction::_categoryId
	int32_t ____categoryId_8;
	// System.String Rewired.InputAction::rNcURIzFaJxiChYyWrEWRmgRDfUf
	String_t* ___rNcURIzFaJxiChYyWrEWRmgRDfUf_9;
	// System.String Rewired.InputAction::xtbiojKFWFdTrONePQVSTquEbYx
	String_t* ___xtbiojKFWFdTrONePQVSTquEbYx_10;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA, ____id_0)); }
	inline int32_t get__id_0() const { return ____id_0; }
	inline int32_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(int32_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_1), (void*)value);
	}

	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA, ____type_2)); }
	inline int32_t get__type_2() const { return ____type_2; }
	inline int32_t* get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(int32_t value)
	{
		____type_2 = value;
	}

	inline static int32_t get_offset_of__descriptiveName_3() { return static_cast<int32_t>(offsetof(InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA, ____descriptiveName_3)); }
	inline String_t* get__descriptiveName_3() const { return ____descriptiveName_3; }
	inline String_t** get_address_of__descriptiveName_3() { return &____descriptiveName_3; }
	inline void set__descriptiveName_3(String_t* value)
	{
		____descriptiveName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____descriptiveName_3), (void*)value);
	}

	inline static int32_t get_offset_of__positiveDescriptiveName_4() { return static_cast<int32_t>(offsetof(InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA, ____positiveDescriptiveName_4)); }
	inline String_t* get__positiveDescriptiveName_4() const { return ____positiveDescriptiveName_4; }
	inline String_t** get_address_of__positiveDescriptiveName_4() { return &____positiveDescriptiveName_4; }
	inline void set__positiveDescriptiveName_4(String_t* value)
	{
		____positiveDescriptiveName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____positiveDescriptiveName_4), (void*)value);
	}

	inline static int32_t get_offset_of__negativeDescriptiveName_5() { return static_cast<int32_t>(offsetof(InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA, ____negativeDescriptiveName_5)); }
	inline String_t* get__negativeDescriptiveName_5() const { return ____negativeDescriptiveName_5; }
	inline String_t** get_address_of__negativeDescriptiveName_5() { return &____negativeDescriptiveName_5; }
	inline void set__negativeDescriptiveName_5(String_t* value)
	{
		____negativeDescriptiveName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____negativeDescriptiveName_5), (void*)value);
	}

	inline static int32_t get_offset_of__behaviorId_6() { return static_cast<int32_t>(offsetof(InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA, ____behaviorId_6)); }
	inline int32_t get__behaviorId_6() const { return ____behaviorId_6; }
	inline int32_t* get_address_of__behaviorId_6() { return &____behaviorId_6; }
	inline void set__behaviorId_6(int32_t value)
	{
		____behaviorId_6 = value;
	}

	inline static int32_t get_offset_of__userAssignable_7() { return static_cast<int32_t>(offsetof(InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA, ____userAssignable_7)); }
	inline bool get__userAssignable_7() const { return ____userAssignable_7; }
	inline bool* get_address_of__userAssignable_7() { return &____userAssignable_7; }
	inline void set__userAssignable_7(bool value)
	{
		____userAssignable_7 = value;
	}

	inline static int32_t get_offset_of__categoryId_8() { return static_cast<int32_t>(offsetof(InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA, ____categoryId_8)); }
	inline int32_t get__categoryId_8() const { return ____categoryId_8; }
	inline int32_t* get_address_of__categoryId_8() { return &____categoryId_8; }
	inline void set__categoryId_8(int32_t value)
	{
		____categoryId_8 = value;
	}

	inline static int32_t get_offset_of_rNcURIzFaJxiChYyWrEWRmgRDfUf_9() { return static_cast<int32_t>(offsetof(InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA, ___rNcURIzFaJxiChYyWrEWRmgRDfUf_9)); }
	inline String_t* get_rNcURIzFaJxiChYyWrEWRmgRDfUf_9() const { return ___rNcURIzFaJxiChYyWrEWRmgRDfUf_9; }
	inline String_t** get_address_of_rNcURIzFaJxiChYyWrEWRmgRDfUf_9() { return &___rNcURIzFaJxiChYyWrEWRmgRDfUf_9; }
	inline void set_rNcURIzFaJxiChYyWrEWRmgRDfUf_9(String_t* value)
	{
		___rNcURIzFaJxiChYyWrEWRmgRDfUf_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rNcURIzFaJxiChYyWrEWRmgRDfUf_9), (void*)value);
	}

	inline static int32_t get_offset_of_xtbiojKFWFdTrONePQVSTquEbYx_10() { return static_cast<int32_t>(offsetof(InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA, ___xtbiojKFWFdTrONePQVSTquEbYx_10)); }
	inline String_t* get_xtbiojKFWFdTrONePQVSTquEbYx_10() const { return ___xtbiojKFWFdTrONePQVSTquEbYx_10; }
	inline String_t** get_address_of_xtbiojKFWFdTrONePQVSTquEbYx_10() { return &___xtbiojKFWFdTrONePQVSTquEbYx_10; }
	inline void set_xtbiojKFWFdTrONePQVSTquEbYx_10(String_t* value)
	{
		___xtbiojKFWFdTrONePQVSTquEbYx_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xtbiojKFWFdTrONePQVSTquEbYx_10), (void*)value);
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Sprite
struct  Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Mediatonic.Tools.ControllerGlyphs.ControllerEntry
struct  ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// Rewired.Data.Mapping.HardwareJoystickMap Mediatonic.Tools.ControllerGlyphs.ControllerEntry::Joystick
	HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB * ___Joystick_4;
	// Mediatonic.Tools.ControllerGlyphs.GlyphEntry[] Mediatonic.Tools.ControllerGlyphs.ControllerEntry::Glyphs
	GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* ___Glyphs_5;

public:
	inline static int32_t get_offset_of_Joystick_4() { return static_cast<int32_t>(offsetof(ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159, ___Joystick_4)); }
	inline HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB * get_Joystick_4() const { return ___Joystick_4; }
	inline HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB ** get_address_of_Joystick_4() { return &___Joystick_4; }
	inline void set_Joystick_4(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB * value)
	{
		___Joystick_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Joystick_4), (void*)value);
	}

	inline static int32_t get_offset_of_Glyphs_5() { return static_cast<int32_t>(offsetof(ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159, ___Glyphs_5)); }
	inline GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* get_Glyphs_5() const { return ___Glyphs_5; }
	inline GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99** get_address_of_Glyphs_5() { return &___Glyphs_5; }
	inline void set_Glyphs_5(GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* value)
	{
		___Glyphs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Glyphs_5), (void*)value);
	}
};


// Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs
struct  ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// Mediatonic.Tools.ControllerGlyphs.ControllerEntry[] Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::Controllers
	ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137* ___Controllers_4;
	// Mediatonic.Tools.ControllerGlyphs.KeyboardEntry Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::Keyboard
	KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8 * ___Keyboard_5;
	// Mediatonic.Tools.ControllerGlyphs.MouseEntry Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::Mouse
	MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934 * ___Mouse_6;
	// Mediatonic.Tools.ControllerGlyphs.ControllerEntry Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::_gamecoreController
	ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * ____gamecoreController_7;
	// Mediatonic.Tools.ControllerGlyphs.ControllerEntry Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::_ps5Controller
	ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * ____ps5Controller_8;
	// System.Guid Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::_customControllerGuid
	Guid_t  ____customControllerGuid_9;

public:
	inline static int32_t get_offset_of_Controllers_4() { return static_cast<int32_t>(offsetof(ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF, ___Controllers_4)); }
	inline ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137* get_Controllers_4() const { return ___Controllers_4; }
	inline ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137** get_address_of_Controllers_4() { return &___Controllers_4; }
	inline void set_Controllers_4(ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137* value)
	{
		___Controllers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Controllers_4), (void*)value);
	}

	inline static int32_t get_offset_of_Keyboard_5() { return static_cast<int32_t>(offsetof(ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF, ___Keyboard_5)); }
	inline KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8 * get_Keyboard_5() const { return ___Keyboard_5; }
	inline KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8 ** get_address_of_Keyboard_5() { return &___Keyboard_5; }
	inline void set_Keyboard_5(KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8 * value)
	{
		___Keyboard_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Keyboard_5), (void*)value);
	}

	inline static int32_t get_offset_of_Mouse_6() { return static_cast<int32_t>(offsetof(ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF, ___Mouse_6)); }
	inline MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934 * get_Mouse_6() const { return ___Mouse_6; }
	inline MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934 ** get_address_of_Mouse_6() { return &___Mouse_6; }
	inline void set_Mouse_6(MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934 * value)
	{
		___Mouse_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mouse_6), (void*)value);
	}

	inline static int32_t get_offset_of__gamecoreController_7() { return static_cast<int32_t>(offsetof(ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF, ____gamecoreController_7)); }
	inline ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * get__gamecoreController_7() const { return ____gamecoreController_7; }
	inline ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 ** get_address_of__gamecoreController_7() { return &____gamecoreController_7; }
	inline void set__gamecoreController_7(ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * value)
	{
		____gamecoreController_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gamecoreController_7), (void*)value);
	}

	inline static int32_t get_offset_of__ps5Controller_8() { return static_cast<int32_t>(offsetof(ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF, ____ps5Controller_8)); }
	inline ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * get__ps5Controller_8() const { return ____ps5Controller_8; }
	inline ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 ** get_address_of__ps5Controller_8() { return &____ps5Controller_8; }
	inline void set__ps5Controller_8(ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * value)
	{
		____ps5Controller_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ps5Controller_8), (void*)value);
	}

	inline static int32_t get_offset_of__customControllerGuid_9() { return static_cast<int32_t>(offsetof(ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF, ____customControllerGuid_9)); }
	inline Guid_t  get__customControllerGuid_9() const { return ____customControllerGuid_9; }
	inline Guid_t * get_address_of__customControllerGuid_9() { return &____customControllerGuid_9; }
	inline void set__customControllerGuid_9(Guid_t  value)
	{
		____customControllerGuid_9 = value;
	}
};


// Mediatonic.Tools.ControllerGlyphs.KeyboardEntry
struct  KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.Sprite Mediatonic.Tools.ControllerGlyphs.KeyboardEntry::DefaultSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___DefaultSprite_4;
	// Mediatonic.Tools.ControllerGlyphs.GlyphEntry[] Mediatonic.Tools.ControllerGlyphs.KeyboardEntry::Glyphs
	GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* ___Glyphs_5;

public:
	inline static int32_t get_offset_of_DefaultSprite_4() { return static_cast<int32_t>(offsetof(KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8, ___DefaultSprite_4)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_DefaultSprite_4() const { return ___DefaultSprite_4; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_DefaultSprite_4() { return &___DefaultSprite_4; }
	inline void set_DefaultSprite_4(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___DefaultSprite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultSprite_4), (void*)value);
	}

	inline static int32_t get_offset_of_Glyphs_5() { return static_cast<int32_t>(offsetof(KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8, ___Glyphs_5)); }
	inline GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* get_Glyphs_5() const { return ___Glyphs_5; }
	inline GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99** get_address_of_Glyphs_5() { return &___Glyphs_5; }
	inline void set_Glyphs_5(GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* value)
	{
		___Glyphs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Glyphs_5), (void*)value);
	}
};


// Mediatonic.Tools.ControllerGlyphs.MouseEntry
struct  MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.Sprite Mediatonic.Tools.ControllerGlyphs.MouseEntry::DefaultSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___DefaultSprite_4;
	// Mediatonic.Tools.ControllerGlyphs.GlyphEntry[] Mediatonic.Tools.ControllerGlyphs.MouseEntry::Glyphs
	GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* ___Glyphs_5;

public:
	inline static int32_t get_offset_of_DefaultSprite_4() { return static_cast<int32_t>(offsetof(MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934, ___DefaultSprite_4)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_DefaultSprite_4() const { return ___DefaultSprite_4; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_DefaultSprite_4() { return &___DefaultSprite_4; }
	inline void set_DefaultSprite_4(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___DefaultSprite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultSprite_4), (void*)value);
	}

	inline static int32_t get_offset_of_Glyphs_5() { return static_cast<int32_t>(offsetof(MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934, ___Glyphs_5)); }
	inline GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* get_Glyphs_5() const { return ___Glyphs_5; }
	inline GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99** get_address_of_Glyphs_5() { return &___Glyphs_5; }
	inline void set_Glyphs_5(GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* value)
	{
		___Glyphs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Glyphs_5), (void*)value);
	}
};


// Rewired.Controller
struct  Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671  : public RuntimeObject
{
public:
	// System.Int32 Rewired.Controller::id
	int32_t ___id_0;
	// System.String Rewired.Controller::_tag
	String_t* ____tag_1;
	// System.String Rewired.Controller::_name
	String_t* ____name_2;
	// System.String Rewired.Controller::_hardwareName
	String_t* ____hardwareName_3;
	// Rewired.ControllerType Rewired.Controller::_type
	int32_t ____type_4;
	// System.Guid Rewired.Controller::gluVFzqymVBSvnEcIgFcHIerhjMH
	Guid_t  ___gluVFzqymVBSvnEcIgFcHIerhjMH_5;
	// System.String Rewired.Controller::_hardwareIdentifier
	String_t* ____hardwareIdentifier_6;
	// System.Boolean Rewired.Controller::_isConnected
	bool ____isConnected_7;
	// Rewired.Controller_Extension Rewired.Controller::lMKmzCEioWdjhkCVuBExVaRVoZg
	Extension_tB52F54389416488161F1C79DFA089F142E5AD3FD * ___lMKmzCEioWdjhkCVuBExVaRVoZg_8;
	// System.Boolean Rewired.Controller::fnEgHedGGTIhZFVgBCvIMHGQrCIX
	bool ___fnEgHedGGTIhZFVgBCvIMHGQrCIX_9;
	// Rewired.ControllerIdentifier Rewired.Controller::SvXKasHYUYQLWBFDBHXxAUSdjqi
	ControllerIdentifier_t725D2A7A9387931F93131874C32B08A3BCFF9DD6  ___SvXKasHYUYQLWBFDBHXxAUSdjqi_10;
	// System.Int32 Rewired.Controller::XRiLMbBOiecmHaqfwSBskCfekqL
	int32_t ___XRiLMbBOiecmHaqfwSBskCfekqL_11;
	// System.Int32 Rewired.Controller::_buttonCount
	int32_t ____buttonCount_12;
	// Rewired.Controller_Button[] Rewired.Controller::buttons
	ButtonU5BU5D_tEB078799E0930AD6615B644AD177B6C1AF07577C* ___buttons_13;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller_Button> Rewired.Controller::buttons_readOnly
	ReadOnlyCollection_1_tCA51394B27F18929AD1D619E80250F91DC20B383 * ___buttons_readOnly_14;
	// System.Collections.Generic.IList`1<Rewired.Controller_Element> Rewired.Controller::wFoggEhjhvFaZcdiQFNpuxqWhsPP
	RuntimeObject* ___wFoggEhjhvFaZcdiQFNpuxqWhsPP_15;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller_Element> Rewired.Controller::YmpdrNGqzQMxpZEeRhyYjAeWZka
	ReadOnlyCollection_1_tBF1621D3F7F9871C04D918E0DF726F42C36F91F4 * ___YmpdrNGqzQMxpZEeRhyYjAeWZka_16;
	// Rewired.InputSource Rewired.Controller::uSmreqAEehBgaGyqncTjYuxcQpL
	int32_t ___uSmreqAEehBgaGyqncTjYuxcQpL_17;
	// Rewired.ControllerDataUpdater Rewired.Controller::QlJJOTuPjIFwymQcneqlqkagwrQ
	ControllerDataUpdater_tBB4E0047FF8D6FAC9C5641EE94260D70C6DE1B9F * ___QlJJOTuPjIFwymQcneqlqkagwrQ_18;
	// Rewired.HardwareControllerMap_Game Rewired.Controller::jYoZFlxQRGJXSXEFxcDmwYQbxHl
	HardwareControllerMap_Game_t941EA366B3E6D843EBE08EEBA0930D8A338B49D3 * ___jYoZFlxQRGJXSXEFxcDmwYQbxHl_19;
	// System.UInt32 Rewired.Controller::dVcernBoFCWDDCwYZXhAuDdJbLp
	uint32_t ___dVcernBoFCWDDCwYZXhAuDdJbLp_20;
	// System.UInt32 Rewired.Controller::tlyJSSBInZtJwXCDkwXNXHfvdDt
	uint32_t ___tlyJSSBInZtJwXCDkwXNXHfvdDt_21;
	// System.UInt32 Rewired.Controller::kwqnYpzJJbPPbBSPDbpFaYbavDr
	uint32_t ___kwqnYpzJJbPPbBSPDbpFaYbavDr_22;
	// System.Action`1<System.Boolean> Rewired.Controller::ldLaLIcfcyOwVvbMpgJhJsDGHv
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___ldLaLIcfcyOwVvbMpgJhJsDGHv_23;
	// Rewired.IControllerTemplate[] Rewired.Controller::IAMSOSGQLuosUwKBHKmOIJQcnka
	IControllerTemplateU5BU5D_t6B3C97490FB9ECABF62EFD5CE8335DABC6E527B6* ___IAMSOSGQLuosUwKBHKmOIJQcnka_24;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.IControllerTemplate> Rewired.Controller::MMMSkTQTPMWdQGIwKjfAKSzKFKL
	ReadOnlyCollection_1_t29628C2D08376268FE32FB6C6D7854BE606C1802 * ___MMMSkTQTPMWdQGIwKjfAKSzKFKL_25;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of__tag_1() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ____tag_1)); }
	inline String_t* get__tag_1() const { return ____tag_1; }
	inline String_t** get_address_of__tag_1() { return &____tag_1; }
	inline void set__tag_1(String_t* value)
	{
		____tag_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tag_1), (void*)value);
	}

	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ____name_2)); }
	inline String_t* get__name_2() const { return ____name_2; }
	inline String_t** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(String_t* value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_2), (void*)value);
	}

	inline static int32_t get_offset_of__hardwareName_3() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ____hardwareName_3)); }
	inline String_t* get__hardwareName_3() const { return ____hardwareName_3; }
	inline String_t** get_address_of__hardwareName_3() { return &____hardwareName_3; }
	inline void set__hardwareName_3(String_t* value)
	{
		____hardwareName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hardwareName_3), (void*)value);
	}

	inline static int32_t get_offset_of__type_4() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ____type_4)); }
	inline int32_t get__type_4() const { return ____type_4; }
	inline int32_t* get_address_of__type_4() { return &____type_4; }
	inline void set__type_4(int32_t value)
	{
		____type_4 = value;
	}

	inline static int32_t get_offset_of_gluVFzqymVBSvnEcIgFcHIerhjMH_5() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___gluVFzqymVBSvnEcIgFcHIerhjMH_5)); }
	inline Guid_t  get_gluVFzqymVBSvnEcIgFcHIerhjMH_5() const { return ___gluVFzqymVBSvnEcIgFcHIerhjMH_5; }
	inline Guid_t * get_address_of_gluVFzqymVBSvnEcIgFcHIerhjMH_5() { return &___gluVFzqymVBSvnEcIgFcHIerhjMH_5; }
	inline void set_gluVFzqymVBSvnEcIgFcHIerhjMH_5(Guid_t  value)
	{
		___gluVFzqymVBSvnEcIgFcHIerhjMH_5 = value;
	}

	inline static int32_t get_offset_of__hardwareIdentifier_6() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ____hardwareIdentifier_6)); }
	inline String_t* get__hardwareIdentifier_6() const { return ____hardwareIdentifier_6; }
	inline String_t** get_address_of__hardwareIdentifier_6() { return &____hardwareIdentifier_6; }
	inline void set__hardwareIdentifier_6(String_t* value)
	{
		____hardwareIdentifier_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hardwareIdentifier_6), (void*)value);
	}

	inline static int32_t get_offset_of__isConnected_7() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ____isConnected_7)); }
	inline bool get__isConnected_7() const { return ____isConnected_7; }
	inline bool* get_address_of__isConnected_7() { return &____isConnected_7; }
	inline void set__isConnected_7(bool value)
	{
		____isConnected_7 = value;
	}

	inline static int32_t get_offset_of_lMKmzCEioWdjhkCVuBExVaRVoZg_8() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___lMKmzCEioWdjhkCVuBExVaRVoZg_8)); }
	inline Extension_tB52F54389416488161F1C79DFA089F142E5AD3FD * get_lMKmzCEioWdjhkCVuBExVaRVoZg_8() const { return ___lMKmzCEioWdjhkCVuBExVaRVoZg_8; }
	inline Extension_tB52F54389416488161F1C79DFA089F142E5AD3FD ** get_address_of_lMKmzCEioWdjhkCVuBExVaRVoZg_8() { return &___lMKmzCEioWdjhkCVuBExVaRVoZg_8; }
	inline void set_lMKmzCEioWdjhkCVuBExVaRVoZg_8(Extension_tB52F54389416488161F1C79DFA089F142E5AD3FD * value)
	{
		___lMKmzCEioWdjhkCVuBExVaRVoZg_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lMKmzCEioWdjhkCVuBExVaRVoZg_8), (void*)value);
	}

	inline static int32_t get_offset_of_fnEgHedGGTIhZFVgBCvIMHGQrCIX_9() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___fnEgHedGGTIhZFVgBCvIMHGQrCIX_9)); }
	inline bool get_fnEgHedGGTIhZFVgBCvIMHGQrCIX_9() const { return ___fnEgHedGGTIhZFVgBCvIMHGQrCIX_9; }
	inline bool* get_address_of_fnEgHedGGTIhZFVgBCvIMHGQrCIX_9() { return &___fnEgHedGGTIhZFVgBCvIMHGQrCIX_9; }
	inline void set_fnEgHedGGTIhZFVgBCvIMHGQrCIX_9(bool value)
	{
		___fnEgHedGGTIhZFVgBCvIMHGQrCIX_9 = value;
	}

	inline static int32_t get_offset_of_SvXKasHYUYQLWBFDBHXxAUSdjqi_10() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___SvXKasHYUYQLWBFDBHXxAUSdjqi_10)); }
	inline ControllerIdentifier_t725D2A7A9387931F93131874C32B08A3BCFF9DD6  get_SvXKasHYUYQLWBFDBHXxAUSdjqi_10() const { return ___SvXKasHYUYQLWBFDBHXxAUSdjqi_10; }
	inline ControllerIdentifier_t725D2A7A9387931F93131874C32B08A3BCFF9DD6 * get_address_of_SvXKasHYUYQLWBFDBHXxAUSdjqi_10() { return &___SvXKasHYUYQLWBFDBHXxAUSdjqi_10; }
	inline void set_SvXKasHYUYQLWBFDBHXxAUSdjqi_10(ControllerIdentifier_t725D2A7A9387931F93131874C32B08A3BCFF9DD6  value)
	{
		___SvXKasHYUYQLWBFDBHXxAUSdjqi_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___SvXKasHYUYQLWBFDBHXxAUSdjqi_10))->___qqypdEWhNuIpZgZUUsfbSmMbqYm_3), (void*)NULL);
	}

	inline static int32_t get_offset_of_XRiLMbBOiecmHaqfwSBskCfekqL_11() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___XRiLMbBOiecmHaqfwSBskCfekqL_11)); }
	inline int32_t get_XRiLMbBOiecmHaqfwSBskCfekqL_11() const { return ___XRiLMbBOiecmHaqfwSBskCfekqL_11; }
	inline int32_t* get_address_of_XRiLMbBOiecmHaqfwSBskCfekqL_11() { return &___XRiLMbBOiecmHaqfwSBskCfekqL_11; }
	inline void set_XRiLMbBOiecmHaqfwSBskCfekqL_11(int32_t value)
	{
		___XRiLMbBOiecmHaqfwSBskCfekqL_11 = value;
	}

	inline static int32_t get_offset_of__buttonCount_12() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ____buttonCount_12)); }
	inline int32_t get__buttonCount_12() const { return ____buttonCount_12; }
	inline int32_t* get_address_of__buttonCount_12() { return &____buttonCount_12; }
	inline void set__buttonCount_12(int32_t value)
	{
		____buttonCount_12 = value;
	}

	inline static int32_t get_offset_of_buttons_13() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___buttons_13)); }
	inline ButtonU5BU5D_tEB078799E0930AD6615B644AD177B6C1AF07577C* get_buttons_13() const { return ___buttons_13; }
	inline ButtonU5BU5D_tEB078799E0930AD6615B644AD177B6C1AF07577C** get_address_of_buttons_13() { return &___buttons_13; }
	inline void set_buttons_13(ButtonU5BU5D_tEB078799E0930AD6615B644AD177B6C1AF07577C* value)
	{
		___buttons_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttons_13), (void*)value);
	}

	inline static int32_t get_offset_of_buttons_readOnly_14() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___buttons_readOnly_14)); }
	inline ReadOnlyCollection_1_tCA51394B27F18929AD1D619E80250F91DC20B383 * get_buttons_readOnly_14() const { return ___buttons_readOnly_14; }
	inline ReadOnlyCollection_1_tCA51394B27F18929AD1D619E80250F91DC20B383 ** get_address_of_buttons_readOnly_14() { return &___buttons_readOnly_14; }
	inline void set_buttons_readOnly_14(ReadOnlyCollection_1_tCA51394B27F18929AD1D619E80250F91DC20B383 * value)
	{
		___buttons_readOnly_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttons_readOnly_14), (void*)value);
	}

	inline static int32_t get_offset_of_wFoggEhjhvFaZcdiQFNpuxqWhsPP_15() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___wFoggEhjhvFaZcdiQFNpuxqWhsPP_15)); }
	inline RuntimeObject* get_wFoggEhjhvFaZcdiQFNpuxqWhsPP_15() const { return ___wFoggEhjhvFaZcdiQFNpuxqWhsPP_15; }
	inline RuntimeObject** get_address_of_wFoggEhjhvFaZcdiQFNpuxqWhsPP_15() { return &___wFoggEhjhvFaZcdiQFNpuxqWhsPP_15; }
	inline void set_wFoggEhjhvFaZcdiQFNpuxqWhsPP_15(RuntimeObject* value)
	{
		___wFoggEhjhvFaZcdiQFNpuxqWhsPP_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wFoggEhjhvFaZcdiQFNpuxqWhsPP_15), (void*)value);
	}

	inline static int32_t get_offset_of_YmpdrNGqzQMxpZEeRhyYjAeWZka_16() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___YmpdrNGqzQMxpZEeRhyYjAeWZka_16)); }
	inline ReadOnlyCollection_1_tBF1621D3F7F9871C04D918E0DF726F42C36F91F4 * get_YmpdrNGqzQMxpZEeRhyYjAeWZka_16() const { return ___YmpdrNGqzQMxpZEeRhyYjAeWZka_16; }
	inline ReadOnlyCollection_1_tBF1621D3F7F9871C04D918E0DF726F42C36F91F4 ** get_address_of_YmpdrNGqzQMxpZEeRhyYjAeWZka_16() { return &___YmpdrNGqzQMxpZEeRhyYjAeWZka_16; }
	inline void set_YmpdrNGqzQMxpZEeRhyYjAeWZka_16(ReadOnlyCollection_1_tBF1621D3F7F9871C04D918E0DF726F42C36F91F4 * value)
	{
		___YmpdrNGqzQMxpZEeRhyYjAeWZka_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___YmpdrNGqzQMxpZEeRhyYjAeWZka_16), (void*)value);
	}

	inline static int32_t get_offset_of_uSmreqAEehBgaGyqncTjYuxcQpL_17() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___uSmreqAEehBgaGyqncTjYuxcQpL_17)); }
	inline int32_t get_uSmreqAEehBgaGyqncTjYuxcQpL_17() const { return ___uSmreqAEehBgaGyqncTjYuxcQpL_17; }
	inline int32_t* get_address_of_uSmreqAEehBgaGyqncTjYuxcQpL_17() { return &___uSmreqAEehBgaGyqncTjYuxcQpL_17; }
	inline void set_uSmreqAEehBgaGyqncTjYuxcQpL_17(int32_t value)
	{
		___uSmreqAEehBgaGyqncTjYuxcQpL_17 = value;
	}

	inline static int32_t get_offset_of_QlJJOTuPjIFwymQcneqlqkagwrQ_18() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___QlJJOTuPjIFwymQcneqlqkagwrQ_18)); }
	inline ControllerDataUpdater_tBB4E0047FF8D6FAC9C5641EE94260D70C6DE1B9F * get_QlJJOTuPjIFwymQcneqlqkagwrQ_18() const { return ___QlJJOTuPjIFwymQcneqlqkagwrQ_18; }
	inline ControllerDataUpdater_tBB4E0047FF8D6FAC9C5641EE94260D70C6DE1B9F ** get_address_of_QlJJOTuPjIFwymQcneqlqkagwrQ_18() { return &___QlJJOTuPjIFwymQcneqlqkagwrQ_18; }
	inline void set_QlJJOTuPjIFwymQcneqlqkagwrQ_18(ControllerDataUpdater_tBB4E0047FF8D6FAC9C5641EE94260D70C6DE1B9F * value)
	{
		___QlJJOTuPjIFwymQcneqlqkagwrQ_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QlJJOTuPjIFwymQcneqlqkagwrQ_18), (void*)value);
	}

	inline static int32_t get_offset_of_jYoZFlxQRGJXSXEFxcDmwYQbxHl_19() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___jYoZFlxQRGJXSXEFxcDmwYQbxHl_19)); }
	inline HardwareControllerMap_Game_t941EA366B3E6D843EBE08EEBA0930D8A338B49D3 * get_jYoZFlxQRGJXSXEFxcDmwYQbxHl_19() const { return ___jYoZFlxQRGJXSXEFxcDmwYQbxHl_19; }
	inline HardwareControllerMap_Game_t941EA366B3E6D843EBE08EEBA0930D8A338B49D3 ** get_address_of_jYoZFlxQRGJXSXEFxcDmwYQbxHl_19() { return &___jYoZFlxQRGJXSXEFxcDmwYQbxHl_19; }
	inline void set_jYoZFlxQRGJXSXEFxcDmwYQbxHl_19(HardwareControllerMap_Game_t941EA366B3E6D843EBE08EEBA0930D8A338B49D3 * value)
	{
		___jYoZFlxQRGJXSXEFxcDmwYQbxHl_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jYoZFlxQRGJXSXEFxcDmwYQbxHl_19), (void*)value);
	}

	inline static int32_t get_offset_of_dVcernBoFCWDDCwYZXhAuDdJbLp_20() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___dVcernBoFCWDDCwYZXhAuDdJbLp_20)); }
	inline uint32_t get_dVcernBoFCWDDCwYZXhAuDdJbLp_20() const { return ___dVcernBoFCWDDCwYZXhAuDdJbLp_20; }
	inline uint32_t* get_address_of_dVcernBoFCWDDCwYZXhAuDdJbLp_20() { return &___dVcernBoFCWDDCwYZXhAuDdJbLp_20; }
	inline void set_dVcernBoFCWDDCwYZXhAuDdJbLp_20(uint32_t value)
	{
		___dVcernBoFCWDDCwYZXhAuDdJbLp_20 = value;
	}

	inline static int32_t get_offset_of_tlyJSSBInZtJwXCDkwXNXHfvdDt_21() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___tlyJSSBInZtJwXCDkwXNXHfvdDt_21)); }
	inline uint32_t get_tlyJSSBInZtJwXCDkwXNXHfvdDt_21() const { return ___tlyJSSBInZtJwXCDkwXNXHfvdDt_21; }
	inline uint32_t* get_address_of_tlyJSSBInZtJwXCDkwXNXHfvdDt_21() { return &___tlyJSSBInZtJwXCDkwXNXHfvdDt_21; }
	inline void set_tlyJSSBInZtJwXCDkwXNXHfvdDt_21(uint32_t value)
	{
		___tlyJSSBInZtJwXCDkwXNXHfvdDt_21 = value;
	}

	inline static int32_t get_offset_of_kwqnYpzJJbPPbBSPDbpFaYbavDr_22() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___kwqnYpzJJbPPbBSPDbpFaYbavDr_22)); }
	inline uint32_t get_kwqnYpzJJbPPbBSPDbpFaYbavDr_22() const { return ___kwqnYpzJJbPPbBSPDbpFaYbavDr_22; }
	inline uint32_t* get_address_of_kwqnYpzJJbPPbBSPDbpFaYbavDr_22() { return &___kwqnYpzJJbPPbBSPDbpFaYbavDr_22; }
	inline void set_kwqnYpzJJbPPbBSPDbpFaYbavDr_22(uint32_t value)
	{
		___kwqnYpzJJbPPbBSPDbpFaYbavDr_22 = value;
	}

	inline static int32_t get_offset_of_ldLaLIcfcyOwVvbMpgJhJsDGHv_23() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___ldLaLIcfcyOwVvbMpgJhJsDGHv_23)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_ldLaLIcfcyOwVvbMpgJhJsDGHv_23() const { return ___ldLaLIcfcyOwVvbMpgJhJsDGHv_23; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_ldLaLIcfcyOwVvbMpgJhJsDGHv_23() { return &___ldLaLIcfcyOwVvbMpgJhJsDGHv_23; }
	inline void set_ldLaLIcfcyOwVvbMpgJhJsDGHv_23(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___ldLaLIcfcyOwVvbMpgJhJsDGHv_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ldLaLIcfcyOwVvbMpgJhJsDGHv_23), (void*)value);
	}

	inline static int32_t get_offset_of_IAMSOSGQLuosUwKBHKmOIJQcnka_24() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___IAMSOSGQLuosUwKBHKmOIJQcnka_24)); }
	inline IControllerTemplateU5BU5D_t6B3C97490FB9ECABF62EFD5CE8335DABC6E527B6* get_IAMSOSGQLuosUwKBHKmOIJQcnka_24() const { return ___IAMSOSGQLuosUwKBHKmOIJQcnka_24; }
	inline IControllerTemplateU5BU5D_t6B3C97490FB9ECABF62EFD5CE8335DABC6E527B6** get_address_of_IAMSOSGQLuosUwKBHKmOIJQcnka_24() { return &___IAMSOSGQLuosUwKBHKmOIJQcnka_24; }
	inline void set_IAMSOSGQLuosUwKBHKmOIJQcnka_24(IControllerTemplateU5BU5D_t6B3C97490FB9ECABF62EFD5CE8335DABC6E527B6* value)
	{
		___IAMSOSGQLuosUwKBHKmOIJQcnka_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IAMSOSGQLuosUwKBHKmOIJQcnka_24), (void*)value);
	}

	inline static int32_t get_offset_of_MMMSkTQTPMWdQGIwKjfAKSzKFKL_25() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671, ___MMMSkTQTPMWdQGIwKjfAKSzKFKL_25)); }
	inline ReadOnlyCollection_1_t29628C2D08376268FE32FB6C6D7854BE606C1802 * get_MMMSkTQTPMWdQGIwKjfAKSzKFKL_25() const { return ___MMMSkTQTPMWdQGIwKjfAKSzKFKL_25; }
	inline ReadOnlyCollection_1_t29628C2D08376268FE32FB6C6D7854BE606C1802 ** get_address_of_MMMSkTQTPMWdQGIwKjfAKSzKFKL_25() { return &___MMMSkTQTPMWdQGIwKjfAKSzKFKL_25; }
	inline void set_MMMSkTQTPMWdQGIwKjfAKSzKFKL_25(ReadOnlyCollection_1_t29628C2D08376268FE32FB6C6D7854BE606C1802 * value)
	{
		___MMMSkTQTPMWdQGIwKjfAKSzKFKL_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MMMSkTQTPMWdQGIwKjfAKSzKFKL_25), (void*)value);
	}
};

struct Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671_StaticFields
{
public:
	// System.Func`3<Rewired.Controller,System.Guid,System.Boolean> Rewired.Controller::hEjhZXCeSZnFKuYxuraWlMybDyw
	Func_3_t01432DF24DAEAC832D9079B28AE7CD1B99E3AACE * ___hEjhZXCeSZnFKuYxuraWlMybDyw_26;
	// System.Func`3<Rewired.Controller,System.Type,System.Boolean> Rewired.Controller::aZHsLiNIDeCFmGsjElXMclEjnAR
	Func_3_t722B6E01079F18BA4476D2B9A59F2DD94555B0F1 * ___aZHsLiNIDeCFmGsjElXMclEjnAR_27;
	// System.Func`3<Rewired.Controller,System.Guid,System.Boolean> Rewired.Controller::eGDslUcZjdjKXWSZqQudKFkhCDQD
	Func_3_t01432DF24DAEAC832D9079B28AE7CD1B99E3AACE * ___eGDslUcZjdjKXWSZqQudKFkhCDQD_28;
	// System.Func`3<Rewired.Controller,System.Type,System.Boolean> Rewired.Controller::hXgVWmzPrJkeVQJyuHswOPdQFlFg
	Func_3_t722B6E01079F18BA4476D2B9A59F2DD94555B0F1 * ___hXgVWmzPrJkeVQJyuHswOPdQFlFg_29;

public:
	inline static int32_t get_offset_of_hEjhZXCeSZnFKuYxuraWlMybDyw_26() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671_StaticFields, ___hEjhZXCeSZnFKuYxuraWlMybDyw_26)); }
	inline Func_3_t01432DF24DAEAC832D9079B28AE7CD1B99E3AACE * get_hEjhZXCeSZnFKuYxuraWlMybDyw_26() const { return ___hEjhZXCeSZnFKuYxuraWlMybDyw_26; }
	inline Func_3_t01432DF24DAEAC832D9079B28AE7CD1B99E3AACE ** get_address_of_hEjhZXCeSZnFKuYxuraWlMybDyw_26() { return &___hEjhZXCeSZnFKuYxuraWlMybDyw_26; }
	inline void set_hEjhZXCeSZnFKuYxuraWlMybDyw_26(Func_3_t01432DF24DAEAC832D9079B28AE7CD1B99E3AACE * value)
	{
		___hEjhZXCeSZnFKuYxuraWlMybDyw_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hEjhZXCeSZnFKuYxuraWlMybDyw_26), (void*)value);
	}

	inline static int32_t get_offset_of_aZHsLiNIDeCFmGsjElXMclEjnAR_27() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671_StaticFields, ___aZHsLiNIDeCFmGsjElXMclEjnAR_27)); }
	inline Func_3_t722B6E01079F18BA4476D2B9A59F2DD94555B0F1 * get_aZHsLiNIDeCFmGsjElXMclEjnAR_27() const { return ___aZHsLiNIDeCFmGsjElXMclEjnAR_27; }
	inline Func_3_t722B6E01079F18BA4476D2B9A59F2DD94555B0F1 ** get_address_of_aZHsLiNIDeCFmGsjElXMclEjnAR_27() { return &___aZHsLiNIDeCFmGsjElXMclEjnAR_27; }
	inline void set_aZHsLiNIDeCFmGsjElXMclEjnAR_27(Func_3_t722B6E01079F18BA4476D2B9A59F2DD94555B0F1 * value)
	{
		___aZHsLiNIDeCFmGsjElXMclEjnAR_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aZHsLiNIDeCFmGsjElXMclEjnAR_27), (void*)value);
	}

	inline static int32_t get_offset_of_eGDslUcZjdjKXWSZqQudKFkhCDQD_28() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671_StaticFields, ___eGDslUcZjdjKXWSZqQudKFkhCDQD_28)); }
	inline Func_3_t01432DF24DAEAC832D9079B28AE7CD1B99E3AACE * get_eGDslUcZjdjKXWSZqQudKFkhCDQD_28() const { return ___eGDslUcZjdjKXWSZqQudKFkhCDQD_28; }
	inline Func_3_t01432DF24DAEAC832D9079B28AE7CD1B99E3AACE ** get_address_of_eGDslUcZjdjKXWSZqQudKFkhCDQD_28() { return &___eGDslUcZjdjKXWSZqQudKFkhCDQD_28; }
	inline void set_eGDslUcZjdjKXWSZqQudKFkhCDQD_28(Func_3_t01432DF24DAEAC832D9079B28AE7CD1B99E3AACE * value)
	{
		___eGDslUcZjdjKXWSZqQudKFkhCDQD_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eGDslUcZjdjKXWSZqQudKFkhCDQD_28), (void*)value);
	}

	inline static int32_t get_offset_of_hXgVWmzPrJkeVQJyuHswOPdQFlFg_29() { return static_cast<int32_t>(offsetof(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671_StaticFields, ___hXgVWmzPrJkeVQJyuHswOPdQFlFg_29)); }
	inline Func_3_t722B6E01079F18BA4476D2B9A59F2DD94555B0F1 * get_hXgVWmzPrJkeVQJyuHswOPdQFlFg_29() const { return ___hXgVWmzPrJkeVQJyuHswOPdQFlFg_29; }
	inline Func_3_t722B6E01079F18BA4476D2B9A59F2DD94555B0F1 ** get_address_of_hXgVWmzPrJkeVQJyuHswOPdQFlFg_29() { return &___hXgVWmzPrJkeVQJyuHswOPdQFlFg_29; }
	inline void set_hXgVWmzPrJkeVQJyuHswOPdQFlFg_29(Func_3_t722B6E01079F18BA4476D2B9A59F2DD94555B0F1 * value)
	{
		___hXgVWmzPrJkeVQJyuHswOPdQFlFg_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hXgVWmzPrJkeVQJyuHswOPdQFlFg_29), (void*)value);
	}
};


// Rewired.ControllerMapWithAxes
struct  ControllerMapWithAxes_t6D095E9EE41B757831830413DC6FE457D1892C36  : public ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB
{
public:
	// System.Collections.Generic.IList`1<Rewired.ActionElementMap> Rewired.ControllerMapWithAxes::OOGDzyPdHxYHaHmaQEExFrqxDnrl
	RuntimeObject* ___OOGDzyPdHxYHaHmaQEExFrqxDnrl_16;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap> Rewired.ControllerMapWithAxes::fZBdkbjiMuhRWtJVwREevCpPBWX
	ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * ___fZBdkbjiMuhRWtJVwREevCpPBWX_17;

public:
	inline static int32_t get_offset_of_OOGDzyPdHxYHaHmaQEExFrqxDnrl_16() { return static_cast<int32_t>(offsetof(ControllerMapWithAxes_t6D095E9EE41B757831830413DC6FE457D1892C36, ___OOGDzyPdHxYHaHmaQEExFrqxDnrl_16)); }
	inline RuntimeObject* get_OOGDzyPdHxYHaHmaQEExFrqxDnrl_16() const { return ___OOGDzyPdHxYHaHmaQEExFrqxDnrl_16; }
	inline RuntimeObject** get_address_of_OOGDzyPdHxYHaHmaQEExFrqxDnrl_16() { return &___OOGDzyPdHxYHaHmaQEExFrqxDnrl_16; }
	inline void set_OOGDzyPdHxYHaHmaQEExFrqxDnrl_16(RuntimeObject* value)
	{
		___OOGDzyPdHxYHaHmaQEExFrqxDnrl_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OOGDzyPdHxYHaHmaQEExFrqxDnrl_16), (void*)value);
	}

	inline static int32_t get_offset_of_fZBdkbjiMuhRWtJVwREevCpPBWX_17() { return static_cast<int32_t>(offsetof(ControllerMapWithAxes_t6D095E9EE41B757831830413DC6FE457D1892C36, ___fZBdkbjiMuhRWtJVwREevCpPBWX_17)); }
	inline ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * get_fZBdkbjiMuhRWtJVwREevCpPBWX_17() const { return ___fZBdkbjiMuhRWtJVwREevCpPBWX_17; }
	inline ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 ** get_address_of_fZBdkbjiMuhRWtJVwREevCpPBWX_17() { return &___fZBdkbjiMuhRWtJVwREevCpPBWX_17; }
	inline void set_fZBdkbjiMuhRWtJVwREevCpPBWX_17(ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * value)
	{
		___fZBdkbjiMuhRWtJVwREevCpPBWX_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fZBdkbjiMuhRWtJVwREevCpPBWX_17), (void*)value);
	}
};


// Rewired.Data.Mapping.HardwareJoystickMap
struct  HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.String Rewired.Data.Mapping.HardwareJoystickMap::controllerName
	String_t* ___controllerName_4;
	// System.String Rewired.Data.Mapping.HardwareJoystickMap::editorControllerName
	String_t* ___editorControllerName_5;
	// System.String Rewired.Data.Mapping.HardwareJoystickMap::description
	String_t* ___description_6;
	// System.String Rewired.Data.Mapping.HardwareJoystickMap::controllerGuid
	String_t* ___controllerGuid_7;
	// System.String[] Rewired.Data.Mapping.HardwareJoystickMap::templateGuids
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___templateGuids_8;
	// System.Boolean Rewired.Data.Mapping.HardwareJoystickMap::hideInLists
	bool ___hideInLists_9;
	// Rewired.JoystickType[] Rewired.Data.Mapping.HardwareJoystickMap::joystickTypes
	JoystickTypeU5BU5D_t441284FE2D4324E2C6DA63D5E966FB756FA283FA* ___joystickTypes_10;
	// Rewired.ControllerElementIdentifier[] Rewired.Data.Mapping.HardwareJoystickMap::elementIdentifiers
	ControllerElementIdentifierU5BU5D_tA8BA3AEF17F1DDBADB44C5BE04B7F34917625DEE* ___elementIdentifiers_11;
	// Rewired.Data.Mapping.HardwareJoystickMap_CompoundElement[] Rewired.Data.Mapping.HardwareJoystickMap::compoundElements
	CompoundElementU5BU5D_t99A80F4322F7288CB752671D33337B32F7A0E79C* ___compoundElements_12;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_DirectInput Rewired.Data.Mapping.HardwareJoystickMap::directInput
	Platform_DirectInput_t8384F48EB39207EF4B476BF85EEE95C48F113399 * ___directInput_13;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_RawInput Rewired.Data.Mapping.HardwareJoystickMap::rawInput
	Platform_RawInput_tFA8A4734C93ADCCF4CE7C2E3947003AB875E5FBD * ___rawInput_14;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_XInput Rewired.Data.Mapping.HardwareJoystickMap::xInput
	Platform_XInput_t44E2E6F0FD4F4A22A7FB6C031984FFC5F82BDC16 * ___xInput_15;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_OSX Rewired.Data.Mapping.HardwareJoystickMap::osx
	Platform_OSX_t03A46AF339888AC6E808D1D31A7467AD14FCA357 * ___osx_16;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Linux Rewired.Data.Mapping.HardwareJoystickMap::linux
	Platform_Linux_t5C50A8A935B1AE1D30D6F7912DA10AEAFFD53EB5 * ___linux_17;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_WindowsUWP Rewired.Data.Mapping.HardwareJoystickMap::windowsUWP
	Platform_WindowsUWP_t79A50D7432962C9DD8B8CDFFAFC55B27BB32C06A * ___windowsUWP_18;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_Windows
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_Windows_19;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_WindowsUWP
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_WindowsUWP_20;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_OSX
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_OSX_21;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_Linux
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_Linux_22;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_Linux_PreConfigured
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_Linux_PreConfigured_23;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_Android
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_Android_24;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_iOS
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_iOS_25;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_Blackberry
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_Blackberry_26;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_WindowsPhone8
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_WindowsPhone8_27;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_XBox360
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_XBox360_28;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_XBoxOne
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_XBoxOne_29;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_PS3
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_PS3_30;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_PS4
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_PS4_31;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_PSM
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_PSM_32;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_PSVita
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_PSVita_33;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_Wii
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_Wii_34;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_WiiU
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_WiiU_35;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_AmazonFireTV
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_AmazonFireTV_36;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Fallback Rewired.Data.Mapping.HardwareJoystickMap::fallback_RazerForgeTV
	Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * ___fallback_RazerForgeTV_37;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_WebGL Rewired.Data.Mapping.HardwareJoystickMap::webGL
	Platform_WebGL_t7C026B328916B42D37B442AE084EABCB320F318A * ___webGL_38;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Ouya Rewired.Data.Mapping.HardwareJoystickMap::ouya
	Platform_Ouya_t6E1DA960C43511902B179E0E6746B8230AE60092 * ___ouya_39;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_XboxOne Rewired.Data.Mapping.HardwareJoystickMap::xboxOne
	Platform_XboxOne_tF5ACC52C21E7D086DBC6B842E36075C1582AA2C4 * ___xboxOne_40;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_PS4 Rewired.Data.Mapping.HardwareJoystickMap::ps4
	Platform_PS4_t5B4B7E5A8EF60DFB5E1F1CE6756ADD5BD5FB4FA1 * ___ps4_41;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_NintendoSwitch Rewired.Data.Mapping.HardwareJoystickMap::nintendoSwitch
	Platform_NintendoSwitch_t2696C2B97DA28B7AFFF2A0AA8CE74563C99F99C8 * ___nintendoSwitch_42;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_Stadia Rewired.Data.Mapping.HardwareJoystickMap::stadia
	Platform_Stadia_tA031EC4B1DB0F157B0B2C7A38B31AB46E2E92D65 * ___stadia_43;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_InternalDriver Rewired.Data.Mapping.HardwareJoystickMap::internalDriver
	Platform_InternalDriver_t8A5A88BC6C79D793F1E687A676A4EC95C644007F * ___internalDriver_44;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_SDL2 Rewired.Data.Mapping.HardwareJoystickMap::sdl2_Linux
	Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A * ___sdl2_Linux_45;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_SDL2 Rewired.Data.Mapping.HardwareJoystickMap::sdl2_Windows
	Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A * ___sdl2_Windows_46;
	// Rewired.Data.Mapping.HardwareJoystickMap_Platform_SDL2 Rewired.Data.Mapping.HardwareJoystickMap::sdl2_OSX
	Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A * ___sdl2_OSX_47;
	// System.Int32 Rewired.Data.Mapping.HardwareJoystickMap::elementIdentifierIdCounter
	int32_t ___elementIdentifierIdCounter_48;

public:
	inline static int32_t get_offset_of_controllerName_4() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___controllerName_4)); }
	inline String_t* get_controllerName_4() const { return ___controllerName_4; }
	inline String_t** get_address_of_controllerName_4() { return &___controllerName_4; }
	inline void set_controllerName_4(String_t* value)
	{
		___controllerName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerName_4), (void*)value);
	}

	inline static int32_t get_offset_of_editorControllerName_5() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___editorControllerName_5)); }
	inline String_t* get_editorControllerName_5() const { return ___editorControllerName_5; }
	inline String_t** get_address_of_editorControllerName_5() { return &___editorControllerName_5; }
	inline void set_editorControllerName_5(String_t* value)
	{
		___editorControllerName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editorControllerName_5), (void*)value);
	}

	inline static int32_t get_offset_of_description_6() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___description_6)); }
	inline String_t* get_description_6() const { return ___description_6; }
	inline String_t** get_address_of_description_6() { return &___description_6; }
	inline void set_description_6(String_t* value)
	{
		___description_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_6), (void*)value);
	}

	inline static int32_t get_offset_of_controllerGuid_7() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___controllerGuid_7)); }
	inline String_t* get_controllerGuid_7() const { return ___controllerGuid_7; }
	inline String_t** get_address_of_controllerGuid_7() { return &___controllerGuid_7; }
	inline void set_controllerGuid_7(String_t* value)
	{
		___controllerGuid_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerGuid_7), (void*)value);
	}

	inline static int32_t get_offset_of_templateGuids_8() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___templateGuids_8)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_templateGuids_8() const { return ___templateGuids_8; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_templateGuids_8() { return &___templateGuids_8; }
	inline void set_templateGuids_8(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___templateGuids_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___templateGuids_8), (void*)value);
	}

	inline static int32_t get_offset_of_hideInLists_9() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___hideInLists_9)); }
	inline bool get_hideInLists_9() const { return ___hideInLists_9; }
	inline bool* get_address_of_hideInLists_9() { return &___hideInLists_9; }
	inline void set_hideInLists_9(bool value)
	{
		___hideInLists_9 = value;
	}

	inline static int32_t get_offset_of_joystickTypes_10() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___joystickTypes_10)); }
	inline JoystickTypeU5BU5D_t441284FE2D4324E2C6DA63D5E966FB756FA283FA* get_joystickTypes_10() const { return ___joystickTypes_10; }
	inline JoystickTypeU5BU5D_t441284FE2D4324E2C6DA63D5E966FB756FA283FA** get_address_of_joystickTypes_10() { return &___joystickTypes_10; }
	inline void set_joystickTypes_10(JoystickTypeU5BU5D_t441284FE2D4324E2C6DA63D5E966FB756FA283FA* value)
	{
		___joystickTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joystickTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_elementIdentifiers_11() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___elementIdentifiers_11)); }
	inline ControllerElementIdentifierU5BU5D_tA8BA3AEF17F1DDBADB44C5BE04B7F34917625DEE* get_elementIdentifiers_11() const { return ___elementIdentifiers_11; }
	inline ControllerElementIdentifierU5BU5D_tA8BA3AEF17F1DDBADB44C5BE04B7F34917625DEE** get_address_of_elementIdentifiers_11() { return &___elementIdentifiers_11; }
	inline void set_elementIdentifiers_11(ControllerElementIdentifierU5BU5D_tA8BA3AEF17F1DDBADB44C5BE04B7F34917625DEE* value)
	{
		___elementIdentifiers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elementIdentifiers_11), (void*)value);
	}

	inline static int32_t get_offset_of_compoundElements_12() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___compoundElements_12)); }
	inline CompoundElementU5BU5D_t99A80F4322F7288CB752671D33337B32F7A0E79C* get_compoundElements_12() const { return ___compoundElements_12; }
	inline CompoundElementU5BU5D_t99A80F4322F7288CB752671D33337B32F7A0E79C** get_address_of_compoundElements_12() { return &___compoundElements_12; }
	inline void set_compoundElements_12(CompoundElementU5BU5D_t99A80F4322F7288CB752671D33337B32F7A0E79C* value)
	{
		___compoundElements_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compoundElements_12), (void*)value);
	}

	inline static int32_t get_offset_of_directInput_13() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___directInput_13)); }
	inline Platform_DirectInput_t8384F48EB39207EF4B476BF85EEE95C48F113399 * get_directInput_13() const { return ___directInput_13; }
	inline Platform_DirectInput_t8384F48EB39207EF4B476BF85EEE95C48F113399 ** get_address_of_directInput_13() { return &___directInput_13; }
	inline void set_directInput_13(Platform_DirectInput_t8384F48EB39207EF4B476BF85EEE95C48F113399 * value)
	{
		___directInput_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___directInput_13), (void*)value);
	}

	inline static int32_t get_offset_of_rawInput_14() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___rawInput_14)); }
	inline Platform_RawInput_tFA8A4734C93ADCCF4CE7C2E3947003AB875E5FBD * get_rawInput_14() const { return ___rawInput_14; }
	inline Platform_RawInput_tFA8A4734C93ADCCF4CE7C2E3947003AB875E5FBD ** get_address_of_rawInput_14() { return &___rawInput_14; }
	inline void set_rawInput_14(Platform_RawInput_tFA8A4734C93ADCCF4CE7C2E3947003AB875E5FBD * value)
	{
		___rawInput_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawInput_14), (void*)value);
	}

	inline static int32_t get_offset_of_xInput_15() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___xInput_15)); }
	inline Platform_XInput_t44E2E6F0FD4F4A22A7FB6C031984FFC5F82BDC16 * get_xInput_15() const { return ___xInput_15; }
	inline Platform_XInput_t44E2E6F0FD4F4A22A7FB6C031984FFC5F82BDC16 ** get_address_of_xInput_15() { return &___xInput_15; }
	inline void set_xInput_15(Platform_XInput_t44E2E6F0FD4F4A22A7FB6C031984FFC5F82BDC16 * value)
	{
		___xInput_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xInput_15), (void*)value);
	}

	inline static int32_t get_offset_of_osx_16() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___osx_16)); }
	inline Platform_OSX_t03A46AF339888AC6E808D1D31A7467AD14FCA357 * get_osx_16() const { return ___osx_16; }
	inline Platform_OSX_t03A46AF339888AC6E808D1D31A7467AD14FCA357 ** get_address_of_osx_16() { return &___osx_16; }
	inline void set_osx_16(Platform_OSX_t03A46AF339888AC6E808D1D31A7467AD14FCA357 * value)
	{
		___osx_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___osx_16), (void*)value);
	}

	inline static int32_t get_offset_of_linux_17() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___linux_17)); }
	inline Platform_Linux_t5C50A8A935B1AE1D30D6F7912DA10AEAFFD53EB5 * get_linux_17() const { return ___linux_17; }
	inline Platform_Linux_t5C50A8A935B1AE1D30D6F7912DA10AEAFFD53EB5 ** get_address_of_linux_17() { return &___linux_17; }
	inline void set_linux_17(Platform_Linux_t5C50A8A935B1AE1D30D6F7912DA10AEAFFD53EB5 * value)
	{
		___linux_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linux_17), (void*)value);
	}

	inline static int32_t get_offset_of_windowsUWP_18() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___windowsUWP_18)); }
	inline Platform_WindowsUWP_t79A50D7432962C9DD8B8CDFFAFC55B27BB32C06A * get_windowsUWP_18() const { return ___windowsUWP_18; }
	inline Platform_WindowsUWP_t79A50D7432962C9DD8B8CDFFAFC55B27BB32C06A ** get_address_of_windowsUWP_18() { return &___windowsUWP_18; }
	inline void set_windowsUWP_18(Platform_WindowsUWP_t79A50D7432962C9DD8B8CDFFAFC55B27BB32C06A * value)
	{
		___windowsUWP_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowsUWP_18), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_Windows_19() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_Windows_19)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_Windows_19() const { return ___fallback_Windows_19; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_Windows_19() { return &___fallback_Windows_19; }
	inline void set_fallback_Windows_19(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_Windows_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_Windows_19), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_WindowsUWP_20() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_WindowsUWP_20)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_WindowsUWP_20() const { return ___fallback_WindowsUWP_20; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_WindowsUWP_20() { return &___fallback_WindowsUWP_20; }
	inline void set_fallback_WindowsUWP_20(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_WindowsUWP_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_WindowsUWP_20), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_OSX_21() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_OSX_21)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_OSX_21() const { return ___fallback_OSX_21; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_OSX_21() { return &___fallback_OSX_21; }
	inline void set_fallback_OSX_21(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_OSX_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_OSX_21), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_Linux_22() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_Linux_22)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_Linux_22() const { return ___fallback_Linux_22; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_Linux_22() { return &___fallback_Linux_22; }
	inline void set_fallback_Linux_22(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_Linux_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_Linux_22), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_Linux_PreConfigured_23() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_Linux_PreConfigured_23)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_Linux_PreConfigured_23() const { return ___fallback_Linux_PreConfigured_23; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_Linux_PreConfigured_23() { return &___fallback_Linux_PreConfigured_23; }
	inline void set_fallback_Linux_PreConfigured_23(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_Linux_PreConfigured_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_Linux_PreConfigured_23), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_Android_24() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_Android_24)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_Android_24() const { return ___fallback_Android_24; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_Android_24() { return &___fallback_Android_24; }
	inline void set_fallback_Android_24(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_Android_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_Android_24), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_iOS_25() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_iOS_25)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_iOS_25() const { return ___fallback_iOS_25; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_iOS_25() { return &___fallback_iOS_25; }
	inline void set_fallback_iOS_25(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_iOS_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_iOS_25), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_Blackberry_26() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_Blackberry_26)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_Blackberry_26() const { return ___fallback_Blackberry_26; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_Blackberry_26() { return &___fallback_Blackberry_26; }
	inline void set_fallback_Blackberry_26(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_Blackberry_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_Blackberry_26), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_WindowsPhone8_27() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_WindowsPhone8_27)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_WindowsPhone8_27() const { return ___fallback_WindowsPhone8_27; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_WindowsPhone8_27() { return &___fallback_WindowsPhone8_27; }
	inline void set_fallback_WindowsPhone8_27(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_WindowsPhone8_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_WindowsPhone8_27), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_XBox360_28() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_XBox360_28)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_XBox360_28() const { return ___fallback_XBox360_28; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_XBox360_28() { return &___fallback_XBox360_28; }
	inline void set_fallback_XBox360_28(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_XBox360_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_XBox360_28), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_XBoxOne_29() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_XBoxOne_29)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_XBoxOne_29() const { return ___fallback_XBoxOne_29; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_XBoxOne_29() { return &___fallback_XBoxOne_29; }
	inline void set_fallback_XBoxOne_29(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_XBoxOne_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_XBoxOne_29), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_PS3_30() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_PS3_30)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_PS3_30() const { return ___fallback_PS3_30; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_PS3_30() { return &___fallback_PS3_30; }
	inline void set_fallback_PS3_30(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_PS3_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_PS3_30), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_PS4_31() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_PS4_31)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_PS4_31() const { return ___fallback_PS4_31; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_PS4_31() { return &___fallback_PS4_31; }
	inline void set_fallback_PS4_31(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_PS4_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_PS4_31), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_PSM_32() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_PSM_32)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_PSM_32() const { return ___fallback_PSM_32; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_PSM_32() { return &___fallback_PSM_32; }
	inline void set_fallback_PSM_32(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_PSM_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_PSM_32), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_PSVita_33() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_PSVita_33)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_PSVita_33() const { return ___fallback_PSVita_33; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_PSVita_33() { return &___fallback_PSVita_33; }
	inline void set_fallback_PSVita_33(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_PSVita_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_PSVita_33), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_Wii_34() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_Wii_34)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_Wii_34() const { return ___fallback_Wii_34; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_Wii_34() { return &___fallback_Wii_34; }
	inline void set_fallback_Wii_34(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_Wii_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_Wii_34), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_WiiU_35() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_WiiU_35)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_WiiU_35() const { return ___fallback_WiiU_35; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_WiiU_35() { return &___fallback_WiiU_35; }
	inline void set_fallback_WiiU_35(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_WiiU_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_WiiU_35), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_AmazonFireTV_36() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_AmazonFireTV_36)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_AmazonFireTV_36() const { return ___fallback_AmazonFireTV_36; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_AmazonFireTV_36() { return &___fallback_AmazonFireTV_36; }
	inline void set_fallback_AmazonFireTV_36(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_AmazonFireTV_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_AmazonFireTV_36), (void*)value);
	}

	inline static int32_t get_offset_of_fallback_RazerForgeTV_37() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___fallback_RazerForgeTV_37)); }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * get_fallback_RazerForgeTV_37() const { return ___fallback_RazerForgeTV_37; }
	inline Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 ** get_address_of_fallback_RazerForgeTV_37() { return &___fallback_RazerForgeTV_37; }
	inline void set_fallback_RazerForgeTV_37(Platform_Fallback_tC5968A83CBB360E30B21890E8F02D4FA0E56B313 * value)
	{
		___fallback_RazerForgeTV_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallback_RazerForgeTV_37), (void*)value);
	}

	inline static int32_t get_offset_of_webGL_38() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___webGL_38)); }
	inline Platform_WebGL_t7C026B328916B42D37B442AE084EABCB320F318A * get_webGL_38() const { return ___webGL_38; }
	inline Platform_WebGL_t7C026B328916B42D37B442AE084EABCB320F318A ** get_address_of_webGL_38() { return &___webGL_38; }
	inline void set_webGL_38(Platform_WebGL_t7C026B328916B42D37B442AE084EABCB320F318A * value)
	{
		___webGL_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webGL_38), (void*)value);
	}

	inline static int32_t get_offset_of_ouya_39() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___ouya_39)); }
	inline Platform_Ouya_t6E1DA960C43511902B179E0E6746B8230AE60092 * get_ouya_39() const { return ___ouya_39; }
	inline Platform_Ouya_t6E1DA960C43511902B179E0E6746B8230AE60092 ** get_address_of_ouya_39() { return &___ouya_39; }
	inline void set_ouya_39(Platform_Ouya_t6E1DA960C43511902B179E0E6746B8230AE60092 * value)
	{
		___ouya_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ouya_39), (void*)value);
	}

	inline static int32_t get_offset_of_xboxOne_40() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___xboxOne_40)); }
	inline Platform_XboxOne_tF5ACC52C21E7D086DBC6B842E36075C1582AA2C4 * get_xboxOne_40() const { return ___xboxOne_40; }
	inline Platform_XboxOne_tF5ACC52C21E7D086DBC6B842E36075C1582AA2C4 ** get_address_of_xboxOne_40() { return &___xboxOne_40; }
	inline void set_xboxOne_40(Platform_XboxOne_tF5ACC52C21E7D086DBC6B842E36075C1582AA2C4 * value)
	{
		___xboxOne_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xboxOne_40), (void*)value);
	}

	inline static int32_t get_offset_of_ps4_41() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___ps4_41)); }
	inline Platform_PS4_t5B4B7E5A8EF60DFB5E1F1CE6756ADD5BD5FB4FA1 * get_ps4_41() const { return ___ps4_41; }
	inline Platform_PS4_t5B4B7E5A8EF60DFB5E1F1CE6756ADD5BD5FB4FA1 ** get_address_of_ps4_41() { return &___ps4_41; }
	inline void set_ps4_41(Platform_PS4_t5B4B7E5A8EF60DFB5E1F1CE6756ADD5BD5FB4FA1 * value)
	{
		___ps4_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ps4_41), (void*)value);
	}

	inline static int32_t get_offset_of_nintendoSwitch_42() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___nintendoSwitch_42)); }
	inline Platform_NintendoSwitch_t2696C2B97DA28B7AFFF2A0AA8CE74563C99F99C8 * get_nintendoSwitch_42() const { return ___nintendoSwitch_42; }
	inline Platform_NintendoSwitch_t2696C2B97DA28B7AFFF2A0AA8CE74563C99F99C8 ** get_address_of_nintendoSwitch_42() { return &___nintendoSwitch_42; }
	inline void set_nintendoSwitch_42(Platform_NintendoSwitch_t2696C2B97DA28B7AFFF2A0AA8CE74563C99F99C8 * value)
	{
		___nintendoSwitch_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nintendoSwitch_42), (void*)value);
	}

	inline static int32_t get_offset_of_stadia_43() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___stadia_43)); }
	inline Platform_Stadia_tA031EC4B1DB0F157B0B2C7A38B31AB46E2E92D65 * get_stadia_43() const { return ___stadia_43; }
	inline Platform_Stadia_tA031EC4B1DB0F157B0B2C7A38B31AB46E2E92D65 ** get_address_of_stadia_43() { return &___stadia_43; }
	inline void set_stadia_43(Platform_Stadia_tA031EC4B1DB0F157B0B2C7A38B31AB46E2E92D65 * value)
	{
		___stadia_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stadia_43), (void*)value);
	}

	inline static int32_t get_offset_of_internalDriver_44() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___internalDriver_44)); }
	inline Platform_InternalDriver_t8A5A88BC6C79D793F1E687A676A4EC95C644007F * get_internalDriver_44() const { return ___internalDriver_44; }
	inline Platform_InternalDriver_t8A5A88BC6C79D793F1E687A676A4EC95C644007F ** get_address_of_internalDriver_44() { return &___internalDriver_44; }
	inline void set_internalDriver_44(Platform_InternalDriver_t8A5A88BC6C79D793F1E687A676A4EC95C644007F * value)
	{
		___internalDriver_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalDriver_44), (void*)value);
	}

	inline static int32_t get_offset_of_sdl2_Linux_45() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___sdl2_Linux_45)); }
	inline Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A * get_sdl2_Linux_45() const { return ___sdl2_Linux_45; }
	inline Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A ** get_address_of_sdl2_Linux_45() { return &___sdl2_Linux_45; }
	inline void set_sdl2_Linux_45(Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A * value)
	{
		___sdl2_Linux_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sdl2_Linux_45), (void*)value);
	}

	inline static int32_t get_offset_of_sdl2_Windows_46() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___sdl2_Windows_46)); }
	inline Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A * get_sdl2_Windows_46() const { return ___sdl2_Windows_46; }
	inline Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A ** get_address_of_sdl2_Windows_46() { return &___sdl2_Windows_46; }
	inline void set_sdl2_Windows_46(Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A * value)
	{
		___sdl2_Windows_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sdl2_Windows_46), (void*)value);
	}

	inline static int32_t get_offset_of_sdl2_OSX_47() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___sdl2_OSX_47)); }
	inline Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A * get_sdl2_OSX_47() const { return ___sdl2_OSX_47; }
	inline Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A ** get_address_of_sdl2_OSX_47() { return &___sdl2_OSX_47; }
	inline void set_sdl2_OSX_47(Platform_SDL2_t5339C1F7963CAC4185CB1400C3EA0174D7A7B80A * value)
	{
		___sdl2_OSX_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sdl2_OSX_47), (void*)value);
	}

	inline static int32_t get_offset_of_elementIdentifierIdCounter_48() { return static_cast<int32_t>(offsetof(HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB, ___elementIdentifierIdCounter_48)); }
	inline int32_t get_elementIdentifierIdCounter_48() const { return ___elementIdentifierIdCounter_48; }
	inline int32_t* get_address_of_elementIdentifierIdCounter_48() { return &___elementIdentifierIdCounter_48; }
	inline void set_elementIdentifierIdCounter_48(int32_t value)
	{
		___elementIdentifierIdCounter_48 = value;
	}
};


// Rewired.ControllerWithMap
struct  ControllerWithMap_tC7B548CC97EDE21A4083A5A89F7089BC98BEB05A  : public Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671
{
public:

public:
};


// Rewired.JoystickMap
struct  JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24  : public ControllerMapWithAxes_t6D095E9EE41B757831830413DC6FE457D1892C36
{
public:

public:
};


// Rewired.ControllerWithAxes
struct  ControllerWithAxes_tCDA27FD69855F6BE3B3D7082423DF80DFB6737EA  : public ControllerWithMap_tC7B548CC97EDE21A4083A5A89F7089BC98BEB05A
{
public:
	// System.Int32 Rewired.ControllerWithAxes::_axisCount
	int32_t ____axisCount_30;
	// System.Int32 Rewired.ControllerWithAxes::_axis2DCount
	int32_t ____axis2DCount_31;
	// Rewired.Controller_Axis[] Rewired.ControllerWithAxes::axes
	AxisU5BU5D_t4A9D9CB010B4F05D4472FB918F08E8B1434B7BEB* ___axes_32;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller_Axis> Rewired.ControllerWithAxes::axes_readOnly
	ReadOnlyCollection_1_t2FC4D82F7AABEAB28A14216C3A57818B355A98EB * ___axes_readOnly_33;
	// Rewired.Controller_Axis2D[] Rewired.ControllerWithAxes::axes2D
	Axis2DU5BU5D_t3EA76FC4806A467C9FF20A2DB0C67407FEFFAB01* ___axes2D_34;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller_Axis2D> Rewired.ControllerWithAxes::axes2D_readOnly
	ReadOnlyCollection_1_t0DE413092804EC8FE479436075E87B4EC39398DD * ___axes2D_readOnly_35;
	// Rewired.CalibrationMap Rewired.ControllerWithAxes::_calibrationMap
	CalibrationMap_t52D0C36A8E4195533E3CDF25F67BA8DA3EFB51A3 * ____calibrationMap_36;
	// System.Single[] Rewired.ControllerWithAxes::GPsshUBNCEeotCPiTmYNkyGEgFg
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___GPsshUBNCEeotCPiTmYNkyGEgFg_37;
	// System.UInt32 Rewired.ControllerWithAxes::dEIDWDFusiOoUGrCAIdXMGDMAOwD
	uint32_t ___dEIDWDFusiOoUGrCAIdXMGDMAOwD_38;
	// System.Func`2<System.Int32,System.Int32> Rewired.ControllerWithAxes::uERBuoBfRdciDhdggEUjipZszNTr
	Func_2_t7E959DEAF1C1E69DDAA4CC9284FA7F005E80606E * ___uERBuoBfRdciDhdggEUjipZszNTr_39;

public:
	inline static int32_t get_offset_of__axisCount_30() { return static_cast<int32_t>(offsetof(ControllerWithAxes_tCDA27FD69855F6BE3B3D7082423DF80DFB6737EA, ____axisCount_30)); }
	inline int32_t get__axisCount_30() const { return ____axisCount_30; }
	inline int32_t* get_address_of__axisCount_30() { return &____axisCount_30; }
	inline void set__axisCount_30(int32_t value)
	{
		____axisCount_30 = value;
	}

	inline static int32_t get_offset_of__axis2DCount_31() { return static_cast<int32_t>(offsetof(ControllerWithAxes_tCDA27FD69855F6BE3B3D7082423DF80DFB6737EA, ____axis2DCount_31)); }
	inline int32_t get__axis2DCount_31() const { return ____axis2DCount_31; }
	inline int32_t* get_address_of__axis2DCount_31() { return &____axis2DCount_31; }
	inline void set__axis2DCount_31(int32_t value)
	{
		____axis2DCount_31 = value;
	}

	inline static int32_t get_offset_of_axes_32() { return static_cast<int32_t>(offsetof(ControllerWithAxes_tCDA27FD69855F6BE3B3D7082423DF80DFB6737EA, ___axes_32)); }
	inline AxisU5BU5D_t4A9D9CB010B4F05D4472FB918F08E8B1434B7BEB* get_axes_32() const { return ___axes_32; }
	inline AxisU5BU5D_t4A9D9CB010B4F05D4472FB918F08E8B1434B7BEB** get_address_of_axes_32() { return &___axes_32; }
	inline void set_axes_32(AxisU5BU5D_t4A9D9CB010B4F05D4472FB918F08E8B1434B7BEB* value)
	{
		___axes_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes_32), (void*)value);
	}

	inline static int32_t get_offset_of_axes_readOnly_33() { return static_cast<int32_t>(offsetof(ControllerWithAxes_tCDA27FD69855F6BE3B3D7082423DF80DFB6737EA, ___axes_readOnly_33)); }
	inline ReadOnlyCollection_1_t2FC4D82F7AABEAB28A14216C3A57818B355A98EB * get_axes_readOnly_33() const { return ___axes_readOnly_33; }
	inline ReadOnlyCollection_1_t2FC4D82F7AABEAB28A14216C3A57818B355A98EB ** get_address_of_axes_readOnly_33() { return &___axes_readOnly_33; }
	inline void set_axes_readOnly_33(ReadOnlyCollection_1_t2FC4D82F7AABEAB28A14216C3A57818B355A98EB * value)
	{
		___axes_readOnly_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes_readOnly_33), (void*)value);
	}

	inline static int32_t get_offset_of_axes2D_34() { return static_cast<int32_t>(offsetof(ControllerWithAxes_tCDA27FD69855F6BE3B3D7082423DF80DFB6737EA, ___axes2D_34)); }
	inline Axis2DU5BU5D_t3EA76FC4806A467C9FF20A2DB0C67407FEFFAB01* get_axes2D_34() const { return ___axes2D_34; }
	inline Axis2DU5BU5D_t3EA76FC4806A467C9FF20A2DB0C67407FEFFAB01** get_address_of_axes2D_34() { return &___axes2D_34; }
	inline void set_axes2D_34(Axis2DU5BU5D_t3EA76FC4806A467C9FF20A2DB0C67407FEFFAB01* value)
	{
		___axes2D_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes2D_34), (void*)value);
	}

	inline static int32_t get_offset_of_axes2D_readOnly_35() { return static_cast<int32_t>(offsetof(ControllerWithAxes_tCDA27FD69855F6BE3B3D7082423DF80DFB6737EA, ___axes2D_readOnly_35)); }
	inline ReadOnlyCollection_1_t0DE413092804EC8FE479436075E87B4EC39398DD * get_axes2D_readOnly_35() const { return ___axes2D_readOnly_35; }
	inline ReadOnlyCollection_1_t0DE413092804EC8FE479436075E87B4EC39398DD ** get_address_of_axes2D_readOnly_35() { return &___axes2D_readOnly_35; }
	inline void set_axes2D_readOnly_35(ReadOnlyCollection_1_t0DE413092804EC8FE479436075E87B4EC39398DD * value)
	{
		___axes2D_readOnly_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes2D_readOnly_35), (void*)value);
	}

	inline static int32_t get_offset_of__calibrationMap_36() { return static_cast<int32_t>(offsetof(ControllerWithAxes_tCDA27FD69855F6BE3B3D7082423DF80DFB6737EA, ____calibrationMap_36)); }
	inline CalibrationMap_t52D0C36A8E4195533E3CDF25F67BA8DA3EFB51A3 * get__calibrationMap_36() const { return ____calibrationMap_36; }
	inline CalibrationMap_t52D0C36A8E4195533E3CDF25F67BA8DA3EFB51A3 ** get_address_of__calibrationMap_36() { return &____calibrationMap_36; }
	inline void set__calibrationMap_36(CalibrationMap_t52D0C36A8E4195533E3CDF25F67BA8DA3EFB51A3 * value)
	{
		____calibrationMap_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____calibrationMap_36), (void*)value);
	}

	inline static int32_t get_offset_of_GPsshUBNCEeotCPiTmYNkyGEgFg_37() { return static_cast<int32_t>(offsetof(ControllerWithAxes_tCDA27FD69855F6BE3B3D7082423DF80DFB6737EA, ___GPsshUBNCEeotCPiTmYNkyGEgFg_37)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_GPsshUBNCEeotCPiTmYNkyGEgFg_37() const { return ___GPsshUBNCEeotCPiTmYNkyGEgFg_37; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_GPsshUBNCEeotCPiTmYNkyGEgFg_37() { return &___GPsshUBNCEeotCPiTmYNkyGEgFg_37; }
	inline void set_GPsshUBNCEeotCPiTmYNkyGEgFg_37(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___GPsshUBNCEeotCPiTmYNkyGEgFg_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GPsshUBNCEeotCPiTmYNkyGEgFg_37), (void*)value);
	}

	inline static int32_t get_offset_of_dEIDWDFusiOoUGrCAIdXMGDMAOwD_38() { return static_cast<int32_t>(offsetof(ControllerWithAxes_tCDA27FD69855F6BE3B3D7082423DF80DFB6737EA, ___dEIDWDFusiOoUGrCAIdXMGDMAOwD_38)); }
	inline uint32_t get_dEIDWDFusiOoUGrCAIdXMGDMAOwD_38() const { return ___dEIDWDFusiOoUGrCAIdXMGDMAOwD_38; }
	inline uint32_t* get_address_of_dEIDWDFusiOoUGrCAIdXMGDMAOwD_38() { return &___dEIDWDFusiOoUGrCAIdXMGDMAOwD_38; }
	inline void set_dEIDWDFusiOoUGrCAIdXMGDMAOwD_38(uint32_t value)
	{
		___dEIDWDFusiOoUGrCAIdXMGDMAOwD_38 = value;
	}

	inline static int32_t get_offset_of_uERBuoBfRdciDhdggEUjipZszNTr_39() { return static_cast<int32_t>(offsetof(ControllerWithAxes_tCDA27FD69855F6BE3B3D7082423DF80DFB6737EA, ___uERBuoBfRdciDhdggEUjipZszNTr_39)); }
	inline Func_2_t7E959DEAF1C1E69DDAA4CC9284FA7F005E80606E * get_uERBuoBfRdciDhdggEUjipZszNTr_39() const { return ___uERBuoBfRdciDhdggEUjipZszNTr_39; }
	inline Func_2_t7E959DEAF1C1E69DDAA4CC9284FA7F005E80606E ** get_address_of_uERBuoBfRdciDhdggEUjipZszNTr_39() { return &___uERBuoBfRdciDhdggEUjipZszNTr_39; }
	inline void set_uERBuoBfRdciDhdggEUjipZszNTr_39(Func_2_t7E959DEAF1C1E69DDAA4CC9284FA7F005E80606E * value)
	{
		___uERBuoBfRdciDhdggEUjipZszNTr_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uERBuoBfRdciDhdggEUjipZszNTr_39), (void*)value);
	}
};


// Rewired.Keyboard
struct  Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004  : public ControllerWithMap_tC7B548CC97EDE21A4083A5A89F7089BC98BEB05A
{
public:
	// Rewired.Interfaces.IUnifiedKeyboardSource Rewired.Keyboard::_source
	RuntimeObject* ____source_31;
	// Rewired.ModifierKeyFlags Rewired.Keyboard::currentModfierKeyFlags
	int32_t ___currentModfierKeyFlags_32;
	// Rewired.ModifierKeyFlags Rewired.Keyboard::currentModfierKeyFlagsDouble
	int32_t ___currentModfierKeyFlagsDouble_33;
	// System.Func`2<Rewired.KeyboardKeyCode,System.Int32> Rewired.Keyboard::_getKeyIndexDelegate
	Func_2_t20DE2EBC38186DD09844EAE5633BA6EF803D8900 * ____getKeyIndexDelegate_34;
	// System.Int32[] Rewired.Keyboard::keyCodeToKeyIndex
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___keyCodeToKeyIndex_35;
	// System.Int32 Rewired.Keyboard::maxKeyValue
	int32_t ___maxKeyValue_37;

public:
	inline static int32_t get_offset_of__source_31() { return static_cast<int32_t>(offsetof(Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004, ____source_31)); }
	inline RuntimeObject* get__source_31() const { return ____source_31; }
	inline RuntimeObject** get_address_of__source_31() { return &____source_31; }
	inline void set__source_31(RuntimeObject* value)
	{
		____source_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_31), (void*)value);
	}

	inline static int32_t get_offset_of_currentModfierKeyFlags_32() { return static_cast<int32_t>(offsetof(Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004, ___currentModfierKeyFlags_32)); }
	inline int32_t get_currentModfierKeyFlags_32() const { return ___currentModfierKeyFlags_32; }
	inline int32_t* get_address_of_currentModfierKeyFlags_32() { return &___currentModfierKeyFlags_32; }
	inline void set_currentModfierKeyFlags_32(int32_t value)
	{
		___currentModfierKeyFlags_32 = value;
	}

	inline static int32_t get_offset_of_currentModfierKeyFlagsDouble_33() { return static_cast<int32_t>(offsetof(Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004, ___currentModfierKeyFlagsDouble_33)); }
	inline int32_t get_currentModfierKeyFlagsDouble_33() const { return ___currentModfierKeyFlagsDouble_33; }
	inline int32_t* get_address_of_currentModfierKeyFlagsDouble_33() { return &___currentModfierKeyFlagsDouble_33; }
	inline void set_currentModfierKeyFlagsDouble_33(int32_t value)
	{
		___currentModfierKeyFlagsDouble_33 = value;
	}

	inline static int32_t get_offset_of__getKeyIndexDelegate_34() { return static_cast<int32_t>(offsetof(Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004, ____getKeyIndexDelegate_34)); }
	inline Func_2_t20DE2EBC38186DD09844EAE5633BA6EF803D8900 * get__getKeyIndexDelegate_34() const { return ____getKeyIndexDelegate_34; }
	inline Func_2_t20DE2EBC38186DD09844EAE5633BA6EF803D8900 ** get_address_of__getKeyIndexDelegate_34() { return &____getKeyIndexDelegate_34; }
	inline void set__getKeyIndexDelegate_34(Func_2_t20DE2EBC38186DD09844EAE5633BA6EF803D8900 * value)
	{
		____getKeyIndexDelegate_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____getKeyIndexDelegate_34), (void*)value);
	}

	inline static int32_t get_offset_of_keyCodeToKeyIndex_35() { return static_cast<int32_t>(offsetof(Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004, ___keyCodeToKeyIndex_35)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_keyCodeToKeyIndex_35() const { return ___keyCodeToKeyIndex_35; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_keyCodeToKeyIndex_35() { return &___keyCodeToKeyIndex_35; }
	inline void set_keyCodeToKeyIndex_35(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___keyCodeToKeyIndex_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyCodeToKeyIndex_35), (void*)value);
	}

	inline static int32_t get_offset_of_maxKeyValue_37() { return static_cast<int32_t>(offsetof(Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004, ___maxKeyValue_37)); }
	inline int32_t get_maxKeyValue_37() const { return ___maxKeyValue_37; }
	inline int32_t* get_address_of_maxKeyValue_37() { return &___maxKeyValue_37; }
	inline void set_maxKeyValue_37(int32_t value)
	{
		___maxKeyValue_37 = value;
	}
};

struct Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004_StaticFields
{
public:
	// Rewired.Keyboard Rewired.Keyboard::singleton
	Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004 * ___singleton_30;
	// Rewired.KeyboardKeyCode[] Rewired.Keyboard::__keyIndexToKeyboardKeyCode
	KeyboardKeyCodeU5BU5D_t88F2320800F8F14E7935678C5AA693EEF40514B2* _____keyIndexToKeyboardKeyCode_36;
	// System.Guid Rewired.Keyboard::s_deviceInstanceGuid
	Guid_t  ___s_deviceInstanceGuid_38;

public:
	inline static int32_t get_offset_of_singleton_30() { return static_cast<int32_t>(offsetof(Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004_StaticFields, ___singleton_30)); }
	inline Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004 * get_singleton_30() const { return ___singleton_30; }
	inline Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004 ** get_address_of_singleton_30() { return &___singleton_30; }
	inline void set_singleton_30(Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004 * value)
	{
		___singleton_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___singleton_30), (void*)value);
	}

	inline static int32_t get_offset_of___keyIndexToKeyboardKeyCode_36() { return static_cast<int32_t>(offsetof(Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004_StaticFields, _____keyIndexToKeyboardKeyCode_36)); }
	inline KeyboardKeyCodeU5BU5D_t88F2320800F8F14E7935678C5AA693EEF40514B2* get___keyIndexToKeyboardKeyCode_36() const { return _____keyIndexToKeyboardKeyCode_36; }
	inline KeyboardKeyCodeU5BU5D_t88F2320800F8F14E7935678C5AA693EEF40514B2** get_address_of___keyIndexToKeyboardKeyCode_36() { return &_____keyIndexToKeyboardKeyCode_36; }
	inline void set___keyIndexToKeyboardKeyCode_36(KeyboardKeyCodeU5BU5D_t88F2320800F8F14E7935678C5AA693EEF40514B2* value)
	{
		_____keyIndexToKeyboardKeyCode_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____keyIndexToKeyboardKeyCode_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_deviceInstanceGuid_38() { return static_cast<int32_t>(offsetof(Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004_StaticFields, ___s_deviceInstanceGuid_38)); }
	inline Guid_t  get_s_deviceInstanceGuid_38() const { return ___s_deviceInstanceGuid_38; }
	inline Guid_t * get_address_of_s_deviceInstanceGuid_38() { return &___s_deviceInstanceGuid_38; }
	inline void set_s_deviceInstanceGuid_38(Guid_t  value)
	{
		___s_deviceInstanceGuid_38 = value;
	}
};


// Rewired.Mouse
struct  Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3  : public ControllerWithAxes_tCDA27FD69855F6BE3B3D7082423DF80DFB6737EA
{
public:
	// Rewired.Utils.Classes.Utility.TimerAbs Rewired.Mouse::mouseAxisPollingTimer
	TimerAbs_t89BDE70DB29168CBB45BE2FF477F04A84CC82429 * ___mouseAxisPollingTimer_40;
	// System.Single[] Rewired.Mouse::cumulativeMousePollingAxes
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___cumulativeMousePollingAxes_41;
	// UnityEngine.Vector2 Rewired.Mouse::_screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____screenPosition_42;
	// UnityEngine.Vector2 Rewired.Mouse::_screenPositionPrev
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____screenPositionPrev_43;
	// System.Int32 Rewired.Mouse::_lastScreenPositionUpdateFrame
	int32_t ____lastScreenPositionUpdateFrame_44;
	// Rewired.Interfaces.IUnifiedMouseSource Rewired.Mouse::_source
	RuntimeObject* ____source_45;

public:
	inline static int32_t get_offset_of_mouseAxisPollingTimer_40() { return static_cast<int32_t>(offsetof(Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3, ___mouseAxisPollingTimer_40)); }
	inline TimerAbs_t89BDE70DB29168CBB45BE2FF477F04A84CC82429 * get_mouseAxisPollingTimer_40() const { return ___mouseAxisPollingTimer_40; }
	inline TimerAbs_t89BDE70DB29168CBB45BE2FF477F04A84CC82429 ** get_address_of_mouseAxisPollingTimer_40() { return &___mouseAxisPollingTimer_40; }
	inline void set_mouseAxisPollingTimer_40(TimerAbs_t89BDE70DB29168CBB45BE2FF477F04A84CC82429 * value)
	{
		___mouseAxisPollingTimer_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseAxisPollingTimer_40), (void*)value);
	}

	inline static int32_t get_offset_of_cumulativeMousePollingAxes_41() { return static_cast<int32_t>(offsetof(Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3, ___cumulativeMousePollingAxes_41)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_cumulativeMousePollingAxes_41() const { return ___cumulativeMousePollingAxes_41; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_cumulativeMousePollingAxes_41() { return &___cumulativeMousePollingAxes_41; }
	inline void set_cumulativeMousePollingAxes_41(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___cumulativeMousePollingAxes_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cumulativeMousePollingAxes_41), (void*)value);
	}

	inline static int32_t get_offset_of__screenPosition_42() { return static_cast<int32_t>(offsetof(Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3, ____screenPosition_42)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get__screenPosition_42() const { return ____screenPosition_42; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of__screenPosition_42() { return &____screenPosition_42; }
	inline void set__screenPosition_42(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		____screenPosition_42 = value;
	}

	inline static int32_t get_offset_of__screenPositionPrev_43() { return static_cast<int32_t>(offsetof(Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3, ____screenPositionPrev_43)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get__screenPositionPrev_43() const { return ____screenPositionPrev_43; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of__screenPositionPrev_43() { return &____screenPositionPrev_43; }
	inline void set__screenPositionPrev_43(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		____screenPositionPrev_43 = value;
	}

	inline static int32_t get_offset_of__lastScreenPositionUpdateFrame_44() { return static_cast<int32_t>(offsetof(Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3, ____lastScreenPositionUpdateFrame_44)); }
	inline int32_t get__lastScreenPositionUpdateFrame_44() const { return ____lastScreenPositionUpdateFrame_44; }
	inline int32_t* get_address_of__lastScreenPositionUpdateFrame_44() { return &____lastScreenPositionUpdateFrame_44; }
	inline void set__lastScreenPositionUpdateFrame_44(int32_t value)
	{
		____lastScreenPositionUpdateFrame_44 = value;
	}

	inline static int32_t get_offset_of__source_45() { return static_cast<int32_t>(offsetof(Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3, ____source_45)); }
	inline RuntimeObject* get__source_45() const { return ____source_45; }
	inline RuntimeObject** get_address_of__source_45() { return &____source_45; }
	inline void set__source_45(RuntimeObject* value)
	{
		____source_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_45), (void*)value);
	}
};

struct Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3_StaticFields
{
public:
	// System.Guid Rewired.Mouse::s_deviceInstanceGuid
	Guid_t  ___s_deviceInstanceGuid_46;

public:
	inline static int32_t get_offset_of_s_deviceInstanceGuid_46() { return static_cast<int32_t>(offsetof(Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3_StaticFields, ___s_deviceInstanceGuid_46)); }
	inline Guid_t  get_s_deviceInstanceGuid_46() const { return ___s_deviceInstanceGuid_46; }
	inline Guid_t * get_address_of_s_deviceInstanceGuid_46() { return &___s_deviceInstanceGuid_46; }
	inline void set_s_deviceInstanceGuid_46(Guid_t  value)
	{
		___s_deviceInstanceGuid_46 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry[]
struct GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * m_Items[1];

public:
	inline GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * value)
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
// Mediatonic.Tools.ControllerGlyphs.ControllerEntry[]
struct ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * m_Items[1];

public:
	inline ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  GlyphEntryReturnedInfo_get_Empty_mFB1ABCD9F0BE6C59751DFCB78D345A34B044EC9E (const RuntimeMethod* method);
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.GlyphEntry::GetGlyphInfo(Rewired.AxisRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  GlyphEntry_GetGlyphInfo_mABB5775B3C6DF0B4DE78A8A2B7354A9A62743E92 (GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * __this, int32_t ___axisRange0, const RuntimeMethod* method);
// System.Int32 Rewired.Data.Mapping.HardwareJoystickMap::get_elementIdentifierCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HardwareJoystickMap_get_elementIdentifierCount_m6679840547726644952E93F8A67715CA5D28E090 (HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerElementIdentifier> Rewired.Data.Mapping.HardwareJoystickMap::get_ElementIdentifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HardwareJoystickMap_get_ElementIdentifiers_mAF2879EA0E2739D48BA3E671B4FDFAD39286A749 (HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB * __this, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ControllerGlyphs.GlyphEntry::.ctor(Rewired.ControllerElementIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphEntry__ctor_mF214864BA467FB1EB026B5768886281B2B07F467 (GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * __this, ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * ___elementIdentifier0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// Rewired.ControllerType Rewired.Controller::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Controller_get_type_m261EFB687410CF04179A6FDAE04C3BD78717FDF1 (Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * __this, const RuntimeMethod* method);
// System.Guid Rewired.Controller::get_hardwareTypeGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Controller_get_hardwareTypeGuid_mFC51FF0B95D99499949DEC61B2FD37832AEDDE96 (Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * __this, const RuntimeMethod* method);
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_m3D98BA18CDAF0C6C329F86720B5CD61A170A3E52 (Guid_t  ___a0, Guid_t  ___b1, const RuntimeMethod* method);
// Rewired.InputActionType Rewired.InputAction::get_type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t InputAction_get_type_m30FB98BA3DB1B4BAD51AB2ED6226D653FBCA151C_inline (InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * __this, const RuntimeMethod* method);
// System.Int32 Rewired.InputAction::get_id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t InputAction_get_id_m64463ED715A9192559144B816E0D8D27454C665B_inline (InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * __this, const RuntimeMethod* method);
// Rewired.ActionElementMap Rewired.Player/ControllerHelper/MapHelper::GetFirstElementMapWithAction(Rewired.Controller,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * MapHelper_GetFirstElementMapWithAction_m326D9A6111C68E60EC305A8556F95633CD3C4FCC (MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92 * __this, Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * ___controller0, int32_t ___actionId1, bool ___skipDisabledMaps2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ActionElementMap> Rewired.Player/ControllerHelper/MapHelper::ElementMapsWithAction(Rewired.Controller,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_ElementMapsWithAction_m224BBD6A4F8FC975C6C8032B821767A583AF3615 (MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92 * __this, Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * ___controller0, int32_t ___actionId1, bool ___skipDisabledMaps2, const RuntimeMethod* method);
// Rewired.ControllerMap Rewired.ActionElementMap::get_controllerMap()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * ActionElementMap_get_controllerMap_m921F19411EFE72E46B8948909C06F599804499F2_inline (ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * __this, const RuntimeMethod* method);
// System.Int32 Rewired.ControllerMap::get_layoutId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ControllerMap_get_layoutId_m1B90CB02DDE635CA339BA98082FD4F9480DF0EF7 (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ActionElementMap> Rewired.Player/ControllerHelper/MapHelper::AxisMapsWithAction(Rewired.Controller,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_AxisMapsWithAction_mC8628157410A2F3C4C9A5A1FAA781CDA46A0F530 (MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92 * __this, Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * ___controller0, int32_t ___actionId1, bool ___skipDisabledMaps2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ActionElementMap> Rewired.Player/ControllerHelper/MapHelper::ButtonMapsWithAction(Rewired.Controller,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_ButtonMapsWithAction_mDA139D70E51BE2FBCFD3316E43045D2A8AFAE40A (MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92 * __this, Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * ___controller0, int32_t ___actionId1, bool ___skipDisabledMaps2, const RuntimeMethod* method);
// Rewired.Pole Rewired.ActionElementMap::get_axisContribution()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ActionElementMap_get_axisContribution_m0D681CBCA543DA565CC65B9A47FE97EB0CCA0FB9_inline (ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * __this, const RuntimeMethod* method);
// System.String Rewired.InputAction::get_name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* InputAction_get_name_m01A82AC2749BF7391E3196B47B66C0C67E66E61A_inline (InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * __this, const RuntimeMethod* method);
// System.String Rewired.Controller::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Controller_get_name_m4584A5BA4A37AF4A0A6C1E23407A49E231FA6AF7 (Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * __this, const RuntimeMethod* method);
// System.String Rewired.Controller::get_hardwareName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Controller_get_hardwareName_m4584E94AA4C3A55411F2090E2FD0466C52BB0E04 (Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 Rewired.ActionElementMap::get_elementIdentifierId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ActionElementMap_get_elementIdentifierId_m5C08FB9FEDEBD85427E6C3576A87F929C6454C47_inline (ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * __this, const RuntimeMethod* method);
// Rewired.AxisRange Rewired.ActionElementMap::get_axisRange()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ActionElementMap_get_axisRange_mD1E544297A5702BEAB25FF5F06FD3C131757F93F_inline (ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * __this, const RuntimeMethod* method);
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::GetGlyphFromHardwareGuid(Rewired.Controller,System.Int32,Rewired.AxisRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  ControllerGlyphs_GetGlyphFromHardwareGuid_mF7AD7A0633BABBDB85AF78F2E181D6D84B42A267 (ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF * __this, Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * ___controller0, int32_t ___elementIdentifierId1, int32_t ___axisRange2, const RuntimeMethod* method);
// Rewired.ReInput/MappingHelper Rewired.ReInput::get_mapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * ReInput_get_mapping_m57CBC64F23235AA736D4C057ED17A85421F00D5C (const RuntimeMethod* method);
// Rewired.JoystickMap Rewired.ReInput/MappingHelper::GetJoystickMapInstance(System.Guid,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24 * MappingHelper_GetJoystickMapInstance_m81088DEE83415C6A188F95610753A413A6FF7BD0 (MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * __this, Guid_t  ___joystickTypeGuid0, int32_t ___mapCategoryId1, int32_t ___layoutId2, const RuntimeMethod* method);
// Rewired.Controller Rewired.ControllerMap::get_controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * ControllerMap_get_controller_m3CA19D5702EB469C55BD42C3426F40BE59A23A34 (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ActionElementMap> Rewired.ControllerMapWithAxes::AxisMapsWithAction(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerMapWithAxes_AxisMapsWithAction_m15C8D910180FF65861F52E8E17C517B696730CD8 (ControllerMapWithAxes_t6D095E9EE41B757831830413DC6FE457D1892C36 * __this, int32_t ___actionId0, bool ___skipDisabledMaps1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ActionElementMap> Rewired.ControllerMap::ButtonMapsWithAction(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerMap_ButtonMapsWithAction_m5E6E44E642715E26B82A795341C3BC15714B9353 (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * __this, int32_t ___actionId0, bool ___skipDisabledMaps1, const RuntimeMethod* method);
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::GetGlyphFromHardwareGuid(System.Guid,Rewired.ControllerType,System.Int32,Rewired.AxisRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  ControllerGlyphs_GetGlyphFromHardwareGuid_m173DE72D2D3DE62747D42E88A3DFC35A3EA20737 (ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF * __this, Guid_t  ___hardwareTypeGuid0, int32_t ___controllerType1, int32_t ___elementIdentifierId2, int32_t ___axisRange3, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Guid Rewired.Data.Mapping.HardwareJoystickMap::get_Guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  HardwareJoystickMap_get_Guid_mFE2FA52767793CCEC0914C35312CEB42AC7494E3 (HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB * __this, const RuntimeMethod* method);
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.ControllerEntry::GetGlyph(System.Int32,Rewired.AxisRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  ControllerEntry_GetGlyph_mBD7D8DEA1CE7C00334381F4FFD12E6C46F22CD29 (ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * __this, int32_t ___elementIdentifierId0, int32_t ___axisRange1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.MouseEntry::GetGlyph(System.Int32,Rewired.AxisRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  MouseEntry_GetGlyph_mC27F1A691E02C17B7EA153BD360176ADCBFE78C2 (MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934 * __this, int32_t ___elementIdentifierId0, int32_t ___axisRange1, const RuntimeMethod* method);
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.KeyboardEntry::GetGlyph(System.Int32,Rewired.AxisRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  KeyboardEntry_GetGlyph_m04A51F82BC61C5FFB1BC07AD02FA9B11A92859E0 (KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8 * __this, int32_t ___elementIdentifierId0, int32_t ___axisRange1, const RuntimeMethod* method);
// System.Void Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo::.ctor(UnityEngine.Sprite,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphEntryReturnedInfo__ctor_mC14E28F5D418E9C25D4013FF980F4A5AB5A72EF6 (GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___sprite0, String_t* ___text1, String_t* ___spriteAtlasName2, const RuntimeMethod* method);
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mC668142577A40A77D13B78AADDEFFFC2E2705079 (Guid_t * __this, String_t* ___g0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Rewired.ControllerElementIdentifier::get_name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ControllerElementIdentifier_get_name_m550A30B8982C0862FFAC44D6EB70BD2D226651BC_inline (ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * __this, const RuntimeMethod* method);
// System.Int32 Rewired.ControllerElementIdentifier::get_id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ControllerElementIdentifier_get_id_m3209DAD0F8E19450C50C83C8C532D372C8E07522_inline (ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * __this, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mD98CD6D19C28ADC48B8468F78F94D38E203D0521 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo::Equals(Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphEntryReturnedInfo_Equals_m71CAC7F8EA9B35F7AA0F32CA3FFAABC04B03E99F (GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * __this, GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  ___other0, const RuntimeMethod* method);
// System.Boolean Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphEntryReturnedInfo_Equals_mF6BBB69093ABB8D67C11CF85CA48E1CCE68A92C0 (GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphEntryReturnedInfo_GetHashCode_mA290615C65A492FA4421FAFCB9C086AE6FB17406 (GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * __this, const RuntimeMethod* method);
// Rewired.ReInput/ControllerHelper Rewired.ReInput::get_controllers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 * ReInput_get_controllers_m5644F9B5193812D5D906AD8DC7ABBC11E6B78234 (const RuntimeMethod* method);
// Rewired.Keyboard Rewired.ReInput/ControllerHelper::get_Keyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004 * ControllerHelper_get_Keyboard_mEBD11500482D97C31D8B30A3296B007A20DBF86F (ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<Rewired.ControllerElementIdentifier> Rewired.Controller::get_ElementIdentifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Controller_get_ElementIdentifiers_m47C9416E7678A3743B9C9C9056CFEF6C4690858C (Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * __this, const RuntimeMethod* method);
// Rewired.Mouse Rewired.ReInput/ControllerHelper::get_Mouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3 * ControllerHelper_get_Mouse_mF0CCB3626E0CA170277D2360078BC005B5256B5A (ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 * __this, const RuntimeMethod* method);
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
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.ControllerEntry::GetGlyph(System.Int32,Rewired.AxisRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  ControllerEntry_GetGlyph_mBD7D8DEA1CE7C00334381F4FFD12E6C46F22CD29 (ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * __this, int32_t ___elementIdentifierId0, int32_t ___axisRange1, const RuntimeMethod* method)
{
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* V_1 = NULL;
	int32_t V_2 = 0;
	GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * V_3 = NULL;
	{
		// GlyphEntryReturnedInfo glyphEntryReturnedInfo = GlyphEntryReturnedInfo.Empty;
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_0 = GlyphEntryReturnedInfo_get_Empty_mFB1ABCD9F0BE6C59751DFCB78D345A34B044EC9E(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (Glyphs != null)
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_1 = __this->get_Glyphs_5();
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// foreach (var glyph in Glyphs)
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_2 = __this->get_Glyphs_5();
		V_1 = L_2;
		V_2 = 0;
		goto IL_0037;
	}

IL_0019:
	{
		// foreach (var glyph in Glyphs)
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// if (glyph != null && glyph.ElementIdentifierId == elementIdentifierId)
		GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_7 = V_3;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_ElementIdentifierId_1();
		int32_t L_10 = ___elementIdentifierId0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0033;
		}
	}
	{
		// glyphEntryReturnedInfo = glyph.GetGlyphInfo(axisRange);
		GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_11 = V_3;
		int32_t L_12 = ___axisRange1;
		NullCheck(L_11);
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_13 = GlyphEntry_GetGlyphInfo_mABB5775B3C6DF0B4DE78A8A2B7354A9A62743E92(L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// break;
		goto IL_003d;
	}

IL_0033:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0037:
	{
		// foreach (var glyph in Glyphs)
		int32_t L_15 = V_2;
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_0019;
		}
	}

IL_003d:
	{
		// return glyphEntryReturnedInfo;
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_17 = V_0;
		return L_17;
	}
}
// System.Void Mediatonic.Tools.ControllerGlyphs.ControllerEntry::CreateGlyphEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerEntry_CreateGlyphEntries_m95C2A882D2F84EA4B605CD6BC7CF8FEB00F570B6 (ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerEntry_CreateGlyphEntries_m95C2A882D2F84EA4B605CD6BC7CF8FEB00F570B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// int elementIdentifierCount = Joystick.elementIdentifierCount;
		HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB * L_0 = __this->get_Joystick_4();
		NullCheck(L_0);
		int32_t L_1 = HardwareJoystickMap_get_elementIdentifierCount_m6679840547726644952E93F8A67715CA5D28E090(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Glyphs = new GlyphEntry[elementIdentifierCount];
		int32_t L_2 = V_0;
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_3 = (GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99*)(GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99*)SZArrayNew(GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_Glyphs_5(L_3);
		// int index = 0;
		V_1 = 0;
		// foreach (var entry in Joystick.ElementIdentifiers)
		HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB * L_4 = __this->get_Joystick_4();
		NullCheck(L_4);
		RuntimeObject* L_5 = HardwareJoystickMap_get_ElementIdentifiers_mAF2879EA0E2739D48BA3E671B4FDFAD39286A749(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerElementIdentifier>::GetEnumerator() */, IEnumerable_1_tD6342033827336E237259AF495FEE3664E09239E_il2cpp_TypeInfo_var, L_5);
		V_2 = L_6;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_002d:
		{
			// foreach (var entry in Joystick.ElementIdentifiers)
			RuntimeObject* L_7 = V_2;
			NullCheck(L_7);
			ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * L_8 = InterfaceFuncInvoker0< ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerElementIdentifier>::get_Current() */, IEnumerator_1_t6C243004613624AE1771418164AC4C40E3AFD38A_il2cpp_TypeInfo_var, L_7);
			V_3 = L_8;
			// Glyphs[index] = new GlyphEntry(entry);
			GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_9 = __this->get_Glyphs_5();
			int32_t L_10 = V_1;
			ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * L_11 = V_3;
			GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_12 = (GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A *)il2cpp_codegen_object_new(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A_il2cpp_TypeInfo_var);
			GlyphEntry__ctor_mF214864BA467FB1EB026B5768886281B2B07F467(L_12, L_11, /*hidden argument*/NULL);
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, L_12);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A *)L_12);
			// ++index;
			int32_t L_13 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		}

IL_0046:
		{
			// foreach (var entry in Joystick.ElementIdentifiers)
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_002d;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_2;
			if (!L_16)
			{
				goto IL_0059;
			}
		}

IL_0053:
		{
			RuntimeObject* L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_17);
		}

IL_0059:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ControllerGlyphs.ControllerEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerEntry__ctor_m0FBAE77EE4517CEAE02F71EA7FC86B6FCDBBD307 (ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
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
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::GetActionControllerSprite(Rewired.Player,Rewired.Controller,Rewired.InputAction,System.Int32,Rewired.Pole)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  ControllerGlyphs_GetActionControllerSprite_mCB33CF405BDA276016A71A7CEDEBAEE43E837E55 (ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF * __this, Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F * ___player0, Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * ___controller1, InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * ___inputAction2, int32_t ___joystickLayoutId3, int32_t ___axisContribution4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerGlyphs_GetActionControllerSprite_mCB33CF405BDA276016A71A7CEDEBAEE43E837E55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B6_0 = 0;
	{
		// GlyphEntryReturnedInfo glyphEntryReturnedInfo = GlyphEntryReturnedInfo.Empty;
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_0 = GlyphEntryReturnedInfo_get_Empty_mFB1ABCD9F0BE6C59751DFCB78D345A34B044EC9E(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (player != null && inputAction != null && controller != null)
		Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F * L_1 = ___player0;
		if (!L_1)
		{
			goto IL_01c7;
		}
	}
	{
		InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * L_2 = ___inputAction2;
		if (!L_2)
		{
			goto IL_01c7;
		}
	}
	{
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_3 = ___controller1;
		if (!L_3)
		{
			goto IL_01c7;
		}
	}
	{
		// bool isJoystick = (controller.type == ControllerType.Joystick || controller.hardwareTypeGuid == _customControllerGuid);
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_4 = ___controller1;
		NullCheck(L_4);
		int32_t L_5 = Controller_get_type_m261EFB687410CF04179A6FDAE04C3BD78717FDF1(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0034;
		}
	}
	{
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_6 = ___controller1;
		NullCheck(L_6);
		Guid_t  L_7 = Controller_get_hardwareTypeGuid_mFC51FF0B95D99499949DEC61B2FD37832AEDDE96(L_6, /*hidden argument*/NULL);
		Guid_t  L_8 = __this->get__customControllerGuid_9();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_9 = Guid_op_Equality_m3D98BA18CDAF0C6C329F86720B5CD61A170A3E52(L_7, L_8, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_9));
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
	}

IL_0035:
	{
		V_1 = (bool)G_B6_0;
		// ActionElementMap aem = null;
		V_2 = (ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 *)NULL;
		// switch (inputAction.type)
		InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * L_10 = ___inputAction2;
		NullCheck(L_10);
		int32_t L_11 = InputAction_get_type_m30FB98BA3DB1B4BAD51AB2ED6226D653FBCA151C_inline(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		int32_t L_12 = V_3;
		if (!L_12)
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0155;
		}
	}
	{
		// aem = player.controllers.maps.GetFirstElementMapWithAction(controller, inputAction.id, true);
		Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F * L_14 = ___player0;
		NullCheck(L_14);
		ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC * L_15 = L_14->get_controllers_7();
		NullCheck(L_15);
		MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92 * L_16 = L_15->get_maps_12();
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_17 = ___controller1;
		InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * L_18 = ___inputAction2;
		NullCheck(L_18);
		int32_t L_19 = InputAction_get_id_m64463ED715A9192559144B816E0D8D27454C665B_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_20 = MapHelper_GetFirstElementMapWithAction_m326D9A6111C68E60EC305A8556F95633CD3C4FCC(L_16, L_17, L_19, (bool)1, /*hidden argument*/NULL);
		V_2 = L_20;
		// if (aem == null)
		ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_21 = V_2;
		if (L_21)
		{
			goto IL_0155;
		}
	}
	{
		// actionElementMaps = player.controllers.maps.ElementMapsWithAction(controller, inputAction.id, false);
		Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F * L_22 = ___player0;
		NullCheck(L_22);
		ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC * L_23 = L_22->get_controllers_7();
		NullCheck(L_23);
		MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92 * L_24 = L_23->get_maps_12();
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_25 = ___controller1;
		InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * L_26 = ___inputAction2;
		NullCheck(L_26);
		int32_t L_27 = InputAction_get_id_m64463ED715A9192559144B816E0D8D27454C665B_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		RuntimeObject* L_28 = MapHelper_ElementMapsWithAction_m224BBD6A4F8FC975C6C8032B821767A583AF3615(L_24, L_25, L_27, (bool)0, /*hidden argument*/NULL);
		// foreach (var actionElementMap in actionElementMaps)
		NullCheck(L_28);
		RuntimeObject* L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ActionElementMap>::GetEnumerator() */, IEnumerable_1_t7ABBD6A4BFA4F1D248B261DCF0E5FD0F76286101_il2cpp_TypeInfo_var, L_28);
		V_4 = L_29;
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b0;
		}

IL_008c:
		{
			// foreach (var actionElementMap in actionElementMaps)
			RuntimeObject* L_30 = V_4;
			NullCheck(L_30);
			ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_31 = InterfaceFuncInvoker0< ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ActionElementMap>::get_Current() */, IEnumerator_1_t62E0BA06CEF38BC2D5839771D2A23781A0945E7C_il2cpp_TypeInfo_var, L_30);
			V_5 = L_31;
			// if (!isJoystick || actionElementMap.controllerMap.layoutId == joystickLayoutId)
			bool L_32 = V_1;
			if (!L_32)
			{
				goto IL_00a8;
			}
		}

IL_0098:
		{
			ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_33 = V_5;
			NullCheck(L_33);
			ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * L_34 = ActionElementMap_get_controllerMap_m921F19411EFE72E46B8948909C06F599804499F2_inline(L_33, /*hidden argument*/NULL);
			NullCheck(L_34);
			int32_t L_35 = ControllerMap_get_layoutId_m1B90CB02DDE635CA339BA98082FD4F9480DF0EF7(L_34, /*hidden argument*/NULL);
			int32_t L_36 = ___joystickLayoutId3;
			if ((!(((uint32_t)L_35) == ((uint32_t)L_36))))
			{
				goto IL_00b0;
			}
		}

IL_00a8:
		{
			// aem = actionElementMap;
			ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_37 = V_5;
			V_2 = L_37;
			// break;
			IL2CPP_LEAVE(0x155, FINALLY_00be);
		}

IL_00b0:
		{
			// foreach (var actionElementMap in actionElementMaps)
			RuntimeObject* L_38 = V_4;
			NullCheck(L_38);
			bool L_39 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_38);
			if (L_39)
			{
				goto IL_008c;
			}
		}

IL_00b9:
		{
			IL2CPP_LEAVE(0x155, FINALLY_00be);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00be;
	}

FINALLY_00be:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_40 = V_4;
			if (!L_40)
			{
				goto IL_00c9;
			}
		}

IL_00c2:
		{
			RuntimeObject* L_41 = V_4;
			NullCheck(L_41);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_41);
		}

IL_00c9:
		{
			IL2CPP_END_FINALLY(190)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(190)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x155, IL_0155)
	}

IL_00ca:
	{
		// if (isJoystick)
		bool L_42 = V_1;
		if (!L_42)
		{
			goto IL_00e9;
		}
	}
	{
		// actionElementMaps = player.controllers.maps.AxisMapsWithAction(controller, inputAction.id, false);
		Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F * L_43 = ___player0;
		NullCheck(L_43);
		ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC * L_44 = L_43->get_controllers_7();
		NullCheck(L_44);
		MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92 * L_45 = L_44->get_maps_12();
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_46 = ___controller1;
		InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * L_47 = ___inputAction2;
		NullCheck(L_47);
		int32_t L_48 = InputAction_get_id_m64463ED715A9192559144B816E0D8D27454C665B_inline(L_47, /*hidden argument*/NULL);
		NullCheck(L_45);
		RuntimeObject* L_49 = MapHelper_AxisMapsWithAction_mC8628157410A2F3C4C9A5A1FAA781CDA46A0F530(L_45, L_46, L_48, (bool)0, /*hidden argument*/NULL);
		V_6 = L_49;
		// }
		goto IL_0103;
	}

IL_00e9:
	{
		// actionElementMaps = player.controllers.maps.ButtonMapsWithAction(controller, inputAction.id, false);
		Player_t0A08FE589DD4B7B6093BF02C3790FF61B65CEB4F * L_50 = ___player0;
		NullCheck(L_50);
		ControllerHelper_tBC381D3F373CC57D36553FBA0843F6857C3C8DEC * L_51 = L_50->get_controllers_7();
		NullCheck(L_51);
		MapHelper_t54C25B42AE16C488282F75EA3EAA33E0869FDC92 * L_52 = L_51->get_maps_12();
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_53 = ___controller1;
		InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * L_54 = ___inputAction2;
		NullCheck(L_54);
		int32_t L_55 = InputAction_get_id_m64463ED715A9192559144B816E0D8D27454C665B_inline(L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		RuntimeObject* L_56 = MapHelper_ButtonMapsWithAction_mDA139D70E51BE2FBCFD3316E43045D2A8AFAE40A(L_52, L_53, L_55, (bool)0, /*hidden argument*/NULL);
		V_6 = L_56;
	}

IL_0103:
	{
		// if (actionElementMaps != null)
		RuntimeObject* L_57 = V_6;
		if (!L_57)
		{
			goto IL_0155;
		}
	}
	{
		// foreach (var actionElementMap in actionElementMaps)
		RuntimeObject* L_58 = V_6;
		NullCheck(L_58);
		RuntimeObject* L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ActionElementMap>::GetEnumerator() */, IEnumerable_1_t7ABBD6A4BFA4F1D248B261DCF0E5FD0F76286101_il2cpp_TypeInfo_var, L_58);
		V_4 = L_59;
	}

IL_0110:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013e;
		}

IL_0112:
		{
			// foreach (var actionElementMap in actionElementMaps)
			RuntimeObject* L_60 = V_4;
			NullCheck(L_60);
			ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_61 = InterfaceFuncInvoker0< ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ActionElementMap>::get_Current() */, IEnumerator_1_t62E0BA06CEF38BC2D5839771D2A23781A0945E7C_il2cpp_TypeInfo_var, L_60);
			V_7 = L_61;
			// if (
			//     (!isJoystick || actionElementMap.controllerMap.layoutId == joystickLayoutId)
			//     &&
			//     actionElementMap.axisContribution == axisContribution
			//    )
			bool L_62 = V_1;
			if (!L_62)
			{
				goto IL_012e;
			}
		}

IL_011e:
		{
			ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_63 = V_7;
			NullCheck(L_63);
			ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * L_64 = ActionElementMap_get_controllerMap_m921F19411EFE72E46B8948909C06F599804499F2_inline(L_63, /*hidden argument*/NULL);
			NullCheck(L_64);
			int32_t L_65 = ControllerMap_get_layoutId_m1B90CB02DDE635CA339BA98082FD4F9480DF0EF7(L_64, /*hidden argument*/NULL);
			int32_t L_66 = ___joystickLayoutId3;
			if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
			{
				goto IL_013e;
			}
		}

IL_012e:
		{
			ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_67 = V_7;
			NullCheck(L_67);
			int32_t L_68 = ActionElementMap_get_axisContribution_m0D681CBCA543DA565CC65B9A47FE97EB0CCA0FB9_inline(L_67, /*hidden argument*/NULL);
			int32_t L_69 = ___axisContribution4;
			if ((!(((uint32_t)L_68) == ((uint32_t)L_69))))
			{
				goto IL_013e;
			}
		}

IL_0139:
		{
			// aem = actionElementMap;
			ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_70 = V_7;
			V_2 = L_70;
			// break;
			IL2CPP_LEAVE(0x155, FINALLY_0149);
		}

IL_013e:
		{
			// foreach (var actionElementMap in actionElementMaps)
			RuntimeObject* L_71 = V_4;
			NullCheck(L_71);
			bool L_72 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_71);
			if (L_72)
			{
				goto IL_0112;
			}
		}

IL_0147:
		{
			IL2CPP_LEAVE(0x155, FINALLY_0149);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0149;
	}

FINALLY_0149:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_73 = V_4;
			if (!L_73)
			{
				goto IL_0154;
			}
		}

IL_014d:
		{
			RuntimeObject* L_74 = V_4;
			NullCheck(L_74);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_74);
		}

IL_0154:
		{
			IL2CPP_END_FINALLY(329)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(329)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x155, IL_0155)
	}

IL_0155:
	{
		// if (aem == null)
		ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_75 = V_2;
		if (L_75)
		{
			goto IL_01b3;
		}
	}
	{
		// Debug.LogWarning("Returning empty data as No Action Element Map currently containing action: " + inputAction.name +
		//         " exists. For controller: " + controller.name + " " + controller.hardwareName + " " + controller.hardwareTypeGuid);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_76 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_77 = L_76;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, _stringLiteral85D3350C1961481DF632FC7ADA53ED2A0AA2754B);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral85D3350C1961481DF632FC7ADA53ED2A0AA2754B);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_78 = L_77;
		InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * L_79 = ___inputAction2;
		NullCheck(L_79);
		String_t* L_80 = InputAction_get_name_m01A82AC2749BF7391E3196B47B66C0C67E66E61A_inline(L_79, /*hidden argument*/NULL);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_80);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_80);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_81 = L_78;
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, _stringLiteralFC2F9382F0BAC688AAD25A0CD5070034A81F1950);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralFC2F9382F0BAC688AAD25A0CD5070034A81F1950);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_82 = L_81;
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_83 = ___controller1;
		NullCheck(L_83);
		String_t* L_84 = Controller_get_name_m4584A5BA4A37AF4A0A6C1E23407A49E231FA6AF7(L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, L_84);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_84);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_85 = L_82;
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_86 = L_85;
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_87 = ___controller1;
		NullCheck(L_87);
		String_t* L_88 = Controller_get_hardwareName_m4584E94AA4C3A55411F2090E2FD0466C52BB0E04(L_87, /*hidden argument*/NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_88);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_88);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_89 = L_86;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_90 = L_89;
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_91 = ___controller1;
		NullCheck(L_91);
		Guid_t  L_92 = Controller_get_hardwareTypeGuid_mFC51FF0B95D99499949DEC61B2FD37832AEDDE96(L_91, /*hidden argument*/NULL);
		Guid_t  L_93 = L_92;
		RuntimeObject * L_94 = Box(Guid_t_il2cpp_TypeInfo_var, &L_93);
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_94);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_94);
		String_t* L_95 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_90, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_95, /*hidden argument*/NULL);
		// }
		goto IL_01c7;
	}

IL_01b3:
	{
		// glyphEntryReturnedInfo = GetGlyphFromHardwareGuid(controller, aem.elementIdentifierId, aem.axisRange);
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_96 = ___controller1;
		ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_97 = V_2;
		NullCheck(L_97);
		int32_t L_98 = ActionElementMap_get_elementIdentifierId_m5C08FB9FEDEBD85427E6C3576A87F929C6454C47_inline(L_97, /*hidden argument*/NULL);
		ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_99 = V_2;
		NullCheck(L_99);
		int32_t L_100 = ActionElementMap_get_axisRange_mD1E544297A5702BEAB25FF5F06FD3C131757F93F_inline(L_99, /*hidden argument*/NULL);
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_101 = ControllerGlyphs_GetGlyphFromHardwareGuid_mF7AD7A0633BABBDB85AF78F2E181D6D84B42A267(__this, L_96, L_98, L_100, /*hidden argument*/NULL);
		V_0 = L_101;
	}

IL_01c7:
	{
		// return glyphEntryReturnedInfo;
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_102 = V_0;
		return L_102;
	}
}
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::GetActionControllerSprite(System.Guid,System.Int32,System.Int32,Rewired.InputAction,Rewired.Pole)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  ControllerGlyphs_GetActionControllerSprite_m65F34B5FBD7335BF73E277FB1B187F28CCECE868 (ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF * __this, Guid_t  ___joystickGuid0, int32_t ___mapCategoryId1, int32_t ___layoutId2, InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * ___inputAction3, int32_t ___axisContribution4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerGlyphs_GetActionControllerSprite_m65F34B5FBD7335BF73E277FB1B187F28CCECE868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24 * V_1 = NULL;
	bool V_2 = false;
	ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * G_B3_0 = NULL;
	int32_t G_B8_0 = 0;
	{
		// GlyphEntryReturnedInfo glyphEntryReturnedInfo = GlyphEntryReturnedInfo.Empty;
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_0 = GlyphEntryReturnedInfo_get_Empty_mFB1ABCD9F0BE6C59751DFCB78D345A34B044EC9E(/*hidden argument*/NULL);
		V_0 = L_0;
		// var joystickMap = ReInput.mapping.GetJoystickMapInstance(joystickGuid, mapCategoryId, layoutId);
		IL2CPP_RUNTIME_CLASS_INIT(ReInput_t660C845029E93C5E11722938F53BCA3AED33D0BE_il2cpp_TypeInfo_var);
		MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * L_1 = ReInput_get_mapping_m57CBC64F23235AA736D4C057ED17A85421F00D5C(/*hidden argument*/NULL);
		Guid_t  L_2 = ___joystickGuid0;
		int32_t L_3 = ___mapCategoryId1;
		int32_t L_4 = ___layoutId2;
		NullCheck(L_1);
		JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24 * L_5 = MappingHelper_GetJoystickMapInstance_m81088DEE83415C6A188F95610753A413A6FF7BD0(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (joystickMap?.controller != null && inputAction != null)
		JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24 * L_6 = V_1;
		if (L_6)
		{
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 *)(NULL));
		goto IL_0020;
	}

IL_001a:
	{
		JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24 * L_7 = V_1;
		NullCheck(L_7);
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_8 = ControllerMap_get_controller_m3CA19D5702EB469C55BD42C3426F40BE59A23A34(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0020:
	{
		if (!G_B3_0)
		{
			goto IL_00ff;
		}
	}
	{
		InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * L_9 = ___inputAction3;
		if (!L_9)
		{
			goto IL_00ff;
		}
	}
	{
		// bool isJoystick = (joystickMap.controller.type == ControllerType.Joystick || joystickMap.controller.hardwareTypeGuid == _customControllerGuid);
		JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24 * L_10 = V_1;
		NullCheck(L_10);
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_11 = ControllerMap_get_controller_m3CA19D5702EB469C55BD42C3426F40BE59A23A34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = Controller_get_type_m261EFB687410CF04179A6FDAE04C3BD78717FDF1(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_0052;
		}
	}
	{
		JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24 * L_13 = V_1;
		NullCheck(L_13);
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_14 = ControllerMap_get_controller_m3CA19D5702EB469C55BD42C3426F40BE59A23A34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Guid_t  L_15 = Controller_get_hardwareTypeGuid_mFC51FF0B95D99499949DEC61B2FD37832AEDDE96(L_14, /*hidden argument*/NULL);
		Guid_t  L_16 = __this->get__customControllerGuid_9();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_17 = Guid_op_Equality_m3D98BA18CDAF0C6C329F86720B5CD61A170A3E52(L_15, L_16, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_17));
		goto IL_0053;
	}

IL_0052:
	{
		G_B8_0 = 1;
	}

IL_0053:
	{
		V_2 = (bool)G_B8_0;
		// ActionElementMap aem = null;
		V_3 = (ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 *)NULL;
		// switch (inputAction.type)
		InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * L_18 = ___inputAction3;
		NullCheck(L_18);
		int32_t L_19 = InputAction_get_type_m30FB98BA3DB1B4BAD51AB2ED6226D653FBCA151C_inline(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		if (!L_20)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_00e7;
		}
	}
	{
		// aem = joystickMap.GetFirstElementMapWithAction(inputAction.id, true);
		JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24 * L_22 = V_1;
		InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * L_23 = ___inputAction3;
		NullCheck(L_23);
		int32_t L_24 = InputAction_get_id_m64463ED715A9192559144B816E0D8D27454C665B_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_25 = VirtFuncInvoker2< ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 *, int32_t, bool >::Invoke(13 /* Rewired.ActionElementMap Rewired.ControllerMap::GetFirstElementMapWithAction(System.Int32,System.Boolean) */, L_22, L_24, (bool)1);
		V_3 = L_25;
		// break;
		goto IL_00e7;
	}

IL_0079:
	{
		// if (joystickMap.controller != null && isJoystick)
		JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24 * L_26 = V_1;
		NullCheck(L_26);
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_27 = ControllerMap_get_controller_m3CA19D5702EB469C55BD42C3426F40BE59A23A34(L_26, /*hidden argument*/NULL);
		bool L_28 = V_2;
		if (!((int32_t)((int32_t)((!(((RuntimeObject*)(Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 *)L_27) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)&(int32_t)L_28)))
		{
			goto IL_0098;
		}
	}
	{
		// actionElementMaps = joystickMap.AxisMapsWithAction(inputAction.id, false);
		JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24 * L_29 = V_1;
		InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * L_30 = ___inputAction3;
		NullCheck(L_30);
		int32_t L_31 = InputAction_get_id_m64463ED715A9192559144B816E0D8D27454C665B_inline(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		RuntimeObject* L_32 = ControllerMapWithAxes_AxisMapsWithAction_m15C8D910180FF65861F52E8E17C517B696730CD8(L_29, L_31, (bool)0, /*hidden argument*/NULL);
		V_5 = L_32;
		// }
		goto IL_00a8;
	}

IL_0098:
	{
		// actionElementMaps = joystickMap.ButtonMapsWithAction(inputAction.id, false);
		JoystickMap_tACC09DDD73FB3831A7B4D797C10DFB7FD2F8BB24 * L_33 = V_1;
		InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * L_34 = ___inputAction3;
		NullCheck(L_34);
		int32_t L_35 = InputAction_get_id_m64463ED715A9192559144B816E0D8D27454C665B_inline(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		RuntimeObject* L_36 = ControllerMap_ButtonMapsWithAction_m5E6E44E642715E26B82A795341C3BC15714B9353(L_33, L_35, (bool)0, /*hidden argument*/NULL);
		V_5 = L_36;
	}

IL_00a8:
	{
		// if (actionElementMaps != null)
		RuntimeObject* L_37 = V_5;
		if (!L_37)
		{
			goto IL_00e7;
		}
	}
	{
		// foreach (var actionElementMap in actionElementMaps)
		RuntimeObject* L_38 = V_5;
		NullCheck(L_38);
		RuntimeObject* L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ActionElementMap>::GetEnumerator() */, IEnumerable_1_t7ABBD6A4BFA4F1D248B261DCF0E5FD0F76286101_il2cpp_TypeInfo_var, L_38);
		V_6 = L_39;
	}

IL_00b5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_00b7:
		{
			// foreach (var actionElementMap in actionElementMaps)
			RuntimeObject* L_40 = V_6;
			NullCheck(L_40);
			ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_41 = InterfaceFuncInvoker0< ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ActionElementMap>::get_Current() */, IEnumerator_1_t62E0BA06CEF38BC2D5839771D2A23781A0945E7C_il2cpp_TypeInfo_var, L_40);
			V_7 = L_41;
			// if (actionElementMap.axisContribution == axisContribution)
			ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_42 = V_7;
			NullCheck(L_42);
			int32_t L_43 = ActionElementMap_get_axisContribution_m0D681CBCA543DA565CC65B9A47FE97EB0CCA0FB9_inline(L_42, /*hidden argument*/NULL);
			int32_t L_44 = ___axisContribution4;
			if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
			{
				goto IL_00d0;
			}
		}

IL_00cb:
		{
			// aem = actionElementMap;
			ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_45 = V_7;
			V_3 = L_45;
			// break;
			IL2CPP_LEAVE(0xE7, FINALLY_00db);
		}

IL_00d0:
		{
			// foreach (var actionElementMap in actionElementMaps)
			RuntimeObject* L_46 = V_6;
			NullCheck(L_46);
			bool L_47 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_46);
			if (L_47)
			{
				goto IL_00b7;
			}
		}

IL_00d9:
		{
			IL2CPP_LEAVE(0xE7, FINALLY_00db);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00db;
	}

FINALLY_00db:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_48 = V_6;
			if (!L_48)
			{
				goto IL_00e6;
			}
		}

IL_00df:
		{
			RuntimeObject* L_49 = V_6;
			NullCheck(L_49);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_49);
		}

IL_00e6:
		{
			IL2CPP_END_FINALLY(219)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(219)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE7, IL_00e7)
	}

IL_00e7:
	{
		// if (aem != null)
		ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_50 = V_3;
		if (!L_50)
		{
			goto IL_00ff;
		}
	}
	{
		// glyphEntryReturnedInfo = GetGlyphFromHardwareGuid(joystickGuid, ControllerType.Joystick, aem.elementIdentifierId, aem.axisRange);
		Guid_t  L_51 = ___joystickGuid0;
		ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_52 = V_3;
		NullCheck(L_52);
		int32_t L_53 = ActionElementMap_get_elementIdentifierId_m5C08FB9FEDEBD85427E6C3576A87F929C6454C47_inline(L_52, /*hidden argument*/NULL);
		ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * L_54 = V_3;
		NullCheck(L_54);
		int32_t L_55 = ActionElementMap_get_axisRange_mD1E544297A5702BEAB25FF5F06FD3C131757F93F_inline(L_54, /*hidden argument*/NULL);
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_56 = ControllerGlyphs_GetGlyphFromHardwareGuid_m173DE72D2D3DE62747D42E88A3DFC35A3EA20737(__this, L_51, 2, L_53, L_55, /*hidden argument*/NULL);
		V_0 = L_56;
	}

IL_00ff:
	{
		// return glyphEntryReturnedInfo;
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_57 = V_0;
		return L_57;
	}
}
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::GetGlyphFromHardwareGuid(Rewired.Controller,System.Int32,Rewired.AxisRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  ControllerGlyphs_GetGlyphFromHardwareGuid_mF7AD7A0633BABBDB85AF78F2E181D6D84B42A267 (ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF * __this, Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * ___controller0, int32_t ___elementIdentifierId1, int32_t ___axisRange2, const RuntimeMethod* method)
{
	{
		// return GetGlyphFromHardwareGuid(controller.hardwareTypeGuid, controller.type, elementIdentifierId, axisRange);
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_0 = ___controller0;
		NullCheck(L_0);
		Guid_t  L_1 = Controller_get_hardwareTypeGuid_mFC51FF0B95D99499949DEC61B2FD37832AEDDE96(L_0, /*hidden argument*/NULL);
		Controller_t5780C278CCFB7A81A0272F3B056B1EF463D9B671 * L_2 = ___controller0;
		NullCheck(L_2);
		int32_t L_3 = Controller_get_type_m261EFB687410CF04179A6FDAE04C3BD78717FDF1(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___elementIdentifierId1;
		int32_t L_5 = ___axisRange2;
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_6 = ControllerGlyphs_GetGlyphFromHardwareGuid_m173DE72D2D3DE62747D42E88A3DFC35A3EA20737(__this, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::GetGlyphFromHardwareGuid(System.Guid,Rewired.ControllerType,System.Int32,Rewired.AxisRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  ControllerGlyphs_GetGlyphFromHardwareGuid_m173DE72D2D3DE62747D42E88A3DFC35A3EA20737 (ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF * __this, Guid_t  ___hardwareTypeGuid0, int32_t ___controllerType1, int32_t ___elementIdentifierId2, int32_t ___axisRange3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerGlyphs_GetGlyphFromHardwareGuid_m173DE72D2D3DE62747D42E88A3DFC35A3EA20737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137* V_0 = NULL;
	int32_t V_1 = 0;
	ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * V_2 = NULL;
	{
		// if(hardwareTypeGuid == _customControllerGuid)
		Guid_t  L_0 = ___hardwareTypeGuid0;
		Guid_t  L_1 = __this->get__customControllerGuid_9();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_2 = Guid_op_Equality_m3D98BA18CDAF0C6C329F86720B5CD61A170A3E52(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogErrorFormat("Unhandled CustomController platform '{0}', using fallback Glyph code.", Application.platform);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int32_t L_5 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9(_stringLiteralFF4C9DB2CB72EA1E78144D46BE67AC0218A4832A, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// if (controllerType == ControllerType.Joystick)
		int32_t L_8 = ___controllerType1;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_009f;
		}
	}
	{
		// if (Controllers != null)
		ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137* L_9 = __this->get_Controllers_4();
		if (!L_9)
		{
			goto IL_00c1;
		}
	}
	{
		// foreach (var ctrl in Controllers)
		ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137* L_10 = __this->get_Controllers_4();
		V_0 = L_10;
		V_1 = 0;
		goto IL_0073;
	}

IL_0045:
	{
		// foreach (var ctrl in Controllers)
		ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// if (ctrl != null && ctrl.Joystick.Guid == hardwareTypeGuid)
		ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * L_15 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_15, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * L_17 = V_2;
		NullCheck(L_17);
		HardwareJoystickMap_tEC3597190BA5C54AF4F8849D274BE558ADB284FB * L_18 = L_17->get_Joystick_4();
		NullCheck(L_18);
		Guid_t  L_19 = HardwareJoystickMap_get_Guid_mFE2FA52767793CCEC0914C35312CEB42AC7494E3(L_18, /*hidden argument*/NULL);
		Guid_t  L_20 = ___hardwareTypeGuid0;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_21 = Guid_op_Equality_m3D98BA18CDAF0C6C329F86720B5CD61A170A3E52(L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_006f;
		}
	}
	{
		// return ctrl.GetGlyph(elementIdentifierId, axisRange);
		ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * L_22 = V_2;
		int32_t L_23 = ___elementIdentifierId2;
		int32_t L_24 = ___axisRange3;
		NullCheck(L_22);
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_25 = ControllerEntry_GetGlyph_mBD7D8DEA1CE7C00334381F4FFD12E6C46F22CD29(L_22, L_23, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_006f:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0073:
	{
		// foreach (var ctrl in Controllers)
		int32_t L_27 = V_1;
		ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_0045;
		}
	}
	{
		// Debug.LogWarning("Returning default glyph set as no Glyph Set configured for GUID: " + hardwareTypeGuid);
		Guid_t  L_29 = ___hardwareTypeGuid0;
		Guid_t  L_30 = L_29;
		RuntimeObject * L_31 = Box(Guid_t_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral8322CC541E5CE19127CE5A929D6CE87E5C8CDE1A, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_32, /*hidden argument*/NULL);
		// return Controllers[0].GetGlyph(elementIdentifierId, axisRange);
		ControllerEntryU5BU5D_t88C4F119D7F37B2EB70D9FEB2BF224D0077A9137* L_33 = __this->get_Controllers_4();
		NullCheck(L_33);
		int32_t L_34 = 0;
		ControllerEntry_t8F3756C36970BD0BE6ABD2C45EF40F4AD3265159 * L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		int32_t L_36 = ___elementIdentifierId2;
		int32_t L_37 = ___axisRange3;
		NullCheck(L_35);
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_38 = ControllerEntry_GetGlyph_mBD7D8DEA1CE7C00334381F4FFD12E6C46F22CD29(L_35, L_36, L_37, /*hidden argument*/NULL);
		return L_38;
	}

IL_009f:
	{
		// else if (controllerType == ControllerType.Mouse)
		int32_t L_39 = ___controllerType1;
		if ((!(((uint32_t)L_39) == ((uint32_t)1))))
		{
			goto IL_00b2;
		}
	}
	{
		// return Mouse.GetGlyph(elementIdentifierId, axisRange);
		MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934 * L_40 = __this->get_Mouse_6();
		int32_t L_41 = ___elementIdentifierId2;
		int32_t L_42 = ___axisRange3;
		NullCheck(L_40);
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_43 = MouseEntry_GetGlyph_mC27F1A691E02C17B7EA153BD360176ADCBFE78C2(L_40, L_41, L_42, /*hidden argument*/NULL);
		return L_43;
	}

IL_00b2:
	{
		// return Keyboard.GetGlyph(elementIdentifierId, axisRange);
		KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8 * L_44 = __this->get_Keyboard_5();
		int32_t L_45 = ___elementIdentifierId2;
		int32_t L_46 = ___axisRange3;
		NullCheck(L_44);
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_47 = KeyboardEntry_GetGlyph_m04A51F82BC61C5FFB1BC07AD02FA9B11A92859E0(L_44, L_45, L_46, /*hidden argument*/NULL);
		return L_47;
	}

IL_00c1:
	{
		// return new GlyphEntryReturnedInfo(null, null, null);
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_48;
		memset((&L_48), 0, sizeof(L_48));
		GlyphEntryReturnedInfo__ctor_mC14E28F5D418E9C25D4013FF980F4A5AB5A72EF6((&L_48), (Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 *)NULL, (String_t*)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void Mediatonic.Tools.ControllerGlyphs.ControllerGlyphs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerGlyphs__ctor_m92178394655E7BBD6BBC2FF6CC11CAAB4BAC973D (ControllerGlyphs_t1A4E959B668A5E92297C40CFC5C2EFCC57AE12CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerGlyphs__ctor_m92178394655E7BBD6BBC2FF6CC11CAAB4BAC973D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Guid _customControllerGuid = new Guid("09e67f29-7306-45d3-bb44-8d8e8c5934d3");
		Guid_t  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Guid__ctor_mC668142577A40A77D13B78AADDEFFFC2E2705079((&L_0), _stringLiteral0CDCE7CC78E5D1E9072CDECC7BF2BB1FEE9204DA, /*hidden argument*/NULL);
		__this->set__customControllerGuid_9(L_0);
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
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
// System.Void Mediatonic.Tools.ControllerGlyphs.GlyphEntry::.ctor(Rewired.ControllerElementIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphEntry__ctor_mF214864BA467FB1EB026B5768886281B2B07F467 (GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * __this, ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * ___elementIdentifier0, const RuntimeMethod* method)
{
	{
		// public GlyphEntry(ControllerElementIdentifier elementIdentifier)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// Name = elementIdentifier.name;
		ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * L_0 = ___elementIdentifier0;
		NullCheck(L_0);
		String_t* L_1 = ControllerElementIdentifier_get_name_m550A30B8982C0862FFAC44D6EB70BD2D226651BC_inline(L_0, /*hidden argument*/NULL);
		__this->set_Name_0(L_1);
		// ElementIdentifierId = elementIdentifier.id;
		ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * L_2 = ___elementIdentifier0;
		NullCheck(L_2);
		int32_t L_3 = ControllerElementIdentifier_get_id_m3209DAD0F8E19450C50C83C8C532D372C8E07522_inline(L_2, /*hidden argument*/NULL);
		__this->set_ElementIdentifierId_1(L_3);
		// }
		return;
	}
}
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.GlyphEntry::GetGlyphInfo(Rewired.AxisRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  GlyphEntry_GetGlyphInfo_mABB5775B3C6DF0B4DE78A8A2B7354A9A62743E92 (GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * __this, int32_t ___axisRange0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlyphEntry_GetGlyphInfo_mABB5775B3C6DF0B4DE78A8A2B7354A9A62743E92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B5_0 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B4_0 = NULL;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * G_B6_0 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B8_1 = NULL;
	String_t* G_B7_0 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B7_1 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B10_0 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B9_0 = NULL;
	String_t* G_B11_0 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B11_1 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B14_0 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B13_0 = NULL;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * G_B15_0 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B15_1 = NULL;
	String_t* G_B17_0 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B17_1 = NULL;
	String_t* G_B16_0 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B16_1 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B19_0 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B18_0 = NULL;
	String_t* G_B20_0 = NULL;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * G_B20_1 = NULL;
	{
		// GlyphEntryReturnedInfo glyphEntryReturnedInfo = GlyphEntryReturnedInfo.Empty;
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_0 = GlyphEntryReturnedInfo_get_Empty_mFB1ABCD9F0BE6C59751DFCB78D345A34B044EC9E(/*hidden argument*/NULL);
		V_0 = L_0;
		// switch (axisRange)
		int32_t L_1 = ___axisRange0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_00a2;
			}
		}
	}
	{
		goto IL_00f9;
	}

IL_001d:
	{
		// glyphEntryReturnedInfo.sprite = Glyph;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_2 = __this->get_Glyph_2();
		(&V_0)->set_sprite_0(L_2);
		// glyphEntryReturnedInfo.text = TextGlyph;
		String_t* L_3 = __this->get_TextGlyph_3();
		(&V_0)->set_text_1(L_3);
		// glyphEntryReturnedInfo.spriteAtlasName = SpriteAtlasName;
		String_t* L_4 = __this->get_SpriteAtlasName_4();
		(&V_0)->set_spriteAtlasName_2(L_4);
		// break;
		goto IL_00f9;
	}

IL_0049:
	{
		// glyphEntryReturnedInfo.sprite = GlyphPos != null ? GlyphPos : Glyph;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_5 = __this->get_GlyphPos_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = (&V_0);
		if (L_6)
		{
			G_B5_0 = (&V_0);
			goto IL_0061;
		}
	}
	{
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_7 = __this->get_Glyph_2();
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		goto IL_0067;
	}

IL_0061:
	{
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_8 = __this->get_GlyphPos_5();
		G_B6_0 = L_8;
		G_B6_1 = G_B5_0;
	}

IL_0067:
	{
		G_B6_1->set_sprite_0(G_B6_0);
		// glyphEntryReturnedInfo.text = TextGlyphPos ?? TextGlyph;
		String_t* L_9 = __this->get_TextGlyphPos_6();
		String_t* L_10 = L_9;
		G_B7_0 = L_10;
		G_B7_1 = (&V_0);
		if (L_10)
		{
			G_B8_0 = L_10;
			G_B8_1 = (&V_0);
			goto IL_007e;
		}
	}
	{
		String_t* L_11 = __this->get_TextGlyph_3();
		G_B8_0 = L_11;
		G_B8_1 = G_B7_1;
	}

IL_007e:
	{
		G_B8_1->set_text_1(G_B8_0);
		// glyphEntryReturnedInfo.spriteAtlasName = SpriteAtlasNamePos != null ? SpriteAtlasNamePos : SpriteAtlasName;
		String_t* L_12 = __this->get_SpriteAtlasNamePos_7();
		G_B9_0 = (&V_0);
		if (L_12)
		{
			G_B10_0 = (&V_0);
			goto IL_0095;
		}
	}
	{
		String_t* L_13 = __this->get_SpriteAtlasName_4();
		G_B11_0 = L_13;
		G_B11_1 = G_B9_0;
		goto IL_009b;
	}

IL_0095:
	{
		String_t* L_14 = __this->get_SpriteAtlasNamePos_7();
		G_B11_0 = L_14;
		G_B11_1 = G_B10_0;
	}

IL_009b:
	{
		G_B11_1->set_spriteAtlasName_2(G_B11_0);
		// break;
		goto IL_00f9;
	}

IL_00a2:
	{
		// glyphEntryReturnedInfo.sprite = GlyphNeg != null ? GlyphNeg : Glyph;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_15 = __this->get_GlyphNeg_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_15, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B13_0 = (&V_0);
		if (L_16)
		{
			G_B14_0 = (&V_0);
			goto IL_00ba;
		}
	}
	{
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_17 = __this->get_Glyph_2();
		G_B15_0 = L_17;
		G_B15_1 = G_B13_0;
		goto IL_00c0;
	}

IL_00ba:
	{
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_18 = __this->get_GlyphNeg_8();
		G_B15_0 = L_18;
		G_B15_1 = G_B14_0;
	}

IL_00c0:
	{
		G_B15_1->set_sprite_0(G_B15_0);
		// glyphEntryReturnedInfo.text = TextGlyphNeg ?? TextGlyph;
		String_t* L_19 = __this->get_TextGlyphNeg_9();
		String_t* L_20 = L_19;
		G_B16_0 = L_20;
		G_B16_1 = (&V_0);
		if (L_20)
		{
			G_B17_0 = L_20;
			G_B17_1 = (&V_0);
			goto IL_00d7;
		}
	}
	{
		String_t* L_21 = __this->get_TextGlyph_3();
		G_B17_0 = L_21;
		G_B17_1 = G_B16_1;
	}

IL_00d7:
	{
		G_B17_1->set_text_1(G_B17_0);
		// glyphEntryReturnedInfo.spriteAtlasName = SpriteAtlasNameNeg != null ? SpriteAtlasNameNeg : SpriteAtlasName;
		String_t* L_22 = __this->get_SpriteAtlasNameNeg_10();
		G_B18_0 = (&V_0);
		if (L_22)
		{
			G_B19_0 = (&V_0);
			goto IL_00ee;
		}
	}
	{
		String_t* L_23 = __this->get_SpriteAtlasName_4();
		G_B20_0 = L_23;
		G_B20_1 = G_B18_0;
		goto IL_00f4;
	}

IL_00ee:
	{
		String_t* L_24 = __this->get_SpriteAtlasNameNeg_10();
		G_B20_0 = L_24;
		G_B20_1 = G_B19_0;
	}

IL_00f4:
	{
		G_B20_1->set_spriteAtlasName_2(G_B20_0);
	}

IL_00f9:
	{
		// return glyphEntryReturnedInfo;
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_25 = V_0;
		return L_25;
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
// Conversion methods for marshalling of: Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo
IL2CPP_EXTERN_C void GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshal_pinvoke(const GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2& unmarshaled, GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'GlyphEntryReturnedInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_0Exception, NULL);
}
IL2CPP_EXTERN_C void GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshal_pinvoke_back(const GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshaled_pinvoke& marshaled, GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2& unmarshaled)
{
	Exception_t* ___sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'GlyphEntryReturnedInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo
IL2CPP_EXTERN_C void GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshal_pinvoke_cleanup(GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo
IL2CPP_EXTERN_C void GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshal_com(const GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2& unmarshaled, GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshaled_com& marshaled)
{
	Exception_t* ___sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'GlyphEntryReturnedInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_0Exception, NULL);
}
IL2CPP_EXTERN_C void GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshal_com_back(const GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshaled_com& marshaled, GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2& unmarshaled)
{
	Exception_t* ___sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'GlyphEntryReturnedInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mediatonic.Tools.ControllerGlyphs.GlyphEntry/GlyphEntryReturnedInfo
IL2CPP_EXTERN_C void GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshal_com_cleanup(GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_marshaled_com& marshaled)
{
}
// System.Void Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo::.ctor(UnityEngine.Sprite,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphEntryReturnedInfo__ctor_mC14E28F5D418E9C25D4013FF980F4A5AB5A72EF6 (GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___sprite0, String_t* ___text1, String_t* ___spriteAtlasName2, const RuntimeMethod* method)
{
	{
		// this.sprite = sprite;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_0 = ___sprite0;
		__this->set_sprite_0(L_0);
		// this.text = text;
		String_t* L_1 = ___text1;
		__this->set_text_1(L_1);
		// this.spriteAtlasName = spriteAtlasName;
		String_t* L_2 = ___spriteAtlasName2;
		__this->set_spriteAtlasName_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GlyphEntryReturnedInfo__ctor_mC14E28F5D418E9C25D4013FF980F4A5AB5A72EF6_AdjustorThunk (RuntimeObject * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___sprite0, String_t* ___text1, String_t* ___spriteAtlasName2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * _thisAdjusted = reinterpret_cast<GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 *>(__this + _offset);
	GlyphEntryReturnedInfo__ctor_mC14E28F5D418E9C25D4013FF980F4A5AB5A72EF6(_thisAdjusted, ___sprite0, ___text1, ___spriteAtlasName2, method);
}
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  GlyphEntryReturnedInfo_get_Empty_mFB1ABCD9F0BE6C59751DFCB78D345A34B044EC9E (const RuntimeMethod* method)
{
	{
		// public static GlyphEntryReturnedInfo Empty => new GlyphEntryReturnedInfo(null, null, null);
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_0;
		memset((&L_0), 0, sizeof(L_0));
		GlyphEntryReturnedInfo__ctor_mC14E28F5D418E9C25D4013FF980F4A5AB5A72EF6((&L_0), (Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 *)NULL, (String_t*)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo::Equals(Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphEntryReturnedInfo_Equals_m71CAC7F8EA9B35F7AA0F32CA3FFAABC04B03E99F (GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * __this, GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  ___other0, const RuntimeMethod* method)
{
	{
		// return Equals(sprite, other.sprite) && text == other.text && spriteAtlasName == other.spriteAtlasName;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_0 = __this->get_sprite_0();
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_1 = ___other0;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_2 = L_1.get_sprite_0();
		bool L_3 = Object_Equals_mD98CD6D19C28ADC48B8468F78F94D38E203D0521(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_4 = __this->get_text_1();
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_5 = ___other0;
		String_t* L_6 = L_5.get_text_1();
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_8 = __this->get_spriteAtlasName_2();
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_9 = ___other0;
		String_t* L_10 = L_9.get_spriteAtlasName_2();
		bool L_11 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool GlyphEntryReturnedInfo_Equals_m71CAC7F8EA9B35F7AA0F32CA3FFAABC04B03E99F_AdjustorThunk (RuntimeObject * __this, GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * _thisAdjusted = reinterpret_cast<GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 *>(__this + _offset);
	return GlyphEntryReturnedInfo_Equals_m71CAC7F8EA9B35F7AA0F32CA3FFAABC04B03E99F(_thisAdjusted, ___other0, method);
}
// System.Boolean Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphEntryReturnedInfo_Equals_mF6BBB69093ABB8D67C11CF85CA48E1CCE68A92C0 (GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlyphEntryReturnedInfo_Equals_mF6BBB69093ABB8D67C11CF85CA48E1CCE68A92C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		// return obj is GlyphEntryReturnedInfo other && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		RuntimeObject * L_1 = L_0;
		V_1 = L_1;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_2 = V_1;
		V_0 = ((*(GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 *)((GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 *)UnBox(L_2, GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2_il2cpp_TypeInfo_var))));
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_3 = V_0;
		bool L_4 = GlyphEntryReturnedInfo_Equals_m71CAC7F8EA9B35F7AA0F32CA3FFAABC04B03E99F((GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool GlyphEntryReturnedInfo_Equals_mF6BBB69093ABB8D67C11CF85CA48E1CCE68A92C0_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * _thisAdjusted = reinterpret_cast<GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 *>(__this + _offset);
	return GlyphEntryReturnedInfo_Equals_mF6BBB69093ABB8D67C11CF85CA48E1CCE68A92C0(_thisAdjusted, ___obj0, method);
}
// System.Int32 Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphEntryReturnedInfo_GetHashCode_mA290615C65A492FA4421FAFCB9C086AE6FB17406 (GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlyphEntryReturnedInfo_GetHashCode_mA290615C65A492FA4421FAFCB9C086AE6FB17406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		// var hashCode = (sprite != null ? sprite.GetHashCode() : 0);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_0 = __this->get_sprite_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_2 = __this->get_sprite_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		// hashCode = (hashCode * 397) ^ (text != null ? text.GetHashCode() : 0);
		String_t* L_4 = __this->get_text_1();
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)397)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)397)));
			goto IL_002d;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_002d:
	{
		String_t* L_5 = __this->get_text_1();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// hashCode = (hashCode * 397) ^ (spriteAtlasName != null ? spriteAtlasName.GetHashCode() : 0);
		String_t* L_7 = __this->get_spriteAtlasName_2();
		G_B7_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)G_B6_1^(int32_t)G_B6_0)), (int32_t)((int32_t)397)));
		if (L_7)
		{
			G_B8_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)G_B6_1^(int32_t)G_B6_0)), (int32_t)((int32_t)397)));
			goto IL_004a;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0055;
	}

IL_004a:
	{
		String_t* L_8 = __this->get_spriteAtlasName_2();
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
	}

IL_0055:
	{
		// return hashCode;
		return ((int32_t)((int32_t)G_B9_1^(int32_t)G_B9_0));
	}
}
IL2CPP_EXTERN_C  int32_t GlyphEntryReturnedInfo_GetHashCode_mA290615C65A492FA4421FAFCB9C086AE6FB17406_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 * _thisAdjusted = reinterpret_cast<GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 *>(__this + _offset);
	return GlyphEntryReturnedInfo_GetHashCode_mA290615C65A492FA4421FAFCB9C086AE6FB17406(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.KeyboardEntry::GetGlyph(System.Int32,Rewired.AxisRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  KeyboardEntry_GetGlyph_m04A51F82BC61C5FFB1BC07AD02FA9B11A92859E0 (KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8 * __this, int32_t ___elementIdentifierId0, int32_t ___axisRange1, const RuntimeMethod* method)
{
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* V_1 = NULL;
	int32_t V_2 = 0;
	GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * V_3 = NULL;
	{
		// GlyphEntryReturnedInfo glyphEntryReturnedInfo = GlyphEntryReturnedInfo.Empty;
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_0 = GlyphEntryReturnedInfo_get_Empty_mFB1ABCD9F0BE6C59751DFCB78D345A34B044EC9E(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (Glyphs != null)
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_1 = __this->get_Glyphs_5();
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// foreach (var glyph in Glyphs)
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_2 = __this->get_Glyphs_5();
		V_1 = L_2;
		V_2 = 0;
		goto IL_0037;
	}

IL_0019:
	{
		// foreach (var glyph in Glyphs)
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// if (glyph != null && glyph.ElementIdentifierId == elementIdentifierId)
		GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_7 = V_3;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_ElementIdentifierId_1();
		int32_t L_10 = ___elementIdentifierId0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0033;
		}
	}
	{
		// glyphEntryReturnedInfo = glyph.GetGlyphInfo(axisRange);
		GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_11 = V_3;
		int32_t L_12 = ___axisRange1;
		NullCheck(L_11);
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_13 = GlyphEntry_GetGlyphInfo_mABB5775B3C6DF0B4DE78A8A2B7354A9A62743E92(L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// break;
		goto IL_003d;
	}

IL_0033:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0037:
	{
		// foreach (var glyph in Glyphs)
		int32_t L_15 = V_2;
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_0019;
		}
	}

IL_003d:
	{
		// return glyphEntryReturnedInfo;
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_17 = V_0;
		return L_17;
	}
}
// System.Void Mediatonic.Tools.ControllerGlyphs.KeyboardEntry::CreateGlyphEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEntry_CreateGlyphEntries_m48FCC55807B41DCE664D3C927AC096EBB95C87AC (KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyboardEntry_CreateGlyphEntries_m48FCC55807B41DCE664D3C927AC096EBB95C87AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004 * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (ReInput.controllers == null || ReInput.controllers.Keyboard == null)
		IL2CPP_RUNTIME_CLASS_INIT(ReInput_t660C845029E93C5E11722938F53BCA3AED33D0BE_il2cpp_TypeInfo_var);
		ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 * L_0 = ReInput_get_controllers_m5644F9B5193812D5D906AD8DC7ABBC11E6B78234(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReInput_t660C845029E93C5E11722938F53BCA3AED33D0BE_il2cpp_TypeInfo_var);
		ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 * L_1 = ReInput_get_controllers_m5644F9B5193812D5D906AD8DC7ABBC11E6B78234(/*hidden argument*/NULL);
		NullCheck(L_1);
		Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004 * L_2 = ControllerHelper_get_Keyboard_mEBD11500482D97C31D8B30A3296B007A20DBF86F(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		// Debug.LogError("Creating keyboard entries requires Prefab_Rewired_Input_Manager in the scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralE866D3D50A59FB62520C14BF613F09B5595B8E10, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// Keyboard keyboard = ReInput.controllers.Keyboard;
		IL2CPP_RUNTIME_CLASS_INIT(ReInput_t660C845029E93C5E11722938F53BCA3AED33D0BE_il2cpp_TypeInfo_var);
		ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 * L_3 = ReInput_get_controllers_m5644F9B5193812D5D906AD8DC7ABBC11E6B78234(/*hidden argument*/NULL);
		NullCheck(L_3);
		Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004 * L_4 = ControllerHelper_get_Keyboard_mEBD11500482D97C31D8B30A3296B007A20DBF86F(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Glyphs = new GlyphEntry[keyboard.ElementIdentifiers.Count];
		Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = Controller_get_ElementIdentifiers_m47C9416E7678A3743B9C9C9056CFEF6C4690858C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.ControllerElementIdentifier>::get_Count() */, ICollection_1_t4C2D36173FE0F6360DA6F15A0F87FA9BA7A13407_il2cpp_TypeInfo_var, L_6);
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_8 = (GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99*)(GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99*)SZArrayNew(GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->set_Glyphs_5(L_8);
		// int index = 0;
		V_1 = 0;
		// foreach (var entry in keyboard.ElementIdentifiers)
		Keyboard_t977AD488FDAD35BD15DC1B397E40BCD64495F004 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = Controller_get_ElementIdentifiers_m47C9416E7678A3743B9C9C9056CFEF6C4690858C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerElementIdentifier>::GetEnumerator() */, IEnumerable_1_tD6342033827336E237259AF495FEE3664E09239E_il2cpp_TypeInfo_var, L_10);
		V_2 = L_11;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007b;
		}

IL_004f:
		{
			// foreach (var entry in keyboard.ElementIdentifiers)
			RuntimeObject* L_12 = V_2;
			NullCheck(L_12);
			ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * L_13 = InterfaceFuncInvoker0< ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerElementIdentifier>::get_Current() */, IEnumerator_1_t6C243004613624AE1771418164AC4C40E3AFD38A_il2cpp_TypeInfo_var, L_12);
			V_3 = L_13;
			// Glyphs[index] = new GlyphEntry(entry);
			GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_14 = __this->get_Glyphs_5();
			int32_t L_15 = V_1;
			ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * L_16 = V_3;
			GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_17 = (GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A *)il2cpp_codegen_object_new(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A_il2cpp_TypeInfo_var);
			GlyphEntry__ctor_mF214864BA467FB1EB026B5768886281B2B07F467(L_17, L_16, /*hidden argument*/NULL);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A *)L_17);
			// Glyphs[index].Glyph = DefaultSprite;
			GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_18 = __this->get_Glyphs_5();
			int32_t L_19 = V_1;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_22 = __this->get_DefaultSprite_4();
			NullCheck(L_21);
			L_21->set_Glyph_2(L_22);
			// ++index;
			int32_t L_23 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		}

IL_007b:
		{
			// foreach (var entry in keyboard.ElementIdentifiers)
			RuntimeObject* L_24 = V_2;
			NullCheck(L_24);
			bool L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_24);
			if (L_25)
			{
				goto IL_004f;
			}
		}

IL_0083:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_0085);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0085;
	}

FINALLY_0085:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_26 = V_2;
			if (!L_26)
			{
				goto IL_008e;
			}
		}

IL_0088:
		{
			RuntimeObject* L_27 = V_2;
			NullCheck(L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_27);
		}

IL_008e:
		{
			IL2CPP_END_FINALLY(133)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ControllerGlyphs.KeyboardEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEntry__ctor_m70C3E44188863AC5891DB630E57F40C81CFC1D4E (KeyboardEntry_t90C7884BA69CA1A74270AE36BD6EB890912CD2E8 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
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
// Mediatonic.Tools.ControllerGlyphs.GlyphEntry_GlyphEntryReturnedInfo Mediatonic.Tools.ControllerGlyphs.MouseEntry::GetGlyph(System.Int32,Rewired.AxisRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  MouseEntry_GetGlyph_mC27F1A691E02C17B7EA153BD360176ADCBFE78C2 (MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934 * __this, int32_t ___elementIdentifierId0, int32_t ___axisRange1, const RuntimeMethod* method)
{
	GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* V_1 = NULL;
	int32_t V_2 = 0;
	GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * V_3 = NULL;
	{
		// GlyphEntry.GlyphEntryReturnedInfo glyphEntryReturnedInfo = new GlyphEntry.GlyphEntryReturnedInfo(null, null, null);
		GlyphEntryReturnedInfo__ctor_mC14E28F5D418E9C25D4013FF980F4A5AB5A72EF6((GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2 *)(&V_0), (Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 *)NULL, (String_t*)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		// if (Glyphs != null)
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_0 = __this->get_Glyphs_5();
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// foreach (var glyph in Glyphs)
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_1 = __this->get_Glyphs_5();
		V_1 = L_1;
		V_2 = 0;
		goto IL_003b;
	}

IL_001d:
	{
		// foreach (var glyph in Glyphs)
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// if (glyph != null && glyph.ElementIdentifierId == elementIdentifierId)
		GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_6 = V_3;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_7 = V_3;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_ElementIdentifierId_1();
		int32_t L_9 = ___elementIdentifierId0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0037;
		}
	}
	{
		// glyphEntryReturnedInfo = glyph.GetGlyphInfo(axisRange);
		GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_10 = V_3;
		int32_t L_11 = ___axisRange1;
		NullCheck(L_10);
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_12 = GlyphEntry_GetGlyphInfo_mABB5775B3C6DF0B4DE78A8A2B7354A9A62743E92(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// break;
		goto IL_0041;
	}

IL_0037:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003b:
	{
		// foreach (var glyph in Glyphs)
		int32_t L_14 = V_2;
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))))
		{
			goto IL_001d;
		}
	}

IL_0041:
	{
		// return glyphEntryReturnedInfo;
		GlyphEntryReturnedInfo_t712793B57D0AA016AFC02682EEFAF06AE6587DF2  L_16 = V_0;
		return L_16;
	}
}
// System.Void Mediatonic.Tools.ControllerGlyphs.MouseEntry::CreateGlyphEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEntry_CreateGlyphEntries_mFF84FDFD8C8170177E76D2829575CB690AC51EEE (MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEntry_CreateGlyphEntries_mFF84FDFD8C8170177E76D2829575CB690AC51EEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3 * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (ReInput.controllers == null || ReInput.controllers.Mouse == null)
		IL2CPP_RUNTIME_CLASS_INIT(ReInput_t660C845029E93C5E11722938F53BCA3AED33D0BE_il2cpp_TypeInfo_var);
		ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 * L_0 = ReInput_get_controllers_m5644F9B5193812D5D906AD8DC7ABBC11E6B78234(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReInput_t660C845029E93C5E11722938F53BCA3AED33D0BE_il2cpp_TypeInfo_var);
		ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 * L_1 = ReInput_get_controllers_m5644F9B5193812D5D906AD8DC7ABBC11E6B78234(/*hidden argument*/NULL);
		NullCheck(L_1);
		Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3 * L_2 = ControllerHelper_get_Mouse_mF0CCB3626E0CA170277D2360078BC005B5256B5A(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		// Debug.LogError("Creating mouse entries requires Prefab_Rewired_Input_Manager in the scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral4F57B94CB80DA76C7B5C31B49C5B20DA5049315F, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// Mouse mouse = ReInput.controllers.Mouse;
		IL2CPP_RUNTIME_CLASS_INIT(ReInput_t660C845029E93C5E11722938F53BCA3AED33D0BE_il2cpp_TypeInfo_var);
		ControllerHelper_t937589B90E36653120519D111871F0C16D15FF62 * L_3 = ReInput_get_controllers_m5644F9B5193812D5D906AD8DC7ABBC11E6B78234(/*hidden argument*/NULL);
		NullCheck(L_3);
		Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3 * L_4 = ControllerHelper_get_Mouse_mF0CCB3626E0CA170277D2360078BC005B5256B5A(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Glyphs = new GlyphEntry[mouse.ElementIdentifiers.Count];
		Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = Controller_get_ElementIdentifiers_m47C9416E7678A3743B9C9C9056CFEF6C4690858C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.ControllerElementIdentifier>::get_Count() */, ICollection_1_t4C2D36173FE0F6360DA6F15A0F87FA9BA7A13407_il2cpp_TypeInfo_var, L_6);
		GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_8 = (GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99*)(GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99*)SZArrayNew(GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->set_Glyphs_5(L_8);
		// int index = 0;
		V_1 = 0;
		// foreach (var entry in mouse.ElementIdentifiers)
		Mouse_t3B255E519CED8AF070A577BFEEFB5169ECBECBF3 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = Controller_get_ElementIdentifiers_m47C9416E7678A3743B9C9C9056CFEF6C4690858C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerElementIdentifier>::GetEnumerator() */, IEnumerable_1_tD6342033827336E237259AF495FEE3664E09239E_il2cpp_TypeInfo_var, L_10);
		V_2 = L_11;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007b;
		}

IL_004f:
		{
			// foreach (var entry in mouse.ElementIdentifiers)
			RuntimeObject* L_12 = V_2;
			NullCheck(L_12);
			ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * L_13 = InterfaceFuncInvoker0< ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerElementIdentifier>::get_Current() */, IEnumerator_1_t6C243004613624AE1771418164AC4C40E3AFD38A_il2cpp_TypeInfo_var, L_12);
			V_3 = L_13;
			// Glyphs[index] = new GlyphEntry(entry);
			GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_14 = __this->get_Glyphs_5();
			int32_t L_15 = V_1;
			ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * L_16 = V_3;
			GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_17 = (GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A *)il2cpp_codegen_object_new(GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A_il2cpp_TypeInfo_var);
			GlyphEntry__ctor_mF214864BA467FB1EB026B5768886281B2B07F467(L_17, L_16, /*hidden argument*/NULL);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A *)L_17);
			// Glyphs[index].Glyph = DefaultSprite;
			GlyphEntryU5BU5D_t2DBF2209177A3FAB07ADD967A9815B56E9FA4C99* L_18 = __this->get_Glyphs_5();
			int32_t L_19 = V_1;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			GlyphEntry_t6B69FD41A76D1326064F4414BBD29214443D285A * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_22 = __this->get_DefaultSprite_4();
			NullCheck(L_21);
			L_21->set_Glyph_2(L_22);
			// ++index;
			int32_t L_23 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		}

IL_007b:
		{
			// foreach (var entry in mouse.ElementIdentifiers)
			RuntimeObject* L_24 = V_2;
			NullCheck(L_24);
			bool L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_24);
			if (L_25)
			{
				goto IL_004f;
			}
		}

IL_0083:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_0085);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0085;
	}

FINALLY_0085:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_26 = V_2;
			if (!L_26)
			{
				goto IL_008e;
			}
		}

IL_0088:
		{
			RuntimeObject* L_27 = V_2;
			NullCheck(L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_27);
		}

IL_008e:
		{
			IL2CPP_END_FINALLY(133)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Mediatonic.Tools.ControllerGlyphs.MouseEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEntry__ctor_m64CBAB3CA8F9F286FE363663922523684655C024 (MouseEntry_t0F5D362F8013B29569F8651A31CA08961F5B1934 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t InputAction_get_type_m30FB98BA3DB1B4BAD51AB2ED6226D653FBCA151C_inline (InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__type_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t InputAction_get_id_m64463ED715A9192559144B816E0D8D27454C665B_inline (InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__id_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * ActionElementMap_get_controllerMap_m921F19411EFE72E46B8948909C06F599804499F2_inline (ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * __this, const RuntimeMethod* method)
{
	{
		ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * L_0 = __this->get_dEHGvBFAZExdrGYrzYsIMQPndgw_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ActionElementMap_get_axisContribution_m0D681CBCA543DA565CC65B9A47FE97EB0CCA0FB9_inline (ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__axisContribution_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* InputAction_get_name_m01A82AC2749BF7391E3196B47B66C0C67E66E61A_inline (InputAction_t9328AD30AB7C7F9301F671FEF8C0D73AF1FAD7DA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ActionElementMap_get_elementIdentifierId_m5C08FB9FEDEBD85427E6C3576A87F929C6454C47_inline (ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__elementIdentifierId_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ActionElementMap_get_axisRange_mD1E544297A5702BEAB25FF5F06FD3C131757F93F_inline (ActionElementMap_t2BD8E4E67A80A924EAE809AAA6A0DD843A3459C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__axisRange_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ControllerElementIdentifier_get_name_m550A30B8982C0862FFAC44D6EB70BD2D226651BC_inline (ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ControllerElementIdentifier_get_id_m3209DAD0F8E19450C50C83C8C532D372C8E07522_inline (ControllerElementIdentifier_tFC073776F9B708D8AC266037F2C7BA1D3C747C66 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__id_0();
		return L_0;
	}
}
