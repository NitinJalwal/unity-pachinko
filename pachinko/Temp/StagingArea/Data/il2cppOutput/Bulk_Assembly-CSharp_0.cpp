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

#include "il2cpp-class-internals.h"
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

// DestoryOnCollision
struct DestoryOnCollision_t3127334007;
// DestroyByTime
struct DestroyByTime_t1728122815;
// DragonController
struct DragonController_t958677092;
// EggBounceSound
struct EggBounceSound_t4203129250;
// GameController
struct GameController_t2330501625;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t4028559421;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Collision2D
struct Collision2D_t2842956331;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// copterMotion
struct copterMotion_t2743147367;
// gameAreaLeave
struct gameAreaLeave_t2687570813;

extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1247276920;
extern String_t* _stringLiteral1325677231;
extern String_t* _stringLiteral1384329709;
extern String_t* _stringLiteral1404116768;
extern String_t* _stringLiteral1433743393;
extern String_t* _stringLiteral1452522365;
extern String_t* _stringLiteral1591029137;
extern String_t* _stringLiteral1688680400;
extern String_t* _stringLiteral1700381005;
extern String_t* _stringLiteral1759881858;
extern String_t* _stringLiteral1930566815;
extern String_t* _stringLiteral2085694213;
extern String_t* _stringLiteral2670640191;
extern String_t* _stringLiteral2959661618;
extern String_t* _stringLiteral3845063054;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponents_TisAudioSource_t3935305588_m1999492100_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisGameController_t2330501625_m374217182_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const uint32_t DestoryOnCollision_OnTriggerEnter2D_m2198101354_MetadataUsageId;
extern const uint32_t DestroyByTime_Start_m2216704866_MetadataUsageId;
extern const uint32_t DragonController_OnTriggerEnter2D_m1454260826_MetadataUsageId;
extern const uint32_t DragonController_OnTriggerExit2D_m4247331399_MetadataUsageId;
extern const uint32_t DragonController_Start_m253425774_MetadataUsageId;
extern const uint32_t DragonController_Update_m688211662_MetadataUsageId;
extern const uint32_t DragonController_updateScore_m3338612795_MetadataUsageId;
extern const uint32_t EggBounceSound_OnCollisionEnter2D_m250893467_MetadataUsageId;
extern const uint32_t EggBounceSound_Start_m2544719576_MetadataUsageId;
extern const uint32_t GameController_Start_m1173294274_MetadataUsageId;
extern const uint32_t GameController_Update_m217025042_MetadataUsageId;
extern const uint32_t GameController_restartLevel_m205974401_MetadataUsageId;
extern const uint32_t copterMotion_OnTriggerExit2D_m1986595300_MetadataUsageId;
extern const uint32_t copterMotion_Start_m3707312404_MetadataUsageId;
extern const uint32_t copterMotion_Update_m2383551214_MetadataUsageId;
extern const uint32_t copterMotion_updateScore_m597479964_MetadataUsageId;
extern const uint32_t gameAreaLeave_OnTriggerExit2D_m2936749099_MetadataUsageId;
struct ContactPoint2D_t3390240644 ;

struct AudioSourceU5BU5D_t4028559421;


#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745542 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745542_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef CONTACTPOINT2D_T3390240644_H
#define CONTACTPOINT2D_T3390240644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t3390240644 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t2156229523  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t2156229523  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Point_0)); }
	inline Vector2_t2156229523  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t2156229523 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t2156229523  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Normal_1)); }
	inline Vector2_t2156229523  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t2156229523  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_RelativeVelocity_2)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT2D_T3390240644_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef CACHEDCONTACTPOINTS2D_T2523437281_H
#define CACHEDCONTACTPOINTS2D_T2523437281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CachedContactPoints2D
struct  CachedContactPoints2D_t2523437281 
{
public:
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact0
	ContactPoint2D_t3390240644  ___m_Contact0_0;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact1
	ContactPoint2D_t3390240644  ___m_Contact1_1;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact2
	ContactPoint2D_t3390240644  ___m_Contact2_2;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact3
	ContactPoint2D_t3390240644  ___m_Contact3_3;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact4
	ContactPoint2D_t3390240644  ___m_Contact4_4;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact5
	ContactPoint2D_t3390240644  ___m_Contact5_5;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact6
	ContactPoint2D_t3390240644  ___m_Contact6_6;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact7
	ContactPoint2D_t3390240644  ___m_Contact7_7;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact8
	ContactPoint2D_t3390240644  ___m_Contact8_8;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact9
	ContactPoint2D_t3390240644  ___m_Contact9_9;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact10
	ContactPoint2D_t3390240644  ___m_Contact10_10;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact11
	ContactPoint2D_t3390240644  ___m_Contact11_11;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact12
	ContactPoint2D_t3390240644  ___m_Contact12_12;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact13
	ContactPoint2D_t3390240644  ___m_Contact13_13;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact14
	ContactPoint2D_t3390240644  ___m_Contact14_14;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact15
	ContactPoint2D_t3390240644  ___m_Contact15_15;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact16
	ContactPoint2D_t3390240644  ___m_Contact16_16;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact17
	ContactPoint2D_t3390240644  ___m_Contact17_17;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact18
	ContactPoint2D_t3390240644  ___m_Contact18_18;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact19
	ContactPoint2D_t3390240644  ___m_Contact19_19;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact20
	ContactPoint2D_t3390240644  ___m_Contact20_20;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact21
	ContactPoint2D_t3390240644  ___m_Contact21_21;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact22
	ContactPoint2D_t3390240644  ___m_Contact22_22;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact23
	ContactPoint2D_t3390240644  ___m_Contact23_23;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact24
	ContactPoint2D_t3390240644  ___m_Contact24_24;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact25
	ContactPoint2D_t3390240644  ___m_Contact25_25;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact26
	ContactPoint2D_t3390240644  ___m_Contact26_26;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact27
	ContactPoint2D_t3390240644  ___m_Contact27_27;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact28
	ContactPoint2D_t3390240644  ___m_Contact28_28;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact29
	ContactPoint2D_t3390240644  ___m_Contact29_29;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact30
	ContactPoint2D_t3390240644  ___m_Contact30_30;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact31
	ContactPoint2D_t3390240644  ___m_Contact31_31;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact32
	ContactPoint2D_t3390240644  ___m_Contact32_32;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact33
	ContactPoint2D_t3390240644  ___m_Contact33_33;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact34
	ContactPoint2D_t3390240644  ___m_Contact34_34;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact35
	ContactPoint2D_t3390240644  ___m_Contact35_35;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact36
	ContactPoint2D_t3390240644  ___m_Contact36_36;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact37
	ContactPoint2D_t3390240644  ___m_Contact37_37;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact38
	ContactPoint2D_t3390240644  ___m_Contact38_38;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact39
	ContactPoint2D_t3390240644  ___m_Contact39_39;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact40
	ContactPoint2D_t3390240644  ___m_Contact40_40;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact41
	ContactPoint2D_t3390240644  ___m_Contact41_41;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact42
	ContactPoint2D_t3390240644  ___m_Contact42_42;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact43
	ContactPoint2D_t3390240644  ___m_Contact43_43;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact44
	ContactPoint2D_t3390240644  ___m_Contact44_44;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact45
	ContactPoint2D_t3390240644  ___m_Contact45_45;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact46
	ContactPoint2D_t3390240644  ___m_Contact46_46;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact47
	ContactPoint2D_t3390240644  ___m_Contact47_47;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact48
	ContactPoint2D_t3390240644  ___m_Contact48_48;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact49
	ContactPoint2D_t3390240644  ___m_Contact49_49;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact50
	ContactPoint2D_t3390240644  ___m_Contact50_50;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact51
	ContactPoint2D_t3390240644  ___m_Contact51_51;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact52
	ContactPoint2D_t3390240644  ___m_Contact52_52;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact53
	ContactPoint2D_t3390240644  ___m_Contact53_53;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact54
	ContactPoint2D_t3390240644  ___m_Contact54_54;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact55
	ContactPoint2D_t3390240644  ___m_Contact55_55;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact56
	ContactPoint2D_t3390240644  ___m_Contact56_56;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact57
	ContactPoint2D_t3390240644  ___m_Contact57_57;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact58
	ContactPoint2D_t3390240644  ___m_Contact58_58;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact59
	ContactPoint2D_t3390240644  ___m_Contact59_59;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact60
	ContactPoint2D_t3390240644  ___m_Contact60_60;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact61
	ContactPoint2D_t3390240644  ___m_Contact61_61;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact62
	ContactPoint2D_t3390240644  ___m_Contact62_62;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact63
	ContactPoint2D_t3390240644  ___m_Contact63_63;

public:
	inline static int32_t get_offset_of_m_Contact0_0() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact0_0)); }
	inline ContactPoint2D_t3390240644  get_m_Contact0_0() const { return ___m_Contact0_0; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact0_0() { return &___m_Contact0_0; }
	inline void set_m_Contact0_0(ContactPoint2D_t3390240644  value)
	{
		___m_Contact0_0 = value;
	}

	inline static int32_t get_offset_of_m_Contact1_1() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact1_1)); }
	inline ContactPoint2D_t3390240644  get_m_Contact1_1() const { return ___m_Contact1_1; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact1_1() { return &___m_Contact1_1; }
	inline void set_m_Contact1_1(ContactPoint2D_t3390240644  value)
	{
		___m_Contact1_1 = value;
	}

	inline static int32_t get_offset_of_m_Contact2_2() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact2_2)); }
	inline ContactPoint2D_t3390240644  get_m_Contact2_2() const { return ___m_Contact2_2; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact2_2() { return &___m_Contact2_2; }
	inline void set_m_Contact2_2(ContactPoint2D_t3390240644  value)
	{
		___m_Contact2_2 = value;
	}

	inline static int32_t get_offset_of_m_Contact3_3() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact3_3)); }
	inline ContactPoint2D_t3390240644  get_m_Contact3_3() const { return ___m_Contact3_3; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact3_3() { return &___m_Contact3_3; }
	inline void set_m_Contact3_3(ContactPoint2D_t3390240644  value)
	{
		___m_Contact3_3 = value;
	}

	inline static int32_t get_offset_of_m_Contact4_4() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact4_4)); }
	inline ContactPoint2D_t3390240644  get_m_Contact4_4() const { return ___m_Contact4_4; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact4_4() { return &___m_Contact4_4; }
	inline void set_m_Contact4_4(ContactPoint2D_t3390240644  value)
	{
		___m_Contact4_4 = value;
	}

	inline static int32_t get_offset_of_m_Contact5_5() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact5_5)); }
	inline ContactPoint2D_t3390240644  get_m_Contact5_5() const { return ___m_Contact5_5; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact5_5() { return &___m_Contact5_5; }
	inline void set_m_Contact5_5(ContactPoint2D_t3390240644  value)
	{
		___m_Contact5_5 = value;
	}

	inline static int32_t get_offset_of_m_Contact6_6() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact6_6)); }
	inline ContactPoint2D_t3390240644  get_m_Contact6_6() const { return ___m_Contact6_6; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact6_6() { return &___m_Contact6_6; }
	inline void set_m_Contact6_6(ContactPoint2D_t3390240644  value)
	{
		___m_Contact6_6 = value;
	}

	inline static int32_t get_offset_of_m_Contact7_7() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact7_7)); }
	inline ContactPoint2D_t3390240644  get_m_Contact7_7() const { return ___m_Contact7_7; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact7_7() { return &___m_Contact7_7; }
	inline void set_m_Contact7_7(ContactPoint2D_t3390240644  value)
	{
		___m_Contact7_7 = value;
	}

	inline static int32_t get_offset_of_m_Contact8_8() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact8_8)); }
	inline ContactPoint2D_t3390240644  get_m_Contact8_8() const { return ___m_Contact8_8; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact8_8() { return &___m_Contact8_8; }
	inline void set_m_Contact8_8(ContactPoint2D_t3390240644  value)
	{
		___m_Contact8_8 = value;
	}

	inline static int32_t get_offset_of_m_Contact9_9() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact9_9)); }
	inline ContactPoint2D_t3390240644  get_m_Contact9_9() const { return ___m_Contact9_9; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact9_9() { return &___m_Contact9_9; }
	inline void set_m_Contact9_9(ContactPoint2D_t3390240644  value)
	{
		___m_Contact9_9 = value;
	}

	inline static int32_t get_offset_of_m_Contact10_10() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact10_10)); }
	inline ContactPoint2D_t3390240644  get_m_Contact10_10() const { return ___m_Contact10_10; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact10_10() { return &___m_Contact10_10; }
	inline void set_m_Contact10_10(ContactPoint2D_t3390240644  value)
	{
		___m_Contact10_10 = value;
	}

	inline static int32_t get_offset_of_m_Contact11_11() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact11_11)); }
	inline ContactPoint2D_t3390240644  get_m_Contact11_11() const { return ___m_Contact11_11; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact11_11() { return &___m_Contact11_11; }
	inline void set_m_Contact11_11(ContactPoint2D_t3390240644  value)
	{
		___m_Contact11_11 = value;
	}

	inline static int32_t get_offset_of_m_Contact12_12() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact12_12)); }
	inline ContactPoint2D_t3390240644  get_m_Contact12_12() const { return ___m_Contact12_12; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact12_12() { return &___m_Contact12_12; }
	inline void set_m_Contact12_12(ContactPoint2D_t3390240644  value)
	{
		___m_Contact12_12 = value;
	}

	inline static int32_t get_offset_of_m_Contact13_13() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact13_13)); }
	inline ContactPoint2D_t3390240644  get_m_Contact13_13() const { return ___m_Contact13_13; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact13_13() { return &___m_Contact13_13; }
	inline void set_m_Contact13_13(ContactPoint2D_t3390240644  value)
	{
		___m_Contact13_13 = value;
	}

	inline static int32_t get_offset_of_m_Contact14_14() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact14_14)); }
	inline ContactPoint2D_t3390240644  get_m_Contact14_14() const { return ___m_Contact14_14; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact14_14() { return &___m_Contact14_14; }
	inline void set_m_Contact14_14(ContactPoint2D_t3390240644  value)
	{
		___m_Contact14_14 = value;
	}

	inline static int32_t get_offset_of_m_Contact15_15() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact15_15)); }
	inline ContactPoint2D_t3390240644  get_m_Contact15_15() const { return ___m_Contact15_15; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact15_15() { return &___m_Contact15_15; }
	inline void set_m_Contact15_15(ContactPoint2D_t3390240644  value)
	{
		___m_Contact15_15 = value;
	}

	inline static int32_t get_offset_of_m_Contact16_16() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact16_16)); }
	inline ContactPoint2D_t3390240644  get_m_Contact16_16() const { return ___m_Contact16_16; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact16_16() { return &___m_Contact16_16; }
	inline void set_m_Contact16_16(ContactPoint2D_t3390240644  value)
	{
		___m_Contact16_16 = value;
	}

	inline static int32_t get_offset_of_m_Contact17_17() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact17_17)); }
	inline ContactPoint2D_t3390240644  get_m_Contact17_17() const { return ___m_Contact17_17; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact17_17() { return &___m_Contact17_17; }
	inline void set_m_Contact17_17(ContactPoint2D_t3390240644  value)
	{
		___m_Contact17_17 = value;
	}

	inline static int32_t get_offset_of_m_Contact18_18() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact18_18)); }
	inline ContactPoint2D_t3390240644  get_m_Contact18_18() const { return ___m_Contact18_18; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact18_18() { return &___m_Contact18_18; }
	inline void set_m_Contact18_18(ContactPoint2D_t3390240644  value)
	{
		___m_Contact18_18 = value;
	}

	inline static int32_t get_offset_of_m_Contact19_19() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact19_19)); }
	inline ContactPoint2D_t3390240644  get_m_Contact19_19() const { return ___m_Contact19_19; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact19_19() { return &___m_Contact19_19; }
	inline void set_m_Contact19_19(ContactPoint2D_t3390240644  value)
	{
		___m_Contact19_19 = value;
	}

	inline static int32_t get_offset_of_m_Contact20_20() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact20_20)); }
	inline ContactPoint2D_t3390240644  get_m_Contact20_20() const { return ___m_Contact20_20; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact20_20() { return &___m_Contact20_20; }
	inline void set_m_Contact20_20(ContactPoint2D_t3390240644  value)
	{
		___m_Contact20_20 = value;
	}

	inline static int32_t get_offset_of_m_Contact21_21() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact21_21)); }
	inline ContactPoint2D_t3390240644  get_m_Contact21_21() const { return ___m_Contact21_21; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact21_21() { return &___m_Contact21_21; }
	inline void set_m_Contact21_21(ContactPoint2D_t3390240644  value)
	{
		___m_Contact21_21 = value;
	}

	inline static int32_t get_offset_of_m_Contact22_22() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact22_22)); }
	inline ContactPoint2D_t3390240644  get_m_Contact22_22() const { return ___m_Contact22_22; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact22_22() { return &___m_Contact22_22; }
	inline void set_m_Contact22_22(ContactPoint2D_t3390240644  value)
	{
		___m_Contact22_22 = value;
	}

	inline static int32_t get_offset_of_m_Contact23_23() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact23_23)); }
	inline ContactPoint2D_t3390240644  get_m_Contact23_23() const { return ___m_Contact23_23; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact23_23() { return &___m_Contact23_23; }
	inline void set_m_Contact23_23(ContactPoint2D_t3390240644  value)
	{
		___m_Contact23_23 = value;
	}

	inline static int32_t get_offset_of_m_Contact24_24() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact24_24)); }
	inline ContactPoint2D_t3390240644  get_m_Contact24_24() const { return ___m_Contact24_24; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact24_24() { return &___m_Contact24_24; }
	inline void set_m_Contact24_24(ContactPoint2D_t3390240644  value)
	{
		___m_Contact24_24 = value;
	}

	inline static int32_t get_offset_of_m_Contact25_25() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact25_25)); }
	inline ContactPoint2D_t3390240644  get_m_Contact25_25() const { return ___m_Contact25_25; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact25_25() { return &___m_Contact25_25; }
	inline void set_m_Contact25_25(ContactPoint2D_t3390240644  value)
	{
		___m_Contact25_25 = value;
	}

	inline static int32_t get_offset_of_m_Contact26_26() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact26_26)); }
	inline ContactPoint2D_t3390240644  get_m_Contact26_26() const { return ___m_Contact26_26; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact26_26() { return &___m_Contact26_26; }
	inline void set_m_Contact26_26(ContactPoint2D_t3390240644  value)
	{
		___m_Contact26_26 = value;
	}

	inline static int32_t get_offset_of_m_Contact27_27() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact27_27)); }
	inline ContactPoint2D_t3390240644  get_m_Contact27_27() const { return ___m_Contact27_27; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact27_27() { return &___m_Contact27_27; }
	inline void set_m_Contact27_27(ContactPoint2D_t3390240644  value)
	{
		___m_Contact27_27 = value;
	}

	inline static int32_t get_offset_of_m_Contact28_28() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact28_28)); }
	inline ContactPoint2D_t3390240644  get_m_Contact28_28() const { return ___m_Contact28_28; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact28_28() { return &___m_Contact28_28; }
	inline void set_m_Contact28_28(ContactPoint2D_t3390240644  value)
	{
		___m_Contact28_28 = value;
	}

	inline static int32_t get_offset_of_m_Contact29_29() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact29_29)); }
	inline ContactPoint2D_t3390240644  get_m_Contact29_29() const { return ___m_Contact29_29; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact29_29() { return &___m_Contact29_29; }
	inline void set_m_Contact29_29(ContactPoint2D_t3390240644  value)
	{
		___m_Contact29_29 = value;
	}

	inline static int32_t get_offset_of_m_Contact30_30() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact30_30)); }
	inline ContactPoint2D_t3390240644  get_m_Contact30_30() const { return ___m_Contact30_30; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact30_30() { return &___m_Contact30_30; }
	inline void set_m_Contact30_30(ContactPoint2D_t3390240644  value)
	{
		___m_Contact30_30 = value;
	}

	inline static int32_t get_offset_of_m_Contact31_31() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact31_31)); }
	inline ContactPoint2D_t3390240644  get_m_Contact31_31() const { return ___m_Contact31_31; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact31_31() { return &___m_Contact31_31; }
	inline void set_m_Contact31_31(ContactPoint2D_t3390240644  value)
	{
		___m_Contact31_31 = value;
	}

	inline static int32_t get_offset_of_m_Contact32_32() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact32_32)); }
	inline ContactPoint2D_t3390240644  get_m_Contact32_32() const { return ___m_Contact32_32; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact32_32() { return &___m_Contact32_32; }
	inline void set_m_Contact32_32(ContactPoint2D_t3390240644  value)
	{
		___m_Contact32_32 = value;
	}

	inline static int32_t get_offset_of_m_Contact33_33() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact33_33)); }
	inline ContactPoint2D_t3390240644  get_m_Contact33_33() const { return ___m_Contact33_33; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact33_33() { return &___m_Contact33_33; }
	inline void set_m_Contact33_33(ContactPoint2D_t3390240644  value)
	{
		___m_Contact33_33 = value;
	}

	inline static int32_t get_offset_of_m_Contact34_34() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact34_34)); }
	inline ContactPoint2D_t3390240644  get_m_Contact34_34() const { return ___m_Contact34_34; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact34_34() { return &___m_Contact34_34; }
	inline void set_m_Contact34_34(ContactPoint2D_t3390240644  value)
	{
		___m_Contact34_34 = value;
	}

	inline static int32_t get_offset_of_m_Contact35_35() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact35_35)); }
	inline ContactPoint2D_t3390240644  get_m_Contact35_35() const { return ___m_Contact35_35; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact35_35() { return &___m_Contact35_35; }
	inline void set_m_Contact35_35(ContactPoint2D_t3390240644  value)
	{
		___m_Contact35_35 = value;
	}

	inline static int32_t get_offset_of_m_Contact36_36() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact36_36)); }
	inline ContactPoint2D_t3390240644  get_m_Contact36_36() const { return ___m_Contact36_36; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact36_36() { return &___m_Contact36_36; }
	inline void set_m_Contact36_36(ContactPoint2D_t3390240644  value)
	{
		___m_Contact36_36 = value;
	}

	inline static int32_t get_offset_of_m_Contact37_37() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact37_37)); }
	inline ContactPoint2D_t3390240644  get_m_Contact37_37() const { return ___m_Contact37_37; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact37_37() { return &___m_Contact37_37; }
	inline void set_m_Contact37_37(ContactPoint2D_t3390240644  value)
	{
		___m_Contact37_37 = value;
	}

	inline static int32_t get_offset_of_m_Contact38_38() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact38_38)); }
	inline ContactPoint2D_t3390240644  get_m_Contact38_38() const { return ___m_Contact38_38; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact38_38() { return &___m_Contact38_38; }
	inline void set_m_Contact38_38(ContactPoint2D_t3390240644  value)
	{
		___m_Contact38_38 = value;
	}

	inline static int32_t get_offset_of_m_Contact39_39() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact39_39)); }
	inline ContactPoint2D_t3390240644  get_m_Contact39_39() const { return ___m_Contact39_39; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact39_39() { return &___m_Contact39_39; }
	inline void set_m_Contact39_39(ContactPoint2D_t3390240644  value)
	{
		___m_Contact39_39 = value;
	}

	inline static int32_t get_offset_of_m_Contact40_40() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact40_40)); }
	inline ContactPoint2D_t3390240644  get_m_Contact40_40() const { return ___m_Contact40_40; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact40_40() { return &___m_Contact40_40; }
	inline void set_m_Contact40_40(ContactPoint2D_t3390240644  value)
	{
		___m_Contact40_40 = value;
	}

	inline static int32_t get_offset_of_m_Contact41_41() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact41_41)); }
	inline ContactPoint2D_t3390240644  get_m_Contact41_41() const { return ___m_Contact41_41; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact41_41() { return &___m_Contact41_41; }
	inline void set_m_Contact41_41(ContactPoint2D_t3390240644  value)
	{
		___m_Contact41_41 = value;
	}

	inline static int32_t get_offset_of_m_Contact42_42() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact42_42)); }
	inline ContactPoint2D_t3390240644  get_m_Contact42_42() const { return ___m_Contact42_42; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact42_42() { return &___m_Contact42_42; }
	inline void set_m_Contact42_42(ContactPoint2D_t3390240644  value)
	{
		___m_Contact42_42 = value;
	}

	inline static int32_t get_offset_of_m_Contact43_43() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact43_43)); }
	inline ContactPoint2D_t3390240644  get_m_Contact43_43() const { return ___m_Contact43_43; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact43_43() { return &___m_Contact43_43; }
	inline void set_m_Contact43_43(ContactPoint2D_t3390240644  value)
	{
		___m_Contact43_43 = value;
	}

	inline static int32_t get_offset_of_m_Contact44_44() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact44_44)); }
	inline ContactPoint2D_t3390240644  get_m_Contact44_44() const { return ___m_Contact44_44; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact44_44() { return &___m_Contact44_44; }
	inline void set_m_Contact44_44(ContactPoint2D_t3390240644  value)
	{
		___m_Contact44_44 = value;
	}

	inline static int32_t get_offset_of_m_Contact45_45() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact45_45)); }
	inline ContactPoint2D_t3390240644  get_m_Contact45_45() const { return ___m_Contact45_45; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact45_45() { return &___m_Contact45_45; }
	inline void set_m_Contact45_45(ContactPoint2D_t3390240644  value)
	{
		___m_Contact45_45 = value;
	}

	inline static int32_t get_offset_of_m_Contact46_46() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact46_46)); }
	inline ContactPoint2D_t3390240644  get_m_Contact46_46() const { return ___m_Contact46_46; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact46_46() { return &___m_Contact46_46; }
	inline void set_m_Contact46_46(ContactPoint2D_t3390240644  value)
	{
		___m_Contact46_46 = value;
	}

	inline static int32_t get_offset_of_m_Contact47_47() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact47_47)); }
	inline ContactPoint2D_t3390240644  get_m_Contact47_47() const { return ___m_Contact47_47; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact47_47() { return &___m_Contact47_47; }
	inline void set_m_Contact47_47(ContactPoint2D_t3390240644  value)
	{
		___m_Contact47_47 = value;
	}

	inline static int32_t get_offset_of_m_Contact48_48() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact48_48)); }
	inline ContactPoint2D_t3390240644  get_m_Contact48_48() const { return ___m_Contact48_48; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact48_48() { return &___m_Contact48_48; }
	inline void set_m_Contact48_48(ContactPoint2D_t3390240644  value)
	{
		___m_Contact48_48 = value;
	}

	inline static int32_t get_offset_of_m_Contact49_49() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact49_49)); }
	inline ContactPoint2D_t3390240644  get_m_Contact49_49() const { return ___m_Contact49_49; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact49_49() { return &___m_Contact49_49; }
	inline void set_m_Contact49_49(ContactPoint2D_t3390240644  value)
	{
		___m_Contact49_49 = value;
	}

	inline static int32_t get_offset_of_m_Contact50_50() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact50_50)); }
	inline ContactPoint2D_t3390240644  get_m_Contact50_50() const { return ___m_Contact50_50; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact50_50() { return &___m_Contact50_50; }
	inline void set_m_Contact50_50(ContactPoint2D_t3390240644  value)
	{
		___m_Contact50_50 = value;
	}

	inline static int32_t get_offset_of_m_Contact51_51() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact51_51)); }
	inline ContactPoint2D_t3390240644  get_m_Contact51_51() const { return ___m_Contact51_51; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact51_51() { return &___m_Contact51_51; }
	inline void set_m_Contact51_51(ContactPoint2D_t3390240644  value)
	{
		___m_Contact51_51 = value;
	}

	inline static int32_t get_offset_of_m_Contact52_52() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact52_52)); }
	inline ContactPoint2D_t3390240644  get_m_Contact52_52() const { return ___m_Contact52_52; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact52_52() { return &___m_Contact52_52; }
	inline void set_m_Contact52_52(ContactPoint2D_t3390240644  value)
	{
		___m_Contact52_52 = value;
	}

	inline static int32_t get_offset_of_m_Contact53_53() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact53_53)); }
	inline ContactPoint2D_t3390240644  get_m_Contact53_53() const { return ___m_Contact53_53; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact53_53() { return &___m_Contact53_53; }
	inline void set_m_Contact53_53(ContactPoint2D_t3390240644  value)
	{
		___m_Contact53_53 = value;
	}

	inline static int32_t get_offset_of_m_Contact54_54() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact54_54)); }
	inline ContactPoint2D_t3390240644  get_m_Contact54_54() const { return ___m_Contact54_54; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact54_54() { return &___m_Contact54_54; }
	inline void set_m_Contact54_54(ContactPoint2D_t3390240644  value)
	{
		___m_Contact54_54 = value;
	}

	inline static int32_t get_offset_of_m_Contact55_55() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact55_55)); }
	inline ContactPoint2D_t3390240644  get_m_Contact55_55() const { return ___m_Contact55_55; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact55_55() { return &___m_Contact55_55; }
	inline void set_m_Contact55_55(ContactPoint2D_t3390240644  value)
	{
		___m_Contact55_55 = value;
	}

	inline static int32_t get_offset_of_m_Contact56_56() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact56_56)); }
	inline ContactPoint2D_t3390240644  get_m_Contact56_56() const { return ___m_Contact56_56; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact56_56() { return &___m_Contact56_56; }
	inline void set_m_Contact56_56(ContactPoint2D_t3390240644  value)
	{
		___m_Contact56_56 = value;
	}

	inline static int32_t get_offset_of_m_Contact57_57() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact57_57)); }
	inline ContactPoint2D_t3390240644  get_m_Contact57_57() const { return ___m_Contact57_57; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact57_57() { return &___m_Contact57_57; }
	inline void set_m_Contact57_57(ContactPoint2D_t3390240644  value)
	{
		___m_Contact57_57 = value;
	}

	inline static int32_t get_offset_of_m_Contact58_58() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact58_58)); }
	inline ContactPoint2D_t3390240644  get_m_Contact58_58() const { return ___m_Contact58_58; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact58_58() { return &___m_Contact58_58; }
	inline void set_m_Contact58_58(ContactPoint2D_t3390240644  value)
	{
		___m_Contact58_58 = value;
	}

	inline static int32_t get_offset_of_m_Contact59_59() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact59_59)); }
	inline ContactPoint2D_t3390240644  get_m_Contact59_59() const { return ___m_Contact59_59; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact59_59() { return &___m_Contact59_59; }
	inline void set_m_Contact59_59(ContactPoint2D_t3390240644  value)
	{
		___m_Contact59_59 = value;
	}

	inline static int32_t get_offset_of_m_Contact60_60() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact60_60)); }
	inline ContactPoint2D_t3390240644  get_m_Contact60_60() const { return ___m_Contact60_60; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact60_60() { return &___m_Contact60_60; }
	inline void set_m_Contact60_60(ContactPoint2D_t3390240644  value)
	{
		___m_Contact60_60 = value;
	}

	inline static int32_t get_offset_of_m_Contact61_61() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact61_61)); }
	inline ContactPoint2D_t3390240644  get_m_Contact61_61() const { return ___m_Contact61_61; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact61_61() { return &___m_Contact61_61; }
	inline void set_m_Contact61_61(ContactPoint2D_t3390240644  value)
	{
		___m_Contact61_61 = value;
	}

	inline static int32_t get_offset_of_m_Contact62_62() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact62_62)); }
	inline ContactPoint2D_t3390240644  get_m_Contact62_62() const { return ___m_Contact62_62; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact62_62() { return &___m_Contact62_62; }
	inline void set_m_Contact62_62(ContactPoint2D_t3390240644  value)
	{
		___m_Contact62_62 = value;
	}

	inline static int32_t get_offset_of_m_Contact63_63() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact63_63)); }
	inline ContactPoint2D_t3390240644  get_m_Contact63_63() const { return ___m_Contact63_63; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact63_63() { return &___m_Contact63_63; }
	inline void set_m_Contact63_63(ContactPoint2D_t3390240644  value)
	{
		___m_Contact63_63 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDCONTACTPOINTS2D_T2523437281_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef COLLISION2D_T2842956331_H
#define COLLISION2D_T2842956331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2842956331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.CachedContactPoints2D UnityEngine.Collision2D::m_CachedContactPoints
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContactArray
	ContactPoint2DU5BU5D_t96683501* ___m_LegacyContactArray_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_RelativeVelocity_4)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_CachedContactPoints_7() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_CachedContactPoints_7)); }
	inline CachedContactPoints2D_t2523437281  get_m_CachedContactPoints_7() const { return ___m_CachedContactPoints_7; }
	inline CachedContactPoints2D_t2523437281 * get_address_of_m_CachedContactPoints_7() { return &___m_CachedContactPoints_7; }
	inline void set_m_CachedContactPoints_7(CachedContactPoints2D_t2523437281  value)
	{
		___m_CachedContactPoints_7 = value;
	}

	inline static int32_t get_offset_of_m_LegacyContactArray_8() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_LegacyContactArray_8)); }
	inline ContactPoint2DU5BU5D_t96683501* get_m_LegacyContactArray_8() const { return ___m_LegacyContactArray_8; }
	inline ContactPoint2DU5BU5D_t96683501** get_address_of_m_LegacyContactArray_8() { return &___m_LegacyContactArray_8; }
	inline void set_m_LegacyContactArray_8(ContactPoint2DU5BU5D_t96683501* value)
	{
		___m_LegacyContactArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_LegacyContactArray_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	ContactPoint2D_t3390240644 * ___m_LegacyContactArray_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	ContactPoint2D_t3390240644 * ___m_LegacyContactArray_8;
};
#endif // COLLISION2D_T2842956331_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef DESTORYONCOLLISION_T3127334007_H
#define DESTORYONCOLLISION_T3127334007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestoryOnCollision
struct  DestoryOnCollision_t3127334007  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject DestoryOnCollision::explosion
	GameObject_t1113636619 * ___explosion_4;
	// UnityEngine.AudioSource DestoryOnCollision::burstAudio
	AudioSource_t3935305588 * ___burstAudio_5;

public:
	inline static int32_t get_offset_of_explosion_4() { return static_cast<int32_t>(offsetof(DestoryOnCollision_t3127334007, ___explosion_4)); }
	inline GameObject_t1113636619 * get_explosion_4() const { return ___explosion_4; }
	inline GameObject_t1113636619 ** get_address_of_explosion_4() { return &___explosion_4; }
	inline void set_explosion_4(GameObject_t1113636619 * value)
	{
		___explosion_4 = value;
		Il2CppCodeGenWriteBarrier((&___explosion_4), value);
	}

	inline static int32_t get_offset_of_burstAudio_5() { return static_cast<int32_t>(offsetof(DestoryOnCollision_t3127334007, ___burstAudio_5)); }
	inline AudioSource_t3935305588 * get_burstAudio_5() const { return ___burstAudio_5; }
	inline AudioSource_t3935305588 ** get_address_of_burstAudio_5() { return &___burstAudio_5; }
	inline void set_burstAudio_5(AudioSource_t3935305588 * value)
	{
		___burstAudio_5 = value;
		Il2CppCodeGenWriteBarrier((&___burstAudio_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTORYONCOLLISION_T3127334007_H
#ifndef DESTROYBYTIME_T1728122815_H
#define DESTROYBYTIME_T1728122815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyByTime
struct  DestroyByTime_t1728122815  : public MonoBehaviour_t3962482529
{
public:
	// System.Single DestroyByTime::lifetime
	float ___lifetime_4;

public:
	inline static int32_t get_offset_of_lifetime_4() { return static_cast<int32_t>(offsetof(DestroyByTime_t1728122815, ___lifetime_4)); }
	inline float get_lifetime_4() const { return ___lifetime_4; }
	inline float* get_address_of_lifetime_4() { return &___lifetime_4; }
	inline void set_lifetime_4(float value)
	{
		___lifetime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTROYBYTIME_T1728122815_H
#ifndef DRAGONCONTROLLER_T958677092_H
#define DRAGONCONTROLLER_T958677092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonController
struct  DragonController_t958677092  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 DragonController::hits
	int32_t ___hits_4;
	// System.Int32 DragonController::score
	int32_t ___score_5;
	// UnityEngine.Animator DragonController::animator
	Animator_t434523843 * ___animator_6;
	// UnityEngine.Rigidbody2D DragonController::dragon
	Rigidbody2D_t939494601 * ___dragon_7;
	// System.Single DragonController::speed
	float ___speed_8;
	// UnityEngine.AudioSource[] DragonController::audio
	AudioSourceU5BU5D_t4028559421* ___audio_9;
	// UnityEngine.Vector2 DragonController::direction
	Vector2_t2156229523  ___direction_10;
	// UnityEngine.UI.Text DragonController::hitCount
	Text_t1901882714 * ___hitCount_11;
	// UnityEngine.UI.Text DragonController::eggCount
	Text_t1901882714 * ___eggCount_12;
	// UnityEngine.AudioSource DragonController::dizzyAudio
	AudioSource_t3935305588 * ___dizzyAudio_13;
	// UnityEngine.AudioSource DragonController::dieAudio
	AudioSource_t3935305588 * ___dieAudio_14;
	// GameController DragonController::gameController
	GameController_t2330501625 * ___gameController_15;

public:
	inline static int32_t get_offset_of_hits_4() { return static_cast<int32_t>(offsetof(DragonController_t958677092, ___hits_4)); }
	inline int32_t get_hits_4() const { return ___hits_4; }
	inline int32_t* get_address_of_hits_4() { return &___hits_4; }
	inline void set_hits_4(int32_t value)
	{
		___hits_4 = value;
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(DragonController_t958677092, ___score_5)); }
	inline int32_t get_score_5() const { return ___score_5; }
	inline int32_t* get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(int32_t value)
	{
		___score_5 = value;
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(DragonController_t958677092, ___animator_6)); }
	inline Animator_t434523843 * get_animator_6() const { return ___animator_6; }
	inline Animator_t434523843 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t434523843 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier((&___animator_6), value);
	}

	inline static int32_t get_offset_of_dragon_7() { return static_cast<int32_t>(offsetof(DragonController_t958677092, ___dragon_7)); }
	inline Rigidbody2D_t939494601 * get_dragon_7() const { return ___dragon_7; }
	inline Rigidbody2D_t939494601 ** get_address_of_dragon_7() { return &___dragon_7; }
	inline void set_dragon_7(Rigidbody2D_t939494601 * value)
	{
		___dragon_7 = value;
		Il2CppCodeGenWriteBarrier((&___dragon_7), value);
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(DragonController_t958677092, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_audio_9() { return static_cast<int32_t>(offsetof(DragonController_t958677092, ___audio_9)); }
	inline AudioSourceU5BU5D_t4028559421* get_audio_9() const { return ___audio_9; }
	inline AudioSourceU5BU5D_t4028559421** get_address_of_audio_9() { return &___audio_9; }
	inline void set_audio_9(AudioSourceU5BU5D_t4028559421* value)
	{
		___audio_9 = value;
		Il2CppCodeGenWriteBarrier((&___audio_9), value);
	}

	inline static int32_t get_offset_of_direction_10() { return static_cast<int32_t>(offsetof(DragonController_t958677092, ___direction_10)); }
	inline Vector2_t2156229523  get_direction_10() const { return ___direction_10; }
	inline Vector2_t2156229523 * get_address_of_direction_10() { return &___direction_10; }
	inline void set_direction_10(Vector2_t2156229523  value)
	{
		___direction_10 = value;
	}

	inline static int32_t get_offset_of_hitCount_11() { return static_cast<int32_t>(offsetof(DragonController_t958677092, ___hitCount_11)); }
	inline Text_t1901882714 * get_hitCount_11() const { return ___hitCount_11; }
	inline Text_t1901882714 ** get_address_of_hitCount_11() { return &___hitCount_11; }
	inline void set_hitCount_11(Text_t1901882714 * value)
	{
		___hitCount_11 = value;
		Il2CppCodeGenWriteBarrier((&___hitCount_11), value);
	}

	inline static int32_t get_offset_of_eggCount_12() { return static_cast<int32_t>(offsetof(DragonController_t958677092, ___eggCount_12)); }
	inline Text_t1901882714 * get_eggCount_12() const { return ___eggCount_12; }
	inline Text_t1901882714 ** get_address_of_eggCount_12() { return &___eggCount_12; }
	inline void set_eggCount_12(Text_t1901882714 * value)
	{
		___eggCount_12 = value;
		Il2CppCodeGenWriteBarrier((&___eggCount_12), value);
	}

	inline static int32_t get_offset_of_dizzyAudio_13() { return static_cast<int32_t>(offsetof(DragonController_t958677092, ___dizzyAudio_13)); }
	inline AudioSource_t3935305588 * get_dizzyAudio_13() const { return ___dizzyAudio_13; }
	inline AudioSource_t3935305588 ** get_address_of_dizzyAudio_13() { return &___dizzyAudio_13; }
	inline void set_dizzyAudio_13(AudioSource_t3935305588 * value)
	{
		___dizzyAudio_13 = value;
		Il2CppCodeGenWriteBarrier((&___dizzyAudio_13), value);
	}

	inline static int32_t get_offset_of_dieAudio_14() { return static_cast<int32_t>(offsetof(DragonController_t958677092, ___dieAudio_14)); }
	inline AudioSource_t3935305588 * get_dieAudio_14() const { return ___dieAudio_14; }
	inline AudioSource_t3935305588 ** get_address_of_dieAudio_14() { return &___dieAudio_14; }
	inline void set_dieAudio_14(AudioSource_t3935305588 * value)
	{
		___dieAudio_14 = value;
		Il2CppCodeGenWriteBarrier((&___dieAudio_14), value);
	}

	inline static int32_t get_offset_of_gameController_15() { return static_cast<int32_t>(offsetof(DragonController_t958677092, ___gameController_15)); }
	inline GameController_t2330501625 * get_gameController_15() const { return ___gameController_15; }
	inline GameController_t2330501625 ** get_address_of_gameController_15() { return &___gameController_15; }
	inline void set_gameController_15(GameController_t2330501625 * value)
	{
		___gameController_15 = value;
		Il2CppCodeGenWriteBarrier((&___gameController_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAGONCONTROLLER_T958677092_H
#ifndef EGGBOUNCESOUND_T4203129250_H
#define EGGBOUNCESOUND_T4203129250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EggBounceSound
struct  EggBounceSound_t4203129250  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource EggBounceSound::bounceAudio
	AudioSource_t3935305588 * ___bounceAudio_4;

public:
	inline static int32_t get_offset_of_bounceAudio_4() { return static_cast<int32_t>(offsetof(EggBounceSound_t4203129250, ___bounceAudio_4)); }
	inline AudioSource_t3935305588 * get_bounceAudio_4() const { return ___bounceAudio_4; }
	inline AudioSource_t3935305588 ** get_address_of_bounceAudio_4() { return &___bounceAudio_4; }
	inline void set_bounceAudio_4(AudioSource_t3935305588 * value)
	{
		___bounceAudio_4 = value;
		Il2CppCodeGenWriteBarrier((&___bounceAudio_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EGGBOUNCESOUND_T4203129250_H
#ifndef GAMECONTROLLER_T2330501625_H
#define GAMECONTROLLER_T2330501625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2330501625  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject GameController::pin
	GameObject_t1113636619 * ___pin_4;
	// UnityEngine.Vector2 GameController::spawnValues
	Vector2_t2156229523  ___spawnValues_5;
	// UnityEngine.Transform GameController::pinSpawn
	Transform_t3600365921 * ___pinSpawn_6;
	// System.Int32 GameController::pinCount
	int32_t ___pinCount_7;
	// System.Int32 GameController::rows
	int32_t ___rows_8;
	// UnityEngine.UI.Text GameController::restartText
	Text_t1901882714 * ___restartText_9;
	// System.Boolean GameController::restart
	bool ___restart_10;

public:
	inline static int32_t get_offset_of_pin_4() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___pin_4)); }
	inline GameObject_t1113636619 * get_pin_4() const { return ___pin_4; }
	inline GameObject_t1113636619 ** get_address_of_pin_4() { return &___pin_4; }
	inline void set_pin_4(GameObject_t1113636619 * value)
	{
		___pin_4 = value;
		Il2CppCodeGenWriteBarrier((&___pin_4), value);
	}

	inline static int32_t get_offset_of_spawnValues_5() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___spawnValues_5)); }
	inline Vector2_t2156229523  get_spawnValues_5() const { return ___spawnValues_5; }
	inline Vector2_t2156229523 * get_address_of_spawnValues_5() { return &___spawnValues_5; }
	inline void set_spawnValues_5(Vector2_t2156229523  value)
	{
		___spawnValues_5 = value;
	}

	inline static int32_t get_offset_of_pinSpawn_6() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___pinSpawn_6)); }
	inline Transform_t3600365921 * get_pinSpawn_6() const { return ___pinSpawn_6; }
	inline Transform_t3600365921 ** get_address_of_pinSpawn_6() { return &___pinSpawn_6; }
	inline void set_pinSpawn_6(Transform_t3600365921 * value)
	{
		___pinSpawn_6 = value;
		Il2CppCodeGenWriteBarrier((&___pinSpawn_6), value);
	}

	inline static int32_t get_offset_of_pinCount_7() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___pinCount_7)); }
	inline int32_t get_pinCount_7() const { return ___pinCount_7; }
	inline int32_t* get_address_of_pinCount_7() { return &___pinCount_7; }
	inline void set_pinCount_7(int32_t value)
	{
		___pinCount_7 = value;
	}

	inline static int32_t get_offset_of_rows_8() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___rows_8)); }
	inline int32_t get_rows_8() const { return ___rows_8; }
	inline int32_t* get_address_of_rows_8() { return &___rows_8; }
	inline void set_rows_8(int32_t value)
	{
		___rows_8 = value;
	}

	inline static int32_t get_offset_of_restartText_9() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___restartText_9)); }
	inline Text_t1901882714 * get_restartText_9() const { return ___restartText_9; }
	inline Text_t1901882714 ** get_address_of_restartText_9() { return &___restartText_9; }
	inline void set_restartText_9(Text_t1901882714 * value)
	{
		___restartText_9 = value;
		Il2CppCodeGenWriteBarrier((&___restartText_9), value);
	}

	inline static int32_t get_offset_of_restart_10() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___restart_10)); }
	inline bool get_restart_10() const { return ___restart_10; }
	inline bool* get_address_of_restart_10() { return &___restart_10; }
	inline void set_restart_10(bool value)
	{
		___restart_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECONTROLLER_T2330501625_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef COPTERMOTION_T2743147367_H
#define COPTERMOTION_T2743147367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// copterMotion
struct  copterMotion_t2743147367  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody2D copterMotion::coptor
	Rigidbody2D_t939494601 * ___coptor_4;
	// System.Single copterMotion::speed
	float ___speed_5;
	// UnityEngine.Vector2 copterMotion::direction
	Vector2_t2156229523  ___direction_6;
	// UnityEngine.GameObject copterMotion::egg
	GameObject_t1113636619 * ___egg_7;
	// UnityEngine.Transform copterMotion::eggSpawn
	Transform_t3600365921 * ___eggSpawn_8;
	// System.Single copterMotion::nextFire
	float ___nextFire_9;
	// System.Single copterMotion::fireDelta
	float ___fireDelta_10;
	// UnityEngine.UI.Text copterMotion::eggCount
	Text_t1901882714 * ___eggCount_11;
	// System.Int32 copterMotion::score
	int32_t ___score_12;
	// GameController copterMotion::gameController
	GameController_t2330501625 * ___gameController_13;

public:
	inline static int32_t get_offset_of_coptor_4() { return static_cast<int32_t>(offsetof(copterMotion_t2743147367, ___coptor_4)); }
	inline Rigidbody2D_t939494601 * get_coptor_4() const { return ___coptor_4; }
	inline Rigidbody2D_t939494601 ** get_address_of_coptor_4() { return &___coptor_4; }
	inline void set_coptor_4(Rigidbody2D_t939494601 * value)
	{
		___coptor_4 = value;
		Il2CppCodeGenWriteBarrier((&___coptor_4), value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(copterMotion_t2743147367, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_direction_6() { return static_cast<int32_t>(offsetof(copterMotion_t2743147367, ___direction_6)); }
	inline Vector2_t2156229523  get_direction_6() const { return ___direction_6; }
	inline Vector2_t2156229523 * get_address_of_direction_6() { return &___direction_6; }
	inline void set_direction_6(Vector2_t2156229523  value)
	{
		___direction_6 = value;
	}

	inline static int32_t get_offset_of_egg_7() { return static_cast<int32_t>(offsetof(copterMotion_t2743147367, ___egg_7)); }
	inline GameObject_t1113636619 * get_egg_7() const { return ___egg_7; }
	inline GameObject_t1113636619 ** get_address_of_egg_7() { return &___egg_7; }
	inline void set_egg_7(GameObject_t1113636619 * value)
	{
		___egg_7 = value;
		Il2CppCodeGenWriteBarrier((&___egg_7), value);
	}

	inline static int32_t get_offset_of_eggSpawn_8() { return static_cast<int32_t>(offsetof(copterMotion_t2743147367, ___eggSpawn_8)); }
	inline Transform_t3600365921 * get_eggSpawn_8() const { return ___eggSpawn_8; }
	inline Transform_t3600365921 ** get_address_of_eggSpawn_8() { return &___eggSpawn_8; }
	inline void set_eggSpawn_8(Transform_t3600365921 * value)
	{
		___eggSpawn_8 = value;
		Il2CppCodeGenWriteBarrier((&___eggSpawn_8), value);
	}

	inline static int32_t get_offset_of_nextFire_9() { return static_cast<int32_t>(offsetof(copterMotion_t2743147367, ___nextFire_9)); }
	inline float get_nextFire_9() const { return ___nextFire_9; }
	inline float* get_address_of_nextFire_9() { return &___nextFire_9; }
	inline void set_nextFire_9(float value)
	{
		___nextFire_9 = value;
	}

	inline static int32_t get_offset_of_fireDelta_10() { return static_cast<int32_t>(offsetof(copterMotion_t2743147367, ___fireDelta_10)); }
	inline float get_fireDelta_10() const { return ___fireDelta_10; }
	inline float* get_address_of_fireDelta_10() { return &___fireDelta_10; }
	inline void set_fireDelta_10(float value)
	{
		___fireDelta_10 = value;
	}

	inline static int32_t get_offset_of_eggCount_11() { return static_cast<int32_t>(offsetof(copterMotion_t2743147367, ___eggCount_11)); }
	inline Text_t1901882714 * get_eggCount_11() const { return ___eggCount_11; }
	inline Text_t1901882714 ** get_address_of_eggCount_11() { return &___eggCount_11; }
	inline void set_eggCount_11(Text_t1901882714 * value)
	{
		___eggCount_11 = value;
		Il2CppCodeGenWriteBarrier((&___eggCount_11), value);
	}

	inline static int32_t get_offset_of_score_12() { return static_cast<int32_t>(offsetof(copterMotion_t2743147367, ___score_12)); }
	inline int32_t get_score_12() const { return ___score_12; }
	inline int32_t* get_address_of_score_12() { return &___score_12; }
	inline void set_score_12(int32_t value)
	{
		___score_12 = value;
	}

	inline static int32_t get_offset_of_gameController_13() { return static_cast<int32_t>(offsetof(copterMotion_t2743147367, ___gameController_13)); }
	inline GameController_t2330501625 * get_gameController_13() const { return ___gameController_13; }
	inline GameController_t2330501625 ** get_address_of_gameController_13() { return &___gameController_13; }
	inline void set_gameController_13(GameController_t2330501625 * value)
	{
		___gameController_13 = value;
		Il2CppCodeGenWriteBarrier((&___gameController_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COPTERMOTION_T2743147367_H
#ifndef GAMEAREALEAVE_T2687570813_H
#define GAMEAREALEAVE_T2687570813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// gameAreaLeave
struct  gameAreaLeave_t2687570813  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEAREALEAVE_T2687570813_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t4028559421  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioSource_t3935305588 * m_Items[1];

public:
	inline AudioSource_t3935305588 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t3935305588 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t3935305588 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AudioSource_t3935305588 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t3935305588 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t3935305588 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponents_TisRuntimeObject_m539078962_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
extern "C" IL2CPP_METHOD_ATTR String_t* Component_get_tag_m2716693327 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m3006960551 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// System.Void UnityEngine.AudioSource::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m3118546832 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t434523843 * Component_GetComponent_TisAnimator_t434523843_m2351447238 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponents<UnityEngine.AudioSource>()
inline AudioSourceU5BU5D_t4028559421* Component_GetComponents_TisAudioSource_t3935305588_m1999492100 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  AudioSourceU5BU5D_t4028559421* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m539078962_gshared)(__this, method);
}
// System.Void DragonController::updateScore()
extern "C" IL2CPP_METHOD_ATTR void DragonController_updateScore_m3338612795 (DragonController_t958677092 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_FindWithTag_m981614592 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameController>()
inline GameController_t2330501625 * GameObject_GetComponent_TisGameController_t2330501625_m374217182 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  GameController_t2330501625 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_t939494601 * Component_GetComponent_TisRigidbody2D_t939494601_m1531613439 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2134052629 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void GameController::restartLevel()
extern "C" IL2CPP_METHOD_ATTR void GameController_restartLevel_m205974401 (GameController_t2330501625 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t3935305588 * Component_GetComponent_TisAudioSource_t3935305588_m1977431131 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Collision2D_get_gameObject_m1443495885 (Collision2D_t2842956331 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
extern "C" IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_m3951609671 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Application::get_loadedLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_loadedLevel_m4082273027 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Application_LoadLevel_m2271496228 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void copterMotion::updateScore()
extern "C" IL2CPP_METHOD_ATTR void copterMotion_updateScore_m597479964 (copterMotion_t2743147367 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m3074252807 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
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
// System.Void DestoryOnCollision::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DestoryOnCollision__ctor_m3840575101 (DestoryOnCollision_t3127334007 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DestoryOnCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void DestoryOnCollision_OnTriggerEnter2D_m2198101354 (DestoryOnCollision_t3127334007 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DestoryOnCollision_OnTriggerEnter2D_m2198101354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral1759881858, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		GameObject_t1113636619 * L_3 = __this->get_explosion_4();
		Collider2D_t2806799626 * L_4 = ___other0;
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		Collider2D_t2806799626 * L_7 = ___other0;
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_9 = Transform_get_rotation_m3502953881(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_3, L_6, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		AudioSource_t3935305588 * L_10 = __this->get_burstAudio_5();
		AudioSource_Play_m48294159(L_10, /*hidden argument*/NULL);
		Collider2D_t2806799626 * L_11 = ___other0;
		GameObject_t1113636619 * L_12 = Component_get_gameObject_m442555142(L_11, /*hidden argument*/NULL);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_004d:
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
// System.Void DestroyByTime::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DestroyByTime__ctor_m2782495990 (DestroyByTime_t1728122815 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DestroyByTime::Start()
extern "C" IL2CPP_METHOD_ATTR void DestroyByTime_Start_m2216704866 (DestroyByTime_t1728122815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DestroyByTime_Start_m2216704866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_lifetime_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DragonController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DragonController__ctor_m1229226974 (DragonController_t958677092 * __this, const RuntimeMethod* method)
{
	{
		__this->set_score_5(5);
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_direction_10(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragonController::Start()
extern "C" IL2CPP_METHOD_ATTR void DragonController_Start_m253425774 (DragonController_t958677092 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragonController_Start_m253425774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_animator_6(L_0);
		AudioSourceU5BU5D_t4028559421* L_1 = Component_GetComponents_TisAudioSource_t3935305588_m1999492100(__this, /*hidden argument*/Component_GetComponents_TisAudioSource_t3935305588_m1999492100_RuntimeMethod_var);
		__this->set_audio_9(L_1);
		AudioSourceU5BU5D_t4028559421* L_2 = __this->get_audio_9();
		int32_t L_3 = 1;
		AudioSource_t3935305588 * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		__this->set_dizzyAudio_13(L_4);
		AudioSourceU5BU5D_t4028559421* L_5 = __this->get_audio_9();
		int32_t L_6 = 0;
		AudioSource_t3935305588 * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		__this->set_dieAudio_14(L_7);
		DragonController_updateScore_m3338612795(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = GameObject_FindWithTag_m981614592(NULL /*static, unused*/, _stringLiteral1325677231, /*hidden argument*/NULL);
		V_0 = L_8;
		GameObject_t1113636619 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_9, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		GameObject_t1113636619 * L_11 = V_0;
		GameController_t2330501625 * L_12 = GameObject_GetComponent_TisGameController_t2330501625_m374217182(L_11, /*hidden argument*/GameObject_GetComponent_TisGameController_t2330501625_m374217182_RuntimeMethod_var);
		__this->set_gameController_15(L_12);
		GameController_t2330501625 * L_13 = __this->get_gameController_15();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_0068:
	{
		GameController_t2330501625 * L_14 = __this->get_gameController_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_14, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0083;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3845063054, /*hidden argument*/NULL);
	}

IL_0083:
	{
		return;
	}
}
// System.Void DragonController::updateScore()
extern "C" IL2CPP_METHOD_ATTR void DragonController_updateScore_m3338612795 (DragonController_t958677092 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragonController_updateScore_m3338612795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_score_5();
		if ((((int32_t)L_0) <= ((int32_t)(-1))))
		{
			goto IL_002c;
		}
	}
	{
		Text_t1901882714 * L_1 = __this->get_hitCount_11();
		int32_t L_2 = __this->get_score_5();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1404116768, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
	}

IL_002c:
	{
		return;
	}
}
// System.Void DragonController::Update()
extern "C" IL2CPP_METHOD_ATTR void DragonController_Update_m688211662 (DragonController_t958677092 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragonController_Update_m688211662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t939494601 * L_0 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_dragon_7(L_0);
		Rigidbody2D_t939494601 * L_1 = __this->get_dragon_7();
		Vector2_t2156229523  L_2 = __this->get_direction_10();
		float L_3 = __this->get_speed_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2898400508(L_1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragonController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void DragonController_OnTriggerEnter2D_m1454260826 (DragonController_t958677092 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragonController_OnTriggerEnter2D_m1454260826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral1759881858, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_3 = __this->get_hits_4();
		__this->set_hits_4(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = __this->get_score_5();
		__this->set_score_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		DragonController_updateScore_m3338612795(__this, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_hits_4();
		if ((((int32_t)L_5) >= ((int32_t)5)))
		{
			goto IL_0063;
		}
	}
	{
		Animator_t434523843 * L_6 = __this->get_animator_6();
		Animator_SetTrigger_m2134052629(L_6, _stringLiteral1591029137, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_7 = __this->get_dizzyAudio_13();
		AudioSource_Play_m48294159(L_7, /*hidden argument*/NULL);
		goto IL_00a9;
	}

IL_0063:
	{
		Animator_t434523843 * L_8 = __this->get_animator_6();
		Animator_SetTrigger_m2134052629(L_8, _stringLiteral1700381005, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_9, (0.75f), /*hidden argument*/NULL);
		Text_t1901882714 * L_10 = __this->get_eggCount_12();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral1433743393);
		GameController_t2330501625 * L_11 = __this->get_gameController_15();
		GameController_restartLevel_m205974401(L_11, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_12 = __this->get_dieAudio_14();
		AudioSource_Play_m48294159(L_12, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
// System.Void DragonController::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void DragonController_OnTriggerExit2D_m4247331399 (DragonController_t958677092 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragonController_OnTriggerExit2D_m4247331399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Collider2D_t2806799626 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Collider2D_t2806799626 * L_2 = ___other0;
		String_t* L_3 = Component_get_tag_m2716693327(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, _stringLiteral2959661618, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1452522365, /*hidden argument*/NULL);
		Vector2_t2156229523  L_5 = __this->get_direction_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_5, (-1.0f), /*hidden argument*/NULL);
		__this->set_direction_10(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Transform_get_localScale_m129152068(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector3_t3722313464 * L_9 = (&V_0);
		float L_10 = L_9->get_x_2();
		L_9->set_x_2(((float)il2cpp_codegen_multiply((float)L_10, (float)(-1.0f))));
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = V_0;
		Transform_set_localScale_m3053443106(L_11, L_12, /*hidden argument*/NULL);
	}

IL_006b:
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
// System.Void EggBounceSound::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EggBounceSound__ctor_m19071728 (EggBounceSound_t4203129250 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EggBounceSound::Start()
extern "C" IL2CPP_METHOD_ATTR void EggBounceSound_Start_m2544719576 (EggBounceSound_t4203129250 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EggBounceSound_Start_m2544719576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_bounceAudio_4(L_0);
		return;
	}
}
// System.Void EggBounceSound::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" IL2CPP_METHOD_ATTR void EggBounceSound_OnCollisionEnter2D_m250893467 (EggBounceSound_t4203129250 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EggBounceSound_OnCollisionEnter2D_m250893467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t2842956331 * L_0 = ___collision0;
		GameObject_t1113636619 * L_1 = Collision2D_get_gameObject_m1443495885(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral1759881858, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1384329709, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_4 = __this->get_bounceAudio_4();
		AudioSource_Play_m48294159(L_4, /*hidden argument*/NULL);
	}

IL_002f:
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
// System.Void GameController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameController__ctor_m1587060996 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
		__this->set_pinCount_7(((int32_t)20));
		__this->set_rows_8(4);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Start()
extern "C" IL2CPP_METHOD_ATTR void GameController_Start_m1173294274 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Start_m1173294274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	Vector2_t2156229523  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		int32_t L_0 = __this->get_pinCount_7();
		int32_t L_1 = __this->get_rows_8();
		V_0 = ((int32_t)((int32_t)L_0/(int32_t)L_1));
		Vector2_t2156229523 * L_2 = __this->get_address_of_spawnValues_5();
		float L_3 = L_2->get_x_0();
		int32_t L_4 = V_0;
		V_1 = ((float)((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_3))/(float)(((float)((float)L_4)))));
		Vector2_t2156229523 * L_5 = __this->get_address_of_spawnValues_5();
		float L_6 = L_5->get_y_1();
		int32_t L_7 = __this->get_rows_8();
		V_2 = ((float)((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_6))/(float)(((float)((float)L_7)))));
		V_3 = (0.6f);
		Vector2_t2156229523 * L_8 = __this->get_address_of_spawnValues_5();
		float L_9 = L_8->get_y_1();
		float L_10 = V_3;
		V_4 = ((float)il2cpp_codegen_add((float)((-L_9)), (float)L_10));
		V_5 = 0;
		goto IL_00c9;
	}

IL_005b:
	{
		Vector2_t2156229523 * L_11 = __this->get_address_of_spawnValues_5();
		float L_12 = L_11->get_x_0();
		float L_13 = V_3;
		V_6 = ((float)il2cpp_codegen_add((float)((-L_12)), (float)L_13));
		float L_14 = V_3;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_14, (float)(-1.0f)));
		V_7 = 0;
		goto IL_00b5;
	}

IL_007b:
	{
		float L_15 = V_6;
		float L_16 = V_4;
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_8), L_15, L_16, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_17 = __this->get_pin_4();
		Vector2_t2156229523  L_18 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_19 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = __this->get_pin_4();
		Transform_t3600365921 * L_21 = GameObject_get_transform_m1369836730(L_20, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_22 = Transform_get_rotation_m3502953881(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_17, L_19, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		float L_23 = V_6;
		float L_24 = V_1;
		V_6 = ((float)il2cpp_codegen_add((float)L_23, (float)L_24));
		int32_t L_25 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00b5:
	{
		int32_t L_26 = V_7;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_007b;
		}
	}
	{
		float L_28 = V_4;
		float L_29 = V_2;
		V_4 = ((float)il2cpp_codegen_add((float)L_28, (float)L_29));
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00c9:
	{
		int32_t L_31 = V_5;
		int32_t L_32 = __this->get_rows_8();
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_005b;
		}
	}
	{
		__this->set_restart_10((bool)0);
		Text_t1901882714 * L_33 = __this->get_restartText_9();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_34);
		return;
	}
}
// System.Void GameController::Update()
extern "C" IL2CPP_METHOD_ATTR void GameController_Update_m217025042 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Update_m217025042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_restart_10();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = Application_get_loadedLevel_m4082273027(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m2271496228(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GameController::restartLevel()
extern "C" IL2CPP_METHOD_ATTR void GameController_restartLevel_m205974401 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_restartLevel_m205974401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_restart_10((bool)1);
		Text_t1901882714 * L_0 = __this->get_restartText_9();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1247276920);
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
// System.Void copterMotion::.ctor()
extern "C" IL2CPP_METHOD_ATTR void copterMotion__ctor_m1798767296 (copterMotion_t2743147367 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_direction_6(L_0);
		__this->set_fireDelta_10((0.5f));
		__this->set_score_12(((int32_t)50));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void copterMotion::Start()
extern "C" IL2CPP_METHOD_ATTR void copterMotion_Start_m3707312404 (copterMotion_t2743147367 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (copterMotion_Start_m3707312404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		copterMotion_updateScore_m597479964(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = GameObject_FindWithTag_m981614592(NULL /*static, unused*/, _stringLiteral1325677231, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t1113636619 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		GameObject_t1113636619 * L_3 = V_0;
		GameController_t2330501625 * L_4 = GameObject_GetComponent_TisGameController_t2330501625_m374217182(L_3, /*hidden argument*/GameObject_GetComponent_TisGameController_t2330501625_m374217182_RuntimeMethod_var);
		__this->set_gameController_13(L_4);
	}

IL_0029:
	{
		GameController_t2330501625 * L_5 = __this->get_gameController_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3845063054, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void copterMotion::Update()
extern "C" IL2CPP_METHOD_ATTR void copterMotion_Update_m2383551214 (copterMotion_t2743147367 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (copterMotion_Update_m2383551214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t939494601 * L_0 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_coptor_4(L_0);
		Rigidbody2D_t939494601 * L_1 = __this->get_coptor_4();
		Vector2_t2156229523  L_2 = __this->get_direction_6();
		float L_3 = __this->get_speed_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2898400508(L_1, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetButtonDown_m3074252807(NULL /*static, unused*/, _stringLiteral1930566815, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_009b;
		}
	}
	{
		float L_6 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = __this->get_nextFire_9();
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_8 = __this->get_score_12();
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		float L_9 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = __this->get_fireDelta_10();
		__this->set_nextFire_9(((float)il2cpp_codegen_add((float)L_9, (float)L_10)));
		GameObject_t1113636619 * L_11 = __this->get_egg_7();
		Transform_t3600365921 * L_12 = __this->get_eggSpawn_8();
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		Transform_t3600365921 * L_14 = __this->get_eggSpawn_8();
		Quaternion_t2301928331  L_15 = Transform_get_rotation_m3502953881(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_11, L_13, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		int32_t L_16 = __this->get_score_12();
		__this->set_score_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)));
		copterMotion_updateScore_m597479964(__this, /*hidden argument*/NULL);
	}

IL_009b:
	{
		return;
	}
}
// System.Void copterMotion::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void copterMotion_FixedUpdate_m4197161490 (copterMotion_t2743147367 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void copterMotion::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void copterMotion_OnTriggerExit2D_m1986595300 (copterMotion_t2743147367 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (copterMotion_OnTriggerExit2D_m1986595300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Collider2D_t2806799626 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral1688680400, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		Vector2_t2156229523  L_3 = __this->get_direction_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_3, (-1.0f), /*hidden argument*/NULL);
		__this->set_direction_6(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_localScale_m129152068(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector3_t3722313464 * L_7 = (&V_0);
		float L_8 = L_7->get_x_2();
		L_7->set_x_2(((float)il2cpp_codegen_multiply((float)L_8, (float)(-1.0f))));
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = V_0;
		Transform_set_localScale_m3053443106(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void copterMotion::updateScore()
extern "C" IL2CPP_METHOD_ATTR void copterMotion_updateScore_m597479964 (copterMotion_t2743147367 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (copterMotion_updateScore_m597479964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_eggCount_11();
		int32_t L_1 = __this->get_score_12();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2085694213, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		int32_t L_5 = __this->get_score_12();
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		Text_t1901882714 * L_6 = __this->get_eggCount_11();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral2670640191);
		GameController_t2330501625 * L_7 = __this->get_gameController_13();
		GameController_restartLevel_m205974401(L_7, /*hidden argument*/NULL);
	}

IL_0046:
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
// System.Void gameAreaLeave::.ctor()
extern "C" IL2CPP_METHOD_ATTR void gameAreaLeave__ctor_m108486552 (gameAreaLeave_t2687570813 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void gameAreaLeave::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void gameAreaLeave_OnTriggerExit2D_m2936749099 (gameAreaLeave_t2687570813 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (gameAreaLeave_OnTriggerExit2D_m2936749099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral1759881858, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Collider2D_t2806799626 * L_3 = ___other0;
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
