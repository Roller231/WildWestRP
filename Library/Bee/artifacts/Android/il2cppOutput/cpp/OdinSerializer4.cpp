#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>
struct IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E;
// OdinSerializer.Utilities.ValueGetter`2<System.Object,System.IntPtr>
struct ValueGetter_2_t9AE09E0210DA9784C2D07F0324BE37C72EC3636A;
// OdinSerializer.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>
struct ValueGetter_2_t6579D981303AEF408BE729FD61CF8D5E6A60606E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// OdinSerializer.Utilities.FastTypeComparer
struct FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_tC47C1E6A3DC1ADA77819AF705CC1D1175315876D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// OdinSerializer.Utilities.ImmutableList
struct ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B;
// OdinSerializer.Utilities.MemberAliasFieldInfo
struct MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577;
// OdinSerializer.Utilities.MemberAliasMethodInfo
struct MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7;
// OdinSerializer.Utilities.MemberAliasPropertyInfo
struct MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Reflection.TypeFilter
struct TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// OdinSerializer.Utilities.WeakValueGetter
struct WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195;
// OdinSerializer.Utilities.WeakValueSetter
struct WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B;
// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493;
// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4;
// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954;
// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08;
// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E;
// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089;
// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949;
// OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25
struct U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E;
// OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t2DC6F0A3E8C4A663086CA7B2105A2854EEB25E67;
// OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_tCCC82C714D8F95924F2D37331EBC97E8D9A0DF7C;
// OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t2D0B51B0757E037DC7DA5E824D12F6AD47419438;
// OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49
struct U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98;
// OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50
struct U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F;
// OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55
struct U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeExtensions_t1894FB1ACC68704AC8EE23995292300B7E406F9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03AB2C403B6556E5A76B2BE4E510934AD585B8A1;
IL2CPP_EXTERN_C String_t* _stringLiteral0C4A74813E03670A3DDF68FD7559A475174A5814;
IL2CPP_EXTERN_C String_t* _stringLiteral0FBEE35345E8D388C523672DCD1D97721575F12E;
IL2CPP_EXTERN_C String_t* _stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645;
IL2CPP_EXTERN_C String_t* _stringLiteral18BBD42CCE9B175CCD6F5CA37762D740A0B5A5C4;
IL2CPP_EXTERN_C String_t* _stringLiteral1FE371F4FD106F2E23AD17CE17DD19CBEAB4C201;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral22363B2DA57DE0197C3DC04546321A605E3FFE02;
IL2CPP_EXTERN_C String_t* _stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D;
IL2CPP_EXTERN_C String_t* _stringLiteral26DCB2051A67733E4E3E244BAEEA1FD347E9473B;
IL2CPP_EXTERN_C String_t* _stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3;
IL2CPP_EXTERN_C String_t* _stringLiteral3F530C05EDCBF7716458575421F02CF2C179352F;
IL2CPP_EXTERN_C String_t* _stringLiteral45E91B775C05667BB0C4313D3AF0298D560E3F90;
IL2CPP_EXTERN_C String_t* _stringLiteral47E25B7BC471508BCFDD9553C340FE99DAB34C4A;
IL2CPP_EXTERN_C String_t* _stringLiteral6624D8C33CE15A1906D8F3BBF68FABBE8E179079;
IL2CPP_EXTERN_C String_t* _stringLiteral6A825010D5EA79C01DD8A61B9868ED1079027C59;
IL2CPP_EXTERN_C String_t* _stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6;
IL2CPP_EXTERN_C String_t* _stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6;
IL2CPP_EXTERN_C String_t* _stringLiteral6C92044AA503422C8954E73697B146F1E63C9334;
IL2CPP_EXTERN_C String_t* _stringLiteral85E9CE6AD4896D7DAC7FD63267FC79467CB4862F;
IL2CPP_EXTERN_C String_t* _stringLiteral87064437EF311884667DAB55AAFBBAC160D0E41D;
IL2CPP_EXTERN_C String_t* _stringLiteral90A683BBF1FEB32AEC0B5DED0CC88DD136FC5CE7;
IL2CPP_EXTERN_C String_t* _stringLiteral9BCDF92088B43A83757528F5CA0E89E3A8EA051D;
IL2CPP_EXTERN_C String_t* _stringLiteralB27BC2DBD9E4582303E95015D30F8DB415DB3D4B;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C992F5B74F2E286B3734B39409FFBE6FCC4427;
IL2CPP_EXTERN_C String_t* _stringLiteralBBD2D161BE39B692B416EC33FBD72BE2EE0DEF4E;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m8A659CF08765E887ED1CDF4C26BC5DA7FAF50E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateStaticMethodCaller_m8E345A641B4ABBC6F6B5C93A07EBE22F21F07130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstanceFieldGetter_m8E1F1AFFC8006A81D57403FD6E32F80EBAFD9CFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstanceFieldSetter_mF487985059D411F39C5808111D7BB5CD4E19FA54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstanceMethodCaller_mDBB17B091C622B5F9A98B21BF016AA56663D0A53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstancePropertyGetter_m81D67425F1AA5226E457ACAB96DCB54913684C0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstancePropertySetter_mEB9BF29CF08BA137377E51608F854162262CEC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakStaticFieldGetter_m2C978A70808A0558E1CECAB40690DC0E30B7FC5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakStaticFieldSetter_m126CC4DB58E039F3B2E99F7105C14E42E87BD984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Add_m69A35E02702A5619A0B70AFC6788D4C772C1F822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Clear_mCA0714CCE827AE0C313E5758E9C2C8B48C444F8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Remove_m3B136668F22C0F942AE4D0216FC8669674E46DF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_Insert_m9AD04C17BE944EAFAF2643FC648B6A3F37255578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_RemoveAt_m135A80A3A5D9E8987B183F4FB87FF5F83B0B67A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_set_Item_mF7E595ADF1C3E5DD4D87046900C1D95DA93FDC07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_Add_m033F3F7827B9F5EED0AAB5B216B03978E4AA1664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_Clear_mD5D2A767EAE1418BF9A84E3A8D00E8FD35DABA92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_Insert_m50342BA1311133C4B833CCE8891612F0E7922AA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_RemoveAt_m2D16B6416255D7E1EDE9F07194EFEF41E239A419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_Remove_m0399DB547E5630B94100FAB8AB3A272B7DFF7B1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_set_Item_m02E64F29FE694A33A244149BE07B5A6B6D8ECD8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList__ctor_m709811723A8C3E38B53CADDF05301E0E6F18A3A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllMembersU3Ed__49_System_Collections_IEnumerator_Reset_m90FF5B647BDBB6E6CC555C75C1DBFAFF0F122907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllMembersU3Ed__50_System_Collections_IEnumerator_Reset_m651E1BA01B15C61F4C11E8E9081996B4427F332E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetBaseClassesU3Ed__55_System_Collections_IEnumerator_Reset_mED8D854062C70C46EDDD6BFF63D0B0C8202DEE4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m8BD8A016BEEBB31870B2EEB9AE794721B52C3BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_mA55EF249FD43952D4F732820BC54786B4D9E25B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_m3676F154803FDE6F9FC99193D0B2D22722AB196D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_m439E98302D63BFE1A752FB65ACD5E52CF7D9F068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m80A2E51FB039D0D76E0E54DE9B0FAE3D27BDA794_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass23_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_mCC9C68A75A2CFF8218752C1BB827D74D521C03B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldGetterU3Eb__0_m85E5392D55FCC412AC6C192140A484AD96547DD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CCreateWeakStaticFieldSetterU3Eb__0_mC9DA2701066C296A558E0FB5E50F2BDCC2D179D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityExtensions_SafeIsUnityNull_m6B76F408CFF1700426CD23B60C2EB322C5061BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_MemoryCopy_m5B12F87DA8AF40FDA5151FA244A28570FF4D69BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_StringFromBytes_m8B7372B9201374C7F41348B359EA9FAF73258621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_StringToBytes_m9BBC29BF548AFAEE067006208C7C2F3F77333960_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
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
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
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
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// OdinSerializer.Utilities.EmitUtilities
struct EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C  : public RuntimeObject
{
};

// OdinSerializer.Utilities.FastTypeComparer
struct FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB  : public RuntimeObject
{
};

// OdinSerializer.Utilities.Flags
struct Flags_t74F80DB7AE7E125B7A0E54574EA58A2D4C936BC4  : public RuntimeObject
{
};

// OdinSerializer.Utilities.ImmutableList
struct ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B  : public RuntimeObject
{
	// System.Collections.IList OdinSerializer.Utilities.ImmutableList::innerList
	RuntimeObject* ___innerList_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshaled_com
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// OdinSerializer.Utilities.UnityExtensions
struct UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE  : public RuntimeObject
{
};

// OdinSerializer.Utilities.UnityVersion
struct UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE  : public RuntimeObject
{
};

// OdinSerializer.Utilities.Unsafe.UnsafeUtilities
struct UnsafeUtilities_t64522828253B5BC1825967E2D49E4C7435F6FBA0  : public RuntimeObject
{
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

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493  : public RuntimeObject
{
	// System.Reflection.FieldInfo OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass10_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4  : public RuntimeObject
{
	// System.Reflection.FieldInfo OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass13_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954  : public RuntimeObject
{
	// System.Reflection.PropertyInfo OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass14_0::propertyInfo
	PropertyInfo_t* ___propertyInfo_0;
};

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08  : public RuntimeObject
{
	// System.Reflection.PropertyInfo OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass15_0::propertyInfo
	PropertyInfo_t* ___propertyInfo_0;
};

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E  : public RuntimeObject
{
	// System.Reflection.MethodInfo OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass23_0::methodInfo
	MethodInfo_t* ___methodInfo_0;
};

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089  : public RuntimeObject
{
	// System.Reflection.FieldInfo OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass5_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949  : public RuntimeObject
{
	// System.Reflection.FieldInfo OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass7_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25
struct U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E  : public RuntimeObject
{
	// System.Int32 OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// OdinSerializer.Utilities.ImmutableList OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>4__this
	ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* ___U3CU3E4__this_2;
	// System.Collections.IEnumerator OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;
};

// OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t2DC6F0A3E8C4A663086CA7B2105A2854EEB25E67  : public RuntimeObject
{
	// System.Reflection.MethodInfo OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass31_0::method
	MethodInfo_t* ___method_0;
};

// OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_tCCC82C714D8F95924F2D37331EBC97E8D9A0DF7C  : public RuntimeObject
{
	// System.String OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass47_0::methodName
	String_t* ___methodName_0;
};

// OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t2D0B51B0757E037DC7DA5E824D12F6AD47419438  : public RuntimeObject
{
	// System.String OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass48_0::methodName
	String_t* ___methodName_0;
};

// OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49
struct U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98  : public RuntimeObject
{
	// System.Int32 OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Reflection.MemberInfo OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::<>2__current
	MemberInfo_t* ___U3CU3E2__current_1;
	// System.Int32 OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::type
	Type_t* ___type_3;
	// System.Type OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.Reflection.BindingFlags OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::flags
	int32_t ___flags_5;
	// System.Reflection.BindingFlags OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::<>3__flags
	int32_t ___U3CU3E3__flags_6;
	// System.Type OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::<currentType>5__2
	Type_t* ___U3CcurrentTypeU3E5__2_7;
	// System.Reflection.MemberInfo[] OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::<>7__wrap2
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___U3CU3E7__wrap2_8;
	// System.Int32 OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_9;
};

// OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50
struct U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F  : public RuntimeObject
{
	// System.Int32 OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Reflection.MemberInfo OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::<>2__current
	MemberInfo_t* ___U3CU3E2__current_1;
	// System.Int32 OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::type
	Type_t* ___type_3;
	// System.Type OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.Reflection.BindingFlags OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::flags
	int32_t ___flags_5;
	// System.Reflection.BindingFlags OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::<>3__flags
	int32_t ___U3CU3E3__flags_6;
	// System.String OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::name
	String_t* ___name_7;
	// System.String OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::<>3__name
	String_t* ___U3CU3E3__name_8;
	// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_9;
};

// OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55
struct U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067  : public RuntimeObject
{
	// System.Int32 OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::<>2__current
	Type_t* ___U3CU3E2__current_1;
	// System.Int32 OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::type
	Type_t* ___type_3;
	// System.Type OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.Boolean OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::includeSelf
	bool ___includeSelf_5;
	// System.Boolean OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_6;
	// System.Type OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::<current>5__2
	Type_t* ___U3CcurrentU3E5__2_7;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t10CD8FB824576B7C2C226B4A22445C250FE65574 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t10CD8FB824576B7C2C226B4A22445C250FE65574__padding[256];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t4DBB40140D37D1339861F47B17D5F18E29D3BBF0  : public RuntimeObject
{
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

// OdinSerializer.Utilities.MemberAliasFieldInfo
struct MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577  : public FieldInfo_t
{
	// System.Reflection.FieldInfo OdinSerializer.Utilities.MemberAliasFieldInfo::aliasedField
	FieldInfo_t* ___aliasedField_1;
	// System.String OdinSerializer.Utilities.MemberAliasFieldInfo::mangledName
	String_t* ___mangledName_2;
};

// OdinSerializer.Utilities.MemberAliasPropertyInfo
struct MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42  : public PropertyInfo_t
{
	// System.Reflection.PropertyInfo OdinSerializer.Utilities.MemberAliasPropertyInfo::aliasedProperty
	PropertyInfo_t* ___aliasedProperty_1;
	// System.String OdinSerializer.Utilities.MemberAliasPropertyInfo::mangledName
	String_t* ___mangledName_2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 
{
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// OdinSerializer.Utilities.Unsafe.UnsafeUtilities/Struct256Bit
struct Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9 
{
	// System.Decimal OdinSerializer.Utilities.Unsafe.UnsafeUtilities/Struct256Bit::d1
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d1_0;
	// System.Decimal OdinSerializer.Utilities.Unsafe.UnsafeUtilities/Struct256Bit::d2
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d2_1;
};

// OdinSerializer.Utilities.MemberAliasMethodInfo
struct MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7  : public MethodInfo_t
{
	// System.Reflection.MethodInfo OdinSerializer.Utilities.MemberAliasMethodInfo::aliasedMethod
	MethodInfo_t* ___aliasedMethod_1;
	// System.String OdinSerializer.Utilities.MemberAliasMethodInfo::mangledName
	String_t* ___mangledName_2;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// OdinSerializer.Utilities.ValueGetter`2<System.Object,System.IntPtr>
struct ValueGetter_2_t9AE09E0210DA9784C2D07F0324BE37C72EC3636A  : public MulticastDelegate_t
{
};

// OdinSerializer.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>
struct ValueGetter_2_t6579D981303AEF408BE729FD61CF8D5E6A60606E  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// OdinSerializer.Utilities.WeakValueGetter
struct WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195  : public MulticastDelegate_t
{
};

// OdinSerializer.Utilities.WeakValueSetter
struct WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.Reflection.Binder

// System.Reflection.Binder

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// System.BitConverter

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// OdinSerializer.Utilities.EmitUtilities
struct EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_StaticFields
{
	// System.Reflection.Assembly OdinSerializer.Utilities.EmitUtilities::EngineAssembly
	Assembly_t* ___EngineAssembly_0;
};

// OdinSerializer.Utilities.EmitUtilities

// OdinSerializer.Utilities.FastTypeComparer
struct FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB_StaticFields
{
	// OdinSerializer.Utilities.FastTypeComparer OdinSerializer.Utilities.FastTypeComparer::Instance
	FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB* ___Instance_0;
};

// OdinSerializer.Utilities.FastTypeComparer

// OdinSerializer.Utilities.Flags

// OdinSerializer.Utilities.Flags

// OdinSerializer.Utilities.ImmutableList

// OdinSerializer.Utilities.ImmutableList

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_StaticFields
{
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA* ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA* ___FilterTypeNameIgnoreCase_1;
};

// System.Reflection.Module

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// OdinSerializer.Utilities.UnityExtensions
struct UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_StaticFields
{
	// OdinSerializer.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr> OdinSerializer.Utilities.UnityExtensions::UnityObjectCachedPtrFieldGetter
	ValueGetter_2_t6579D981303AEF408BE729FD61CF8D5E6A60606E* ___UnityObjectCachedPtrFieldGetter_0;
};

// OdinSerializer.Utilities.UnityExtensions

// OdinSerializer.Utilities.UnityVersion
struct UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_StaticFields
{
	// System.Int32 OdinSerializer.Utilities.UnityVersion::Major
	int32_t ___Major_0;
	// System.Int32 OdinSerializer.Utilities.UnityVersion::Minor
	int32_t ___Minor_1;
};

// OdinSerializer.Utilities.UnityVersion

// OdinSerializer.Utilities.Unsafe.UnsafeUtilities

// OdinSerializer.Utilities.Unsafe.UnsafeUtilities

// System.ValueType

// System.ValueType

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass10_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass10_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass13_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass13_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass14_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass14_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass15_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass15_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass23_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass23_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass5_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass5_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass7_0

// OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass7_0

// OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25

// OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25

// OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass31_0

// OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass31_0

// OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass47_0

// OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass47_0

// OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass48_0

// OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass48_0

// OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49

// OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49

// OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50

// OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50

// OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55

// OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t4DBB40140D37D1339861F47B17D5F18E29D3BBF0_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::21244F82B210125632917591768F6BF22EB6861F80C6C25A25BD26DFB580EA7B
	__StaticArrayInitTypeSizeU3D256_t10CD8FB824576B7C2C226B4A22445C250FE65574 ___21244F82B210125632917591768F6BF22EB6861F80C6C25A25BD26DFB580EA7B_0;
};

// <PrivateImplementationDetails>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// OdinSerializer.Utilities.MemberAliasFieldInfo

// OdinSerializer.Utilities.MemberAliasFieldInfo

// OdinSerializer.Utilities.MemberAliasPropertyInfo

// OdinSerializer.Utilities.MemberAliasPropertyInfo

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.RuntimeMethodHandle

// System.RuntimeMethodHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// OdinSerializer.Utilities.Unsafe.UnsafeUtilities/Struct256Bit

// OdinSerializer.Utilities.Unsafe.UnsafeUtilities/Struct256Bit

// OdinSerializer.Utilities.MemberAliasMethodInfo

// OdinSerializer.Utilities.MemberAliasMethodInfo

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// System.Type
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

// System.Type

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Func`1<System.Object>

// System.Func`1<System.Object>

// OdinSerializer.Utilities.ValueGetter`2<System.Object,System.IntPtr>

// OdinSerializer.Utilities.ValueGetter`2<System.Object,System.IntPtr>

// OdinSerializer.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>

// OdinSerializer.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// System.NotSupportedException

// System.NotSupportedException

// OdinSerializer.Utilities.WeakValueGetter

// OdinSerializer.Utilities.WeakValueGetter

// OdinSerializer.Utilities.WeakValueSetter

// OdinSerializer.Utilities.WeakValueSetter

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265  : public RuntimeArray
{
	ALIGN_FIELD (8) MethodInfo_t* m_Items[1];

	inline MethodInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t* value)
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


// OdinSerializer.Utilities.ValueGetter`2<InstanceType,FieldType> OdinSerializer.Utilities.EmitUtilities::CreateInstanceFieldGetter<System.Object,System.IntPtr>(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueGetter_2_t9AE09E0210DA9784C2D07F0324BE37C72EC3636A* EmitUtilities_CreateInstanceFieldGetter_TisRuntimeObject_TisIntPtr_t_mB1E9F7A57FEC3D638E436E6E7CDB839645F85FE1_gshared (FieldInfo_t* ___0_fieldInfo, const RuntimeMethod* method) ;
// FieldType OdinSerializer.Utilities.ValueGetter`2<System.Object,System.IntPtr>::Invoke(InstanceType&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ValueGetter_2_Invoke_m1554A0EB3350906E0ECAD5FCDF7520ADFBDED1C0_gshared_inline (ValueGetter_2_t9AE09E0210DA9784C2D07F0324BE37C72EC3636A* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__49__ctor_mB863190B32B71BD4CADB387A69A2360D32141123 (U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__49_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m2D843CA80475A8D2AF817057A8B9460BB025966A (U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* __this, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50_U3CU3Em__Finally1_mBAA60BB71C6493B7145843BEA5BDD6BB15006591 (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50_System_IDisposable_Dispose_m7FFE6BD1525224AD4A6E962F2D2B38A1A0E51090 (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> OdinSerializer.Utilities.TypeExtensions::GetAllMembers(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetAllMembers_mCFC7D63D27BABCB3BEA4AEB8BD4D03C63FDA7AC0 (Type_t* ___0_type, int32_t ___1_flags, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50__ctor_m8264032EEE67304DBE1E2E4A7078554A4BD6F0BC (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__50_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m4FBD10866CE63C1BBF86690088C9DBFC734F5E4F (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__55__ctor_m7E2DA78D07559C970C491C918C3035CAB37ED54B (U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Type> OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__55_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m65B5440799C0F3B85BE1B302FF858CE7C40D0875 (U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B (FieldInfo_t* ___0_left, FieldInfo_t* ___1_right, const RuntimeMethod* method) ;
// OdinSerializer.Utilities.ValueGetter`2<InstanceType,FieldType> OdinSerializer.Utilities.EmitUtilities::CreateInstanceFieldGetter<UnityEngine.Object,System.IntPtr>(System.Reflection.FieldInfo)
inline ValueGetter_2_t6579D981303AEF408BE729FD61CF8D5E6A60606E* EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m8A659CF08765E887ED1CDF4C26BC5DA7FAF50E2F (FieldInfo_t* ___0_fieldInfo, const RuntimeMethod* method)
{
	return ((  ValueGetter_2_t6579D981303AEF408BE729FD61CF8D5E6A60606E* (*) (FieldInfo_t*, const RuntimeMethod*))EmitUtilities_CreateInstanceFieldGetter_TisRuntimeObject_TisIntPtr_t_mB1E9F7A57FEC3D638E436E6E7CDB839645F85FE1_gshared)(___0_fieldInfo, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// FieldType OdinSerializer.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>::Invoke(InstanceType&)
inline intptr_t ValueGetter_2_Invoke_m87B334C089EBC52E2EB17F23714CF95F9833B476_inline (ValueGetter_2_t6579D981303AEF408BE729FD61CF8D5E6A60606E* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_instance, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (ValueGetter_2_t6579D981303AEF408BE729FD61CF8D5E6A60606E*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))ValueGetter_2_Invoke_m1554A0EB3350906E0ECAD5FCDF7520ADFBDED1C0_gshared_inline)(__this, ___0_instance, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.Assembly::op_Equality(System.Reflection.Assembly,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Assembly_op_Equality_m1E2666F9D0537F02AB32F14B4458C98C4851CEAB (Assembly_t* ___0_left, Assembly_t* ___1_right, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m90C4611A332373738AAEC0F1FB8FE4857AA9A193 (U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::op_Equality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74 (FieldInfo_t* ___0_left, FieldInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo OdinSerializer.Utilities.FieldInfoExtensions::DeAliasField(System.Reflection.FieldInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* FieldInfoExtensions_DeAliasField_mBA84FD1CB9CAF86CE0CE26DDAC895B39377843BB (FieldInfo_t* ___0_fieldInfo, bool ___1_throwOnNotAliased, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8 (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m73ECA66104496833999D32E3C7B6DF68B3D3AA38 (U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mAF58355CDE6E695864137FEFDCE53141C43EF651 (U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* __this, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.WeakValueGetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueGetter__ctor_mA1F67AC1B63740DB56641257CD8769FB15C27E84 (WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m1BD75CEA5E8E06277C1B8356E921503995282509 (U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* __this, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.WeakValueSetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter__ctor_m48349244E14CA783097D5043E85A54B4E86E7B08 (WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m20576EBB225B1232B670B7E0411FFF0D2088E358 (U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Equality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F (PropertyInfo_t* ___0_left, PropertyInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo OdinSerializer.Utilities.PropertyInfoExtensions::DeAliasProperty(System.Reflection.PropertyInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* PropertyInfoExtensions_DeAliasProperty_m0DE8B7FE7A8CFE1AC3084A8B1728B315BA1A1DBC (PropertyInfo_t* ___0_propertyInfo, bool ___1_throwOnNotAliased, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m3B2A4CA1FAFD80F0400E4C938F1CFDB5155B8BF7 (U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo OdinSerializer.Utilities.MethodInfoExtensions::DeAliasMethod(System.Reflection.MethodInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MethodInfoExtensions_DeAliasMethod_m9165375111F91EF1F8A3B6BB5C83EDBB44892121 (MethodInfo_t* ___0_methodInfo, bool ___1_throwOnNotAliased, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4 (Type_t* ___0_type, MethodInfo_t* ___1_method, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m9AD8FFEEC960485CFCAD815C090FC5E9D051A72C (U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___0_obj, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.FastTypeComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastTypeComparer__ctor_mF4BB39DF0FDE8EED0A8C0B357C6183F165293F03 (FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator OdinSerializer.Utilities.ImmutableList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_GetEnumerator_m969309660ACF2722FE10A0CA6802854867CD98FB (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25__ctor_mF671AA6671E9E7C2A503E40D8F4BB949716BD48C (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_mFB1E35275EF221C0697447B86929D59012DEEDB8 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E* __this, const RuntimeMethod* method) ;
// System.Void OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m3DDC544FC9308F98B4F00B933A682DFC533E12DB (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo__ctor_m8424D98FC7039BEC250ED437607B5D73352F0A0F (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.MethodInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodInfo__ctor_mFA9E34BB41CAC506D1CE042B8F5A90ACF1A9952B (MethodInfo_t* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.PropertyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyInfo__ctor_m09B380762225589F785BDF7D42E98D6695BE0138 (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___0_c, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD (const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m940C2933780D2B8DB2A38353E04E48D3FDCA254F (U3CU3Ec__DisplayClass31_0_t2DC6F0A3E8C4A663086CA7B2105A2854EEB25E67* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass31_0::<GetCastMethodDelegate>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass31_0_U3CGetCastMethodDelegateU3Eb__0_m4DEF8FC7EAF944D073D4961A247835B85A2CDA18 (U3CU3Ec__DisplayClass31_0_t2DC6F0A3E8C4A663086CA7B2105A2854EEB25E67* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// result = (obj) => method.Invoke(null, new object[] { obj });
		MethodInfo_t* L_0 = __this->___method_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		RuntimeObject* L_3 = ___0_obj;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, NULL, L_2, NULL);
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
// System.Void OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_mD83113E2C7928D7D8D6A92976D13C4069145C11F (U3CU3Ec__DisplayClass47_0_tCCC82C714D8F95924F2D37331EBC97E8D9A0DF7C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass47_0::<GetOperatorMethod>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass47_0_U3CGetOperatorMethodU3Eb__0_mD684B89E80E0D7E45D17B6179EDDDCCD9CFE6749 (U3CU3Ec__DisplayClass47_0_tCCC82C714D8F95924F2D37331EBC97E8D9A0DF7C* __this, MethodInfo_t* ___0_m, const RuntimeMethod* method) 
{
	{
		// return type.GetAllMembers<MethodInfo>(Flags.StaticAnyVisibility).FirstOrDefault(m => m.Name == methodName);
		MethodInfo_t* L_0 = ___0_m;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->___methodName_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
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
// System.Void OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m99C0851AE4FD808C4E09EF508DCCE980CD954580 (U3CU3Ec__DisplayClass48_0_t2D0B51B0757E037DC7DA5E824D12F6AD47419438* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass48_0::<GetOperatorMethods>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass48_0_U3CGetOperatorMethodsU3Eb__0_mE00F93CADDFC5F2E66ED6F83C1B08AFC0706F259 (U3CU3Ec__DisplayClass48_0_t2D0B51B0757E037DC7DA5E824D12F6AD47419438* __this, MethodInfo_t* ___0_x, const RuntimeMethod* method) 
{
	{
		// return type.GetAllMembers<MethodInfo>(Flags.StaticAnyVisibility).Where(x => x.Name == methodName).ToArray();
		MethodInfo_t* L_0 = ___0_x;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->___methodName_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
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
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__49__ctor_mB863190B32B71BD4CADB387A69A2360D32141123 (U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__49_System_IDisposable_Dispose_m8277E561EF37824791E0039D76D5BF6CFFB2D388 (U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllMembersU3Ed__49_MoveNext_m1CAA495060B6998608B0C63C3EB42668D72F1F39 (U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MemberInfo_t* V_1 = NULL;
	MemberInfo_t* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_00f4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Type currentType = type;
		Type_t* L_2 = __this->___type_3;
		__this->___U3CcurrentTypeU3E5__2_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentTypeU3E5__2_7), (void*)L_2);
		// if ((flags & BindingFlags.DeclaredOnly) == BindingFlags.DeclaredOnly)
		int32_t L_3 = __this->___flags_5;
		if ((!(((uint32_t)((int32_t)((int32_t)L_3&2))) == ((uint32_t)2))))
		{
			goto IL_00a8;
		}
	}
	{
		// foreach (var member in currentType.GetMembers(flags))
		Type_t* L_4 = __this->___U3CcurrentTypeU3E5__2_7;
		int32_t L_5 = __this->___flags_5;
		NullCheck(L_4);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_6;
		L_6 = VirtualFuncInvoker1< MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*, int32_t >::Invoke(89 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_4, L_5);
		__this->___U3CU3E7__wrap2_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)L_6);
		__this->___U3CU3E7__wrap3_9 = 0;
		goto IL_008c;
	}

IL_0059:
	{
		// foreach (var member in currentType.GetMembers(flags))
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_7 = __this->___U3CU3E7__wrap2_8;
		int32_t L_8 = __this->___U3CU3E7__wrap3_9;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MemberInfo_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		// yield return member;
		MemberInfo_t* L_11 = V_1;
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0077:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_12 = __this->___U3CU3E7__wrap3_9;
		__this->___U3CU3E7__wrap3_9 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008c:
	{
		// foreach (var member in currentType.GetMembers(flags))
		int32_t L_13 = __this->___U3CU3E7__wrap3_9;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_14 = __this->___U3CU3E7__wrap2_8;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0059;
		}
	}
	{
		__this->___U3CU3E7__wrap2_8 = (MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)(MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL);
		goto IL_0142;
	}

IL_00a8:
	{
		// flags |= BindingFlags.DeclaredOnly;
		int32_t L_15 = __this->___flags_5;
		__this->___flags_5 = ((int32_t)((int32_t)L_15|2));
	}

IL_00b6:
	{
		// foreach (var member in currentType.GetMembers(flags))
		Type_t* L_16 = __this->___U3CcurrentTypeU3E5__2_7;
		int32_t L_17 = __this->___flags_5;
		NullCheck(L_16);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_18;
		L_18 = VirtualFuncInvoker1< MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*, int32_t >::Invoke(89 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_16, L_17);
		__this->___U3CU3E7__wrap2_8 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)L_18);
		__this->___U3CU3E7__wrap3_9 = 0;
		goto IL_0109;
	}

IL_00d6:
	{
		// foreach (var member in currentType.GetMembers(flags))
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_19 = __this->___U3CU3E7__wrap2_8;
		int32_t L_20 = __this->___U3CU3E7__wrap3_9;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		MemberInfo_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		// yield return member;
		MemberInfo_t* L_23 = V_2;
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00f4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_24 = __this->___U3CU3E7__wrap3_9;
		__this->___U3CU3E7__wrap3_9 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0109:
	{
		// foreach (var member in currentType.GetMembers(flags))
		int32_t L_25 = __this->___U3CU3E7__wrap3_9;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_26 = __this->___U3CU3E7__wrap2_8;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_00d6;
		}
	}
	{
		__this->___U3CU3E7__wrap2_8 = (MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)(MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL);
		// currentType = currentType.BaseType;
		Type_t* L_27 = __this->___U3CcurrentTypeU3E5__2_7;
		NullCheck(L_27);
		Type_t* L_28;
		L_28 = VirtualFuncInvoker0< Type_t* >::Invoke(109 /* System.Type System.Type::get_BaseType() */, L_27);
		__this->___U3CcurrentTypeU3E5__2_7 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentTypeU3E5__2_7), (void*)L_28);
		// while (currentType != null);
		Type_t* L_29 = __this->___U3CcurrentTypeU3E5__2_7;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_29, (Type_t*)NULL, NULL);
		if (L_30)
		{
			goto IL_00b6;
		}
	}

IL_0142:
	{
		// }
		return (bool)0;
	}
}
// System.Reflection.MemberInfo OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* U3CGetAllMembersU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MemberInfoU3E_get_Current_mBEFDED6D01092B9D720C7C39281CF6AE3830C8B6 (U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__49_System_Collections_IEnumerator_Reset_m90FF5B647BDBB6E6CC555C75C1DBFAFF0F122907 (U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllMembersU3Ed__49_System_Collections_IEnumerator_Reset_m90FF5B647BDBB6E6CC555C75C1DBFAFF0F122907_RuntimeMethod_var)));
	}
}
// System.Object OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__49_System_Collections_IEnumerator_get_Current_mA528301176ADEBBEC60E9A39EFD6B7365C37FF2F (U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__49_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m2D843CA80475A8D2AF817057A8B9460BB025966A (U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* L_3 = (U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98*)il2cpp_codegen_object_new(U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetAllMembersU3Ed__49__ctor_mB863190B32B71BD4CADB387A69A2360D32141123(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* L_4 = V_0;
		Type_t* L_5 = __this->___U3CU3E3__type_4;
		NullCheck(L_4);
		L_4->___type_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___type_3), (void*)L_5);
		U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* L_6 = V_0;
		int32_t L_7 = __this->___U3CU3E3__flags_6;
		NullCheck(L_6);
		L_6->___flags_5 = L_7;
		U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__49::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__49_System_Collections_IEnumerable_GetEnumerator_m4FE723B28B40F144DB633CEE6E57BADF661EED0F (U3CGetAllMembersU3Ed__49_t6C4907001BB144FE96A045976CEB06E1E0049A98* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllMembersU3Ed__49_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m2D843CA80475A8D2AF817057A8B9460BB025966A(__this, NULL);
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
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50__ctor_m8264032EEE67304DBE1E2E4A7078554A4BD6F0BC (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50_System_IDisposable_Dispose_m7FFE6BD1525224AD4A6E962F2D2B38A1A0E51090 (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetAllMembersU3Ed__50_U3CU3Em__Finally1_mBAA60BB71C6493B7145843BEA5BDD6BB15006591(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllMembersU3Ed__50_MoveNext_mD633288234477393287E5BC20DF716A0C68EDFE8 (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t1894FB1ACC68704AC8EE23995292300B7E406F9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MemberInfo_t* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0099:
			{// begin fault (depth: 1)
				U3CGetAllMembersU3Ed__50_System_IDisposable_Dispose_m7FFE6BD1525224AD4A6E962F2D2B38A1A0E51090(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0073_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a0;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (var member in type.GetAllMembers(flags))
				Type_t* L_3 = __this->___type_3;
				int32_t L_4 = __this->___flags_5;
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t1894FB1ACC68704AC8EE23995292300B7E406F9A_il2cpp_TypeInfo_var);
				RuntimeObject* L_5;
				L_5 = TypeExtensions_GetAllMembers_mCFC7D63D27BABCB3BEA4AEB8BD4D03C63FDA7AC0(L_3, L_4, NULL);
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator() */, IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143_il2cpp_TypeInfo_var, L_5);
				__this->___U3CU3E7__wrap1_9 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_9), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_007b_1;
			}

IL_0042_1:
			{
				// foreach (var member in type.GetAllMembers(flags))
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap1_9;
				NullCheck(L_7);
				MemberInfo_t* L_8;
				L_8 = InterfaceFuncInvoker0< MemberInfo_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current() */, IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// if (member.Name != name) continue;
				MemberInfo_t* L_9 = V_2;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
				String_t* L_11 = __this->___name_7;
				bool L_12;
				L_12 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, L_11, NULL);
				if (L_12)
				{
					goto IL_007b_1;
				}
			}
			{
				// yield return member;
				MemberInfo_t* L_13 = V_2;
				__this->___U3CU3E2__current_1 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00a0;
			}

IL_0073_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_007b_1:
			{
				// foreach (var member in type.GetAllMembers(flags))
				RuntimeObject* L_14 = __this->___U3CU3E7__wrap1_9;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0042_1;
				}
			}
			{
				U3CGetAllMembersU3Ed__50_U3CU3Em__Finally1_mBAA60BB71C6493B7145843BEA5BDD6BB15006591(__this, NULL);
				__this->___U3CU3E7__wrap1_9 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_9), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50_U3CU3Em__Finally1_mBAA60BB71C6493B7145843BEA5BDD6BB15006591 (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_9;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_9;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Reflection.MemberInfo OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* U3CGetAllMembersU3Ed__50_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MemberInfoU3E_get_Current_m3B5C09ED9BE5EB90050EAC8652C8493C785345D5 (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50_System_Collections_IEnumerator_Reset_m651E1BA01B15C61F4C11E8E9081996B4427F332E (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllMembersU3Ed__50_System_Collections_IEnumerator_Reset_m651E1BA01B15C61F4C11E8E9081996B4427F332E_RuntimeMethod_var)));
	}
}
// System.Object OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__50_System_Collections_IEnumerator_get_Current_mC060D6F290CA63D72CCBADCDDCD2424ACAF74FED (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__50_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m4FBD10866CE63C1BBF86690088C9DBFC734F5E4F (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* L_3 = (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F*)il2cpp_codegen_object_new(U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetAllMembersU3Ed__50__ctor_m8264032EEE67304DBE1E2E4A7078554A4BD6F0BC(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* L_4 = V_0;
		Type_t* L_5 = __this->___U3CU3E3__type_4;
		NullCheck(L_4);
		L_4->___type_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___type_3), (void*)L_5);
		U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* L_6 = V_0;
		String_t* L_7 = __this->___U3CU3E3__name_8;
		NullCheck(L_6);
		L_6->___name_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___name_7), (void*)L_7);
		U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* L_8 = V_0;
		int32_t L_9 = __this->___U3CU3E3__flags_6;
		NullCheck(L_8);
		L_8->___flags_5 = L_9;
		U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__50::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__50_System_Collections_IEnumerable_GetEnumerator_m5C522AE59D4139C6498DED9B197EE9ACD58B0DC8 (U3CGetAllMembersU3Ed__50_tE6CB4C7B30C87E0BA039C1F806359A15D29F5E5F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllMembersU3Ed__50_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m4FBD10866CE63C1BBF86690088C9DBFC734F5E4F(__this, NULL);
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
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__55__ctor_m7E2DA78D07559C970C491C918C3035CAB37ED54B (U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__55_System_IDisposable_Dispose_m185BE14ED2B6E559960C887406254DF67EF1DB5B (U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetBaseClassesU3Ed__55_MoveNext_m2B544FEC43AB8418A070ED6585604A7BA6E25E78 (U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_0091;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (type == null || type.BaseType == null)
		Type_t* L_2 = __this->___type_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, (Type_t*)NULL, NULL);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		Type_t* L_4 = __this->___type_3;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(109 /* System.Type System.Type::get_BaseType() */, L_4);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, (Type_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		// yield break;
		return (bool)0;
	}

IL_0045:
	{
		// if (includeSelf)
		bool L_7 = __this->___includeSelf_5;
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		// yield return type;
		Type_t* L_8 = __this->___type_3;
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0062:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0069:
	{
		// var current = type.BaseType;
		Type_t* L_9 = __this->___type_3;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = VirtualFuncInvoker0< Type_t* >::Invoke(109 /* System.Type System.Type::get_BaseType() */, L_9);
		__this->___U3CcurrentU3E5__2_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__2_7), (void*)L_10);
		goto IL_00a9;
	}

IL_007c:
	{
		// yield return current;
		Type_t* L_11 = __this->___U3CcurrentU3E5__2_7;
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0091:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// current = current.BaseType;
		Type_t* L_12 = __this->___U3CcurrentU3E5__2_7;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(109 /* System.Type System.Type::get_BaseType() */, L_12);
		__this->___U3CcurrentU3E5__2_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__2_7), (void*)L_13);
	}

IL_00a9:
	{
		// while (current != null)
		Type_t* L_14 = __this->___U3CcurrentU3E5__2_7;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_14, (Type_t*)NULL, NULL);
		if (L_15)
		{
			goto IL_007c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Type OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.Collections.Generic.IEnumerator<System.Type>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CGetBaseClassesU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_TypeU3E_get_Current_m876B37CD20FF6372F52131CDDBC4A08B1DB9894D (U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__55_System_Collections_IEnumerator_Reset_mED8D854062C70C46EDDD6BFF63D0B0C8202DEE4F (U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetBaseClassesU3Ed__55_System_Collections_IEnumerator_Reset_mED8D854062C70C46EDDD6BFF63D0B0C8202DEE4F_RuntimeMethod_var)));
	}
}
// System.Object OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__55_System_Collections_IEnumerator_get_Current_mE502744CDA2956F79C9E2C72712FF17FCF449108 (U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Type> OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__55_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m65B5440799C0F3B85BE1B302FF858CE7C40D0875 (U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* L_3 = (U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067*)il2cpp_codegen_object_new(U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetBaseClassesU3Ed__55__ctor_m7E2DA78D07559C970C491C918C3035CAB37ED54B(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* L_4 = V_0;
		Type_t* L_5 = __this->___U3CU3E3__type_4;
		NullCheck(L_4);
		L_4->___type_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___type_3), (void*)L_5);
		U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* L_6 = V_0;
		bool L_7 = __this->___U3CU3E3__includeSelf_6;
		NullCheck(L_6);
		L_6->___includeSelf_5 = L_7;
		U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__55_System_Collections_IEnumerable_GetEnumerator_m7F3747DF7D70B8369256CF241B30092322D44A64 (U3CGetBaseClassesU3Ed__55_tC75D75CB24ECEB98394EB1E899A1561BEAC3D067* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetBaseClassesU3Ed__55_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m65B5440799C0F3B85BE1B302FF858CE7C40D0875(__this, NULL);
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
// System.Void OdinSerializer.Utilities.UnityExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityExtensions__cctor_m40FE438995497A42CEB77A05ECBC7923289AE35E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m8A659CF08765E887ED1CDF4C26BC5DA7FAF50E2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03AB2C403B6556E5A76B2BE4E510934AD585B8A1);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	{
		// var field = typeof(UnityEngine.Object).GetField("m_CachedPtr", BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		FieldInfo_t* L_2;
		L_2 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(84 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, _stringLiteral03AB2C403B6556E5A76B2BE4E510934AD585B8A1, ((int32_t)52));
		V_0 = L_2;
		// if (field != null)
		FieldInfo_t* L_3 = V_0;
		bool L_4;
		L_4 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B(L_3, (FieldInfo_t*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// UnityObjectCachedPtrFieldGetter = EmitUtilities.CreateInstanceFieldGetter<UnityEngine.Object, IntPtr>(field);
		FieldInfo_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_il2cpp_TypeInfo_var);
		ValueGetter_2_t6579D981303AEF408BE729FD61CF8D5E6A60606E* L_6;
		L_6 = EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m8A659CF08765E887ED1CDF4C26BC5DA7FAF50E2F(L_5, EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m8A659CF08765E887ED1CDF4C26BC5DA7FAF50E2F_RuntimeMethod_var);
		((UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_il2cpp_TypeInfo_var))->___UnityObjectCachedPtrFieldGetter_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_il2cpp_TypeInfo_var))->___UnityObjectCachedPtrFieldGetter_0), (void*)L_6);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Boolean OdinSerializer.Utilities.UnityExtensions::SafeIsUnityNull(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityExtensions_SafeIsUnityNull_m6B76F408CFF1700426CD23B60C2EB322C5061BE5 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (object.ReferenceEquals(obj, null))
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0005:
	{
		// if (UnityObjectCachedPtrFieldGetter == null)
		il2cpp_codegen_runtime_class_init_inline(UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_il2cpp_TypeInfo_var);
		ValueGetter_2_t6579D981303AEF408BE729FD61CF8D5E6A60606E* L_1 = ((UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_il2cpp_TypeInfo_var))->___UnityObjectCachedPtrFieldGetter_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// throw new NotSupportedException("Could not find the field 'm_CachedPtr' in the class UnityEngine.Object; cannot perform a special null check.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB27BC2DBD9E4582303E95015D30F8DB415DB3D4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityExtensions_SafeIsUnityNull_m6B76F408CFF1700426CD23B60C2EB322C5061BE5_RuntimeMethod_var)));
	}

IL_0017:
	{
		// IntPtr ptr = UnityObjectCachedPtrFieldGetter(ref obj);
		il2cpp_codegen_runtime_class_init_inline(UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_il2cpp_TypeInfo_var);
		ValueGetter_2_t6579D981303AEF408BE729FD61CF8D5E6A60606E* L_3 = ((UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t361AC998B41BAEE7E7318C1418A443B54FEB9ABE_il2cpp_TypeInfo_var))->___UnityObjectCachedPtrFieldGetter_0;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = ValueGetter_2_Invoke_m87B334C089EBC52E2EB17F23714CF95F9833B476_inline(L_3, (&___0_obj), NULL);
		// return ptr == IntPtr.Zero;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		return L_6;
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
RuntimeObject* WeakValueGetter_Invoke_mEEC44DC637B545E046125BC43EAF155D8ECAEDE7_Multicast(WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* currentDelegate = reinterpret_cast<WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instance, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* WeakValueGetter_Invoke_mEEC44DC637B545E046125BC43EAF155D8ECAEDE7_OpenInst(WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	NullCheck(___0_instance);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_instance, method);
}
RuntimeObject* WeakValueGetter_Invoke_mEEC44DC637B545E046125BC43EAF155D8ECAEDE7_OpenStatic(WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_instance, method);
}
RuntimeObject* WeakValueGetter_Invoke_mEEC44DC637B545E046125BC43EAF155D8ECAEDE7_OpenStaticInvoker(WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, RuntimeObject** >::Invoke(__this->___method_ptr_0, method, NULL, ___0_instance);
}
RuntimeObject* WeakValueGetter_Invoke_mEEC44DC637B545E046125BC43EAF155D8ECAEDE7_ClosedStaticInvoker(WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject** >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instance);
}
// System.Void OdinSerializer.Utilities.WeakValueGetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueGetter__ctor_mA1F67AC1B63740DB56641257CD8769FB15C27E84 (WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_Invoke_mEEC44DC637B545E046125BC43EAF155D8ECAEDE7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_Invoke_mEEC44DC637B545E046125BC43EAF155D8ECAEDE7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_Invoke_mEEC44DC637B545E046125BC43EAF155D8ECAEDE7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_Invoke_mEEC44DC637B545E046125BC43EAF155D8ECAEDE7_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WeakValueGetter_Invoke_mEEC44DC637B545E046125BC43EAF155D8ECAEDE7_Multicast;
}
// System.Object OdinSerializer.Utilities.WeakValueGetter::Invoke(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_Invoke_mEEC44DC637B545E046125BC43EAF155D8ECAEDE7 (WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instance, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult OdinSerializer.Utilities.WeakValueGetter::BeginInvoke(System.Object&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_BeginInvoke_m89B1E4B7980017A1017896CED3208914A2A5D80A (WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* __this, RuntimeObject** ___0_instance, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = *___0_instance;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Object OdinSerializer.Utilities.WeakValueGetter::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_EndInvoke_m3615331374D0D6997DCF6E36DBDE8EFC7AC52E72 (WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_instance,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WeakValueSetter_Invoke_mC1582D22BFCD2FA145C6FDCDC54EE6FB2FC5F3A5_Multicast(WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* currentDelegate = reinterpret_cast<WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instance, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WeakValueSetter_Invoke_mC1582D22BFCD2FA145C6FDCDC54EE6FB2FC5F3A5_OpenInst(WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_instance);
	typedef void (*FunctionPointerType) (RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instance, ___1_value, method);
}
void WeakValueSetter_Invoke_mC1582D22BFCD2FA145C6FDCDC54EE6FB2FC5F3A5_OpenStatic(WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instance, ___1_value, method);
}
void WeakValueSetter_Invoke_mC1582D22BFCD2FA145C6FDCDC54EE6FB2FC5F3A5_OpenStaticInvoker(WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject**, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_instance, ___1_value);
}
void WeakValueSetter_Invoke_mC1582D22BFCD2FA145C6FDCDC54EE6FB2FC5F3A5_ClosedStaticInvoker(WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject**, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instance, ___1_value);
}
// System.Void OdinSerializer.Utilities.WeakValueSetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter__ctor_m48349244E14CA783097D5043E85A54B4E86E7B08 (WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_Invoke_mC1582D22BFCD2FA145C6FDCDC54EE6FB2FC5F3A5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_Invoke_mC1582D22BFCD2FA145C6FDCDC54EE6FB2FC5F3A5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_Invoke_mC1582D22BFCD2FA145C6FDCDC54EE6FB2FC5F3A5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_Invoke_mC1582D22BFCD2FA145C6FDCDC54EE6FB2FC5F3A5_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WeakValueSetter_Invoke_mC1582D22BFCD2FA145C6FDCDC54EE6FB2FC5F3A5_Multicast;
}
// System.Void OdinSerializer.Utilities.WeakValueSetter::Invoke(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_Invoke_mC1582D22BFCD2FA145C6FDCDC54EE6FB2FC5F3A5 (WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instance, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult OdinSerializer.Utilities.WeakValueSetter::BeginInvoke(System.Object&,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueSetter_BeginInvoke_m01A9EA4918AE7B79629BD77687DFF5BC68BCE56A (WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = *___0_instance;
	__d_args[1] = ___1_value;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void OdinSerializer.Utilities.WeakValueSetter::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_EndInvoke_m627DE88271893526F8B11D1266D575E80613377D (WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_instance,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean OdinSerializer.Utilities.EmitUtilities::get_CanEmit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EmitUtilities_get_CanEmit_mD84790E1FDA8F217CF63AC65F1ED1C021FE6AAB4 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean OdinSerializer.Utilities.EmitUtilities::EmitIsIllegalForMember(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EmitUtilities_EmitIsIllegalForMember_m81E4A7425236B53BABBE3655B9F76F8D11C62E0D (MemberInfo_t* ___0_member, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return member.DeclaringType != null && member.DeclaringType.Assembly == EngineAssembly;
		MemberInfo_t* L_0 = ___0_member;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, (Type_t*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		MemberInfo_t* L_3 = ___0_member;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_3);
		NullCheck(L_4);
		Assembly_t* L_5;
		L_5 = VirtualFuncInvoker0< Assembly_t* >::Invoke(26 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_4);
		il2cpp_codegen_runtime_class_init_inline(EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_il2cpp_TypeInfo_var);
		Assembly_t* L_6 = ((EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_StaticFields*)il2cpp_codegen_static_fields_for(EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_il2cpp_TypeInfo_var))->___EngineAssembly_0;
		bool L_7;
		L_7 = Assembly_op_Equality_m1E2666F9D0537F02AB32F14B4458C98C4851CEAB(L_5, L_6, NULL);
		return L_7;
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Func`1<System.Object> OdinSerializer.Utilities.EmitUtilities::CreateWeakStaticFieldGetter(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* EmitUtilities_CreateWeakStaticFieldGetter_m2C978A70808A0558E1CECAB40690DC0E30B7FC5A (FieldInfo_t* ___0_fieldInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldGetterU3Eb__0_m85E5392D55FCC412AC6C192140A484AD96547DD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* G_B1_0 = NULL;
	U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* G_B4_0 = NULL;
	U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* G_B3_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* L_0 = (U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m90C4611A332373738AAEC0F1FB8FE4857AA9A193(L_0, NULL);
		U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* L_1 = L_0;
		FieldInfo_t* L_2 = ___0_fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		// if (fieldInfo == null)
		U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* L_3 = L_1;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___fieldInfo_0;
		bool L_5;
		L_5 = FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74(L_4, (FieldInfo_t*)NULL, NULL);
		G_B1_0 = L_3;
		if (!L_5)
		{
			G_B2_0 = L_3;
			goto IL_0025;
		}
	}
	{
		// throw new ArgumentNullException("fieldInfo");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakStaticFieldGetter_m2C978A70808A0558E1CECAB40690DC0E30B7FC5A_RuntimeMethod_var)));
	}

IL_0025:
	{
		// if (!fieldInfo.IsStatic)
		U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* L_7 = G_B2_0;
		NullCheck(L_7);
		FieldInfo_t* L_8 = L_7->___fieldInfo_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_8, NULL);
		G_B3_0 = L_7;
		if (L_9)
		{
			G_B4_0 = L_7;
			goto IL_003d;
		}
	}
	{
		// throw new ArgumentException("Field must be static.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C4A74813E03670A3DDF68FD7559A475174A5814)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakStaticFieldGetter_m2C978A70808A0558E1CECAB40690DC0E30B7FC5A_RuntimeMethod_var)));
	}

IL_003d:
	{
		// fieldInfo = fieldInfo.DeAliasField();
		U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* L_11 = G_B4_0;
		U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* L_12 = L_11;
		NullCheck(L_12);
		FieldInfo_t* L_13 = L_12->___fieldInfo_0;
		FieldInfo_t* L_14;
		L_14 = FieldInfoExtensions_DeAliasField_mBA84FD1CB9CAF86CE0CE26DDAC895B39377843BB(L_13, (bool)0, NULL);
		NullCheck(L_12);
		L_12->___fieldInfo_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___fieldInfo_0), (void*)L_14);
		// return delegate ()
		// {
		//     return fieldInfo.GetValue(null);
		// };
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_15 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_15, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldGetterU3Eb__0_m85E5392D55FCC412AC6C192140A484AD96547DD2_RuntimeMethod_var), NULL);
		return L_15;
	}
}
// System.Action`1<System.Object> OdinSerializer.Utilities.EmitUtilities::CreateWeakStaticFieldSetter(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* EmitUtilities_CreateWeakStaticFieldSetter_m126CC4DB58E039F3B2E99F7105C14E42E87BD984 (FieldInfo_t* ___0_fieldInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CCreateWeakStaticFieldSetterU3Eb__0_mC9DA2701066C296A558E0FB5E50F2BDCC2D179D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* G_B1_0 = NULL;
	U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* G_B4_0 = NULL;
	U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* G_B3_0 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* L_0 = (U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m73ECA66104496833999D32E3C7B6DF68B3D3AA38(L_0, NULL);
		U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* L_1 = L_0;
		FieldInfo_t* L_2 = ___0_fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		// if (fieldInfo == null)
		U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* L_3 = L_1;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___fieldInfo_0;
		bool L_5;
		L_5 = FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74(L_4, (FieldInfo_t*)NULL, NULL);
		G_B1_0 = L_3;
		if (!L_5)
		{
			G_B2_0 = L_3;
			goto IL_0025;
		}
	}
	{
		// throw new ArgumentNullException("fieldInfo");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakStaticFieldSetter_m126CC4DB58E039F3B2E99F7105C14E42E87BD984_RuntimeMethod_var)));
	}

IL_0025:
	{
		// if (!fieldInfo.IsStatic)
		U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* L_7 = G_B2_0;
		NullCheck(L_7);
		FieldInfo_t* L_8 = L_7->___fieldInfo_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_8, NULL);
		G_B3_0 = L_7;
		if (L_9)
		{
			G_B4_0 = L_7;
			goto IL_003d;
		}
	}
	{
		// throw new ArgumentException("Field must be static.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C4A74813E03670A3DDF68FD7559A475174A5814)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakStaticFieldSetter_m126CC4DB58E039F3B2E99F7105C14E42E87BD984_RuntimeMethod_var)));
	}

IL_003d:
	{
		// fieldInfo = fieldInfo.DeAliasField();
		U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* L_11 = G_B4_0;
		U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* L_12 = L_11;
		NullCheck(L_12);
		FieldInfo_t* L_13 = L_12->___fieldInfo_0;
		FieldInfo_t* L_14;
		L_14 = FieldInfoExtensions_DeAliasField_mBA84FD1CB9CAF86CE0CE26DDAC895B39377843BB(L_13, (bool)0, NULL);
		NullCheck(L_12);
		L_12->___fieldInfo_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___fieldInfo_0), (void*)L_14);
		// return delegate (object value)
		// {
		//     fieldInfo.SetValue(null, value);
		// };
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_15 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_15, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CCreateWeakStaticFieldSetterU3Eb__0_mC9DA2701066C296A558E0FB5E50F2BDCC2D179D6_RuntimeMethod_var), NULL);
		return L_15;
	}
}
// OdinSerializer.Utilities.WeakValueGetter OdinSerializer.Utilities.EmitUtilities::CreateWeakInstanceFieldGetter(System.Type,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* EmitUtilities_CreateWeakInstanceFieldGetter_m8E1F1AFFC8006A81D57403FD6E32F80EBAFD9CFA (Type_t* ___0_instanceType, FieldInfo_t* ___1_fieldInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_mA55EF249FD43952D4F732820BC54786B4D9E25B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* G_B1_0 = NULL;
	U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* G_B4_0 = NULL;
	U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* G_B3_0 = NULL;
	U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* G_B6_0 = NULL;
	U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* L_0 = (U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_mAF58355CDE6E695864137FEFDCE53141C43EF651(L_0, NULL);
		U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* L_1 = L_0;
		FieldInfo_t* L_2 = ___1_fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		// if (fieldInfo == null)
		U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* L_3 = L_1;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___fieldInfo_0;
		bool L_5;
		L_5 = FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74(L_4, (FieldInfo_t*)NULL, NULL);
		G_B1_0 = L_3;
		if (!L_5)
		{
			G_B2_0 = L_3;
			goto IL_0025;
		}
	}
	{
		// throw new ArgumentNullException("fieldInfo");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldGetter_m8E1F1AFFC8006A81D57403FD6E32F80EBAFD9CFA_RuntimeMethod_var)));
	}

IL_0025:
	{
		// if (instanceType == null)
		Type_t* L_7 = ___0_instanceType;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, (Type_t*)NULL, NULL);
		G_B3_0 = G_B2_0;
		if (!L_8)
		{
			G_B4_0 = G_B2_0;
			goto IL_0039;
		}
	}
	{
		// throw new ArgumentNullException("instanceType");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C92044AA503422C8954E73697B146F1E63C9334)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldGetter_m8E1F1AFFC8006A81D57403FD6E32F80EBAFD9CFA_RuntimeMethod_var)));
	}

IL_0039:
	{
		// if (fieldInfo.IsStatic)
		U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* L_10 = G_B4_0;
		NullCheck(L_10);
		FieldInfo_t* L_11 = L_10->___fieldInfo_0;
		NullCheck(L_11);
		bool L_12;
		L_12 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_11, NULL);
		G_B5_0 = L_10;
		if (!L_12)
		{
			G_B6_0 = L_10;
			goto IL_0051;
		}
	}
	{
		// throw new ArgumentException("Field cannot be static.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2C992F5B74F2E286B3734B39409FFBE6FCC4427)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldGetter_m8E1F1AFFC8006A81D57403FD6E32F80EBAFD9CFA_RuntimeMethod_var)));
	}

IL_0051:
	{
		// fieldInfo = fieldInfo.DeAliasField();
		U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* L_14 = G_B6_0;
		U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* L_15 = L_14;
		NullCheck(L_15);
		FieldInfo_t* L_16 = L_15->___fieldInfo_0;
		FieldInfo_t* L_17;
		L_17 = FieldInfoExtensions_DeAliasField_mBA84FD1CB9CAF86CE0CE26DDAC895B39377843BB(L_16, (bool)0, NULL);
		NullCheck(L_15);
		L_15->___fieldInfo_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___fieldInfo_0), (void*)L_17);
		// return delegate (ref object classInstance)
		// {
		//     return fieldInfo.GetValue(classInstance);
		// };
		WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* L_18 = (WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195*)il2cpp_codegen_object_new(WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WeakValueGetter__ctor_mA1F67AC1B63740DB56641257CD8769FB15C27E84(L_18, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_mA55EF249FD43952D4F732820BC54786B4D9E25B0_RuntimeMethod_var), NULL);
		return L_18;
	}
}
// OdinSerializer.Utilities.WeakValueSetter OdinSerializer.Utilities.EmitUtilities::CreateWeakInstanceFieldSetter(System.Type,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* EmitUtilities_CreateWeakInstanceFieldSetter_mF487985059D411F39C5808111D7BB5CD4E19FA54 (Type_t* ___0_instanceType, FieldInfo_t* ___1_fieldInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_m3676F154803FDE6F9FC99193D0B2D22722AB196D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* G_B1_0 = NULL;
	U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* G_B4_0 = NULL;
	U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* G_B3_0 = NULL;
	U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* G_B6_0 = NULL;
	U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* L_0 = (U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m1BD75CEA5E8E06277C1B8356E921503995282509(L_0, NULL);
		U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* L_1 = L_0;
		FieldInfo_t* L_2 = ___1_fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		// if (fieldInfo == null)
		U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* L_3 = L_1;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___fieldInfo_0;
		bool L_5;
		L_5 = FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74(L_4, (FieldInfo_t*)NULL, NULL);
		G_B1_0 = L_3;
		if (!L_5)
		{
			G_B2_0 = L_3;
			goto IL_0025;
		}
	}
	{
		// throw new ArgumentNullException("fieldInfo");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldSetter_mF487985059D411F39C5808111D7BB5CD4E19FA54_RuntimeMethod_var)));
	}

IL_0025:
	{
		// if (instanceType == null)
		Type_t* L_7 = ___0_instanceType;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, (Type_t*)NULL, NULL);
		G_B3_0 = G_B2_0;
		if (!L_8)
		{
			G_B4_0 = G_B2_0;
			goto IL_0039;
		}
	}
	{
		// throw new ArgumentNullException("instanceType");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C92044AA503422C8954E73697B146F1E63C9334)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldSetter_mF487985059D411F39C5808111D7BB5CD4E19FA54_RuntimeMethod_var)));
	}

IL_0039:
	{
		// if (fieldInfo.IsStatic)
		U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* L_10 = G_B4_0;
		NullCheck(L_10);
		FieldInfo_t* L_11 = L_10->___fieldInfo_0;
		NullCheck(L_11);
		bool L_12;
		L_12 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_11, NULL);
		G_B5_0 = L_10;
		if (!L_12)
		{
			G_B6_0 = L_10;
			goto IL_0051;
		}
	}
	{
		// throw new ArgumentException("Field cannot be static.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2C992F5B74F2E286B3734B39409FFBE6FCC4427)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldSetter_mF487985059D411F39C5808111D7BB5CD4E19FA54_RuntimeMethod_var)));
	}

IL_0051:
	{
		// fieldInfo = fieldInfo.DeAliasField();
		U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* L_14 = G_B6_0;
		U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* L_15 = L_14;
		NullCheck(L_15);
		FieldInfo_t* L_16 = L_15->___fieldInfo_0;
		FieldInfo_t* L_17;
		L_17 = FieldInfoExtensions_DeAliasField_mBA84FD1CB9CAF86CE0CE26DDAC895B39377843BB(L_16, (bool)0, NULL);
		NullCheck(L_15);
		L_15->___fieldInfo_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___fieldInfo_0), (void*)L_17);
		// return delegate (ref object classInstance, object value)
		// {
		//     fieldInfo.SetValue(classInstance, value);
		// };
		WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* L_18 = (WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B*)il2cpp_codegen_object_new(WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WeakValueSetter__ctor_m48349244E14CA783097D5043E85A54B4E86E7B08(L_18, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_m3676F154803FDE6F9FC99193D0B2D22722AB196D_RuntimeMethod_var), NULL);
		return L_18;
	}
}
// OdinSerializer.Utilities.WeakValueGetter OdinSerializer.Utilities.EmitUtilities::CreateWeakInstancePropertyGetter(System.Type,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* EmitUtilities_CreateWeakInstancePropertyGetter_m81D67425F1AA5226E457ACAB96DCB54913684C0F (Type_t* ___0_instanceType, PropertyInfo_t* ___1_propertyInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_m439E98302D63BFE1A752FB65ACD5E52CF7D9F068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* G_B1_0 = NULL;
	U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* G_B4_0 = NULL;
	U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* G_B3_0 = NULL;
	U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* G_B6_0 = NULL;
	U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* G_B5_0 = NULL;
	MethodInfo_t* G_B8_0 = NULL;
	U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* G_B8_1 = NULL;
	MethodInfo_t* G_B7_0 = NULL;
	U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* G_B7_1 = NULL;
	U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* G_B10_0 = NULL;
	U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* G_B9_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* L_0 = (U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m20576EBB225B1232B670B7E0411FFF0D2088E358(L_0, NULL);
		U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* L_1 = L_0;
		PropertyInfo_t* L_2 = ___1_propertyInfo;
		NullCheck(L_1);
		L_1->___propertyInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___propertyInfo_0), (void*)L_2);
		// if (propertyInfo == null)
		U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* L_3 = L_1;
		NullCheck(L_3);
		PropertyInfo_t* L_4 = L_3->___propertyInfo_0;
		bool L_5;
		L_5 = PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F(L_4, (PropertyInfo_t*)NULL, NULL);
		G_B1_0 = L_3;
		if (!L_5)
		{
			G_B2_0 = L_3;
			goto IL_0025;
		}
	}
	{
		// throw new ArgumentNullException("propertyInfo");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_m81D67425F1AA5226E457ACAB96DCB54913684C0F_RuntimeMethod_var)));
	}

IL_0025:
	{
		// if (instanceType == null)
		Type_t* L_7 = ___0_instanceType;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, (Type_t*)NULL, NULL);
		G_B3_0 = G_B2_0;
		if (!L_8)
		{
			G_B4_0 = G_B2_0;
			goto IL_0039;
		}
	}
	{
		// throw new ArgumentNullException("instanceType");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C92044AA503422C8954E73697B146F1E63C9334)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_m81D67425F1AA5226E457ACAB96DCB54913684C0F_RuntimeMethod_var)));
	}

IL_0039:
	{
		// propertyInfo = propertyInfo.DeAliasProperty();
		U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* L_10 = G_B4_0;
		U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* L_11 = L_10;
		NullCheck(L_11);
		PropertyInfo_t* L_12 = L_11->___propertyInfo_0;
		PropertyInfo_t* L_13;
		L_13 = PropertyInfoExtensions_DeAliasProperty_m0DE8B7FE7A8CFE1AC3084A8B1728B315BA1A1DBC(L_12, (bool)0, NULL);
		NullCheck(L_11);
		L_11->___propertyInfo_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___propertyInfo_0), (void*)L_13);
		// if (propertyInfo.GetIndexParameters().Length > 0)
		U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* L_14 = L_10;
		NullCheck(L_14);
		PropertyInfo_t* L_15 = L_14->___propertyInfo_0;
		NullCheck(L_15);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_16;
		L_16 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_15);
		NullCheck(L_16);
		G_B5_0 = L_14;
		if (!(((RuntimeArray*)L_16)->max_length))
		{
			G_B6_0 = L_14;
			goto IL_0064;
		}
	}
	{
		// throw new ArgumentException("Property must not have any index parameters");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral26DCB2051A67733E4E3E244BAEEA1FD347E9473B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_m81D67425F1AA5226E457ACAB96DCB54913684C0F_RuntimeMethod_var)));
	}

IL_0064:
	{
		// var getMethod = propertyInfo.GetGetMethod(true);
		U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* L_18 = G_B6_0;
		NullCheck(L_18);
		PropertyInfo_t* L_19 = L_18->___propertyInfo_0;
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_19, (bool)1);
		// if (getMethod == null)
		MethodInfo_t* L_21 = L_20;
		bool L_22;
		L_22 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_21, (MethodInfo_t*)NULL, NULL);
		G_B7_0 = L_21;
		G_B7_1 = L_18;
		if (!L_22)
		{
			G_B8_0 = L_21;
			G_B8_1 = L_18;
			goto IL_0084;
		}
	}
	{
		// throw new ArgumentException("Property must have a getter.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85E9CE6AD4896D7DAC7FD63267FC79467CB4862F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_m81D67425F1AA5226E457ACAB96DCB54913684C0F_RuntimeMethod_var)));
	}

IL_0084:
	{
		// if (getMethod.IsStatic)
		NullCheck(G_B8_0);
		bool L_24;
		L_24 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(G_B8_0, NULL);
		G_B9_0 = G_B8_1;
		if (!L_24)
		{
			G_B10_0 = G_B8_1;
			goto IL_0096;
		}
	}
	{
		// throw new ArgumentException("Property cannot be static.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47E25B7BC471508BCFDD9553C340FE99DAB34C4A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_m81D67425F1AA5226E457ACAB96DCB54913684C0F_RuntimeMethod_var)));
	}

IL_0096:
	{
		// return delegate (ref object classInstance)
		// {
		//     return propertyInfo.GetValue(classInstance, null);
		// };
		WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195* L_26 = (WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195*)il2cpp_codegen_object_new(WeakValueGetter_t6ECF87A42986A61F5640BA5728243B81A2E38195_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		WeakValueGetter__ctor_mA1F67AC1B63740DB56641257CD8769FB15C27E84(L_26, G_B10_0, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_m439E98302D63BFE1A752FB65ACD5E52CF7D9F068_RuntimeMethod_var), NULL);
		return L_26;
	}
}
// OdinSerializer.Utilities.WeakValueSetter OdinSerializer.Utilities.EmitUtilities::CreateWeakInstancePropertySetter(System.Type,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* EmitUtilities_CreateWeakInstancePropertySetter_mEB9BF29CF08BA137377E51608F854162262CEC90 (Type_t* ___0_instanceType, PropertyInfo_t* ___1_propertyInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m80A2E51FB039D0D76E0E54DE9B0FAE3D27BDA794_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* G_B1_0 = NULL;
	U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* G_B4_0 = NULL;
	U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* G_B3_0 = NULL;
	U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* G_B6_0 = NULL;
	U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* G_B5_0 = NULL;
	U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* G_B8_0 = NULL;
	U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* G_B7_0 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* L_0 = (U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass15_0__ctor_m3B2A4CA1FAFD80F0400E4C938F1CFDB5155B8BF7(L_0, NULL);
		U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* L_1 = L_0;
		PropertyInfo_t* L_2 = ___1_propertyInfo;
		NullCheck(L_1);
		L_1->___propertyInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___propertyInfo_0), (void*)L_2);
		// if (propertyInfo == null)
		U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* L_3 = L_1;
		NullCheck(L_3);
		PropertyInfo_t* L_4 = L_3->___propertyInfo_0;
		bool L_5;
		L_5 = PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F(L_4, (PropertyInfo_t*)NULL, NULL);
		G_B1_0 = L_3;
		if (!L_5)
		{
			G_B2_0 = L_3;
			goto IL_0025;
		}
	}
	{
		// throw new ArgumentNullException("propertyInfo");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertySetter_mEB9BF29CF08BA137377E51608F854162262CEC90_RuntimeMethod_var)));
	}

IL_0025:
	{
		// if (instanceType == null)
		Type_t* L_7 = ___0_instanceType;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, (Type_t*)NULL, NULL);
		G_B3_0 = G_B2_0;
		if (!L_8)
		{
			G_B4_0 = G_B2_0;
			goto IL_0039;
		}
	}
	{
		// throw new ArgumentNullException("instanceType");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C92044AA503422C8954E73697B146F1E63C9334)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertySetter_mEB9BF29CF08BA137377E51608F854162262CEC90_RuntimeMethod_var)));
	}

IL_0039:
	{
		// propertyInfo = propertyInfo.DeAliasProperty();
		U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* L_10 = G_B4_0;
		U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* L_11 = L_10;
		NullCheck(L_11);
		PropertyInfo_t* L_12 = L_11->___propertyInfo_0;
		PropertyInfo_t* L_13;
		L_13 = PropertyInfoExtensions_DeAliasProperty_m0DE8B7FE7A8CFE1AC3084A8B1728B315BA1A1DBC(L_12, (bool)0, NULL);
		NullCheck(L_11);
		L_11->___propertyInfo_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___propertyInfo_0), (void*)L_13);
		// if (propertyInfo.GetIndexParameters().Length > 0)
		U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* L_14 = L_10;
		NullCheck(L_14);
		PropertyInfo_t* L_15 = L_14->___propertyInfo_0;
		NullCheck(L_15);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_16;
		L_16 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_15);
		NullCheck(L_16);
		G_B5_0 = L_14;
		if (!(((RuntimeArray*)L_16)->max_length))
		{
			G_B6_0 = L_14;
			goto IL_0064;
		}
	}
	{
		// throw new ArgumentException("Property must not have any index parameters");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral26DCB2051A67733E4E3E244BAEEA1FD347E9473B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertySetter_mEB9BF29CF08BA137377E51608F854162262CEC90_RuntimeMethod_var)));
	}

IL_0064:
	{
		// var setMethod = propertyInfo.GetSetMethod(true);
		U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* L_18 = G_B6_0;
		NullCheck(L_18);
		PropertyInfo_t* L_19 = L_18->___propertyInfo_0;
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(24 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_19, (bool)1);
		// if (setMethod.IsStatic)
		NullCheck(L_20);
		bool L_21;
		L_21 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_20, NULL);
		G_B7_0 = L_18;
		if (!L_21)
		{
			G_B8_0 = L_18;
			goto IL_0082;
		}
	}
	{
		// throw new ArgumentException("Property cannot be static.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47E25B7BC471508BCFDD9553C340FE99DAB34C4A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertySetter_mEB9BF29CF08BA137377E51608F854162262CEC90_RuntimeMethod_var)));
	}

IL_0082:
	{
		// return delegate (ref object classInstance, object value)
		// {
		//     propertyInfo.SetValue(classInstance, value, null);
		// };
		WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B* L_23 = (WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B*)il2cpp_codegen_object_new(WeakValueSetter_t6AC9E2F8ABFDCE1B6A38ACBC26DB2855E79E727B_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WeakValueSetter__ctor_m48349244E14CA783097D5043E85A54B4E86E7B08(L_23, G_B8_0, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m80A2E51FB039D0D76E0E54DE9B0FAE3D27BDA794_RuntimeMethod_var), NULL);
		return L_23;
	}
}
// System.Action OdinSerializer.Utilities.EmitUtilities::CreateStaticMethodCaller(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* EmitUtilities_CreateStaticMethodCaller_m8E345A641B4ABBC6F6B5C93A07EBE22F21F07130 (MethodInfo_t* ___0_methodInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (methodInfo == null)
		MethodInfo_t* L_0 = ___0_methodInfo;
		bool L_1;
		L_1 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_0, (MethodInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("methodInfo");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9BCDF92088B43A83757528F5CA0E89E3A8EA051D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateStaticMethodCaller_m8E345A641B4ABBC6F6B5C93A07EBE22F21F07130_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (!methodInfo.IsStatic)
		MethodInfo_t* L_3 = ___0_methodInfo;
		NullCheck(L_3);
		bool L_4;
		L_4 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_3, NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		// throw new ArgumentException("Given method '" + methodInfo.Name + "' is an instance method when it has to be static.");
		MethodInfo_t* L_5 = ___0_methodInfo;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6624D8C33CE15A1906D8F3BBF68FABBE8E179079)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral22363B2DA57DE0197C3DC04546321A605E3FFE02)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateStaticMethodCaller_m8E345A641B4ABBC6F6B5C93A07EBE22F21F07130_RuntimeMethod_var)));
	}

IL_0037:
	{
		// if (methodInfo.GetParameters().Length > 0)
		MethodInfo_t* L_9 = ___0_methodInfo;
		NullCheck(L_9);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_10;
		L_10 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_9);
		NullCheck(L_10);
		if (!(((RuntimeArray*)L_10)->max_length))
		{
			goto IL_004b;
		}
	}
	{
		// throw new ArgumentException("Given method cannot have any parameters.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBD2D161BE39B692B416EC33FBD72BE2EE0DEF4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateStaticMethodCaller_m8E345A641B4ABBC6F6B5C93A07EBE22F21F07130_RuntimeMethod_var)));
	}

IL_004b:
	{
		// methodInfo = methodInfo.DeAliasMethod();
		MethodInfo_t* L_12 = ___0_methodInfo;
		MethodInfo_t* L_13;
		L_13 = MethodInfoExtensions_DeAliasMethod_m9165375111F91EF1F8A3B6BB5C83EDBB44892121(L_12, (bool)0, NULL);
		___0_methodInfo = L_13;
		// return (Action)Delegate.CreateDelegate(typeof(Action), methodInfo);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		MethodInfo_t* L_16 = ___0_methodInfo;
		Delegate_t* L_17;
		L_17 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_15, L_16, NULL);
		return ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_17, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
	}
}
// System.Action`1<System.Object> OdinSerializer.Utilities.EmitUtilities::CreateWeakInstanceMethodCaller(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* EmitUtilities_CreateWeakInstanceMethodCaller_mDBB17B091C622B5F9A98B21BF016AA56663D0A53 (MethodInfo_t* ___0_methodInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_mCC9C68A75A2CFF8218752C1BB827D74D521C03B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* L_0 = (U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass23_0__ctor_m9AD8FFEEC960485CFCAD815C090FC5E9D051A72C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* L_1 = V_0;
		MethodInfo_t* L_2 = ___0_methodInfo;
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___methodInfo_0), (void*)L_2);
		// if (methodInfo == null)
		U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* L_3 = V_0;
		NullCheck(L_3);
		MethodInfo_t* L_4 = L_3->___methodInfo_0;
		bool L_5;
		L_5 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_4, (MethodInfo_t*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// throw new ArgumentNullException("methodInfo");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9BCDF92088B43A83757528F5CA0E89E3A8EA051D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceMethodCaller_mDBB17B091C622B5F9A98B21BF016AA56663D0A53_RuntimeMethod_var)));
	}

IL_0026:
	{
		// if (methodInfo.IsStatic)
		U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* L_7 = V_0;
		NullCheck(L_7);
		MethodInfo_t* L_8 = L_7->___methodInfo_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_8, NULL);
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		// throw new ArgumentException("Given method '" + methodInfo.Name + "' is static when it has to be an instance method.");
		U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* L_10 = V_0;
		NullCheck(L_10);
		MethodInfo_t* L_11 = L_10->___methodInfo_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		String_t* L_13;
		L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6624D8C33CE15A1906D8F3BBF68FABBE8E179079)), L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral90A683BBF1FEB32AEC0B5DED0CC88DD136FC5CE7)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceMethodCaller_mDBB17B091C622B5F9A98B21BF016AA56663D0A53_RuntimeMethod_var)));
	}

IL_0053:
	{
		// if (methodInfo.GetParameters().Length > 0)
		U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* L_15 = V_0;
		NullCheck(L_15);
		MethodInfo_t* L_16 = L_15->___methodInfo_0;
		NullCheck(L_16);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_17;
		L_17 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_16);
		NullCheck(L_17);
		if (!(((RuntimeArray*)L_17)->max_length))
		{
			goto IL_006c;
		}
	}
	{
		// throw new ArgumentException("Given method cannot have any parameters.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBD2D161BE39B692B416EC33FBD72BE2EE0DEF4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceMethodCaller_mDBB17B091C622B5F9A98B21BF016AA56663D0A53_RuntimeMethod_var)));
	}

IL_006c:
	{
		// methodInfo = methodInfo.DeAliasMethod();
		U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* L_19 = V_0;
		U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* L_20 = V_0;
		NullCheck(L_20);
		MethodInfo_t* L_21 = L_20->___methodInfo_0;
		MethodInfo_t* L_22;
		L_22 = MethodInfoExtensions_DeAliasMethod_m9165375111F91EF1F8A3B6BB5C83EDBB44892121(L_21, (bool)0, NULL);
		NullCheck(L_19);
		L_19->___methodInfo_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___methodInfo_0), (void*)L_22);
		// return delegate (object classInstance)
		// {
		//     methodInfo.Invoke(classInstance, null);
		// };
		U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* L_23 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_24 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass23_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_mCC9C68A75A2CFF8218752C1BB827D74D521C03B7_RuntimeMethod_var), NULL);
		return L_24;
	}
}
// System.Void OdinSerializer.Utilities.EmitUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitUtilities__cctor_m2B5A00044C1C2023FAA5F9089A3138FD5338480F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Assembly EngineAssembly = typeof(UnityEngine.Object).Assembly;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Assembly_t* L_2;
		L_2 = VirtualFuncInvoker0< Assembly_t* >::Invoke(26 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_1);
		((EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_StaticFields*)il2cpp_codegen_static_fields_for(EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_il2cpp_TypeInfo_var))->___EngineAssembly_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_StaticFields*)il2cpp_codegen_static_fields_for(EmitUtilities_tBEAC671E65FA7872FAB374798E65DBC1D7FBEB3C_il2cpp_TypeInfo_var))->___EngineAssembly_0), (void*)L_2);
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
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m90C4611A332373738AAEC0F1FB8FE4857AA9A193 (U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass5_0::<CreateWeakStaticFieldGetter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldGetterU3Eb__0_m85E5392D55FCC412AC6C192140A484AD96547DD2 (U3CU3Ec__DisplayClass5_0_t3FFE16F26E58D9F0C5E3EC296CF6C8B44F620089* __this, const RuntimeMethod* method) 
{
	{
		// return fieldInfo.GetValue(null);
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, NULL);
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
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m73ECA66104496833999D32E3C7B6DF68B3D3AA38 (U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass7_0::<CreateWeakStaticFieldSetter>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CCreateWeakStaticFieldSetterU3Eb__0_mC9DA2701066C296A558E0FB5E50F2BDCC2D179D6 (U3CU3Ec__DisplayClass7_0_t124E39246AF185C73BF408920C8DF537D7BA8949* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// fieldInfo.SetValue(null, value);
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_0, NULL, L_1, NULL);
		// };
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
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mAF58355CDE6E695864137FEFDCE53141C43EF651 (U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass10_0::<CreateWeakInstanceFieldGetter>b__0(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass10_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_mA55EF249FD43952D4F732820BC54786B4D9E25B0 (U3CU3Ec__DisplayClass10_0_tD8A8B16F610CD8AC78CCA55DFEFFC1B1B8B2C493* __this, RuntimeObject** ___0_classInstance, const RuntimeMethod* method) 
{
	{
		// return fieldInfo.GetValue(classInstance);
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		RuntimeObject** L_1 = ___0_classInstance;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_2);
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
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m1BD75CEA5E8E06277C1B8356E921503995282509 (U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass13_0::<CreateWeakInstanceFieldSetter>b__0(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_m3676F154803FDE6F9FC99193D0B2D22722AB196D (U3CU3Ec__DisplayClass13_0_tE32725C9F44F9135ADA3D0E9A21AE6CCE68B50E4* __this, RuntimeObject** ___0_classInstance, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		// fieldInfo.SetValue(classInstance, value);
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		RuntimeObject** L_1 = ___0_classInstance;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		RuntimeObject* L_3 = ___1_value;
		NullCheck(L_0);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_0, L_2, L_3, NULL);
		// };
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
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m20576EBB225B1232B670B7E0411FFF0D2088E358 (U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass14_0::<CreateWeakInstancePropertyGetter>b__0(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass14_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_m439E98302D63BFE1A752FB65ACD5E52CF7D9F068 (U3CU3Ec__DisplayClass14_0_tE9EF637D36652029D52A3D22B8CDFA19F7410954* __this, RuntimeObject** ___0_classInstance, const RuntimeMethod* method) 
{
	{
		// return propertyInfo.GetValue(classInstance, null);
		PropertyInfo_t* L_0 = __this->___propertyInfo_0;
		RuntimeObject** L_1 = ___0_classInstance;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_0, L_2, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
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
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m3B2A4CA1FAFD80F0400E4C938F1CFDB5155B8BF7 (U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass15_0::<CreateWeakInstancePropertySetter>b__0(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m80A2E51FB039D0D76E0E54DE9B0FAE3D27BDA794 (U3CU3Ec__DisplayClass15_0_tB384D57227DDE64414BA02ABB36E55268EDE7A08* __this, RuntimeObject** ___0_classInstance, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		// propertyInfo.SetValue(classInstance, value, null);
		PropertyInfo_t* L_0 = __this->___propertyInfo_0;
		RuntimeObject** L_1 = ___0_classInstance;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		RuntimeObject* L_3 = ___1_value;
		NullCheck(L_0);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_0, L_2, L_3, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		// };
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
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m9AD8FFEEC960485CFCAD815C090FC5E9D051A72C (U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void OdinSerializer.Utilities.EmitUtilities/<>c__DisplayClass23_0::<CreateWeakInstanceMethodCaller>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_mCC9C68A75A2CFF8218752C1BB827D74D521C03B7 (U3CU3Ec__DisplayClass23_0_tB7486C030F211C43A50350EC4029D4E16B09B48E* __this, RuntimeObject* ___0_classInstance, const RuntimeMethod* method) 
{
	{
		// methodInfo.Invoke(classInstance, null);
		MethodInfo_t* L_0 = __this->___methodInfo_0;
		RuntimeObject* L_1 = ___0_classInstance;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, L_1, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		// };
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
// System.Boolean OdinSerializer.Utilities.FastTypeComparer::Equals(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastTypeComparer_Equals_m7F1C2A9F228001EBADDBE277A76906EF88700914 (FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB* __this, Type_t* ___0_x, Type_t* ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (object.ReferenceEquals(x, y)) return true; // Oft-used fast path over regular Type.Equals makes this much faster
		Type_t* L_0 = ___0_x;
		Type_t* L_1 = ___1_y;
		if ((!(((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		// if (object.ReferenceEquals(x, y)) return true; // Oft-used fast path over regular Type.Equals makes this much faster
		return (bool)1;
	}

IL_0006:
	{
		// return x == y;
		Type_t* L_2 = ___0_x;
		Type_t* L_3 = ___1_y;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 OdinSerializer.Utilities.FastTypeComparer::GetHashCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastTypeComparer_GetHashCode_m5C45608E827264BD5D4A7339B586795ABCBB1076 (FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB* __this, Type_t* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.GetHashCode();
		Type_t* L_0 = ___0_obj;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void OdinSerializer.Utilities.FastTypeComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastTypeComparer__ctor_mF4BB39DF0FDE8EED0A8C0B357C6183F165293F03 (FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void OdinSerializer.Utilities.FastTypeComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastTypeComparer__cctor_m0EC9C453EB7F179CBB3E42CAD217435029712653 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly FastTypeComparer Instance = new FastTypeComparer();
		FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB* L_0 = (FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB*)il2cpp_codegen_object_new(FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FastTypeComparer__ctor_mF4BB39DF0FDE8EED0A8C0B357C6183F165293F03(L_0, NULL);
		((FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB_StaticFields*)il2cpp_codegen_static_fields_for(FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB_StaticFields*)il2cpp_codegen_static_fields_for(FastTypeComparer_t9ED29ADB550F4AABB08FEB3B9F1959D419FFBCBB_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.Void OdinSerializer.Utilities.ImmutableList::.ctor(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList__ctor_m709811723A8C3E38B53CADDF05301E0E6F18A3A4 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, RuntimeObject* ___0_innerList, const RuntimeMethod* method) 
{
	{
		// public ImmutableList(IList innerList)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (innerList == null)
		RuntimeObject* L_0 = ___0_innerList;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("innerList");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18BBD42CCE9B175CCD6F5CA37762D740A0B5A5C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList__ctor_m709811723A8C3E38B53CADDF05301E0E6F18A3A4_RuntimeMethod_var)));
	}

IL_0014:
	{
		// this.innerList = innerList;
		RuntimeObject* L_2 = ___0_innerList;
		__this->___innerList_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___innerList_0), (void*)L_2);
		// }
		return;
	}
}
// System.Int32 OdinSerializer.Utilities.ImmutableList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImmutableList_get_Count_m883630BE0A202A66749008F4779BEE9D3A4D8B3B (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Count { get { return this.innerList.Count; } }
		RuntimeObject* L_0 = __this->___innerList_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean OdinSerializer.Utilities.ImmutableList::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_get_IsFixedSize_m3C9C7746F7B21EC2AA173C51194C36A1ADE96B13 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsFixedSize { get { return true; } }
		return (bool)1;
	}
}
// System.Boolean OdinSerializer.Utilities.ImmutableList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_get_IsReadOnly_mB08B0C6744C0D0D6A04502DA5208483A310FA813 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsReadOnly { get { return true; } }
		return (bool)1;
	}
}
// System.Boolean OdinSerializer.Utilities.ImmutableList::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_get_IsSynchronized_mEAE704D0649B260CF263C556BF21B4A882A393ED (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsSynchronized { get { return this.innerList.IsSynchronized; } }
		RuntimeObject* L_0 = __this->___innerList_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object OdinSerializer.Utilities.ImmutableList::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_get_SyncRoot_m5E015EB33690C6911CB736B3B65D5D7092344276 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public object SyncRoot { get { return this.innerList.SyncRoot; } }
		RuntimeObject* L_0 = __this->___innerList_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object OdinSerializer.Utilities.ImmutableList::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_System_Collections_IList_get_Item_m83929FFCFA8E5C38AEA2B0BAD9BF606D6762596B (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.innerList[index];
		RuntimeObject* L_0 = __this->___innerList_0;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_set_Item_m02E64F29FE694A33A244149BE07B5A6B6D8ECD8D (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Immutable Lists cannot be edited.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_set_Item_m02E64F29FE694A33A244149BE07B5A6B6D8ECD8D_RuntimeMethod_var)));
	}
}
// System.Object OdinSerializer.Utilities.ImmutableList::System.Collections.Generic.IList<System.Object>.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_get_Item_mC536261298EE1561CD3B92E0C75E1755A05272AB (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.innerList[index];
		RuntimeObject* L_0 = __this->___innerList_0;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList::System.Collections.Generic.IList<System.Object>.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_set_Item_mF7E595ADF1C3E5DD4D87046900C1D95DA93FDC07 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Immutable Lists cannot be edited.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_set_Item_mF7E595ADF1C3E5DD4D87046900C1D95DA93FDC07_RuntimeMethod_var)));
	}
}
// System.Object OdinSerializer.Utilities.ImmutableList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_get_Item_mDD5C852D712F80E62571EBE169A5B5FAF2C81882 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public object this[int index] { get { return this.innerList[index]; } }
		RuntimeObject* L_0 = __this->___innerList_0;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean OdinSerializer.Utilities.ImmutableList::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_Contains_m75338DB3E00B03B8615B9FBEA9AF342C1B045CA0 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.innerList.Contains(value);
		RuntimeObject* L_0 = __this->___innerList_0;
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList::CopyTo(System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_CopyTo_m7B981BB49F79565199D312A4726B8C143EDD86C0 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.innerList.CopyTo(array, arrayIndex);
		RuntimeObject* L_0 = __this->___innerList_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0, (RuntimeArray*)L_1, L_2);
		// }
		return;
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_CopyTo_m608FE143EDECFBC30A2CC029243C1D40438E85EE (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.innerList.CopyTo(array, index);
		RuntimeObject* L_0 = __this->___innerList_0;
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Collections.IEnumerator OdinSerializer.Utilities.ImmutableList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_GetEnumerator_m969309660ACF2722FE10A0CA6802854867CD98FB (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.innerList.GetEnumerator();
		RuntimeObject* L_0 = __this->___innerList_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator OdinSerializer.Utilities.ImmutableList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_System_Collections_IEnumerable_GetEnumerator_m3193D5D69F329E5FD91DADA0EB2F05511AE28EB0 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, const RuntimeMethod* method) 
{
	{
		// return this.GetEnumerator();
		RuntimeObject* L_0;
		L_0 = ImmutableList_GetEnumerator_m969309660ACF2722FE10A0CA6802854867CD98FB(__this, NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> OdinSerializer.Utilities.ImmutableList::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m668748DACB4C6CFB276BFA06C8B7465509F959BB (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E* L_0 = (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E*)il2cpp_codegen_object_new(U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25__ctor_mF671AA6671E9E7C2A503E40D8F4BB949716BD48C(L_0, 0, NULL);
		U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Int32 OdinSerializer.Utilities.ImmutableList::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImmutableList_System_Collections_IList_Add_m033F3F7827B9F5EED0AAB5B216B03978E4AA1664 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Immutable Lists cannot be edited.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_Add_m033F3F7827B9F5EED0AAB5B216B03978E4AA1664_RuntimeMethod_var)));
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_Clear_mD5D2A767EAE1418BF9A84E3A8D00E8FD35DABA92 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Immutable Lists cannot be edited.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_Clear_mD5D2A767EAE1418BF9A84E3A8D00E8FD35DABA92_RuntimeMethod_var)));
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_Insert_m50342BA1311133C4B833CCE8891612F0E7922AA0 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Immutable Lists cannot be edited.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_Insert_m50342BA1311133C4B833CCE8891612F0E7922AA0_RuntimeMethod_var)));
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_Remove_m0399DB547E5630B94100FAB8AB3A272B7DFF7B1A (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Immutable Lists cannot be edited.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_Remove_m0399DB547E5630B94100FAB8AB3A272B7DFF7B1A_RuntimeMethod_var)));
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_RemoveAt_m2D16B6416255D7E1EDE9F07194EFEF41E239A419 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Immutable Lists cannot be edited.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_RemoveAt_m2D16B6416255D7E1EDE9F07194EFEF41E239A419_RuntimeMethod_var)));
	}
}
// System.Int32 OdinSerializer.Utilities.ImmutableList::IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImmutableList_IndexOf_mC1DF58CBCD2659EEB62F8746102E72AB13A56D07 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.innerList.IndexOf(value);
		RuntimeObject* L_0 = __this->___innerList_0;
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList::System.Collections.Generic.IList<System.Object>.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_RemoveAt_m135A80A3A5D9E8987B183F4FB87FF5F83B0B67A5 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Immutable Lists cannot be edited.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_RemoveAt_m135A80A3A5D9E8987B183F4FB87FF5F83B0B67A5_RuntimeMethod_var)));
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList::System.Collections.Generic.IList<System.Object>.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_Insert_m9AD04C17BE944EAFAF2643FC648B6A3F37255578 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Immutable Lists cannot be edited.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_Insert_m9AD04C17BE944EAFAF2643FC648B6A3F37255578_RuntimeMethod_var)));
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList::System.Collections.Generic.ICollection<System.Object>.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Add_m69A35E02702A5619A0B70AFC6788D4C772C1F822 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Immutable Lists cannot be edited.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Add_m69A35E02702A5619A0B70AFC6788D4C772C1F822_RuntimeMethod_var)));
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList::System.Collections.Generic.ICollection<System.Object>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Clear_mCA0714CCE827AE0C313E5758E9C2C8B48C444F8B (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Immutable Lists cannot be edited.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Clear_mCA0714CCE827AE0C313E5758E9C2C8B48C444F8B_RuntimeMethod_var)));
	}
}
// System.Boolean OdinSerializer.Utilities.ImmutableList::System.Collections.Generic.ICollection<System.Object>.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Remove_m3B136668F22C0F942AE4D0216FC8669674E46DF7 (ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Immutable Lists cannot be edited.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Remove_m3B136668F22C0F942AE4D0216FC8669674E46DF7_RuntimeMethod_var)));
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
// System.Void OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25__ctor_mF671AA6671E9E7C2A503E40D8F4BB949716BD48C (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m3DDC544FC9308F98B4F00B933A682DFC533E12DB (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_mFB1E35275EF221C0697447B86929D59012DEEDB8(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_MoveNext_m59E7B3EE87021E643C7324659682267078572D50 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_007f:
			{// begin fault (depth: 1)
				U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m3DDC544FC9308F98B4F00B933A682DFC533E12DB(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0086;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (var obj in this.innerList)
				ImmutableList_t5D52E65E01582C2AEF9DB06F1844639FE6370F2B* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5 = L_4->___innerList_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_5);
				__this->___U3CU3E7__wrap1_3 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0061_1;
			}

IL_003b_1:
			{
				// foreach (var obj in this.innerList)
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap1_3;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_3 = L_8;
				// yield return obj;
				RuntimeObject* L_9 = V_3;
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0086;
			}

IL_0059_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0061_1:
			{
				// foreach (var obj in this.innerList)
				RuntimeObject* L_10 = __this->___U3CU3E7__wrap1_3;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_mFB1E35275EF221C0697447B86929D59012DEEDB8(__this, NULL);
				__this->___U3CU3E7__wrap1_3 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_0086;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_mFB1E35275EF221C0697447B86929D59012DEEDB8 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_3;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFA6DAD16FC4E90A3DB9DEE7C5B1C34C7343711B7 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m8BD8A016BEEBB31870B2EEB9AE794721B52C3BDF (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m8BD8A016BEEBB31870B2EEB9AE794721B52C3BDF_RuntimeMethod_var)));
	}
}
// System.Object OdinSerializer.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_get_Current_mE618344071A5E9C4AE2521FEDD595644782CDD3F (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t247DF4121A15867A3FD3C33F1BA02513E396181E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void OdinSerializer.Utilities.MemberAliasFieldInfo::.ctor(System.Reflection.FieldInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasFieldInfo__ctor_mE313BD59687E9A9F344E3497DA43B2EBE7E03428 (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, FieldInfo_t* ___0_field, String_t* ___1_namePrefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MemberAliasFieldInfo(FieldInfo field, string namePrefix)
		FieldInfo__ctor_m8424D98FC7039BEC250ED437607B5D73352F0A0F(__this, NULL);
		// this.aliasedField = field;
		FieldInfo_t* L_0 = ___0_field;
		__this->___aliasedField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedField_1), (void*)L_0);
		// this.mangledName = string.Concat(namePrefix, FAKE_NAME_SEPARATOR_STRING, this.aliasedField.Name);
		String_t* L_1 = ___1_namePrefix;
		FieldInfo_t* L_2 = __this->___aliasedField_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_3, NULL);
		__this->___mangledName_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_4);
		// }
		return;
	}
}
// System.Void OdinSerializer.Utilities.MemberAliasFieldInfo::.ctor(System.Reflection.FieldInfo,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasFieldInfo__ctor_m241422C94A07A8B40453E4DD7FF77C9793BCDA59 (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, FieldInfo_t* ___0_field, String_t* ___1_namePrefix, String_t* ___2_separatorString, const RuntimeMethod* method) 
{
	{
		// public MemberAliasFieldInfo(FieldInfo field, string namePrefix, string separatorString)
		FieldInfo__ctor_m8424D98FC7039BEC250ED437607B5D73352F0A0F(__this, NULL);
		// this.aliasedField = field;
		FieldInfo_t* L_0 = ___0_field;
		__this->___aliasedField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedField_1), (void*)L_0);
		// this.mangledName = string.Concat(namePrefix, separatorString, this.aliasedField.Name);
		String_t* L_1 = ___1_namePrefix;
		String_t* L_2 = ___2_separatorString;
		FieldInfo_t* L_3 = __this->___aliasedField_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, L_2, L_4, NULL);
		__this->___mangledName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_5);
		// }
		return;
	}
}
// System.Reflection.FieldInfo OdinSerializer.Utilities.MemberAliasFieldInfo::get_AliasedField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* MemberAliasFieldInfo_get_AliasedField_m12226E52D162867ACEF505C5AB8445A45530CD1A (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, const RuntimeMethod* method) 
{
	{
		// public FieldInfo AliasedField { get { return this.aliasedField; } }
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		return L_0;
	}
}
// System.Reflection.Module OdinSerializer.Utilities.MemberAliasFieldInfo::get_Module()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* MemberAliasFieldInfo_get_Module_m86CB6C39260AF8D89266278349AFDD2A9934E964 (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, const RuntimeMethod* method) 
{
	{
		// public override Module Module { get { return this.aliasedField.Module; } }
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* L_1;
		L_1 = VirtualFuncInvoker0< Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* >::Invoke(10 /* System.Reflection.Module System.Reflection.MemberInfo::get_Module() */, L_0);
		return L_1;
	}
}
// System.Int32 OdinSerializer.Utilities.MemberAliasFieldInfo::get_MetadataToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasFieldInfo_get_MetadataToken_mFF67B067ECCEBCE7B754BB47C3BA1BB02CBA339B (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, const RuntimeMethod* method) 
{
	{
		// public override int MetadataToken { get { return this.aliasedField.MetadataToken; } }
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_0);
		return L_1;
	}
}
// System.String OdinSerializer.Utilities.MemberAliasFieldInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberAliasFieldInfo_get_Name_m727B61566E1B0927C3C2E7BA99E0CB4074E47A58 (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, const RuntimeMethod* method) 
{
	{
		// public override string Name { get { return this.mangledName; } }
		String_t* L_0 = __this->___mangledName_2;
		return L_0;
	}
}
// System.Type OdinSerializer.Utilities.MemberAliasFieldInfo::get_DeclaringType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasFieldInfo_get_DeclaringType_mBD2B20F65F6C290053559421FC7229F672FE944A (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, const RuntimeMethod* method) 
{
	{
		// public override Type DeclaringType { get { return this.aliasedField.DeclaringType; } }
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		return L_1;
	}
}
// System.Type OdinSerializer.Utilities.MemberAliasFieldInfo::get_ReflectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasFieldInfo_get_ReflectedType_m62FA7B4B4E5F4B1B92A17EDD5785AF16281A9C05 (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, const RuntimeMethod* method) 
{
	{
		// public override Type ReflectedType { get { return this.aliasedField.ReflectedType; } }
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_ReflectedType() */, L_0);
		return L_1;
	}
}
// System.Type OdinSerializer.Utilities.MemberAliasFieldInfo::get_FieldType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasFieldInfo_get_FieldType_m9B9BF901E6B6C3670B4188F6F07DFF78CD5E9EBB (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, const RuntimeMethod* method) 
{
	{
		// public override Type FieldType { get { return this.aliasedField.FieldType; } }
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_0);
		return L_1;
	}
}
// System.RuntimeFieldHandle OdinSerializer.Utilities.MemberAliasFieldInfo::get_FieldHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 MemberAliasFieldInfo_get_FieldHandle_m81C9B34FF9484DB8DFA09A29E84CCFC0E8778EF1 (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, const RuntimeMethod* method) 
{
	{
		// public override RuntimeFieldHandle FieldHandle { get { return this.aliasedField.FieldHandle; } }
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_1;
		L_1 = VirtualFuncInvoker0< RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 >::Invoke(23 /* System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle() */, L_0);
		return L_1;
	}
}
// System.Reflection.FieldAttributes OdinSerializer.Utilities.MemberAliasFieldInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasFieldInfo_get_Attributes_mA350139A89EBCE3AC68864258D7BD67B54955F69 (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, const RuntimeMethod* method) 
{
	{
		// public override FieldAttributes Attributes { get { return this.aliasedField.Attributes; } }
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, L_0);
		return L_1;
	}
}
// System.Object[] OdinSerializer.Utilities.MemberAliasFieldInfo::GetCustomAttributes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasFieldInfo_GetCustomAttributes_m2B85896EA9355E5DA0502AD650F38AF12C5B3FE3 (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, bool ___0_inherit, const RuntimeMethod* method) 
{
	{
		// return this.aliasedField.GetCustomAttributes(inherit);
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		bool L_1 = ___0_inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] OdinSerializer.Utilities.MemberAliasFieldInfo::GetCustomAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasFieldInfo_GetCustomAttributes_mEFEA39BA6F8B1F61998B4E856935C1DCE38234A5 (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, Type_t* ___0_attributeType, bool ___1_inherit, const RuntimeMethod* method) 
{
	{
		// return this.aliasedField.GetCustomAttributes(attributeType, inherit);
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		Type_t* L_1 = ___0_attributeType;
		bool L_2 = ___1_inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean OdinSerializer.Utilities.MemberAliasFieldInfo::IsDefined(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasFieldInfo_IsDefined_m753A31A8D73813D1DBFC15439E618507104F0E09 (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, Type_t* ___0_attributeType, bool ___1_inherit, const RuntimeMethod* method) 
{
	{
		// return this.aliasedField.IsDefined(attributeType, inherit);
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		Type_t* L_1 = ___0_attributeType;
		bool L_2 = ___1_inherit;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(11 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Object OdinSerializer.Utilities.MemberAliasFieldInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberAliasFieldInfo_GetValue_mD3A98DA1D68E94B2DB1BC49432D9B9BAC8B41282 (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return this.aliasedField.GetValue(obj);
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		RuntimeObject* L_1 = ___0_obj;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void OdinSerializer.Utilities.MemberAliasFieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasFieldInfo_SetValue_m8ED848D8C7F3221670E2D5D04F34CE1044948FC5 (MemberAliasFieldInfo_tE8D19D24FB4449030F90DB9B4A5B4982A47F2577* __this, RuntimeObject* ___0_obj, RuntimeObject* ___1_value, int32_t ___2_invokeAttr, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___3_binder, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___4_culture, const RuntimeMethod* method) 
{
	{
		// this.aliasedField.SetValue(obj, value, invokeAttr, binder, culture);
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		RuntimeObject* L_1 = ___0_obj;
		RuntimeObject* L_2 = ___1_value;
		int32_t L_3 = ___2_invokeAttr;
		Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* L_4 = ___3_binder;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = ___4_culture;
		NullCheck(L_0);
		VirtualActionInvoker5< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(26 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo) */, L_0, L_1, L_2, L_3, L_4, L_5);
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
// System.Void OdinSerializer.Utilities.MemberAliasMethodInfo::.ctor(System.Reflection.MethodInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasMethodInfo__ctor_mE46CA02AC0A316FC848EAAF746060DA625CF1086 (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, MethodInfo_t* ___0_method, String_t* ___1_namePrefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MemberAliasMethodInfo(MethodInfo method, string namePrefix)
		MethodInfo__ctor_mFA9E34BB41CAC506D1CE042B8F5A90ACF1A9952B(__this, NULL);
		// this.aliasedMethod = method;
		MethodInfo_t* L_0 = ___0_method;
		__this->___aliasedMethod_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedMethod_1), (void*)L_0);
		// this.mangledName = string.Concat(namePrefix, FAKE_NAME_SEPARATOR_STRING, this.aliasedMethod.Name);
		String_t* L_1 = ___1_namePrefix;
		MethodInfo_t* L_2 = __this->___aliasedMethod_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_3, NULL);
		__this->___mangledName_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_4);
		// }
		return;
	}
}
// System.Void OdinSerializer.Utilities.MemberAliasMethodInfo::.ctor(System.Reflection.MethodInfo,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasMethodInfo__ctor_m71F6B151E64E8B7D3CE340E18DF40D751833659F (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, MethodInfo_t* ___0_method, String_t* ___1_namePrefix, String_t* ___2_separatorString, const RuntimeMethod* method) 
{
	{
		// public MemberAliasMethodInfo(MethodInfo method, string namePrefix, string separatorString)
		MethodInfo__ctor_mFA9E34BB41CAC506D1CE042B8F5A90ACF1A9952B(__this, NULL);
		// this.aliasedMethod = method;
		MethodInfo_t* L_0 = ___0_method;
		__this->___aliasedMethod_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedMethod_1), (void*)L_0);
		// this.mangledName = string.Concat(namePrefix, separatorString, this.aliasedMethod.Name);
		String_t* L_1 = ___1_namePrefix;
		String_t* L_2 = ___2_separatorString;
		MethodInfo_t* L_3 = __this->___aliasedMethod_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, L_2, L_4, NULL);
		__this->___mangledName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_5);
		// }
		return;
	}
}
// System.Reflection.MethodInfo OdinSerializer.Utilities.MemberAliasMethodInfo::get_AliasedMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasMethodInfo_get_AliasedMethod_mF5553D71AD0A7CA71AF97C5EC1AA9F11161AC3BD (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, const RuntimeMethod* method) 
{
	{
		// public MethodInfo AliasedMethod { get { return this.aliasedMethod; } }
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		return L_0;
	}
}
// System.Reflection.ICustomAttributeProvider OdinSerializer.Utilities.MemberAliasMethodInfo::get_ReturnTypeCustomAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberAliasMethodInfo_get_ReturnTypeCustomAttributes_m8AF1D7FF8EB0E624595DF6CA2C89A0747AF83647 (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, const RuntimeMethod* method) 
{
	{
		// public override ICustomAttributeProvider ReturnTypeCustomAttributes { get { return this.aliasedMethod.ReturnTypeCustomAttributes; } }
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Reflection.ICustomAttributeProvider System.Reflection.MethodInfo::get_ReturnTypeCustomAttributes() */, L_0);
		return L_1;
	}
}
// System.RuntimeMethodHandle OdinSerializer.Utilities.MemberAliasMethodInfo::get_MethodHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 MemberAliasMethodInfo_get_MethodHandle_m5D996A54FAC0FFC93538A5A792FBA9E20CFF2EDB (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, const RuntimeMethod* method) 
{
	{
		// public override RuntimeMethodHandle MethodHandle { get { return this.aliasedMethod.MethodHandle; } }
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1;
		L_1 = VirtualFuncInvoker0< RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 >::Invoke(31 /* System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle() */, L_0);
		return L_1;
	}
}
// System.Reflection.MethodAttributes OdinSerializer.Utilities.MemberAliasMethodInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasMethodInfo_get_Attributes_m682CFE297943C0C2A1F6655F8CD4BBD7955E16A9 (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, const RuntimeMethod* method) 
{
	{
		// public override MethodAttributes Attributes { get { return this.aliasedMethod.Attributes; } }
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, L_0);
		return L_1;
	}
}
// System.Type OdinSerializer.Utilities.MemberAliasMethodInfo::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasMethodInfo_get_ReturnType_mB41CDC292D9EE2BCF6D0E454A85BA73F0665A153 (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, const RuntimeMethod* method) 
{
	{
		// public override Type ReturnType { get { return this.aliasedMethod.ReturnType; } }
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(39 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_0);
		return L_1;
	}
}
// System.Type OdinSerializer.Utilities.MemberAliasMethodInfo::get_DeclaringType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasMethodInfo_get_DeclaringType_m832C64762C9D2E3BC499E3F6914D4D3249E7486D (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, const RuntimeMethod* method) 
{
	{
		// public override Type DeclaringType { get { return this.aliasedMethod.DeclaringType; } }
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		return L_1;
	}
}
// System.String OdinSerializer.Utilities.MemberAliasMethodInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberAliasMethodInfo_get_Name_mC6AB9858900024A938A55BA92C8A5725FE08AAB9 (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, const RuntimeMethod* method) 
{
	{
		// public override string Name { get { return this.mangledName; } }
		String_t* L_0 = __this->___mangledName_2;
		return L_0;
	}
}
// System.Type OdinSerializer.Utilities.MemberAliasMethodInfo::get_ReflectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasMethodInfo_get_ReflectedType_mDE3979565FC665685A7316F116FA7FB478687260 (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, const RuntimeMethod* method) 
{
	{
		// public override Type ReflectedType { get { return this.aliasedMethod.ReflectedType; } }
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_ReflectedType() */, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo OdinSerializer.Utilities.MemberAliasMethodInfo::GetBaseDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasMethodInfo_GetBaseDefinition_m46F2F4C5F7330717D4A74B2F3A4D7D9C63C747DB (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, const RuntimeMethod* method) 
{
	{
		// return this.aliasedMethod.GetBaseDefinition();
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(42 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_0);
		return L_1;
	}
}
// System.Object[] OdinSerializer.Utilities.MemberAliasMethodInfo::GetCustomAttributes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasMethodInfo_GetCustomAttributes_m41827FAB76FD695913B3F82AAAC12595A8A89C2E (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, bool ___0_inherit, const RuntimeMethod* method) 
{
	{
		// return this.aliasedMethod.GetCustomAttributes(inherit);
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		bool L_1 = ___0_inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] OdinSerializer.Utilities.MemberAliasMethodInfo::GetCustomAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasMethodInfo_GetCustomAttributes_m4D7842706949FAC3F71807DA9E97B35A1A7D24F3 (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, Type_t* ___0_attributeType, bool ___1_inherit, const RuntimeMethod* method) 
{
	{
		// return this.aliasedMethod.GetCustomAttributes(attributeType, inherit);
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		Type_t* L_1 = ___0_attributeType;
		bool L_2 = ___1_inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.MethodImplAttributes OdinSerializer.Utilities.MemberAliasMethodInfo::GetMethodImplementationFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasMethodInfo_GetMethodImplementationFlags_m31BFBDB8591D005E546021867612B1A2E0477263 (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, const RuntimeMethod* method) 
{
	{
		// return this.aliasedMethod.GetMethodImplementationFlags();
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Reflection.MethodImplAttributes System.Reflection.MethodBase::GetMethodImplementationFlags() */, L_0);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] OdinSerializer.Utilities.MemberAliasMethodInfo::GetParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* MemberAliasMethodInfo_GetParameters_m83ADBB95A4023CDC2FDD078F8C76FC10DB78FCFB (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, const RuntimeMethod* method) 
{
	{
		// return this.aliasedMethod.GetParameters();
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		return L_1;
	}
}
// System.Object OdinSerializer.Utilities.MemberAliasMethodInfo::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberAliasMethodInfo_Invoke_m7608216F5C9026BEBA81DC34E612C7788B092A3B (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, RuntimeObject* ___0_obj, int32_t ___1_invokeAttr, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___2_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___3_parameters, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___4_culture, const RuntimeMethod* method) 
{
	{
		// return this.aliasedMethod.Invoke(obj, invokeAttr, binder, parameters, culture);
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		RuntimeObject* L_1 = ___0_obj;
		int32_t L_2 = ___1_invokeAttr;
		Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* L_3 = ___2_binder;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___3_parameters;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = ___4_culture;
		NullCheck(L_0);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(30 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Boolean OdinSerializer.Utilities.MemberAliasMethodInfo::IsDefined(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasMethodInfo_IsDefined_m0A72E9C935D410D34AEE244EF88682C6E5041C5F (MemberAliasMethodInfo_t8A36733815A524E6A6B289C56FA9C61201227FA7* __this, Type_t* ___0_attributeType, bool ___1_inherit, const RuntimeMethod* method) 
{
	{
		// return this.aliasedMethod.IsDefined(attributeType, inherit);
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		Type_t* L_1 = ___0_attributeType;
		bool L_2 = ___1_inherit;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(11 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
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
// System.Void OdinSerializer.Utilities.MemberAliasPropertyInfo::.ctor(System.Reflection.PropertyInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasPropertyInfo__ctor_mB341B87C4266A537EB2B41C84EB6C2835D708FCB (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, PropertyInfo_t* ___0_prop, String_t* ___1_namePrefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MemberAliasPropertyInfo(PropertyInfo prop, string namePrefix)
		PropertyInfo__ctor_m09B380762225589F785BDF7D42E98D6695BE0138(__this, NULL);
		// this.aliasedProperty = prop;
		PropertyInfo_t* L_0 = ___0_prop;
		__this->___aliasedProperty_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedProperty_1), (void*)L_0);
		// this.mangledName = string.Concat(namePrefix, FakeNameSeparatorString, this.aliasedProperty.Name);
		String_t* L_1 = ___1_namePrefix;
		PropertyInfo_t* L_2 = __this->___aliasedProperty_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_3, NULL);
		__this->___mangledName_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_4);
		// }
		return;
	}
}
// System.Void OdinSerializer.Utilities.MemberAliasPropertyInfo::.ctor(System.Reflection.PropertyInfo,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasPropertyInfo__ctor_m503B08B1D17D06ADDEA99C08FF140DFEA0A7E087 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, PropertyInfo_t* ___0_prop, String_t* ___1_namePrefix, String_t* ___2_separatorString, const RuntimeMethod* method) 
{
	{
		// public MemberAliasPropertyInfo(PropertyInfo prop, string namePrefix, string separatorString)
		PropertyInfo__ctor_m09B380762225589F785BDF7D42E98D6695BE0138(__this, NULL);
		// this.aliasedProperty = prop;
		PropertyInfo_t* L_0 = ___0_prop;
		__this->___aliasedProperty_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedProperty_1), (void*)L_0);
		// this.mangledName = string.Concat(namePrefix, separatorString, this.aliasedProperty.Name);
		String_t* L_1 = ___1_namePrefix;
		String_t* L_2 = ___2_separatorString;
		PropertyInfo_t* L_3 = __this->___aliasedProperty_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, L_2, L_4, NULL);
		__this->___mangledName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_5);
		// }
		return;
	}
}
// System.Reflection.PropertyInfo OdinSerializer.Utilities.MemberAliasPropertyInfo::get_AliasedProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* MemberAliasPropertyInfo_get_AliasedProperty_mF0C2CC7BD71733ADD80BC092217054F99373705C (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, const RuntimeMethod* method) 
{
	{
		// public PropertyInfo AliasedProperty { get { return this.aliasedProperty; } }
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		return L_0;
	}
}
// System.Reflection.Module OdinSerializer.Utilities.MemberAliasPropertyInfo::get_Module()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* MemberAliasPropertyInfo_get_Module_mE0F3C7CB0DDF37479BBE58C6AEED7BB0273B68B3 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, const RuntimeMethod* method) 
{
	{
		// public override Module Module { get { return this.aliasedProperty.Module; } }
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* L_1;
		L_1 = VirtualFuncInvoker0< Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* >::Invoke(10 /* System.Reflection.Module System.Reflection.MemberInfo::get_Module() */, L_0);
		return L_1;
	}
}
// System.Int32 OdinSerializer.Utilities.MemberAliasPropertyInfo::get_MetadataToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasPropertyInfo_get_MetadataToken_m430B4193B4017962093C8F600900E3A17BDE66AF (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, const RuntimeMethod* method) 
{
	{
		// public override int MetadataToken { get { return this.aliasedProperty.MetadataToken; } }
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_0);
		return L_1;
	}
}
// System.String OdinSerializer.Utilities.MemberAliasPropertyInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberAliasPropertyInfo_get_Name_mB29901FD5A2E3437B46FE4D90C034D7AC64AF01B (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, const RuntimeMethod* method) 
{
	{
		// public override string Name { get { return this.mangledName; } }
		String_t* L_0 = __this->___mangledName_2;
		return L_0;
	}
}
// System.Type OdinSerializer.Utilities.MemberAliasPropertyInfo::get_DeclaringType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasPropertyInfo_get_DeclaringType_m401E2D6EF368DC32408CD75BB00BF0ABAF9E6697 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, const RuntimeMethod* method) 
{
	{
		// public override Type DeclaringType { get { return this.aliasedProperty.DeclaringType; } }
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		return L_1;
	}
}
// System.Type OdinSerializer.Utilities.MemberAliasPropertyInfo::get_ReflectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasPropertyInfo_get_ReflectedType_mD22FF9214FC80A98BEB8C1D5B4424435E70E9B68 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, const RuntimeMethod* method) 
{
	{
		// public override Type ReflectedType { get { return this.aliasedProperty.ReflectedType; } }
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_ReflectedType() */, L_0);
		return L_1;
	}
}
// System.Type OdinSerializer.Utilities.MemberAliasPropertyInfo::get_PropertyType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasPropertyInfo_get_PropertyType_m7D51501EAEEBC5BEF3B4BA65916F3509F1BD3E08 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, const RuntimeMethod* method) 
{
	{
		// public override Type PropertyType { get { return this.aliasedProperty.PropertyType; } }
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_0);
		return L_1;
	}
}
// System.Reflection.PropertyAttributes OdinSerializer.Utilities.MemberAliasPropertyInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasPropertyInfo_get_Attributes_m5F7EA16706902749FBEAFE307344991913E09171 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, const RuntimeMethod* method) 
{
	{
		// public override PropertyAttributes Attributes { get { return this.aliasedProperty.Attributes; } }
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Reflection.PropertyAttributes System.Reflection.PropertyInfo::get_Attributes() */, L_0);
		return L_1;
	}
}
// System.Boolean OdinSerializer.Utilities.MemberAliasPropertyInfo::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasPropertyInfo_get_CanRead_m66B137C09AC420B8500D8A1755B9DD46ED9ACC05 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, const RuntimeMethod* method) 
{
	{
		// public override bool CanRead { get { return this.aliasedProperty.CanRead; } }
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean OdinSerializer.Utilities.MemberAliasPropertyInfo::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasPropertyInfo_get_CanWrite_m7B572ECD2BC99714FDBE329C625D19406D5B390B (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, const RuntimeMethod* method) 
{
	{
		// public override bool CanWrite { get { return this.aliasedProperty.CanWrite; } }
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Object[] OdinSerializer.Utilities.MemberAliasPropertyInfo::GetCustomAttributes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasPropertyInfo_GetCustomAttributes_mDC683FA5256A4E43AD10C44E3A80C118F7A52EB8 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, bool ___0_inherit, const RuntimeMethod* method) 
{
	{
		// return this.aliasedProperty.GetCustomAttributes(inherit);
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		bool L_1 = ___0_inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] OdinSerializer.Utilities.MemberAliasPropertyInfo::GetCustomAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasPropertyInfo_GetCustomAttributes_m4D7205BC2F0BBED792DE36C7E2FCD69C8AEF6A96 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, Type_t* ___0_attributeType, bool ___1_inherit, const RuntimeMethod* method) 
{
	{
		// return this.aliasedProperty.GetCustomAttributes(attributeType, inherit);
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		Type_t* L_1 = ___0_attributeType;
		bool L_2 = ___1_inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean OdinSerializer.Utilities.MemberAliasPropertyInfo::IsDefined(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasPropertyInfo_IsDefined_m1667C948D3E68746D042EA993D9F30218BC7C8EB (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, Type_t* ___0_attributeType, bool ___1_inherit, const RuntimeMethod* method) 
{
	{
		// return this.aliasedProperty.IsDefined(attributeType, inherit);
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		Type_t* L_1 = ___0_attributeType;
		bool L_2 = ___1_inherit;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(11 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.MethodInfo[] OdinSerializer.Utilities.MemberAliasPropertyInfo::GetAccessors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* MemberAliasPropertyInfo_GetAccessors_mCEDD739F3D75D7B524F5A63B08240DE9C4467B35 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, bool ___0_nonPublic, const RuntimeMethod* method) 
{
	{
		// return this.aliasedProperty.GetAccessors(nonPublic);
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		bool L_1 = ___0_nonPublic;
		NullCheck(L_0);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_2;
		L_2 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, bool >::Invoke(20 /* System.Reflection.MethodInfo[] System.Reflection.PropertyInfo::GetAccessors(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.MethodInfo OdinSerializer.Utilities.MemberAliasPropertyInfo::GetGetMethod(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasPropertyInfo_GetGetMethod_m2130AAB8584F748500B3D476D6423D48A964BBF2 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, bool ___0_nonPublic, const RuntimeMethod* method) 
{
	{
		// return this.aliasedProperty.GetGetMethod(nonPublic);
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		bool L_1 = ___0_nonPublic;
		NullCheck(L_0);
		MethodInfo_t* L_2;
		L_2 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.ParameterInfo[] OdinSerializer.Utilities.MemberAliasPropertyInfo::GetIndexParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* MemberAliasPropertyInfo_GetIndexParameters_mC3F3B75206203B687EEA49B7D9E874CBFB63AA48 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, const RuntimeMethod* method) 
{
	{
		// return this.aliasedProperty.GetIndexParameters();
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo OdinSerializer.Utilities.MemberAliasPropertyInfo::GetSetMethod(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasPropertyInfo_GetSetMethod_m2F73304CA6BBFF510F8C1C35026593E6919793EF (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, bool ___0_nonPublic, const RuntimeMethod* method) 
{
	{
		// return this.aliasedProperty.GetSetMethod(nonPublic);
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		bool L_1 = ___0_nonPublic;
		NullCheck(L_0);
		MethodInfo_t* L_2;
		L_2 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(24 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object OdinSerializer.Utilities.MemberAliasPropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberAliasPropertyInfo_GetValue_m6485584217B2CFD2F6F5B11E81DD8E5CCC2D1EC6 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, RuntimeObject* ___0_obj, int32_t ___1_invokeAttr, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___2_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___3_index, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___4_culture, const RuntimeMethod* method) 
{
	{
		// return this.aliasedProperty.GetValue(obj, invokeAttr, binder, index, culture);
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		RuntimeObject* L_1 = ___0_obj;
		int32_t L_2 = ___1_invokeAttr;
		Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* L_3 = ___2_binder;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___3_index;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = ___4_culture;
		NullCheck(L_0);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(26 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Void OdinSerializer.Utilities.MemberAliasPropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasPropertyInfo_SetValue_mC27D457D85E6E902BA1C8AAB6558AF2E3466A629 (MemberAliasPropertyInfo_t0FD522B7FC92D5E9385739AC30D542EA54E35B42* __this, RuntimeObject* ___0_obj, RuntimeObject* ___1_value, int32_t ___2_invokeAttr, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___3_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___4_index, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___5_culture, const RuntimeMethod* method) 
{
	{
		// this.aliasedProperty.SetValue(obj, value, invokeAttr, binder, index, culture);
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		RuntimeObject* L_1 = ___0_obj;
		RuntimeObject* L_2 = ___1_value;
		int32_t L_3 = ___2_invokeAttr;
		Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* L_4 = ___3_binder;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___4_index;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6 = ___5_culture;
		NullCheck(L_0);
		VirtualActionInvoker6< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(28 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
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
// System.Void OdinSerializer.Utilities.UnityVersion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVersion__cctor_m80274A8E2A87D2D458D583813CBB4CE7B8F94ED8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FE371F4FD106F2E23AD17CE17DD19CBEAB4C201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A825010D5EA79C01DD8A61B9868ED1079027C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// string[] version = Application.unityVersion.Split('.');
		String_t* L_0;
		L_0 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)46), 0, NULL);
		V_0 = L_1;
		// if (version.Length < 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) >= ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("Could not parse current Unity version '" + Application.unityVersion + "'; not enough version elements.");
		String_t* L_3;
		L_3 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral6A825010D5EA79C01DD8A61B9868ED1079027C59, L_3, _stringLiteral1FE371F4FD106F2E23AD17CE17DD19CBEAB4C201, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		// return;
		return;
	}

IL_002e:
	{
		// if (int.TryParse(version[0], out Major) == false)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_7, (&((UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_il2cpp_TypeInfo_var))->___Major_0), NULL);
		if (L_8)
		{
			goto IL_0073;
		}
	}
	{
		// Debug.LogError("Could not parse major part '" + version[0] + "' of Unity version '" + Application.unityVersion + "'.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 0;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		String_t* L_17;
		L_17 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_16;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_19, NULL);
	}

IL_0073:
	{
		// if (int.TryParse(version[1], out Minor) == false)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_22, (&((UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_il2cpp_TypeInfo_var))->___Minor_1), NULL);
		if (L_23)
		{
			goto IL_00b8;
		}
	}
	{
		// Debug.LogError("Could not parse minor part '" + version[1] + "' of Unity version '" + Application.unityVersion + "'.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 1;
		String_t* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_26;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		String_t* L_32;
		L_32 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_31;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		String_t* L_34;
		L_34 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_34, NULL);
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void OdinSerializer.Utilities.UnityVersion::EnsureLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVersion_EnsureLoaded_m0BEC13F61F7E374DBB8DD5A9924F744D5A1B0F72 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean OdinSerializer.Utilities.UnityVersion::IsVersionOrGreater(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVersion_IsVersionOrGreater_m0FDA374E4420A0ACB2B05AF50A7AEEC05BCFF530 (int32_t ___0_major, int32_t ___1_minor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnityVersion.Major > major || (UnityVersion.Major == major && UnityVersion.Minor >= minor);
		il2cpp_codegen_runtime_class_init_inline(UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_il2cpp_TypeInfo_var))->___Major_0;
		int32_t L_1 = ___0_major;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_il2cpp_TypeInfo_var);
		int32_t L_2 = ((UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_il2cpp_TypeInfo_var))->___Major_0;
		int32_t L_3 = ___0_major;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_il2cpp_TypeInfo_var);
		int32_t L_4 = ((UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_tD8EADE6517F11FE6E29A618794E2026F19C01CFE_il2cpp_TypeInfo_var))->___Minor_1;
		int32_t L_5 = ___1_minor;
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		return (bool)1;
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
// System.String OdinSerializer.Utilities.Unsafe.UnsafeUtilities::StringFromBytes(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeUtilities_StringFromBytes_m8B7372B9201374C7F41348B359EA9FAF73258621 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_charLength, bool ___2_needs16BitSupport, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	uint16_t* V_5 = NULL;
	uint16_t* V_6 = NULL;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Il2CppChar* V_9 = NULL;
	uint8_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	int32_t V_12 = 0;
	Il2CppChar* V_13 = NULL;
	uint8_t* V_14 = NULL;
	uint8_t* V_15 = NULL;
	int32_t V_16 = 0;
	Il2CppChar* V_17 = NULL;
	uint8_t* V_18 = NULL;
	uint8_t* V_19 = NULL;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	{
		// int byteCount = needs16BitSupport ? charLength * 2 : charLength;
		bool L_0 = ___2_needs16BitSupport;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_1 = ___1_charLength;
		G_B3_0 = L_1;
		goto IL_0009;
	}

IL_0006:
	{
		int32_t L_2 = ___1_charLength;
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(L_2, 2));
	}

IL_0009:
	{
		V_0 = G_B3_0;
		// if (buffer.Length < byteCount)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		NullCheck(L_3);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) >= ((int32_t)L_4)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new ArgumentException("Buffer is not large enough to contain the given string; a size of at least " + byteCount + " is required.");
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FBEE35345E8D388C523672DCD1D97721575F12E)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87064437EF311884667DAB55AAFBBAC160D0E41D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsafeUtilities_StringFromBytes_m8B7372B9201374C7F41348B359EA9FAF73258621_RuntimeMethod_var)));
	}

IL_002c:
	{
		// GCHandle toHandle = default(GCHandle);
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		// string result = new string(' ', charLength); // Creaty empty string of required length
		int32_t L_8 = ___1_charLength;
		String_t* L_9;
		L_9 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((int32_t)32), L_8, NULL);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01bc:
			{// begin finally (depth: 1)
				{
					// if (toHandle.IsAllocated)
					bool L_10;
					L_10 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_1), NULL);
					if (!L_10)
					{
						goto IL_01cc;
					}
				}
				{
					// toHandle.Free();
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
				}

IL_01cc:
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// toHandle = GCHandle.Alloc(buffer, GCHandleType.Pinned);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_buffer;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_12;
				L_12 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_11, 3, NULL);
				V_1 = L_12;
				// if (needs16BitSupport)
				bool L_13 = ___2_needs16BitSupport;
				if (!L_13)
				{
					goto IL_0104_1;
				}
			}
			{
				// if (BitConverter.IsLittleEndian)
				il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
				bool L_14 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
				if (!L_14)
				{
					goto IL_00a2_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009e_1:
					{// begin finally (depth: 2)
						V_4 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// {
						String_t* L_15 = V_2;
						V_4 = L_15;
						// fixed (char* charPtr1 = result)
						String_t* L_16 = V_4;
						V_3 = (Il2CppChar*)((uintptr_t)L_16);
						Il2CppChar* L_17 = V_3;
						if (!L_17)
						{
							goto IL_0064_2;
						}
					}
					{
						Il2CppChar* L_18 = V_3;
						int32_t L_19;
						L_19 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_3 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_18, L_19));
					}

IL_0064_2:
					{
						// ushort* fromPtr1 = (ushort*)toHandle.AddrOfPinnedObject().ToPointer();
						intptr_t L_20;
						L_20 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_7 = L_20;
						void* L_21;
						L_21 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_7), NULL);
						V_5 = (uint16_t*)L_21;
						// ushort* toPtr1 = (ushort*)charPtr1;
						Il2CppChar* L_22 = V_3;
						V_6 = (uint16_t*)L_22;
						// for (int i = 0; i < byteCount; i += sizeof(ushort))
						V_8 = 0;
						goto IL_0094_2;
					}

IL_007e_2:
					{
						// *toPtr1++ = *fromPtr1++;
						uint16_t* L_23 = V_6;
						uint16_t* L_24 = L_23;
						V_6 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_24, 2));
						uint16_t* L_25 = V_5;
						uint16_t* L_26 = L_25;
						V_5 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_26, 2));
						int32_t L_27 = *((uint16_t*)L_26);
						*((int16_t*)L_24) = (int16_t)L_27;
						// for (int i = 0; i < byteCount; i += sizeof(ushort))
						int32_t L_28 = V_8;
						V_8 = ((int32_t)il2cpp_codegen_add(L_28, 2));
					}

IL_0094_2:
					{
						// for (int i = 0; i < byteCount; i += sizeof(ushort))
						int32_t L_29 = V_8;
						int32_t L_30 = V_0;
						if ((((int32_t)L_29) < ((int32_t)L_30)))
						{
							goto IL_007e_2;
						}
					}
					{
						goto IL_01cd;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a2_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0100_1:
					{// begin finally (depth: 2)
						V_4 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_31 = V_2;
						V_4 = L_31;
						// fixed (char* charPtr2 = result)
						String_t* L_32 = V_4;
						V_9 = (Il2CppChar*)((uintptr_t)L_32);
						Il2CppChar* L_33 = V_9;
						if (!L_33)
						{
							goto IL_00b9_2;
						}
					}
					{
						Il2CppChar* L_34 = V_9;
						int32_t L_35;
						L_35 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_9 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, L_35));
					}

IL_00b9_2:
					{
						// byte* fromPtr2 = (byte*)toHandle.AddrOfPinnedObject().ToPointer();
						intptr_t L_36;
						L_36 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_7 = L_36;
						void* L_37;
						L_37 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_7), NULL);
						V_10 = (uint8_t*)L_37;
						// byte* toPtr2 = (byte*)charPtr2;
						Il2CppChar* L_38 = V_9;
						V_11 = (uint8_t*)L_38;
						// for (int i = 0; i < byteCount; i += sizeof(ushort))
						V_12 = 0;
						goto IL_00f6_2;
					}

IL_00d4_2:
					{
						// *toPtr2 = *(fromPtr2 + 1);
						uint8_t* L_39 = V_11;
						uint8_t* L_40 = V_10;
						int32_t L_41 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, 1)));
						*((int8_t*)L_39) = (int8_t)L_41;
						// *(toPtr2 + 1) = *fromPtr2;
						uint8_t* L_42 = V_11;
						uint8_t* L_43 = V_10;
						int32_t L_44 = *((uint8_t*)L_43);
						*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_42, 1))) = (int8_t)L_44;
						// fromPtr2 += 2;
						uint8_t* L_45 = V_10;
						V_10 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_45, 2));
						// toPtr2 += 2;
						uint8_t* L_46 = V_11;
						V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, 2));
						// for (int i = 0; i < byteCount; i += sizeof(ushort))
						int32_t L_47 = V_12;
						V_12 = ((int32_t)il2cpp_codegen_add(L_47, 2));
					}

IL_00f6_2:
					{
						// for (int i = 0; i < byteCount; i += sizeof(ushort))
						int32_t L_48 = V_12;
						int32_t L_49 = V_0;
						if ((((int32_t)L_48) < ((int32_t)L_49)))
						{
							goto IL_00d4_2;
						}
					}
					{
						goto IL_01cd;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0104_1:
			{
				// if (BitConverter.IsLittleEndian)
				il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
				bool L_50 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
				if (!L_50)
				{
					goto IL_0163_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_015f_1:
					{// begin finally (depth: 2)
						V_4 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// {
						String_t* L_51 = V_2;
						V_4 = L_51;
						// fixed (char* charPtr3 = result)
						String_t* L_52 = V_4;
						V_13 = (Il2CppChar*)((uintptr_t)L_52);
						Il2CppChar* L_53 = V_13;
						if (!L_53)
						{
							goto IL_0121_2;
						}
					}
					{
						Il2CppChar* L_54 = V_13;
						int32_t L_55;
						L_55 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_13 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_54, L_55));
					}

IL_0121_2:
					{
						// byte* fromPtr3 = (byte*)toHandle.AddrOfPinnedObject().ToPointer();
						intptr_t L_56;
						L_56 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_7 = L_56;
						void* L_57;
						L_57 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_7), NULL);
						V_14 = (uint8_t*)L_57;
						// byte* toPtr3 = (byte*)charPtr3;
						Il2CppChar* L_58 = V_13;
						V_15 = (uint8_t*)L_58;
						// for (int i = 0; i < byteCount; i += sizeof(byte))
						V_16 = 0;
						goto IL_0158_2;
					}

IL_013c_2:
					{
						// *toPtr3++ = *fromPtr3++;
						uint8_t* L_59 = V_15;
						uint8_t* L_60 = L_59;
						V_15 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, 1));
						uint8_t* L_61 = V_14;
						uint8_t* L_62 = L_61;
						V_14 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_62, 1));
						int32_t L_63 = *((uint8_t*)L_62);
						*((int8_t*)L_60) = (int8_t)L_63;
						// toPtr3++; // Skip every other string byte
						uint8_t* L_64 = V_15;
						V_15 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_64, 1));
						// for (int i = 0; i < byteCount; i += sizeof(byte))
						int32_t L_65 = V_16;
						V_16 = ((int32_t)il2cpp_codegen_add(L_65, 1));
					}

IL_0158_2:
					{
						// for (int i = 0; i < byteCount; i += sizeof(byte))
						int32_t L_66 = V_16;
						int32_t L_67 = V_0;
						if ((((int32_t)L_66) < ((int32_t)L_67)))
						{
							goto IL_013c_2;
						}
					}
					{
						goto IL_01cd;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0163_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01b8_1:
					{// begin finally (depth: 2)
						V_4 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_68 = V_2;
						V_4 = L_68;
						// fixed (char* charPtr4 = result)
						String_t* L_69 = V_4;
						V_17 = (Il2CppChar*)((uintptr_t)L_69);
						Il2CppChar* L_70 = V_17;
						if (!L_70)
						{
							goto IL_017a_2;
						}
					}
					{
						Il2CppChar* L_71 = V_17;
						int32_t L_72;
						L_72 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_17 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_71, L_72));
					}

IL_017a_2:
					{
						// byte* fromPtr4 = (byte*)toHandle.AddrOfPinnedObject().ToPointer();
						intptr_t L_73;
						L_73 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_7 = L_73;
						void* L_74;
						L_74 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_7), NULL);
						V_18 = (uint8_t*)L_74;
						// byte* toPtr4 = (byte*)charPtr4;
						Il2CppChar* L_75 = V_17;
						V_19 = (uint8_t*)L_75;
						// for (int i = 0; i < byteCount; i += sizeof(byte))
						V_20 = 0;
						goto IL_01b1_2;
					}

IL_0195_2:
					{
						// toPtr4++; // Skip every other string byte
						uint8_t* L_76 = V_19;
						V_19 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_76, 1));
						// *toPtr4++ = *fromPtr4++;
						uint8_t* L_77 = V_19;
						uint8_t* L_78 = L_77;
						V_19 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_78, 1));
						uint8_t* L_79 = V_18;
						uint8_t* L_80 = L_79;
						V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_80, 1));
						int32_t L_81 = *((uint8_t*)L_80);
						*((int8_t*)L_78) = (int8_t)L_81;
						// for (int i = 0; i < byteCount; i += sizeof(byte))
						int32_t L_82 = V_20;
						V_20 = ((int32_t)il2cpp_codegen_add(L_82, 1));
					}

IL_01b1_2:
					{
						// for (int i = 0; i < byteCount; i += sizeof(byte))
						int32_t L_83 = V_20;
						int32_t L_84 = V_0;
						if ((((int32_t)L_83) < ((int32_t)L_84)))
						{
							goto IL_0195_2;
						}
					}
					{
						goto IL_01cd;
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
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01cd:
	{
		// return result;
		String_t* L_85 = V_2;
		return L_85;
	}
}
// System.Int32 OdinSerializer.Utilities.Unsafe.UnsafeUtilities::StringToBytes(System.Byte[],System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilities_StringToBytes_m9BBC29BF548AFAEE067006208C7C2F3F77333960 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, String_t* ___1_value, bool ___2_needs16BitSupport, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	uint16_t* V_4 = NULL;
	uint16_t* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Il2CppChar* V_8 = NULL;
	uint8_t* V_9 = NULL;
	uint8_t* V_10 = NULL;
	int32_t V_11 = 0;
	Il2CppChar* V_12 = NULL;
	uint8_t* V_13 = NULL;
	uint8_t* V_14 = NULL;
	int32_t V_15 = 0;
	Il2CppChar* V_16 = NULL;
	uint8_t* V_17 = NULL;
	uint8_t* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t G_B3_0 = 0;
	{
		// int byteCount = needs16BitSupport ? value.Length * 2 : value.Length;
		bool L_0 = ___2_needs16BitSupport;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___1_value;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0013;
	}

IL_000b:
	{
		String_t* L_3 = ___1_value;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(L_4, 2));
	}

IL_0013:
	{
		V_0 = G_B3_0;
		// if (buffer.Length < byteCount)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_buffer;
		NullCheck(L_5);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		// throw new ArgumentException("Buffer is not large enough to contain the given string; a size of at least " + byteCount + " is required.");
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FBEE35345E8D388C523672DCD1D97721575F12E)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87064437EF311884667DAB55AAFBBAC160D0E41D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsafeUtilities_StringToBytes_m9BBC29BF548AFAEE067006208C7C2F3F77333960_RuntimeMethod_var)));
	}

IL_0036:
	{
		// GCHandle toHandle = default(GCHandle);
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01b1:
			{// begin finally (depth: 1)
				{
					// if (toHandle.IsAllocated)
					bool L_10;
					L_10 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_1), NULL);
					if (!L_10)
					{
						goto IL_01c1;
					}
				}
				{
					// toHandle.Free();
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
				}

IL_01c1:
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// toHandle = GCHandle.Alloc(buffer, GCHandleType.Pinned);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_buffer;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_12;
				L_12 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_11, 3, NULL);
				V_1 = L_12;
				// if (needs16BitSupport)
				bool L_13 = ___2_needs16BitSupport;
				if (!L_13)
				{
					goto IL_00ff_1;
				}
			}
			{
				// if (BitConverter.IsLittleEndian)
				il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
				bool L_14 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
				if (!L_14)
				{
					goto IL_00a0_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009d_1:
					{// begin finally (depth: 2)
						V_3 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// {
						String_t* L_15 = ___1_value;
						V_3 = L_15;
						// fixed (char* charPtr1 = value)
						String_t* L_16 = V_3;
						V_2 = (Il2CppChar*)((uintptr_t)L_16);
						Il2CppChar* L_17 = V_2;
						if (!L_17)
						{
							goto IL_0063_2;
						}
					}
					{
						Il2CppChar* L_18 = V_2;
						int32_t L_19;
						L_19 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_18, L_19));
					}

IL_0063_2:
					{
						// ushort* fromPtr1 = (ushort*)charPtr1;
						Il2CppChar* L_20 = V_2;
						V_4 = (uint16_t*)L_20;
						// ushort* toPtr1 = (ushort*)toHandle.AddrOfPinnedObject().ToPointer();
						intptr_t L_21;
						L_21 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_6 = L_21;
						void* L_22;
						L_22 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_6), NULL);
						V_5 = (uint16_t*)L_22;
						// for (int i = 0; i < byteCount; i += sizeof(ushort))
						V_7 = 0;
						goto IL_0093_2;
					}

IL_007d_2:
					{
						// *toPtr1++ = *fromPtr1++;
						uint16_t* L_23 = V_5;
						uint16_t* L_24 = L_23;
						V_5 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_24, 2));
						uint16_t* L_25 = V_4;
						uint16_t* L_26 = L_25;
						V_4 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_26, 2));
						int32_t L_27 = *((uint16_t*)L_26);
						*((int16_t*)L_24) = (int16_t)L_27;
						// for (int i = 0; i < byteCount; i += sizeof(ushort))
						int32_t L_28 = V_7;
						V_7 = ((int32_t)il2cpp_codegen_add(L_28, 2));
					}

IL_0093_2:
					{
						// for (int i = 0; i < byteCount; i += sizeof(ushort))
						int32_t L_29 = V_7;
						int32_t L_30 = V_0;
						if ((((int32_t)L_29) < ((int32_t)L_30)))
						{
							goto IL_007d_2;
						}
					}
					{
						goto IL_01c2;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a0_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00fc_1:
					{// begin finally (depth: 2)
						V_3 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_31 = ___1_value;
						V_3 = L_31;
						// fixed (char* charPtr2 = value)
						String_t* L_32 = V_3;
						V_8 = (Il2CppChar*)((uintptr_t)L_32);
						Il2CppChar* L_33 = V_8;
						if (!L_33)
						{
							goto IL_00b5_2;
						}
					}
					{
						Il2CppChar* L_34 = V_8;
						int32_t L_35;
						L_35 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_8 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, L_35));
					}

IL_00b5_2:
					{
						// byte* fromPtr2 = (byte*)charPtr2;
						Il2CppChar* L_36 = V_8;
						V_9 = (uint8_t*)L_36;
						// byte* toPtr2 = (byte*)toHandle.AddrOfPinnedObject().ToPointer();
						intptr_t L_37;
						L_37 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_6 = L_37;
						void* L_38;
						L_38 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_6), NULL);
						V_10 = (uint8_t*)L_38;
						// for (int i = 0; i < byteCount; i += sizeof(ushort))
						V_11 = 0;
						goto IL_00f2_2;
					}

IL_00d0_2:
					{
						// *toPtr2 = *(fromPtr2 + 1);
						uint8_t* L_39 = V_10;
						uint8_t* L_40 = V_9;
						int32_t L_41 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, 1)));
						*((int8_t*)L_39) = (int8_t)L_41;
						// *(toPtr2 + 1) = *fromPtr2;
						uint8_t* L_42 = V_10;
						uint8_t* L_43 = V_9;
						int32_t L_44 = *((uint8_t*)L_43);
						*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_42, 1))) = (int8_t)L_44;
						// fromPtr2 += 2;
						uint8_t* L_45 = V_9;
						V_9 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_45, 2));
						// toPtr2 += 2;
						uint8_t* L_46 = V_10;
						V_10 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, 2));
						// for (int i = 0; i < byteCount; i += sizeof(ushort))
						int32_t L_47 = V_11;
						V_11 = ((int32_t)il2cpp_codegen_add(L_47, 2));
					}

IL_00f2_2:
					{
						// for (int i = 0; i < byteCount; i += sizeof(ushort))
						int32_t L_48 = V_11;
						int32_t L_49 = V_0;
						if ((((int32_t)L_48) < ((int32_t)L_49)))
						{
							goto IL_00d0_2;
						}
					}
					{
						goto IL_01c2;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00ff_1:
			{
				// if (BitConverter.IsLittleEndian)
				il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
				bool L_50 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
				if (!L_50)
				{
					goto IL_015b_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0158_1:
					{// begin finally (depth: 2)
						V_3 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// {
						String_t* L_51 = ___1_value;
						V_3 = L_51;
						// fixed (char* charPtr3 = value)
						String_t* L_52 = V_3;
						V_12 = (Il2CppChar*)((uintptr_t)L_52);
						Il2CppChar* L_53 = V_12;
						if (!L_53)
						{
							goto IL_011a_2;
						}
					}
					{
						Il2CppChar* L_54 = V_12;
						int32_t L_55;
						L_55 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_12 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_54, L_55));
					}

IL_011a_2:
					{
						// byte* fromPtr3 = (byte*)charPtr3;
						Il2CppChar* L_56 = V_12;
						V_13 = (uint8_t*)L_56;
						// byte* toPtr3 = (byte*)toHandle.AddrOfPinnedObject().ToPointer();
						intptr_t L_57;
						L_57 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_6 = L_57;
						void* L_58;
						L_58 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_6), NULL);
						V_14 = (uint8_t*)L_58;
						// for (int i = 0; i < byteCount; i += sizeof(byte))
						V_15 = 0;
						goto IL_0151_2;
					}

IL_0135_2:
					{
						// fromPtr3++; // Skip every other string byte
						uint8_t* L_59 = V_13;
						V_13 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_59, 1));
						// *toPtr3++ = *fromPtr3++;
						uint8_t* L_60 = V_14;
						uint8_t* L_61 = L_60;
						V_14 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, 1));
						uint8_t* L_62 = V_13;
						uint8_t* L_63 = L_62;
						V_13 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_63, 1));
						int32_t L_64 = *((uint8_t*)L_63);
						*((int8_t*)L_61) = (int8_t)L_64;
						// for (int i = 0; i < byteCount; i += sizeof(byte))
						int32_t L_65 = V_15;
						V_15 = ((int32_t)il2cpp_codegen_add(L_65, 1));
					}

IL_0151_2:
					{
						// for (int i = 0; i < byteCount; i += sizeof(byte))
						int32_t L_66 = V_15;
						int32_t L_67 = V_0;
						if ((((int32_t)L_66) < ((int32_t)L_67)))
						{
							goto IL_0135_2;
						}
					}
					{
						goto IL_01c2;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_015b_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01ae_1:
					{// begin finally (depth: 2)
						V_3 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_68 = ___1_value;
						V_3 = L_68;
						// fixed (char* charPtr4 = value)
						String_t* L_69 = V_3;
						V_16 = (Il2CppChar*)((uintptr_t)L_69);
						Il2CppChar* L_70 = V_16;
						if (!L_70)
						{
							goto IL_0170_2;
						}
					}
					{
						Il2CppChar* L_71 = V_16;
						int32_t L_72;
						L_72 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_16 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_71, L_72));
					}

IL_0170_2:
					{
						// byte* fromPtr4 = (byte*)charPtr4;
						Il2CppChar* L_73 = V_16;
						V_17 = (uint8_t*)L_73;
						// byte* toPtr4 = (byte*)toHandle.AddrOfPinnedObject().ToPointer();
						intptr_t L_74;
						L_74 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_6 = L_74;
						void* L_75;
						L_75 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_6), NULL);
						V_18 = (uint8_t*)L_75;
						// for (int i = 0; i < byteCount; i += sizeof(byte))
						V_19 = 0;
						goto IL_01a7_2;
					}

IL_018b_2:
					{
						// *toPtr4++ = *fromPtr4++;
						uint8_t* L_76 = V_18;
						uint8_t* L_77 = L_76;
						V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_77, 1));
						uint8_t* L_78 = V_17;
						uint8_t* L_79 = L_78;
						V_17 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_79, 1));
						int32_t L_80 = *((uint8_t*)L_79);
						*((int8_t*)L_77) = (int8_t)L_80;
						// fromPtr4++; // Skip every other string byte
						uint8_t* L_81 = V_17;
						V_17 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_81, 1));
						// for (int i = 0; i < byteCount; i += sizeof(byte))
						int32_t L_82 = V_19;
						V_19 = ((int32_t)il2cpp_codegen_add(L_82, 1));
					}

IL_01a7_2:
					{
						// for (int i = 0; i < byteCount; i += sizeof(byte))
						int32_t L_83 = V_19;
						int32_t L_84 = V_0;
						if ((((int32_t)L_83) < ((int32_t)L_84)))
						{
							goto IL_018b_2;
						}
					}
					{
						goto IL_01c2;
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
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01c2:
	{
		// return byteCount;
		int32_t L_85 = V_0;
		return L_85;
	}
}
// System.Void OdinSerializer.Utilities.Unsafe.UnsafeUtilities::MemoryCopy(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilities_MemoryCopy_m8C6B768CAA1FC3995FA091D085E89AFF124DC4EC (void* ___0_from, void* ___1_to, int32_t ___2_bytes, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9* V_1 = NULL;
	Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	{
		// byte* end = (byte*)to + bytes;
		void* L_0 = ___1_to;
		int32_t L_1 = ___2_bytes;
		V_0 = (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_1));
		// Struct256Bit* fromBigPtr = (Struct256Bit*)from;
		void* L_2 = ___0_from;
		V_1 = (Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9*)L_2;
		// Struct256Bit* toBigPtr = (Struct256Bit*)to;
		void* L_3 = ___1_to;
		V_2 = (Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9*)L_3;
		goto IL_0028;
	}

IL_000a:
	{
		// *toBigPtr++ = *fromBigPtr++;
		Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9* L_4 = V_2;
		Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9* L_5 = L_4;
		uint32_t L_6 = sizeof(Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9);
		V_2 = ((Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9*)il2cpp_codegen_add((intptr_t)L_5, (int32_t)L_6));
		Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9* L_7 = V_1;
		Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9* L_8 = L_7;
		uint32_t L_9 = sizeof(Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9);
		V_1 = ((Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9*)il2cpp_codegen_add((intptr_t)L_8, (int32_t)L_9));
		Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9 L_10 = (*(Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9*)L_8);
		*(Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9*)L_5 = L_10;
	}

IL_0028:
	{
		// while ((toBigPtr + 1) <= end)
		Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9* L_11 = V_2;
		uint32_t L_12 = sizeof(Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9);
		uint8_t* L_13 = V_0;
		if ((!(((uintptr_t)((Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9*)il2cpp_codegen_add((intptr_t)L_11, (int32_t)L_12))) > ((uintptr_t)L_13))))
		{
			goto IL_000a;
		}
	}
	{
		// byte* fromSmallPtr = (byte*)fromBigPtr;
		Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9* L_14 = V_1;
		V_3 = (uint8_t*)L_14;
		// byte* toSmallPtr = (byte*)toBigPtr;
		Struct256Bit_t14CD12BCA860DA30635DA201CF84F9B027FA65B9* L_15 = V_2;
		V_4 = (uint8_t*)L_15;
		goto IL_0048;
	}

IL_003a:
	{
		// *toSmallPtr++ = *fromSmallPtr++;
		uint8_t* L_16 = V_4;
		uint8_t* L_17 = L_16;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, 1));
		uint8_t* L_18 = V_3;
		uint8_t* L_19 = L_18;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, 1));
		int32_t L_20 = *((uint8_t*)L_19);
		*((int8_t*)L_17) = (int8_t)L_20;
	}

IL_0048:
	{
		// while (toSmallPtr < end)
		uint8_t* L_21 = V_4;
		uint8_t* L_22 = V_0;
		if ((!(((uintptr_t)L_21) >= ((uintptr_t)L_22))))
		{
			goto IL_003a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OdinSerializer.Utilities.Unsafe.UnsafeUtilities::MemoryCopy(System.Object,System.Object,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilities_MemoryCopy_m5B12F87DA8AF40FDA5151FA244A28570FF4D69BC (RuntimeObject* ___0_from, RuntimeObject* ___1_to, int32_t ___2_byteCount, int32_t ___3_fromByteOffset, int32_t ___4_toByteOffset, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint64_t* V_7 = NULL;
	uint64_t* V_8 = NULL;
	intptr_t V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	uint8_t* V_11 = NULL;
	uint8_t* V_12 = NULL;
	int32_t V_13 = 0;
	{
		// GCHandle fromHandle = default(GCHandle);
		il2cpp_codegen_initobj((&V_0), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		// GCHandle toHandle = default(GCHandle);
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		// if (fromByteOffset % sizeof(ulong) != 0 || toByteOffset % sizeof(ulong) != 0)
		int32_t L_0 = ___3_fromByteOffset;
		if (((int32_t)(L_0%8)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___4_toByteOffset;
		if (!((int32_t)(L_1%8)))
		{
			goto IL_0039;
		}
	}

IL_001b:
	{
		// throw new ArgumentException("Byte offset must be divisible by " + sizeof(ulong) + " (IE, sizeof(ulong))");
		V_2 = 8;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45E91B775C05667BB0C4313D3AF0298D560E3F90)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3F530C05EDCBF7716458575421F02CF2C179352F)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsafeUtilities_MemoryCopy_m5B12F87DA8AF40FDA5151FA244A28570FF4D69BC_RuntimeMethod_var)));
	}

IL_0039:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f1:
			{// begin finally (depth: 1)
				{
					// if (fromHandle.IsAllocated)
					bool L_5;
					L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_0), NULL);
					if (!L_5)
					{
						goto IL_0101;
					}
				}
				{
					// fromHandle.Free();
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
				}

IL_0101:
				{
					// if (toHandle.IsAllocated)
					bool L_6;
					L_6 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_1), NULL);
					if (!L_6)
					{
						goto IL_0111;
					}
				}
				{
					// toHandle.Free();
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
				}

IL_0111:
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// int restBytes = byteCount % sizeof(ulong);
				int32_t L_7 = ___2_byteCount;
				V_3 = ((int32_t)(L_7%8));
				// int ulongCount = (byteCount - restBytes) / sizeof(ulong);
				int32_t L_8 = ___2_byteCount;
				int32_t L_9 = V_3;
				V_4 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_8, L_9))/8));
				// int fromOffsetCount = fromByteOffset / sizeof(ulong);
				int32_t L_10 = ___3_fromByteOffset;
				V_5 = ((int32_t)(L_10/8));
				// int toOffsetCount = toByteOffset / sizeof(ulong);
				int32_t L_11 = ___4_toByteOffset;
				V_6 = ((int32_t)(L_11/8));
				// fromHandle = GCHandle.Alloc(from, GCHandleType.Pinned);
				RuntimeObject* L_12 = ___0_from;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_13;
				L_13 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_12, 3, NULL);
				V_0 = L_13;
				// toHandle = GCHandle.Alloc(to, GCHandleType.Pinned);
				RuntimeObject* L_14 = ___1_to;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_15;
				L_15 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_14, 3, NULL);
				V_1 = L_15;
				// ulong* fromUlongPtr = (ulong*)fromHandle.AddrOfPinnedObject().ToPointer();
				intptr_t L_16;
				L_16 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_0), NULL);
				V_9 = L_16;
				void* L_17;
				L_17 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_9), NULL);
				V_7 = (uint64_t*)L_17;
				// ulong* toUlongPtr = (ulong*)toHandle.AddrOfPinnedObject().ToPointer();
				intptr_t L_18;
				L_18 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
				V_9 = L_18;
				void* L_19;
				L_19 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_9), NULL);
				V_8 = (uint64_t*)L_19;
				// if (fromOffsetCount > 0)
				int32_t L_20 = V_5;
				if ((((int32_t)L_20) <= ((int32_t)0)))
				{
					goto IL_0093_1;
				}
			}
			{
				// fromUlongPtr += fromOffsetCount;
				uint64_t* L_21 = V_7;
				int32_t L_22 = V_5;
				V_7 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 8))));
			}

IL_0093_1:
			{
				// if (toOffsetCount > 0)
				int32_t L_23 = V_6;
				if ((((int32_t)L_23) <= ((int32_t)0)))
				{
					goto IL_00a2_1;
				}
			}
			{
				// toUlongPtr += toOffsetCount;
				uint64_t* L_24 = V_8;
				int32_t L_25 = V_6;
				V_8 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 8))));
			}

IL_00a2_1:
			{
				// for (int i = 0; i < ulongCount; i++)
				V_10 = 0;
				goto IL_00bd_1;
			}

IL_00a7_1:
			{
				// *toUlongPtr++ = *fromUlongPtr++;
				uint64_t* L_26 = V_8;
				uint64_t* L_27 = L_26;
				V_8 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_27, 8));
				uint64_t* L_28 = V_7;
				uint64_t* L_29 = L_28;
				V_7 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_29, 8));
				int64_t L_30 = *((int64_t*)L_29);
				*((int64_t*)L_27) = (int64_t)L_30;
				// for (int i = 0; i < ulongCount; i++)
				int32_t L_31 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_31, 1));
			}

IL_00bd_1:
			{
				// for (int i = 0; i < ulongCount; i++)
				int32_t L_32 = V_10;
				int32_t L_33 = V_4;
				if ((((int32_t)L_32) < ((int32_t)L_33)))
				{
					goto IL_00a7_1;
				}
			}
			{
				// if (restBytes > 0)
				int32_t L_34 = V_3;
				if ((((int32_t)L_34) <= ((int32_t)0)))
				{
					goto IL_00ef_1;
				}
			}
			{
				// byte* fromBytePtr = (byte*)fromUlongPtr;
				uint64_t* L_35 = V_7;
				V_11 = (uint8_t*)L_35;
				// byte* toBytePtr = (byte*)toUlongPtr;
				uint64_t* L_36 = V_8;
				V_12 = (uint8_t*)L_36;
				// for (int i = 0; i < restBytes; i++)
				V_13 = 0;
				goto IL_00ea_1;
			}

IL_00d4_1:
			{
				// *toBytePtr++ = *fromBytePtr++;
				uint8_t* L_37 = V_12;
				uint8_t* L_38 = L_37;
				V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, 1));
				uint8_t* L_39 = V_11;
				uint8_t* L_40 = L_39;
				V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, 1));
				int32_t L_41 = *((uint8_t*)L_40);
				*((int8_t*)L_38) = (int8_t)L_41;
				// for (int i = 0; i < restBytes; i++)
				int32_t L_42 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_42, 1));
			}

IL_00ea_1:
			{
				// for (int i = 0; i < restBytes; i++)
				int32_t L_43 = V_13;
				int32_t L_44 = V_3;
				if ((((int32_t)L_43) < ((int32_t)L_44)))
				{
					goto IL_00d4_1;
				}
			}

IL_00ef_1:
			{
				// }
				goto IL_0112;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0112:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mA380BBFF498E76A0A9A341805D4597CF5CF13AE3 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ValueGetter_2_Invoke_m1554A0EB3350906E0ECAD5FCDF7520ADFBDED1C0_gshared_inline (ValueGetter_2_t9AE09E0210DA9784C2D07F0324BE37C72EC3636A* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instance, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
