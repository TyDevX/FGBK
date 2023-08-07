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


// DG.Tweening.EaseFunction
struct EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691;
// DG.Tweening.Sequence
struct Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2;
// DG.Tweening.Tween
struct Tween_t119487E0AB84EF563521F1043116BDBAE68AC437;
// DG.Tweening.TweenCallback
struct TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1;
// DG.Tweening.Tweener
struct Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.String
struct String_t;
// System.Type
struct Type_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// DG.Tweening.Core.Enums.SpecialStartupMode
struct  SpecialStartupMode_tE272D2FEC46F4A5FC68E9A99E0093494AA4E0E49 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SpecialStartupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialStartupMode_tE272D2FEC46F4A5FC68E9A99E0093494AA4E0E49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Ease
struct  Ease_tC8B7BB21FCD1947DD4A1DD8025D4E9C6CC01DA0E 
{
public:
	// System.Int32 DG.Tweening.Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tC8B7BB21FCD1947DD4A1DD8025D4E9C6CC01DA0E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.LoopType
struct  LoopType_t1F864F717700724AC772E79CCF167C3C44D6EE1A 
{
public:
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_t1F864F717700724AC772E79CCF167C3C44D6EE1A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.TweenType
struct  TweenType_t13FCD3DFD7DD8AE49EA4A7BA70695D3936EAF71F 
{
public:
	// System.Int32 DG.Tweening.TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_t13FCD3DFD7DD8AE49EA4A7BA70695D3936EAF71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.UpdateType
struct  UpdateType_t0EBAB258B7D72D4959A3835E554B7958CAFDAF63 
{
public:
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t0EBAB258B7D72D4959A3835E554B7958CAFDAF63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.ABSSequentiable
struct  ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757  : public RuntimeObject
{
public:
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onStart_3;

public:
	inline static int32_t get_offset_of_tweenType_0() { return static_cast<int32_t>(offsetof(ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757, ___tweenType_0)); }
	inline int32_t get_tweenType_0() const { return ___tweenType_0; }
	inline int32_t* get_address_of_tweenType_0() { return &___tweenType_0; }
	inline void set_tweenType_0(int32_t value)
	{
		___tweenType_0 = value;
	}

	inline static int32_t get_offset_of_sequencedPosition_1() { return static_cast<int32_t>(offsetof(ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757, ___sequencedPosition_1)); }
	inline float get_sequencedPosition_1() const { return ___sequencedPosition_1; }
	inline float* get_address_of_sequencedPosition_1() { return &___sequencedPosition_1; }
	inline void set_sequencedPosition_1(float value)
	{
		___sequencedPosition_1 = value;
	}

	inline static int32_t get_offset_of_sequencedEndPosition_2() { return static_cast<int32_t>(offsetof(ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757, ___sequencedEndPosition_2)); }
	inline float get_sequencedEndPosition_2() const { return ___sequencedEndPosition_2; }
	inline float* get_address_of_sequencedEndPosition_2() { return &___sequencedEndPosition_2; }
	inline void set_sequencedEndPosition_2(float value)
	{
		___sequencedEndPosition_2 = value;
	}

	inline static int32_t get_offset_of_onStart_3() { return static_cast<int32_t>(offsetof(ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757, ___onStart_3)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onStart_3() const { return ___onStart_3; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onStart_3() { return &___onStart_3; }
	inline void set_onStart_3(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onStart_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_3), (void*)value);
	}
};


// DG.Tweening.Tween
struct  Tween_t119487E0AB84EF563521F1043116BDBAE68AC437  : public ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject * ___id_6;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_7;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_8;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject * ___target_9;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_10;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_11;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onPlay_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onPause_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onRewind_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onUpdate_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onStepComplete_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onKill_18;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * ___onWaypointChange_19;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_20;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_21;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_22;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_23;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_24;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_25;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_26;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_27;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_28;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_29;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_30;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * ___customEase_31;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_32;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_33;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_34;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_35;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_36;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_37;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_38;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___sequenceParent_39;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_40;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_41;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_42;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_43;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_44;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_45;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_46;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_47;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_48;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_49;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_50;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_51;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_52;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___id_6)); }
	inline RuntimeObject * get_id_6() const { return ___id_6; }
	inline RuntimeObject ** get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(RuntimeObject * value)
	{
		___id_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_6), (void*)value);
	}

	inline static int32_t get_offset_of_stringId_7() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___stringId_7)); }
	inline String_t* get_stringId_7() const { return ___stringId_7; }
	inline String_t** get_address_of_stringId_7() { return &___stringId_7; }
	inline void set_stringId_7(String_t* value)
	{
		___stringId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringId_7), (void*)value);
	}

	inline static int32_t get_offset_of_intId_8() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___intId_8)); }
	inline int32_t get_intId_8() const { return ___intId_8; }
	inline int32_t* get_address_of_intId_8() { return &___intId_8; }
	inline void set_intId_8(int32_t value)
	{
		___intId_8 = value;
	}

	inline static int32_t get_offset_of_target_9() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___target_9)); }
	inline RuntimeObject * get_target_9() const { return ___target_9; }
	inline RuntimeObject ** get_address_of_target_9() { return &___target_9; }
	inline void set_target_9(RuntimeObject * value)
	{
		___target_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_9), (void*)value);
	}

	inline static int32_t get_offset_of_updateType_10() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___updateType_10)); }
	inline int32_t get_updateType_10() const { return ___updateType_10; }
	inline int32_t* get_address_of_updateType_10() { return &___updateType_10; }
	inline void set_updateType_10(int32_t value)
	{
		___updateType_10 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_11() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isIndependentUpdate_11)); }
	inline bool get_isIndependentUpdate_11() const { return ___isIndependentUpdate_11; }
	inline bool* get_address_of_isIndependentUpdate_11() { return &___isIndependentUpdate_11; }
	inline void set_isIndependentUpdate_11(bool value)
	{
		___isIndependentUpdate_11 = value;
	}

	inline static int32_t get_offset_of_onPlay_12() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onPlay_12)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onPlay_12() const { return ___onPlay_12; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onPlay_12() { return &___onPlay_12; }
	inline void set_onPlay_12(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onPlay_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_12), (void*)value);
	}

	inline static int32_t get_offset_of_onPause_13() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onPause_13)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onPause_13() const { return ___onPause_13; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onPause_13() { return &___onPause_13; }
	inline void set_onPause_13(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onPause_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPause_13), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_14() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onRewind_14)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onRewind_14() const { return ___onRewind_14; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onRewind_14() { return &___onRewind_14; }
	inline void set_onRewind_14(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onRewind_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_14), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_15() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onUpdate_15)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onUpdate_15() const { return ___onUpdate_15; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onUpdate_15() { return &___onUpdate_15; }
	inline void set_onUpdate_15(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_15), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_16() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onStepComplete_16)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onStepComplete_16() const { return ___onStepComplete_16; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onStepComplete_16() { return &___onStepComplete_16; }
	inline void set_onStepComplete_16(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onStepComplete_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_16), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_17() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onComplete_17)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onComplete_17() const { return ___onComplete_17; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onComplete_17() { return &___onComplete_17; }
	inline void set_onComplete_17(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_onKill_18() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onKill_18)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onKill_18() const { return ___onKill_18; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onKill_18() { return &___onKill_18; }
	inline void set_onKill_18(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onKill_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKill_18), (void*)value);
	}

	inline static int32_t get_offset_of_onWaypointChange_19() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onWaypointChange_19)); }
	inline TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * get_onWaypointChange_19() const { return ___onWaypointChange_19; }
	inline TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 ** get_address_of_onWaypointChange_19() { return &___onWaypointChange_19; }
	inline void set_onWaypointChange_19(TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * value)
	{
		___onWaypointChange_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaypointChange_19), (void*)value);
	}

	inline static int32_t get_offset_of_isFrom_20() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isFrom_20)); }
	inline bool get_isFrom_20() const { return ___isFrom_20; }
	inline bool* get_address_of_isFrom_20() { return &___isFrom_20; }
	inline void set_isFrom_20(bool value)
	{
		___isFrom_20 = value;
	}

	inline static int32_t get_offset_of_isBlendable_21() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isBlendable_21)); }
	inline bool get_isBlendable_21() const { return ___isBlendable_21; }
	inline bool* get_address_of_isBlendable_21() { return &___isBlendable_21; }
	inline void set_isBlendable_21(bool value)
	{
		___isBlendable_21 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_22() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isRecyclable_22)); }
	inline bool get_isRecyclable_22() const { return ___isRecyclable_22; }
	inline bool* get_address_of_isRecyclable_22() { return &___isRecyclable_22; }
	inline void set_isRecyclable_22(bool value)
	{
		___isRecyclable_22 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_23() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isSpeedBased_23)); }
	inline bool get_isSpeedBased_23() const { return ___isSpeedBased_23; }
	inline bool* get_address_of_isSpeedBased_23() { return &___isSpeedBased_23; }
	inline void set_isSpeedBased_23(bool value)
	{
		___isSpeedBased_23 = value;
	}

	inline static int32_t get_offset_of_autoKill_24() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___autoKill_24)); }
	inline bool get_autoKill_24() const { return ___autoKill_24; }
	inline bool* get_address_of_autoKill_24() { return &___autoKill_24; }
	inline void set_autoKill_24(bool value)
	{
		___autoKill_24 = value;
	}

	inline static int32_t get_offset_of_duration_25() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___duration_25)); }
	inline float get_duration_25() const { return ___duration_25; }
	inline float* get_address_of_duration_25() { return &___duration_25; }
	inline void set_duration_25(float value)
	{
		___duration_25 = value;
	}

	inline static int32_t get_offset_of_loops_26() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___loops_26)); }
	inline int32_t get_loops_26() const { return ___loops_26; }
	inline int32_t* get_address_of_loops_26() { return &___loops_26; }
	inline void set_loops_26(int32_t value)
	{
		___loops_26 = value;
	}

	inline static int32_t get_offset_of_loopType_27() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___loopType_27)); }
	inline int32_t get_loopType_27() const { return ___loopType_27; }
	inline int32_t* get_address_of_loopType_27() { return &___loopType_27; }
	inline void set_loopType_27(int32_t value)
	{
		___loopType_27 = value;
	}

	inline static int32_t get_offset_of_delay_28() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___delay_28)); }
	inline float get_delay_28() const { return ___delay_28; }
	inline float* get_address_of_delay_28() { return &___delay_28; }
	inline void set_delay_28(float value)
	{
		___delay_28 = value;
	}

	inline static int32_t get_offset_of_U3CisRelativeU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___U3CisRelativeU3Ek__BackingField_29)); }
	inline bool get_U3CisRelativeU3Ek__BackingField_29() const { return ___U3CisRelativeU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CisRelativeU3Ek__BackingField_29() { return &___U3CisRelativeU3Ek__BackingField_29; }
	inline void set_U3CisRelativeU3Ek__BackingField_29(bool value)
	{
		___U3CisRelativeU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_easeType_30() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___easeType_30)); }
	inline int32_t get_easeType_30() const { return ___easeType_30; }
	inline int32_t* get_address_of_easeType_30() { return &___easeType_30; }
	inline void set_easeType_30(int32_t value)
	{
		___easeType_30 = value;
	}

	inline static int32_t get_offset_of_customEase_31() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___customEase_31)); }
	inline EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * get_customEase_31() const { return ___customEase_31; }
	inline EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 ** get_address_of_customEase_31() { return &___customEase_31; }
	inline void set_customEase_31(EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * value)
	{
		___customEase_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEase_31), (void*)value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_32() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___easeOvershootOrAmplitude_32)); }
	inline float get_easeOvershootOrAmplitude_32() const { return ___easeOvershootOrAmplitude_32; }
	inline float* get_address_of_easeOvershootOrAmplitude_32() { return &___easeOvershootOrAmplitude_32; }
	inline void set_easeOvershootOrAmplitude_32(float value)
	{
		___easeOvershootOrAmplitude_32 = value;
	}

	inline static int32_t get_offset_of_easePeriod_33() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___easePeriod_33)); }
	inline float get_easePeriod_33() const { return ___easePeriod_33; }
	inline float* get_address_of_easePeriod_33() { return &___easePeriod_33; }
	inline void set_easePeriod_33(float value)
	{
		___easePeriod_33 = value;
	}

	inline static int32_t get_offset_of_typeofT1_34() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___typeofT1_34)); }
	inline Type_t * get_typeofT1_34() const { return ___typeofT1_34; }
	inline Type_t ** get_address_of_typeofT1_34() { return &___typeofT1_34; }
	inline void set_typeofT1_34(Type_t * value)
	{
		___typeofT1_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT1_34), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT2_35() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___typeofT2_35)); }
	inline Type_t * get_typeofT2_35() const { return ___typeofT2_35; }
	inline Type_t ** get_address_of_typeofT2_35() { return &___typeofT2_35; }
	inline void set_typeofT2_35(Type_t * value)
	{
		___typeofT2_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT2_35), (void*)value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_36() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___typeofTPlugOptions_36)); }
	inline Type_t * get_typeofTPlugOptions_36() const { return ___typeofTPlugOptions_36; }
	inline Type_t ** get_address_of_typeofTPlugOptions_36() { return &___typeofTPlugOptions_36; }
	inline void set_typeofTPlugOptions_36(Type_t * value)
	{
		___typeofTPlugOptions_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofTPlugOptions_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___U3CactiveU3Ek__BackingField_37)); }
	inline bool get_U3CactiveU3Ek__BackingField_37() const { return ___U3CactiveU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_37() { return &___U3CactiveU3Ek__BackingField_37; }
	inline void set_U3CactiveU3Ek__BackingField_37(bool value)
	{
		___U3CactiveU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_isSequenced_38() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isSequenced_38)); }
	inline bool get_isSequenced_38() const { return ___isSequenced_38; }
	inline bool* get_address_of_isSequenced_38() { return &___isSequenced_38; }
	inline void set_isSequenced_38(bool value)
	{
		___isSequenced_38 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_39() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___sequenceParent_39)); }
	inline Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * get_sequenceParent_39() const { return ___sequenceParent_39; }
	inline Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 ** get_address_of_sequenceParent_39() { return &___sequenceParent_39; }
	inline void set_sequenceParent_39(Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * value)
	{
		___sequenceParent_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequenceParent_39), (void*)value);
	}

	inline static int32_t get_offset_of_activeId_40() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___activeId_40)); }
	inline int32_t get_activeId_40() const { return ___activeId_40; }
	inline int32_t* get_address_of_activeId_40() { return &___activeId_40; }
	inline void set_activeId_40(int32_t value)
	{
		___activeId_40 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_41() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___specialStartupMode_41)); }
	inline int32_t get_specialStartupMode_41() const { return ___specialStartupMode_41; }
	inline int32_t* get_address_of_specialStartupMode_41() { return &___specialStartupMode_41; }
	inline void set_specialStartupMode_41(int32_t value)
	{
		___specialStartupMode_41 = value;
	}

	inline static int32_t get_offset_of_creationLocked_42() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___creationLocked_42)); }
	inline bool get_creationLocked_42() const { return ___creationLocked_42; }
	inline bool* get_address_of_creationLocked_42() { return &___creationLocked_42; }
	inline void set_creationLocked_42(bool value)
	{
		___creationLocked_42 = value;
	}

	inline static int32_t get_offset_of_startupDone_43() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___startupDone_43)); }
	inline bool get_startupDone_43() const { return ___startupDone_43; }
	inline bool* get_address_of_startupDone_43() { return &___startupDone_43; }
	inline void set_startupDone_43(bool value)
	{
		___startupDone_43 = value;
	}

	inline static int32_t get_offset_of_U3CplayedOnceU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___U3CplayedOnceU3Ek__BackingField_44)); }
	inline bool get_U3CplayedOnceU3Ek__BackingField_44() const { return ___U3CplayedOnceU3Ek__BackingField_44; }
	inline bool* get_address_of_U3CplayedOnceU3Ek__BackingField_44() { return &___U3CplayedOnceU3Ek__BackingField_44; }
	inline void set_U3CplayedOnceU3Ek__BackingField_44(bool value)
	{
		___U3CplayedOnceU3Ek__BackingField_44 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___U3CpositionU3Ek__BackingField_45)); }
	inline float get_U3CpositionU3Ek__BackingField_45() const { return ___U3CpositionU3Ek__BackingField_45; }
	inline float* get_address_of_U3CpositionU3Ek__BackingField_45() { return &___U3CpositionU3Ek__BackingField_45; }
	inline void set_U3CpositionU3Ek__BackingField_45(float value)
	{
		___U3CpositionU3Ek__BackingField_45 = value;
	}

	inline static int32_t get_offset_of_fullDuration_46() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___fullDuration_46)); }
	inline float get_fullDuration_46() const { return ___fullDuration_46; }
	inline float* get_address_of_fullDuration_46() { return &___fullDuration_46; }
	inline void set_fullDuration_46(float value)
	{
		___fullDuration_46 = value;
	}

	inline static int32_t get_offset_of_completedLoops_47() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___completedLoops_47)); }
	inline int32_t get_completedLoops_47() const { return ___completedLoops_47; }
	inline int32_t* get_address_of_completedLoops_47() { return &___completedLoops_47; }
	inline void set_completedLoops_47(int32_t value)
	{
		___completedLoops_47 = value;
	}

	inline static int32_t get_offset_of_isPlaying_48() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isPlaying_48)); }
	inline bool get_isPlaying_48() const { return ___isPlaying_48; }
	inline bool* get_address_of_isPlaying_48() { return &___isPlaying_48; }
	inline void set_isPlaying_48(bool value)
	{
		___isPlaying_48 = value;
	}

	inline static int32_t get_offset_of_isComplete_49() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isComplete_49)); }
	inline bool get_isComplete_49() const { return ___isComplete_49; }
	inline bool* get_address_of_isComplete_49() { return &___isComplete_49; }
	inline void set_isComplete_49(bool value)
	{
		___isComplete_49 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_50() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___elapsedDelay_50)); }
	inline float get_elapsedDelay_50() const { return ___elapsedDelay_50; }
	inline float* get_address_of_elapsedDelay_50() { return &___elapsedDelay_50; }
	inline void set_elapsedDelay_50(float value)
	{
		___elapsedDelay_50 = value;
	}

	inline static int32_t get_offset_of_delayComplete_51() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___delayComplete_51)); }
	inline bool get_delayComplete_51() const { return ___delayComplete_51; }
	inline bool* get_address_of_delayComplete_51() { return &___delayComplete_51; }
	inline void set_delayComplete_51(bool value)
	{
		___delayComplete_51 = value;
	}

	inline static int32_t get_offset_of_miscInt_52() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___miscInt_52)); }
	inline int32_t get_miscInt_52() const { return ___miscInt_52; }
	inline int32_t* get_address_of_miscInt_52() { return &___miscInt_52; }
	inline void set_miscInt_52(int32_t value)
	{
		___miscInt_52 = value;
	}
};


// DG.Tweening.Tweener
struct  Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8  : public Tween_t119487E0AB84EF563521F1043116BDBAE68AC437
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_53;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_54;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_53() { return static_cast<int32_t>(offsetof(Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8, ___hasManuallySetStartValue_53)); }
	inline bool get_hasManuallySetStartValue_53() const { return ___hasManuallySetStartValue_53; }
	inline bool* get_address_of_hasManuallySetStartValue_53() { return &___hasManuallySetStartValue_53; }
	inline void set_hasManuallySetStartValue_53(bool value)
	{
		___hasManuallySetStartValue_53 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_54() { return static_cast<int32_t>(offsetof(Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8, ___isFromAllowed_54)); }
	inline bool get_isFromAllowed_54() const { return ___isFromAllowed_54; }
	inline bool* get_address_of_isFromAllowed_54() { return &___isFromAllowed_54; }
	inline void set_isFromAllowed_54(bool value)
	{
		___isFromAllowed_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void DG.Tweening.Tween::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween__ctor_m6A636EF784F92284565ABFC0513F134BBEB27E74 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method);
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
// System.Void DG.Tweening.Tweener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener__ctor_mA00C2693990531C2636134E4443E6E515EEE33FC (Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * __this, const RuntimeMethod* method)
{
	{
		__this->set_isFromAllowed_54((bool)1);
		Tween__ctor_m6A636EF784F92284565ABFC0513F134BBEB27E74(__this, /*hidden argument*/NULL);
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
