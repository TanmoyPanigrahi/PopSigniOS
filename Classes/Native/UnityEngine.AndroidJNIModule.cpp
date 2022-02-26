﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaException
struct AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F;
// UnityEngine.AndroidJavaRunnableProxy
struct AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Reflection.TargetInvocationException
struct TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral02318B712552D9B62DF47C0277C285D8D227DB68;
IL2CPP_EXTERN_C String_t* _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
IL2CPP_EXTERN_C String_t* _stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC;
IL2CPP_EXTERN_C String_t* _stringLiteral0F9959D6967BF0405610B0041D446B892A631997;
IL2CPP_EXTERN_C String_t* _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral1518EB1645470EBD2FAB6435208F4404D786664E;
IL2CPP_EXTERN_C String_t* _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251;
IL2CPP_EXTERN_C String_t* _stringLiteral204582C83E45E7B0A9BD3FA17ADE77EFC4EC4D6A;
IL2CPP_EXTERN_C String_t* _stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E;
IL2CPP_EXTERN_C String_t* _stringLiteral22225741051C0DE6E1B24FA555DFA8109FC5CA2B;
IL2CPP_EXTERN_C String_t* _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380;
IL2CPP_EXTERN_C String_t* _stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C;
IL2CPP_EXTERN_C String_t* _stringLiteral27F2FC8F8A0DFFAC96353D8AC1CDD811C4A7644B;
IL2CPP_EXTERN_C String_t* _stringLiteral29533AC1D363321ECFB96B50441B9418763D4176;
IL2CPP_EXTERN_C String_t* _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE;
IL2CPP_EXTERN_C String_t* _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
IL2CPP_EXTERN_C String_t* _stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral42B0C97654CB0F536C2C643B8D4D9C2C7B8D71AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10;
IL2CPP_EXTERN_C String_t* _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral519BF378C815B93F61B0116296D7B32C3805CB32;
IL2CPP_EXTERN_C String_t* _stringLiteral530BFE609FFD8493BEF7537EACF3B344E426E4EC;
IL2CPP_EXTERN_C String_t* _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297;
IL2CPP_EXTERN_C String_t* _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C;
IL2CPP_EXTERN_C String_t* _stringLiteral61B6DDF2435F416EB6E75E0A742D181B32C37FDF;
IL2CPP_EXTERN_C String_t* _stringLiteral63ABF5649A2AE850683F7D7D13A6E33FC41F4CAA;
IL2CPP_EXTERN_C String_t* _stringLiteral65572413F78A98D745AF7C2CCAF152BD2C90FF88;
IL2CPP_EXTERN_C String_t* _stringLiteral672EA443B619B60F88713BFAFFF2A3A7433C6827;
IL2CPP_EXTERN_C String_t* _stringLiteral682203F9A53FBD397E722133EF0FD4D0C4CBECC3;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD;
IL2CPP_EXTERN_C String_t* _stringLiteral6F7F7B4F6009074DEBEA1316DB8BDEC4E57CA185;
IL2CPP_EXTERN_C String_t* _stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845;
IL2CPP_EXTERN_C String_t* _stringLiteral721D70DB4B32A2AEDC1FCA8FD3B608ED50CE0156;
IL2CPP_EXTERN_C String_t* _stringLiteral7300AD57DB611A5D85FBD10E00B41B82F2DC677F;
IL2CPP_EXTERN_C String_t* _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A;
IL2CPP_EXTERN_C String_t* _stringLiteral77E7609799DC0A299115C3AE174DEE8AEDDCBC05;
IL2CPP_EXTERN_C String_t* _stringLiteral7BD850E4DDBA17AE057506A43953C4D0DB03DC66;
IL2CPP_EXTERN_C String_t* _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A;
IL2CPP_EXTERN_C String_t* _stringLiteral81AB20ED8D2182D1A0D3ECAA43335FF4D94E66E1;
IL2CPP_EXTERN_C String_t* _stringLiteral831D7CED62F1BBB173BA1CEEEB6F169BFC6B02A3;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE771679CD1C7D2C1D9B577D342220161AD2D3D;
IL2CPP_EXTERN_C String_t* _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069;
IL2CPP_EXTERN_C String_t* _stringLiteral90B5C222ABA0160226196AA2D9E75E9C0A6B3D39;
IL2CPP_EXTERN_C String_t* _stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral95743D14EBFB666745B1AE894875A26AD08F3552;
IL2CPP_EXTERN_C String_t* _stringLiteral997CC228CD49CB51A21F3301055CBEE380042055;
IL2CPP_EXTERN_C String_t* _stringLiteral9AF65B36DFE45F7D43114A8BC74824FA223F60D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD;
IL2CPP_EXTERN_C String_t* _stringLiteral9BC1A16BF700ED5325C6B4FD49819E1C48ECC035;
IL2CPP_EXTERN_C String_t* _stringLiteral9D9409152ADEE0D2A5BE9C04915D8BF65B6B929A;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3;
IL2CPP_EXTERN_C String_t* _stringLiteralA2267B1424757597EAEC3CB1B8269FF078CC487C;
IL2CPP_EXTERN_C String_t* _stringLiteralA38BB5AAC6BE96538C93F39E86053E620B41407D;
IL2CPP_EXTERN_C String_t* _stringLiteralA39614FE650CC59501DA62392479CBAD5E59947A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA7BDDC7501EECF3151484AEBEF8627D03E365077;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralAD2FC71AE60261B73977F0195D3744E79CCC12B9;
IL2CPP_EXTERN_C String_t* _stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC4A16FF7AEE06FF380F93BBF26ACF1014CFB82;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB40004C0135CEF645A079B4A245A04F302EA80F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB61F72088FF6940FDC49659789D1C5CA70C2E293;
IL2CPP_EXTERN_C String_t* _stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95;
IL2CPP_EXTERN_C String_t* _stringLiteralBB8F0908585792018E468F1010A23CFD167A686C;
IL2CPP_EXTERN_C String_t* _stringLiteralBE3E2515DEF82B38D4ACFEBDC9D69E894CA05BBE;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E;
IL2CPP_EXTERN_C String_t* _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
IL2CPP_EXTERN_C String_t* _stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904;
IL2CPP_EXTERN_C String_t* _stringLiteralCE42F595933CDB601C52327F32C83017C908C430;
IL2CPP_EXTERN_C String_t* _stringLiteralD533C8C15007D85807A5FE481182C225E6A86D08;
IL2CPP_EXTERN_C String_t* _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
IL2CPP_EXTERN_C String_t* _stringLiteralD924CAE09D47CDF0481655AE527E8ADF940FF10E;
IL2CPP_EXTERN_C String_t* _stringLiteralD956959ACBEB8436506C180DF3D8E268AAA4C614;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1AC4D20161E303D304EC6B1002667BE658488EE;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralE46DFB424F1D16B497976AB817F603BF3B170AF9;
IL2CPP_EXTERN_C String_t* _stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56;
IL2CPP_EXTERN_C String_t* _stringLiteralE5BEC2753A5201D97F16E51BDAFBB18987ECD93B;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC;
IL2CPP_EXTERN_C String_t* _stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490;
IL2CPP_EXTERN_C String_t* _stringLiteralF0C6BCBD6A21B83CD30A85140E181D764C4E1198;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E8EFC0C8EF0E48C41E622D432E07CB573E6983;
IL2CPP_EXTERN_C String_t* _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF76791D0FE1272AD994E3611223AB6D219F5FC;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaProxy_Invoke_m9D765F3E7DC37C5CB14C4884F2873B48D2F96BFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_Box_mB45F80703BDE58472E812A2122DC70CAFC4E5023_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertToJNIArray_mA0E7A187566E19273CEE6D3BAA053B2178FA6850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_CreateJNIArgArray_m2075C9584C3A31C8DFFA5D1DDBEE8C5FFBB95892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetConstructorID_m80A44C210DFE146BDF2EB8FDB2FF19A6BD0337CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetFieldID_mE63F3DAF58A223435525E46590D1AE4F624E9628_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetMethodID_m289D8B1C26B13A8A132565AAFC42FD6C81E99072_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_UnboxArray_mD9697E8557EB29A0CFFC3A4423366F75B74C4F1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeArray_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E;
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t72288DCFA45FEA57618C4D622E6CC0D7F3747E3F 
{
};

// UnityEngine.AndroidJNI
struct AndroidJNI_t531BC9A6383F7C0F76A1270297952462F52308EE  : public RuntimeObject
{
};

// UnityEngine.AndroidJNIHelper
struct AndroidJNIHelper_t2C1AB9F6B2295C20B24108936A003F65F02D71DD  : public RuntimeObject
{
};

// UnityEngine.AndroidJNISafe
struct AndroidJNISafe_t8F403436E87D77E436B1E426920A105A4E05BEBA  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidReflection
struct AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908  : public RuntimeObject
{
};

struct AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidReflection::s_ReflectionHelperClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_ReflectionHelperClass_0;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperGetConstructorID
	intptr_t ___s_ReflectionHelperGetConstructorID_1;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperGetMethodID
	intptr_t ___s_ReflectionHelperGetMethodID_2;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperGetFieldID
	intptr_t ___s_ReflectionHelperGetFieldID_3;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperGetFieldSignature
	intptr_t ___s_ReflectionHelperGetFieldSignature_4;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperNewProxyInstance
	intptr_t ___s_ReflectionHelperNewProxyInstance_5;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperSetNativeExceptionOnProxy
	intptr_t ___s_ReflectionHelperSetNativeExceptionOnProxy_6;
	// System.IntPtr UnityEngine.AndroidReflection::s_FieldGetDeclaringClass
	intptr_t ___s_FieldGetDeclaringClass_7;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8  : public RuntimeObject
{
	// System.Boolean UnityEngine.GlobalJavaObjectRef::m_disposed
	bool ___m_disposed_0;
	// System.IntPtr UnityEngine.GlobalJavaObjectRef::m_jobject
	intptr_t ___m_jobject_1;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};

// UnityEngine.AndroidJavaException
struct AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD  : public Exception_t
{
	// System.String UnityEngine.AndroidJavaException::mJavaStackTrace
	String_t* ___mJavaStackTrace_18;
};

// UnityEngine.AndroidJavaRunnableProxy
struct AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// UnityEngine.AndroidJavaRunnable UnityEngine.AndroidJavaRunnableProxy::mRunnable
	AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___mRunnable_4;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F  : public MulticastDelegate_t
{
};

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
// UnityEngine.AndroidJavaClass[]
struct AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* m_Items[1];

	inline AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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


// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.SByte>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int16>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Char>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;

// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.Exception::get_StackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_StackTrace_m601D1BDBA58B7BAB3B750ABC5E72C9449F6FD58E (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewGlobalRef_m5F4875C8F71CF25DCC437D2EDB75320C487DB074 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GlobalJavaObjectRef::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteGlobalRef_mC71D9B4DBED2AB66D49764253BA8DE912F731A40 (intptr_t ___globalref0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_mFA05DF6B31FC284C65D378C02A2A34F277DFE6E5 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteWeakGlobalRef_m9B39A30D764938DC4C8D526321520701D77D34A7 (intptr_t ___globalref0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562 (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types3, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___modifiers4, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine._AndroidJNIHelper::Box(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* _AndroidJNIHelper_Box_mB45F80703BDE58472E812A2122DC70CAFC4E5023 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mE405D676C6881553258F8BAD40A20B462D611068 (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetInvocationException__ctor_mEE5FEDD311B4396452D5AFF140B2D79907447F94 (TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaProxy::GetRawProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidReflection::SetNativeExceptionOnProxy(System.IntPtr,System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReflection_SetNativeExceptionOnProxy_m3AD392FDF28A10F33D16C0BE27A12D31B2C0883F (intptr_t ___proxy0, Exception_t* ___e1, bool ___methodNotFound2, const RuntimeMethod* method) ;
// System.Object UnityEngine._AndroidJNIHelper::Unbox(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_Unbox_mD43DC20EB0E844E2E3E9373EDDB825B5E61FC0BB (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaObject::AndroidJavaObjectDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB1EEE323CA333E5DB2871794F1E9094E488682E2 (intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewLocalRef_mA95E1CDBA47E9CEC4D55BBA178F0ACF4219F6E29 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::DeleteWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteWeakGlobalRef_m23C9808936212AC528658CB4989F15580BB0C734 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaProxy(UnityEngine.AndroidJavaProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaProxy_m2694F6C774901F6F33044BC41DA29C7CA3F9C1F5 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___proxy0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewWeakGlobalRef_m74933FB5C1E361F566A96B25CF096C770860CD94 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FindClass_m921B6BE5C8F1F1A4207761AD07A57C0D5F599DDE (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GlobalJavaObjectRef::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GlobalJavaObjectRef::op_Implicit(UnityEngine.GlobalJavaObjectRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::_AndroidJavaObject(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__AndroidJavaObject_m1284CB7198514B8C06A2BF794ACDC909DC26443F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::_Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawObject_mC5B8B60BEF515F5EE2A113D60991A433DA740C69 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawClass_m470EAEBF8B0BD365FD13F1C6F55119836452FDFA (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::DebugPrint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_DebugPrint_m047934BF3D1E6676FDDBDA038E1AF387C5413533 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D (intptr_t ___localref0, const RuntimeMethod* method) ;
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* AndroidJNIHelper_CreateJNIArgArray_mCA21BB6EB162E1E77E8F95812BD662EA078EDDBF (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_m287B584251A89771CD7C767119A350BD6DDACCAB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___jniArgs1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m06AB8A133FD78AE60E6B5871CBD24609B9444ED7 (intptr_t ___jclass0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewObject_mCA783442B4DE3E0071D2C71DE69A655EF8538E2C (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectClass_m78626C2B107D46FA9276B6FD32D746EEB81E8D2D (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mC54EF67EA8929F905AA8ACC8A498F21B548E0964 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CallVoidMethod_m37B8331F4A139234C98323FE19FAC5F3E29EE743 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, intptr_t ___jclass0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::_AndroidJavaClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__AndroidJavaClass_mF481A9584D78F32C64219FDA49CB84B6F0A017DD (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticMethodID_mDD304107A2DCF7C4FFFC6E820361618693FCD8C7 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetMethodID_m4E480BAEFB37F467848EC9074C6917A2D8E853DC (intptr_t ___obj0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::NewString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewString_m6D6411F7DACFD383054457D88C0F0F1F8AE0CFB9 (String_t* ___chars0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_mFF379E5F210AF38781F1FB59667AC39C4CFA5966 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_m220EBB62A14A40DD5693A48E5787DE4636D051EA (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_mC5449583711986CFF9CCDAD3F8058D9842229B88 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CallStaticVoidMethod_m965D8C47FDF1388EA6192108063B129C870B382F (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::GetStaticMethodID(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetStaticMethodID_mA7CC0C6E85BD03EA4BFDA8FAF883A4FF9B721C3E (String_t* ___clazz0, String_t* ___methodName1, String_t* ___signature2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::GetMethodID(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodID_m7773DFE09DED5E42B5E6A607A4318318141104E5 (String_t* ___clazz0, String_t* ___methodName1, String_t* ___signature2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::NewProxyInstance(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_NewProxyInstance_m06C9BF6A4805DDEED85EC565CDED394E15F2E793 (intptr_t ___delegateHandle0, intptr_t ___interfaze1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaRunnableProxy::.ctor(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnableProxy__ctor_mB173256AF7629962B226343C4F6F94FFFF7317C3 (AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1* __this, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___runnable0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectArrayElement_m515AF7717FD44C40A5FFFD6E50DFCD65A35B8FF5 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNI::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringChars_m462C62C322F38797F05A818CEF5C8D235F1F6714 (intptr_t ___str0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::ConvertToJNIArray(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_ConvertToJNIArray_mA0E7A187566E19273CEE6D3BAA053B2178FA6850 (RuntimeArray* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaRunnable_mAA9F7D043B9EDD0A0665E0CA217A7577962A456F (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___jrunnable0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___value0, int32_t ___index1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.SByte>(System.String,System.Object[])
inline int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int16>(System.String,System.Object[])
inline int16_t AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
inline float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
inline double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Char>(System.String,System.Object[])
inline Il2CppChar AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Object UnityEngine._AndroidJNIHelper::UnboxArray(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_UnboxArray_mD9697E8557EB29A0CFFC3A4423366F75B74C4F1D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::GetProxyObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_GetProxyObject_mBFD2FBEF9ED9D4AE23DECF5836E5C73A886E2109 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToIntArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToIntArray_mA46A79AFCB3909BB90FFF2D20EFDA042E6A4DE97 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToBooleanArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToBooleanArray_m2E622CCA3AB1B19FE519F975391636CA7DECDAF7 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToByteArray_m13141E44A84BDC2716432D09131984A4ADFC101F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToSByteArray(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToSByteArray_mEFB80D7817A15C285872B8F3C1A9A1EDEA9ECC34 (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToShortArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToShortArray_m3591547B05CEABD583A023C267091A536E3F925C (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToLongArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToLongArray_m00D8D5A5D1B46639307AA78C5E4E7421EA0FF16A (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToFloatArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToFloatArray_m15157B7C76CE04863F365E7052671AC87D8556E0 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToDoubleArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToDoubleArray_mCAF30FC9FA2947EBC680D89374A5296D775132A9 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToCharArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToCharArray_m8C8F076F9A471146F6BCF063F7415E89BC0FC801 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObjectArray_m8B0C45BD47F6563EA916E35BE26691DFA6482A51 (int32_t ___size0, intptr_t ___clazz1, intptr_t ___obj2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetObjectArrayElement_m5D80CF792A1C492F97EC3378E36FFF458BAFD8D1 (intptr_t ___array0, int32_t ___index1, intptr_t ___obj2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::ToObjectArray(System.IntPtr[],System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToObjectArray_m0F776C4B1BA875104CCB8345797A9269A3EBCF07 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___array0, intptr_t ___type1, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m17AB4F708FC61A101E77C0154684E3E119720FEB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m2A7EE301E50E6200B15858AD095B9E3DCA061B10 (intptr_t ___javaClass0, String_t* ___signature1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::GetConstructorMember(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetConstructorMember_m79D508363805E1AD5FC551644355A1DCF5A01A8A (intptr_t ___jclass0, String_t* ___signature1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::FromReflectedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FromReflectedMethod_mA0F291FDD88E4B0BD2242D9846833C696CF64F86 (intptr_t ___refMethod0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::GetMethodMember(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodMember_m6EAFD27B17549F9EF623F5E6341DCAC9E33528CE (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodIDFallback(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodIDFallback_m48DDC7CB61931DD61B3524E65449AFD4F8B9E9F3 (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::PushLocalFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_PushLocalFrame_m4B2AE2B5D545086A6720E97FA8F427F245360FC8 (int32_t ___capacity0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::GetFieldMember(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldMember_m66A8627EBBE89FFAF125264309A85E5001FCEEC3 (intptr_t ___jclass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidReflection::GetFieldClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldClass_m394CE3986B992FB51CDA6F18031A4D6390956E00 (intptr_t ___field0, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidReflection::GetFieldSignature(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidReflection_GetFieldSignature_m9684AAB2E8AAB2DA4CE2A9DCC18C9088C5E82194 (intptr_t ___field0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_PopLocalFrame_m2128BB5AAAE2E2E12161EBD13866C69D50D5B78B (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetFieldID_m82034BB65220C7ACA5CA977789463EF827C4C0BF (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticFieldID_mC79AC0A4A44034B7A6D19ED2CE6AF24F7369B698 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_mE4CCA11A87A7E49591786C98FFE239D6EA66F8C5 (Type_t* ___t0, Type_t* ___from1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m80A44C210DFE146BDF2EB8FDB2FF19A6BD0337CE (intptr_t ___jclass0, String_t* ___signature1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_m289D8B1C26B13A8A132565AAFC42FD6C81E99072 (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_mE63F3DAF58A223435525E46590D1AE4F624E9628 (intptr_t ___jclass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaRunnable_m247E2AE8370951BEA9D154FC5AC04BE67F222CF1 (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___jrunnable0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaProxy(System.IntPtr,UnityEngine.AndroidJavaProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaProxy_m6EB0D9FF190B75B8E49397619D1925F442EEBB8A (intptr_t ___delegateHandle0, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___proxy1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// UnityEngine.jvalue[] UnityEngine._AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* _AndroidJNIHelper_CreateJNIArgArray_m2075C9584C3A31C8DFFA5D1DDBEE8C5FFBB95892 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine._AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_DeleteJNIArgArray_mFA2A3664183847343FBB1F76ACD32DE1B1ED0681 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___jniArgs1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m7506B43EEFEA5F37F1548F63497D31378460FC61 (intptr_t ___jclass0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_mF34E230F83D1166968B9B80CF2F9F3CFC00CD0C4 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewStringFromStr(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewStringFromStr_mEEF9F3FF518F3CEEE81780A61DDEB0B93D3ED548 (String_t* ___chars0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_m6C27C01B14483F99373608BF1A56CA53BA46F926 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_m90681289A6CEAF160DB188A3E2177F323D996F82 (const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FindClass_mA0D17BF36250F96F40D8DCF193A7C65E6F6DED7F (String_t* ___name0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_mCB601A11C971557E2F89DD968224749BD71D2B3A (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticMethodID_m46303AF2AAD855E623DFC9C341E848735B626A77 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethod_m932940262AEC9A8121916054C90D79866D29C547 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethod_m728910FCD2307FC8A06ACA204C6308896E1F9634 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaException__ctor_mD4B5992BB074504F8E86D79EA98752D3CB154541 (AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* __this, String_t* ___message0, String_t* ___javaStackTrace1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteGlobalRef_m0420C00BACE4BD46DD58F8738DFD9EE8189F542A (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteLocalRef_m2A8137D15FDE9F781B13F71348FD5FFA1F9841BD (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::CheckException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546 (const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewString_mF3FC7534344BDF4B4BD2B2DB5442B06E2402B23F (String_t* ___chars0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectClass_mA8282FA341DF231C0ADD07DE0B0D0E5999EA0207 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetFieldID_m8CA4FD910FCC33D2D430E1A897043F9E7CD0DF19 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticFieldID_m2B47B2D935455E73BDA9E9871FD5A6DF5EDD2717 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FromReflectedMethod_m4483E987AEC5B258356E5A89F4C3865573AADFE6 (intptr_t ___refMethod0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObject_mD058F016DBC3D58BF2A64EA84D6943052D01E8B1 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::SetStaticObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticObjectField_mB5FFECBB4D5D963EF0454957F9F4661FFA833555 (intptr_t ___clazz0, intptr_t ___fieldID1, intptr_t ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::SetStaticStringField(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticStringField_mBE032CF9EBDF2E8D724512826F2CA5AFA075C21F (intptr_t ___clazz0, intptr_t ___fieldID1, String_t* ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::SetStaticCharField(System.IntPtr,System.IntPtr,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticCharField_m06825B1CFD06746E47F0192FA4F2FC3D3125E9DA (intptr_t ___clazz0, intptr_t ___fieldID1, Il2CppChar ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::SetStaticDoubleField(System.IntPtr,System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticDoubleField_mE274169EFC6A08190E5D13984398A637500D069E (intptr_t ___clazz0, intptr_t ___fieldID1, double ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::SetStaticFloatField(System.IntPtr,System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticFloatField_mD6B054EE0170B31C26C9A85E49A6A01C60DFE908 (intptr_t ___clazz0, intptr_t ___fieldID1, float ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::SetStaticLongField(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticLongField_mCBC20FE3812F3C3CF5FA0C8CAE96A5A63061437E (intptr_t ___clazz0, intptr_t ___fieldID1, int64_t ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::SetStaticShortField(System.IntPtr,System.IntPtr,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticShortField_m4A4132E557627F1954AE30C36CDD3BB329949C9A (intptr_t ___clazz0, intptr_t ___fieldID1, int16_t ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::SetStaticSByteField(System.IntPtr,System.IntPtr,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticSByteField_mBD550D0F0E9A54FD039C0DE4EE8C21990C5A39C3 (intptr_t ___clazz0, intptr_t ___fieldID1, int8_t ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::SetStaticBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticBooleanField_m487E8387D32B024009C37D9B3A800381A475C659 (intptr_t ___clazz0, intptr_t ___fieldID1, bool ___val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::SetStaticIntField(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticIntField_mD0DDF159656B3F999FFD3BB812E97B3E39F08649 (intptr_t ___clazz0, intptr_t ___fieldID1, int32_t ___val2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticObjectField_m6E2116C7207C76FBFE2D26A376B10C00D9C49190 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNI::GetStaticStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStaticStringField_m6C8673931581ED0646BA2D059C45514ED9D8530F (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNI::GetStaticCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_GetStaticCharField_m70532959E334E3745AEF21C7A77C10221E639F20 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNI::GetStaticDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_GetStaticDoubleField_m538DA725808C50CF8CF77FA6539865F22761FA86 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNI::GetStaticFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_GetStaticFloatField_m33D3E4CC3A6219BD8529ACEF168644650093C326 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNI::GetStaticLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetStaticLongField_m2838DE5CE092E4DCD0BF8C69AE366444117AE22A (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNI::GetStaticShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_GetStaticShortField_mB4FC3F0637204FE8E2466F8E9C5F2AE9C4F53101 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNI::GetStaticSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_GetStaticSByteField_m3F82DDF01CA24E139B8F35C5821C528FB8B04B96 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNI::GetStaticBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_GetStaticBooleanField_m91EE84C77BB16B3ADE727DDCC0F6AC7D262012CA (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::GetStaticIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetStaticIntField_m6AE681D1B1EF0DFE81714A3EB2CBEA6281DF136E (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallStaticVoidMethod_mE1E41BEF150679746147820E058E034CCE9F5FB3 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallStaticObjectMethod_mD81C9407381F719A207F5AD038D38A1DDF181306 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallStaticCharMethod_mC17CFB28DA453858E2D5189C4A93985A5074ECAC (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallStaticDoubleMethod_m9396E74A4DC7D047134A5DCFFBB343651C1C46FC (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallStaticFloatMethod_m50DD95A67820F5A3E3C62556600D985DA697889B (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallStaticLongMethod_m2E00D7592B163630AF5352E89F6180F6B56B8278 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallStaticShortMethod_m7510F3205665CF3134DD91BAB86458A916B4FA67 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNI::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallStaticSByteMethod_m91B3565EC4E89DB5DD6994ED9DC03DC1506D9ABD (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallStaticBooleanMethod_m19B53E56531AEDB6735F1D5651E622E4E823EE92 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallStaticIntMethod_mF3BBC45BEA5618BDE9E8C35CF86E4089CB366FAB (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectField_mDC51440CDD5C41B8BE5AB1FC0DB1D4A75A0B00B6 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNI::GetStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringField_m72B978571BE59E46CE385ABF43D27F4F3AD428DC (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNI::GetCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_GetCharField_m2E6B5082E0CA1EF9F3F3A5F503BB61404DB4B64E (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNI::GetDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_GetDoubleField_m3A52B3C44D03F55A287B38E5069240525EF73A28 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNI::GetFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_GetFloatField_mAFA7BF7AD9A5DCDFCA7847870CA28492776F87FC (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNI::GetLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetLongField_mE133B0457F7DA846EACEE402DA6FBA2F4ABE1904 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNI::GetShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_GetShortField_m1BCF7D56CEB4E2C85C1BE6C1F8BB6F194C437427 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNI::GetSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_GetSByteField_m74A3F36343350116F6A6F04E91117AAB5CBFFD0C (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNI::GetBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_GetBooleanField_mD4A949E18A3AE1F8844105267EBD669EF4992736 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::GetIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetIntField_m429B20FC0C03F9526125AF46A37FE36AEDB27A84 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallVoidMethod_m0B2ED17E5CA42D8D1D503CD329482A5923F1ED67 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallObjectMethod_m059D1BE669D486F2A26B40D6B90BF157B84A3CA3 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallCharMethod_mEF6E65AB2EE0BFAA136878966C42FB21529CB91D (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethod_m88A34942D1206EEE8BEA95475722D2E8FFFFC711 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallFloatMethod_m5BC422FC7D771A08DD18B443CBE3941ACD239FD9 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallLongMethod_m2AF630255CC50CB6A875E4FC1E13023699504C6E (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallShortMethod_m889B967EB2D48E331692B199D2EDABACEC8D5F01 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNI::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallSByteMethod_m45D5ABB4DDFBFEFC6DB132FC2D8463C501F1E4A5 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallBooleanMethod_m6556ACCEDD78DE903521F341072907C4EC90FC96 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethod_m5CE09EA0846BF49ABE3E23BC923710A0F1FF4787 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNI_FromCharArray_mC965E533F95CD2ED4BE5DB99579D6C9723F9FFEF (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNI_FromDoubleArray_m069C4F1F762610BA916F674B3125A68634F27AB8 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNI_FromFloatArray_mDC9E8A87B643677DB1CD67FB90EE6AC30A2352C5 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNI_FromLongArray_mCFB950966DB71AE966C3CE5B8B2FC63BD874B3EC (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNI_FromShortArray_m155B1A19DC1AA710079277D8392ECC84578C095C (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNI_FromByteArray_m2E5209DB888EB1CFD47E732AB5F565CEB351B766 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNI::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNI_FromSByteArray_m46D4FF95707BEC89FB35BADAC0D778D1F9FFE600 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNI_FromBooleanArray_m5EE3946B096CBAFCDED6E33AD0BEDF392CE3C2E3 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNI_FromIntArray_m0139900B65713B2EC09EB03596157D39968E81BC (intptr_t ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToObjectArray_mED4ECAFBCB6517A46658F92FCCF2492ADE08C3B5 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___array0, intptr_t ___arrayClass1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToCharArray_mA2081BFCF1F054F7AF1FF6C02DBCD3DDF842ACD1 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToDoubleArray_m5365EB845635C82BAFC86696C6083F22A79F49EE (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToFloatArray_m805231BFD408148D10ECB4B19935D49FD2E59E73 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToLongArray_mBE89CB90348200EFD4A8939241A030FF7FB3B205 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToShortArray_m5C720FF3C3E8A33E7F0679DEE1CF29279A3F6EE4 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToByteArray_mA20FD81095A5C55B49F5362F586258D6E1361F14 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToSByteArray(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToSByteArray_m5E75BAD1F59BF0993F573E548837DB5BEFD136D0 (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToBooleanArray_m60F3CE17AE326BA244382C39F0FAE9F86DA1F206 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToIntArray_m4F7B434E1B855ED0CCA21E5D3FE94BABCC246805 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetArrayLength_m67AF3E58A9CFD97E7934D2E63D0306865A78DA12 (intptr_t ___array0, const RuntimeMethod* method) ;
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
void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_Multicast(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* currentDelegate = reinterpret_cast<AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_Open(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_OpenStaticInvoker(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_ClosedStaticInvoker(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334 (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_Multicast;
}
// System.Void UnityEngine.AndroidJavaRunnable::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1 (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AndroidJavaException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaException__ctor_mD4B5992BB074504F8E86D79EA98752D3CB154541 (AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* __this, String_t* ___message0, String_t* ___javaStackTrace1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		String_t* L_1 = ___javaStackTrace1;
		__this->___mJavaStackTrace_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mJavaStackTrace_18), (void*)L_1);
		return;
	}
}
// System.String UnityEngine.AndroidJavaException::get_StackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJavaException_get_StackTrace_m28AC922BCC16051CCBA4C7E5F69698264AA7CC27 (AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___mJavaStackTrace_18;
		String_t* L_1;
		L_1 = Exception_get_StackTrace_m601D1BDBA58B7BAB3B750ABC5E72C9449F6FD58E(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
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
// System.Void UnityEngine.GlobalJavaObjectRef::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, intptr_t ___jobject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* G_B2_0 = NULL;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* G_B1_0 = NULL;
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* G_B3_1 = NULL;
	{
		__this->___m_disposed_0 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___jobject0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		intptr_t L_2 = ___jobject0;
		intptr_t L_3;
		L_3 = AndroidJNI_NewGlobalRef_m5F4875C8F71CF25DCC437D2EDB75320C487DB074(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = (0);
		G_B3_1 = G_B2_0;
	}

IL_002a:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_jobject_1 = G_B3_0;
		return;
	}
}
// System.Void UnityEngine.GlobalJavaObjectRef::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef_Finalize_m2EE89F98A391773F885A4A312FD4BD134E0D46D8 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520(__this, NULL);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		return;
	}
}
// System.IntPtr UnityEngine.GlobalJavaObjectRef::op_Implicit(UnityEngine.GlobalJavaObjectRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___obj0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = ___obj0;
		NullCheck(L_0);
		intptr_t L_1 = L_0->___m_jobject_1;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GlobalJavaObjectRef::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->___m_disposed_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0036;
	}

IL_000d:
	{
		__this->___m_disposed_0 = (bool)1;
		intptr_t L_2 = __this->___m_jobject_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_2, (0), NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		intptr_t L_5 = __this->___m_jobject_1;
		AndroidJNISafe_DeleteGlobalRef_mC71D9B4DBED2AB66D49764253BA8DE912F731A40(L_5, NULL);
	}

IL_0036:
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
// System.Void UnityEngine.AndroidJavaRunnableProxy::.ctor(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnableProxy__ctor_mB173256AF7629962B226343C4F6F94FFFF7317C3 (AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1* __this, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___runnable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22225741051C0DE6E1B24FA555DFA8109FC5CA2B);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral22225741051C0DE6E1B24FA555DFA8109FC5CA2B, NULL);
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_0 = ___runnable0;
		__this->___mRunnable_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRunnable_4), (void*)L_0);
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
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___javaInterface0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, L_0, NULL);
		AndroidJavaProxy__ctor_mFA05DF6B31FC284C65D378C02A2A34F277DFE6E5(__this, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaProxy::.ctor(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_mFA05DF6B31FC284C65D378C02A2A34F277DFE6E5 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___proxyObject_1 = (0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ___javaInterface0;
		__this->___javaInterface_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___javaInterface_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaProxy::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy_Finalize_m6E4C294F2117D7A07E82A315081C9239AFA217E8 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = __this->___proxyObject_1;
			AndroidJNISafe_DeleteWeakGlobalRef_m9B39A30D764938DC4C8D526321520701D77D34A7(L_0, NULL);
			goto IL_0018;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0018:
	{
		return;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_Invoke_m9D765F3E7DC37C5CB14C4884F2873B48D2F96BFB (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	int32_t V_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	MethodInfo_t* V_6 = NULL;
	bool V_7 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_8 = NULL;
	TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* V_9 = NULL;
	Exception_t* V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B2_1 = NULL;
	Type_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B4_2 = NULL;
	Type_t* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_3 = NULL;
	Type_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_3 = NULL;
	String_t* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	Type_t* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_3 = NULL;
	intptr_t G_B22_4;
	memset((&G_B22_4), 0, sizeof(G_B22_4));
	Type_t* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_3 = NULL;
	intptr_t G_B21_4;
	memset((&G_B21_4), 0, sizeof(G_B21_4));
	String_t* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_3 = NULL;
	intptr_t G_B23_4;
	memset((&G_B23_4), 0, sizeof(G_B23_4));
	{
		V_0 = (Exception_t*)NULL;
		V_1 = ((int32_t)60);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		NullCheck(L_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_2 = L_1;
		V_4 = 0;
		goto IL_0039;
	}

IL_0014:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = V_2;
		int32_t L_3 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args1;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		G_B2_0 = L_3;
		G_B2_1 = L_2;
		if (!L_7)
		{
			G_B3_0 = L_3;
			G_B3_1 = L_2;
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_11, NULL);
		G_B4_0 = L_12;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0032;
	}

IL_0028:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0032:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (Type_t*)G_B4_0);
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0039:
	{
		int32_t L_16 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = ___args1;
		NullCheck(L_17);
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0014;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		{
			Type_t* L_19;
			L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
			String_t* L_20 = ___methodName0;
			int32_t L_21 = V_1;
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22 = V_2;
			NullCheck(L_19);
			MethodInfo_t* L_23;
			L_23 = Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562(L_19, L_20, L_21, (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_22, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
			V_6 = L_23;
			MethodInfo_t* L_24 = V_6;
			V_7 = (bool)((!(((RuntimeObject*)(MethodInfo_t*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_25 = V_7;
			if (!L_25)
			{
				goto IL_007a_1;
			}
		}
		{
			MethodInfo_t* L_26 = V_6;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = ___args1;
			NullCheck(L_26);
			RuntimeObject* L_28;
			L_28 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_26, __this, L_27, NULL);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29;
			L_29 = _AndroidJNIHelper_Box_mB45F80703BDE58472E812A2122DC70CAFC4E5023(L_28, NULL);
			V_8 = L_29;
			goto IL_0186;
		}

IL_007a_1:
		{
			goto IL_0094;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007d;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_007d:
	{// begin catch(System.Reflection.TargetInvocationException)
		V_9 = ((TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*)IL2CPP_GET_ACTIVE_EXCEPTION(TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*));
		TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_30 = V_9;
		NullCheck(L_30);
		Exception_t* L_31;
		L_31 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_30, NULL);
		V_0 = L_31;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0094;
	}// end catch (depth: 1)

CATCH_008b:
	{// begin catch(System.Exception)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_32 = V_10;
		V_0 = L_32;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0094;
	}// end catch (depth: 1)

IL_0094:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = ___args1;
		NullCheck(L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)));
		V_3 = L_34;
		V_11 = 0;
		goto IL_00b5;
	}

IL_00a2:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = V_3;
		int32_t L_36 = V_11;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_37 = V_2;
		int32_t L_38 = V_11;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Type_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_41);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (String_t*)L_41);
		int32_t L_42 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00b5:
	{
		int32_t L_43 = V_11;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_44 = V_2;
		NullCheck(L_44);
		V_12 = (bool)((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))? 1 : 0);
		bool L_45 = V_12;
		if (L_45)
		{
			goto IL_00a2;
		}
	}
	{
		Exception_t* L_46 = V_0;
		V_13 = (bool)((!(((RuntimeObject*)(Exception_t*)L_46) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_47 = V_13;
		if (!L_47)
		{
			goto IL_011d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
		Type_t* L_50;
		L_50 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		Type_t* L_51 = L_50;
		G_B17_0 = L_51;
		G_B17_1 = 0;
		G_B17_2 = L_49;
		G_B17_3 = L_49;
		if (L_51)
		{
			G_B18_0 = L_51;
			G_B18_1 = 0;
			G_B18_2 = L_49;
			G_B18_3 = L_49;
			goto IL_00e1;
		}
	}
	{
		G_B19_0 = ((String_t*)(NULL));
		G_B19_1 = G_B17_1;
		G_B19_2 = G_B17_2;
		G_B19_3 = G_B17_3;
		goto IL_00e6;
	}

IL_00e1:
	{
		NullCheck(G_B18_0);
		String_t* L_52;
		L_52 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B18_0);
		G_B19_0 = L_52;
		G_B19_1 = G_B18_1;
		G_B19_2 = G_B18_2;
		G_B19_3 = G_B18_3;
	}

IL_00e6:
	{
		NullCheck(G_B19_2);
		ArrayElementTypeCheck (G_B19_2, G_B19_0);
		(G_B19_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B19_1), (String_t*)G_B19_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = G_B19_3;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_53;
		String_t* L_55 = ___methodName0;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_54;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73)));
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = L_56;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = V_3;
		String_t* L_59;
		L_59 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB)), L_58, NULL);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_59);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_59);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = L_57;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)));
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)));
		String_t* L_61;
		L_61 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_60, NULL);
		Exception_t* L_62 = V_0;
		TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_63 = (TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var)));
		NullCheck(L_63);
		TargetInvocationException__ctor_mEE5FEDD311B4396452D5AFF140B2D79907447F94(L_63, L_61, L_62, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaProxy_Invoke_m9D765F3E7DC37C5CB14C4884F2873B48D2F96BFB_RuntimeMethod_var)));
	}

IL_011d:
	{
		intptr_t L_64;
		L_64 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_65;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		Type_t* L_68;
		L_68 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		Type_t* L_69 = L_68;
		G_B21_0 = L_69;
		G_B21_1 = 1;
		G_B21_2 = L_67;
		G_B21_3 = L_67;
		G_B21_4 = L_64;
		if (L_69)
		{
			G_B22_0 = L_69;
			G_B22_1 = 1;
			G_B22_2 = L_67;
			G_B22_3 = L_67;
			G_B22_4 = L_64;
			goto IL_0140;
		}
	}
	{
		G_B23_0 = ((String_t*)(NULL));
		G_B23_1 = G_B21_1;
		G_B23_2 = G_B21_2;
		G_B23_3 = G_B21_3;
		G_B23_4 = G_B21_4;
		goto IL_0145;
	}

IL_0140:
	{
		NullCheck(G_B22_0);
		String_t* L_70;
		L_70 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B22_0);
		G_B23_0 = L_70;
		G_B23_1 = G_B22_1;
		G_B23_2 = G_B22_2;
		G_B23_3 = G_B22_3;
		G_B23_4 = G_B22_4;
	}

IL_0145:
	{
		NullCheck(G_B23_2);
		ArrayElementTypeCheck (G_B23_2, G_B23_0);
		(G_B23_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B23_1), (String_t*)G_B23_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = G_B23_3;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		String_t* L_73 = ___methodName0;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_73);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_72;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_74;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = V_3;
		String_t* L_77;
		L_77 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_76, NULL);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_77);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_77);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = L_75;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_79;
		L_79 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_78, NULL);
		Exception_t* L_80 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_80);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_80, L_79, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		AndroidReflection_SetNativeExceptionOnProxy_m3AD392FDF28A10F33D16C0BE27A12D31B2C0883F(G_B23_4, L_80, (bool)1, NULL);
		V_8 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		goto IL_0186;
	}

IL_0186:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_81 = V_8;
		return L_81;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,UnityEngine.AndroidJavaObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_Invoke_mCAE9C5E669AD50DE372494E12224FF1F31A43F1D (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___methodName0, AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* ___javaArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_5 = NULL;
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_0 = ___javaArgs1;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0046;
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3 = V_1;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_4 = ___javaArgs1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RuntimeObject* L_8;
		L_8 = _AndroidJNIHelper_Unbox_mD43DC20EB0E844E2E3E9373EDDB825B5E61FC0BB(L_7, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = (bool)((((int32_t)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)IsInstClass((RuntimeObject*)L_12, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0041;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_14 = ___javaArgs1;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0040;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_19 = ___javaArgs1;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_22, NULL);
	}

IL_0040:
	{
	}

IL_0041:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0046:
	{
		int32_t L_24 = V_1;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_25 = ___javaArgs1;
		NullCheck(L_25);
		V_4 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_27 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29;
		L_29 = VirtualFuncInvoker2< AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(4 /* UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,System.Object[]) */, __this, L_27, L_28);
		V_5 = L_29;
		goto IL_005e;
	}

IL_005e:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = V_5;
		return L_30;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::GetProxyObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_GetProxyObject_mBFD2FBEF9ED9D4AE23DECF5836E5C73A886E2109 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) 
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		intptr_t L_0;
		L_0 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(__this, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB1EEE323CA333E5DB2871794F1E9094E488682E2(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJavaProxy::GetRawProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		V_0 = (0);
		intptr_t L_0 = __this->___proxyObject_1;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		intptr_t L_3 = __this->___proxyObject_1;
		intptr_t L_4;
		L_4 = AndroidJNI_NewLocalRef_mA95E1CDBA47E9CEC4D55BBA178F0ACF4219F6E29(L_3, NULL);
		V_0 = L_4;
		intptr_t L_5 = V_0;
		bool L_6;
		L_6 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_5, (0), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		intptr_t L_8 = __this->___proxyObject_1;
		AndroidJNI_DeleteWeakGlobalRef_m23C9808936212AC528658CB4989F15580BB0C734(L_8, NULL);
		__this->___proxyObject_1 = (0);
	}

IL_0050:
	{
	}

IL_0051:
	{
		intptr_t L_9 = V_0;
		bool L_10;
		L_10 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_9, (0), NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		intptr_t L_12;
		L_12 = AndroidJNIHelper_CreateJavaProxy_m2694F6C774901F6F33044BC41DA29C7CA3F9C1F5(__this, NULL);
		V_0 = L_12;
		intptr_t L_13 = V_0;
		intptr_t L_14;
		L_14 = AndroidJNI_NewWeakGlobalRef_m74933FB5C1E361F566A96B25CF096C770860CD94(L_13, NULL);
		__this->___proxyObject_1 = L_14;
	}

IL_0075:
	{
		intptr_t L_15 = V_0;
		V_4 = L_15;
		goto IL_007a;
	}

IL_007a:
	{
		intptr_t L_16 = V_4;
		return L_16;
	}
}
// System.Void UnityEngine.AndroidJavaProxy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__cctor_mB40E77A0644729A8A761CC80A02E99020DD9790A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27F2FC8F8A0DFFAC96353D8AC1CDD811C4A7644B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7BDDC7501EECF3151484AEBEF8627D03E365077);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC4A16FF7AEE06FF380F93BBF26ACF1014CFB82);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = AndroidJNISafe_FindClass_m921B6BE5C8F1F1A4207761AD07A57C0D5F599DDE(_stringLiteralA7BDDC7501EECF3151484AEBEF8627D03E365077, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_1, L_0, NULL);
		((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_JavaLangSystemClass_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_JavaLangSystemClass_2), (void*)L_1);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_2 = ((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_JavaLangSystemClass_2;
		intptr_t L_3;
		L_3 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_2, NULL);
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_3, _stringLiteral27F2FC8F8A0DFFAC96353D8AC1CDD811C4A7644B, _stringLiteralAFC4A16FF7AEE06FF380F93BBF26ACF1014CFB82, (bool)1, NULL);
		((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_HashCodeMethodID_3 = L_4;
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
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	{
		AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04(__this, NULL);
		String_t* L_0 = ___className0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		AndroidJavaObject__AndroidJavaObject_m1284CB7198514B8C06A2BF794ACDC909DC26443F(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.AndroidJavaObject::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A(__this, L_0, L_1, NULL);
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = AndroidJavaObject__GetRawObject_mC5B8B60BEF515F5EE2A113D60991A433DA740C69(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = AndroidJavaObject__GetRawClass_m470EAEBF8B0BD365FD13F1C6F55119836452FDFA(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AndroidJavaObject::DebugPrint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_DebugPrint_m047934BF3D1E6676FDDBDA038E1AF387C5413533 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))->___enableDebugPrints_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0016;
	}

IL_000f:
	{
		String_t* L_2 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::_AndroidJavaObject(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__AndroidJavaObject_m1284CB7198514B8C06A2BF794ACDC909DC26443F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA38BB5AAC6BE96538C93F39E86053E620B41407D);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		String_t* L_0 = ___className0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA38BB5AAC6BE96538C93F39E86053E620B41407D, L_0, NULL);
		AndroidJavaObject_DebugPrint_m047934BF3D1E6676FDDBDA038E1AF387C5413533(__this, L_1, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_4;
	}

IL_0023:
	{
		String_t* L_5 = ___className0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_5, ((int32_t)46), ((int32_t)47), NULL);
		intptr_t L_7;
		L_7 = AndroidJNISafe_FindClass_m921B6BE5C8F1F1A4207761AD07A57C0D5F599DDE(L_6, NULL);
		V_0 = L_7;
		intptr_t L_8 = V_0;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_9 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_9, L_8, NULL);
		__this->___m_jclass_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jclass_2), (void*)L_9);
		intptr_t L_10 = V_0;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_10, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_12;
		L_12 = AndroidJNIHelper_CreateJNIArgArray_mCA21BB6EB162E1E77E8F95812BD662EA078EDDBF(L_11, NULL);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008c:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_14 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_m287B584251A89771CD7C767119A350BD6DDACCAB(L_13, L_14, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_15 = __this->___m_jclass_2;
			intptr_t L_16;
			L_16 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_15, NULL);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = ___args1;
			intptr_t L_18;
			L_18 = AndroidJNIHelper_GetConstructorID_m06AB8A133FD78AE60E6B5871CBD24609B9444ED7(L_16, L_17, NULL);
			V_3 = L_18;
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_19 = __this->___m_jclass_2;
			intptr_t L_20;
			L_20 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_19, NULL);
			intptr_t L_21 = V_3;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_22 = V_1;
			intptr_t L_23;
			L_23 = AndroidJNISafe_NewObject_mCA783442B4DE3E0071D2C71DE69A655EF8538E2C(L_20, L_21, L_22, NULL);
			V_4 = L_23;
			intptr_t L_24 = V_4;
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
			NullCheck(L_25);
			GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_25, L_24, NULL);
			__this->___m_jobject_1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jobject_1), (void*)L_25);
			intptr_t L_26 = V_4;
			AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_26, NULL);
			goto IL_0097;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___jobject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04(__this, NULL);
		intptr_t L_0 = ___jobject0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA39614FE650CC59501DA62392479CBAD5E59947A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B_RuntimeMethod_var)));
	}

IL_0023:
	{
		intptr_t L_4 = ___jobject0;
		intptr_t L_5;
		L_5 = AndroidJNISafe_GetObjectClass_m78626C2B107D46FA9276B6FD32D746EEB81E8D2D(L_4, NULL);
		V_0 = L_5;
		intptr_t L_6 = ___jobject0;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_7 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_7, L_6, NULL);
		__this->___m_jobject_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jobject_1), (void*)L_7);
		intptr_t L_8 = V_0;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_9 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_9, L_8, NULL);
		__this->___m_jclass_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jclass_2), (void*)L_9);
		intptr_t L_10 = V_0;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_10, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Finalize_m87374EE46B27BE3559CACED8A1B62475200AB5AA (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.AndroidJavaObject::Dispose(System.Boolean) */, __this, (bool)1);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m87886676A84FA079C0FE45E6C31D790D764652BE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jobject_1;
		V_0 = (bool)((!(((RuntimeObject*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_2 = __this->___m_jobject_1;
		NullCheck(L_2);
		GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520(L_2, NULL);
		__this->___m_jobject_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jobject_1), (void*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL);
	}

IL_0023:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = __this->___m_jclass_2;
		V_1 = (bool)((!(((RuntimeObject*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_5 = __this->___m_jclass_2;
		NullCheck(L_5);
		GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520(L_5, NULL);
		__this->___m_jclass_2 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jclass_2), (void*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::_Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = __this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = AndroidJNIHelper_GetMethodID_mC54EF67EA8929F905AA8ACC8A498F21B548E0964(L_4, L_5, L_6, (bool)0, NULL);
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mCA21BB6EB162E1E77E8F95812BD662EA078EDDBF(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_m287B584251A89771CD7C767119A350BD6DDACCAB(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_12 = __this->___m_jobject_1;
			intptr_t L_13;
			L_13 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_12, NULL);
			intptr_t L_14 = V_0;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_15 = V_1;
			AndroidJNISafe_CallVoidMethod_m37B8331F4A139234C98323FE19FAC5F3E29EE743(L_13, L_14, L_15, NULL);
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaObject::AndroidJavaObjectDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB1EEE323CA333E5DB2871794F1E9094E488682E2 (intptr_t ___jobject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				intptr_t L_0 = ___jobject0;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_1 = ___jobject0;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_2, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::AndroidJavaClassDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m54CF986C577935C4B4FDC72612CCE0F13079AD08 (intptr_t ___jclass0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				intptr_t L_0 = ___jclass0;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_1 = ___jclass0;
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_2, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawObject_mC5B8B60BEF515F5EE2A113D60991A433DA740C69 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jobject_1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_1 = __this->___m_jobject_1;
		intptr_t L_2;
		L_2 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (0);
	}

IL_001b:
	{
		V_0 = G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawClass_m470EAEBF8B0BD365FD13F1C6F55119836452FDFA (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass_2;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_2 = V_0;
		return L_2;
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
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) 
{
	{
		AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04(__this, NULL);
		String_t* L_0 = ___className0;
		AndroidJavaClass__AndroidJavaClass_mF481A9584D78F32C64219FDA49CB84B6F0A017DD(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaClass::_AndroidJavaClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__AndroidJavaClass_mF481A9584D78F32C64219FDA49CB84B6F0A017DD (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204582C83E45E7B0A9BD3FA17ADE77EFC4EC4D6A);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___className0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral204582C83E45E7B0A9BD3FA17ADE77EFC4EC4D6A, L_0, NULL);
		AndroidJavaObject_DebugPrint_m047934BF3D1E6676FDDBDA038E1AF387C5413533(__this, L_1, NULL);
		String_t* L_2 = ___className0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_2, ((int32_t)46), ((int32_t)47), NULL);
		intptr_t L_4;
		L_4 = AndroidJNISafe_FindClass_m921B6BE5C8F1F1A4207761AD07A57C0D5F599DDE(L_3, NULL);
		V_0 = L_4;
		intptr_t L_5 = V_0;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_6 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_6, L_5, NULL);
		((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jclass_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jclass_2), (void*)L_6);
		((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jobject_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jobject_1), (void*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL);
		intptr_t L_7 = V_0;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_7, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, intptr_t ___jclass0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04(__this, NULL);
		intptr_t L_0 = ___jclass0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral65572413F78A98D745AF7C2CCAF152BD2C90FF88)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0_RuntimeMethod_var)));
	}

IL_0023:
	{
		intptr_t L_4 = ___jclass0;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_5 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_5, L_4, NULL);
		((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jclass_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jclass_2), (void*)L_5);
		((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jobject_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jobject_1), (void*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL);
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
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D (Type_t* ___t0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Type_t* L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.AndroidReflection::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_mE4CCA11A87A7E49591786C98FFE239D6EA66F8C5 (Type_t* ___t0, Type_t* ___from1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Type_t* L_0 = ___t0;
		Type_t* L_1 = ___from1;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetStaticMethodID(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetStaticMethodID_mA7CC0C6E85BD03EA4BFDA8FAF883A4FF9B721C3E (String_t* ___clazz0, String_t* ___methodName1, String_t* ___signature2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___clazz0;
		intptr_t L_1;
		L_1 = AndroidJNISafe_FindClass_m921B6BE5C8F1F1A4207761AD07A57C0D5F599DDE(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0014:
			{// begin finally (depth: 1)
				intptr_t L_2 = V_0;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_3 = V_0;
			String_t* L_4 = ___methodName1;
			String_t* L_5 = ___signature2;
			intptr_t L_6;
			L_6 = AndroidJNISafe_GetStaticMethodID_mDD304107A2DCF7C4FFFC6E820361618693FCD8C7(L_3, L_4, L_5, NULL);
			V_1 = L_6;
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		intptr_t L_7 = V_1;
		return L_7;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetMethodID(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodID_m7773DFE09DED5E42B5E6A607A4318318141104E5 (String_t* ___clazz0, String_t* ___methodName1, String_t* ___signature2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___clazz0;
		intptr_t L_1;
		L_1 = AndroidJNISafe_FindClass_m921B6BE5C8F1F1A4207761AD07A57C0D5F599DDE(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0014:
			{// begin finally (depth: 1)
				intptr_t L_2 = V_0;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_3 = V_0;
			String_t* L_4 = ___methodName1;
			String_t* L_5 = ___signature2;
			intptr_t L_6;
			L_6 = AndroidJNISafe_GetMethodID_m4E480BAEFB37F467848EC9074C6917A2D8E853DC(L_3, L_4, L_5, NULL);
			V_1 = L_6;
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		intptr_t L_7 = V_1;
		return L_7;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetConstructorMember(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetConstructorMember_m79D508363805E1AD5FC551644355A1DCF5A01A8A (intptr_t ___jclass0, String_t* ___signature1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
				NullCheck(L_1);
				intptr_t L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
			NullCheck(L_3);
			intptr_t L_4 = ___jclass0;
			((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_4;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = ___signature1;
			intptr_t L_7;
			L_7 = AndroidJNISafe_NewString_m6D6411F7DACFD383054457D88C0F0F1F8AE0CFB9(L_6, NULL);
			((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8 = L_7;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_8 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
			intptr_t L_9;
			L_9 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_8, NULL);
			intptr_t L_10 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetConstructorID_1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_0;
			intptr_t L_12;
			L_12 = AndroidJNISafe_CallStaticObjectMethod_mFF379E5F210AF38781F1FB59667AC39C4CFA5966(L_9, L_10, L_11, NULL);
			V_1 = L_12;
			goto IL_0055;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		intptr_t L_13 = V_1;
		return L_13;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetMethodMember(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodMember_m6EAFD27B17549F9EF623F5E6341DCAC9E33528CE (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
				NullCheck(L_1);
				intptr_t L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_2, NULL);
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
				NullCheck(L_3);
				intptr_t L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_4, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = V_0;
			NullCheck(L_5);
			intptr_t L_6 = ___jclass0;
			((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_6;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = ___methodName1;
			intptr_t L_9;
			L_9 = AndroidJNISafe_NewString_m6D6411F7DACFD383054457D88C0F0F1F8AE0CFB9(L_8, NULL);
			((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8 = L_9;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_10 = V_0;
			NullCheck(L_10);
			String_t* L_11 = ___signature2;
			intptr_t L_12;
			L_12 = AndroidJNISafe_NewString_m6D6411F7DACFD383054457D88C0F0F1F8AE0CFB9(L_11, NULL);
			((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___l_8 = L_12;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_13 = V_0;
			NullCheck(L_13);
			bool L_14 = ___isStatic3;
			((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___z_0 = L_14;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_15 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
			intptr_t L_16;
			L_16 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_15, NULL);
			intptr_t L_17 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetMethodID_2;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_18 = V_0;
			intptr_t L_19;
			L_19 = AndroidJNISafe_CallStaticObjectMethod_mFF379E5F210AF38781F1FB59667AC39C4CFA5966(L_16, L_17, L_18, NULL);
			V_1 = L_19;
			goto IL_0086;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		intptr_t L_20 = V_1;
		return L_20;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetFieldMember(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldMember_m66A8627EBBE89FFAF125264309A85E5001FCEEC3 (intptr_t ___jclass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
				NullCheck(L_1);
				intptr_t L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_2, NULL);
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
				NullCheck(L_3);
				intptr_t L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_4, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = V_0;
			NullCheck(L_5);
			intptr_t L_6 = ___jclass0;
			((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_6;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = ___fieldName1;
			intptr_t L_9;
			L_9 = AndroidJNISafe_NewString_m6D6411F7DACFD383054457D88C0F0F1F8AE0CFB9(L_8, NULL);
			((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8 = L_9;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_10 = V_0;
			NullCheck(L_10);
			String_t* L_11 = ___signature2;
			intptr_t L_12;
			L_12 = AndroidJNISafe_NewString_m6D6411F7DACFD383054457D88C0F0F1F8AE0CFB9(L_11, NULL);
			((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___l_8 = L_12;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_13 = V_0;
			NullCheck(L_13);
			bool L_14 = ___isStatic3;
			((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___z_0 = L_14;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_15 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
			intptr_t L_16;
			L_16 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_15, NULL);
			intptr_t L_17 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetFieldID_3;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_18 = V_0;
			intptr_t L_19;
			L_19 = AndroidJNISafe_CallStaticObjectMethod_mFF379E5F210AF38781F1FB59667AC39C4CFA5966(L_16, L_17, L_18, NULL);
			V_1 = L_19;
			goto IL_0086;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		intptr_t L_20 = V_1;
		return L_20;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetFieldClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldClass_m394CE3986B992FB51CDA6F18031A4D6390956E00 (intptr_t ___field0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___field0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_FieldGetDeclaringClass_7;
		intptr_t L_2;
		L_2 = AndroidJNISafe_CallObjectMethod_m220EBB62A14A40DD5693A48E5787DE4636D051EA(L_0, L_1, (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)NULL, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.AndroidReflection::GetFieldSignature(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidReflection_GetFieldSignature_m9684AAB2E8AAB2DA4CE2A9DCC18C9088C5E82194 (intptr_t ___field0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
		NullCheck(L_1);
		intptr_t L_2 = ___field0;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_2;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_3, NULL);
		intptr_t L_5 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetFieldSignature_4;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = V_0;
		String_t* L_7;
		L_7 = AndroidJNISafe_CallStaticStringMethod_mC5449583711986CFF9CCDAD3F8058D9842229B88(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_002d;
	}

IL_002d:
	{
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::NewProxyInstance(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_NewProxyInstance_m06C9BF6A4805DDEED85EC565CDED394E15F2E793 (intptr_t ___delegateHandle0, intptr_t ___interfaze1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&___delegateHandle0), NULL);
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___j_5 = L_2;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
		NullCheck(L_3);
		intptr_t L_4 = ___interfaze1;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8 = L_4;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_5 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
		intptr_t L_6;
		L_6 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_5, NULL);
		intptr_t L_7 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperNewProxyInstance_5;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_8 = V_0;
		intptr_t L_9;
		L_9 = AndroidJNISafe_CallStaticObjectMethod_mFF379E5F210AF38781F1FB59667AC39C4CFA5966(L_6, L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_0040;
	}

IL_0040:
	{
		intptr_t L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.AndroidReflection::SetNativeExceptionOnProxy(System.IntPtr,System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReflection_SetNativeExceptionOnProxy_m3AD392FDF28A10F33D16C0BE27A12D31B2C0883F (intptr_t ___proxy0, Exception_t* ___e1, bool ___methodNotFound2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
		NullCheck(L_1);
		intptr_t L_2 = ___proxy0;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_2;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
		NullCheck(L_3);
		Exception_t* L_4 = ___e1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5;
		L_5 = GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6(L_4, NULL);
		intptr_t L_6;
		L_6 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_5, NULL);
		V_1 = L_6;
		int64_t L_7;
		L_7 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___j_5 = L_7;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = ___methodNotFound2;
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___z_0 = L_9;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m16AE2CD44F8CDE4667F4DA84D2567582544D4F4E(L_10, NULL);
		intptr_t L_12 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperSetNativeExceptionOnProxy_6;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_13 = V_0;
		AndroidJNISafe_CallStaticVoidMethod_m965D8C47FDF1388EA6192108063B129C870B382F(L_11, L_12, L_13, NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReflection__cctor_m8CAB25F51D629BA5AC9986703DE25F9C93E8A454 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29533AC1D363321ECFB96B50441B9418763D4176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42B0C97654CB0F536C2C643B8D4D9C2C7B8D71AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral721D70DB4B32A2AEDC1FCA8FD3B608ED50CE0156);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7300AD57DB611A5D85FBD10E00B41B82F2DC677F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77E7609799DC0A299115C3AE174DEE8AEDDCBC05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95743D14EBFB666745B1AE894875A26AD08F3552);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral997CC228CD49CB51A21F3301055CBEE380042055);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2267B1424757597EAEC3CB1B8269FF078CC487C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD2FC71AE60261B73977F0195D3744E79CCC12B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB40004C0135CEF645A079B4A245A04F302EA80F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE3E2515DEF82B38D4ACFEBDC9D69E894CA05BBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE42F595933CDB601C52327F32C83017C908C430);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE46DFB424F1D16B497976AB817F603BF3B170AF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0C6BCBD6A21B83CD30A85140E181D764C4E1198);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF76791D0FE1272AD994E3611223AB6D219F5FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = AndroidJNISafe_FindClass_m921B6BE5C8F1F1A4207761AD07A57C0D5F599DDE(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_1, L_0, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0), (void*)L_1);
		intptr_t L_2;
		L_2 = AndroidReflection_GetStaticMethodID_mA7CC0C6E85BD03EA4BFDA8FAF883A4FF9B721C3E(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteralF0C6BCBD6A21B83CD30A85140E181D764C4E1198, _stringLiteralB40004C0135CEF645A079B4A245A04F302EA80F2, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetConstructorID_1 = L_2;
		intptr_t L_3;
		L_3 = AndroidReflection_GetStaticMethodID_mA7CC0C6E85BD03EA4BFDA8FAF883A4FF9B721C3E(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral95743D14EBFB666745B1AE894875A26AD08F3552, _stringLiteral721D70DB4B32A2AEDC1FCA8FD3B608ED50CE0156, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetMethodID_2 = L_3;
		intptr_t L_4;
		L_4 = AndroidReflection_GetStaticMethodID_mA7CC0C6E85BD03EA4BFDA8FAF883A4FF9B721C3E(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral7300AD57DB611A5D85FBD10E00B41B82F2DC677F, _stringLiteralCE42F595933CDB601C52327F32C83017C908C430, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetFieldID_3 = L_4;
		intptr_t L_5;
		L_5 = AndroidReflection_GetStaticMethodID_mA7CC0C6E85BD03EA4BFDA8FAF883A4FF9B721C3E(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral997CC228CD49CB51A21F3301055CBEE380042055, _stringLiteral42B0C97654CB0F536C2C643B8D4D9C2C7B8D71AF, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetFieldSignature_4 = L_5;
		intptr_t L_6;
		L_6 = AndroidReflection_GetStaticMethodID_mA7CC0C6E85BD03EA4BFDA8FAF883A4FF9B721C3E(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral77E7609799DC0A299115C3AE174DEE8AEDDCBC05, _stringLiteralA2267B1424757597EAEC3CB1B8269FF078CC487C, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperNewProxyInstance_5 = L_6;
		intptr_t L_7;
		L_7 = AndroidReflection_GetStaticMethodID_mA7CC0C6E85BD03EA4BFDA8FAF883A4FF9B721C3E(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteralE46DFB424F1D16B497976AB817F603BF3B170AF9, _stringLiteralFFF76791D0FE1272AD994E3611223AB6D219F5FC, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperSetNativeExceptionOnProxy_6 = L_7;
		intptr_t L_8;
		L_8 = AndroidReflection_GetMethodID_m7773DFE09DED5E42B5E6A607A4318318141104E5(_stringLiteralAD2FC71AE60261B73977F0195D3744E79CCC12B9, _stringLiteral29533AC1D363321ECFB96B50441B9418763D4176, _stringLiteralBE3E2515DEF82B38D4ACFEBDC9D69E894CA05BBE, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_FieldGetDeclaringClass_7 = L_8;
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
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaProxy(System.IntPtr,UnityEngine.AndroidJavaProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaProxy_m6EB0D9FF190B75B8E49397619D1925F442EEBB8A (intptr_t ___delegateHandle0, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___proxy1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___delegateHandle0;
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_1 = ___proxy1;
		NullCheck(L_1);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = L_1->___javaInterface_0;
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = AndroidReflection_NewProxyInstance_m06C9BF6A4805DDEED85EC565CDED394E15F2E793(L_0, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaRunnable_m247E2AE8370951BEA9D154FC5AC04BE67F222CF1 (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___jrunnable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_0 = ___jrunnable0;
		AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1* L_1 = (AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1*)il2cpp_codegen_object_new(AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaRunnableProxy__ctor_mB173256AF7629962B226343C4F6F94FFFF7317C3(L_1, L_0, NULL);
		intptr_t L_2;
		L_2 = AndroidJNIHelper_CreateJavaProxy_m2694F6C774901F6F33044BC41DA29C7CA3F9C1F5(L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::InvokeJavaProxyMethod(UnityEngine.AndroidJavaProxy,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_InvokeJavaProxyMethod_m1DB26565DC2BA3FD2AAA889D1EE72979E78EBD71 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___proxy0, intptr_t ___jmethodName1, intptr_t ___jargs2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_6 = NULL;
	bool V_7 = false;
	intptr_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B6_0 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* G_B5_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* G_B7_2 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			V_0 = 0;
			intptr_t L_0 = ___jargs2;
			bool L_1;
			L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
			V_2 = L_1;
			bool L_2 = V_2;
			if (!L_2)
			{
				goto IL_001c_1;
			}
		}
		{
			intptr_t L_3 = ___jargs2;
			int32_t L_4;
			L_4 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_3, NULL);
			V_0 = L_4;
		}

IL_001c_1:
		{
			int32_t L_5 = V_0;
			AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_6 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_5);
			V_1 = L_6;
			V_3 = 0;
			goto IL_0051_1;
		}

IL_0027_1:
		{
			intptr_t L_7 = ___jargs2;
			int32_t L_8 = V_3;
			intptr_t L_9;
			L_9 = AndroidJNISafe_GetObjectArrayElement_m515AF7717FD44C40A5FFFD6E50DFCD65A35B8FF5(L_7, L_8, NULL);
			V_4 = L_9;
			AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_10 = V_1;
			int32_t L_11 = V_3;
			intptr_t L_12 = V_4;
			bool L_13;
			L_13 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_12, (0), NULL);
			G_B5_0 = L_11;
			G_B5_1 = L_10;
			if (L_13)
			{
				G_B6_0 = L_11;
				G_B6_1 = L_10;
				goto IL_0044_1;
			}
		}
		{
			G_B7_0 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)(NULL));
			G_B7_1 = G_B5_0;
			G_B7_2 = G_B5_1;
			goto IL_004b_1;
		}

IL_0044_1:
		{
			intptr_t L_14 = V_4;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
			NullCheck(L_15);
			AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_15, L_14, NULL);
			G_B7_0 = L_15;
			G_B7_1 = G_B6_0;
			G_B7_2 = G_B6_1;
		}

IL_004b_1:
		{
			NullCheck(G_B7_2);
			ArrayElementTypeCheck (G_B7_2, G_B7_0);
			(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)G_B7_0);
			int32_t L_16 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		}

IL_0051_1:
		{
			int32_t L_17 = V_3;
			int32_t L_18 = V_0;
			V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
			bool L_19 = V_5;
			if (L_19)
			{
				goto IL_0027_1;
			}
		}
		{
			AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_20 = ___proxy0;
			intptr_t L_21 = ___jmethodName1;
			String_t* L_22;
			L_22 = AndroidJNI_GetStringChars_m462C62C322F38797F05A818CEF5C8D235F1F6714(L_21, NULL);
			AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_23 = V_1;
			NullCheck(L_20);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24;
			L_24 = VirtualFuncInvoker2< AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* >::Invoke(5 /* UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,UnityEngine.AndroidJavaObject[]) */, L_20, L_22, L_23);
			V_6 = L_24;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_008f_1:
				{// begin finally (depth: 2)
					{
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = V_6;
						if (!L_25)
						{
							goto IL_009b_1;
						}
					}
					{
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26 = V_6;
						NullCheck(L_26);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_26);
					}

IL_009b_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_27 = V_6;
					V_7 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_27) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
					bool L_28 = V_7;
					if (!L_28)
					{
						goto IL_007f_2;
					}
				}
				{
					V_8 = (0);
					goto IL_00b7;
				}

IL_007f_2:
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = V_6;
					NullCheck(L_29);
					intptr_t L_30;
					L_30 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_29, NULL);
					intptr_t L_31;
					L_31 = AndroidJNI_NewLocalRef_mA95E1CDBA47E9CEC4D55BBA178F0ACF4219F6E29(L_30, NULL);
					V_8 = L_31;
					goto IL_00b7;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009c;
		}
		throw e;
	}

CATCH_009c:
	{// begin catch(System.Exception)
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_32 = ___proxy0;
		NullCheck(L_32);
		intptr_t L_33;
		L_33 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(L_32, NULL);
		Exception_t* L_34 = V_9;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var)));
		AndroidReflection_SetNativeExceptionOnProxy_m3AD392FDF28A10F33D16C0BE27A12D31B2C0883F(L_33, L_34, (bool)0, NULL);
		V_8 = (0);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b7;
	}// end catch (depth: 1)

IL_00b7:
	{
		intptr_t L_35 = V_8;
		return L_35;
	}
}
// UnityEngine.jvalue[] UnityEngine._AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* _AndroidJNIHelper_CreateJNIArgArray_m2075C9584C3A31C8DFFA5D1DDBEE8C5FFBB95892 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD956959ACBEB8436506C180DF3D8E268AAA4C614);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_22 = NULL;
	Type_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	String_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		NullCheck((RuntimeArray*)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 0, NULL);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_030b;
	}

IL_001a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		RuntimeObject* L_8 = V_4;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___l_8 = (0);
		goto IL_0302;
	}

IL_0041:
	{
		RuntimeObject* L_12 = V_4;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_13, NULL);
		V_6 = L_14;
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_01c5;
		}
	}
	{
		RuntimeObject* L_16 = V_4;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_16, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		RuntimeObject* L_20 = V_4;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___i_4 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_20, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_007f:
	{
		RuntimeObject* L_21 = V_4;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_21, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00a7;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_25 = V_4;
		((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___z_0 = ((*(bool*)((bool*)(bool*)UnBox(L_25, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_00a7:
	{
		RuntimeObject* L_26 = V_4;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_26, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_27 = V_9;
		if (!L_27)
		{
			goto IL_00dd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralD956959ACBEB8436506C180DF3D8E268AAA4C614, NULL);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_28 = V_0;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		RuntimeObject* L_30 = V_4;
		((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___b_1 = ((int8_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_30, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))));
		goto IL_01bf;
	}

IL_00dd:
	{
		RuntimeObject* L_31 = V_4;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_31, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_0105;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_33 = V_0;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		RuntimeObject* L_35 = V_4;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___b_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_35, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_0105:
	{
		RuntimeObject* L_36 = V_4;
		V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_36, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_37 = V_11;
		if (!L_37)
		{
			goto IL_012d;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_0;
		int32_t L_39 = V_1;
		NullCheck(L_38);
		RuntimeObject* L_40 = V_4;
		((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___s_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_40, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_012d:
	{
		RuntimeObject* L_41 = V_4;
		V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_41, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_42 = V_12;
		if (!L_42)
		{
			goto IL_0152;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		RuntimeObject* L_45 = V_4;
		((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___j_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_45, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_0152:
	{
		RuntimeObject* L_46 = V_4;
		V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_46, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_47 = V_13;
		if (!L_47)
		{
			goto IL_0177;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_48 = V_0;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		RuntimeObject* L_50 = V_4;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___f_6 = ((*(float*)((float*)(float*)UnBox(L_50, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_0177:
	{
		RuntimeObject* L_51 = V_4;
		V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_51, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_019c;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_53 = V_0;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		RuntimeObject* L_55 = V_4;
		((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->___d_7 = ((*(double*)((double*)(double*)UnBox(L_55, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		goto IL_01bf;
	}

IL_019c:
	{
		RuntimeObject* L_56 = V_4;
		V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_56, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_57 = V_15;
		if (!L_57)
		{
			goto IL_01bf;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_58 = V_0;
		int32_t L_59 = V_1;
		NullCheck(L_58);
		RuntimeObject* L_60 = V_4;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___c_2 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_60, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))));
	}

IL_01bf:
	{
		goto IL_0302;
	}

IL_01c5:
	{
		RuntimeObject* L_61 = V_4;
		V_16 = (bool)((!(((RuntimeObject*)(String_t*)((String_t*)IsInstSealed((RuntimeObject*)L_61, String_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_62 = V_16;
		if (!L_62)
		{
			goto IL_01f4;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_63 = V_0;
		int32_t L_64 = V_1;
		NullCheck(L_63);
		RuntimeObject* L_65 = V_4;
		intptr_t L_66;
		L_66 = AndroidJNISafe_NewString_m6D6411F7DACFD383054457D88C0F0F1F8AE0CFB9(((String_t*)CastclassSealed((RuntimeObject*)L_65, String_t_il2cpp_TypeInfo_var)), NULL);
		((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->___l_8 = L_66;
		goto IL_0302;
	}

IL_01f4:
	{
		RuntimeObject* L_67 = V_4;
		V_17 = (bool)((!(((RuntimeObject*)(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)IsInstClass((RuntimeObject*)L_67, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_68 = V_17;
		if (!L_68)
		{
			goto IL_0223;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_69 = V_0;
		int32_t L_70 = V_1;
		NullCheck(L_69);
		RuntimeObject* L_71 = V_4;
		NullCheck(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_71, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
		intptr_t L_72;
		L_72 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_71, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)), NULL);
		((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___l_8 = L_72;
		goto IL_0302;
	}

IL_0223:
	{
		RuntimeObject* L_73 = V_4;
		V_18 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)IsInstClass((RuntimeObject*)L_73, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_74 = V_18;
		if (!L_74)
		{
			goto IL_0252;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_75 = V_0;
		int32_t L_76 = V_1;
		NullCheck(L_75);
		RuntimeObject* L_77 = V_4;
		NullCheck(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_77, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)));
		intptr_t L_78;
		L_78 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_77, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)), NULL);
		((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___l_8 = L_78;
		goto IL_0302;
	}

IL_0252:
	{
		RuntimeObject* L_79 = V_4;
		V_19 = (bool)((!(((RuntimeObject*)(RuntimeArray*)((RuntimeArray*)IsInstClass((RuntimeObject*)L_79, RuntimeArray_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_80 = V_19;
		if (!L_80)
		{
			goto IL_0281;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_81 = V_0;
		int32_t L_82 = V_1;
		NullCheck(L_81);
		RuntimeObject* L_83 = V_4;
		intptr_t L_84;
		L_84 = _AndroidJNIHelper_ConvertToJNIArray_mA0E7A187566E19273CEE6D3BAA053B2178FA6850(((RuntimeArray*)CastclassClass((RuntimeObject*)L_83, RuntimeArray_il2cpp_TypeInfo_var)), NULL);
		((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_82)))->___l_8 = L_84;
		goto IL_0302;
	}

IL_0281:
	{
		RuntimeObject* L_85 = V_4;
		V_20 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)IsInstClass((RuntimeObject*)L_85, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_86 = V_20;
		if (!L_86)
		{
			goto IL_02ad;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_87 = V_0;
		int32_t L_88 = V_1;
		NullCheck(L_87);
		RuntimeObject* L_89 = V_4;
		NullCheck(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_89, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)));
		intptr_t L_90;
		L_90 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_89, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)), NULL);
		((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88)))->___l_8 = L_90;
		goto IL_0302;
	}

IL_02ad:
	{
		RuntimeObject* L_91 = V_4;
		V_21 = (bool)((!(((RuntimeObject*)(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)IsInstSealed((RuntimeObject*)L_91, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_92 = V_21;
		if (!L_92)
		{
			goto IL_02d9;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_93 = V_0;
		int32_t L_94 = V_1;
		NullCheck(L_93);
		RuntimeObject* L_95 = V_4;
		intptr_t L_96;
		L_96 = AndroidJNIHelper_CreateJavaRunnable_mAA9F7D043B9EDD0A0665E0CA217A7577962A456F(((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)CastclassSealed((RuntimeObject*)L_95, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var)), NULL);
		((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94)))->___l_8 = L_96;
		goto IL_0302;
	}

IL_02d9:
	{
		RuntimeObject* L_97 = V_4;
		NullCheck(L_97);
		Type_t* L_98;
		L_98 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_97, NULL);
		Type_t* L_99 = L_98;
		G_B36_0 = L_99;
		G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
		if (L_99)
		{
			G_B37_0 = L_99;
			G_B37_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
			goto IL_02ed;
		}
	}
	{
		G_B38_0 = ((String_t*)(NULL));
		G_B38_1 = G_B36_1;
		goto IL_02f2;
	}

IL_02ed:
	{
		NullCheck(G_B37_0);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B37_0);
		G_B38_0 = L_100;
		G_B38_1 = G_B37_1;
	}

IL_02f2:
	{
		String_t* L_101;
		L_101 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B38_1, G_B38_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_102 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_102);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_102, L_101, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_102, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_CreateJNIArgArray_m2075C9584C3A31C8DFFA5D1DDBEE8C5FFBB95892_RuntimeMethod_var)));
	}

IL_0302:
	{
		int32_t L_103 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		int32_t L_104 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_030b:
	{
		int32_t L_105 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106 = V_2;
		NullCheck(L_106);
		if ((((int32_t)L_105) < ((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_107 = V_0;
		V_22 = L_107;
		goto IL_0319;
	}

IL_0319:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_108 = V_22;
		return L_108;
	}
}
// System.Object UnityEngine._AndroidJNIHelper::UnboxArray(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_UnboxArray_mD9697E8557EB29A0CFFC3A4423366F75B74C4F1D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B6DDF2435F416EB6E75E0A742D181B32C37FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81AB20ED8D2182D1A0D3ECAA43335FF4D94E66E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AF65B36DFE45F7D43114A8BC74824FA223F60D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BC1A16BF700ED5325C6B4FD49819E1C48ECC035);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeArray* V_5 = NULL;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___obj0;
		V_6 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_7 = NULL;
		goto IL_021e;
	}

IL_0013:
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral9BC1A16BF700ED5325C6B4FD49819E1C48ECC035, NULL);
		V_0 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___obj0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_6);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_6, _stringLiteral61B6DDF2435F416EB6E75E0A742D181B32C37FDF, L_7, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_2 = L_8;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_9);
		String_t* L_11;
		L_11 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_9, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_10, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_3 = L_11;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_12 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = ___obj0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		NullCheck(L_12);
		int32_t L_16;
		L_16 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_12, _stringLiteral81AB20ED8D2182D1A0D3ECAA43335FF4D94E66E1, L_14, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		V_4 = L_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_17);
		bool L_19;
		L_19 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_17, _stringLiteral9AF65B36DFE45F7D43114A8BC74824FA223F60D2, L_18, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_8 = L_19;
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_018b;
		}
	}
	{
		String_t* L_21 = V_3;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, L_21, NULL);
		V_9 = L_22;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_24 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_24);
		V_5 = (RuntimeArray*)L_25;
		goto IL_0188;
	}

IL_00a5:
	{
		String_t* L_26 = V_3;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490, L_26, NULL);
		V_10 = L_27;
		bool L_28 = V_10;
		if (!L_28)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_29 = V_4;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_30 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_29);
		V_5 = (RuntimeArray*)L_30;
		goto IL_0188;
	}

IL_00c4:
	{
		String_t* L_31 = V_3;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7, L_31, NULL);
		V_11 = L_32;
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_34 = V_4;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_35 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_5 = (RuntimeArray*)L_35;
		goto IL_0188;
	}

IL_00e3:
	{
		String_t* L_36 = V_3;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7, L_36, NULL);
		V_12 = L_37;
		bool L_38 = V_12;
		if (!L_38)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_39 = V_4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_40 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_39);
		V_5 = (RuntimeArray*)L_40;
		goto IL_0188;
	}

IL_0102:
	{
		String_t* L_41 = V_3;
		bool L_42;
		L_42 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7, L_41, NULL);
		V_13 = L_42;
		bool L_43 = V_13;
		if (!L_43)
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_44 = V_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_45 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_44);
		V_5 = (RuntimeArray*)L_45;
		goto IL_0188;
	}

IL_011e:
	{
		String_t* L_46 = V_3;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, L_46, NULL);
		V_14 = L_47;
		bool L_48 = V_14;
		if (!L_48)
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_49 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_49);
		V_5 = (RuntimeArray*)L_50;
		goto IL_0188;
	}

IL_013a:
	{
		String_t* L_51 = V_3;
		bool L_52;
		L_52 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8, L_51, NULL);
		V_15 = L_52;
		bool L_53 = V_15;
		if (!L_53)
		{
			goto IL_0156;
		}
	}
	{
		int32_t L_54 = V_4;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_55 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)L_54);
		V_5 = (RuntimeArray*)L_55;
		goto IL_0188;
	}

IL_0156:
	{
		String_t* L_56 = V_3;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7, L_56, NULL);
		V_16 = L_57;
		bool L_58 = V_16;
		if (!L_58)
		{
			goto IL_0172;
		}
	}
	{
		int32_t L_59 = V_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_60 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_59);
		V_5 = (RuntimeArray*)L_60;
		goto IL_0188;
	}

IL_0172:
	{
		String_t* L_61 = V_3;
		String_t* L_62;
		L_62 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B)), L_61, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_63 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_63);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_63, L_62, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_UnboxArray_mD9697E8557EB29A0CFFC3A4423366F75B74C4F1D_RuntimeMethod_var)));
	}

IL_0188:
	{
		goto IL_01cc;
	}

IL_018b:
	{
		String_t* L_64 = V_3;
		bool L_65;
		L_65 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_64, NULL);
		V_17 = L_65;
		bool L_66 = V_17;
		if (!L_66)
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_67 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_67);
		V_5 = (RuntimeArray*)L_68;
		goto IL_01cc;
	}

IL_01a7:
	{
		String_t* L_69 = V_3;
		bool L_70;
		L_70 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10, L_69, NULL);
		V_18 = L_70;
		bool L_71 = V_18;
		if (!L_71)
		{
			goto IL_01c3;
		}
	}
	{
		int32_t L_72 = V_4;
		AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E* L_73 = (AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E*)(AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E*)SZArrayNew(AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E_il2cpp_TypeInfo_var, (uint32_t)L_72);
		V_5 = (RuntimeArray*)L_73;
		goto IL_01cc;
	}

IL_01c3:
	{
		int32_t L_74 = V_4;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_75 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_74);
		V_5 = (RuntimeArray*)L_75;
	}

IL_01cc:
	{
		V_19 = 0;
		goto IL_0205;
	}

IL_01d1:
	{
		RuntimeArray* L_76 = V_5;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_77 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_79 = L_78;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_80 = ___obj0;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_80);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_81 = L_79;
		int32_t L_82 = V_19;
		int32_t L_83 = L_82;
		RuntimeObject* L_84 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_83);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_84);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_84);
		NullCheck(L_77);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_85;
		L_85 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_77, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_81, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		RuntimeObject* L_86;
		L_86 = _AndroidJNIHelper_Unbox_mD43DC20EB0E844E2E3E9373EDDB825B5E61FC0BB(L_85, NULL);
		int32_t L_87 = V_19;
		NullCheck(L_76);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_76, L_86, L_87, NULL);
		int32_t L_88 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_0205:
	{
		int32_t L_89 = V_19;
		int32_t L_90 = V_4;
		V_20 = (bool)((((int32_t)L_89) < ((int32_t)L_90))? 1 : 0);
		bool L_91 = V_20;
		if (L_91)
		{
			goto IL_01d1;
		}
	}
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_92 = V_0;
		NullCheck(L_92);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_92, NULL);
		RuntimeArray* L_93 = V_5;
		V_7 = L_93;
		goto IL_021e;
	}

IL_021e:
	{
		RuntimeObject* L_94 = V_7;
		return L_94;
	}
}
// System.Object UnityEngine._AndroidJNIHelper::Unbox(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_Unbox_mD43DC20EB0E844E2E3E9373EDDB825B5E61FC0BB (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02318B712552D9B62DF47C0277C285D8D227DB68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1518EB1645470EBD2FAB6435208F4404D786664E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral530BFE609FFD8493BEF7537EACF3B344E426E4EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral682203F9A53FBD397E722133EF0FD4D0C4CBECC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BD850E4DDBA17AE057506A43953C4D0DB03DC66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB61F72088FF6940FDC49659789D1C5CA70C2E293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB8F0908585792018E468F1010A23CFD167A686C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E8EFC0C8EF0E48C41E622D432E07CB573E6983);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = NULL;
		goto IL_020d;
	}

IL_0010:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___obj0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_2, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_3, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0202:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_2;
					if (!L_5)
					{
						goto IL_020c;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_020c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				NullCheck(L_7);
				String_t* L_9;
				L_9 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_7, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_8, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				V_3 = L_9;
				String_t* L_10 = V_3;
				bool L_11;
				L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E, L_10, NULL);
				V_4 = L_11;
				bool L_12 = V_4;
				if (!L_12)
				{
					goto IL_0062_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = ___obj0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				NullCheck(L_13);
				int32_t L_15;
				L_15 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_13, _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A, L_14, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
				int32_t L_16 = L_15;
				RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
				V_1 = L_17;
				goto IL_020d;
			}

IL_0062_1:
			{
				String_t* L_18 = V_3;
				bool L_19;
				L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_18, NULL);
				V_5 = L_19;
				bool L_20 = V_5;
				if (!L_20)
				{
					goto IL_008f_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = ___obj0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				NullCheck(L_21);
				bool L_23;
				L_23 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_21, _stringLiteral7BD850E4DDBA17AE057506A43953C4D0DB03DC66, L_22, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
				bool L_24 = L_23;
				RuntimeObject* L_25 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_24);
				V_1 = L_25;
				goto IL_020d;
			}

IL_008f_1:
			{
				String_t* L_26 = V_3;
				bool L_27;
				L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE, L_26, NULL);
				V_6 = L_27;
				bool L_28 = V_6;
				if (!L_28)
				{
					goto IL_00bc_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = ___obj0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				NullCheck(L_29);
				int8_t L_31;
				L_31 = AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B(L_29, _stringLiteral1518EB1645470EBD2FAB6435208F4404D786664E, L_30, AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_RuntimeMethod_var);
				int8_t L_32 = L_31;
				RuntimeObject* L_33 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_32);
				V_1 = L_33;
				goto IL_020d;
			}

IL_00bc_1:
			{
				String_t* L_34 = V_3;
				bool L_35;
				L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845, L_34, NULL);
				V_7 = L_35;
				bool L_36 = V_7;
				if (!L_36)
				{
					goto IL_00e9_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37 = ___obj0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				NullCheck(L_37);
				int16_t L_39;
				L_39 = AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345(L_37, _stringLiteral530BFE609FFD8493BEF7537EACF3B344E426E4EC, L_38, AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_RuntimeMethod_var);
				int16_t L_40 = L_39;
				RuntimeObject* L_41 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_40);
				V_1 = L_41;
				goto IL_020d;
			}

IL_00e9_1:
			{
				String_t* L_42 = V_3;
				bool L_43;
				L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_42, NULL);
				V_8 = L_43;
				bool L_44 = V_8;
				if (!L_44)
				{
					goto IL_0116_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_45 = ___obj0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				NullCheck(L_45);
				int64_t L_47;
				L_47 = AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9(L_45, _stringLiteral02318B712552D9B62DF47C0277C285D8D227DB68, L_46, AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
				int64_t L_48 = L_47;
				RuntimeObject* L_49 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_48);
				V_1 = L_49;
				goto IL_020d;
			}

IL_0116_1:
			{
				String_t* L_50 = V_3;
				bool L_51;
				L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4, L_50, NULL);
				V_9 = L_51;
				bool L_52 = V_9;
				if (!L_52)
				{
					goto IL_0143_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = ___obj0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				NullCheck(L_53);
				float L_55;
				L_55 = AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1(L_53, _stringLiteralB61F72088FF6940FDC49659789D1C5CA70C2E293, L_54, AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_RuntimeMethod_var);
				float L_56 = L_55;
				RuntimeObject* L_57 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_56);
				V_1 = L_57;
				goto IL_020d;
			}

IL_0143_1:
			{
				String_t* L_58 = V_3;
				bool L_59;
				L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteralBB8F0908585792018E468F1010A23CFD167A686C, L_58, NULL);
				V_10 = L_59;
				bool L_60 = V_10;
				if (!L_60)
				{
					goto IL_0170_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_61 = ___obj0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				NullCheck(L_61);
				double L_63;
				L_63 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_61, _stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C, L_62, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
				double L_64 = L_63;
				RuntimeObject* L_65 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_64);
				V_1 = L_65;
				goto IL_020d;
			}

IL_0170_1:
			{
				String_t* L_66 = V_3;
				bool L_67;
				L_67 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95, L_66, NULL);
				V_11 = L_67;
				bool L_68 = V_11;
				if (!L_68)
				{
					goto IL_019a_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = ___obj0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				NullCheck(L_69);
				Il2CppChar L_71;
				L_71 = AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C(L_69, _stringLiteral682203F9A53FBD397E722133EF0FD4D0C4CBECC3, L_70, AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_RuntimeMethod_var);
				Il2CppChar L_72 = L_71;
				RuntimeObject* L_73 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_72);
				V_1 = L_73;
				goto IL_020d;
			}

IL_019a_1:
			{
				String_t* L_74 = V_3;
				bool L_75;
				L_75 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_74, NULL);
				V_12 = L_75;
				bool L_76 = V_12;
				if (!L_76)
				{
					goto IL_01bf_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_77 = ___obj0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				NullCheck(L_77);
				String_t* L_79;
				L_79 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_77, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_78, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				V_1 = L_79;
				goto IL_020d;
			}

IL_01bf_1:
			{
				String_t* L_80 = V_3;
				bool L_81;
				L_81 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10, L_80, NULL);
				V_13 = L_81;
				bool L_82 = V_13;
				if (!L_82)
				{
					goto IL_01de_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_83 = ___obj0;
				NullCheck(L_83);
				intptr_t L_84;
				L_84 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_83, NULL);
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_85 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				NullCheck(L_85);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_85, L_84, NULL);
				V_1 = L_85;
				goto IL_020d;
			}

IL_01de_1:
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_86 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
				NullCheck(L_86);
				bool L_88;
				L_88 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_86, _stringLiteralF3E8EFC0C8EF0E48C41E622D432E07CB573E6983, L_87, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
				V_14 = L_88;
				bool L_89 = V_14;
				if (!L_89)
				{
					goto IL_01fe_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_90 = ___obj0;
				RuntimeObject* L_91;
				L_91 = _AndroidJNIHelper_UnboxArray_mD9697E8557EB29A0CFFC3A4423366F75B74C4F1D(L_90, NULL);
				V_1 = L_91;
				goto IL_020d;
			}

IL_01fe_1:
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_92 = ___obj0;
				V_1 = L_92;
				goto IL_020d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_020d:
	{
		RuntimeObject* L_93 = V_1;
		return L_93;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine._AndroidJNIHelper::Box(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* _AndroidJNIHelper_Box_mB45F80703BDE58472E812A2122DC70CAFC4E5023 (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB8F0908585792018E468F1010A23CFD167A686C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	Type_t* G_B23_0 = NULL;
	String_t* G_B23_1 = NULL;
	Type_t* G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	String_t* G_B24_0 = NULL;
	String_t* G_B24_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		goto IL_0310;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0213;
		}
	}
	{
		RuntimeObject* L_6 = ___obj0;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		RuntimeObject* L_10 = ___obj0;
		int32_t L_11 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_10, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_13, _stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E, L_9, NULL);
		V_1 = L_13;
		goto IL_0310;
	}

IL_0054:
	{
		RuntimeObject* L_14 = ___obj0;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_14, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0087;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		RuntimeObject* L_18 = ___obj0;
		bool L_19 = ((*(bool*)((bool*)(bool*)UnBox(L_18, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_21, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_17, NULL);
		V_1 = L_21;
		goto IL_0310;
	}

IL_0087:
	{
		RuntimeObject* L_22 = ___obj0;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_22, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00ba;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
		RuntimeObject* L_26 = ___obj0;
		int8_t L_27 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_26, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		RuntimeObject* L_28 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_28);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_29, _stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE, L_25, NULL);
		V_1 = L_29;
		goto IL_0310;
	}

IL_00ba:
	{
		RuntimeObject* L_30 = ___obj0;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_30, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_32;
		RuntimeObject* L_34 = ___obj0;
		int8_t L_35 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_34, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		RuntimeObject* L_36 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_36);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_37, _stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE, L_33, NULL);
		V_1 = L_37;
		goto IL_0310;
	}

IL_00ed:
	{
		RuntimeObject* L_38 = ___obj0;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_38, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_0120;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_40;
		RuntimeObject* L_42 = ___obj0;
		int16_t L_43 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_42, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		RuntimeObject* L_44 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_45 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_45, _stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845, L_41, NULL);
		V_1 = L_45;
		goto IL_0310;
	}

IL_0120:
	{
		RuntimeObject* L_46 = ___obj0;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_46, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0153;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_48;
		RuntimeObject* L_50 = ___obj0;
		int64_t L_51 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_50, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		RuntimeObject* L_52 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_52);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_52);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_53, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_49, NULL);
		V_1 = L_53;
		goto IL_0310;
	}

IL_0153:
	{
		RuntimeObject* L_54 = ___obj0;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_54, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_55 = V_9;
		if (!L_55)
		{
			goto IL_0186;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = L_56;
		RuntimeObject* L_58 = ___obj0;
		float L_59 = ((*(float*)((float*)(float*)UnBox(L_58, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		RuntimeObject* L_60 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_60);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_61 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_61, _stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4, L_57, NULL);
		V_1 = L_61;
		goto IL_0310;
	}

IL_0186:
	{
		RuntimeObject* L_62 = ___obj0;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_62, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_63 = V_10;
		if (!L_63)
		{
			goto IL_01b9;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_65 = L_64;
		RuntimeObject* L_66 = ___obj0;
		double L_67 = ((*(double*)((double*)(double*)UnBox(L_66, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		RuntimeObject* L_68 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_67);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_68);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_69, _stringLiteralBB8F0908585792018E468F1010A23CFD167A686C, L_65, NULL);
		V_1 = L_69;
		goto IL_0310;
	}

IL_01b9:
	{
		RuntimeObject* L_70 = ___obj0;
		V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_70, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_71 = V_11;
		if (!L_71)
		{
			goto IL_01ec;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = L_72;
		RuntimeObject* L_74 = ___obj0;
		Il2CppChar L_75 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_74, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))));
		RuntimeObject* L_76 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_76);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_76);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_77 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_77, _stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95, L_73, NULL);
		V_1 = L_77;
		goto IL_0310;
	}

IL_01ec:
	{
		RuntimeObject* L_78 = ___obj0;
		NullCheck(L_78);
		Type_t* L_79;
		L_79 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_78, NULL);
		Type_t* L_80 = L_79;
		G_B22_0 = L_80;
		G_B22_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
		if (L_80)
		{
			G_B23_0 = L_80;
			G_B23_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
			goto IL_01fe;
		}
	}
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = G_B22_1;
		goto IL_0203;
	}

IL_01fe:
	{
		NullCheck(G_B23_0);
		String_t* L_81;
		L_81 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B23_0);
		G_B24_0 = L_81;
		G_B24_1 = G_B23_1;
	}

IL_0203:
	{
		String_t* L_82;
		L_82 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B24_1, G_B24_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_83 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_83);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_83, L_82, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_83, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_Box_mB45F80703BDE58472E812A2122DC70CAFC4E5023_RuntimeMethod_var)));
	}

IL_0213:
	{
		RuntimeObject* L_84 = ___obj0;
		V_12 = (bool)((!(((RuntimeObject*)(String_t*)((String_t*)IsInstSealed((RuntimeObject*)L_84, String_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_85 = V_12;
		if (!L_85)
		{
			goto IL_0242;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = L_86;
		RuntimeObject* L_88 = ___obj0;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)));
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_89 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_89);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_89, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_87, NULL);
		V_1 = L_89;
		goto IL_0310;
	}

IL_0242:
	{
		RuntimeObject* L_90 = ___obj0;
		V_13 = (bool)((!(((RuntimeObject*)(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)IsInstClass((RuntimeObject*)L_90, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_91 = V_13;
		if (!L_91)
		{
			goto IL_0268;
		}
	}
	{
		RuntimeObject* L_92 = ___obj0;
		NullCheck(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_92, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
		intptr_t L_93;
		L_93 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_92, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)), NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_94 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_94);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_94, L_93, NULL);
		V_1 = L_94;
		goto IL_0310;
	}

IL_0268:
	{
		RuntimeObject* L_95 = ___obj0;
		V_14 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)IsInstClass((RuntimeObject*)L_95, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_96 = V_14;
		if (!L_96)
		{
			goto IL_0284;
		}
	}
	{
		RuntimeObject* L_97 = ___obj0;
		V_1 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_97, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var));
		goto IL_0310;
	}

IL_0284:
	{
		RuntimeObject* L_98 = ___obj0;
		V_15 = (bool)((!(((RuntimeObject*)(RuntimeArray*)((RuntimeArray*)IsInstClass((RuntimeObject*)L_98, RuntimeArray_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_99 = V_15;
		if (!L_99)
		{
			goto IL_02a7;
		}
	}
	{
		RuntimeObject* L_100 = ___obj0;
		intptr_t L_101;
		L_101 = _AndroidJNIHelper_ConvertToJNIArray_mA0E7A187566E19273CEE6D3BAA053B2178FA6850(((RuntimeArray*)CastclassClass((RuntimeObject*)L_100, RuntimeArray_il2cpp_TypeInfo_var)), NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_102;
		L_102 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB1EEE323CA333E5DB2871794F1E9094E488682E2(L_101, NULL);
		V_1 = L_102;
		goto IL_0310;
	}

IL_02a7:
	{
		RuntimeObject* L_103 = ___obj0;
		V_16 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)IsInstClass((RuntimeObject*)L_103, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_16;
		if (!L_104)
		{
			goto IL_02c5;
		}
	}
	{
		RuntimeObject* L_105 = ___obj0;
		NullCheck(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_105, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_106;
		L_106 = AndroidJavaProxy_GetProxyObject_mBFD2FBEF9ED9D4AE23DECF5836E5C73A886E2109(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_105, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_106;
		goto IL_0310;
	}

IL_02c5:
	{
		RuntimeObject* L_107 = ___obj0;
		V_17 = (bool)((!(((RuntimeObject*)(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)IsInstSealed((RuntimeObject*)L_107, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_108 = V_17;
		if (!L_108)
		{
			goto IL_02e8;
		}
	}
	{
		RuntimeObject* L_109 = ___obj0;
		intptr_t L_110;
		L_110 = AndroidJNIHelper_CreateJavaRunnable_mAA9F7D043B9EDD0A0665E0CA217A7577962A456F(((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)CastclassSealed((RuntimeObject*)L_109, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var)), NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_111;
		L_111 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB1EEE323CA333E5DB2871794F1E9094E488682E2(L_110, NULL);
		V_1 = L_111;
		goto IL_0310;
	}

IL_02e8:
	{
		RuntimeObject* L_112 = ___obj0;
		NullCheck(L_112);
		Type_t* L_113;
		L_113 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_112, NULL);
		Type_t* L_114 = L_113;
		G_B38_0 = L_114;
		G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
		if (L_114)
		{
			G_B39_0 = L_114;
			G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
			goto IL_02fb;
		}
	}
	{
		G_B40_0 = ((String_t*)(NULL));
		G_B40_1 = G_B38_1;
		goto IL_0300;
	}

IL_02fb:
	{
		NullCheck(G_B39_0);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B39_0);
		G_B40_0 = L_115;
		G_B40_1 = G_B39_1;
	}

IL_0300:
	{
		String_t* L_116;
		L_116 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_117 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_117);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_117, L_116, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_Box_mB45F80703BDE58472E812A2122DC70CAFC4E5023_RuntimeMethod_var)));
	}

IL_0310:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = V_1;
		return L_118;
	}
}
// System.Void UnityEngine._AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_DeleteJNIArgArray_mFA2A3664183847343FBB1F76ACD32DE1B1ED0681 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___jniArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		V_1 = L_0;
		V_2 = 0;
		goto IL_004c;
	}

IL_000a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		RuntimeObject* L_5 = V_3;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_6 = V_3;
		if (((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)IsInstSealed((RuntimeObject*)L_6, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_7 = V_3;
		G_B5_0 = ((!(((RuntimeObject*)(RuntimeArray*)((RuntimeArray*)IsInstClass((RuntimeObject*)L_7, RuntimeArray_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 1;
	}

IL_002b:
	{
		V_4 = (bool)G_B5_0;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9 = ___jniArgs1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		intptr_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___l_8;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_11, NULL);
	}

IL_0043:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004c:
	{
		int32_t L_14 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::ConvertToJNIArray(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_ConvertToJNIArray_mA0E7A187566E19273CEE6D3BAA053B2178FA6850 (RuntimeArray* ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F7F7B4F6009074DEBEA1316DB8BDEC4E57CA185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831D7CED62F1BBB173BA1CEEEB6F169BFC6B02A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_13 = NULL;
	int32_t V_14 = 0;
	intptr_t V_15;
	memset((&V_15), 0, sizeof(V_15));
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	bool V_20 = false;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_21 = NULL;
	int32_t V_22 = 0;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_23 = NULL;
	intptr_t V_24;
	memset((&V_24), 0, sizeof(V_24));
	intptr_t V_25;
	memset((&V_25), 0, sizeof(V_25));
	intptr_t V_26;
	memset((&V_26), 0, sizeof(V_26));
	int32_t V_27 = 0;
	bool V_28 = false;
	intptr_t V_29;
	memset((&V_29), 0, sizeof(V_29));
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		RuntimeArray* L_0 = ___array0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_016f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeArray* L_10 = ___array0;
		intptr_t L_11;
		L_11 = AndroidJNISafe_ToIntArray_mA46A79AFCB3909BB90FFF2D20EFDA042E6A4DE97(((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_11;
		goto IL_0303;
	}

IL_003d:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeArray* L_16 = ___array0;
		intptr_t L_17;
		L_17 = AndroidJNISafe_ToBooleanArray_m2E622CCA3AB1B19FE519F975391636CA7DECDAF7(((BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)Castclass((RuntimeObject*)L_16, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_17;
		goto IL_0303;
	}

IL_0061:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral831D7CED62F1BBB173BA1CEEEB6F169BFC6B02A3, NULL);
		RuntimeArray* L_22 = ___array0;
		intptr_t L_23;
		L_23 = AndroidJNISafe_ToByteArray_m13141E44A84BDC2716432D09131984A4ADFC101F(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_22, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_23;
		goto IL_0303;
	}

IL_0091:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b5;
		}
	}
	{
		RuntimeArray* L_28 = ___array0;
		intptr_t L_29;
		L_29 = AndroidJNISafe_ToSByteArray_mEFB80D7817A15C285872B8F3C1A9A1EDEA9ECC34(((SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)Castclass((RuntimeObject*)L_28, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_29;
		goto IL_0303;
	}

IL_00b5:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		RuntimeArray* L_34 = ___array0;
		intptr_t L_35;
		L_35 = AndroidJNISafe_ToShortArray_m3591547B05CEABD583A023C267091A536E3F925C(((Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)Castclass((RuntimeObject*)L_34, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_35;
		goto IL_0303;
	}

IL_00d9:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_00fd;
		}
	}
	{
		RuntimeArray* L_40 = ___array0;
		intptr_t L_41;
		L_41 = AndroidJNISafe_ToLongArray_m00D8D5A5D1B46639307AA78C5E4E7421EA0FF16A(((Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)Castclass((RuntimeObject*)L_40, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_41;
		goto IL_0303;
	}

IL_00fd:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0121;
		}
	}
	{
		RuntimeArray* L_46 = ___array0;
		intptr_t L_47;
		L_47 = AndroidJNISafe_ToFloatArray_m15157B7C76CE04863F365E7052671AC87D8556E0(((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)Castclass((RuntimeObject*)L_46, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_47;
		goto IL_0303;
	}

IL_0121:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0145;
		}
	}
	{
		RuntimeArray* L_52 = ___array0;
		intptr_t L_53;
		L_53 = AndroidJNISafe_ToDoubleArray_mCAF30FC9FA2947EBC680D89374A5296D775132A9(((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)Castclass((RuntimeObject*)L_52, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_53;
		goto IL_0303;
	}

IL_0145:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0169;
		}
	}
	{
		RuntimeArray* L_58 = ___array0;
		intptr_t L_59;
		L_59 = AndroidJNISafe_ToCharArray_m8C8F076F9A471146F6BCF063F7415E89BC0FC801(((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)Castclass((RuntimeObject*)L_58, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_59;
		goto IL_0303;
	}

IL_0169:
	{
		goto IL_02fb;
	}

IL_016f:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01f9;
		}
	}
	{
		RuntimeArray* L_64 = ___array0;
		V_13 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_64, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		RuntimeArray* L_65 = ___array0;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935(L_65, 0, NULL);
		V_14 = L_66;
		intptr_t L_67;
		L_67 = AndroidJNISafe_FindClass_m921B6BE5C8F1F1A4207761AD07A57C0D5F599DDE(_stringLiteral6F7F7B4F6009074DEBEA1316DB8BDEC4E57CA185, NULL);
		V_15 = L_67;
		int32_t L_68 = V_14;
		intptr_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_NewObjectArray_m8B0C45BD47F6563EA916E35BE26691DFA6482A51(L_68, L_69, (0), NULL);
		V_16 = L_70;
		V_17 = 0;
		goto IL_01dd;
	}

IL_01b5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_13;
		int32_t L_72 = V_17;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		String_t* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		intptr_t L_75;
		L_75 = AndroidJNISafe_NewString_m6D6411F7DACFD383054457D88C0F0F1F8AE0CFB9(L_74, NULL);
		V_18 = L_75;
		intptr_t L_76 = V_16;
		int32_t L_77 = V_17;
		intptr_t L_78 = V_18;
		AndroidJNI_SetObjectArrayElement_m5D80CF792A1C492F97EC3378E36FFF458BAFD8D1(L_76, L_77, L_78, NULL);
		intptr_t L_79 = V_18;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_79, NULL);
		int32_t L_80 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01dd:
	{
		int32_t L_81 = V_17;
		int32_t L_82 = V_14;
		V_19 = (bool)((((int32_t)L_81) < ((int32_t)L_82))? 1 : 0);
		bool L_83 = V_19;
		if (L_83)
		{
			goto IL_01b5;
		}
	}
	{
		intptr_t L_84 = V_15;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_84, NULL);
		intptr_t L_85 = V_16;
		V_3 = L_85;
		goto IL_0303;
	}

IL_01f9:
	{
		Type_t* L_86 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_87, NULL);
		V_20 = (bool)((((RuntimeObject*)(Type_t*)L_86) == ((RuntimeObject*)(Type_t*)L_88))? 1 : 0);
		bool L_89 = V_20;
		if (!L_89)
		{
			goto IL_02d8;
		}
	}
	{
		RuntimeArray* L_90 = ___array0;
		V_21 = ((AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)Castclass((RuntimeObject*)L_90, AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var));
		RuntimeArray* L_91 = ___array0;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935(L_91, 0, NULL);
		V_22 = L_92;
		int32_t L_93 = V_22;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_94 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)L_93);
		V_23 = L_94;
		intptr_t L_95;
		L_95 = AndroidJNISafe_FindClass_m921B6BE5C8F1F1A4207761AD07A57C0D5F599DDE(_stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E, NULL);
		V_24 = L_95;
		V_25 = (0);
		V_27 = 0;
		goto IL_02b4;
	}

IL_0242:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_96 = V_21;
		int32_t L_97 = V_27;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_28 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_99) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_100 = V_28;
		if (!L_100)
		{
			goto IL_02a1;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_101 = V_23;
		int32_t L_102 = V_27;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_103 = V_21;
		int32_t L_104 = V_27;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		intptr_t L_107;
		L_107 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_106, NULL);
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (intptr_t)L_107);
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_108 = V_21;
		int32_t L_109 = V_27;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		intptr_t L_112;
		L_112 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_111, NULL);
		V_29 = L_112;
		intptr_t L_113 = V_25;
		intptr_t L_114 = V_29;
		bool L_115;
		L_115 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_113, L_114, NULL);
		V_30 = L_115;
		bool L_116 = V_30;
		if (!L_116)
		{
			goto IL_029e;
		}
	}
	{
		intptr_t L_117 = V_25;
		bool L_118;
		L_118 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_117, (0), NULL);
		V_31 = L_118;
		bool L_119 = V_31;
		if (!L_119)
		{
			goto IL_0297;
		}
	}
	{
		intptr_t L_120 = V_29;
		V_25 = L_120;
		goto IL_029d;
	}

IL_0297:
	{
		intptr_t L_121 = V_24;
		V_25 = L_121;
	}

IL_029d:
	{
	}

IL_029e:
	{
		goto IL_02ad;
	}

IL_02a1:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_122 = V_23;
		int32_t L_123 = V_27;
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (intptr_t)(0));
	}

IL_02ad:
	{
		int32_t L_124 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_02b4:
	{
		int32_t L_125 = V_27;
		int32_t L_126 = V_22;
		V_32 = (bool)((((int32_t)L_125) < ((int32_t)L_126))? 1 : 0);
		bool L_127 = V_32;
		if (L_127)
		{
			goto IL_0242;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_128 = V_23;
		intptr_t L_129 = V_25;
		intptr_t L_130;
		L_130 = AndroidJNISafe_ToObjectArray_m0F776C4B1BA875104CCB8345797A9269A3EBCF07(L_128, L_129, NULL);
		V_26 = L_130;
		intptr_t L_131 = V_24;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_131, NULL);
		intptr_t L_132 = V_26;
		V_3 = L_132;
		goto IL_0303;
	}

IL_02d8:
	{
		Type_t* L_133 = V_0;
		Type_t* L_134 = L_133;
		G_B39_0 = L_134;
		G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63ABF5649A2AE850683F7D7D13A6E33FC41F4CAA));
		if (L_134)
		{
			G_B40_0 = L_134;
			G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63ABF5649A2AE850683F7D7D13A6E33FC41F4CAA));
			goto IL_02e6;
		}
	}
	{
		G_B41_0 = ((String_t*)(NULL));
		G_B41_1 = G_B39_1;
		goto IL_02eb;
	}

IL_02e6:
	{
		NullCheck(G_B40_0);
		String_t* L_135;
		L_135 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B40_0);
		G_B41_0 = L_135;
		G_B41_1 = G_B40_1;
	}

IL_02eb:
	{
		String_t* L_136;
		L_136 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_137 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_137);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_137, L_136, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_137, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertToJNIArray_mA0E7A187566E19273CEE6D3BAA053B2178FA6850_RuntimeMethod_var)));
	}

IL_02fb:
	{
		V_3 = (0);
		goto IL_0303;
	}

IL_0303:
	{
		intptr_t L_138 = V_3;
		return L_138;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m7506B43EEFEA5F37F1548F63497D31378460FC61 (intptr_t ___jclass0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		String_t* L_2;
		L_2 = _AndroidJNIHelper_GetSignature_m17AB4F708FC61A101E77C0154684E3E119720FEB(L_1, NULL);
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetConstructorID_m2A7EE301E50E6200B15858AD095B9E3DCA061B10(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_mF34E230F83D1166968B9B80CF2F9F3CFC00CD0C4 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_m17AB4F708FC61A101E77C0154684E3E119720FEB(L_2, NULL);
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m80A44C210DFE146BDF2EB8FDB2FF19A6BD0337CE (intptr_t ___jclass0, String_t* ___signature1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (0);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				intptr_t L_0 = V_0;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				intptr_t L_1 = ___jclass0;
				String_t* L_2 = ___signature1;
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				intptr_t L_3;
				L_3 = AndroidReflection_GetConstructorMember_m79D508363805E1AD5FC551644355A1DCF5A01A8A(L_1, L_2, NULL);
				V_0 = L_3;
				intptr_t L_4 = V_0;
				intptr_t L_5;
				L_5 = AndroidJNISafe_FromReflectedMethod_mA0F291FDD88E4B0BD2242D9846833C696CF64F86(L_4, NULL);
				V_1 = L_5;
				goto IL_0049;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0019_1;
				}
				throw e;
			}

CATCH_0019_1:
			{// begin catch(System.Exception)
				{
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					intptr_t L_6 = ___jclass0;
					String_t* L_7 = ___signature1;
					intptr_t L_8;
					L_8 = AndroidJNISafe_GetMethodID_m4E480BAEFB37F467848EC9074C6917A2D8E853DC(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1AC4D20161E303D304EC6B1002667BE658488EE)), L_7, NULL);
					V_3 = L_8;
					intptr_t L_9 = V_3;
					bool L_10;
					L_10 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_9, (0), NULL);
					V_4 = L_10;
					bool L_11 = V_4;
					if (!L_11)
					{
						goto IL_003d_1;
					}
				}
				{
					intptr_t L_12 = V_3;
					V_1 = L_12;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0049;
				}

IL_003d_1:
				{
					Exception_t* L_13 = V_2;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetConstructorID_m80A44C210DFE146BDF2EB8FDB2FF19A6BD0337CE_RuntimeMethod_var)));
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		intptr_t L_14 = V_1;
		return L_14;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_m289D8B1C26B13A8A132565AAFC42FD6C81E99072 (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (0);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				intptr_t L_0 = V_0;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				intptr_t L_1 = ___jclass0;
				String_t* L_2 = ___methodName1;
				String_t* L_3 = ___signature2;
				bool L_4 = ___isStatic3;
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				intptr_t L_5;
				L_5 = AndroidReflection_GetMethodMember_m6EAFD27B17549F9EF623F5E6341DCAC9E33528CE(L_1, L_2, L_3, L_4, NULL);
				V_0 = L_5;
				intptr_t L_6 = V_0;
				intptr_t L_7;
				L_7 = AndroidJNISafe_FromReflectedMethod_mA0F291FDD88E4B0BD2242D9846833C696CF64F86(L_6, NULL);
				V_1 = L_7;
				goto IL_0048;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_001b_1;
				}
				throw e;
			}

CATCH_001b_1:
			{// begin catch(System.Exception)
				{
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					intptr_t L_8 = ___jclass0;
					String_t* L_9 = ___methodName1;
					String_t* L_10 = ___signature2;
					bool L_11 = ___isStatic3;
					intptr_t L_12;
					L_12 = _AndroidJNIHelper_GetMethodIDFallback_m48DDC7CB61931DD61B3524E65449AFD4F8B9E9F3(L_8, L_9, L_10, L_11, NULL);
					V_3 = L_12;
					intptr_t L_13 = V_3;
					bool L_14;
					L_14 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_13, (0), NULL);
					V_4 = L_14;
					bool L_15 = V_4;
					if (!L_15)
					{
						goto IL_003c_1;
					}
				}
				{
					intptr_t L_16 = V_3;
					V_1 = L_16;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0048;
				}

IL_003c_1:
				{
					Exception_t* L_17 = V_2;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetMethodID_m289D8B1C26B13A8A132565AAFC42FD6C81E99072_RuntimeMethod_var)));
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		intptr_t L_18 = V_1;
		return L_18;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodIDFallback(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodIDFallback_m48DDC7CB61931DD61B3524E65449AFD4F8B9E9F3 (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
	}
	try
	{// begin try (depth: 1)
		{
			bool L_0 = ___isStatic3;
			if (L_0)
			{
				goto IL_000f_1;
			}
		}
		{
			intptr_t L_1 = ___jclass0;
			String_t* L_2 = ___methodName1;
			String_t* L_3 = ___signature2;
			intptr_t L_4;
			L_4 = AndroidJNISafe_GetMethodID_m4E480BAEFB37F467848EC9074C6917A2D8E853DC(L_1, L_2, L_3, NULL);
			G_B4_0 = L_4;
			goto IL_0017_1;
		}

IL_000f_1:
		{
			intptr_t L_5 = ___jclass0;
			String_t* L_6 = ___methodName1;
			String_t* L_7 = ___signature2;
			intptr_t L_8;
			L_8 = AndroidJNISafe_GetStaticMethodID_mDD304107A2DCF7C4FFFC6E820361618693FCD8C7(L_5, L_6, L_7, NULL);
			G_B4_0 = L_8;
		}

IL_0017_1:
		{
			V_0 = G_B4_0;
			goto IL_0027;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_001f:
	{
		V_0 = (0);
		goto IL_0027;
	}

IL_0027:
	{
		intptr_t L_9 = V_0;
		return L_9;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_mE63F3DAF58A223435525E46590D1AE4F624E9628 (intptr_t ___jclass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	intptr_t G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	{
		V_0 = (0);
		V_1 = (Exception_t*)NULL;
		int32_t L_0;
		L_0 = AndroidJNI_PushLocalFrame_m4B2AE2B5D545086A6720E97FA8F427F245360FC8(((int32_t)10), NULL);
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_1 = ___jclass0;
			String_t* L_2 = ___fieldName1;
			String_t* L_3 = ___signature2;
			bool L_4 = ___isStatic3;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			intptr_t L_5;
			L_5 = AndroidReflection_GetFieldMember_m66A8627EBBE89FFAF125264309A85E5001FCEEC3(L_1, L_2, L_3, L_4, NULL);
			V_2 = L_5;
			bool L_6 = ___isStatic3;
			V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_002c_1;
			}
		}
		{
			intptr_t L_8 = V_2;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			intptr_t L_9;
			L_9 = AndroidReflection_GetFieldClass_m394CE3986B992FB51CDA6F18031A4D6390956E00(L_8, NULL);
			___jclass0 = L_9;
		}

IL_002c_1:
		{
			intptr_t L_10 = V_2;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			String_t* L_11;
			L_11 = AndroidReflection_GetFieldSignature_m9684AAB2E8AAB2DA4CE2A9DCC18C9088C5E82194(L_10, NULL);
			___signature2 = L_11;
			goto IL_0040;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0037;
		}
		throw e;
	}

CATCH_0037:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_4;
		V_1 = L_12;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008d:
			{// begin finally (depth: 1)
				intptr_t L_13;
				L_13 = AndroidJNI_PopLocalFrame_m2128BB5AAAE2E2E12161EBD13866C69D50D5B78B((0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_14 = ___isStatic3;
				if (L_14)
				{
					goto IL_004f_1;
				}
			}
			{
				intptr_t L_15 = ___jclass0;
				String_t* L_16 = ___fieldName1;
				String_t* L_17 = ___signature2;
				intptr_t L_18;
				L_18 = AndroidJNISafe_GetFieldID_m82034BB65220C7ACA5CA977789463EF827C4C0BF(L_15, L_16, L_17, NULL);
				G_B9_0 = L_18;
				goto IL_0057_1;
			}

IL_004f_1:
			{
				intptr_t L_19 = ___jclass0;
				String_t* L_20 = ___fieldName1;
				String_t* L_21 = ___signature2;
				intptr_t L_22;
				L_22 = AndroidJNISafe_GetStaticFieldID_mC79AC0A4A44034B7A6D19ED2CE6AF24F7369B698(L_19, L_20, L_21, NULL);
				G_B9_0 = L_22;
			}

IL_0057_1:
			{
				V_0 = G_B9_0;
				intptr_t L_23 = V_0;
				bool L_24;
				L_24 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_23, (0), NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0088_1;
				}
			}
			{
				Exception_t* L_26 = V_1;
				V_6 = (bool)((!(((RuntimeObject*)(Exception_t*)L_26) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_27 = V_6;
				if (!L_27)
				{
					goto IL_0076_1;
				}
			}
			{
				Exception_t* L_28 = V_1;
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetFieldID_mE63F3DAF58A223435525E46590D1AE4F624E9628_RuntimeMethod_var)));
			}

IL_0076_1:
			{
				String_t* L_29 = ___fieldName1;
				String_t* L_30 = ___signature2;
				String_t* L_31;
				L_31 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral519BF378C815B93F61B0116296D7B32C3805CB32)), L_29, L_30, NULL);
				Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_32);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, L_31, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetFieldID_mE63F3DAF58A223435525E46590D1AE4F624E9628_RuntimeMethod_var)));
			}

IL_0088_1:
			{
				intptr_t L_33 = V_0;
				V_7 = L_33;
				goto IL_009b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009b:
	{
		intptr_t L_34 = V_7;
		return L_34;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral672EA443B619B60F88713BFAFFF2A3A7433C6827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90B5C222ABA0160226196AA2D9E75E9C0A6B3D39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D9409152ADEE0D2A5BE9C04915D8BF65B6B929A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD924CAE09D47CDF0481655AE527E8ADF940FF10E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_19 = NULL;
	bool V_20 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_21 = NULL;
	bool V_22 = false;
	StringBuilder_t* V_23 = NULL;
	bool V_24 = false;
	Type_t* G_B5_0 = NULL;
	Type_t* G_B51_0 = NULL;
	int32_t G_B51_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B51_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B51_3 = NULL;
	Type_t* G_B50_0 = NULL;
	int32_t G_B50_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_3 = NULL;
	String_t* G_B52_0 = NULL;
	int32_t G_B52_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B52_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B52_3 = NULL;
	int32_t G_B54_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B54_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B54_2 = NULL;
	int32_t G_B53_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B53_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B53_2 = NULL;
	String_t* G_B55_0 = NULL;
	int32_t G_B55_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B55_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B55_3 = NULL;
	int32_t G_B57_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B57_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B57_2 = NULL;
	int32_t G_B56_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B56_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B56_2 = NULL;
	String_t* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_3 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_2 = _stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E;
		goto IL_037b;
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___obj0;
		if (((Type_t*)IsInstClass((RuntimeObject*)L_2, Type_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_3 = ___obj0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		G_B5_0 = L_4;
		goto IL_002a;
	}

IL_0024:
	{
		RuntimeObject* L_5 = ___obj0;
		G_B5_0 = ((Type_t*)CastclassClass((RuntimeObject*)L_5, Type_t_il2cpp_TypeInfo_var));
	}

IL_002a:
	{
		V_0 = G_B5_0;
		Type_t* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_6, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0174;
		}
	}
	{
		Type_t* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_9, L_11);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_005a;
		}
	}
	{
		V_2 = _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD;
		goto IL_037b;
	}

IL_005a:
	{
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_14, L_16);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		V_2 = _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380;
		goto IL_037b;
	}

IL_007b:
	{
		Type_t* L_19 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_20, NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_19, L_21);
		V_6 = L_22;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00a8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralD924CAE09D47CDF0481655AE527E8ADF940FF10E, NULL);
		V_2 = _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
		goto IL_037b;
	}

IL_00a8:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		NullCheck(L_24);
		bool L_27;
		L_27 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_24, L_26);
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
		goto IL_037b;
	}

IL_00c9:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_30, NULL);
		NullCheck(L_29);
		bool L_32;
		L_32 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_29, L_31);
		V_8 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00ea;
		}
	}
	{
		V_2 = _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
		goto IL_037b;
	}

IL_00ea:
	{
		Type_t* L_34 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_35, NULL);
		NullCheck(L_34);
		bool L_37;
		L_37 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_34, L_36);
		V_9 = L_37;
		bool L_38 = V_9;
		if (!L_38)
		{
			goto IL_010b;
		}
	}
	{
		V_2 = _stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC;
		goto IL_037b;
	}

IL_010b:
	{
		Type_t* L_39 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_39, L_41);
		V_10 = L_42;
		bool L_43 = V_10;
		if (!L_43)
		{
			goto IL_012c;
		}
	}
	{
		V_2 = _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
		goto IL_037b;
	}

IL_012c:
	{
		Type_t* L_44 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_45, NULL);
		NullCheck(L_44);
		bool L_47;
		L_47 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_44, L_46);
		V_11 = L_47;
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_014d;
		}
	}
	{
		V_2 = _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
		goto IL_037b;
	}

IL_014d:
	{
		Type_t* L_49 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_50, NULL);
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_49, L_51);
		V_12 = L_52;
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_016e;
		}
	}
	{
		V_2 = _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
		goto IL_037b;
	}

IL_016e:
	{
		goto IL_0373;
	}

IL_0174:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		NullCheck(L_54);
		bool L_57;
		L_57 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_54, L_56);
		V_13 = L_57;
		bool L_58 = V_13;
		if (!L_58)
		{
			goto IL_0196;
		}
	}
	{
		V_2 = _stringLiteral90B5C222ABA0160226196AA2D9E75E9C0A6B3D39;
		goto IL_037b;
	}

IL_0196:
	{
		RuntimeObject* L_59 = ___obj0;
		V_14 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)IsInstClass((RuntimeObject*)L_59, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_14;
		if (!L_60)
		{
			goto IL_01f2;
		}
	}
	{
		RuntimeObject* L_61 = ___obj0;
		NullCheck(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_61, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_62 = ((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_61, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___javaInterface_0;
		NullCheck(L_62);
		intptr_t L_63;
		L_63 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_62, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_64 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_64, L_63, NULL);
		V_15 = L_64;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01e5:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_65 = V_15;
					if (!L_65)
					{
						goto IL_01f1;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_66 = V_15;
					NullCheck(L_66);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_66);
				}

IL_01f1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_67 = V_15;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_67);
			String_t* L_69;
			L_69 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_67, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_68, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
			String_t* L_70;
			L_70 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, L_69, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, NULL);
			V_2 = L_70;
			goto IL_037b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01f2:
	{
		Type_t* L_71 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_72, NULL);
		NullCheck(L_71);
		bool L_74;
		L_74 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_71, L_73);
		V_16 = L_74;
		bool L_75 = V_16;
		if (!L_75)
		{
			goto IL_0214;
		}
	}
	{
		V_2 = _stringLiteral9D9409152ADEE0D2A5BE9C04915D8BF65B6B929A;
		goto IL_037b;
	}

IL_0214:
	{
		Type_t* L_76 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_77, NULL);
		NullCheck(L_76);
		bool L_79;
		L_79 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_76, L_78);
		V_17 = L_79;
		bool L_80 = V_17;
		if (!L_80)
		{
			goto IL_0236;
		}
	}
	{
		V_2 = _stringLiteral672EA443B619B60F88713BFAFFF2A3A7433C6827;
		goto IL_037b;
	}

IL_0236:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_82, NULL);
		NullCheck(L_81);
		bool L_84;
		L_84 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(122 /* System.Boolean System.Type::Equals(System.Type) */, L_81, L_83);
		V_18 = L_84;
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_02b4;
		}
	}
	{
		RuntimeObject* L_86 = ___obj0;
		Type_t* L_87 = V_0;
		V_20 = (bool)((((RuntimeObject*)(RuntimeObject*)L_86) == ((RuntimeObject*)(Type_t*)L_87))? 1 : 0);
		bool L_88 = V_20;
		if (!L_88)
		{
			goto IL_0263;
		}
	}
	{
		V_2 = _stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E;
		goto IL_037b;
	}

IL_0263:
	{
		RuntimeObject* L_89 = ___obj0;
		V_19 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_89, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_90 = V_19;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_90);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_92;
		L_92 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_90, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_91, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_21 = L_92;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02a7:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_93 = V_21;
					if (!L_93)
					{
						goto IL_02b3;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_94 = V_21;
					NullCheck(L_94);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_94);
				}

IL_02b3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = V_21;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_95);
			String_t* L_97;
			L_97 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_95, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_96, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
			String_t* L_98;
			L_98 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, L_97, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, NULL);
			V_2 = L_98;
			goto IL_037b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02b4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_99, NULL);
		Type_t* L_101 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = AndroidReflection_IsAssignableFrom_mE4CCA11A87A7E49591786C98FFE239D6EA66F8C5(L_100, L_101, NULL);
		V_22 = L_102;
		bool L_103 = V_22;
		if (!L_103)
		{
			goto IL_0317;
		}
	}
	{
		Type_t* L_104 = V_0;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = VirtualFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 System.Type::GetArrayRank() */, L_104);
		V_24 = (bool)((((int32_t)((((int32_t)L_105) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_106 = V_24;
		if (!L_106)
		{
			goto IL_02e9;
		}
	}
	{
		Exception_t* L_107 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_107);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F9959D6967BF0405610B0041D446B892A631997)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B_RuntimeMethod_var)));
	}

IL_02e9:
	{
		StringBuilder_t* L_108 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_108);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_108, NULL);
		V_23 = L_108;
		StringBuilder_t* L_109 = V_23;
		NullCheck(L_109);
		StringBuilder_t* L_110;
		L_110 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_109, ((int32_t)91), NULL);
		StringBuilder_t* L_111 = V_23;
		Type_t* L_112 = V_0;
		NullCheck(L_112);
		Type_t* L_113;
		L_113 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_112);
		String_t* L_114;
		L_114 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_113, NULL);
		NullCheck(L_111);
		StringBuilder_t* L_115;
		L_115 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_111, L_114, NULL);
		StringBuilder_t* L_116 = V_23;
		NullCheck(L_116);
		String_t* L_117;
		L_117 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_116);
		V_2 = L_117;
		goto IL_037b;
	}

IL_0317:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_118 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119 = L_118;
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, _stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_120 = L_119;
		Type_t* L_121 = V_0;
		Type_t* L_122 = L_121;
		G_B50_0 = L_122;
		G_B50_1 = 1;
		G_B50_2 = L_120;
		G_B50_3 = L_120;
		if (L_122)
		{
			G_B51_0 = L_122;
			G_B51_1 = 1;
			G_B51_2 = L_120;
			G_B51_3 = L_120;
			goto IL_0330;
		}
	}
	{
		G_B52_0 = ((String_t*)(NULL));
		G_B52_1 = G_B50_1;
		G_B52_2 = G_B50_2;
		G_B52_3 = G_B50_3;
		goto IL_0335;
	}

IL_0330:
	{
		NullCheck(G_B51_0);
		String_t* L_123;
		L_123 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B51_0);
		G_B52_0 = L_123;
		G_B52_1 = G_B51_1;
		G_B52_2 = G_B51_2;
		G_B52_3 = G_B51_3;
	}

IL_0335:
	{
		NullCheck(G_B52_2);
		ArrayElementTypeCheck (G_B52_2, G_B52_0);
		(G_B52_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B52_1), (String_t*)G_B52_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_124 = G_B52_3;
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5BEC2753A5201D97F16E51BDAFBB18987ECD93B)));
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5BEC2753A5201D97F16E51BDAFBB18987ECD93B)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_125 = L_124;
		RuntimeObject* L_126 = ___obj0;
		G_B53_0 = 3;
		G_B53_1 = L_125;
		G_B53_2 = L_125;
		if (L_126)
		{
			G_B54_0 = 3;
			G_B54_1 = L_125;
			G_B54_2 = L_125;
			goto IL_0346;
		}
	}
	{
		G_B55_0 = ((String_t*)(NULL));
		G_B55_1 = G_B53_0;
		G_B55_2 = G_B53_1;
		G_B55_3 = G_B53_2;
		goto IL_034c;
	}

IL_0346:
	{
		RuntimeObject* L_127 = ___obj0;
		NullCheck(L_127);
		String_t* L_128;
		L_128 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_127);
		G_B55_0 = L_128;
		G_B55_1 = G_B54_0;
		G_B55_2 = G_B54_1;
		G_B55_3 = G_B54_2;
	}

IL_034c:
	{
		NullCheck(G_B55_2);
		ArrayElementTypeCheck (G_B55_2, G_B55_0);
		(G_B55_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B55_1), (String_t*)G_B55_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_129 = G_B55_3;
		NullCheck(L_129);
		ArrayElementTypeCheck (L_129, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924)));
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_130 = L_129;
		Type_t* L_131 = V_0;
		RuntimeObject* L_132 = ___obj0;
		G_B56_0 = 5;
		G_B56_1 = L_130;
		G_B56_2 = L_130;
		if ((((RuntimeObject*)(Type_t*)L_131) == ((RuntimeObject*)(RuntimeObject*)L_132)))
		{
			G_B57_0 = 5;
			G_B57_1 = L_130;
			G_B57_2 = L_130;
			goto IL_0362;
		}
	}
	{
		G_B58_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D));
		G_B58_1 = G_B56_0;
		G_B58_2 = G_B56_1;
		G_B58_3 = G_B56_2;
		goto IL_0367;
	}

IL_0362:
	{
		G_B58_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE771679CD1C7D2C1D9B577D342220161AD2D3D));
		G_B58_1 = G_B57_0;
		G_B58_2 = G_B57_1;
		G_B58_3 = G_B57_2;
	}

IL_0367:
	{
		NullCheck(G_B58_2);
		ArrayElementTypeCheck (G_B58_2, G_B58_0);
		(G_B58_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B58_1), (String_t*)G_B58_0);
		String_t* L_133;
		L_133 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(G_B58_3, NULL);
		Exception_t* L_134 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_134);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_134, L_133, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_134, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B_RuntimeMethod_var)));
	}

IL_0373:
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_037b;
	}

IL_037b:
	{
		String_t* L_135 = V_2;
		return L_135;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m17AB4F708FC61A101E77C0154684E3E119720FEB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD533C8C15007D85807A5FE481182C225E6A86D08);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralD533C8C15007D85807A5FE481182C225E6A86D08, NULL);
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		V_4 = L_18;
		goto IL_004a;
	}

IL_004a:
	{
		String_t* L_19 = V_4;
		return L_19;
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
// Conversion methods for marshalling of: UnityEngine.jvalue
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke(const jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225& unmarshaled, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke& marshaled)
{
	marshaled.___z_0 = static_cast<int32_t>(unmarshaled.___z_0);
	marshaled.___b_1 = unmarshaled.___b_1;
	marshaled.___c_2 = static_cast<uint8_t>(unmarshaled.___c_2);
	marshaled.___s_3 = unmarshaled.___s_3;
	marshaled.___i_4 = unmarshaled.___i_4;
	marshaled.___j_5 = unmarshaled.___j_5;
	marshaled.___f_6 = unmarshaled.___f_6;
	marshaled.___d_7 = unmarshaled.___d_7;
	marshaled.___l_8 = unmarshaled.___l_8;
}
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_back(const jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke& marshaled, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225& unmarshaled)
{
	bool unmarshaledz_temp_0 = false;
	unmarshaledz_temp_0 = static_cast<bool>(marshaled.___z_0);
	unmarshaled.___z_0 = unmarshaledz_temp_0;
	int8_t unmarshaledb_temp_1 = 0x0;
	unmarshaledb_temp_1 = marshaled.___b_1;
	unmarshaled.___b_1 = unmarshaledb_temp_1;
	Il2CppChar unmarshaledc_temp_2 = 0x0;
	unmarshaledc_temp_2 = static_cast<Il2CppChar>(marshaled.___c_2);
	unmarshaled.___c_2 = unmarshaledc_temp_2;
	int16_t unmarshaleds_temp_3 = 0;
	unmarshaleds_temp_3 = marshaled.___s_3;
	unmarshaled.___s_3 = unmarshaleds_temp_3;
	int32_t unmarshaledi_temp_4 = 0;
	unmarshaledi_temp_4 = marshaled.___i_4;
	unmarshaled.___i_4 = unmarshaledi_temp_4;
	int64_t unmarshaledj_temp_5 = 0;
	unmarshaledj_temp_5 = marshaled.___j_5;
	unmarshaled.___j_5 = unmarshaledj_temp_5;
	float unmarshaledf_temp_6 = 0.0f;
	unmarshaledf_temp_6 = marshaled.___f_6;
	unmarshaled.___f_6 = unmarshaledf_temp_6;
	double unmarshaledd_temp_7 = 0.0;
	unmarshaledd_temp_7 = marshaled.___d_7;
	unmarshaled.___d_7 = unmarshaledd_temp_7;
	intptr_t unmarshaledl_temp_8;
	memset((&unmarshaledl_temp_8), 0, sizeof(unmarshaledl_temp_8));
	unmarshaledl_temp_8 = marshaled.___l_8;
	unmarshaled.___l_8 = unmarshaledl_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.jvalue
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_cleanup(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.jvalue
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_com(const jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225& unmarshaled, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com& marshaled)
{
	marshaled.___z_0 = static_cast<int32_t>(unmarshaled.___z_0);
	marshaled.___b_1 = unmarshaled.___b_1;
	marshaled.___c_2 = static_cast<uint8_t>(unmarshaled.___c_2);
	marshaled.___s_3 = unmarshaled.___s_3;
	marshaled.___i_4 = unmarshaled.___i_4;
	marshaled.___j_5 = unmarshaled.___j_5;
	marshaled.___f_6 = unmarshaled.___f_6;
	marshaled.___d_7 = unmarshaled.___d_7;
	marshaled.___l_8 = unmarshaled.___l_8;
}
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_com_back(const jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com& marshaled, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225& unmarshaled)
{
	bool unmarshaledz_temp_0 = false;
	unmarshaledz_temp_0 = static_cast<bool>(marshaled.___z_0);
	unmarshaled.___z_0 = unmarshaledz_temp_0;
	int8_t unmarshaledb_temp_1 = 0x0;
	unmarshaledb_temp_1 = marshaled.___b_1;
	unmarshaled.___b_1 = unmarshaledb_temp_1;
	Il2CppChar unmarshaledc_temp_2 = 0x0;
	unmarshaledc_temp_2 = static_cast<Il2CppChar>(marshaled.___c_2);
	unmarshaled.___c_2 = unmarshaledc_temp_2;
	int16_t unmarshaleds_temp_3 = 0;
	unmarshaleds_temp_3 = marshaled.___s_3;
	unmarshaled.___s_3 = unmarshaleds_temp_3;
	int32_t unmarshaledi_temp_4 = 0;
	unmarshaledi_temp_4 = marshaled.___i_4;
	unmarshaled.___i_4 = unmarshaledi_temp_4;
	int64_t unmarshaledj_temp_5 = 0;
	unmarshaledj_temp_5 = marshaled.___j_5;
	unmarshaled.___j_5 = unmarshaledj_temp_5;
	float unmarshaledf_temp_6 = 0.0f;
	unmarshaledf_temp_6 = marshaled.___f_6;
	unmarshaled.___f_6 = unmarshaledf_temp_6;
	double unmarshaledd_temp_7 = 0.0;
	unmarshaledd_temp_7 = marshaled.___d_7;
	unmarshaled.___d_7 = unmarshaledd_temp_7;
	intptr_t unmarshaledl_temp_8;
	memset((&unmarshaledl_temp_8), 0, sizeof(unmarshaledl_temp_8));
	unmarshaledl_temp_8 = marshaled.___l_8;
	unmarshaled.___l_8 = unmarshaledl_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.jvalue
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_com_cleanup(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com& marshaled)
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
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m2A7EE301E50E6200B15858AD095B9E3DCA061B10 (intptr_t ___javaClass0, String_t* ___signature1, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___javaClass0;
		String_t* L_1 = ___signature1;
		intptr_t L_2;
		L_2 = _AndroidJNIHelper_GetConstructorID_m80A44C210DFE146BDF2EB8FDB2FF19A6BD0337CE(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___javaClass0;
		String_t* L_1 = ___methodName1;
		String_t* L_2 = ___signature2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_m289D8B1C26B13A8A132565AAFC42FD6C81E99072(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75 (intptr_t ___javaClass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___javaClass0;
		String_t* L_1 = ___fieldName1;
		String_t* L_2 = ___signature2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetFieldID_mE63F3DAF58A223435525E46590D1AE4F624E9628(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaRunnable_mAA9F7D043B9EDD0A0665E0CA217A7577962A456F (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___jrunnable0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_0 = ___jrunnable0;
		intptr_t L_1;
		L_1 = _AndroidJNIHelper_CreateJavaRunnable_m247E2AE8370951BEA9D154FC5AC04BE67F222CF1(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaProxy(UnityEngine.AndroidJavaProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaProxy_m2694F6C774901F6F33044BC41DA29C7CA3F9C1F5 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___proxy0, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_0 = ___proxy0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6(L_0, NULL);
		V_0 = L_1;
	}
	try
	{// begin try (depth: 1)
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2 = V_0;
		intptr_t L_3;
		L_3 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_2, NULL);
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_4 = ___proxy0;
		intptr_t L_5;
		L_5 = _AndroidJNIHelper_CreateJavaProxy_m6EB0D9FF190B75B8E49397619D1925F442EEBB8A(L_3, L_4, NULL);
		V_1 = L_5;
		goto IL_0024;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0018;
		}
		throw e;
	}

CATCH_0018:
	{// begin catch(System.Object)
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_0024:
	{
		intptr_t L_6 = V_1;
		return L_6;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::ConvertToJNIArray(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_ConvertToJNIArray_m0561DD17E7D4E7F598504ADFBEF8EC85F3B3A8E7 (RuntimeArray* ___array0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeArray* L_0 = ___array0;
		intptr_t L_1;
		L_1 = _AndroidJNIHelper_ConvertToJNIArray_mA0E7A187566E19273CEE6D3BAA053B2178FA6850(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* AndroidJNIHelper_CreateJNIArgArray_mCA21BB6EB162E1E77E8F95812BD662EA078EDDBF (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1;
		L_1 = _AndroidJNIHelper_CreateJNIArgArray_m2075C9584C3A31C8DFFA5D1DDBEE8C5FFBB95892(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_m287B584251A89771CD7C767119A350BD6DDACCAB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___jniArgs1, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = ___jniArgs1;
		_AndroidJNIHelper_DeleteJNIArgArray_mFA2A3664183847343FBB1F76ACD32DE1B1ED0681(L_0, L_1, NULL);
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m06AB8A133FD78AE60E6B5871CBD24609B9444ED7 (intptr_t ___jclass0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		intptr_t L_2;
		L_2 = _AndroidJNIHelper_GetConstructorID_m7506B43EEFEA5F37F1548F63497D31378460FC61(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mC54EF67EA8929F905AA8ACC8A498F21B548E0964 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_mF34E230F83D1166968B9B80CF2F9F3CFC00CD0C4(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
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
// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FindClass_mA0D17BF36250F96F40D8DCF193A7C65E6F6DED7F (String_t* ___name0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_FindClass_mA0D17BF36250F96F40D8DCF193A7C65E6F6DED7F_ftn) (String_t*);
	static AndroidJNI_FindClass_mA0D17BF36250F96F40D8DCF193A7C65E6F6DED7F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FindClass_mA0D17BF36250F96F40D8DCF193A7C65E6F6DED7F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FindClass(System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___name0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FromReflectedMethod_m4483E987AEC5B258356E5A89F4C3865573AADFE6 (intptr_t ___refMethod0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_FromReflectedMethod_m4483E987AEC5B258356E5A89F4C3865573AADFE6_ftn) (intptr_t);
	static AndroidJNI_FromReflectedMethod_m4483E987AEC5B258356E5A89F4C3865573AADFE6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromReflectedMethod_m4483E987AEC5B258356E5A89F4C3865573AADFE6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___refMethod0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_m6C27C01B14483F99373608BF1A56CA53BA46F926 (const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ExceptionOccurred_m6C27C01B14483F99373608BF1A56CA53BA46F926_ftn) ();
	static AndroidJNI_ExceptionOccurred_m6C27C01B14483F99373608BF1A56CA53BA46F926_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ExceptionOccurred_m6C27C01B14483F99373608BF1A56CA53BA46F926_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ExceptionOccurred()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::ExceptionDescribe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionDescribe_m9E582B7E3ED1CA3D23A35325F676CD88A1E05B5D (const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_ExceptionDescribe_m9E582B7E3ED1CA3D23A35325F676CD88A1E05B5D_ftn) ();
	static AndroidJNI_ExceptionDescribe_m9E582B7E3ED1CA3D23A35325F676CD88A1E05B5D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ExceptionDescribe_m9E582B7E3ED1CA3D23A35325F676CD88A1E05B5D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ExceptionDescribe()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_m90681289A6CEAF160DB188A3E2177F323D996F82 (const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_ExceptionClear_m90681289A6CEAF160DB188A3E2177F323D996F82_ftn) ();
	static AndroidJNI_ExceptionClear_m90681289A6CEAF160DB188A3E2177F323D996F82_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ExceptionClear_m90681289A6CEAF160DB188A3E2177F323D996F82_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ExceptionClear()");
	_il2cpp_icall_func();
}
// System.Int32 UnityEngine.AndroidJNI::PushLocalFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_PushLocalFrame_m4B2AE2B5D545086A6720E97FA8F427F245360FC8 (int32_t ___capacity0, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_PushLocalFrame_m4B2AE2B5D545086A6720E97FA8F427F245360FC8_ftn) (int32_t);
	static AndroidJNI_PushLocalFrame_m4B2AE2B5D545086A6720E97FA8F427F245360FC8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_PushLocalFrame_m4B2AE2B5D545086A6720E97FA8F427F245360FC8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::PushLocalFrame(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___capacity0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_PopLocalFrame_m2128BB5AAAE2E2E12161EBD13866C69D50D5B78B (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_PopLocalFrame_m2128BB5AAAE2E2E12161EBD13866C69D50D5B78B_ftn) (intptr_t);
	static AndroidJNI_PopLocalFrame_m2128BB5AAAE2E2E12161EBD13866C69D50D5B78B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_PopLocalFrame_m2128BB5AAAE2E2E12161EBD13866C69D50D5B78B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___ptr0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewGlobalRef_m5F4875C8F71CF25DCC437D2EDB75320C487DB074 (intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewGlobalRef_m5F4875C8F71CF25DCC437D2EDB75320C487DB074_ftn) (intptr_t);
	static AndroidJNI_NewGlobalRef_m5F4875C8F71CF25DCC437D2EDB75320C487DB074_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewGlobalRef_m5F4875C8F71CF25DCC437D2EDB75320C487DB074_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteGlobalRef_m0420C00BACE4BD46DD58F8738DFD9EE8189F542A (intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_DeleteGlobalRef_m0420C00BACE4BD46DD58F8738DFD9EE8189F542A_ftn) (intptr_t);
	static AndroidJNI_DeleteGlobalRef_m0420C00BACE4BD46DD58F8738DFD9EE8189F542A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_DeleteGlobalRef_m0420C00BACE4BD46DD58F8738DFD9EE8189F542A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)");
	_il2cpp_icall_func(___obj0);
}
// System.IntPtr UnityEngine.AndroidJNI::NewWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewWeakGlobalRef_m74933FB5C1E361F566A96B25CF096C770860CD94 (intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewWeakGlobalRef_m74933FB5C1E361F566A96B25CF096C770860CD94_ftn) (intptr_t);
	static AndroidJNI_NewWeakGlobalRef_m74933FB5C1E361F566A96B25CF096C770860CD94_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewWeakGlobalRef_m74933FB5C1E361F566A96B25CF096C770860CD94_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewWeakGlobalRef(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::DeleteWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteWeakGlobalRef_m23C9808936212AC528658CB4989F15580BB0C734 (intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_DeleteWeakGlobalRef_m23C9808936212AC528658CB4989F15580BB0C734_ftn) (intptr_t);
	static AndroidJNI_DeleteWeakGlobalRef_m23C9808936212AC528658CB4989F15580BB0C734_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_DeleteWeakGlobalRef_m23C9808936212AC528658CB4989F15580BB0C734_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::DeleteWeakGlobalRef(System.IntPtr)");
	_il2cpp_icall_func(___obj0);
}
// System.IntPtr UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewLocalRef_mA95E1CDBA47E9CEC4D55BBA178F0ACF4219F6E29 (intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewLocalRef_mA95E1CDBA47E9CEC4D55BBA178F0ACF4219F6E29_ftn) (intptr_t);
	static AndroidJNI_NewLocalRef_mA95E1CDBA47E9CEC4D55BBA178F0ACF4219F6E29_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewLocalRef_mA95E1CDBA47E9CEC4D55BBA178F0ACF4219F6E29_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteLocalRef_m2A8137D15FDE9F781B13F71348FD5FFA1F9841BD (intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_DeleteLocalRef_m2A8137D15FDE9F781B13F71348FD5FFA1F9841BD_ftn) (intptr_t);
	static AndroidJNI_DeleteLocalRef_m2A8137D15FDE9F781B13F71348FD5FFA1F9841BD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_DeleteLocalRef_m2A8137D15FDE9F781B13F71348FD5FFA1F9841BD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)");
	_il2cpp_icall_func(___obj0);
}
// System.IntPtr UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObject_mD058F016DBC3D58BF2A64EA84D6943052D01E8B1 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewObject_mD058F016DBC3D58BF2A64EA84D6943052D01E8B1_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_NewObject_mD058F016DBC3D58BF2A64EA84D6943052D01E8B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewObject_mD058F016DBC3D58BF2A64EA84D6943052D01E8B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectClass_mA8282FA341DF231C0ADD07DE0B0D0E5999EA0207 (intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetObjectClass_mA8282FA341DF231C0ADD07DE0B0D0E5999EA0207_ftn) (intptr_t);
	static AndroidJNI_GetObjectClass_mA8282FA341DF231C0ADD07DE0B0D0E5999EA0207_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetObjectClass_mA8282FA341DF231C0ADD07DE0B0D0E5999EA0207_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_mCB601A11C971557E2F89DD968224749BD71D2B3A (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetMethodID_mCB601A11C971557E2F89DD968224749BD71D2B3A_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetMethodID_mCB601A11C971557E2F89DD968224749BD71D2B3A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetMethodID_mCB601A11C971557E2F89DD968224749BD71D2B3A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___clazz0, ___name1, ___sig2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetFieldID_m8CA4FD910FCC33D2D430E1A897043F9E7CD0DF19 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetFieldID_m8CA4FD910FCC33D2D430E1A897043F9E7CD0DF19_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetFieldID_m8CA4FD910FCC33D2D430E1A897043F9E7CD0DF19_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetFieldID_m8CA4FD910FCC33D2D430E1A897043F9E7CD0DF19_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetFieldID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___clazz0, ___name1, ___sig2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticMethodID_m46303AF2AAD855E623DFC9C341E848735B626A77 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetStaticMethodID_m46303AF2AAD855E623DFC9C341E848735B626A77_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetStaticMethodID_m46303AF2AAD855E623DFC9C341E848735B626A77_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticMethodID_m46303AF2AAD855E623DFC9C341E848735B626A77_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___clazz0, ___name1, ___sig2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetStaticFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticFieldID_m2B47B2D935455E73BDA9E9871FD5A6DF5EDD2717 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetStaticFieldID_m2B47B2D935455E73BDA9E9871FD5A6DF5EDD2717_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetStaticFieldID_m2B47B2D935455E73BDA9E9871FD5A6DF5EDD2717_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticFieldID_m2B47B2D935455E73BDA9E9871FD5A6DF5EDD2717_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticFieldID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___clazz0, ___name1, ___sig2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::NewString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewString_mF3FC7534344BDF4B4BD2B2DB5442B06E2402B23F (String_t* ___chars0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___chars0;
		intptr_t L_1;
		L_1 = AndroidJNI_NewStringFromStr_mEEF9F3FF518F3CEEE81780A61DDEB0B93D3ED548(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNI::NewStringFromStr(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewStringFromStr_mEEF9F3FF518F3CEEE81780A61DDEB0B93D3ED548 (String_t* ___chars0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewStringFromStr_mEEF9F3FF518F3CEEE81780A61DDEB0B93D3ED548_ftn) (String_t*);
	static AndroidJNI_NewStringFromStr_mEEF9F3FF518F3CEEE81780A61DDEB0B93D3ED548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewStringFromStr_mEEF9F3FF518F3CEEE81780A61DDEB0B93D3ED548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewStringFromStr(System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___chars0);
	return icallRetVal;
}
// System.String UnityEngine.AndroidJNI::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringChars_m462C62C322F38797F05A818CEF5C8D235F1F6714 (intptr_t ___str0, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_GetStringChars_m462C62C322F38797F05A818CEF5C8D235F1F6714_ftn) (intptr_t);
	static AndroidJNI_GetStringChars_m462C62C322F38797F05A818CEF5C8D235F1F6714_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStringChars_m462C62C322F38797F05A818CEF5C8D235F1F6714_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStringChars(System.IntPtr)");
	String_t* icallRetVal = _il2cpp_icall_func(___str0);
	return icallRetVal;
}
// System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethod_m932940262AEC9A8121916054C90D79866D29C547 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_CallStringMethod_m932940262AEC9A8121916054C90D79866D29C547_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStringMethod_m932940262AEC9A8121916054C90D79866D29C547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStringMethod_m932940262AEC9A8121916054C90D79866D29C547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	String_t* icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallObjectMethod_m059D1BE669D486F2A26B40D6B90BF157B84A3CA3 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_CallObjectMethod_m059D1BE669D486F2A26B40D6B90BF157B84A3CA3_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallObjectMethod_m059D1BE669D486F2A26B40D6B90BF157B84A3CA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallObjectMethod_m059D1BE669D486F2A26B40D6B90BF157B84A3CA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethod_m5CE09EA0846BF49ABE3E23BC923710A0F1FF4787 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_CallIntMethod_m5CE09EA0846BF49ABE3E23BC923710A0F1FF4787_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallIntMethod_m5CE09EA0846BF49ABE3E23BC923710A0F1FF4787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallIntMethod_m5CE09EA0846BF49ABE3E23BC923710A0F1FF4787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int32_t icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallBooleanMethod_m6556ACCEDD78DE903521F341072907C4EC90FC96 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_CallBooleanMethod_m6556ACCEDD78DE903521F341072907C4EC90FC96_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallBooleanMethod_m6556ACCEDD78DE903521F341072907C4EC90FC96_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallBooleanMethod_m6556ACCEDD78DE903521F341072907C4EC90FC96_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	bool icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallShortMethod_m889B967EB2D48E331692B199D2EDABACEC8D5F01 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef int16_t (*AndroidJNI_CallShortMethod_m889B967EB2D48E331692B199D2EDABACEC8D5F01_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallShortMethod_m889B967EB2D48E331692B199D2EDABACEC8D5F01_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallShortMethod_m889B967EB2D48E331692B199D2EDABACEC8D5F01_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int16_t icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.SByte UnityEngine.AndroidJNI::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallSByteMethod_m45D5ABB4DDFBFEFC6DB132FC2D8463C501F1E4A5 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef int8_t (*AndroidJNI_CallSByteMethod_m45D5ABB4DDFBFEFC6DB132FC2D8463C501F1E4A5_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallSByteMethod_m45D5ABB4DDFBFEFC6DB132FC2D8463C501F1E4A5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallSByteMethod_m45D5ABB4DDFBFEFC6DB132FC2D8463C501F1E4A5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int8_t icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallCharMethod_mEF6E65AB2EE0BFAA136878966C42FB21529CB91D (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*AndroidJNI_CallCharMethod_mEF6E65AB2EE0BFAA136878966C42FB21529CB91D_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallCharMethod_mEF6E65AB2EE0BFAA136878966C42FB21529CB91D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallCharMethod_mEF6E65AB2EE0BFAA136878966C42FB21529CB91D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallFloatMethod_m5BC422FC7D771A08DD18B443CBE3941ACD239FD9 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef float (*AndroidJNI_CallFloatMethod_m5BC422FC7D771A08DD18B443CBE3941ACD239FD9_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallFloatMethod_m5BC422FC7D771A08DD18B443CBE3941ACD239FD9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallFloatMethod_m5BC422FC7D771A08DD18B443CBE3941ACD239FD9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	float icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethod_m88A34942D1206EEE8BEA95475722D2E8FFFFC711 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef double (*AndroidJNI_CallDoubleMethod_m88A34942D1206EEE8BEA95475722D2E8FFFFC711_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallDoubleMethod_m88A34942D1206EEE8BEA95475722D2E8FFFFC711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallDoubleMethod_m88A34942D1206EEE8BEA95475722D2E8FFFFC711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	double icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallLongMethod_m2AF630255CC50CB6A875E4FC1E13023699504C6E (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef int64_t (*AndroidJNI_CallLongMethod_m2AF630255CC50CB6A875E4FC1E13023699504C6E_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallLongMethod_m2AF630255CC50CB6A875E4FC1E13023699504C6E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallLongMethod_m2AF630255CC50CB6A875E4FC1E13023699504C6E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int64_t icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallVoidMethod_m0B2ED17E5CA42D8D1D503CD329482A5923F1ED67 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_CallVoidMethod_m0B2ED17E5CA42D8D1D503CD329482A5923F1ED67_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallVoidMethod_m0B2ED17E5CA42D8D1D503CD329482A5923F1ED67_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallVoidMethod_m0B2ED17E5CA42D8D1D503CD329482A5923F1ED67_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	_il2cpp_icall_func(___obj0, ___methodID1, ___args2);
}
// System.String UnityEngine.AndroidJNI::GetStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringField_m72B978571BE59E46CE385ABF43D27F4F3AD428DC (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_GetStringField_m72B978571BE59E46CE385ABF43D27F4F3AD428DC_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStringField_m72B978571BE59E46CE385ABF43D27F4F3AD428DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStringField_m72B978571BE59E46CE385ABF43D27F4F3AD428DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStringField(System.IntPtr,System.IntPtr)");
	String_t* icallRetVal = _il2cpp_icall_func(___obj0, ___fieldID1);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectField_mDC51440CDD5C41B8BE5AB1FC0DB1D4A75A0B00B6 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetObjectField_mDC51440CDD5C41B8BE5AB1FC0DB1D4A75A0B00B6_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetObjectField_mDC51440CDD5C41B8BE5AB1FC0DB1D4A75A0B00B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetObjectField_mDC51440CDD5C41B8BE5AB1FC0DB1D4A75A0B00B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetObjectField(System.IntPtr,System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0, ___fieldID1);
	return icallRetVal;
}
// System.Boolean UnityEngine.AndroidJNI::GetBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_GetBooleanField_mD4A949E18A3AE1F8844105267EBD669EF4992736 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_GetBooleanField_mD4A949E18A3AE1F8844105267EBD669EF4992736_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetBooleanField_mD4A949E18A3AE1F8844105267EBD669EF4992736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetBooleanField_mD4A949E18A3AE1F8844105267EBD669EF4992736_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetBooleanField(System.IntPtr,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___obj0, ___fieldID1);
	return icallRetVal;
}
// System.SByte UnityEngine.AndroidJNI::GetSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_GetSByteField_m74A3F36343350116F6A6F04E91117AAB5CBFFD0C (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef int8_t (*AndroidJNI_GetSByteField_m74A3F36343350116F6A6F04E91117AAB5CBFFD0C_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetSByteField_m74A3F36343350116F6A6F04E91117AAB5CBFFD0C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetSByteField_m74A3F36343350116F6A6F04E91117AAB5CBFFD0C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetSByteField(System.IntPtr,System.IntPtr)");
	int8_t icallRetVal = _il2cpp_icall_func(___obj0, ___fieldID1);
	return icallRetVal;
}
// System.Char UnityEngine.AndroidJNI::GetCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_GetCharField_m2E6B5082E0CA1EF9F3F3A5F503BB61404DB4B64E (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*AndroidJNI_GetCharField_m2E6B5082E0CA1EF9F3F3A5F503BB61404DB4B64E_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetCharField_m2E6B5082E0CA1EF9F3F3A5F503BB61404DB4B64E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetCharField_m2E6B5082E0CA1EF9F3F3A5F503BB61404DB4B64E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetCharField(System.IntPtr,System.IntPtr)");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___obj0, ___fieldID1);
	return icallRetVal;
}
// System.Int16 UnityEngine.AndroidJNI::GetShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_GetShortField_m1BCF7D56CEB4E2C85C1BE6C1F8BB6F194C437427 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef int16_t (*AndroidJNI_GetShortField_m1BCF7D56CEB4E2C85C1BE6C1F8BB6F194C437427_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetShortField_m1BCF7D56CEB4E2C85C1BE6C1F8BB6F194C437427_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetShortField_m1BCF7D56CEB4E2C85C1BE6C1F8BB6F194C437427_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetShortField(System.IntPtr,System.IntPtr)");
	int16_t icallRetVal = _il2cpp_icall_func(___obj0, ___fieldID1);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::GetIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetIntField_m429B20FC0C03F9526125AF46A37FE36AEDB27A84 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_GetIntField_m429B20FC0C03F9526125AF46A37FE36AEDB27A84_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetIntField_m429B20FC0C03F9526125AF46A37FE36AEDB27A84_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetIntField_m429B20FC0C03F9526125AF46A37FE36AEDB27A84_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetIntField(System.IntPtr,System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___obj0, ___fieldID1);
	return icallRetVal;
}
// System.Int64 UnityEngine.AndroidJNI::GetLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetLongField_mE133B0457F7DA846EACEE402DA6FBA2F4ABE1904 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef int64_t (*AndroidJNI_GetLongField_mE133B0457F7DA846EACEE402DA6FBA2F4ABE1904_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetLongField_mE133B0457F7DA846EACEE402DA6FBA2F4ABE1904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetLongField_mE133B0457F7DA846EACEE402DA6FBA2F4ABE1904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetLongField(System.IntPtr,System.IntPtr)");
	int64_t icallRetVal = _il2cpp_icall_func(___obj0, ___fieldID1);
	return icallRetVal;
}
// System.Single UnityEngine.AndroidJNI::GetFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_GetFloatField_mAFA7BF7AD9A5DCDFCA7847870CA28492776F87FC (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef float (*AndroidJNI_GetFloatField_mAFA7BF7AD9A5DCDFCA7847870CA28492776F87FC_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetFloatField_mAFA7BF7AD9A5DCDFCA7847870CA28492776F87FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetFloatField_mAFA7BF7AD9A5DCDFCA7847870CA28492776F87FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetFloatField(System.IntPtr,System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___obj0, ___fieldID1);
	return icallRetVal;
}
// System.Double UnityEngine.AndroidJNI::GetDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_GetDoubleField_m3A52B3C44D03F55A287B38E5069240525EF73A28 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef double (*AndroidJNI_GetDoubleField_m3A52B3C44D03F55A287B38E5069240525EF73A28_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetDoubleField_m3A52B3C44D03F55A287B38E5069240525EF73A28_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetDoubleField_m3A52B3C44D03F55A287B38E5069240525EF73A28_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetDoubleField(System.IntPtr,System.IntPtr)");
	double icallRetVal = _il2cpp_icall_func(___obj0, ___fieldID1);
	return icallRetVal;
}
// System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethod_m728910FCD2307FC8A06ACA204C6308896E1F9634 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_CallStaticStringMethod_m728910FCD2307FC8A06ACA204C6308896E1F9634_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticStringMethod_m728910FCD2307FC8A06ACA204C6308896E1F9634_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticStringMethod_m728910FCD2307FC8A06ACA204C6308896E1F9634_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	String_t* icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallStaticObjectMethod_mD81C9407381F719A207F5AD038D38A1DDF181306 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_CallStaticObjectMethod_mD81C9407381F719A207F5AD038D38A1DDF181306_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticObjectMethod_mD81C9407381F719A207F5AD038D38A1DDF181306_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticObjectMethod_mD81C9407381F719A207F5AD038D38A1DDF181306_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallStaticIntMethod_mF3BBC45BEA5618BDE9E8C35CF86E4089CB366FAB (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_CallStaticIntMethod_mF3BBC45BEA5618BDE9E8C35CF86E4089CB366FAB_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticIntMethod_mF3BBC45BEA5618BDE9E8C35CF86E4089CB366FAB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticIntMethod_mF3BBC45BEA5618BDE9E8C35CF86E4089CB366FAB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int32_t icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallStaticBooleanMethod_m19B53E56531AEDB6735F1D5651E622E4E823EE92 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_CallStaticBooleanMethod_m19B53E56531AEDB6735F1D5651E622E4E823EE92_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticBooleanMethod_m19B53E56531AEDB6735F1D5651E622E4E823EE92_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticBooleanMethod_m19B53E56531AEDB6735F1D5651E622E4E823EE92_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	bool icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallStaticShortMethod_m7510F3205665CF3134DD91BAB86458A916B4FA67 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef int16_t (*AndroidJNI_CallStaticShortMethod_m7510F3205665CF3134DD91BAB86458A916B4FA67_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticShortMethod_m7510F3205665CF3134DD91BAB86458A916B4FA67_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticShortMethod_m7510F3205665CF3134DD91BAB86458A916B4FA67_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int16_t icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.SByte UnityEngine.AndroidJNI::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallStaticSByteMethod_m91B3565EC4E89DB5DD6994ED9DC03DC1506D9ABD (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef int8_t (*AndroidJNI_CallStaticSByteMethod_m91B3565EC4E89DB5DD6994ED9DC03DC1506D9ABD_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticSByteMethod_m91B3565EC4E89DB5DD6994ED9DC03DC1506D9ABD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticSByteMethod_m91B3565EC4E89DB5DD6994ED9DC03DC1506D9ABD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int8_t icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallStaticCharMethod_mC17CFB28DA453858E2D5189C4A93985A5074ECAC (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*AndroidJNI_CallStaticCharMethod_mC17CFB28DA453858E2D5189C4A93985A5074ECAC_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticCharMethod_mC17CFB28DA453858E2D5189C4A93985A5074ECAC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticCharMethod_mC17CFB28DA453858E2D5189C4A93985A5074ECAC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallStaticFloatMethod_m50DD95A67820F5A3E3C62556600D985DA697889B (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef float (*AndroidJNI_CallStaticFloatMethod_m50DD95A67820F5A3E3C62556600D985DA697889B_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticFloatMethod_m50DD95A67820F5A3E3C62556600D985DA697889B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticFloatMethod_m50DD95A67820F5A3E3C62556600D985DA697889B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	float icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallStaticDoubleMethod_m9396E74A4DC7D047134A5DCFFBB343651C1C46FC (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef double (*AndroidJNI_CallStaticDoubleMethod_m9396E74A4DC7D047134A5DCFFBB343651C1C46FC_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticDoubleMethod_m9396E74A4DC7D047134A5DCFFBB343651C1C46FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticDoubleMethod_m9396E74A4DC7D047134A5DCFFBB343651C1C46FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	double icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallStaticLongMethod_m2E00D7592B163630AF5352E89F6180F6B56B8278 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef int64_t (*AndroidJNI_CallStaticLongMethod_m2E00D7592B163630AF5352E89F6180F6B56B8278_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticLongMethod_m2E00D7592B163630AF5352E89F6180F6B56B8278_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticLongMethod_m2E00D7592B163630AF5352E89F6180F6B56B8278_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int64_t icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallStaticVoidMethod_mE1E41BEF150679746147820E058E034CCE9F5FB3 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_CallStaticVoidMethod_mE1E41BEF150679746147820E058E034CCE9F5FB3_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*);
	static AndroidJNI_CallStaticVoidMethod_mE1E41BEF150679746147820E058E034CCE9F5FB3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticVoidMethod_mE1E41BEF150679746147820E058E034CCE9F5FB3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	_il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
}
// System.String UnityEngine.AndroidJNI::GetStaticStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStaticStringField_m6C8673931581ED0646BA2D059C45514ED9D8530F (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_GetStaticStringField_m6C8673931581ED0646BA2D059C45514ED9D8530F_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticStringField_m6C8673931581ED0646BA2D059C45514ED9D8530F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticStringField_m6C8673931581ED0646BA2D059C45514ED9D8530F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticStringField(System.IntPtr,System.IntPtr)");
	String_t* icallRetVal = _il2cpp_icall_func(___clazz0, ___fieldID1);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetStaticObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticObjectField_m6E2116C7207C76FBFE2D26A376B10C00D9C49190 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetStaticObjectField_m6E2116C7207C76FBFE2D26A376B10C00D9C49190_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticObjectField_m6E2116C7207C76FBFE2D26A376B10C00D9C49190_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticObjectField_m6E2116C7207C76FBFE2D26A376B10C00D9C49190_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticObjectField(System.IntPtr,System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___clazz0, ___fieldID1);
	return icallRetVal;
}
// System.Boolean UnityEngine.AndroidJNI::GetStaticBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_GetStaticBooleanField_m91EE84C77BB16B3ADE727DDCC0F6AC7D262012CA (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_GetStaticBooleanField_m91EE84C77BB16B3ADE727DDCC0F6AC7D262012CA_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticBooleanField_m91EE84C77BB16B3ADE727DDCC0F6AC7D262012CA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticBooleanField_m91EE84C77BB16B3ADE727DDCC0F6AC7D262012CA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticBooleanField(System.IntPtr,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___clazz0, ___fieldID1);
	return icallRetVal;
}
// System.SByte UnityEngine.AndroidJNI::GetStaticSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_GetStaticSByteField_m3F82DDF01CA24E139B8F35C5821C528FB8B04B96 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef int8_t (*AndroidJNI_GetStaticSByteField_m3F82DDF01CA24E139B8F35C5821C528FB8B04B96_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticSByteField_m3F82DDF01CA24E139B8F35C5821C528FB8B04B96_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticSByteField_m3F82DDF01CA24E139B8F35C5821C528FB8B04B96_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticSByteField(System.IntPtr,System.IntPtr)");
	int8_t icallRetVal = _il2cpp_icall_func(___clazz0, ___fieldID1);
	return icallRetVal;
}
// System.Char UnityEngine.AndroidJNI::GetStaticCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_GetStaticCharField_m70532959E334E3745AEF21C7A77C10221E639F20 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*AndroidJNI_GetStaticCharField_m70532959E334E3745AEF21C7A77C10221E639F20_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticCharField_m70532959E334E3745AEF21C7A77C10221E639F20_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticCharField_m70532959E334E3745AEF21C7A77C10221E639F20_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticCharField(System.IntPtr,System.IntPtr)");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___clazz0, ___fieldID1);
	return icallRetVal;
}
// System.Int16 UnityEngine.AndroidJNI::GetStaticShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_GetStaticShortField_mB4FC3F0637204FE8E2466F8E9C5F2AE9C4F53101 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef int16_t (*AndroidJNI_GetStaticShortField_mB4FC3F0637204FE8E2466F8E9C5F2AE9C4F53101_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticShortField_mB4FC3F0637204FE8E2466F8E9C5F2AE9C4F53101_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticShortField_mB4FC3F0637204FE8E2466F8E9C5F2AE9C4F53101_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticShortField(System.IntPtr,System.IntPtr)");
	int16_t icallRetVal = _il2cpp_icall_func(___clazz0, ___fieldID1);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::GetStaticIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetStaticIntField_m6AE681D1B1EF0DFE81714A3EB2CBEA6281DF136E (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_GetStaticIntField_m6AE681D1B1EF0DFE81714A3EB2CBEA6281DF136E_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticIntField_m6AE681D1B1EF0DFE81714A3EB2CBEA6281DF136E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticIntField_m6AE681D1B1EF0DFE81714A3EB2CBEA6281DF136E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticIntField(System.IntPtr,System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___clazz0, ___fieldID1);
	return icallRetVal;
}
// System.Int64 UnityEngine.AndroidJNI::GetStaticLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetStaticLongField_m2838DE5CE092E4DCD0BF8C69AE366444117AE22A (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef int64_t (*AndroidJNI_GetStaticLongField_m2838DE5CE092E4DCD0BF8C69AE366444117AE22A_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticLongField_m2838DE5CE092E4DCD0BF8C69AE366444117AE22A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticLongField_m2838DE5CE092E4DCD0BF8C69AE366444117AE22A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticLongField(System.IntPtr,System.IntPtr)");
	int64_t icallRetVal = _il2cpp_icall_func(___clazz0, ___fieldID1);
	return icallRetVal;
}
// System.Single UnityEngine.AndroidJNI::GetStaticFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_GetStaticFloatField_m33D3E4CC3A6219BD8529ACEF168644650093C326 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef float (*AndroidJNI_GetStaticFloatField_m33D3E4CC3A6219BD8529ACEF168644650093C326_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticFloatField_m33D3E4CC3A6219BD8529ACEF168644650093C326_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticFloatField_m33D3E4CC3A6219BD8529ACEF168644650093C326_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticFloatField(System.IntPtr,System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___clazz0, ___fieldID1);
	return icallRetVal;
}
// System.Double UnityEngine.AndroidJNI::GetStaticDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_GetStaticDoubleField_m538DA725808C50CF8CF77FA6539865F22761FA86 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	typedef double (*AndroidJNI_GetStaticDoubleField_m538DA725808C50CF8CF77FA6539865F22761FA86_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticDoubleField_m538DA725808C50CF8CF77FA6539865F22761FA86_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticDoubleField_m538DA725808C50CF8CF77FA6539865F22761FA86_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticDoubleField(System.IntPtr,System.IntPtr)");
	double icallRetVal = _il2cpp_icall_func(___clazz0, ___fieldID1);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::SetStaticStringField(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticStringField_mBE032CF9EBDF2E8D724512826F2CA5AFA075C21F (intptr_t ___clazz0, intptr_t ___fieldID1, String_t* ___val2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetStaticStringField_mBE032CF9EBDF2E8D724512826F2CA5AFA075C21F_ftn) (intptr_t, intptr_t, String_t*);
	static AndroidJNI_SetStaticStringField_mBE032CF9EBDF2E8D724512826F2CA5AFA075C21F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetStaticStringField_mBE032CF9EBDF2E8D724512826F2CA5AFA075C21F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetStaticStringField(System.IntPtr,System.IntPtr,System.String)");
	_il2cpp_icall_func(___clazz0, ___fieldID1, ___val2);
}
// System.Void UnityEngine.AndroidJNI::SetStaticObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticObjectField_mB5FFECBB4D5D963EF0454957F9F4661FFA833555 (intptr_t ___clazz0, intptr_t ___fieldID1, intptr_t ___val2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetStaticObjectField_mB5FFECBB4D5D963EF0454957F9F4661FFA833555_ftn) (intptr_t, intptr_t, intptr_t);
	static AndroidJNI_SetStaticObjectField_mB5FFECBB4D5D963EF0454957F9F4661FFA833555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetStaticObjectField_mB5FFECBB4D5D963EF0454957F9F4661FFA833555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetStaticObjectField(System.IntPtr,System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___clazz0, ___fieldID1, ___val2);
}
// System.Void UnityEngine.AndroidJNI::SetStaticBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticBooleanField_m487E8387D32B024009C37D9B3A800381A475C659 (intptr_t ___clazz0, intptr_t ___fieldID1, bool ___val2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetStaticBooleanField_m487E8387D32B024009C37D9B3A800381A475C659_ftn) (intptr_t, intptr_t, bool);
	static AndroidJNI_SetStaticBooleanField_m487E8387D32B024009C37D9B3A800381A475C659_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetStaticBooleanField_m487E8387D32B024009C37D9B3A800381A475C659_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetStaticBooleanField(System.IntPtr,System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___clazz0, ___fieldID1, ___val2);
}
// System.Void UnityEngine.AndroidJNI::SetStaticSByteField(System.IntPtr,System.IntPtr,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticSByteField_mBD550D0F0E9A54FD039C0DE4EE8C21990C5A39C3 (intptr_t ___clazz0, intptr_t ___fieldID1, int8_t ___val2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetStaticSByteField_mBD550D0F0E9A54FD039C0DE4EE8C21990C5A39C3_ftn) (intptr_t, intptr_t, int8_t);
	static AndroidJNI_SetStaticSByteField_mBD550D0F0E9A54FD039C0DE4EE8C21990C5A39C3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetStaticSByteField_mBD550D0F0E9A54FD039C0DE4EE8C21990C5A39C3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetStaticSByteField(System.IntPtr,System.IntPtr,System.SByte)");
	_il2cpp_icall_func(___clazz0, ___fieldID1, ___val2);
}
// System.Void UnityEngine.AndroidJNI::SetStaticCharField(System.IntPtr,System.IntPtr,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticCharField_m06825B1CFD06746E47F0192FA4F2FC3D3125E9DA (intptr_t ___clazz0, intptr_t ___fieldID1, Il2CppChar ___val2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetStaticCharField_m06825B1CFD06746E47F0192FA4F2FC3D3125E9DA_ftn) (intptr_t, intptr_t, Il2CppChar);
	static AndroidJNI_SetStaticCharField_m06825B1CFD06746E47F0192FA4F2FC3D3125E9DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetStaticCharField_m06825B1CFD06746E47F0192FA4F2FC3D3125E9DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetStaticCharField(System.IntPtr,System.IntPtr,System.Char)");
	_il2cpp_icall_func(___clazz0, ___fieldID1, ___val2);
}
// System.Void UnityEngine.AndroidJNI::SetStaticShortField(System.IntPtr,System.IntPtr,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticShortField_m4A4132E557627F1954AE30C36CDD3BB329949C9A (intptr_t ___clazz0, intptr_t ___fieldID1, int16_t ___val2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetStaticShortField_m4A4132E557627F1954AE30C36CDD3BB329949C9A_ftn) (intptr_t, intptr_t, int16_t);
	static AndroidJNI_SetStaticShortField_m4A4132E557627F1954AE30C36CDD3BB329949C9A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetStaticShortField_m4A4132E557627F1954AE30C36CDD3BB329949C9A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetStaticShortField(System.IntPtr,System.IntPtr,System.Int16)");
	_il2cpp_icall_func(___clazz0, ___fieldID1, ___val2);
}
// System.Void UnityEngine.AndroidJNI::SetStaticIntField(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticIntField_mD0DDF159656B3F999FFD3BB812E97B3E39F08649 (intptr_t ___clazz0, intptr_t ___fieldID1, int32_t ___val2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetStaticIntField_mD0DDF159656B3F999FFD3BB812E97B3E39F08649_ftn) (intptr_t, intptr_t, int32_t);
	static AndroidJNI_SetStaticIntField_mD0DDF159656B3F999FFD3BB812E97B3E39F08649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetStaticIntField_mD0DDF159656B3F999FFD3BB812E97B3E39F08649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetStaticIntField(System.IntPtr,System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___clazz0, ___fieldID1, ___val2);
}
// System.Void UnityEngine.AndroidJNI::SetStaticLongField(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticLongField_mCBC20FE3812F3C3CF5FA0C8CAE96A5A63061437E (intptr_t ___clazz0, intptr_t ___fieldID1, int64_t ___val2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetStaticLongField_mCBC20FE3812F3C3CF5FA0C8CAE96A5A63061437E_ftn) (intptr_t, intptr_t, int64_t);
	static AndroidJNI_SetStaticLongField_mCBC20FE3812F3C3CF5FA0C8CAE96A5A63061437E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetStaticLongField_mCBC20FE3812F3C3CF5FA0C8CAE96A5A63061437E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetStaticLongField(System.IntPtr,System.IntPtr,System.Int64)");
	_il2cpp_icall_func(___clazz0, ___fieldID1, ___val2);
}
// System.Void UnityEngine.AndroidJNI::SetStaticFloatField(System.IntPtr,System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticFloatField_mD6B054EE0170B31C26C9A85E49A6A01C60DFE908 (intptr_t ___clazz0, intptr_t ___fieldID1, float ___val2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetStaticFloatField_mD6B054EE0170B31C26C9A85E49A6A01C60DFE908_ftn) (intptr_t, intptr_t, float);
	static AndroidJNI_SetStaticFloatField_mD6B054EE0170B31C26C9A85E49A6A01C60DFE908_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetStaticFloatField_mD6B054EE0170B31C26C9A85E49A6A01C60DFE908_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetStaticFloatField(System.IntPtr,System.IntPtr,System.Single)");
	_il2cpp_icall_func(___clazz0, ___fieldID1, ___val2);
}
// System.Void UnityEngine.AndroidJNI::SetStaticDoubleField(System.IntPtr,System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetStaticDoubleField_mE274169EFC6A08190E5D13984398A637500D069E (intptr_t ___clazz0, intptr_t ___fieldID1, double ___val2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetStaticDoubleField_mE274169EFC6A08190E5D13984398A637500D069E_ftn) (intptr_t, intptr_t, double);
	static AndroidJNI_SetStaticDoubleField_mE274169EFC6A08190E5D13984398A637500D069E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetStaticDoubleField_mE274169EFC6A08190E5D13984398A637500D069E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetStaticDoubleField(System.IntPtr,System.IntPtr,System.Double)");
	_il2cpp_icall_func(___clazz0, ___fieldID1, ___val2);
}
// System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToBooleanArray_m60F3CE17AE326BA244382C39F0FAE9F86DA1F206 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___array0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToBooleanArray_m60F3CE17AE326BA244382C39F0FAE9F86DA1F206_ftn) (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*);
	static AndroidJNI_ToBooleanArray_m60F3CE17AE326BA244382C39F0FAE9F86DA1F206_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToBooleanArray_m60F3CE17AE326BA244382C39F0FAE9F86DA1F206_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToByteArray_mA20FD81095A5C55B49F5362F586258D6E1361F14 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToByteArray_mA20FD81095A5C55B49F5362F586258D6E1361F14_ftn) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*);
	static AndroidJNI_ToByteArray_mA20FD81095A5C55B49F5362F586258D6E1361F14_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToByteArray_mA20FD81095A5C55B49F5362F586258D6E1361F14_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToByteArray(System.Byte[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToSByteArray(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToSByteArray_m5E75BAD1F59BF0993F573E548837DB5BEFD136D0 (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___array0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToSByteArray_m5E75BAD1F59BF0993F573E548837DB5BEFD136D0_ftn) (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*);
	static AndroidJNI_ToSByteArray_m5E75BAD1F59BF0993F573E548837DB5BEFD136D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToSByteArray_m5E75BAD1F59BF0993F573E548837DB5BEFD136D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToSByteArray(System.SByte[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToCharArray_mA2081BFCF1F054F7AF1FF6C02DBCD3DDF842ACD1 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToCharArray_mA2081BFCF1F054F7AF1FF6C02DBCD3DDF842ACD1_ftn) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*);
	static AndroidJNI_ToCharArray_mA2081BFCF1F054F7AF1FF6C02DBCD3DDF842ACD1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToCharArray_mA2081BFCF1F054F7AF1FF6C02DBCD3DDF842ACD1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToCharArray(System.Char[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToShortArray_m5C720FF3C3E8A33E7F0679DEE1CF29279A3F6EE4 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___array0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToShortArray_m5C720FF3C3E8A33E7F0679DEE1CF29279A3F6EE4_ftn) (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*);
	static AndroidJNI_ToShortArray_m5C720FF3C3E8A33E7F0679DEE1CF29279A3F6EE4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToShortArray_m5C720FF3C3E8A33E7F0679DEE1CF29279A3F6EE4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToShortArray(System.Int16[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToIntArray_m4F7B434E1B855ED0CCA21E5D3FE94BABCC246805 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToIntArray_m4F7B434E1B855ED0CCA21E5D3FE94BABCC246805_ftn) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*);
	static AndroidJNI_ToIntArray_m4F7B434E1B855ED0CCA21E5D3FE94BABCC246805_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToIntArray_m4F7B434E1B855ED0CCA21E5D3FE94BABCC246805_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToIntArray(System.Int32[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToLongArray_mBE89CB90348200EFD4A8939241A030FF7FB3B205 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___array0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToLongArray_mBE89CB90348200EFD4A8939241A030FF7FB3B205_ftn) (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*);
	static AndroidJNI_ToLongArray_mBE89CB90348200EFD4A8939241A030FF7FB3B205_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToLongArray_mBE89CB90348200EFD4A8939241A030FF7FB3B205_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToLongArray(System.Int64[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToFloatArray_m805231BFD408148D10ECB4B19935D49FD2E59E73 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToFloatArray_m805231BFD408148D10ECB4B19935D49FD2E59E73_ftn) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*);
	static AndroidJNI_ToFloatArray_m805231BFD408148D10ECB4B19935D49FD2E59E73_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToFloatArray_m805231BFD408148D10ECB4B19935D49FD2E59E73_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToFloatArray(System.Single[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToDoubleArray_m5365EB845635C82BAFC86696C6083F22A79F49EE (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___array0, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToDoubleArray_m5365EB845635C82BAFC86696C6083F22A79F49EE_ftn) (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*);
	static AndroidJNI_ToDoubleArray_m5365EB845635C82BAFC86696C6083F22A79F49EE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToDoubleArray_m5365EB845635C82BAFC86696C6083F22A79F49EE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToObjectArray_mED4ECAFBCB6517A46658F92FCCF2492ADE08C3B5 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___array0, intptr_t ___arrayClass1, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToObjectArray_mED4ECAFBCB6517A46658F92FCCF2492ADE08C3B5_ftn) (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, intptr_t);
	static AndroidJNI_ToObjectArray_mED4ECAFBCB6517A46658F92FCCF2492ADE08C3B5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToObjectArray_mED4ECAFBCB6517A46658F92FCCF2492ADE08C3B5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0, ___arrayClass1);
	return icallRetVal;
}
// System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNI_FromBooleanArray_m5EE3946B096CBAFCDED6E33AD0BEDF392CE3C2E3 (intptr_t ___array0, const RuntimeMethod* method) 
{
	typedef BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*AndroidJNI_FromBooleanArray_m5EE3946B096CBAFCDED6E33AD0BEDF392CE3C2E3_ftn) (intptr_t);
	static AndroidJNI_FromBooleanArray_m5EE3946B096CBAFCDED6E33AD0BEDF392CE3C2E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromBooleanArray_m5EE3946B096CBAFCDED6E33AD0BEDF392CE3C2E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)");
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNI_FromByteArray_m2E5209DB888EB1CFD47E732AB5F565CEB351B766 (intptr_t ___array0, const RuntimeMethod* method) 
{
	typedef ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*AndroidJNI_FromByteArray_m2E5209DB888EB1CFD47E732AB5F565CEB351B766_ftn) (intptr_t);
	static AndroidJNI_FromByteArray_m2E5209DB888EB1CFD47E732AB5F565CEB351B766_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromByteArray_m2E5209DB888EB1CFD47E732AB5F565CEB351B766_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)");
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.SByte[] UnityEngine.AndroidJNI::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNI_FromSByteArray_m46D4FF95707BEC89FB35BADAC0D778D1F9FFE600 (intptr_t ___array0, const RuntimeMethod* method) 
{
	typedef SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* (*AndroidJNI_FromSByteArray_m46D4FF95707BEC89FB35BADAC0D778D1F9FFE600_ftn) (intptr_t);
	static AndroidJNI_FromSByteArray_m46D4FF95707BEC89FB35BADAC0D778D1F9FFE600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromSByteArray_m46D4FF95707BEC89FB35BADAC0D778D1F9FFE600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromSByteArray(System.IntPtr)");
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNI_FromCharArray_mC965E533F95CD2ED4BE5DB99579D6C9723F9FFEF (intptr_t ___array0, const RuntimeMethod* method) 
{
	typedef CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*AndroidJNI_FromCharArray_mC965E533F95CD2ED4BE5DB99579D6C9723F9FFEF_ftn) (intptr_t);
	static AndroidJNI_FromCharArray_mC965E533F95CD2ED4BE5DB99579D6C9723F9FFEF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromCharArray_mC965E533F95CD2ED4BE5DB99579D6C9723F9FFEF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)");
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNI_FromShortArray_m155B1A19DC1AA710079277D8392ECC84578C095C (intptr_t ___array0, const RuntimeMethod* method) 
{
	typedef Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* (*AndroidJNI_FromShortArray_m155B1A19DC1AA710079277D8392ECC84578C095C_ftn) (intptr_t);
	static AndroidJNI_FromShortArray_m155B1A19DC1AA710079277D8392ECC84578C095C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromShortArray_m155B1A19DC1AA710079277D8392ECC84578C095C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)");
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNI_FromIntArray_m0139900B65713B2EC09EB03596157D39968E81BC (intptr_t ___array0, const RuntimeMethod* method) 
{
	typedef Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*AndroidJNI_FromIntArray_m0139900B65713B2EC09EB03596157D39968E81BC_ftn) (intptr_t);
	static AndroidJNI_FromIntArray_m0139900B65713B2EC09EB03596157D39968E81BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromIntArray_m0139900B65713B2EC09EB03596157D39968E81BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)");
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNI_FromLongArray_mCFB950966DB71AE966C3CE5B8B2FC63BD874B3EC (intptr_t ___array0, const RuntimeMethod* method) 
{
	typedef Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*AndroidJNI_FromLongArray_mCFB950966DB71AE966C3CE5B8B2FC63BD874B3EC_ftn) (intptr_t);
	static AndroidJNI_FromLongArray_mCFB950966DB71AE966C3CE5B8B2FC63BD874B3EC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromLongArray_mCFB950966DB71AE966C3CE5B8B2FC63BD874B3EC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)");
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNI_FromFloatArray_mDC9E8A87B643677DB1CD67FB90EE6AC30A2352C5 (intptr_t ___array0, const RuntimeMethod* method) 
{
	typedef SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*AndroidJNI_FromFloatArray_mDC9E8A87B643677DB1CD67FB90EE6AC30A2352C5_ftn) (intptr_t);
	static AndroidJNI_FromFloatArray_mDC9E8A87B643677DB1CD67FB90EE6AC30A2352C5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromFloatArray_mDC9E8A87B643677DB1CD67FB90EE6AC30A2352C5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)");
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNI_FromDoubleArray_m069C4F1F762610BA916F674B3125A68634F27AB8 (intptr_t ___array0, const RuntimeMethod* method) 
{
	typedef DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*AndroidJNI_FromDoubleArray_m069C4F1F762610BA916F674B3125A68634F27AB8_ftn) (intptr_t);
	static AndroidJNI_FromDoubleArray_m069C4F1F762610BA916F674B3125A68634F27AB8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromDoubleArray_m069C4F1F762610BA916F674B3125A68634F27AB8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)");
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetArrayLength_m67AF3E58A9CFD97E7934D2E63D0306865A78DA12 (intptr_t ___array0, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_GetArrayLength_m67AF3E58A9CFD97E7934D2E63D0306865A78DA12_ftn) (intptr_t);
	static AndroidJNI_GetArrayLength_m67AF3E58A9CFD97E7934D2E63D0306865A78DA12_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetArrayLength_m67AF3E58A9CFD97E7934D2E63D0306865A78DA12_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObjectArray_m8B0C45BD47F6563EA916E35BE26691DFA6482A51 (int32_t ___size0, intptr_t ___clazz1, intptr_t ___obj2, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewObjectArray_m8B0C45BD47F6563EA916E35BE26691DFA6482A51_ftn) (int32_t, intptr_t, intptr_t);
	static AndroidJNI_NewObjectArray_m8B0C45BD47F6563EA916E35BE26691DFA6482A51_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewObjectArray_m8B0C45BD47F6563EA916E35BE26691DFA6482A51_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___size0, ___clazz1, ___obj2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0_ftn) (intptr_t, int32_t);
	static AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0, ___index1);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetObjectArrayElement_m5D80CF792A1C492F97EC3378E36FFF458BAFD8D1 (intptr_t ___array0, int32_t ___index1, intptr_t ___obj2, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetObjectArrayElement_m5D80CF792A1C492F97EC3378E36FFF458BAFD8D1_ftn) (intptr_t, int32_t, intptr_t);
	static AndroidJNI_SetObjectArrayElement_m5D80CF792A1C492F97EC3378E36FFF458BAFD8D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetObjectArrayElement_m5D80CF792A1C492F97EC3378E36FFF458BAFD8D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)");
	_il2cpp_icall_func(___array0, ___index1, ___obj2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AndroidJNISafe::CheckException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		intptr_t L_0;
		L_0 = AndroidJNI_ExceptionOccurred_m6C27C01B14483F99373608BF1A56CA53BA46F926(NULL);
		V_0 = L_0;
		intptr_t L_1 = V_0;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_1, (0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00af;
		}
	}
	{
		AndroidJNI_ExceptionClear_m90681289A6CEAF160DB188A3E2177F323D996F82(NULL);
		intptr_t L_4;
		L_4 = AndroidJNI_FindClass_mA0D17BF36250F96F40D8DCF193A7C65E6F6DED7F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C)), NULL);
		V_2 = L_4;
		intptr_t L_5;
		L_5 = AndroidJNI_FindClass_mA0D17BF36250F96F40D8DCF193A7C65E6F6DED7F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E)), NULL);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				intptr_t L_6 = V_0;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_6, NULL);
				intptr_t L_7 = V_2;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_7, NULL);
				intptr_t L_8 = V_3;
				AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_8, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_9 = V_2;
			intptr_t L_10;
			L_10 = AndroidJNI_GetMethodID_mCB601A11C971557E2F89DD968224749BD71D2B3A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56)), NULL);
			V_4 = L_10;
			intptr_t L_11 = V_3;
			intptr_t L_12;
			L_12 = AndroidJNI_GetStaticMethodID_m46303AF2AAD855E623DFC9C341E848735B626A77(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB)), NULL);
			V_5 = L_12;
			intptr_t L_13 = V_0;
			intptr_t L_14 = V_4;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_15 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var)), (uint32_t)0);
			String_t* L_16;
			L_16 = AndroidJNI_CallStringMethod_m932940262AEC9A8121916054C90D79866D29C547(L_13, L_14, L_15, NULL);
			V_6 = L_16;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_17 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var)), (uint32_t)1);
			V_7 = L_17;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_18 = V_7;
			NullCheck(L_18);
			intptr_t L_19 = V_0;
			((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_19;
			intptr_t L_20 = V_3;
			intptr_t L_21 = V_5;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_22 = V_7;
			String_t* L_23;
			L_23 = AndroidJNI_CallStaticStringMethod_m728910FCD2307FC8A06ACA204C6308896E1F9634(L_20, L_21, L_22, NULL);
			V_8 = L_23;
			String_t* L_24 = V_6;
			String_t* L_25 = V_8;
			AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_26 = (AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)));
			NullCheck(L_26);
			AndroidJavaException__ctor_mD4B5992BB074504F8E86D79EA98752D3CB154541(L_26, L_24, L_25, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546_RuntimeMethod_var)));
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteGlobalRef_mC71D9B4DBED2AB66D49764253BA8DE912F731A40 (intptr_t ___globalref0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___globalref0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_3 = ___globalref0;
		AndroidJNI_DeleteGlobalRef_m0420C00BACE4BD46DD58F8738DFD9EE8189F542A(L_3, NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::DeleteWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteWeakGlobalRef_m9B39A30D764938DC4C8D526321520701D77D34A7 (intptr_t ___globalref0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___globalref0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_3 = ___globalref0;
		AndroidJNI_DeleteWeakGlobalRef_m23C9808936212AC528658CB4989F15580BB0C734(L_3, NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D (intptr_t ___localref0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___localref0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_3 = ___localref0;
		AndroidJNI_DeleteLocalRef_m2A8137D15FDE9F781B13F71348FD5FFA1F9841BD(L_3, NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::NewString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewString_m6D6411F7DACFD383054457D88C0F0F1F8AE0CFB9 (String_t* ___chars0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			String_t* L_0 = ___chars0;
			intptr_t L_1;
			L_1 = AndroidJNI_NewString_mF3FC7534344BDF4B4BD2B2DB5442B06E2402B23F(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F (intptr_t ___str0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___str0;
			String_t* L_1;
			L_1 = AndroidJNI_GetStringChars_m462C62C322F38797F05A818CEF5C8D235F1F6714(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectClass_m78626C2B107D46FA9276B6FD32D746EEB81E8D2D (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___ptr0;
			intptr_t L_1;
			L_1 = AndroidJNI_GetObjectClass_mA8282FA341DF231C0ADD07DE0B0D0E5999EA0207(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticMethodID_mDD304107A2DCF7C4FFFC6E820361618693FCD8C7 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			String_t* L_1 = ___name1;
			String_t* L_2 = ___sig2;
			intptr_t L_3;
			L_3 = AndroidJNI_GetStaticMethodID_m46303AF2AAD855E623DFC9C341E848735B626A77(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetMethodID_m4E480BAEFB37F467848EC9074C6917A2D8E853DC (intptr_t ___obj0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			String_t* L_1 = ___name1;
			String_t* L_2 = ___sig2;
			intptr_t L_3;
			L_3 = AndroidJNI_GetMethodID_mCB601A11C971557E2F89DD968224749BD71D2B3A(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetFieldID_m82034BB65220C7ACA5CA977789463EF827C4C0BF (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			String_t* L_1 = ___name1;
			String_t* L_2 = ___sig2;
			intptr_t L_3;
			L_3 = AndroidJNI_GetFieldID_m8CA4FD910FCC33D2D430E1A897043F9E7CD0DF19(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticFieldID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticFieldID_mC79AC0A4A44034B7A6D19ED2CE6AF24F7369B698 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			String_t* L_1 = ___name1;
			String_t* L_2 = ___sig2;
			intptr_t L_3;
			L_3 = AndroidJNI_GetStaticFieldID_m2B47B2D935455E73BDA9E9871FD5A6DF5EDD2717(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::FromReflectedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FromReflectedMethod_mA0F291FDD88E4B0BD2242D9846833C696CF64F86 (intptr_t ___refMethod0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___refMethod0;
			intptr_t L_1;
			L_1 = AndroidJNI_FromReflectedMethod_m4483E987AEC5B258356E5A89F4C3865573AADFE6(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FindClass_m921B6BE5C8F1F1A4207761AD07A57C0D5F599DDE (String_t* ___name0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			String_t* L_0 = ___name0;
			intptr_t L_1;
			L_1 = AndroidJNI_FindClass_mA0D17BF36250F96F40D8DCF193A7C65E6F6DED7F(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewObject_mCA783442B4DE3E0071D2C71DE69A655EF8538E2C (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			intptr_t L_3;
			L_3 = AndroidJNI_NewObject_mD058F016DBC3D58BF2A64EA84D6943052D01E8B1(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.AndroidJNISafe::SetStaticObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticObjectField_mE4688623E6BD1DD91127F4958DC4712290380DBA (intptr_t ___clazz0, intptr_t ___fieldID1, intptr_t ___val2, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			intptr_t L_2 = ___val2;
			AndroidJNI_SetStaticObjectField_mB5FFECBB4D5D963EF0454957F9F4661FFA833555(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::SetStaticStringField(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticStringField_m509E182615D4C2F7B753B225A04A8BFBA126FFA0 (intptr_t ___clazz0, intptr_t ___fieldID1, String_t* ___val2, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			String_t* L_2 = ___val2;
			AndroidJNI_SetStaticStringField_mBE032CF9EBDF2E8D724512826F2CA5AFA075C21F(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::SetStaticCharField(System.IntPtr,System.IntPtr,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticCharField_m73E7E7D9BE1A738206FAC4F90C26D5B316D07214 (intptr_t ___clazz0, intptr_t ___fieldID1, Il2CppChar ___val2, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			Il2CppChar L_2 = ___val2;
			AndroidJNI_SetStaticCharField_m06825B1CFD06746E47F0192FA4F2FC3D3125E9DA(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::SetStaticDoubleField(System.IntPtr,System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticDoubleField_m94C4E9C749D081B785F5D24532B544D59E4096A6 (intptr_t ___clazz0, intptr_t ___fieldID1, double ___val2, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			double L_2 = ___val2;
			AndroidJNI_SetStaticDoubleField_mE274169EFC6A08190E5D13984398A637500D069E(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::SetStaticFloatField(System.IntPtr,System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticFloatField_mBBCC8840D96B2965206D6448B6B2EDAE3CDC2339 (intptr_t ___clazz0, intptr_t ___fieldID1, float ___val2, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			float L_2 = ___val2;
			AndroidJNI_SetStaticFloatField_mD6B054EE0170B31C26C9A85E49A6A01C60DFE908(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::SetStaticLongField(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticLongField_m217087BFC4296606744CEB69506C4C0B9F49521F (intptr_t ___clazz0, intptr_t ___fieldID1, int64_t ___val2, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			int64_t L_2 = ___val2;
			AndroidJNI_SetStaticLongField_mCBC20FE3812F3C3CF5FA0C8CAE96A5A63061437E(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::SetStaticShortField(System.IntPtr,System.IntPtr,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticShortField_m4EC080E45ACC7D82F242F68EBC2C7ACDA3CB8D1C (intptr_t ___clazz0, intptr_t ___fieldID1, int16_t ___val2, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			int16_t L_2 = ___val2;
			AndroidJNI_SetStaticShortField_m4A4132E557627F1954AE30C36CDD3BB329949C9A(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::SetStaticSByteField(System.IntPtr,System.IntPtr,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticSByteField_m05DB36918BF549ED3783179BB25BD2BB434400F0 (intptr_t ___clazz0, intptr_t ___fieldID1, int8_t ___val2, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			int8_t L_2 = ___val2;
			AndroidJNI_SetStaticSByteField_mBD550D0F0E9A54FD039C0DE4EE8C21990C5A39C3(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::SetStaticBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticBooleanField_m4DCD279423F848CE0884BACEF2ABBECC5B21BB37 (intptr_t ___clazz0, intptr_t ___fieldID1, bool ___val2, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			bool L_2 = ___val2;
			AndroidJNI_SetStaticBooleanField_m487E8387D32B024009C37D9B3A800381A475C659(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::SetStaticIntField(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticIntField_mE36FEAE2FEB2D1B231F31D52EAEE2C956B496CB7 (intptr_t ___clazz0, intptr_t ___fieldID1, int32_t ___val2, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			int32_t L_2 = ___val2;
			AndroidJNI_SetStaticIntField_mD0DDF159656B3F999FFD3BB812E97B3E39F08649(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticObjectField_m7A3E277AE5003C9ADB2B184739736F86A0A03AD4 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			intptr_t L_2;
			L_2 = AndroidJNI_GetStaticObjectField_m6E2116C7207C76FBFE2D26A376B10C00D9C49190(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.AndroidJNISafe::GetStaticStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStaticStringField_mD0DC3837F26C82A38BFC42C8450823D53B0326EF (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			String_t* L_2;
			L_2 = AndroidJNI_GetStaticStringField_m6C8673931581ED0646BA2D059C45514ED9D8530F(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Char UnityEngine.AndroidJNISafe::GetStaticCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetStaticCharField_m4FDBF70F20C8A63D61CBE1DB322231C8D7CE2FF6 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			Il2CppChar L_2;
			L_2 = AndroidJNI_GetStaticCharField_m70532959E334E3745AEF21C7A77C10221E639F20(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// System.Double UnityEngine.AndroidJNISafe::GetStaticDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetStaticDoubleField_mB0B0EC3DB652C45C177D663F71D63352CF31989E (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			double L_2;
			L_2 = AndroidJNI_GetStaticDoubleField_m538DA725808C50CF8CF77FA6539865F22761FA86(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		double L_3 = V_0;
		return L_3;
	}
}
// System.Single UnityEngine.AndroidJNISafe::GetStaticFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetStaticFloatField_mC947331D47B4102982F809E8A27FF05114E5321A (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			float L_2;
			L_2 = AndroidJNI_GetStaticFloatField_m33D3E4CC3A6219BD8529ACEF168644650093C326(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.Int64 UnityEngine.AndroidJNISafe::GetStaticLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetStaticLongField_mF93D2C6310F4BAE072E311010A87C76F1E729379 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			int64_t L_2;
			L_2 = AndroidJNI_GetStaticLongField_m2838DE5CE092E4DCD0BF8C69AE366444117AE22A(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
// System.Int16 UnityEngine.AndroidJNISafe::GetStaticShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetStaticShortField_m84E78B16341CC92D47C97D5EBBEE157C24B3845A (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			int16_t L_2;
			L_2 = AndroidJNI_GetStaticShortField_mB4FC3F0637204FE8E2466F8E9C5F2AE9C4F53101(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int16_t L_3 = V_0;
		return L_3;
	}
}
// System.SByte UnityEngine.AndroidJNISafe::GetStaticSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetStaticSByteField_m0C17CA332A1C79E8AFB20119E9FC54301D40A847 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			int8_t L_2;
			L_2 = AndroidJNI_GetStaticSByteField_m3F82DDF01CA24E139B8F35C5821C528FB8B04B96(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int8_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.AndroidJNISafe::GetStaticBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetStaticBooleanField_m5EE57D854FD22446DB1BD1A24019958B8FC9B4F2 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			bool L_2;
			L_2 = AndroidJNI_GetStaticBooleanField_m91EE84C77BB16B3ADE727DDCC0F6AC7D262012CA(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::GetStaticIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetStaticIntField_m8C4987D43981A1740AEFDA7B4B9A6A2C512E5AC4 (intptr_t ___clazz0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___fieldID1;
			int32_t L_2;
			L_2 = AndroidJNI_GetStaticIntField_m6AE681D1B1EF0DFE81714A3EB2CBEA6281DF136E(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.AndroidJNISafe::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CallStaticVoidMethod_m965D8C47FDF1388EA6192108063B129C870B382F (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			AndroidJNI_CallStaticVoidMethod_mE1E41BEF150679746147820E058E034CCE9F5FB3(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_mFF379E5F210AF38781F1FB59667AC39C4CFA5966 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			intptr_t L_3;
			L_3 = AndroidJNI_CallStaticObjectMethod_mD81C9407381F719A207F5AD038D38A1DDF181306(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.String UnityEngine.AndroidJNISafe::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_mC5449583711986CFF9CCDAD3F8058D9842229B88 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			String_t* L_3;
			L_3 = AndroidJNI_CallStaticStringMethod_m728910FCD2307FC8A06ACA204C6308896E1F9634(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Char UnityEngine.AndroidJNISafe::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallStaticCharMethod_m435C3A57BC14CCA2F459E1CE9D3E9F084353634C (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			Il2CppChar L_3;
			L_3 = AndroidJNI_CallStaticCharMethod_mC17CFB28DA453858E2D5189C4A93985A5074ECAC(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		Il2CppChar L_4 = V_0;
		return L_4;
	}
}
// System.Double UnityEngine.AndroidJNISafe::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallStaticDoubleMethod_mDCA07255A15D31B20FFD77A795A7FD47C8661D1D (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			double L_3;
			L_3 = AndroidJNI_CallStaticDoubleMethod_m9396E74A4DC7D047134A5DCFFBB343651C1C46FC(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		double L_4 = V_0;
		return L_4;
	}
}
// System.Single UnityEngine.AndroidJNISafe::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallStaticFloatMethod_mCEF7855DF0530B27B6E0B4B1C1E78667FD80B2B6 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			float L_3;
			L_3 = AndroidJNI_CallStaticFloatMethod_m50DD95A67820F5A3E3C62556600D985DA697889B(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Int64 UnityEngine.AndroidJNISafe::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallStaticLongMethod_mA98EE656033866FC4DE05F3F815F76594FA18D84 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			int64_t L_3;
			L_3 = AndroidJNI_CallStaticLongMethod_m2E00D7592B163630AF5352E89F6180F6B56B8278(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Int16 UnityEngine.AndroidJNISafe::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallStaticShortMethod_m134B1C6791FD9A09180ADF481475880F4F8B79A4 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			int16_t L_3;
			L_3 = AndroidJNI_CallStaticShortMethod_m7510F3205665CF3134DD91BAB86458A916B4FA67(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int16_t L_4 = V_0;
		return L_4;
	}
}
// System.SByte UnityEngine.AndroidJNISafe::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallStaticSByteMethod_mC9057F28DC0C675701810414D19C7168A68F026D (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			int8_t L_3;
			L_3 = AndroidJNI_CallStaticSByteMethod_m91B3565EC4E89DB5DD6994ED9DC03DC1506D9ABD(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int8_t L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.AndroidJNISafe::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallStaticBooleanMethod_mF980739844CAA33E0E0ADA82F5177F91E39CCB75 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			bool L_3;
			L_3 = AndroidJNI_CallStaticBooleanMethod_m19B53E56531AEDB6735F1D5651E622E4E823EE92(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallStaticIntMethod_mE174E036EAB1034BA4DC107F534F0F7B6DA8FBC6 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___clazz0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			int32_t L_3;
			L_3 = AndroidJNI_CallStaticIntMethod_mF3BBC45BEA5618BDE9E8C35CF86E4089CB366FAB(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectField_mD645E1D470CF975C1285EFF0A28C66FC37EFA520 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___fieldID1;
			intptr_t L_2;
			L_2 = AndroidJNI_GetObjectField_mDC51440CDD5C41B8BE5AB1FC0DB1D4A75A0B00B6(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.AndroidJNISafe::GetStringField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringField_m65B73D43D6FA6A76E18AA78FB566A123FC832381 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___fieldID1;
			String_t* L_2;
			L_2 = AndroidJNI_GetStringField_m72B978571BE59E46CE385ABF43D27F4F3AD428DC(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Char UnityEngine.AndroidJNISafe::GetCharField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetCharField_mE1C213483F3E07366C8FAE114648538E446202B9 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___fieldID1;
			Il2CppChar L_2;
			L_2 = AndroidJNI_GetCharField_m2E6B5082E0CA1EF9F3F3A5F503BB61404DB4B64E(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// System.Double UnityEngine.AndroidJNISafe::GetDoubleField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetDoubleField_m5E7778FD959CAA9256AB3E6ADCAC024B5A8D1CC3 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___fieldID1;
			double L_2;
			L_2 = AndroidJNI_GetDoubleField_m3A52B3C44D03F55A287B38E5069240525EF73A28(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		double L_3 = V_0;
		return L_3;
	}
}
// System.Single UnityEngine.AndroidJNISafe::GetFloatField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetFloatField_m86A2AE1F0D2D81BA1587FDF2EA10693786BA0BBB (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___fieldID1;
			float L_2;
			L_2 = AndroidJNI_GetFloatField_mAFA7BF7AD9A5DCDFCA7847870CA28492776F87FC(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.Int64 UnityEngine.AndroidJNISafe::GetLongField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetLongField_m31E20FF52A23F3928BC3576173FCF435076A45A0 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___fieldID1;
			int64_t L_2;
			L_2 = AndroidJNI_GetLongField_mE133B0457F7DA846EACEE402DA6FBA2F4ABE1904(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
// System.Int16 UnityEngine.AndroidJNISafe::GetShortField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetShortField_m835A602FF3722BA91111A36120C09DC16F58BF69 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___fieldID1;
			int16_t L_2;
			L_2 = AndroidJNI_GetShortField_m1BCF7D56CEB4E2C85C1BE6C1F8BB6F194C437427(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int16_t L_3 = V_0;
		return L_3;
	}
}
// System.SByte UnityEngine.AndroidJNISafe::GetSByteField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetSByteField_mBFC442E1921CD7542D2705337A7E1A8D806EC42C (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___fieldID1;
			int8_t L_2;
			L_2 = AndroidJNI_GetSByteField_m74A3F36343350116F6A6F04E91117AAB5CBFFD0C(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int8_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.AndroidJNISafe::GetBooleanField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetBooleanField_mB1CE25A87F17492A866F2FB302D69532A50ED114 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___fieldID1;
			bool L_2;
			L_2 = AndroidJNI_GetBooleanField_mD4A949E18A3AE1F8844105267EBD669EF4992736(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::GetIntField(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetIntField_m61F97AAEAE3410AB91489B59E2B9F1714D686724 (intptr_t ___obj0, intptr_t ___fieldID1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___fieldID1;
			int32_t L_2;
			L_2 = AndroidJNI_GetIntField_m429B20FC0C03F9526125AF46A37FE36AEDB27A84(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.AndroidJNISafe::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CallVoidMethod_m37B8331F4A139234C98323FE19FAC5F3E29EE743 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			AndroidJNI_CallVoidMethod_m0B2ED17E5CA42D8D1D503CD329482A5923F1ED67(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_m220EBB62A14A40DD5693A48E5787DE4636D051EA (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			intptr_t L_3;
			L_3 = AndroidJNI_CallObjectMethod_m059D1BE669D486F2A26B40D6B90BF157B84A3CA3(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.String UnityEngine.AndroidJNISafe::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStringMethod_mABFAE9A418A989676CB15D01E5971E431BFD4579 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			String_t* L_3;
			L_3 = AndroidJNI_CallStringMethod_m932940262AEC9A8121916054C90D79866D29C547(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Char UnityEngine.AndroidJNISafe::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallCharMethod_m4A39264614C8E7A9E2645F7C0E208062990A9D90 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			Il2CppChar L_3;
			L_3 = AndroidJNI_CallCharMethod_mEF6E65AB2EE0BFAA136878966C42FB21529CB91D(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		Il2CppChar L_4 = V_0;
		return L_4;
	}
}
// System.Double UnityEngine.AndroidJNISafe::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallDoubleMethod_m53CDFD6982DECEB5F155858B4D0B8D7A06B426DD (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			double L_3;
			L_3 = AndroidJNI_CallDoubleMethod_m88A34942D1206EEE8BEA95475722D2E8FFFFC711(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		double L_4 = V_0;
		return L_4;
	}
}
// System.Single UnityEngine.AndroidJNISafe::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallFloatMethod_m95871A924AA515B19EEFD76FC5DABE3E2FAE4909 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			float L_3;
			L_3 = AndroidJNI_CallFloatMethod_m5BC422FC7D771A08DD18B443CBE3941ACD239FD9(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Int64 UnityEngine.AndroidJNISafe::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallLongMethod_m6F9F122D99AB7C95774CE395A98153B705D07931 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			int64_t L_3;
			L_3 = AndroidJNI_CallLongMethod_m2AF630255CC50CB6A875E4FC1E13023699504C6E(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Int16 UnityEngine.AndroidJNISafe::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallShortMethod_mDA06E47602A9F365C91DB7D3B78A699D8A48F861 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			int16_t L_3;
			L_3 = AndroidJNI_CallShortMethod_m889B967EB2D48E331692B199D2EDABACEC8D5F01(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int16_t L_4 = V_0;
		return L_4;
	}
}
// System.SByte UnityEngine.AndroidJNISafe::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallSByteMethod_mA5011FBB030ABC0A47C34052A49A7BEBC1F9EDC0 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			int8_t L_3;
			L_3 = AndroidJNI_CallSByteMethod_m45D5ABB4DDFBFEFC6DB132FC2D8463C501F1E4A5(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int8_t L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.AndroidJNISafe::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallBooleanMethod_m9B26AA2F5828D29D1F1BC3315BABE97F3614EE08 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			bool L_3;
			L_3 = AndroidJNI_CallBooleanMethod_m6556ACCEDD78DE903521F341072907C4EC90FC96(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallIntMethod_m1C01B0148542E93B661401AB695295F4DFB334A8 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___obj0;
			intptr_t L_1 = ___methodID1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___args2;
			int32_t L_3;
			L_3 = AndroidJNI_CallIntMethod_m5CE09EA0846BF49ABE3E23BC923710A0F1FF4787(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17 (intptr_t ___array0, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___array0;
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
			L_1 = AndroidJNI_FromCharArray_mC965E533F95CD2ED4BE5DB99579D6C9723F9FFEF(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_0;
		return L_2;
	}
}
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7 (intptr_t ___array0, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___array0;
			DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1;
			L_1 = AndroidJNI_FromDoubleArray_m069C4F1F762610BA916F674B3125A68634F27AB8(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = V_0;
		return L_2;
	}
}
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892 (intptr_t ___array0, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___array0;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1;
			L_1 = AndroidJNI_FromFloatArray_mDC9E8A87B643677DB1CD67FB90EE6AC30A2352C5(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_0;
		return L_2;
	}
}
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59 (intptr_t ___array0, const RuntimeMethod* method) 
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___array0;
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1;
			L_1 = AndroidJNI_FromLongArray_mCFB950966DB71AE966C3CE5B8B2FC63BD874B3EC(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = V_0;
		return L_2;
	}
}
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35 (intptr_t ___array0, const RuntimeMethod* method) 
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___array0;
			Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1;
			L_1 = AndroidJNI_FromShortArray_m155B1A19DC1AA710079277D8392ECC84578C095C(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB (intptr_t ___array0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___array0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
			L_1 = AndroidJNI_FromByteArray_m2E5209DB888EB1CFD47E732AB5F565CEB351B766(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		return L_2;
	}
}
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476 (intptr_t ___array0, const RuntimeMethod* method) 
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___array0;
			SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1;
			L_1 = AndroidJNI_FromSByteArray_m46D4FF95707BEC89FB35BADAC0D778D1F9FFE600(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE (intptr_t ___array0, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___array0;
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1;
			L_1 = AndroidJNI_FromBooleanArray_m5EE3946B096CBAFCDED6E33AD0BEDF392CE3C2E3(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = V_0;
		return L_2;
	}
}
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0 (intptr_t ___array0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___array0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
			L_1 = AndroidJNI_FromIntArray_m0139900B65713B2EC09EB03596157D39968E81BC(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToObjectArray(System.IntPtr[],System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToObjectArray_m0F776C4B1BA875104CCB8345797A9269A3EBCF07 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___array0, intptr_t ___type1, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___array0;
			intptr_t L_1 = ___type1;
			intptr_t L_2;
			L_2 = AndroidJNI_ToObjectArray_mED4ECAFBCB6517A46658F92FCCF2492ADE08C3B5(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToCharArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToCharArray_m8C8F076F9A471146F6BCF063F7415E89BC0FC801 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___array0;
			intptr_t L_1;
			L_1 = AndroidJNI_ToCharArray_mA2081BFCF1F054F7AF1FF6C02DBCD3DDF842ACD1(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToDoubleArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToDoubleArray_mCAF30FC9FA2947EBC680D89374A5296D775132A9 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___array0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___array0;
			intptr_t L_1;
			L_1 = AndroidJNI_ToDoubleArray_m5365EB845635C82BAFC86696C6083F22A79F49EE(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToFloatArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToFloatArray_m15157B7C76CE04863F365E7052671AC87D8556E0 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
			intptr_t L_1;
			L_1 = AndroidJNI_ToFloatArray_m805231BFD408148D10ECB4B19935D49FD2E59E73(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToLongArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToLongArray_m00D8D5A5D1B46639307AA78C5E4E7421EA0FF16A (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___array0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___array0;
			intptr_t L_1;
			L_1 = AndroidJNI_ToLongArray_mBE89CB90348200EFD4A8939241A030FF7FB3B205(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToShortArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToShortArray_m3591547B05CEABD583A023C267091A536E3F925C (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___array0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___array0;
			intptr_t L_1;
			L_1 = AndroidJNI_ToShortArray_m5C720FF3C3E8A33E7F0679DEE1CF29279A3F6EE4(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToByteArray_m13141E44A84BDC2716432D09131984A4ADFC101F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
			intptr_t L_1;
			L_1 = AndroidJNI_ToByteArray_mA20FD81095A5C55B49F5362F586258D6E1361F14(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToSByteArray(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToSByteArray_mEFB80D7817A15C285872B8F3C1A9A1EDEA9ECC34 (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___array0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___array0;
			intptr_t L_1;
			L_1 = AndroidJNI_ToSByteArray_m5E75BAD1F59BF0993F573E548837DB5BEFD136D0(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToBooleanArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToBooleanArray_m2E622CCA3AB1B19FE519F975391636CA7DECDAF7 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___array0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___array0;
			intptr_t L_1;
			L_1 = AndroidJNI_ToBooleanArray_m60F3CE17AE326BA244382C39F0FAE9F86DA1F206(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToIntArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToIntArray_mA46A79AFCB3909BB90FFF2D20EFDA042E6A4DE97 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___array0;
			intptr_t L_1;
			L_1 = AndroidJNI_ToIntArray_m4F7B434E1B855ED0CCA21E5D3FE94BABCC246805(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectArrayElement_m515AF7717FD44C40A5FFFD6E50DFCD65A35B8FF5 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___array0;
			int32_t L_1 = ___index1;
			intptr_t L_2;
			L_2 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3 (intptr_t ___array0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				AndroidJNISafe_CheckException_mD1BB59188CDDCC2559F595CE1240E6BB12F1D546(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = ___array0;
			int32_t L_1;
			L_1 = AndroidJNI_GetArrayLength_m67AF3E58A9CFD97E7934D2E63D0306865A78DA12(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
