#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"



extern const RuntimeMethod* AppleStoreImpl_MessageCallback_mE99DF09282C9C88D2FE5FD235ECF603C7E856270_RuntimeMethod_var;
extern const RuntimeMethod* FacebookStoreImpl_MessageCallback_m22696E14F2518E2D452BCF1431300FCEC0A58FB2_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 UnityEngine.RuntimePlatform Uniject.IUtil::get_platform()
// 0x00000002 System.String Uniject.IUtil::get_persistentDataPath()
// 0x00000003 System.String Uniject.IUtil::get_cloudProjectId()
// 0x00000004 System.String Uniject.IUtil::get_unityVersion()
// 0x00000005 System.String Uniject.IUtil::get_userId()
// 0x00000006 System.String Uniject.IUtil::get_gameVersion()
// 0x00000007 System.UInt64 Uniject.IUtil::get_sessionId()
// 0x00000008 System.String Uniject.IUtil::get_operatingSystem()
// 0x00000009 System.Int32 Uniject.IUtil::get_screenWidth()
// 0x0000000A System.Int32 Uniject.IUtil::get_screenHeight()
// 0x0000000B System.Single Uniject.IUtil::get_screenDpi()
// 0x0000000C System.String Uniject.IUtil::get_screenOrientation()
// 0x0000000D System.Object Uniject.IUtil::InitiateCoroutine(System.Collections.IEnumerator)
// 0x0000000E System.Void Uniject.IUtil::InitiateCoroutine(System.Collections.IEnumerator,System.Int32)
// 0x0000000F System.Void Uniject.IUtil::RunOnMainThread(System.Action)
// 0x00000010 System.Void Uniject.IUtil::AddPauseListener(System.Action`1<System.Boolean>)
// 0x00000011 System.Boolean Uniject.IUtil::IsClassOrSubclass(System.Type,System.Type)
// 0x00000012 System.Void UnityEngine.Purchasing.AndroidJavaStore::.ctor(UnityEngine.AndroidJavaObject)
extern void AndroidJavaStore__ctor_mFD8192947D3A2BEA46B0B06B24BF9046F4DC46A3 (void);
// 0x00000013 System.Void UnityEngine.Purchasing.AndroidJavaStore::RetrieveProducts(System.String)
extern void AndroidJavaStore_RetrieveProducts_m0A9A25B60388ADE2E296B6FE537F28EFDA4795C2 (void);
// 0x00000014 System.Void UnityEngine.Purchasing.AndroidJavaStore::Purchase(System.String,System.String)
extern void AndroidJavaStore_Purchase_m0CD5B985E0E8C20107DAD223AAE5E559044652FD (void);
// 0x00000015 System.Void UnityEngine.Purchasing.AndroidJavaStore::FinishTransaction(System.String,System.String)
extern void AndroidJavaStore_FinishTransaction_mBED612E912164586D76D3127C3B431FDFDC608C2 (void);
// 0x00000016 System.Void UnityEngine.Purchasing.JavaBridge::.ctor(UnityEngine.Purchasing.IUnityCallback)
extern void JavaBridge__ctor_m93CAAD5087B323337FC0F75AAADBB2F9BE992D26 (void);
// 0x00000017 System.String UnityEngine.Purchasing.SerializationExtensions::TryGetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern void SerializationExtensions_TryGetString_mA10D737689E7F440AA298870771ECC71F4760029 (void);
// 0x00000018 System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDef(UnityEngine.Purchasing.ProductDefinition)
extern void JSONSerializer_SerializeProductDef_m0F82BE7058DDBE10311D6701BB8A7A73B3DE1D29 (void);
// 0x00000019 System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDefs(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>)
extern void JSONSerializer_SerializeProductDefs_m171143D9523484EC211F250CE95478AB8CEC81BE (void);
// 0x0000001A System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDescs(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern void JSONSerializer_SerializeProductDescs_m7F990AF2D71879D2FF0AA9C61131DD929CF75A23 (void);
// 0x0000001B System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.JSONSerializer::DeserializeProductDescriptions(System.String)
extern void JSONSerializer_DeserializeProductDescriptions_m48C8088DA80E3D47FA22C7F225E508E9586062B1 (void);
// 0x0000001C UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONSerializer::DeserializeFailureReason(System.String)
extern void JSONSerializer_DeserializeFailureReason_m978BCEED3BBB14FD2FDE7A0606B6D18D5977A295 (void);
// 0x0000001D UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.JSONSerializer::DeserializeMetadata(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void JSONSerializer_DeserializeMetadata_m7534658E5D25448F74BBC5ED68043EED09E4EFC5 (void);
// 0x0000001E System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONSerializer::EncodeProductDef(UnityEngine.Purchasing.ProductDefinition)
extern void JSONSerializer_EncodeProductDef_m533F68A365036B6DC814A5683236D1DBD72400E1 (void);
// 0x0000001F System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONSerializer::EncodeProductDesc(UnityEngine.Purchasing.Extension.ProductDescription)
extern void JSONSerializer_EncodeProductDesc_m0CE3ABD705298E0C60773B69713A27764CED9987 (void);
// 0x00000020 System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONSerializer::EncodeProductMeta(UnityEngine.Purchasing.ProductMetadata)
extern void JSONSerializer_EncodeProductMeta_m3536743067A07A6497B5A858DFA7A36866BEC1FB (void);
// 0x00000021 System.Void UnityEngine.Purchasing.ScriptingStoreCallback::.ctor(UnityEngine.Purchasing.Extension.IStoreCallback,Uniject.IUtil)
extern void ScriptingStoreCallback__ctor_mB83D0ECAABE3358510962F496E6F4E5E8B1C118A (void);
// 0x00000022 UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.ScriptingStoreCallback::get_products()
extern void ScriptingStoreCallback_get_products_mBBB2608066F5613AED8F175854CB9B2994CA0A54 (void);
// 0x00000023 System.Void UnityEngine.Purchasing.ScriptingStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern void ScriptingStoreCallback_OnSetupFailed_m9237DDE2142D5C986587EA826B4887E7C1047C04 (void);
// 0x00000024 System.Void UnityEngine.Purchasing.ScriptingStoreCallback::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern void ScriptingStoreCallback_OnProductsRetrieved_mF135EF994750730689D997467807F059C61517E2 (void);
// 0x00000025 System.Void UnityEngine.Purchasing.ScriptingStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String)
extern void ScriptingStoreCallback_OnPurchaseSucceeded_mD3C564A932FE48C3B54ADCE10420730068441E0C (void);
// 0x00000026 System.Void UnityEngine.Purchasing.ScriptingStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
extern void ScriptingStoreCallback_OnPurchaseFailed_m7C3087B9ADA47CB310B9F461EF4256582ACC3533 (void);
// 0x00000027 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m19D91DE9D26386B9C10698BF5783D0B1AA06CA3E (void);
// 0x00000028 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass5_0::<OnSetupFailed>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3COnSetupFailedU3Eb__0_m1EE564B6878C83C9056BF7EEA81AB2FDC4BC8063 (void);
// 0x00000029 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_mDD64BFC3043A87E14E91E09BA62015C09C7E288D (void);
// 0x0000002A System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass6_0::<OnProductsRetrieved>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3COnProductsRetrievedU3Eb__0_m4B455FE83D6D4450F62FDEB0C0278392A9873AA1 (void);
// 0x0000002B System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_mDB2FB3E0895672786FD01034B4A98EFACBDC053C (void);
// 0x0000002C System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0::<OnPurchaseSucceeded>b__0()
extern void U3CU3Ec__DisplayClass7_0_U3COnPurchaseSucceededU3Eb__0_m5084E47EEC1EEDDE123BFE774F5C3607B8E4D04D (void);
// 0x0000002D System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass10_0::.ctor()
extern void U3CU3Ec__DisplayClass10_0__ctor_m79C4E6079036588FC34F604A32E5C92028BC4543 (void);
// 0x0000002E System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass10_0::<OnPurchaseFailed>b__0()
extern void U3CU3Ec__DisplayClass10_0_U3COnPurchaseFailedU3Eb__0_mE0F801567F142237F43FBF3B577CC14229EEEEF0 (void);
// 0x0000002F System.Void UnityEngine.Purchasing.ScriptingUnityCallback::.ctor(UnityEngine.Purchasing.IUnityCallback,Uniject.IUtil)
extern void ScriptingUnityCallback__ctor_m7C927B2B1D98227071B626B32F68007EAFFCA3BF (void);
// 0x00000030 System.Void UnityEngine.Purchasing.AmazonAppStoreStoreExtensions::.ctor(UnityEngine.AndroidJavaObject)
extern void AmazonAppStoreStoreExtensions__ctor_mFE99E60E76E3B05CCCFD4ED61C45E6B79C57B6EA (void);
// 0x00000031 System.Void UnityEngine.Purchasing.FakeAmazonExtensions::.ctor()
extern void FakeAmazonExtensions__ctor_mCEEE278DD75E78801E1E6AE47E0FE20D0611BE2F (void);
// 0x00000032 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.ListExtension::ToJava(System.Collections.Generic.List`1<System.String>)
extern void ListExtension_ToJava_m518E0956FBB589E4F7CCCE7ACC898F86931F4276 (void);
// 0x00000033 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.ListExtension::ToJavaArray(System.Collections.Generic.List`1<System.String>)
extern void ListExtension_ToJavaArray_mE5913FA46CFF22A2C5F8D260DCA3B494B685E91E (void);
// 0x00000034 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.UnityActivity::GetUnityPlayerClass()
extern void UnityActivity_GetUnityPlayerClass_m49764DC648A0CC93A39A358C04E645BF15008767 (void);
// 0x00000035 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.UnityActivity::GetCurrentActivity()
extern void UnityActivity_GetCurrentActivity_mE22B29676CEBB2D792E6E7843C968DF340B7AC7E (void);
// 0x00000036 System.Boolean UnityEngine.Purchasing.ReflectionUtils::HasMethodInInterface(System.Object,System.String)
extern void ReflectionUtils_HasMethodInInterface_mC3F2B25F316470D6719C6918B70280F254047E9E (void);
// 0x00000037 System.Reflection.MethodInfo UnityEngine.Purchasing.ReflectionUtils::GetMethod(System.Object,System.String)
extern void ReflectionUtils_GetMethod_m642CD4B28F9A0BD7ABE9AAA56EC2160EC5716095 (void);
// 0x00000038 System.Void UnityEngine.Purchasing.ReflectionUtils::InvokeMethod(System.Object,System.String,System.Object[])
extern void ReflectionUtils_InvokeMethod_m56796251563C9B52B36BAD28C3DF7C3358D50BEB (void);
// 0x00000039 System.Void UnityEngine.Purchasing.FakeGooglePlayStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void FakeGooglePlayStoreExtensions_RestoreTransactions_m8AA63ACDFD5EAB721F314611231CE82599F17FBB (void);
// 0x0000003A System.Void UnityEngine.Purchasing.FakeGooglePlayStoreExtensions::.ctor()
extern void FakeGooglePlayStoreExtensions__ctor_m0A9A45D4AE80227A84686775BEC9092BFFB090BC (void);
// 0x0000003B System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayPurchaseCallback_SetStoreCallback_mF73A4B49CBB824B4244EA001C38A447AC5907208 (void);
// 0x0000003C System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::SetStoreExtension(UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal)
extern void GooglePlayPurchaseCallback_SetStoreExtension_m470FEC924FAE997C199DAB60E6A169FBC73A1E58 (void);
// 0x0000003D System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
extern void GooglePlayPurchaseCallback_OnPurchaseFailed_m45D13236B3F95686691AB50CBA6F6D3C5EA948B9 (void);
// 0x0000003E System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::.ctor()
extern void GooglePlayPurchaseCallback__ctor_m0E2B91A6AAAFE158BD710A8780367C0C6FC6365A (void);
// 0x0000003F System.Void UnityEngine.Purchasing.GooglePlayStore::.ctor(UnityEngine.Purchasing.IGooglePlayStoreRetrieveProductsService,UnityEngine.Purchasing.IGooglePlayStorePurchaseService,UnityEngine.Purchasing.IGoogleFetchPurchases,UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService,UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback,UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal,Uniject.IUtil)
extern void GooglePlayStore__ctor_m71479048D51F71641ECBE796C5EA486D275BCF17 (void);
// 0x00000040 System.Void UnityEngine.Purchasing.GooglePlayStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayStore_Initialize_m7768E14D0878F2057C30422294A2322E218EF9C1 (void);
// 0x00000041 System.Void UnityEngine.Purchasing.GooglePlayStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void GooglePlayStore_RetrieveProducts_mBAEDBD93EAE379785669814302247F162D3C9FE7 (void);
// 0x00000042 System.Void UnityEngine.Purchasing.GooglePlayStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void GooglePlayStore_Purchase_m45D0BDA0573FA4A8E41EDDDF115E43C3A4B0BFBB (void);
// 0x00000043 System.Void UnityEngine.Purchasing.GooglePlayStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void GooglePlayStore_FinishTransaction_mCC862ADBA5E64F8594871166E39F15863FD39525 (void);
// 0x00000044 System.Void UnityEngine.Purchasing.GooglePlayStore::OnPause(System.Boolean)
extern void GooglePlayStore_OnPause_mC662A6D4639097578628E3301F2E265EF4E08F09 (void);
// 0x00000045 System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService,UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService)
extern void GooglePlayStoreExtensions__ctor_m786F09B2DB7E317BDA870678A0D38C29E933E193 (void);
// 0x00000046 System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void GooglePlayStoreExtensions_RestoreTransactions_m8372DF50DE41959306B4EFF259BB0BC358FF54A6 (void);
// 0x00000047 System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayStoreExtensions_SetStoreCallback_m8557B90DF6B1C6A87C113FED4D824138355801D6 (void);
// 0x00000048 System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions_<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mE42FF4329AC6E2D59C545BC194C199162CC8EB3E (void);
// 0x00000049 System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions_<>c__DisplayClass8_0::<RestoreTransactions>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass8_0_U3CRestoreTransactionsU3Eb__0_m4103ED4B337B6614F1EE25BD28D845AA5AF69DDD (void);
// 0x0000004A UnityEngine.Purchasing.Product UnityEngine.Purchasing.StoreCallbackExtensionMethods::FindProductById(UnityEngine.Purchasing.Extension.IStoreCallback,System.String)
extern void StoreCallbackExtensionMethods_FindProductById_mAB1D9C5A52F0758D14D2EC7A1B81E23B175ABEA7 (void);
// 0x0000004B System.Collections.Generic.HashSet`1<UnityEngine.AndroidJavaObject> UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::GetCachedQueriedSkus()
extern void GoogleCachedQuerySkuDetailsService_GetCachedQueriedSkus_m19337C2C90D21F1505D5DAFB10596E7254B69DA7 (void);
// 0x0000004C System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::ContainsSku(System.String)
extern void GoogleCachedQuerySkuDetailsService_ContainsSku_m83313ADD5D03D1B51BDDA538C2AAAF6E06DAD971 (void);
// 0x0000004D System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::AddCachedQueriedSkus(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
extern void GoogleCachedQuerySkuDetailsService_AddCachedQueriedSkus_m9AA554F4E3FD47E223DEB270F63ACAE1367A34D2 (void);
// 0x0000004E System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::UpdateCachedQueriedSku(System.String,UnityEngine.AndroidJavaObject)
extern void GoogleCachedQuerySkuDetailsService_UpdateCachedQueriedSku_mEF2C50690DEFD1818B5111B8B863BF673F89C3C4 (void);
// 0x0000004F System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::.ctor()
extern void GoogleCachedQuerySkuDetailsService__ctor_m20FCCC611E1161616F5815A563C86E79D1C60A99 (void);
// 0x00000050 System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m59A269FBD27A115575DCB9FE50903DA3F396065E (void);
// 0x00000051 System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass2_0::<ContainsSku>b__0(UnityEngine.AndroidJavaObject)
extern void U3CU3Ec__DisplayClass2_0_U3CContainsSkuU3Eb__0_m020B52E9DA4836442DA2CB422618BF234D6E9705 (void);
// 0x00000052 System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m3917EBBC657BE32664CA1C9F17FD6DF6862ECAF5 (void);
// 0x00000053 System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass4_0::<UpdateCachedQueriedSku>b__0(UnityEngine.AndroidJavaObject)
extern void U3CU3Ec__DisplayClass4_0_U3CUpdateCachedQueriedSkuU3Eb__0_m4A5E11BF71CF689E5E1507CACFC7F8B41BEEDB89 (void);
// 0x00000054 System.Void UnityEngine.Purchasing.GoogleFinishTransactionService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService)
extern void GoogleFinishTransactionService__ctor_m3B433FEFCF299A727A79635E613B2B36BDF3B2B6 (void);
// 0x00000055 System.Void UnityEngine.Purchasing.GoogleFinishTransactionService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GoogleFinishTransactionService_FinishTransaction_mCB58615526F738CC95EC1F9F6A8D7D6B19F044C6 (void);
// 0x00000056 System.Func`2<UnityEngine.Purchasing.Models.GooglePurchase,System.Boolean> UnityEngine.Purchasing.GoogleFinishTransactionService::PurchaseNeedsAcknowledgement(UnityEngine.Purchasing.ProductDefinition)
extern void GoogleFinishTransactionService_PurchaseNeedsAcknowledgement_mD8D6C4345F573C346D9714AAC8882BCE04C65DF8 (void);
// 0x00000057 System.Void UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m61784CFF0821404DAF494D9DDFDE79A2A3E962C9 (void);
// 0x00000058 System.Void UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::<FinishTransaction>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass3_0_U3CFinishTransactionU3Eb__0_m6A8D44EBA72DEAC6597D92E6E2E18CD1B513EA40 (void);
// 0x00000059 System.Void UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m129B592E3EC2BEFDD1FDFDA5CDD37C9CA21FA19D (void);
// 0x0000005A System.Boolean UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass4_0::<PurchaseNeedsAcknowledgement>b__0(UnityEngine.Purchasing.Models.GooglePurchase)
extern void U3CU3Ec__DisplayClass4_0_U3CPurchaseNeedsAcknowledgementU3Eb__0_mA2D820FF28F303E90C62E9DB79F722831B7F7571 (void);
// 0x0000005B System.Void UnityEngine.Purchasing.GoogleLastKnownProductService::SetLastKnownProductId(System.String)
extern void GoogleLastKnownProductService_SetLastKnownProductId_m9545028BD58B93E110A31EC1535D37017F311E6C (void);
// 0x0000005C System.Void UnityEngine.Purchasing.GoogleLastKnownProductService::.ctor()
extern void GoogleLastKnownProductService__ctor_m18F0D7547AD9742F2EFED8F7A439E5ADB34BA09A (void);
// 0x0000005D System.Void UnityEngine.Purchasing.GooglePlayStoreService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService,UnityEngine.Purchasing.Interfaces.IGooglePurchaseService,UnityEngine.Purchasing.Interfaces.IGoogleFinishTransactionService,UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService,UnityEngine.Purchasing.Interfaces.IBillingClientStateListener,UnityEngine.Purchasing.IGooglePriceChangeService,UnityEngine.Purchasing.Interfaces.IGoogleLastKnownProductService)
extern void GooglePlayStoreService__ctor_m9D2B6B15D3F95FAAD27ABEC5340CC72885AC5685 (void);
// 0x0000005E System.Void UnityEngine.Purchasing.GooglePlayStoreService::InitConnectionWithGooglePlay(UnityEngine.Purchasing.Interfaces.IBillingClientStateListener)
extern void GooglePlayStoreService_InitConnectionWithGooglePlay_m33D36E57BF77DB279AED4C7F6A64C69FC020A842 (void);
// 0x0000005F System.Void UnityEngine.Purchasing.GooglePlayStoreService::OnConnected()
extern void GooglePlayStoreService_OnConnected_m70EF8A1AAE247EE1B250EF992DEE927DA9D2AD0A (void);
// 0x00000060 System.Void UnityEngine.Purchasing.GooglePlayStoreService::DequeueQueryProducts()
extern void GooglePlayStoreService_DequeueQueryProducts_m0A81464F13FAED8C62B71E31C34747B82109D158 (void);
// 0x00000061 System.Void UnityEngine.Purchasing.GooglePlayStoreService::DequeueFetchPurchases()
extern void GooglePlayStoreService_DequeueFetchPurchases_m152E26CE2143AFE50DCBAAFFA3EEA0C0C07DBDA9 (void);
// 0x00000062 System.Void UnityEngine.Purchasing.GooglePlayStoreService::OnDisconnected()
extern void GooglePlayStoreService_OnDisconnected_m18D3C3266E34BE8D8ED1C8D0E5CC401B6D098D87 (void);
// 0x00000063 System.Void UnityEngine.Purchasing.GooglePlayStoreService::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>,System.Action)
extern void GooglePlayStoreService_RetrieveProducts_m2A8C0BA8627CF420EE31B625393107730DA3403E (void);
// 0x00000064 System.Void UnityEngine.Purchasing.GooglePlayStoreService::Purchase(UnityEngine.Purchasing.ProductDefinition)
extern void GooglePlayStoreService_Purchase_m135B660562A4E85AA9AB2B3E1907BA15E1E3B4F4 (void);
// 0x00000065 System.Void UnityEngine.Purchasing.GooglePlayStoreService::Purchase(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product,System.Int32)
extern void GooglePlayStoreService_Purchase_m92BDDDCBFCCB185F2C309CD0607DEE1E6C745167 (void);
// 0x00000066 System.Void UnityEngine.Purchasing.GooglePlayStoreService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GooglePlayStoreService_FinishTransaction_m7EF088A51997094B94A695F275E816341367DF28 (void);
// 0x00000067 System.Void UnityEngine.Purchasing.GooglePlayStoreService::FetchPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
extern void GooglePlayStoreService_FetchPurchases_m7AF042CED6006B601904604175BA253B1D8239C1 (void);
// 0x00000068 System.Void UnityEngine.Purchasing.GooglePriceChangeService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GooglePriceChangeService__ctor_m3BC4BB5BA8916BCFE9B315D5A59A370C83338A39 (void);
// 0x00000069 System.Void UnityEngine.Purchasing.GooglePurchaseService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback,UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService)
extern void GooglePurchaseService__ctor_mCF46101DFC761038533BED40F74537C4FF1A85FC (void);
// 0x0000006A System.Void UnityEngine.Purchasing.GooglePurchaseService::Purchase(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product,System.Int32)
extern void GooglePurchaseService_Purchase_mE2AA54CEB4F5875767ABF66828D32A258CED45FB (void);
// 0x0000006B System.Void UnityEngine.Purchasing.GooglePurchaseService::OnQuerySkuDetailsResponse(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product,System.Int32)
extern void GooglePurchaseService_OnQuerySkuDetailsResponse_m846E77D775FF9371347B58A2C760040AA1A3D1F6 (void);
// 0x0000006C System.Void UnityEngine.Purchasing.GooglePurchaseService::VerifyAndWarnIfMoreThanOneSku(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,UnityEngine.AndroidJavaObject)
extern void GooglePurchaseService_VerifyAndWarnIfMoreThanOneSku_mBB92BC0A642529F9D547A83BA90997FD7EA69F8E (void);
// 0x0000006D System.Void UnityEngine.Purchasing.GooglePurchaseService::HandleBillingFlowResult(UnityEngine.Purchasing.Models.GoogleBillingResult,UnityEngine.AndroidJavaObject)
extern void GooglePurchaseService_HandleBillingFlowResult_m1EE0203CBC393D3CCA2FB6A336E1763A7EC18976 (void);
// 0x0000006E System.Void UnityEngine.Purchasing.GooglePurchaseService_<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mECE79A1C2D43E48B16374910E138E8737BA1D6AA (void);
// 0x0000006F System.Void UnityEngine.Purchasing.GooglePurchaseService_<>c__DisplayClass4_0::<Purchase>b__0(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
extern void U3CU3Ec__DisplayClass4_0_U3CPurchaseU3Eb__0_m2EC8ED1BB3CE4C7F187EFC83F010DE42962EA8F9 (void);
// 0x00000070 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GoogleQueryPurchasesService__ctor_m3724BD70B7A411BF0C47529346F9677880591522 (void);
// 0x00000071 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::QueryPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
extern void GoogleQueryPurchasesService_QueryPurchases_m5BD00DA3125E416D77F84B06A682587FB5479115 (void);
// 0x00000072 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::HandleOnQueryPurchaseReceived(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>,System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>,System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void GoogleQueryPurchasesService_HandleOnQueryPurchaseReceived_m22B98080CC48D083B2780AEB516D481704F69A16 (void);
// 0x00000073 UnityEngine.Purchasing.Models.GooglePurchaseResult UnityEngine.Purchasing.GoogleQueryPurchasesService::QueryPurchasesWithSkuType(System.String)
extern void GoogleQueryPurchasesService_QueryPurchasesWithSkuType_m0480643037A6446DA0DD2229CDC3C1F47A4B716F (void);
// 0x00000074 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::HandleGooglePurchaseResult(UnityEngine.Purchasing.Models.GooglePurchaseResult,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
extern void GoogleQueryPurchasesService_HandleGooglePurchaseResult_m39772D1EF9BF8DAD9937EA9EED71A6DF000EE587 (void);
// 0x00000075 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_mC3A6E9EBC596FEB24D5D0ADB8C0D921925C36D8D (void);
// 0x00000076 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_0::<QueryPurchases>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass3_0_U3CQueryPurchasesU3Eb__0_m271CFA34204CD31766047B87FEEB9DEC3C6E34CB (void);
// 0x00000077 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_1::.ctor()
extern void U3CU3Ec__DisplayClass3_1__ctor_mFF71E8BEFCD45D9212B627BA1E4859FB6ED5FE78 (void);
// 0x00000078 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_1::<QueryPurchases>b__1(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_m82E727D6963BD44D90A27EDB5BF6C1A51AC93959 (void);
// 0x00000079 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.QuerySkuDetailsService::GetSkuDetailsParamClass()
extern void QuerySkuDetailsService_GetSkuDetailsParamClass_mD789C9610A3285F2C16069BB1D38C780FA51A79D (void);
// 0x0000007A System.Void UnityEngine.Purchasing.QuerySkuDetailsService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void QuerySkuDetailsService__ctor_m7C00433FDE3D6F5A96B11924F5531F976F028B70 (void);
// 0x0000007B System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QueryAsyncSku(UnityEngine.Purchasing.ProductDefinition,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QueryAsyncSku_mEB2747272F630C9978D3E37489786C1222EAE9EA (void);
// 0x0000007C System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QueryAsyncSku(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
extern void QuerySkuDetailsService_QueryAsyncSku_mA47C31C84C95B7C99072A86A6F71CBF59CB318FC (void);
// 0x0000007D System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QueryAsyncSku(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QueryAsyncSku_m13B46DFCC2757FF93A81C05A92168BAF88FF603F (void);
// 0x0000007E System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QueryInAppsAsync(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QueryInAppsAsync_mB48B5023AFF30594BB95528B78F9FEF949041B52 (void);
// 0x0000007F System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QuerySubsAsync(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QuerySubsAsync_m47AA969D448E0DB9F6389A73C97F928BD6E0CABC (void);
// 0x00000080 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QuerySkuDetails(System.Collections.Generic.List`1<System.String>,System.String,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QuerySkuDetails_m3D0095A5394E9ED9BCE2205333BD87ABCC6E6707 (void);
// 0x00000081 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::ConsolidateOnSkuDetailsReceived(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_ConsolidateOnSkuDetailsReceived_mD04B4D5CF870C8F6CE81DA28623377B07207D33D (void);
// 0x00000082 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::AddToQueriedSkuDetails(UnityEngine.AndroidJavaObject)
extern void QuerySkuDetailsService_AddToQueriedSkuDetails_m4109FAF7B2C1B6EE7A84DF24A811AA9679783E22 (void);
// 0x00000083 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::Clear()
extern void QuerySkuDetailsService_Clear_m7E0B85A438249EC3652E3DD19332A4806AD546AE (void);
// 0x00000084 System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass12_0::.ctor()
extern void U3CU3Ec__DisplayClass12_0__ctor_mF3A69242486A37F0F3C214878145853D0C03C475 (void);
// 0x00000085 System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass12_0::<QueryAsyncSku>b__0(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
extern void U3CU3Ec__DisplayClass12_0_U3CQueryAsyncSkuU3Eb__0_m91071CB3D7C44E4C28514FD863F490D15D446E1C (void);
// 0x00000086 System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c::.cctor()
extern void U3CU3Ec__cctor_m8C7FC15A10E36C647B4FBDE2123F844D123AB27B (void);
// 0x00000087 System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c::.ctor()
extern void U3CU3Ec__ctor_m9E7270CC4E58BE57A75A15D3EB56817EFD170580 (void);
// 0x00000088 System.Boolean UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QueryInAppsAsync>b__14_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_0_m2F9F78E147596D39BA392BFC95C8D46FC38BB5F2 (void);
// 0x00000089 System.String UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QueryInAppsAsync>b__14_1(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_1_m4C623A3BE00D7BAEDD57F8CDF41E99B6201F208C (void);
// 0x0000008A System.Boolean UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QuerySubsAsync>b__15_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_0_m099BA26E59BF0BE8D54CBAC075A2D2C7B14F3E39 (void);
// 0x0000008B System.String UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QuerySubsAsync>b__15_1(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_1_m4068CE234A7DB1289912235480968AB86888A3AA (void);
// 0x0000008C System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass16_0::.ctor()
extern void U3CU3Ec__DisplayClass16_0__ctor_mE2CB223461078491C78BE34497C58F11991BF07E (void);
// 0x0000008D System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass16_0::<QuerySkuDetails>b__0(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
extern void U3CU3Ec__DisplayClass16_0_U3CQuerySkuDetailsU3Eb__0_m261635F1D3423E025FD1E2AEE410CFE6FDE53850 (void);
// 0x0000008E System.Collections.Generic.HashSet`1<UnityEngine.AndroidJavaObject> UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService::GetCachedQueriedSkus()
// 0x0000008F System.Void UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService::AddCachedQueriedSkus(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
// 0x00000090 System.Void UnityEngine.Purchasing.BillingClientStateListener::.ctor()
extern void BillingClientStateListener__ctor_m0E7B3F768FD18A6A956084ABBD4C3F1D47356F9A (void);
// 0x00000091 System.Void UnityEngine.Purchasing.BillingClientStateListener::RegisterOnConnected(System.Action)
extern void BillingClientStateListener_RegisterOnConnected_mBFA6CB585F539DDFA0068F849F12C983957F7E5E (void);
// 0x00000092 System.Void UnityEngine.Purchasing.BillingClientStateListener::RegisterOnDisconnected(System.Action)
extern void BillingClientStateListener_RegisterOnDisconnected_m0D0D5672A92F07AA4E008D6C0F4109DC9207C4CE (void);
// 0x00000093 System.Void UnityEngine.Purchasing.GoogleAcknowledgePurchaseListener::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GoogleAcknowledgePurchaseListener__ctor_m4F38BF21B91CA5C5DD4FCE9404CEFC16F5B73349 (void);
// 0x00000094 System.Void UnityEngine.Purchasing.GoogleConsumeResponseListener::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>)
extern void GoogleConsumeResponseListener__ctor_mA35D7B60BC3186CC24C784AAE7E90866C2E1AC97 (void);
// 0x00000095 System.Void UnityEngine.Purchasing.GooglePurchaseUpdatedListener::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleLastKnownProductService,UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GooglePurchaseUpdatedListener__ctor_mF8CDD125ECF20F1E031A4DEFB261E76ED1A79F72 (void);
// 0x00000096 System.Void UnityEngine.Purchasing.SkuDetailsResponseListener::.ctor(System.Action`2<UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject>)
extern void SkuDetailsResponseListener__ctor_m697A41335AB3524B8EC1574C886464F6899B607B (void);
// 0x00000097 System.Void UnityEngine.Purchasing.IGooglePlayStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
// 0x00000098 System.Void UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x00000099 System.Void UnityEngine.Purchasing.IGoogleFetchPurchases::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x0000009A System.Void UnityEngine.Purchasing.IGoogleFetchPurchases::FetchPurchases()
// 0x0000009B System.Void UnityEngine.Purchasing.IGoogleFetchPurchases::FetchPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>>)
// 0x0000009C System.Void UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x0000009D System.Void UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
// 0x0000009E System.Void UnityEngine.Purchasing.IGooglePlayStorePurchaseService::Purchase(UnityEngine.Purchasing.ProductDefinition)
// 0x0000009F System.Void UnityEngine.Purchasing.IGooglePlayStoreRetrieveProductsService::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x000000A0 System.Void UnityEngine.Purchasing.IGooglePlayStoreRetrieveProductsService::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
// 0x000000A1 System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_originalJson(System.String)
extern void GoogleProductMetadata_set_originalJson_m5C0E6D5C64E37D2744B5407F32506F6CC85A958B (void);
// 0x000000A2 System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_subscriptionPeriod(System.String)
extern void GoogleProductMetadata_set_subscriptionPeriod_m1A10B3A40861B4B31B76F327DB8B0021C856949D (void);
// 0x000000A3 System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_freeTrialPeriod(System.String)
extern void GoogleProductMetadata_set_freeTrialPeriod_m9D4C410E2B198A9EE0BC225B9DC9E992F18E736D (void);
// 0x000000A4 System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_introductoryPrice(System.String)
extern void GoogleProductMetadata_set_introductoryPrice_m7E08C069CBB94CBF9199B6A60FC7BA7935080F07 (void);
// 0x000000A5 System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_introductoryPricePeriod(System.String)
extern void GoogleProductMetadata_set_introductoryPricePeriod_mFDD9CCFD0C3C9E1A9DA35AE784035159679A98FD (void);
// 0x000000A6 System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_introductoryPriceCycles(System.Int32)
extern void GoogleProductMetadata_set_introductoryPriceCycles_m2AF614505AAA889288EC9F5F44514C3687359788 (void);
// 0x000000A7 System.Void UnityEngine.Purchasing.GoogleProductMetadata::.ctor(System.String,System.String,System.String,System.String,System.Decimal)
extern void GoogleProductMetadata__ctor_mEA15E6CFA789E648762E43DF28BE017EC760E495 (void);
// 0x000000A8 System.Void UnityEngine.Purchasing.GoogleFetchPurchases::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService,UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService)
extern void GoogleFetchPurchases__ctor_mE989FB6E16D2B7DAA4CC0ECA846ED98E7640BEAC (void);
// 0x000000A9 System.Void UnityEngine.Purchasing.GoogleFetchPurchases::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GoogleFetchPurchases_SetStoreCallback_m6B9EC1C8F758892FDE8769CBF7A423D253B2FBA7 (void);
// 0x000000AA System.Void UnityEngine.Purchasing.GoogleFetchPurchases::FetchPurchases()
extern void GoogleFetchPurchases_FetchPurchases_mC0B83DC87149C46BEEDD586C91C88835276B0DD7 (void);
// 0x000000AB System.Void UnityEngine.Purchasing.GoogleFetchPurchases::FetchPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>>)
extern void GoogleFetchPurchases_FetchPurchases_m4DA8FE6E10C7EA78165590D8BD72C14F426F6563 (void);
// 0x000000AC System.Collections.Generic.List`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.GoogleFetchPurchases::FillProductsWithPurchases(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void GoogleFetchPurchases_FillProductsWithPurchases_m9AD44EE648D2B14C593E505D438A402D833EE9A7 (void);
// 0x000000AD System.Void UnityEngine.Purchasing.GoogleFetchPurchases::OnFetchedPurchase(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void GoogleFetchPurchases_OnFetchedPurchase_mDC974C61FD8F93C19F0E87FA006087052F9007AD (void);
// 0x000000AE System.Void UnityEngine.Purchasing.GoogleFetchPurchases::ForwardPurchasesToStoreCallbackPreUnifiedIap(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void GoogleFetchPurchases_ForwardPurchasesToStoreCallbackPreUnifiedIap_m34A5FB6A5FC65D9F70D7E5746DB56FA1B3432B54 (void);
// 0x000000AF System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_mEEF673D5C2BAB6B0398D209735EB524F8E1F35B6 (void);
// 0x000000B0 System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c__DisplayClass6_0::<FetchPurchases>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass6_0_U3CFetchPurchasesU3Eb__0_mD2019480CA1B72AF20CC4B27A57969FF26CC2B71 (void);
// 0x000000B1 System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c::.cctor()
extern void U3CU3Ec__cctor_mC7D319076F3C514CC0FC2135B02B470D2D233070 (void);
// 0x000000B2 System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c::.ctor()
extern void U3CU3Ec__ctor_mE2A129F7941CDFCBEFDFC4A4DD7DCF13D37C0E5D (void);
// 0x000000B3 System.Boolean UnityEngine.Purchasing.GoogleFetchPurchases_<>c::<FillProductsWithPurchases>b__7_0(UnityEngine.Purchasing.Models.GooglePurchase)
extern void U3CU3Ec_U3CFillProductsWithPurchasesU3Eb__7_0_m85C1C0CE057A2F7FAB99389E55F73357440FD839 (void);
// 0x000000B4 System.Boolean UnityEngine.Purchasing.GoogleFetchPurchases_<>c::<OnFetchedPurchase>b__8_0(UnityEngine.Purchasing.Models.GooglePurchase)
extern void U3CU3Ec_U3COnFetchedPurchaseU3Eb__8_0_m91EFE1103B0A7A3DC3943ED746BFB2E38E485978 (void);
// 0x000000B5 System.Boolean UnityEngine.Purchasing.GoogleFetchPurchases_<>c::<OnFetchedPurchase>b__8_1(UnityEngine.Purchasing.Models.GooglePurchase)
extern void U3CU3Ec_U3COnFetchedPurchaseU3Eb__8_1_m0E6494F93B2ED06142764936DA7FEC1D4B2507AB (void);
// 0x000000B6 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService)
extern void GooglePlayStoreFinishTransactionService__ctor_m88402287A94701141DCECD8A397125AB22C0B896 (void);
// 0x000000B7 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayStoreFinishTransactionService_SetStoreCallback_mDC7FE61C8407A724D7026178BFBDCCA66E8A11BC (void);
// 0x000000B8 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void GooglePlayStoreFinishTransactionService_FinishTransaction_m8E3A06EEB7202599844C25FA09409284C3102E62 (void);
// 0x000000B9 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::OnConsume(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String)
extern void GooglePlayStoreFinishTransactionService_OnConsume_m033E8A9EBE3AF7B072F238F30CC2DF4920252BCA (void);
// 0x000000BA System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::OnAcknowledge(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult)
extern void GooglePlayStoreFinishTransactionService_OnAcknowledge_m622FEC17E5E23583B30D823B0366E73506E2B78C (void);
// 0x000000BB System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::HandleFinishTransaction(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String)
extern void GooglePlayStoreFinishTransactionService_HandleFinishTransaction_m19015A055A79CFC6498F5878DF650715EF76C5F9 (void);
// 0x000000BC System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::CallPurchaseSucceededUpdateReceipt(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.String)
extern void GooglePlayStoreFinishTransactionService_CallPurchaseSucceededUpdateReceipt_m5C8941405E2D21DF582D255AE8763D950A5FBED6 (void);
// 0x000000BD System.Boolean UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::IsResponseCodeInRecoverableState(UnityEngine.Purchasing.Models.GoogleBillingResult)
extern void GooglePlayStoreFinishTransactionService_IsResponseCodeInRecoverableState_mEABCB59B8DFC44A9F80735A1786BDC24DCBC40C4 (void);
// 0x000000BE System.Void UnityEngine.Purchasing.GooglePlayStorePurchaseService::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService)
extern void GooglePlayStorePurchaseService__ctor_mB35E7B6722A899F6FA612AB6D29D3A66DAC77BB0 (void);
// 0x000000BF System.Void UnityEngine.Purchasing.GooglePlayStorePurchaseService::Purchase(UnityEngine.Purchasing.ProductDefinition)
extern void GooglePlayStorePurchaseService_Purchase_m2C751C4904028A4A410737F54540F09DB70A9282 (void);
// 0x000000C0 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService,UnityEngine.Purchasing.IGoogleFetchPurchases)
extern void GooglePlayStoreRetrieveProductsService__ctor_m879B2CF3383911CAF31F728DD1D5FB8428709DFA (void);
// 0x000000C1 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayStoreRetrieveProductsService_SetStoreCallback_m1D9AC09DC8874BCA6569E14CB8EDB4781F477050 (void);
// 0x000000C2 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void GooglePlayStoreRetrieveProductsService_RetrieveProducts_m27316F35B73BA9835CE14096DC42EEF9DAC48555 (void);
// 0x000000C3 System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::MakePurchasesIntoProducts(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>)
extern void GooglePlayStoreRetrieveProductsService_MakePurchasesIntoProducts_mEEA9AF9099363109FCFE07C506CCD94D09F067EE (void);
// 0x000000C4 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::<RetrieveProducts>b__5_0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern void GooglePlayStoreRetrieveProductsService_U3CRetrieveProductsU3Eb__5_0_mD1C82E151A6E3B08A3043EF0166463CBB486CDE1 (void);
// 0x000000C5 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::<RetrieveProducts>b__5_1()
extern void GooglePlayStoreRetrieveProductsService_U3CRetrieveProductsU3Eb__5_1_m43E9AC304891D5FEB9E42A15BFFB2D744F24B15E (void);
// 0x000000C6 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m8BBF0BECA6D42597B03F1D2CC41B9110A51EB53F (void);
// 0x000000C7 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass5_0::<RetrieveProducts>b__2(System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>)
extern void U3CU3Ec__DisplayClass5_0_U3CRetrieveProductsU3Eb__2_mD914FE24DADAE1AE2417AA45B4DBADA59107D4C6 (void);
// 0x000000C8 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_mDC7E680C6B531DF93078611DADC9E1B6E8E717E1 (void);
// 0x000000C9 System.Boolean UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass6_0::<MakePurchasesIntoProducts>b__0(UnityEngine.Purchasing.Extension.ProductDescription)
extern void U3CU3Ec__DisplayClass6_0_U3CMakePurchasesIntoProductsU3Eb__0_m82C14685A855090F194C15CBC4BCE81B3D0F4451 (void);
// 0x000000CA System.Void UnityEngine.Purchasing.FakeSamsungAppsExtensions::SetMode(UnityEngine.Purchasing.SamsungAppsMode)
extern void FakeSamsungAppsExtensions_SetMode_m30D22802E4CAF13053EDF3162AC2D90281480E95 (void);
// 0x000000CB System.Void UnityEngine.Purchasing.FakeSamsungAppsExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void FakeSamsungAppsExtensions_RestoreTransactions_mE72EB98AE4F38E37AE46186EA976C013320E24C2 (void);
// 0x000000CC System.Void UnityEngine.Purchasing.FakeSamsungAppsExtensions::.ctor()
extern void FakeSamsungAppsExtensions__ctor_m9E80ADDEA88ADE8916E679329BF97CDA9355519C (void);
// 0x000000CD System.Void UnityEngine.Purchasing.ISamsungAppsConfiguration::SetMode(UnityEngine.Purchasing.SamsungAppsMode)
// 0x000000CE System.Void UnityEngine.Purchasing.ISamsungAppsExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
// 0x000000CF System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::.ctor()
extern void SamsungAppsStoreExtensions__ctor_m1123DE8CB97E75BEAAA1CF84EB555EC83A51EDA1 (void);
// 0x000000D0 System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::SetAndroidJavaObject(UnityEngine.AndroidJavaObject)
extern void SamsungAppsStoreExtensions_SetAndroidJavaObject_m2B7C3A5B8E21197CBF17BF2BF0AC77AC3059877A (void);
// 0x000000D1 System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::SetMode(UnityEngine.Purchasing.SamsungAppsMode)
extern void SamsungAppsStoreExtensions_SetMode_m51DC42AB8FB1C45097E965E94E9EA5B0FFEF5A01 (void);
// 0x000000D2 System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void SamsungAppsStoreExtensions_RestoreTransactions_mF4207C8253ADA03C3C6BBE74CE9A9CC799E563EC (void);
// 0x000000D3 System.Void UnityEngine.Purchasing.FakeUDPExtension::.ctor()
extern void FakeUDPExtension__ctor_m4FDE880BB2A7D6C0ABD5BFB7B40F180F32756BE8 (void);
// 0x000000D4 System.Void UnityEngine.Purchasing.INativeUDPStore::Initialize(System.Action`2<System.Boolean,System.String>)
// 0x000000D5 System.Void UnityEngine.Purchasing.INativeUDPStore::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String)
// 0x000000D6 System.Void UnityEngine.Purchasing.INativeUDPStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>)
// 0x000000D7 System.Void UnityEngine.Purchasing.INativeUDPStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
// 0x000000D8 System.String UnityEngine.Purchasing.UDP::get_Name()
extern void UDP_get_Name_mF69B95677ED7621A2EF199A0F78EEC66A5C818DA (void);
// 0x000000D9 System.Void UnityEngine.Purchasing.UDPBindings::.ctor()
extern void UDPBindings__ctor_m2D988709CE6878EAFF257704AEC824DCBE20BE36 (void);
// 0x000000DA System.Void UnityEngine.Purchasing.UDPBindings::Initialize(System.Action`2<System.Boolean,System.String>)
extern void UDPBindings_Initialize_m443B77C13867133017328E77780C05674AAC35C3 (void);
// 0x000000DB System.Void UnityEngine.Purchasing.UDPBindings::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String)
extern void UDPBindings_Purchase_mF82FBF9E55CF1CC8FBC6DB21F1758F034B7C9102 (void);
// 0x000000DC System.Void UnityEngine.Purchasing.UDPBindings::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>)
extern void UDPBindings_RetrieveProducts_m3578C6E5327FE10B198100E6624967926D659424 (void);
// 0x000000DD System.Void UnityEngine.Purchasing.UDPBindings::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void UDPBindings_FinishTransaction_m44155D96C3BA8809943AF557FCABC1FB187ADB9D (void);
// 0x000000DE System.Void UnityEngine.Purchasing.UDPBindings::OnInventoryQueried(System.Boolean,System.Object)
extern void UDPBindings_OnInventoryQueried_m6BE11821CBC7DB8665F353EFABD0ECB241149BF1 (void);
// 0x000000DF System.Void UnityEngine.Purchasing.UDPBindings::RetrieveProducts(System.String)
extern void UDPBindings_RetrieveProducts_m97D8CAB8E07DFDEFF2CBB24F9E1D6D4CBD1F716B (void);
// 0x000000E0 System.Void UnityEngine.Purchasing.UDPBindings::Purchase(System.String,System.String)
extern void UDPBindings_Purchase_mEAAE9A064BE2F7F035AA9EDF09C0DA3D443D3167 (void);
// 0x000000E1 System.Void UnityEngine.Purchasing.UDPBindings::FinishTransaction(System.String,System.String)
extern void UDPBindings_FinishTransaction_mA2A28249C1879C67B97A39066B82E57A0970B45F (void);
// 0x000000E2 System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.UDPBindings::StringPropertyToDictionary(System.Object)
extern void UDPBindings_StringPropertyToDictionary_m1FA754240E1093EE0841001B87D5D1EDF2FBA88F (void);
// 0x000000E3 System.Void UnityEngine.Purchasing.UDPImpl::SetNativeStore(UnityEngine.Purchasing.INativeUDPStore)
extern void UDPImpl_SetNativeStore_m5161126F489F498BD30602135B1C794E6C210F18 (void);
// 0x000000E4 System.Void UnityEngine.Purchasing.UDPImpl::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void UDPImpl_Initialize_m89CED479AF4359D6F27A276A71BCD982F642DF13 (void);
// 0x000000E5 System.Void UnityEngine.Purchasing.UDPImpl::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void UDPImpl_RetrieveProducts_mBFBFD7DC073FEB29FFC1AC69DCCCE4F8D74B42BB (void);
// 0x000000E6 System.Void UnityEngine.Purchasing.UDPImpl::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void UDPImpl_Purchase_m30725E65C3B91F88EA809F7E8666329BE7B78844 (void);
// 0x000000E7 System.Void UnityEngine.Purchasing.UDPImpl::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void UDPImpl_FinishTransaction_mB6703A573936BC76098EE8A1A9CA24879335AB3A (void);
// 0x000000E8 System.Void UnityEngine.Purchasing.UDPImpl::DictionaryToStringProperty(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object)
extern void UDPImpl_DictionaryToStringProperty_m05065C0579EB627A0CC0CEB23ADD0D848A79A174 (void);
// 0x000000E9 System.Void UnityEngine.Purchasing.UDPImpl::.ctor()
extern void UDPImpl__ctor_m786390014F866BBCDA7EF239232D3A8A91E3B837 (void);
// 0x000000EA System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m0E4AACDD59FF0DB967DDEB43CF51F99BEA3CAF45 (void);
// 0x000000EB System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::<RetrieveProducts>b__0(System.Boolean,System.String)
extern void U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_mA9C57D7C0C92DF5B0634A83BE650053723877F15 (void);
// 0x000000EC System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::<RetrieveProducts>b__1(System.Boolean,System.String)
extern void U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m5F743F3746D24FA5839204E91BE9CF6D302D6EF4 (void);
// 0x000000ED System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m8EE5A3BDAF22E5C684D66DF7DFD97DE61501B4AA (void);
// 0x000000EE System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::<Purchase>b__0(System.Boolean,System.String)
extern void U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mF4D25EC1526649F267807D16ACC84ED23EA10AAB (void);
// 0x000000EF System.Type UnityEngine.Purchasing.UDPReflectionUtils::GetTypeByName(System.String)
extern void UDPReflectionUtils_GetTypeByName_mF6DF993F506B25CBB22C580F58117D62C7A4E7A0 (void);
// 0x000000F0 System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> UnityEngine.Purchasing.UDPReflectionUtils::GetAllAssemblies()
extern void UDPReflectionUtils_GetAllAssemblies_mC6B8103D7CD7E02646EFC1207D1D6E787F098AB6 (void);
// 0x000000F1 System.Collections.Generic.IEnumerable`1<System.Type> UnityEngine.Purchasing.UDPReflectionUtils::GetTypes(System.Reflection.Assembly)
extern void UDPReflectionUtils_GetTypes_mBBA454F09223FAB67296A168CFBF1AB88731F3AA (void);
// 0x000000F2 System.Void UnityEngine.Purchasing.UDPReflectionUtils::.cctor()
extern void UDPReflectionUtils__cctor_m804A91A8BF370C7CE89FF1D1B207E9C84B6830E2 (void);
// 0x000000F3 System.Void UnityEngine.Purchasing.UDPReflectionUtils_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m4381DDFE65E51CCDF8C8AC5205FA8513AEFCF62D (void);
// 0x000000F4 System.Boolean UnityEngine.Purchasing.UDPReflectionUtils_<>c__DisplayClass6_0::<GetTypeByName>b__0(System.String)
extern void U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_m3DBD9CFA9FFF1DB1DCC81A64FDA4DA68693443ED (void);
// 0x000000F5 System.Type UnityEngine.Purchasing.InventoryInterface::GetClassType()
extern void InventoryInterface_GetClassType_m81C57312DDEA19EAD72BB7997AE10D3582388499 (void);
// 0x000000F6 System.Reflection.MethodInfo UnityEngine.Purchasing.InventoryInterface::GetProductListMethod()
extern void InventoryInterface_GetProductListMethod_mBB1DC022B415E2C8105EC8EBD2219A3E22CB2494 (void);
// 0x000000F7 System.Reflection.MethodInfo UnityEngine.Purchasing.InventoryInterface::GetPurchaseInfoMethod()
extern void InventoryInterface_GetPurchaseInfoMethod_mB07AD57F2307A880D2C8473D2DC557E991440747 (void);
// 0x000000F8 System.Reflection.MethodInfo UnityEngine.Purchasing.InventoryInterface::HasPurchaseMethod()
extern void InventoryInterface_HasPurchaseMethod_m33F95AB422228841212B6E5CC32A196002C5C365 (void);
// 0x000000F9 System.Type UnityEngine.Purchasing.ProductInfoInterface::GetClassType()
extern void ProductInfoInterface_GetClassType_m6629C01C4F30CDC1ACF09562CD59E96DEFDAC29D (void);
// 0x000000FA System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetCurrencyProp()
extern void ProductInfoInterface_GetCurrencyProp_m132EFD864794570BB29C9F5945B620162BF6BFBF (void);
// 0x000000FB System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetDescriptionProp()
extern void ProductInfoInterface_GetDescriptionProp_mE9272BF665C4048DDBEC6AD84823D7AE14C8854C (void);
// 0x000000FC System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetPriceProp()
extern void ProductInfoInterface_GetPriceProp_m28B12B3E523360BE25E94ED14D3BDDF39E13DE09 (void);
// 0x000000FD System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetPriceAmountMicrosProp()
extern void ProductInfoInterface_GetPriceAmountMicrosProp_m2B0CEFC94FFBD9F57A6CB128153B1F617A278B48 (void);
// 0x000000FE System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetProductIdProp()
extern void ProductInfoInterface_GetProductIdProp_m069BE56CED7CA61FACCE2EC3A9FABDA7BE4860FF (void);
// 0x000000FF System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetTitleProp()
extern void ProductInfoInterface_GetTitleProp_m2F339121BE5B8EBA998C8BD75EDECFA4DAE46906 (void);
// 0x00000100 System.Type UnityEngine.Purchasing.StoreServiceInterface::GetClassType()
extern void StoreServiceInterface_GetClassType_m794FAF2427A022C570686CC9BCD097563D447D06 (void);
// 0x00000101 System.Reflection.PropertyInfo UnityEngine.Purchasing.StoreServiceInterface::GetNameProp()
extern void StoreServiceInterface_GetNameProp_m152F863B20E678702E9E8A73FBB5357E5027689D (void);
// 0x00000102 System.String UnityEngine.Purchasing.StoreServiceInterface::GetName()
extern void StoreServiceInterface_GetName_m893615C3E2A2FBDB76970F5C25624455E3F0ED60 (void);
// 0x00000103 System.Type UnityEngine.Purchasing.UdpIapBridgeInterface::GetClassType()
extern void UdpIapBridgeInterface_GetClassType_m53A99233F92901AB76C1A1688AA594621F773E82 (void);
// 0x00000104 System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetInitMethod()
extern void UdpIapBridgeInterface_GetInitMethod_mB6851401BF92B97C1738D9FE3EC90A00794A1554 (void);
// 0x00000105 System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetPurchaseMethod()
extern void UdpIapBridgeInterface_GetPurchaseMethod_mF4186DD5565210444BDADDC872F4292E372211EC (void);
// 0x00000106 System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetRetrieveProductsMethod()
extern void UdpIapBridgeInterface_GetRetrieveProductsMethod_m0E76B8FF655D3D448AFFDC10B925BAABAB24C58B (void);
// 0x00000107 System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetFinishTransactionMethod()
extern void UdpIapBridgeInterface_GetFinishTransactionMethod_mEF79F6E9718FAF23CDD3BEAEAAD079F4B767C673 (void);
// 0x00000108 System.Type UnityEngine.Purchasing.UserInfoInterface::GetClassType()
extern void UserInfoInterface_GetClassType_mEF7F85331D733FB4DF84C7046B453771912D0258 (void);
// 0x00000109 System.Void UnityEngine.Purchasing.AppleStoreImpl::.ctor(Uniject.IUtil)
extern void AppleStoreImpl__ctor_m15BD74B3A070C736639B29EFA28C9BBA6343DA6C (void);
// 0x0000010A System.Void UnityEngine.Purchasing.AppleStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeAppleStore)
extern void AppleStoreImpl_SetNativeStore_m42F96F51F93AC97A4C137CC7CD76252A310DF293 (void);
// 0x0000010B System.Void UnityEngine.Purchasing.AppleStoreImpl::OnProductsRetrieved(System.String)
extern void AppleStoreImpl_OnProductsRetrieved_m7408164517CA7AA34712BCC6CACB9A5FEA1084C4 (void);
// 0x0000010C System.Void UnityEngine.Purchasing.AppleStoreImpl::RestoreTransactions(System.Action`1<System.Boolean>)
extern void AppleStoreImpl_RestoreTransactions_m0BFB7F4688AD2E50DCC1A200ADF3CDB51595E1B7 (void);
// 0x0000010D System.Void UnityEngine.Purchasing.AppleStoreImpl::RegisterPurchaseDeferredListener(System.Action`1<UnityEngine.Purchasing.Product>)
extern void AppleStoreImpl_RegisterPurchaseDeferredListener_m20B0CD2B3C2AA1DFD3BE335E3C69BFDC530F48FC (void);
// 0x0000010E System.Void UnityEngine.Purchasing.AppleStoreImpl::OnPurchaseDeferred(System.String)
extern void AppleStoreImpl_OnPurchaseDeferred_m01AD523AF2C2957682BDF80000B0B30A62978D11 (void);
// 0x0000010F System.Void UnityEngine.Purchasing.AppleStoreImpl::OnPromotionalPurchaseAttempted(System.String)
extern void AppleStoreImpl_OnPromotionalPurchaseAttempted_m0AE06FDBCFDFE15DC593FD14D046660ACEE4A66E (void);
// 0x00000110 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnTransactionsRestoredSuccess()
extern void AppleStoreImpl_OnTransactionsRestoredSuccess_m650434E104C4283533AA4C07818E1D7B02732425 (void);
// 0x00000111 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnTransactionsRestoredFail(System.String)
extern void AppleStoreImpl_OnTransactionsRestoredFail_m02C0A69AD9BD599629E77AC128F1D442CD5063FD (void);
// 0x00000112 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnAppReceiptRetrieved(System.String)
extern void AppleStoreImpl_OnAppReceiptRetrieved_m5E83615AF918436F45EBA5746EDC0FAFE4C2B9BD (void);
// 0x00000113 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnAppReceiptRefreshedFailed()
extern void AppleStoreImpl_OnAppReceiptRefreshedFailed_m22DF2739D845B95C613D2F048232C8798F568AB9 (void);
// 0x00000114 System.Void UnityEngine.Purchasing.AppleStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
extern void AppleStoreImpl_MessageCallback_mE99DF09282C9C88D2FE5FD235ECF603C7E856270 (void);
// 0x00000115 System.Void UnityEngine.Purchasing.AppleStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
extern void AppleStoreImpl_ProcessMessage_m25AE34743B4C9C1FE97E6215479334F610C45867 (void);
// 0x00000116 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnPurchaseSucceeded(System.String,System.String,System.String)
extern void AppleStoreImpl_OnPurchaseSucceeded_m7F9CBD85F8332D7ED73456A8D816ABEA9A4DF824 (void);
// 0x00000117 UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.AppleStoreImpl::getAppleReceiptFromBase64String(System.String)
extern void AppleStoreImpl_getAppleReceiptFromBase64String_m689E35915B81B0FF4C75BBAF8B81EE2BFB05B680 (void);
// 0x00000118 System.Boolean UnityEngine.Purchasing.AppleStoreImpl::isValidPurchaseState(UnityEngine.Purchasing.Security.AppleReceipt,System.String)
extern void AppleStoreImpl_isValidPurchaseState_m5BAD2538C43EBA1636DD79C81EA924BF6242742B (void);
// 0x00000119 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_m924E0EF301F4EDAA63F908BE31DAFD95AE57FAC0 (void);
// 0x0000011A System.Boolean UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass24_0::<OnProductsRetrieved>b__0(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
extern void U3CU3Ec__DisplayClass24_0_U3COnProductsRetrievedU3Eb__0_mF54737018F6B801CE4FD18661A2A28F046BD6354 (void);
// 0x0000011B System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c::.cctor()
extern void U3CU3Ec__cctor_m9297400E2F0C50745C4534FA0FE152B2645F122D (void);
// 0x0000011C System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c::.ctor()
extern void U3CU3Ec__ctor_m3255B2863A1D0B926ADB9F6FE812725FDCE91757 (void);
// 0x0000011D System.Int32 UnityEngine.Purchasing.AppleStoreImpl_<>c::<OnProductsRetrieved>b__24_1(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
extern void U3CU3Ec_U3COnProductsRetrievedU3Eb__24_1_m5A76F30A38D0DEB038A0916A39A0D944E36EAF31 (void);
// 0x0000011E System.Int32 UnityEngine.Purchasing.AppleStoreImpl_<>c::<isValidPurchaseState>b__41_1(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
extern void U3CU3Ec_U3CisValidPurchaseStateU3Eb__41_1_mE8D109157E2C0741BCFF12CF8A108B8D746823FD (void);
// 0x0000011F System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0::.ctor()
extern void U3CU3Ec__DisplayClass37_0__ctor_m820CF2EEAE8738840668FDD65B1F0AAF8E10CF65 (void);
// 0x00000120 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0::<MessageCallback>b__0()
extern void U3CU3Ec__DisplayClass37_0_U3CMessageCallbackU3Eb__0_mFECC25ED33E9D1CBE3F03DBA736E8A92C81C6263 (void);
// 0x00000121 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass41_0::.ctor()
extern void U3CU3Ec__DisplayClass41_0__ctor_m38E279135979DFDB27447DA1D33BF933A75CC71E (void);
// 0x00000122 System.Boolean UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass41_0::<isValidPurchaseState>b__0(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
extern void U3CU3Ec__DisplayClass41_0_U3CisValidPurchaseStateU3Eb__0_m39FFBB0A657F6A31BD0B5818FCE969BF47902EC0 (void);
// 0x00000123 System.Void UnityEngine.Purchasing.FakeAppleConfiguation::.ctor()
extern void FakeAppleConfiguation__ctor_m608B08B7FD2D1466F70B580BF59CE365F8815A03 (void);
// 0x00000124 System.Void UnityEngine.Purchasing.FakeAppleExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void FakeAppleExtensions_RestoreTransactions_m930642FE40D412D4A7BAC8A15BF670D233255C84 (void);
// 0x00000125 System.Void UnityEngine.Purchasing.FakeAppleExtensions::RegisterPurchaseDeferredListener(System.Action`1<UnityEngine.Purchasing.Product>)
extern void FakeAppleExtensions_RegisterPurchaseDeferredListener_m51970DFAB32A8BEC7D6EEFD62FE116886F162EE6 (void);
// 0x00000126 System.Void UnityEngine.Purchasing.FakeAppleExtensions::.ctor()
extern void FakeAppleExtensions__ctor_m9F84BE3E3BA9B4D9024C8F4DC5B40DB337B1B114 (void);
// 0x00000127 System.Void UnityEngine.Purchasing.IAppleExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
// 0x00000128 System.Void UnityEngine.Purchasing.IAppleExtensions::RegisterPurchaseDeferredListener(System.Action`1<UnityEngine.Purchasing.Product>)
// 0x00000129 UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.INativeStoreProvider::GetAndroidStore(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.AppStore,UnityEngine.Purchasing.Extension.IPurchasingBinder,Uniject.IUtil)
// 0x0000012A UnityEngine.Purchasing.INativeAppleStore UnityEngine.Purchasing.INativeStoreProvider::GetStorekit(UnityEngine.Purchasing.IUnityCallback)
// 0x0000012B UnityEngine.Purchasing.INativeFacebookStore UnityEngine.Purchasing.INativeStoreProvider::GetFacebookStore()
// 0x0000012C System.Void UnityEngine.Purchasing.IStoreInternal::SetModule(UnityEngine.Purchasing.StandardPurchasingModule)
// 0x0000012D System.Boolean UnityEngine.Purchasing.JSONStore::get_disableStoreCatalog()
extern void JSONStore_get_disableStoreCatalog_m196EDCAD4174BAE450CCBC0B8C91D76CC45A4F2F (void);
// 0x0000012E System.Void UnityEngine.Purchasing.JSONStore::.ctor()
extern void JSONStore__ctor_m691B43840B1C303C23844D91F5C9516735355D00 (void);
// 0x0000012F System.Void UnityEngine.Purchasing.JSONStore::.ctor(System.String)
extern void JSONStore__ctor_mDC8A0FD3D421A1A89A46082FA1268768667C1B1E (void);
// 0x00000130 System.Void UnityEngine.Purchasing.JSONStore::SetNativeStore(UnityEngine.Purchasing.INativeStore)
extern void JSONStore_SetNativeStore_m1E863AA67D539BD7826A873BF878E7A1E103A7E2 (void);
// 0x00000131 System.Void UnityEngine.Purchasing.JSONStore::UnityEngine.Purchasing.IStoreInternal.SetModule(UnityEngine.Purchasing.StandardPurchasingModule)
extern void JSONStore_UnityEngine_Purchasing_IStoreInternal_SetModule_m9D831B0FA47C53AC6AA97EDCAF7DDC83BE944EA6 (void);
// 0x00000132 System.Void UnityEngine.Purchasing.JSONStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void JSONStore_Initialize_m9BF93C3E7AF32E1C77D03DC065F5D7D16705C105 (void);
// 0x00000133 System.Void UnityEngine.Purchasing.JSONStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void JSONStore_RetrieveProducts_m5ADD581F571881E2FE0838AA7EFFE7E097A72E9F (void);
// 0x00000134 System.Void UnityEngine.Purchasing.JSONStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void JSONStore_Purchase_m8A1B8F4BA8DBF28FB95DAE577DD021717A880695 (void);
// 0x00000135 System.Void UnityEngine.Purchasing.JSONStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void JSONStore_FinishTransaction_mD0EEBB135A0D1790EC2363D24E7F5E51BDEAA421 (void);
// 0x00000136 System.Void UnityEngine.Purchasing.JSONStore::OnSetupFailed(System.String)
extern void JSONStore_OnSetupFailed_m368128E0856B8F26AC606AF82CD6D46609C05714 (void);
// 0x00000137 System.Void UnityEngine.Purchasing.JSONStore::OnProductsRetrieved(System.String)
extern void JSONStore_OnProductsRetrieved_m633C8BD4D73C8B95A271D7F0967F13D69A3F6DD1 (void);
// 0x00000138 System.Void UnityEngine.Purchasing.JSONStore::OnPurchaseSucceeded(System.String,System.String,System.String)
extern void JSONStore_OnPurchaseSucceeded_mB0B35DFBF5F04973CCA3179EF994DAE49465DA36 (void);
// 0x00000139 System.Void UnityEngine.Purchasing.JSONStore::SendPurchaseSucceededEvent(System.String,System.String,System.String)
extern void JSONStore_SendPurchaseSucceededEvent_m33E6E46B8370513DBE4684C50C2B0FE880CB4A1E (void);
// 0x0000013A System.Void UnityEngine.Purchasing.JSONStore::OnPurchaseFailed(System.String)
extern void JSONStore_OnPurchaseFailed_mAB9B6F46AB4D5244717ECEF57E7C2A436A887CDE (void);
// 0x0000013B System.Void UnityEngine.Purchasing.JSONStore::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription,System.String)
extern void JSONStore_OnPurchaseFailed_mE4EBBF29742BBB0694C22ED3DFFBD476C84D143D (void);
// 0x0000013C System.Void UnityEngine.Purchasing.JSONStore::SendPurchaseFailedEvent(UnityEngine.Purchasing.Extension.PurchaseFailureDescription,System.String)
extern void JSONStore_SendPurchaseFailedEvent_m753D9ACFCC3FFFA582E0085C5EEF709458ABA8CE (void);
// 0x0000013D UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONStore::GetLastPurchaseFailureDescription()
extern void JSONStore_GetLastPurchaseFailureDescription_mCC028F2ACBA0C3753370DB41CD3D03E7EAD72FB0 (void);
// 0x0000013E UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.JSONStore::GetLastStoreSpecificPurchaseErrorCode()
extern void JSONStore_GetLastStoreSpecificPurchaseErrorCode_m49571F3ED9C150573CA77E24A3EC0760A08F7EB9 (void);
// 0x0000013F UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.JSONStore::ParseStoreSpecificPurchaseErrorCode(System.String)
extern void JSONStore_ParseStoreSpecificPurchaseErrorCode_mFF68B82A59B56DACA71199B49DE318F8150056EC (void);
// 0x00000140 UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.NativeStoreProvider::GetAndroidStore(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.AppStore,UnityEngine.Purchasing.Extension.IPurchasingBinder,Uniject.IUtil)
extern void NativeStoreProvider_GetAndroidStore_m2DF39C205E630E4C457638E72CF1F8A7770CC68E (void);
// 0x00000141 UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.NativeStoreProvider::GetAndroidStoreHelper(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.AppStore,UnityEngine.Purchasing.Extension.IPurchasingBinder,Uniject.IUtil)
extern void NativeStoreProvider_GetAndroidStoreHelper_m78486D193249F6BE6C5FD225E33F173BD79EBC80 (void);
// 0x00000142 UnityEngine.Purchasing.INativeAppleStore UnityEngine.Purchasing.NativeStoreProvider::GetStorekit(UnityEngine.Purchasing.IUnityCallback)
extern void NativeStoreProvider_GetStorekit_mC7B53021FEC5FE6D80C9DA6D2F92208D1003874D (void);
// 0x00000143 UnityEngine.Purchasing.INativeFacebookStore UnityEngine.Purchasing.NativeStoreProvider::GetFacebookStore()
extern void NativeStoreProvider_GetFacebookStore_m5C785364EABBE05498919B3E5AE0DB46CD157E50 (void);
// 0x00000144 System.Void UnityEngine.Purchasing.NativeStoreProvider::.ctor()
extern void NativeStoreProvider__ctor_m76EE09D0D5A48F6349DFEE0E63F5C8213EEFBFF1 (void);
// 0x00000145 UnityEngine.Purchasing.CloudCatalogImpl UnityEngine.Purchasing.CloudCatalogImpl::CreateInstance(System.String)
extern void CloudCatalogImpl_CreateInstance_m6C5FE7386487B392773677FA90DA57B7B4348E33 (void);
// 0x00000146 System.Void UnityEngine.Purchasing.CloudCatalogImpl::.ctor(UnityEngine.Purchasing.IAsyncWebUtil,System.String,UnityEngine.ILogger,System.String,System.String)
extern void CloudCatalogImpl__ctor_mF8A9753A51C15C54AE4A5BEDAB1F5AB758BEDC3E (void);
// 0x00000147 System.Void UnityEngine.Purchasing.CloudCatalogImpl::FetchProducts(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern void CloudCatalogImpl_FetchProducts_mC36E0E348C6BAF3BF1EFB1966F1E1F5FA33A3ABA (void);
// 0x00000148 System.Void UnityEngine.Purchasing.CloudCatalogImpl::FetchProducts(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>,System.Int32)
extern void CloudCatalogImpl_FetchProducts_mD1864A6540D6F8CCFEB19AB50D6BDAC19BCE4DBB (void);
// 0x00000149 System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.CloudCatalogImpl::ParseProductsFromJSON(System.String,System.String)
extern void CloudCatalogImpl_ParseProductsFromJSON_m437D10D9BEA10E04D1D90E9C68F37442541322B9 (void);
// 0x0000014A System.String UnityEngine.Purchasing.CloudCatalogImpl::CamelCaseToSnakeCase(System.String)
extern void CloudCatalogImpl_CamelCaseToSnakeCase_mBADB1DD3AAC538A34F54C64B38E35F01C0273C11 (void);
// 0x0000014B System.Void UnityEngine.Purchasing.CloudCatalogImpl::TryPersistCatalog(System.String)
extern void CloudCatalogImpl_TryPersistCatalog_mE6B9244EB1A2FC9795AA6B0686812231581065CD (void);
// 0x0000014C System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.CloudCatalogImpl::TryLoadCachedCatalog()
extern void CloudCatalogImpl_TryLoadCachedCatalog_m4B6FD79481CFBFB78CE5EB52A56BFBA717E293D1 (void);
// 0x0000014D System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::.ctor()
extern void U3CU3Ec__DisplayClass10_0__ctor_m3D660F98E0C25483184222130CC7A3BD4BC5BE50 (void);
// 0x0000014E System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<FetchProducts>b__0(System.String)
extern void U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__0_mCB1A6AFD33F1734CCBB3C0C95031C75FAAC5B70C (void);
// 0x0000014F System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<FetchProducts>b__1(System.String)
extern void U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__1_m89603244B362F866035D229398B82C50568FBED1 (void);
// 0x00000150 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<FetchProducts>b__2()
extern void U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__2_m6AC2B6757044BD7CABDEBEA2437EE85149A201A3 (void);
// 0x00000151 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c::.cctor()
extern void U3CU3Ec__cctor_mA01C033C107146CD72784741C4794F0FFF6EC935 (void);
// 0x00000152 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c::.ctor()
extern void U3CU3Ec__ctor_m55342727C50326DF6E0359A144C58FD22D568FE4 (void);
// 0x00000153 System.String UnityEngine.Purchasing.CloudCatalogImpl_<>c::<CamelCaseToSnakeCase>b__12_0(System.Char,System.Int32)
extern void U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_0_mE823F64A4CE6B091709CE5810E7AA8984EA61F61 (void);
// 0x00000154 System.String UnityEngine.Purchasing.CloudCatalogImpl_<>c::<CamelCaseToSnakeCase>b__12_1(System.String,System.String)
extern void U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_1_mF04B1601090191A7C6E9C4B97CECAFF3ABEEF463 (void);
// 0x00000155 System.Void UnityEngine.Purchasing.FakeManagedStoreConfig::.ctor()
extern void FakeManagedStoreConfig__ctor_m8E7031E72648CA7004DB67B34B8F6D47E780AC1B (void);
// 0x00000156 System.Void UnityEngine.Purchasing.FakeManagedStoreExtensions::.ctor()
extern void FakeManagedStoreExtensions__ctor_m22D2FEBF5FC1A5BE2E1B829CE231884B3F0F4747 (void);
// 0x00000157 UnityEngine.Purchasing.StoreCatalogImpl UnityEngine.Purchasing.StoreCatalogImpl::CreateInstance(System.String,System.String,UnityEngine.Purchasing.IAsyncWebUtil,UnityEngine.ILogger,Uniject.IUtil,UnityEngine.Purchasing.JSONStore)
extern void StoreCatalogImpl_CreateInstance_mCDDABD205A9B062BD13B54CC1982E9E382B0D11F (void);
// 0x00000158 System.Void UnityEngine.Purchasing.StoreCatalogImpl::.ctor(UnityEngine.Purchasing.IAsyncWebUtil,UnityEngine.ILogger,System.String,System.String,UnityEngine.Purchasing.FileReference)
extern void StoreCatalogImpl__ctor_mD3DF28EDF6D90868A84232B33808CB9B009FFE5A (void);
// 0x00000159 System.Boolean UnityEngine.Purchasing.AdsIPC::InitAdsIPC(Uniject.IUtil)
extern void AdsIPC_InitAdsIPC_m0A0D1888FDEE69025D45B855A21DAD16158428F9 (void);
// 0x0000015A System.Boolean UnityEngine.Purchasing.AdsIPC::VerifyMethodExists()
extern void AdsIPC_VerifyMethodExists_m4A11DABDAD001A5564C630E739A6B8ED45AD165F (void);
// 0x0000015B System.Void UnityEngine.Purchasing.AdsIPC::.cctor()
extern void AdsIPC__cctor_m591997BF7D1A5BE5B96F71505CDC940F13AF411C (void);
// 0x0000015C System.Void UnityEngine.Purchasing.EventQueue::.ctor(Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil)
extern void EventQueue__ctor_m1D5A260EAF9E401229B6F2A36DE699E59D9116F2 (void);
// 0x0000015D UnityEngine.Purchasing.EventQueue UnityEngine.Purchasing.EventQueue::Instance(Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil)
extern void EventQueue_Instance_m0FE87196873E5C5CD4D2F1405735BB9AD6FC4626 (void);
// 0x0000015E System.Void UnityEngine.Purchasing.EventQueue::SetAdsUrl(System.String)
extern void EventQueue_SetAdsUrl_m4B6521D96777DB2DDBC37D052A926606DADDB4BE (void);
// 0x0000015F System.Void UnityEngine.Purchasing.EventQueue::SetIapUrl(System.String)
extern void EventQueue_SetIapUrl_m9C2B08961951B2586C5B2C743E315039431F9EFC (void);
// 0x00000160 System.Void UnityEngine.Purchasing.AsyncWebUtil::Get(System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Int32)
extern void AsyncWebUtil_Get_m48F75AAAA24CB44E488FF544052D6618B3269314 (void);
// 0x00000161 System.Void UnityEngine.Purchasing.AsyncWebUtil::Post(System.String,System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Int32)
extern void AsyncWebUtil_Post_mD0DAEA8939EE14D2E9CB7599BF53076FEC7BCDEC (void);
// 0x00000162 System.Collections.IEnumerator UnityEngine.Purchasing.AsyncWebUtil::Process(UnityEngine.WWW,System.Action`1<System.String>,System.Action`1<System.String>,System.Int32)
extern void AsyncWebUtil_Process_m83D9D8533F6BCE51B23FAF9F4F0F3F8B36ED33E1 (void);
// 0x00000163 System.Void UnityEngine.Purchasing.AsyncWebUtil::Schedule(System.Action,System.Int32)
extern void AsyncWebUtil_Schedule_mA2006053212C1664D91373955FE7F0AF9967E894 (void);
// 0x00000164 System.Collections.IEnumerator UnityEngine.Purchasing.AsyncWebUtil::DoInvoke(System.Action,System.Int32)
extern void AsyncWebUtil_DoInvoke_mB4AE0EC4FC52D62F7B59A0841C4A684B83557B2D (void);
// 0x00000165 System.Void UnityEngine.Purchasing.AsyncWebUtil::.ctor()
extern void AsyncWebUtil__ctor_m5FF0C48F61D18E408BCA8B1DA82D737B5E0B0BF2 (void);
// 0x00000166 System.Void UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::.ctor(System.Int32)
extern void U3CProcessU3Ed__2__ctor_m280327C8078A66D4F4E5310D477A1D5981558CCD (void);
// 0x00000167 System.Void UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.IDisposable.Dispose()
extern void U3CProcessU3Ed__2_System_IDisposable_Dispose_m2017F8EC92BBAA2B987B0E10991292130BBA466A (void);
// 0x00000168 System.Boolean UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::MoveNext()
extern void U3CProcessU3Ed__2_MoveNext_mE5F4091F265EC2F456AC95C95CC58CD7859D545A (void);
// 0x00000169 System.Object UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CProcessU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m152D4F0EA14AAC2AC7A30154267DBB7E0D8224F7 (void);
// 0x0000016A System.Void UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.Collections.IEnumerator.Reset()
extern void U3CProcessU3Ed__2_System_Collections_IEnumerator_Reset_mF87F0C2C869ED55776A6807889272149DBCDE6ED (void);
// 0x0000016B System.Object UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.Collections.IEnumerator.get_Current()
extern void U3CProcessU3Ed__2_System_Collections_IEnumerator_get_Current_mCF829C822E7BAC855A7D217570A278338401DD62 (void);
// 0x0000016C System.Void UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::.ctor(System.Int32)
extern void U3CDoInvokeU3Ed__4__ctor_m635C7EEFBA67FAAA5FFC7D7961A0C6B3CDF4947F (void);
// 0x0000016D System.Void UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.IDisposable.Dispose()
extern void U3CDoInvokeU3Ed__4_System_IDisposable_Dispose_m78653CFA392B88A1B908C77EBBB651E403907AA0 (void);
// 0x0000016E System.Boolean UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::MoveNext()
extern void U3CDoInvokeU3Ed__4_MoveNext_m717F2F79FC0574801C320DD0063CBEF517F245CF (void);
// 0x0000016F System.Object UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDoInvokeU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA5E7D8A51181DD8957A94C99972A55A57548CEC8 (void);
// 0x00000170 System.Void UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.Collections.IEnumerator.Reset()
extern void U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_Reset_m9D2A457EBD872A098F80E1FC0B41A22AF448AE83 (void);
// 0x00000171 System.Object UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_get_Current_mDFB764619AAC1EA8D08CEC678888B251D91D4761 (void);
// 0x00000172 System.Void UnityEngine.Purchasing.IAsyncWebUtil::Get(System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Int32)
// 0x00000173 System.Void UnityEngine.Purchasing.IAsyncWebUtil::Schedule(System.Action,System.Int32)
// 0x00000174 System.String UnityEngine.Purchasing.QueryHelper::ToQueryString(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void QueryHelper_ToQueryString_m4DB52CBE3D4E46BD50BC2D98CFC55F08E31573C2 (void);
// 0x00000175 System.Void UnityEngine.Purchasing.Price::OnBeforeSerialize()
extern void Price_OnBeforeSerialize_mF5786372919FFC962D38CF72828EEBE6D73ADB53 (void);
// 0x00000176 System.Void UnityEngine.Purchasing.Price::OnAfterDeserialize()
extern void Price_OnAfterDeserialize_m1221186D14BB604A4E57BC0D0846A785920917C2 (void);
// 0x00000177 System.Void UnityEngine.Purchasing.Price::.ctor()
extern void Price__ctor_mE33FEC5CD5B7B9B42F2A6398D87484D44B75991A (void);
// 0x00000178 System.String UnityEngine.Purchasing.LocalizedProductDescription::get_Title()
extern void LocalizedProductDescription_get_Title_mBBD2177698E1FCBEBB5638F4102F4EDACEE9B9C8 (void);
// 0x00000179 System.String UnityEngine.Purchasing.LocalizedProductDescription::get_Description()
extern void LocalizedProductDescription_get_Description_mF6EEEFE1C01109F9018D1C639B6320901A696984 (void);
// 0x0000017A System.String UnityEngine.Purchasing.LocalizedProductDescription::DecodeNonLatinCharacters(System.String)
extern void LocalizedProductDescription_DecodeNonLatinCharacters_mB2618050BA68BF4FCD6C9A16A239F2577F02720A (void);
// 0x0000017B System.Void UnityEngine.Purchasing.LocalizedProductDescription::.ctor()
extern void LocalizedProductDescription__ctor_m04BCB98096C258B35A63DE178D301352F197060C (void);
// 0x0000017C System.Void UnityEngine.Purchasing.LocalizedProductDescription_<>c::.cctor()
extern void U3CU3Ec__cctor_m6CA258D09CC16429B53F9642A087842AADFB65C8 (void);
// 0x0000017D System.Void UnityEngine.Purchasing.LocalizedProductDescription_<>c::.ctor()
extern void U3CU3Ec__ctor_mBEDA65BA87FA6E78F474CF94FCA175CACEED49A6 (void);
// 0x0000017E System.String UnityEngine.Purchasing.LocalizedProductDescription_<>c::<DecodeNonLatinCharacters>b__11_0(System.Text.RegularExpressions.Match)
extern void U3CU3Ec_U3CDecodeNonLatinCharactersU3Eb__11_0_m0B1A22E4B48F0875FFDB71AE3DA78E4E0DF8A1A6 (void);
// 0x0000017F System.String UnityEngine.Purchasing.ProductCatalogPayout::get_typeString()
extern void ProductCatalogPayout_get_typeString_m7EB27B665D1B7529B46EB59EE162920FE1A66297 (void);
// 0x00000180 System.String UnityEngine.Purchasing.ProductCatalogPayout::get_subtype()
extern void ProductCatalogPayout_get_subtype_mD976433C4E4160F17741420843C933B46A9D2B3C (void);
// 0x00000181 System.Double UnityEngine.Purchasing.ProductCatalogPayout::get_quantity()
extern void ProductCatalogPayout_get_quantity_mCA6C834EEF2DA4F7672AF2485C6B20FD15D37B86 (void);
// 0x00000182 System.String UnityEngine.Purchasing.ProductCatalogPayout::get_data()
extern void ProductCatalogPayout_get_data_mD6473846E8425BAAB2152CC02ABC42E907CB5647 (void);
// 0x00000183 System.Void UnityEngine.Purchasing.ProductCatalogPayout::.ctor()
extern void ProductCatalogPayout__ctor_m3766919F25A5C245C48F418420738354AC23AF35 (void);
// 0x00000184 System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::get_Payouts()
extern void ProductCatalogItem_get_Payouts_mBF6C453E0564A4E544990282532131AE5EA177F4 (void);
// 0x00000185 System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::get_allStoreIDs()
extern void ProductCatalogItem_get_allStoreIDs_m2BAF9A4FB57A7E240C5052DEF3226EF86291E1EB (void);
// 0x00000186 System.Void UnityEngine.Purchasing.ProductCatalogItem::.ctor()
extern void ProductCatalogItem__ctor_m56F2DCEAFDA230EC3A97806A42A5DF7820BE1A10 (void);
// 0x00000187 System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allProducts()
extern void ProductCatalog_get_allProducts_mF8FE704F2C0726F1B32C25FE5679FD897CFEFE82 (void);
// 0x00000188 System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allValidProducts()
extern void ProductCatalog_get_allValidProducts_mF93A6FC38F798762A137CCA4AAC59A2A66E5A829 (void);
// 0x00000189 System.Void UnityEngine.Purchasing.ProductCatalog::Initialize()
extern void ProductCatalog_Initialize_m04CBA0A33C63C8A8D106CDA709D9F2D654EA7B1B (void);
// 0x0000018A System.Void UnityEngine.Purchasing.ProductCatalog::Initialize(UnityEngine.Purchasing.IProductCatalogImpl)
extern void ProductCatalog_Initialize_m325899906228EDD7EF5115EB816D1757637647CB (void);
// 0x0000018B System.Boolean UnityEngine.Purchasing.ProductCatalog::IsEmpty()
extern void ProductCatalog_IsEmpty_m788C8660BCB1E9D357838D5660226C10C0F5F96C (void);
// 0x0000018C UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::Deserialize(System.String)
extern void ProductCatalog_Deserialize_m9D8113139EC506470576EE8DDD4B7491DB7CDE6D (void);
// 0x0000018D UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::FromTextAsset(UnityEngine.TextAsset)
extern void ProductCatalog_FromTextAsset_mBE7B0393C64CD67538DA86BAFF2519B95CF74563 (void);
// 0x0000018E UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::LoadDefaultCatalog()
extern void ProductCatalog_LoadDefaultCatalog_m41A667039FF71AD74C993747247E5BB84DA3942F (void);
// 0x0000018F System.Void UnityEngine.Purchasing.ProductCatalog::.ctor()
extern void ProductCatalog__ctor_m9CB354157A7BD920AA6951F4D44B03F1EE6DF97F (void);
// 0x00000190 System.Void UnityEngine.Purchasing.ProductCatalog_<>c::.cctor()
extern void U3CU3Ec__cctor_m203C882EB65ADD17FB129C78597F20D298CE0446 (void);
// 0x00000191 System.Void UnityEngine.Purchasing.ProductCatalog_<>c::.ctor()
extern void U3CU3Ec__ctor_m977D020280DF8DA25C6CFA49D60A5616FB08B392 (void);
// 0x00000192 System.Boolean UnityEngine.Purchasing.ProductCatalog_<>c::<get_allValidProducts>b__8_0(UnityEngine.Purchasing.ProductCatalogItem)
extern void U3CU3Ec_U3Cget_allValidProductsU3Eb__8_0_mE652F496736348EA60E1E9B56DCAE4FB663DE046 (void);
// 0x00000193 UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.IProductCatalogImpl::LoadDefaultCatalog()
// 0x00000194 UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalogImpl::LoadDefaultCatalog()
extern void ProductCatalogImpl_LoadDefaultCatalog_m9433446FE01511F2CB9AD144DA9D79A1C4B12AA8 (void);
// 0x00000195 System.Void UnityEngine.Purchasing.ProductCatalogImpl::.ctor()
extern void ProductCatalogImpl__ctor_m0F6174A714BCA985D55D402D370D5CF34FA49BCF (void);
// 0x00000196 System.String UnityEngine.Purchasing.ProfileData::get_AppId()
extern void ProfileData_get_AppId_m21C5CE0DA91C84CE31F3FD8C4CA5308BF5EB13C8 (void);
// 0x00000197 System.Void UnityEngine.Purchasing.ProfileData::set_AppId(System.String)
extern void ProfileData_set_AppId_m6C3E92D27D678CD5F147B8CFD95C134120A2569A (void);
// 0x00000198 System.String UnityEngine.Purchasing.ProfileData::get_UserId()
extern void ProfileData_get_UserId_m0E105FC0000E898DEE9527C69BB0A51D131763E4 (void);
// 0x00000199 System.Void UnityEngine.Purchasing.ProfileData::set_UserId(System.String)
extern void ProfileData_set_UserId_mB2656ADB1B98F5AB93A030E6BD0641A6877F69CF (void);
// 0x0000019A System.UInt64 UnityEngine.Purchasing.ProfileData::get_SessionId()
extern void ProfileData_get_SessionId_m7DE207C6F8996A679181D0C22F5A4C4A63703B6A (void);
// 0x0000019B System.Void UnityEngine.Purchasing.ProfileData::set_SessionId(System.UInt64)
extern void ProfileData_set_SessionId_mD85EB399DBF8A6C26E2C41DC2A38749CAB613A4A (void);
// 0x0000019C System.String UnityEngine.Purchasing.ProfileData::get_Platform()
extern void ProfileData_get_Platform_m552A623374A79A4B7529B31DD99C83F89DEB9C62 (void);
// 0x0000019D System.Void UnityEngine.Purchasing.ProfileData::set_Platform(System.String)
extern void ProfileData_set_Platform_m8199E98D42035B2E0973553F8313EA5BD7F1F5F5 (void);
// 0x0000019E System.Int32 UnityEngine.Purchasing.ProfileData::get_PlatformId()
extern void ProfileData_get_PlatformId_m04193677476727E1233201F59C2C049DB02AECF1 (void);
// 0x0000019F System.Void UnityEngine.Purchasing.ProfileData::set_PlatformId(System.Int32)
extern void ProfileData_set_PlatformId_mFE467ECE584982F28A955182D93902440C06D073 (void);
// 0x000001A0 System.String UnityEngine.Purchasing.ProfileData::get_SdkVer()
extern void ProfileData_get_SdkVer_mBF50A519554B01FADC52DEE026822C320FDA179B (void);
// 0x000001A1 System.Void UnityEngine.Purchasing.ProfileData::set_SdkVer(System.String)
extern void ProfileData_set_SdkVer_m7F788A9BD6545DC0429B3685233A393E8ABB252C (void);
// 0x000001A2 System.String UnityEngine.Purchasing.ProfileData::get_OsVer()
extern void ProfileData_get_OsVer_m1B33B8020E98C0423A55287655B387F4796BD47C (void);
// 0x000001A3 System.Void UnityEngine.Purchasing.ProfileData::set_OsVer(System.String)
extern void ProfileData_set_OsVer_m49170EFD3B4128DBCE2439B6EEE6C2FACDEE4E51 (void);
// 0x000001A4 System.Int32 UnityEngine.Purchasing.ProfileData::get_ScreenWidth()
extern void ProfileData_get_ScreenWidth_mF6DC74138660465BFE7A6CD7D0530CFB9010D115 (void);
// 0x000001A5 System.Void UnityEngine.Purchasing.ProfileData::set_ScreenWidth(System.Int32)
extern void ProfileData_set_ScreenWidth_mA0D6CE340732A08FC1C38D5F9EB567050272234E (void);
// 0x000001A6 System.Int32 UnityEngine.Purchasing.ProfileData::get_ScreenHeight()
extern void ProfileData_get_ScreenHeight_mF36A381BB06E10CE79D2A89D29D9C59FE59F50A7 (void);
// 0x000001A7 System.Void UnityEngine.Purchasing.ProfileData::set_ScreenHeight(System.Int32)
extern void ProfileData_set_ScreenHeight_mA18A65FCBF5B8E2880D07F2042FE626590C6DEDE (void);
// 0x000001A8 System.Single UnityEngine.Purchasing.ProfileData::get_ScreenDpi()
extern void ProfileData_get_ScreenDpi_m8C3FD88FD3E62EB4FF37746BF52CB6DD310B9F8A (void);
// 0x000001A9 System.Void UnityEngine.Purchasing.ProfileData::set_ScreenDpi(System.Single)
extern void ProfileData_set_ScreenDpi_m8D2F1B871564193C8AF1D3E3428D1484F1462804 (void);
// 0x000001AA System.String UnityEngine.Purchasing.ProfileData::get_ScreenOrientation()
extern void ProfileData_get_ScreenOrientation_m660B26A160DA490F032C8564793C5463B12C42D2 (void);
// 0x000001AB System.Void UnityEngine.Purchasing.ProfileData::set_ScreenOrientation(System.String)
extern void ProfileData_set_ScreenOrientation_m76ADDB29CED459FA8F7C3A9CE8EDCF65B4156ECB (void);
// 0x000001AC System.String UnityEngine.Purchasing.ProfileData::get_DeviceId()
extern void ProfileData_get_DeviceId_m41A459592A7B0905B708A2A209F9B5C9E471512F (void);
// 0x000001AD System.Void UnityEngine.Purchasing.ProfileData::set_DeviceId(System.String)
extern void ProfileData_set_DeviceId_m93FFBB7E435F6DA2775FCC4E6DB66C5872B4F178 (void);
// 0x000001AE System.String UnityEngine.Purchasing.ProfileData::get_BuildGUID()
extern void ProfileData_get_BuildGUID_m6A0A0E6CF64D8652F16A3DD032598653FE4FE4CD (void);
// 0x000001AF System.String UnityEngine.Purchasing.ProfileData::get_IapVer()
extern void ProfileData_get_IapVer_m9EE900F1C01AC2CCB77671BC1DCCA0937FADF246 (void);
// 0x000001B0 System.Void UnityEngine.Purchasing.ProfileData::set_IapVer(System.String)
extern void ProfileData_set_IapVer_mEEE5507A8C5735CD46D46D6C86E1FED4E77E3709 (void);
// 0x000001B1 System.String UnityEngine.Purchasing.ProfileData::get_AdsGamerToken()
extern void ProfileData_get_AdsGamerToken_mFC074A4267C38745461680DA0D5E4B6D52E945E8 (void);
// 0x000001B2 System.Void UnityEngine.Purchasing.ProfileData::set_AdsGamerToken(System.String)
extern void ProfileData_set_AdsGamerToken_m4EE4F07E03FA275DFB1A68C74A4CB3A1D43D1B4E (void);
// 0x000001B3 System.Nullable`1<System.Boolean> UnityEngine.Purchasing.ProfileData::get_TrackingOptOut()
extern void ProfileData_get_TrackingOptOut_mA1621EC3315735BAAB8C2048FF364237A537A8E1 (void);
// 0x000001B4 System.Void UnityEngine.Purchasing.ProfileData::set_TrackingOptOut(System.Nullable`1<System.Boolean>)
extern void ProfileData_set_TrackingOptOut_mD9A5BF622CB05A821E3044C02232D530569D89ED (void);
// 0x000001B5 System.Nullable`1<System.Int32> UnityEngine.Purchasing.ProfileData::get_AdsABGroup()
extern void ProfileData_get_AdsABGroup_m6C5C9315BFBA056CBB930C0ABC753E8246E19F5E (void);
// 0x000001B6 System.Void UnityEngine.Purchasing.ProfileData::set_AdsABGroup(System.Nullable`1<System.Int32>)
extern void ProfileData_set_AdsABGroup_mA5C4223DF1B2A26F124FE0389583EBDF6A7DDEB1 (void);
// 0x000001B7 System.String UnityEngine.Purchasing.ProfileData::get_AdsGameId()
extern void ProfileData_get_AdsGameId_m828DA700D85E69FFE6B876241974EA7125B94279 (void);
// 0x000001B8 System.Void UnityEngine.Purchasing.ProfileData::set_AdsGameId(System.String)
extern void ProfileData_set_AdsGameId_m33150BF3C5BFB86412D651CA50CF5CD0A7AD8E15 (void);
// 0x000001B9 System.Nullable`1<System.Int32> UnityEngine.Purchasing.ProfileData::get_StoreABGroup()
extern void ProfileData_get_StoreABGroup_m24A2253A205BAAB00C6DC9FD51F8EFD6F50303E2 (void);
// 0x000001BA System.String UnityEngine.Purchasing.ProfileData::get_CatalogId()
extern void ProfileData_get_CatalogId_m6129B4FF40405BA38E08AF30B2DE81DC84D01304 (void);
// 0x000001BB System.String UnityEngine.Purchasing.ProfileData::get_StoreName()
extern void ProfileData_get_StoreName_m80E0A81E66ABB7B6D82AA4B698823B256EA912EA (void);
// 0x000001BC System.Void UnityEngine.Purchasing.ProfileData::set_StoreName(System.String)
extern void ProfileData_set_StoreName_m2553119894D01DFB0ED95CBABBA74F6D10AB961D (void);
// 0x000001BD System.String UnityEngine.Purchasing.ProfileData::get_GameVersion()
extern void ProfileData_get_GameVersion_m0B3845D276469F811DD9DF2230B06B158DA76995 (void);
// 0x000001BE System.Void UnityEngine.Purchasing.ProfileData::set_GameVersion(System.String)
extern void ProfileData_set_GameVersion_m286B2D340470A5BFF4FB6C72357981E9A914F7C4 (void);
// 0x000001BF System.Nullable`1<System.Boolean> UnityEngine.Purchasing.ProfileData::get_StoreTestEnabled()
extern void ProfileData_get_StoreTestEnabled_mE51505DE349ACEFD6946D4CB3D836C237B71D3F3 (void);
// 0x000001C0 System.Void UnityEngine.Purchasing.ProfileData::.ctor(Uniject.IUtil)
extern void ProfileData__ctor_m05C1FA6C4C434CABF62A456D5ADA4D58AF6E1935 (void);
// 0x000001C1 System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.ProfileData::GetProfileDict()
extern void ProfileData_GetProfileDict_m2889714B030CE4DAED9638FFC55584B28C1CD02F (void);
// 0x000001C2 System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.ProfileData::GetProfileIds()
extern void ProfileData_GetProfileIds_m615A46222008436BAF31C78CD867AFAFA63DBFCB (void);
// 0x000001C3 UnityEngine.Purchasing.ProfileData UnityEngine.Purchasing.ProfileData::Instance(Uniject.IUtil)
extern void ProfileData_Instance_m3D16F88E3FB3CFF7B3D619CBDE8D721067AB7460 (void);
// 0x000001C4 System.Void UnityEngine.Purchasing.ProfileData::SetGamerToken(System.String)
extern void ProfileData_SetGamerToken_m5326976CC2DCA6BF670CB0BE943B029CF179C8C4 (void);
// 0x000001C5 System.Void UnityEngine.Purchasing.ProfileData::SetTrackingOptOut(System.Nullable`1<System.Boolean>)
extern void ProfileData_SetTrackingOptOut_m802B0447E2AE9306A3501C7D2E27486531353B51 (void);
// 0x000001C6 System.Void UnityEngine.Purchasing.ProfileData::SetGameId(System.String)
extern void ProfileData_SetGameId_mD4F86A26F66E846806604AA03D079CB4CD5874FA (void);
// 0x000001C7 System.Void UnityEngine.Purchasing.ProfileData::SetABGroup(System.Nullable`1<System.Int32>)
extern void ProfileData_SetABGroup_mBB086373441DEEC724183434E3DD7C964630B845 (void);
// 0x000001C8 System.Void UnityEngine.Purchasing.ProfileData::SetStoreName(System.String)
extern void ProfileData_SetStoreName_m8273A67CDD9F69FFB34DA231BE1F9AD165215058 (void);
// 0x000001C9 System.Boolean UnityEngine.Purchasing.Promo::IsReady()
extern void Promo_IsReady_m767C2CA50FF13DCBFB0A2F972D98102327071E74 (void);
// 0x000001CA System.String UnityEngine.Purchasing.Promo::Version()
extern void Promo_Version_m8BE80D4771A83CC526F38A1C1546E92EF4289CBC (void);
// 0x000001CB System.Void UnityEngine.Purchasing.Promo::.ctor()
extern void Promo__ctor_m35AC49585A7283E0249DDCC5FE987D4B21906F88 (void);
// 0x000001CC System.Void UnityEngine.Purchasing.Promo::InitPromo(UnityEngine.RuntimePlatform,UnityEngine.ILogger,Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil)
extern void Promo_InitPromo_m438B7ABCE956A712CEE89C49C718C27AB3D3BAAB (void);
// 0x000001CD System.Void UnityEngine.Purchasing.Promo::InitPromo(UnityEngine.RuntimePlatform,UnityEngine.ILogger,System.String,Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil)
extern void Promo_InitPromo_mB60CFFC4EBB8EAD1F5B9BDF464559E7403CFD53E (void);
// 0x000001CE System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.Promo::UpdatePromoProductList()
extern void Promo_UpdatePromoProductList_m7C7003CA414AB0485C346DD827F58AF0508E7A8C (void);
// 0x000001CF System.Void UnityEngine.Purchasing.Promo::ProvideProductsToAds(UnityEngine.Purchasing.JSONStore,UnityEngine.Purchasing.Extension.IStoreCallback,System.Boolean)
extern void Promo_ProvideProductsToAds_m99B96A92B6F746B3DF7373081924CBACDD906F91 (void);
// 0x000001D0 System.Void UnityEngine.Purchasing.Promo::ProvideProductsToAds(System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>,System.Boolean)
extern void Promo_ProvideProductsToAds_m42A76A0387707E1058124DD8563C92064E1427C0 (void);
// 0x000001D1 System.String UnityEngine.Purchasing.Promo::QueryPromoProducts()
extern void Promo_QueryPromoProducts_m9F17EA0D16EA4B3DB463FDF36DB37C47329FA0ED (void);
// 0x000001D2 System.Boolean UnityEngine.Purchasing.Promo::InitiatePromoPurchase(System.String)
extern void Promo_InitiatePromoPurchase_mE9B8A6D93A730B323AF0E351E0B93DBA0CC0190C (void);
// 0x000001D3 System.Boolean UnityEngine.Purchasing.Promo::InitiatePurchasingCommand(System.String)
extern void Promo_InitiatePurchasingCommand_m3F50D49543A75F3AA2987E58AE6391FD324F0EE6 (void);
// 0x000001D4 System.Boolean UnityEngine.Purchasing.Promo::ExecPromoPurchase(System.String)
extern void Promo_ExecPromoPurchase_mB0531E1798FE69D64A77C6C9773F4FDBDA2705E7 (void);
// 0x000001D5 System.Void UnityEngine.Purchasing.Promo::.cctor()
extern void Promo__cctor_mC65585468306F8010BF1BB5F6712C919BFEE15A2 (void);
// 0x000001D6 System.String UnityEngine.Purchasing.StandardPurchasingModule::get_m_persistentDataPath()
extern void StandardPurchasingModule_get_m_persistentDataPath_m12532D8F2C4B471C6DDA9BE921206877A8161D10 (void);
// 0x000001D7 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_m_persistentDataPath(System.String)
extern void StandardPurchasingModule_set_m_persistentDataPath_m61365235F4DBA41AB4FC37B018A644EE2BA32A3A (void);
// 0x000001D8 Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::get_util()
extern void StandardPurchasingModule_get_util_m87B02FC563D11D6C02EF602B517EB05FA72DB018 (void);
// 0x000001D9 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_util(Uniject.IUtil)
extern void StandardPurchasingModule_set_util_m13DD17658B1F4ABCFD5C21AABD9B71660C66CB3B (void);
// 0x000001DA UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::get_logger()
extern void StandardPurchasingModule_get_logger_mBFF7481ED12DF22255D4456A2F9ABB192435C795 (void);
// 0x000001DB System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_logger(UnityEngine.ILogger)
extern void StandardPurchasingModule_set_logger_m40F4797AD8E0E680B1F24F9E62EF115F400BFBBC (void);
// 0x000001DC UnityEngine.Purchasing.IAsyncWebUtil UnityEngine.Purchasing.StandardPurchasingModule::get_webUtil()
extern void StandardPurchasingModule_get_webUtil_m3A46011A03DE50F093C88C629526FE870F37C8B7 (void);
// 0x000001DD System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_webUtil(UnityEngine.Purchasing.IAsyncWebUtil)
extern void StandardPurchasingModule_set_webUtil_m2EE4DDE770B20F1E1DA3A5CA93CBCA08CA0AA1AE (void);
// 0x000001DE UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::get_storeInstance()
extern void StandardPurchasingModule_get_storeInstance_m41C072D8DA395ABCE52B77EB8B5BAFCBC5A8BF38 (void);
// 0x000001DF System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_storeInstance(UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance)
extern void StandardPurchasingModule_set_storeInstance_mB66BCE643C775865D4F525CB578807506C5987C0 (void);
// 0x000001E0 System.Void UnityEngine.Purchasing.StandardPurchasingModule::.ctor(Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil,UnityEngine.ILogger,UnityEngine.Purchasing.INativeStoreProvider,UnityEngine.RuntimePlatform,UnityEngine.Purchasing.AppStore,System.Boolean,System.String)
extern void StandardPurchasingModule__ctor_m2E50C88DFD034A3F3566A6C993622A208E3AEB7C (void);
// 0x000001E1 UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::get_appStore()
extern void StandardPurchasingModule_get_appStore_m9A0786DEBB135FDF28778AE1D40005556339A90E (void);
// 0x000001E2 UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::get_useFakeStoreUIMode()
extern void StandardPurchasingModule_get_useFakeStoreUIMode_m4C123B143721CBABC5A45EF80F86D38C7A04DDE7 (void);
// 0x000001E3 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreUIMode(UnityEngine.Purchasing.FakeStoreUIMode)
extern void StandardPurchasingModule_set_useFakeStoreUIMode_m6F535270064B46E328D8312DB75852E70BEDA4B6 (void);
// 0x000001E4 System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::get_useFakeStoreAlways()
extern void StandardPurchasingModule_get_useFakeStoreAlways_mFA7F567C35E8925EF3CB35542868C98B499408D1 (void);
// 0x000001E5 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreAlways(System.Boolean)
extern void StandardPurchasingModule_set_useFakeStoreAlways_m9FC634E43083974E05569338375D01F7B19B0198 (void);
// 0x000001E6 UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
extern void StandardPurchasingModule_Instance_m077628141769BC82450A5313D877FC8A801FA1FC (void);
// 0x000001E7 UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance(UnityEngine.Purchasing.AppStore)
extern void StandardPurchasingModule_Instance_m7D93F772AA34C52993F246BCDD5F33507A17829F (void);
// 0x000001E8 System.Void UnityEngine.Purchasing.StandardPurchasingModule::Configure()
extern void StandardPurchasingModule_Configure_m1DE768E4D28A82FE46CA46AE667411B5DAC95638 (void);
// 0x000001E9 UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::InstantiateStore()
extern void StandardPurchasingModule_InstantiateStore_m90C380628CE9AE2508EEE9D663DE0AC1FA76F9D7 (void);
// 0x000001EA UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateAndroid()
extern void StandardPurchasingModule_InstantiateAndroid_m307856293FBA5E97FB4CA5387C8BA8EB7AC9CFB4 (void);
// 0x000001EB UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateGoogleStore()
extern void StandardPurchasingModule_InstantiateGoogleStore_m430F411D02A6AB669CEC32755D6257AE03EC0D8A (void);
// 0x000001EC System.Void UnityEngine.Purchasing.StandardPurchasingModule::BindGoogleExtension(UnityEngine.Purchasing.GooglePlayStoreExtensions)
extern void StandardPurchasingModule_BindGoogleExtension_mFFC532F7C0C897E8B76ED1B09C6D5153DB3A7F08 (void);
// 0x000001ED UnityEngine.Purchasing.GooglePlayStoreExtensions UnityEngine.Purchasing.StandardPurchasingModule::BuildGooglePlayStoreExtensions(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService,UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService,UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback)
extern void StandardPurchasingModule_BuildGooglePlayStoreExtensions_mBE75F2DC21500B7274EC530CDB95C6E2DC6AF97B (void);
// 0x000001EE UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService UnityEngine.Purchasing.StandardPurchasingModule::BuildGooglePlayStoreServiceAar(UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback)
extern void StandardPurchasingModule_BuildGooglePlayStoreServiceAar_m7FD5DEE6D20669182E39E5656071BB064066DF5B (void);
// 0x000001EF UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateUDP()
extern void StandardPurchasingModule_InstantiateUDP_mCACEB299645CB73D0CFE6239122E64FDCB716354 (void);
// 0x000001F0 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateAndroidHelper(UnityEngine.Purchasing.JSONStore)
extern void StandardPurchasingModule_InstantiateAndroidHelper_mFE25EB724120EE1F01DB62520DE2B3215598241C (void);
// 0x000001F1 UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.StandardPurchasingModule::GetAndroidNativeStore(UnityEngine.Purchasing.JSONStore)
extern void StandardPurchasingModule_GetAndroidNativeStore_m65B93C59904F38221FE23858764D3455552A7630 (void);
// 0x000001F2 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateApple()
extern void StandardPurchasingModule_InstantiateApple_mEC06095E364E4072640BB91525DAF59761D14DBE (void);
// 0x000001F3 System.Void UnityEngine.Purchasing.StandardPurchasingModule::UseMockWindowsStore(System.Boolean)
extern void StandardPurchasingModule_UseMockWindowsStore_m7B59FB6F9E96127D20A1981B6AC109E790F8E3EB (void);
// 0x000001F4 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::instantiateWindowsStore()
extern void StandardPurchasingModule_instantiateWindowsStore_mA2706320C823F2F0725EFA666452F51B83F052C6 (void);
// 0x000001F5 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateFacebook()
extern void StandardPurchasingModule_InstantiateFacebook_m0D2CD7243C6D20F185DA9DAE4D606172B9BC608D (void);
// 0x000001F6 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateFakeStore()
extern void StandardPurchasingModule_InstantiateFakeStore_mFBF40088B9F8077D048395685D69FA8D9EC2BED3 (void);
// 0x000001F7 System.Void UnityEngine.Purchasing.StandardPurchasingModule::.cctor()
extern void StandardPurchasingModule__cctor_mB8739CBC28CB842589720B49DF2AD2986BA7D66D (void);
// 0x000001F8 System.Void UnityEngine.Purchasing.StandardPurchasingModule::<Configure>b__49_0(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern void StandardPurchasingModule_U3CConfigureU3Eb__49_0_m6800ABE5B38C2B21D0558FE7C09C397F8C5850C3 (void);
// 0x000001F9 System.String UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::get_storeName()
extern void StoreInstance_get_storeName_mA35540CE83C33BEDCC535479A957F938CE36A164 (void);
// 0x000001FA UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::get_instance()
extern void StoreInstance_get_instance_m83A08405713123DE3AD3E38DCAE1566F64CC1FA6 (void);
// 0x000001FB System.Void UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::.ctor(System.String,UnityEngine.Purchasing.Extension.IStore)
extern void StoreInstance__ctor_mACF98826D10A80FFCC62AA6E5A110292F7ED1AE0 (void);
// 0x000001FC System.Void UnityEngine.Purchasing.StandardPurchasingModule_MicrosoftConfiguration::.ctor(UnityEngine.Purchasing.StandardPurchasingModule)
extern void MicrosoftConfiguration__ctor_mC9E2B3D6BD06760C4976539FBED442B42979E11E (void);
// 0x000001FD System.Void UnityEngine.Purchasing.StandardPurchasingModule_MicrosoftConfiguration::set_useMockBillingSystem(System.Boolean)
extern void MicrosoftConfiguration_set_useMockBillingSystem_m76F2198F6317012D23019A26D79BD96C04BCC230 (void);
// 0x000001FE UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StoreConfiguration::get_androidStore()
extern void StoreConfiguration_get_androidStore_m6F8752C7F2D1DFCCD2FAD73DDF6BC606433BEA23 (void);
// 0x000001FF System.Void UnityEngine.Purchasing.StoreConfiguration::set_androidStore(UnityEngine.Purchasing.AppStore)
extern void StoreConfiguration_set_androidStore_m70762BBD8EB530411449FBD9285126F1243E1997 (void);
// 0x00000200 System.Void UnityEngine.Purchasing.StoreConfiguration::.ctor(UnityEngine.Purchasing.AppStore)
extern void StoreConfiguration__ctor_m772081659C43B0A6D306E3BC2C8A759EC4F6BB71 (void);
// 0x00000201 UnityEngine.Purchasing.StoreConfiguration UnityEngine.Purchasing.StoreConfiguration::Deserialize(System.String)
extern void StoreConfiguration_Deserialize_m5A8F15BDD6672E7434F5E20ED0331EA0B08FCC73 (void);
// 0x00000202 System.Void UnityEngine.Purchasing.SubscriptionInfo::.ctor(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,System.String)
extern void SubscriptionInfo__ctor_m18546DE0CA1C59E39D5BDE6222FD2BD2B2163D16 (void);
// 0x00000203 UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::isExpired()
extern void SubscriptionInfo_isExpired_mCD8BA5E2171EF63D7AC6E72BCBDFB25A79057433 (void);
// 0x00000204 System.Void UnityEngine.Purchasing.ReceiptParserException::.ctor()
extern void ReceiptParserException__ctor_m3AAC4DD1E9CDF662F37555C6B686DC99F7707145 (void);
// 0x00000205 System.Void UnityEngine.Purchasing.InvalidProductTypeException::.ctor()
extern void InvalidProductTypeException__ctor_mDA7175745E4721BEEB1ADDFB11D10C871D925B2E (void);
// 0x00000206 UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.FakeTransactionHistoryExtensions::GetLastPurchaseFailureDescription()
extern void FakeTransactionHistoryExtensions_GetLastPurchaseFailureDescription_m305EBDE3B8EA9F9CE383FEA6675073C663CFCB92 (void);
// 0x00000207 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.FakeTransactionHistoryExtensions::GetLastStoreSpecificPurchaseErrorCode()
extern void FakeTransactionHistoryExtensions_GetLastStoreSpecificPurchaseErrorCode_m27BE1A889BD6726264C074C1BD7A7FFB414924E6 (void);
// 0x00000208 System.Void UnityEngine.Purchasing.FakeTransactionHistoryExtensions::.ctor()
extern void FakeTransactionHistoryExtensions__ctor_m0E8824B43A1220C0950AE7D1D1A4EEBB7363A064 (void);
// 0x00000209 UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.ITransactionHistoryExtensions::GetLastPurchaseFailureDescription()
// 0x0000020A UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.ITransactionHistoryExtensions::GetLastStoreSpecificPurchaseErrorCode()
// 0x0000020B System.Void UnityEngine.Purchasing.FakeMicrosoftExtensions::RestoreTransactions()
extern void FakeMicrosoftExtensions_RestoreTransactions_mDD55B61BCB98B80BC1BA984F92A524C5DC820D70 (void);
// 0x0000020C System.Void UnityEngine.Purchasing.FakeMicrosoftExtensions::.ctor()
extern void FakeMicrosoftExtensions__ctor_m10C9B717A66BFBD8C758330C1AB42BA9FEB82589 (void);
// 0x0000020D System.Void UnityEngine.Purchasing.IMicrosoftConfiguration::set_useMockBillingSystem(System.Boolean)
// 0x0000020E System.Void UnityEngine.Purchasing.IMicrosoftExtensions::RestoreTransactions()
// 0x0000020F System.Void UnityEngine.Purchasing.WinRTStore::.ctor(UnityEngine.Purchasing.Default.IWindowsIAP,Uniject.IUtil,UnityEngine.ILogger)
extern void WinRTStore__ctor_m5BF61B4DD340F511C4E1EB1BA12BEED01D46AC7F (void);
// 0x00000210 System.Void UnityEngine.Purchasing.WinRTStore::SetWindowsIAP(UnityEngine.Purchasing.Default.IWindowsIAP)
extern void WinRTStore_SetWindowsIAP_m0C6619B2B2CFE778EB7AE55C87C2D21F1CDCA173 (void);
// 0x00000211 System.Void UnityEngine.Purchasing.WinRTStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void WinRTStore_Initialize_m44DF69010963E8FCE49A75E67245EF5903796963 (void);
// 0x00000212 System.Void UnityEngine.Purchasing.WinRTStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void WinRTStore_RetrieveProducts_mBB69CE2EBA8E6A8C0450B23C21E5568389993026 (void);
// 0x00000213 System.Void UnityEngine.Purchasing.WinRTStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void WinRTStore_FinishTransaction_mA3B99B854F45A9063EF3624BC3E034EA2F6B78EF (void);
// 0x00000214 System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
extern void WinRTStore_init_mDD0EB1D58C2E61D36D551B25098D19CDD12C4390 (void);
// 0x00000215 System.Void UnityEngine.Purchasing.WinRTStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void WinRTStore_Purchase_m80B943F8D30DADD1B6CADA340541DD76E356AEAB (void);
// 0x00000216 System.Void UnityEngine.Purchasing.WinRTStore::restoreTransactions(System.Boolean)
extern void WinRTStore_restoreTransactions_m83B976B24B1AB12E0AE1D063BDB34E3DF952CF9A (void);
// 0x00000217 System.Void UnityEngine.Purchasing.WinRTStore::RestoreTransactions()
extern void WinRTStore_RestoreTransactions_mEE335E114ACB8EB895FFF1357C20D4D46791512B (void);
// 0x00000218 System.Void UnityEngine.Purchasing.WinRTStore_<>c::.cctor()
extern void U3CU3Ec__cctor_m54FA0EAF1DEF5053ED765209581D0A3D1BB17A5D (void);
// 0x00000219 System.Void UnityEngine.Purchasing.WinRTStore_<>c::.ctor()
extern void U3CU3Ec__ctor_mC0DD701EABAE151521168625EA0FAEBF6FD6C813 (void);
// 0x0000021A System.Boolean UnityEngine.Purchasing.WinRTStore_<>c::<RetrieveProducts>b__8_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m1D799FEB9B7EA8262F966C67C8DF4B179120B781 (void);
// 0x0000021B UnityEngine.Purchasing.Default.WinProductDescription UnityEngine.Purchasing.WinRTStore_<>c::<RetrieveProducts>b__8_1(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_mB40747A95AC9AC34029908B144C1A29B5067A636 (void);
// 0x0000021C System.Void UnityEngine.Purchasing.FacebookStoreImpl::.ctor(Uniject.IUtil)
extern void FacebookStoreImpl__ctor_mEF78B812CE6C8B18095488A48FE36E38C39023D0 (void);
// 0x0000021D System.Void UnityEngine.Purchasing.FacebookStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeFacebookStore)
extern void FacebookStoreImpl_SetNativeStore_m8F2457FCAB77487DBFB903F7CB8CE637E64836AA (void);
// 0x0000021E System.Void UnityEngine.Purchasing.FacebookStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
extern void FacebookStoreImpl_MessageCallback_m22696E14F2518E2D452BCF1431300FCEC0A58FB2 (void);
// 0x0000021F System.Void UnityEngine.Purchasing.FacebookStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
extern void FacebookStoreImpl_ProcessMessage_m6EADC6D96149990EFD5782AF9A461DFCF51DD746 (void);
// 0x00000220 System.Void UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m1ADD1DD8339C4DE6D87B0C8D9CCE29BE60AF634F (void);
// 0x00000221 System.Void UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0::<MessageCallback>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CMessageCallbackU3Eb__0_m4A5EFAFD30B4311E1DC7AC430BCEA94166459266 (void);
// 0x00000222 System.String UnityEngine.Purchasing.FakeStore::get_unavailableProductId()
extern void FakeStore_get_unavailableProductId_m264754ACAC4D633156B64C6C9698CD01AA121BAB (void);
// 0x00000223 System.Void UnityEngine.Purchasing.FakeStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void FakeStore_Initialize_mC690C7CD01179E3D84FDB27441D4938C86021CA9 (void);
// 0x00000224 System.Void UnityEngine.Purchasing.FakeStore::RetrieveProducts(System.String)
extern void FakeStore_RetrieveProducts_mD76EEBB247FB03EA66B872DA0136795DD7EA2EBC (void);
// 0x00000225 System.Void UnityEngine.Purchasing.FakeStore::StoreRetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void FakeStore_StoreRetrieveProducts_m9E967B5876D2CC7411860B5672722C19F4274902 (void);
// 0x00000226 System.Void UnityEngine.Purchasing.FakeStore::Purchase(System.String,System.String)
extern void FakeStore_Purchase_m5D4F293A880E2F674DC6380D03E4560C6B22FA23 (void);
// 0x00000227 System.Void UnityEngine.Purchasing.FakeStore::FakePurchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void FakeStore_FakePurchase_m8F416FAC9F8977B1100FAC3109B4092A738791BD (void);
// 0x00000228 System.Void UnityEngine.Purchasing.FakeStore::FinishTransaction(System.String,System.String)
extern void FakeStore_FinishTransaction_m5DA7C484441150252205D97ED9AAC4199C5308FB (void);
// 0x00000229 System.Void UnityEngine.Purchasing.FakeStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void FakeStore_FinishTransaction_mE4D58D8637E6CB8BE16E2764BD5F095EAD183E7B (void);
// 0x0000022A System.Boolean UnityEngine.Purchasing.FakeStore::StartUI(System.Object,UnityEngine.Purchasing.FakeStore_DialogType,System.Action`2<System.Boolean,T>)
// 0x0000022B System.Void UnityEngine.Purchasing.FakeStore::.ctor()
extern void FakeStore__ctor_m132BB1833ED938632A79E732499BF3607A5D16BE (void);
// 0x0000022C System.Void UnityEngine.Purchasing.FakeStore::<>n__0(System.String,System.String,System.String)
extern void FakeStore_U3CU3En__0_m6100E9F34B3D462DE1ED15CB147A96104EB7DA93 (void);
// 0x0000022D System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m9C9A7204D206E8ABE652BF46BBDFBE31280BE415 (void);
// 0x0000022E System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass13_0::<StoreRetrieveProducts>b__0(System.Boolean,UnityEngine.Purchasing.InitializationFailureReason)
extern void U3CU3Ec__DisplayClass13_0_U3CStoreRetrieveProductsU3Eb__0_m0B9CC885EDE1BE2957B9FCD7532672156E5C6AD0 (void);
// 0x0000022F System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_m5B5EE0D48C0AE0E86F8FC6B28F75D0A8166B1116 (void);
// 0x00000230 System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass15_0::<FakePurchase>b__0(System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason)
extern void U3CU3Ec__DisplayClass15_0_U3CFakePurchaseU3Eb__0_mF9E6AEC77FE2D7B0C8F057F7D5303B728AC76CC0 (void);
// 0x00000231 System.Void UnityEngine.Purchasing.UIFakeStore::.ctor()
extern void UIFakeStore__ctor_mAF83518C697D10EE641B2DEE7B0C2E44DE1632EE (void);
// 0x00000232 System.Boolean UnityEngine.Purchasing.UIFakeStore::StartUI(System.Object,UnityEngine.Purchasing.FakeStore_DialogType,System.Action`2<System.Boolean,T>)
// 0x00000233 System.Boolean UnityEngine.Purchasing.UIFakeStore::StartUI(System.String,System.String,System.String,System.Collections.Generic.List`1<System.String>,System.Action`2<System.Boolean,System.Int32>)
extern void UIFakeStore_StartUI_m8C292EB48C23C50805E2C6A3BBCD0F2EC7701615 (void);
// 0x00000234 System.Void UnityEngine.Purchasing.UIFakeStore::InstantiateDialog()
extern void UIFakeStore_InstantiateDialog_m8B5BE382B0A26C3760B143993C2E2F85FD8AF861 (void);
// 0x00000235 System.String UnityEngine.Purchasing.UIFakeStore::CreatePurchaseQuestion(UnityEngine.Purchasing.ProductDefinition)
extern void UIFakeStore_CreatePurchaseQuestion_m6680B2953589BBBBC3879169C2917ECADB3091FA (void);
// 0x00000236 System.String UnityEngine.Purchasing.UIFakeStore::CreateRetrieveProductsQuestion(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void UIFakeStore_CreateRetrieveProductsQuestion_m7EDF92FD7360A5D5BF538FEF19417D283A8FE2DD (void);
// 0x00000237 UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetOkayButton()
extern void UIFakeStore_GetOkayButton_m8AB6651EA66C035DB826CF2839D2F924D16C13CC (void);
// 0x00000238 UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetCancelButton()
extern void UIFakeStore_GetCancelButton_m8C5B403D319A6EB198593CC84904B5F979580AA4 (void);
// 0x00000239 UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetCancelButtonGameObject()
extern void UIFakeStore_GetCancelButtonGameObject_mF18526DEED5D5FAB02C82AE4D03B2D3DDC27F7DE (void);
// 0x0000023A UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetOkayButtonText()
extern void UIFakeStore_GetOkayButtonText_m7AB9398C4C2CD61D1E34D582E12B5AC19C312D71 (void);
// 0x0000023B UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetCancelButtonText()
extern void UIFakeStore_GetCancelButtonText_mDE7EDDF15877032CEA24B61F50B28C77047D1D42 (void);
// 0x0000023C UnityEngine.UI.Dropdown UnityEngine.Purchasing.UIFakeStore::GetDropdown()
extern void UIFakeStore_GetDropdown_mD7321917FB63CC02DD6FADAC98084D9A3D55CCFC (void);
// 0x0000023D UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetDropdownContainerGameObject()
extern void UIFakeStore_GetDropdownContainerGameObject_m0D125D556C19E1A8E35D23DD7B3C5D083396F912 (void);
// 0x0000023E System.Void UnityEngine.Purchasing.UIFakeStore::OkayButtonClicked()
extern void UIFakeStore_OkayButtonClicked_m6EAC8EB7F8788149F6C6769093DAFCB05EB52C02 (void);
// 0x0000023F System.Void UnityEngine.Purchasing.UIFakeStore::CancelButtonClicked()
extern void UIFakeStore_CancelButtonClicked_m1E19E8B67ACDE7DB3477DF72D191C2763152BEAD (void);
// 0x00000240 System.Void UnityEngine.Purchasing.UIFakeStore::DropdownValueChanged(System.Int32)
extern void UIFakeStore_DropdownValueChanged_m5F3B1AA36C5136E80E870997CDCB0EE26F78B8F7 (void);
// 0x00000241 System.Void UnityEngine.Purchasing.UIFakeStore::CloseDialog()
extern void UIFakeStore_CloseDialog_m25D9B676F2D5927E29337C8E7C7AE04A735CF450 (void);
// 0x00000242 System.Boolean UnityEngine.Purchasing.UIFakeStore::IsShowingDialog()
extern void UIFakeStore_IsShowingDialog_m8E2156C8B39B602278BA0E00644E507C941BC976 (void);
// 0x00000243 System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_0()
extern void UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m3C3396D6AEF281389FF8C56D8B3A7A5CE14199B6 (void);
// 0x00000244 System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_1()
extern void UIFakeStore_U3CInstantiateDialogU3Eb__16_1_m076BCD5BB79FE60DB33A4DA95FD9F11CE3148A3A (void);
// 0x00000245 System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_2()
extern void UIFakeStore_U3CInstantiateDialogU3Eb__16_2_m54BFFB98FAE6A84D9D005EFA3CB44769D90DBDF0 (void);
// 0x00000246 System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_3(System.Int32)
extern void UIFakeStore_U3CInstantiateDialogU3Eb__16_3_m696FC99A2F031280AA1160E92DD08490823C0FBF (void);
// 0x00000247 System.Void UnityEngine.Purchasing.UIFakeStore_DialogRequest::.ctor()
extern void DialogRequest__ctor_mAEBA5B8D29D35C31EEEDFCC2FE1F3C07F1C701F1 (void);
// 0x00000248 System.Void UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::OnDestroy()
extern void LifecycleNotifier_OnDestroy_mCBBD8438554B6A08048D3CCE61F67E63CBB8B396 (void);
// 0x00000249 System.Void UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::.ctor()
extern void LifecycleNotifier__ctor_m15C071234DCC80AB31B1FB108945B849C403CE0D (void);
// 0x0000024A System.Void UnityEngine.Purchasing.UIFakeStore_<>c__DisplayClass14_0`1::.ctor()
// 0x0000024B System.Void UnityEngine.Purchasing.UIFakeStore_<>c__DisplayClass14_0`1::<StartUI>b__0(System.Boolean,System.Int32)
// 0x0000024C System.Void UnityEngine.Purchasing.UIFakeStore_<>c::.cctor()
extern void U3CU3Ec__cctor_m7520E474DA8339F026BCFAF0FA2662347A82109A (void);
// 0x0000024D System.Void UnityEngine.Purchasing.UIFakeStore_<>c::.ctor()
extern void U3CU3Ec__ctor_mFAD327DF99F2BD3E77902EE3B087223463C313EC (void);
// 0x0000024E System.String UnityEngine.Purchasing.UIFakeStore_<>c::<CreateRetrieveProductsQuestion>b__18_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_m72A35DE3EAA0E5EC8E8EF7345AC2A6E9E83A0F26 (void);
// 0x0000024F UnityEngine.Purchasing.FileReference UnityEngine.Purchasing.FileReference::CreateInstance(System.String,UnityEngine.ILogger,Uniject.IUtil)
extern void FileReference_CreateInstance_mB3463AFC41FA81580F572CAAA060C2FED089B3F9 (void);
// 0x00000250 System.Void UnityEngine.Purchasing.FileReference::.ctor(System.String,UnityEngine.ILogger)
extern void FileReference__ctor_m4DBCE8FD6BFB7B5146698565E270A33BEF80886F (void);
// 0x00000251 System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ProductDefinitionExtensions::DecodeJSON(System.Collections.Generic.List`1<System.Object>,System.String)
extern void ProductDefinitionExtensions_DecodeJSON_m1206520A26C86C855C61B9A82E38F7A70310AF2E (void);
// 0x00000252 T[] UnityEngine.Purchasing.Extension.UnityUtil::GetAnyComponentsOfType()
// 0x00000253 System.DateTime UnityEngine.Purchasing.Extension.UnityUtil::get_currentTime()
extern void UnityUtil_get_currentTime_m900C819AC0B74B1B5E04A90CD8EEB515D653113E (void);
// 0x00000254 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_persistentDataPath()
extern void UnityUtil_get_persistentDataPath_m806A2F5A0F66CA2E68584598C1241660C545020F (void);
// 0x00000255 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceUniqueIdentifier()
extern void UnityUtil_get_deviceUniqueIdentifier_mC186930BD4F9E2F7A419F2BDF398F59D017B52E7 (void);
// 0x00000256 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_unityVersion()
extern void UnityUtil_get_unityVersion_m90FE658057DAF49E24FDF809B1C3236E428BD587 (void);
// 0x00000257 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_cloudProjectId()
extern void UnityUtil_get_cloudProjectId_mAA38E536DA7708EFD69FEAE576BAD10974C47FEE (void);
// 0x00000258 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_userId()
extern void UnityUtil_get_userId_m4A57F82046BF3C97F8625C765B2DB6E6FEC807B4 (void);
// 0x00000259 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_gameVersion()
extern void UnityUtil_get_gameVersion_mA25F0D3BB0C839B18EAD32EF311898A8F6086228 (void);
// 0x0000025A System.UInt64 UnityEngine.Purchasing.Extension.UnityUtil::get_sessionId()
extern void UnityUtil_get_sessionId_m2E96F87FDF4B7D789847EFF3851FD460A1ED42BC (void);
// 0x0000025B UnityEngine.RuntimePlatform UnityEngine.Purchasing.Extension.UnityUtil::get_platform()
extern void UnityUtil_get_platform_m47179F777F77516E27CC257AA44A3F97BBFD5177 (void);
// 0x0000025C System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::get_isEditor()
extern void UnityUtil_get_isEditor_mCD7CD6E31CAD25E365B0CCF90B2408F1A10B8477 (void);
// 0x0000025D System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceModel()
extern void UnityUtil_get_deviceModel_m1CE98F9EEF885E4237B16981A4FCA055DDCA8080 (void);
// 0x0000025E System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceName()
extern void UnityUtil_get_deviceName_mBB2C0946B3AF32EDB5CBEA6536C283973ADEE353 (void);
// 0x0000025F UnityEngine.DeviceType UnityEngine.Purchasing.Extension.UnityUtil::get_deviceType()
extern void UnityUtil_get_deviceType_m51C7E5885210B134E75228D9435B3C2513B6F51E (void);
// 0x00000260 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_operatingSystem()
extern void UnityUtil_get_operatingSystem_mF4D114B7DDAED944CD533B031E278F89AEE04CCE (void);
// 0x00000261 System.Int32 UnityEngine.Purchasing.Extension.UnityUtil::get_screenWidth()
extern void UnityUtil_get_screenWidth_m8DDFF305BFCB21DA293C40B7E3259B63A7B39E41 (void);
// 0x00000262 System.Int32 UnityEngine.Purchasing.Extension.UnityUtil::get_screenHeight()
extern void UnityUtil_get_screenHeight_mAFC3803EEE66B61D2DF149FF70F80F35E4D86548 (void);
// 0x00000263 System.Single UnityEngine.Purchasing.Extension.UnityUtil::get_screenDpi()
extern void UnityUtil_get_screenDpi_m0C0AF6EE4AA5EBE9FD2EF55C7B825E74B5E3A44F (void);
// 0x00000264 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_screenOrientation()
extern void UnityUtil_get_screenOrientation_m9EE6654D8D898CB61A88B06A60855A1C9189180E (void);
// 0x00000265 System.Object UnityEngine.Purchasing.Extension.UnityUtil::Uniject.IUtil.InitiateCoroutine(System.Collections.IEnumerator)
extern void UnityUtil_Uniject_IUtil_InitiateCoroutine_mB69F6ECE7D61A4A959298C42229EC380F4146F41 (void);
// 0x00000266 System.Void UnityEngine.Purchasing.Extension.UnityUtil::Uniject.IUtil.InitiateCoroutine(System.Collections.IEnumerator,System.Int32)
extern void UnityUtil_Uniject_IUtil_InitiateCoroutine_m6B0820F571D193D8E79B9F661B62CFD46EE45E80 (void);
// 0x00000267 System.Void UnityEngine.Purchasing.Extension.UnityUtil::RunOnMainThread(System.Action)
extern void UnityUtil_RunOnMainThread_m2CFD6575E2B23F2BEF95FB1AD06F3588418E71CC (void);
// 0x00000268 System.Object UnityEngine.Purchasing.Extension.UnityUtil::GetWaitForSeconds(System.Int32)
extern void UnityUtil_GetWaitForSeconds_mE2FC40904CDFE770EA7F78102C13EF0A99882F6C (void);
// 0x00000269 System.Void UnityEngine.Purchasing.Extension.UnityUtil::Start()
extern void UnityUtil_Start_mA307E8038CA5F0D4B71206E2E69B73388F3120F7 (void);
// 0x0000026A T UnityEngine.Purchasing.Extension.UnityUtil::FindInstanceOfType()
// 0x0000026B T UnityEngine.Purchasing.Extension.UnityUtil::LoadResourceInstanceOfType()
// 0x0000026C System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::PcPlatform()
extern void UnityUtil_PcPlatform_mB107F99E107C5D263CEFF1F482155B583B722DB9 (void);
// 0x0000026D System.Void UnityEngine.Purchasing.Extension.UnityUtil::DebugLog(System.String,System.Object[])
extern void UnityUtil_DebugLog_m79A01330958A7ED59E42F54C3F5353B57E18FA8B (void);
// 0x0000026E System.Collections.IEnumerator UnityEngine.Purchasing.Extension.UnityUtil::DelayedCoroutine(System.Collections.IEnumerator,System.Int32)
extern void UnityUtil_DelayedCoroutine_mF4DA2059281FF41657FEB0A6E57527425AAF827C (void);
// 0x0000026F System.Void UnityEngine.Purchasing.Extension.UnityUtil::Update()
extern void UnityUtil_Update_mFC67C2FAEA0CF6D1EBE084DA2D98A6A9FEC46ECA (void);
// 0x00000270 System.Void UnityEngine.Purchasing.Extension.UnityUtil::AddPauseListener(System.Action`1<System.Boolean>)
extern void UnityUtil_AddPauseListener_m77E3158513A48DAAD863A40ABF654C8351ED7E95 (void);
// 0x00000271 System.Void UnityEngine.Purchasing.Extension.UnityUtil::OnApplicationPause(System.Boolean)
extern void UnityUtil_OnApplicationPause_m60F193E0EF6C3593C07EEAF0CFDFFDFDCF57DF1C (void);
// 0x00000272 System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::IsClassOrSubclass(System.Type,System.Type)
extern void UnityUtil_IsClassOrSubclass_mB47AA12B5938B04F8F70276A652EFC64B8B12F9E (void);
// 0x00000273 System.Void UnityEngine.Purchasing.Extension.UnityUtil::.ctor()
extern void UnityUtil__ctor_m70418A4B2FCABF9B1F26B7D769DCF0FEA04D17DF (void);
// 0x00000274 System.Void UnityEngine.Purchasing.Extension.UnityUtil::.cctor()
extern void UnityUtil__cctor_mA9F79FF48AB88EEE3B9E317A8CA701F190BC4751 (void);
// 0x00000275 System.Void UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::.ctor(System.Int32)
extern void U3CDelayedCoroutineU3Ed__49__ctor_m92DC94AFFDD36CD7E9CFEA01D898FAFF68FE0556 (void);
// 0x00000276 System.Void UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.IDisposable.Dispose()
extern void U3CDelayedCoroutineU3Ed__49_System_IDisposable_Dispose_m8B3BC0F48FABA4528F4B99EBD19DCCF9439C6080 (void);
// 0x00000277 System.Boolean UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::MoveNext()
extern void U3CDelayedCoroutineU3Ed__49_MoveNext_m7250206E591597DB5A995F3F1BBD34F0AC352562 (void);
// 0x00000278 System.Object UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDelayedCoroutineU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1D48B1A610F4D61C2AA93B49800802810F6DF338 (void);
// 0x00000279 System.Void UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.Collections.IEnumerator.Reset()
extern void U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_Reset_mFF323408CB992F902E78904791D014E77E21BD98 (void);
// 0x0000027A System.Object UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.Collections.IEnumerator.get_Current()
extern void U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_get_Current_m60475CA1432F5F7F8ABCFA48F5B6B8BA835563CB (void);
// 0x0000027B UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.BillingClientResponseEnum::GetBillingResponseCodeJavaObject()
extern void BillingClientResponseEnum_GetBillingResponseCodeJavaObject_m99CA5A7903DA3E64A7192A6B4E7C748070B8A5E6 (void);
// 0x0000027C System.Int32 UnityEngine.Purchasing.Models.BillingClientResponseEnum::OK()
extern void BillingClientResponseEnum_OK_mFDCADCB505890E0CEAE241A3D9B5303D6BF32357 (void);
// 0x0000027D UnityEngine.AndroidJavaClass UnityEngine.Purchasing.Models.GoogleBillingClient::GetBillingFlowParamClass()
extern void GoogleBillingClient_GetBillingFlowParamClass_mB9D6428EA0044FD8DEA85197AB990C404E799DF5 (void);
// 0x0000027E UnityEngine.AndroidJavaClass UnityEngine.Purchasing.Models.GoogleBillingClient::GetConsumeParamsClass()
extern void GoogleBillingClient_GetConsumeParamsClass_m1FC4CE0BDF03768EA02A3CB804C6B1524334EA23 (void);
// 0x0000027F UnityEngine.AndroidJavaClass UnityEngine.Purchasing.Models.GoogleBillingClient::GetAcknowledgePurchaseParamsClass()
extern void GoogleBillingClient_GetAcknowledgePurchaseParamsClass_mC388A183E1CED06A29F3B09605C08C93B949CE92 (void);
// 0x00000280 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.Models.GoogleBillingClient::GetBillingClientClass()
extern void GoogleBillingClient_GetBillingClientClass_m315109EFD496D228117FC2F27DB2FBE1BEEFB5B0 (void);
// 0x00000281 System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePurchaseUpdatedListener)
extern void GoogleBillingClient__ctor_m09549B57B3F59AB730BC3882BF63458F465BB4DE (void);
// 0x00000282 System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::StartConnection(UnityEngine.Purchasing.Interfaces.IBillingClientStateListener)
extern void GoogleBillingClient_StartConnection_m9BEBDB9690F318608CA5A0EFEC4CDDE1340C65C4 (void);
// 0x00000283 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::QueryPurchase(System.String)
extern void GoogleBillingClient_QueryPurchase_m0AF4D962EB44F7F5B5C0B219B78F6C793D9B9589 (void);
// 0x00000284 System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::QuerySkuDetailsAsync(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.SkuDetailsResponseListener)
extern void GoogleBillingClient_QuerySkuDetailsAsync_mB7B85891EF16F9CDFB59414B9941DF0BD221BEA5 (void);
// 0x00000285 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::LaunchBillingFlow(UnityEngine.AndroidJavaObject,System.String,System.String,System.Int32)
extern void GoogleBillingClient_LaunchBillingFlow_mE7CC7C6AC4FEED61157F75EAF532208BE7F559A0 (void);
// 0x00000286 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::MakeBillingFlowParams(UnityEngine.AndroidJavaObject,System.String,System.String,System.Int32)
extern void GoogleBillingClient_MakeBillingFlowParams_m81CCC3E34EB4BDCD88EB58571393B53BED3A2343 (void);
// 0x00000287 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::SetObfuscatedProfileIdIfNeeded(UnityEngine.AndroidJavaObject)
extern void GoogleBillingClient_SetObfuscatedProfileIdIfNeeded_mEFFA8E3791C383002543F609E4F7DFD1D73EE88F (void);
// 0x00000288 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::SetObfuscatedAccountIdIfNeeded(UnityEngine.AndroidJavaObject)
extern void GoogleBillingClient_SetObfuscatedAccountIdIfNeeded_m72C76326F4972F13E7315B5B885A566AB68FA061 (void);
// 0x00000289 System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::ConsumeAsync(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>)
extern void GoogleBillingClient_ConsumeAsync_m3B102B5BAF9529EDB2A51A9EBA328C16A1262B41 (void);
// 0x0000028A System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::AcknowledgePurchase(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GoogleBillingClient_AcknowledgePurchase_m7E6FCD58BBE8F8FC62F508DB3E0C8E4DE1EB8C34 (void);
// 0x0000028B System.Void UnityEngine.Purchasing.Models.GoogleBillingResult::.ctor(UnityEngine.AndroidJavaObject)
extern void GoogleBillingResult__ctor_m358F74C128B712D6AD2889AC761AD44124068BF2 (void);
// 0x0000028C System.String UnityEngine.Purchasing.Models.GoogleBillingStrings::getWarningMessageMoreThanOneSkuFound(System.String)
extern void GoogleBillingStrings_getWarningMessageMoreThanOneSkuFound_mF064224A88888E50BDD88479656DD20BC61CDAD4 (void);
// 0x0000028D System.Void UnityEngine.Purchasing.Models.GooglePurchase::.ctor(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
extern void GooglePurchase__ctor_mDBCB3F4B6AAECEEA34AFD367A44CCE728FB271F2 (void);
// 0x0000028E System.Boolean UnityEngine.Purchasing.Models.GooglePurchase::IsAcknowledged()
extern void GooglePurchase_IsAcknowledged_m84A74A70DC2CFADA8BD42CB8492A7BEB46216236 (void);
// 0x0000028F System.Boolean UnityEngine.Purchasing.Models.GooglePurchase::IsPurchased()
extern void GooglePurchase_IsPurchased_m6E2F58CD59A504B71293A489D70A09DCEAC61381 (void);
// 0x00000290 System.Void UnityEngine.Purchasing.Models.GooglePurchaseResult::.ctor(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GooglePurchaseResult__ctor_mB06778D6A20F6233F5A78F736C2EA0DCD1441324 (void);
// 0x00000291 System.Void UnityEngine.Purchasing.Models.GooglePurchaseResult::FillPurchases(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GooglePurchaseResult_FillPurchases_m1384A7A08383C5DD9D54F39E44065936976DCF71 (void);
// 0x00000292 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GooglePurchaseStateEnum::GetPurchaseStateJavaObject()
extern void GooglePurchaseStateEnum_GetPurchaseStateJavaObject_mB8C45161526869D8097806ACF123083DFF87F677 (void);
// 0x00000293 System.Int32 UnityEngine.Purchasing.Models.GooglePurchaseStateEnum::Purchased()
extern void GooglePurchaseStateEnum_Purchased_m1B4A0E1435BCDD710EF9E4D0712FC648AC7E5A3A (void);
// 0x00000294 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleSkuTypeEnum::GetSkuTypeJavaObject()
extern void GoogleSkuTypeEnum_GetSkuTypeJavaObject_m5B38CA95A849715FE18A00CD354871E03C808B38 (void);
// 0x00000295 System.String UnityEngine.Purchasing.Models.GoogleSkuTypeEnum::InApp()
extern void GoogleSkuTypeEnum_InApp_m1B83756EC2FDBD45EB2DBCA14F2E866F2367E7B8 (void);
// 0x00000296 System.String UnityEngine.Purchasing.Models.GoogleSkuTypeEnum::Sub()
extern void GoogleSkuTypeEnum_Sub_mE8ACC3DD247CD327772CF419BFECD911A4A8B98B (void);
// 0x00000297 System.Void UnityEngine.Purchasing.Models.ProductDescriptionQuery::.ctor(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>,System.Action)
extern void ProductDescriptionQuery__ctor_mC2AE63C0E7E12A3945B966E27345CB967BD58FD0 (void);
// 0x00000298 System.Void UnityEngine.Purchasing.Interfaces.IBillingClientStateListener::RegisterOnConnected(System.Action)
// 0x00000299 System.Void UnityEngine.Purchasing.Interfaces.IBillingClientStateListener::RegisterOnDisconnected(System.Action)
// 0x0000029A System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::StartConnection(UnityEngine.Purchasing.Interfaces.IBillingClientStateListener)
// 0x0000029B UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::QueryPurchase(System.String)
// 0x0000029C System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::QuerySkuDetailsAsync(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.SkuDetailsResponseListener)
// 0x0000029D UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::LaunchBillingFlow(UnityEngine.AndroidJavaObject,System.String,System.String,System.Int32)
// 0x0000029E System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::ConsumeAsync(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>)
// 0x0000029F System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::AcknowledgePurchase(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
// 0x000002A0 System.Void UnityEngine.Purchasing.Interfaces.IGoogleFinishTransactionService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
// 0x000002A1 System.Void UnityEngine.Purchasing.Interfaces.IGoogleLastKnownProductService::SetLastKnownProductId(System.String)
// 0x000002A2 System.Void UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>,System.Action)
// 0x000002A3 System.Void UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService::Purchase(UnityEngine.Purchasing.ProductDefinition)
// 0x000002A4 System.Void UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
// 0x000002A5 System.Void UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService::FetchPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
// 0x000002A6 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x000002A7 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback::SetStoreExtension(UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal)
// 0x000002A8 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
// 0x000002A9 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseService::Purchase(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product,System.Int32)
// 0x000002AA System.Void UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService::QueryPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
// 0x000002AB System.Void UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService::QueryAsyncSku(UnityEngine.Purchasing.ProductDefinition,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
// 0x000002AC System.Void UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService::QueryAsyncSku(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
// 0x000002AD ReturnType UnityEngine.Purchasing.Utils.IAndroidJavaObjectWrapper::Call(System.String,System.Object[])
// 0x000002AE System.IDisposable UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::get_androidJavaObject()
extern void AndroidJavaObjectWrapper_get_androidJavaObject_m6281EF71AD201B426EE6D0CD8BCB7298EAC1CFAF (void);
// 0x000002AF System.Void UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::.ctor(UnityEngine.AndroidJavaObject)
extern void AndroidJavaObjectWrapper__ctor_mC7F64BC125AE9FEF8B1BE171A9DFEDC9E46D8520 (void);
// 0x000002B0 ReturnType UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::Call(System.String,System.Object[])
// 0x000002B1 UnityEngine.Purchasing.Models.GooglePurchase UnityEngine.Purchasing.Utils.GooglePurchaseHelper::MakeGooglePurchase(System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>,UnityEngine.AndroidJavaObject)
extern void GooglePurchaseHelper_MakeGooglePurchase_m79A68AAF7BAF89C451FAA8C3F6FD205DCB336AB4 (void);
// 0x000002B2 System.Void UnityEngine.Purchasing.Utils.GooglePurchaseHelper_<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m637DFA19E8F4BE214D3269E8C18A64920377F706 (void);
// 0x000002B3 System.Boolean UnityEngine.Purchasing.Utils.GooglePurchaseHelper_<>c__DisplayClass0_0::<MakeGooglePurchase>b__0(UnityEngine.AndroidJavaObject)
extern void U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m09DB214AF3B12DA06395936A773E304AAEDD3713 (void);
// 0x000002B4 System.String UnityEngine.Purchasing.Utils.GoogleReceiptEncoder::EncodeReceipt(System.String,System.String,System.String,System.String)
extern void GoogleReceiptEncoder_EncodeReceipt_m8DB1A17D262406AF181D19B4A240BC06D64B645F (void);
// 0x000002B5 System.String UnityEngine.Purchasing.Utils.GoogleReceiptEncoder::FormatPayload(System.String,System.String,System.String)
extern void GoogleReceiptEncoder_FormatPayload_m6FD53C545D44DBFB93CC7C7796B23BD183666D4F (void);
// 0x000002B6 System.Void UnityEngine.Purchasing.Utils.SkuDetailsConverter::ConvertOnQuerySkuDetailsResponse(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
extern void SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m21913D2469086B7387B9261B779D79DD12986D42 (void);
// 0x000002B7 System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.Utils.SkuDetailsConverter::ConvertSkusDetailsToProducts(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
extern void SkuDetailsConverter_ConvertSkusDetailsToProducts_m556B51D4248F4DA7285973CF9370679152633264 (void);
// 0x000002B8 System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.Utils.SkuDetailsConverter::ToListProducts(UnityEngine.AndroidJavaObject)
extern void SkuDetailsConverter_ToListProducts_mEA474FF009079899CA953FDFEDC5F661759DEEF3 (void);
// 0x000002B9 UnityEngine.Purchasing.Extension.ProductDescription UnityEngine.Purchasing.Utils.SkuDetailsConverter::BuildProductDescription(UnityEngine.Purchasing.Utils.IAndroidJavaObjectWrapper)
extern void SkuDetailsConverter_BuildProductDescription_m4E36BB32F811CF96C2BA60F7892EE7AB8EDCE00F (void);
// 0x000002BA System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern void U3CPrivateImplementationDetailsU3E_ComputeStringHash_m1E419737A4A06AB6E1EDF75C1C6A68847614C38D (void);
static Il2CppMethodPointer s_methodPointers[698] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AndroidJavaStore__ctor_mFD8192947D3A2BEA46B0B06B24BF9046F4DC46A3,
	AndroidJavaStore_RetrieveProducts_m0A9A25B60388ADE2E296B6FE537F28EFDA4795C2,
	AndroidJavaStore_Purchase_m0CD5B985E0E8C20107DAD223AAE5E559044652FD,
	AndroidJavaStore_FinishTransaction_mBED612E912164586D76D3127C3B431FDFDC608C2,
	JavaBridge__ctor_m93CAAD5087B323337FC0F75AAADBB2F9BE992D26,
	SerializationExtensions_TryGetString_mA10D737689E7F440AA298870771ECC71F4760029,
	JSONSerializer_SerializeProductDef_m0F82BE7058DDBE10311D6701BB8A7A73B3DE1D29,
	JSONSerializer_SerializeProductDefs_m171143D9523484EC211F250CE95478AB8CEC81BE,
	JSONSerializer_SerializeProductDescs_m7F990AF2D71879D2FF0AA9C61131DD929CF75A23,
	JSONSerializer_DeserializeProductDescriptions_m48C8088DA80E3D47FA22C7F225E508E9586062B1,
	JSONSerializer_DeserializeFailureReason_m978BCEED3BBB14FD2FDE7A0606B6D18D5977A295,
	JSONSerializer_DeserializeMetadata_m7534658E5D25448F74BBC5ED68043EED09E4EFC5,
	JSONSerializer_EncodeProductDef_m533F68A365036B6DC814A5683236D1DBD72400E1,
	JSONSerializer_EncodeProductDesc_m0CE3ABD705298E0C60773B69713A27764CED9987,
	JSONSerializer_EncodeProductMeta_m3536743067A07A6497B5A858DFA7A36866BEC1FB,
	ScriptingStoreCallback__ctor_mB83D0ECAABE3358510962F496E6F4E5E8B1C118A,
	ScriptingStoreCallback_get_products_mBBB2608066F5613AED8F175854CB9B2994CA0A54,
	ScriptingStoreCallback_OnSetupFailed_m9237DDE2142D5C986587EA826B4887E7C1047C04,
	ScriptingStoreCallback_OnProductsRetrieved_mF135EF994750730689D997467807F059C61517E2,
	ScriptingStoreCallback_OnPurchaseSucceeded_mD3C564A932FE48C3B54ADCE10420730068441E0C,
	ScriptingStoreCallback_OnPurchaseFailed_m7C3087B9ADA47CB310B9F461EF4256582ACC3533,
	U3CU3Ec__DisplayClass5_0__ctor_m19D91DE9D26386B9C10698BF5783D0B1AA06CA3E,
	U3CU3Ec__DisplayClass5_0_U3COnSetupFailedU3Eb__0_m1EE564B6878C83C9056BF7EEA81AB2FDC4BC8063,
	U3CU3Ec__DisplayClass6_0__ctor_mDD64BFC3043A87E14E91E09BA62015C09C7E288D,
	U3CU3Ec__DisplayClass6_0_U3COnProductsRetrievedU3Eb__0_m4B455FE83D6D4450F62FDEB0C0278392A9873AA1,
	U3CU3Ec__DisplayClass7_0__ctor_mDB2FB3E0895672786FD01034B4A98EFACBDC053C,
	U3CU3Ec__DisplayClass7_0_U3COnPurchaseSucceededU3Eb__0_m5084E47EEC1EEDDE123BFE774F5C3607B8E4D04D,
	U3CU3Ec__DisplayClass10_0__ctor_m79C4E6079036588FC34F604A32E5C92028BC4543,
	U3CU3Ec__DisplayClass10_0_U3COnPurchaseFailedU3Eb__0_mE0F801567F142237F43FBF3B577CC14229EEEEF0,
	ScriptingUnityCallback__ctor_m7C927B2B1D98227071B626B32F68007EAFFCA3BF,
	AmazonAppStoreStoreExtensions__ctor_mFE99E60E76E3B05CCCFD4ED61C45E6B79C57B6EA,
	FakeAmazonExtensions__ctor_mCEEE278DD75E78801E1E6AE47E0FE20D0611BE2F,
	ListExtension_ToJava_m518E0956FBB589E4F7CCCE7ACC898F86931F4276,
	ListExtension_ToJavaArray_mE5913FA46CFF22A2C5F8D260DCA3B494B685E91E,
	UnityActivity_GetUnityPlayerClass_m49764DC648A0CC93A39A358C04E645BF15008767,
	UnityActivity_GetCurrentActivity_mE22B29676CEBB2D792E6E7843C968DF340B7AC7E,
	ReflectionUtils_HasMethodInInterface_mC3F2B25F316470D6719C6918B70280F254047E9E,
	ReflectionUtils_GetMethod_m642CD4B28F9A0BD7ABE9AAA56EC2160EC5716095,
	ReflectionUtils_InvokeMethod_m56796251563C9B52B36BAD28C3DF7C3358D50BEB,
	FakeGooglePlayStoreExtensions_RestoreTransactions_m8AA63ACDFD5EAB721F314611231CE82599F17FBB,
	FakeGooglePlayStoreExtensions__ctor_m0A9A45D4AE80227A84686775BEC9092BFFB090BC,
	GooglePlayPurchaseCallback_SetStoreCallback_mF73A4B49CBB824B4244EA001C38A447AC5907208,
	GooglePlayPurchaseCallback_SetStoreExtension_m470FEC924FAE997C199DAB60E6A169FBC73A1E58,
	GooglePlayPurchaseCallback_OnPurchaseFailed_m45D13236B3F95686691AB50CBA6F6D3C5EA948B9,
	GooglePlayPurchaseCallback__ctor_m0E2B91A6AAAFE158BD710A8780367C0C6FC6365A,
	GooglePlayStore__ctor_m71479048D51F71641ECBE796C5EA486D275BCF17,
	GooglePlayStore_Initialize_m7768E14D0878F2057C30422294A2322E218EF9C1,
	GooglePlayStore_RetrieveProducts_mBAEDBD93EAE379785669814302247F162D3C9FE7,
	GooglePlayStore_Purchase_m45D0BDA0573FA4A8E41EDDDF115E43C3A4B0BFBB,
	GooglePlayStore_FinishTransaction_mCC862ADBA5E64F8594871166E39F15863FD39525,
	GooglePlayStore_OnPause_mC662A6D4639097578628E3301F2E265EF4E08F09,
	GooglePlayStoreExtensions__ctor_m786F09B2DB7E317BDA870678A0D38C29E933E193,
	GooglePlayStoreExtensions_RestoreTransactions_m8372DF50DE41959306B4EFF259BB0BC358FF54A6,
	GooglePlayStoreExtensions_SetStoreCallback_m8557B90DF6B1C6A87C113FED4D824138355801D6,
	U3CU3Ec__DisplayClass8_0__ctor_mE42FF4329AC6E2D59C545BC194C199162CC8EB3E,
	U3CU3Ec__DisplayClass8_0_U3CRestoreTransactionsU3Eb__0_m4103ED4B337B6614F1EE25BD28D845AA5AF69DDD,
	StoreCallbackExtensionMethods_FindProductById_mAB1D9C5A52F0758D14D2EC7A1B81E23B175ABEA7,
	GoogleCachedQuerySkuDetailsService_GetCachedQueriedSkus_m19337C2C90D21F1505D5DAFB10596E7254B69DA7,
	GoogleCachedQuerySkuDetailsService_ContainsSku_m83313ADD5D03D1B51BDDA538C2AAAF6E06DAD971,
	GoogleCachedQuerySkuDetailsService_AddCachedQueriedSkus_m9AA554F4E3FD47E223DEB270F63ACAE1367A34D2,
	GoogleCachedQuerySkuDetailsService_UpdateCachedQueriedSku_mEF2C50690DEFD1818B5111B8B863BF673F89C3C4,
	GoogleCachedQuerySkuDetailsService__ctor_m20FCCC611E1161616F5815A563C86E79D1C60A99,
	U3CU3Ec__DisplayClass2_0__ctor_m59A269FBD27A115575DCB9FE50903DA3F396065E,
	U3CU3Ec__DisplayClass2_0_U3CContainsSkuU3Eb__0_m020B52E9DA4836442DA2CB422618BF234D6E9705,
	U3CU3Ec__DisplayClass4_0__ctor_m3917EBBC657BE32664CA1C9F17FD6DF6862ECAF5,
	U3CU3Ec__DisplayClass4_0_U3CUpdateCachedQueriedSkuU3Eb__0_m4A5E11BF71CF689E5E1507CACFC7F8B41BEEDB89,
	GoogleFinishTransactionService__ctor_m3B433FEFCF299A727A79635E613B2B36BDF3B2B6,
	GoogleFinishTransactionService_FinishTransaction_mCB58615526F738CC95EC1F9F6A8D7D6B19F044C6,
	GoogleFinishTransactionService_PurchaseNeedsAcknowledgement_mD8D6C4345F573C346D9714AAC8882BCE04C65DF8,
	U3CU3Ec__DisplayClass3_0__ctor_m61784CFF0821404DAF494D9DDFDE79A2A3E962C9,
	U3CU3Ec__DisplayClass3_0_U3CFinishTransactionU3Eb__0_m6A8D44EBA72DEAC6597D92E6E2E18CD1B513EA40,
	U3CU3Ec__DisplayClass4_0__ctor_m129B592E3EC2BEFDD1FDFDA5CDD37C9CA21FA19D,
	U3CU3Ec__DisplayClass4_0_U3CPurchaseNeedsAcknowledgementU3Eb__0_mA2D820FF28F303E90C62E9DB79F722831B7F7571,
	GoogleLastKnownProductService_SetLastKnownProductId_m9545028BD58B93E110A31EC1535D37017F311E6C,
	GoogleLastKnownProductService__ctor_m18F0D7547AD9742F2EFED8F7A439E5ADB34BA09A,
	GooglePlayStoreService__ctor_m9D2B6B15D3F95FAAD27ABEC5340CC72885AC5685,
	GooglePlayStoreService_InitConnectionWithGooglePlay_m33D36E57BF77DB279AED4C7F6A64C69FC020A842,
	GooglePlayStoreService_OnConnected_m70EF8A1AAE247EE1B250EF992DEE927DA9D2AD0A,
	GooglePlayStoreService_DequeueQueryProducts_m0A81464F13FAED8C62B71E31C34747B82109D158,
	GooglePlayStoreService_DequeueFetchPurchases_m152E26CE2143AFE50DCBAAFFA3EEA0C0C07DBDA9,
	GooglePlayStoreService_OnDisconnected_m18D3C3266E34BE8D8ED1C8D0E5CC401B6D098D87,
	GooglePlayStoreService_RetrieveProducts_m2A8C0BA8627CF420EE31B625393107730DA3403E,
	GooglePlayStoreService_Purchase_m135B660562A4E85AA9AB2B3E1907BA15E1E3B4F4,
	GooglePlayStoreService_Purchase_m92BDDDCBFCCB185F2C309CD0607DEE1E6C745167,
	GooglePlayStoreService_FinishTransaction_m7EF088A51997094B94A695F275E816341367DF28,
	GooglePlayStoreService_FetchPurchases_m7AF042CED6006B601904604175BA253B1D8239C1,
	GooglePriceChangeService__ctor_m3BC4BB5BA8916BCFE9B315D5A59A370C83338A39,
	GooglePurchaseService__ctor_mCF46101DFC761038533BED40F74537C4FF1A85FC,
	GooglePurchaseService_Purchase_mE2AA54CEB4F5875767ABF66828D32A258CED45FB,
	GooglePurchaseService_OnQuerySkuDetailsResponse_m846E77D775FF9371347B58A2C760040AA1A3D1F6,
	GooglePurchaseService_VerifyAndWarnIfMoreThanOneSku_mBB92BC0A642529F9D547A83BA90997FD7EA69F8E,
	GooglePurchaseService_HandleBillingFlowResult_m1EE0203CBC393D3CCA2FB6A336E1763A7EC18976,
	U3CU3Ec__DisplayClass4_0__ctor_mECE79A1C2D43E48B16374910E138E8737BA1D6AA,
	U3CU3Ec__DisplayClass4_0_U3CPurchaseU3Eb__0_m2EC8ED1BB3CE4C7F187EFC83F010DE42962EA8F9,
	GoogleQueryPurchasesService__ctor_m3724BD70B7A411BF0C47529346F9677880591522,
	GoogleQueryPurchasesService_QueryPurchases_m5BD00DA3125E416D77F84B06A682587FB5479115,
	GoogleQueryPurchasesService_HandleOnQueryPurchaseReceived_m22B98080CC48D083B2780AEB516D481704F69A16,
	GoogleQueryPurchasesService_QueryPurchasesWithSkuType_m0480643037A6446DA0DD2229CDC3C1F47A4B716F,
	GoogleQueryPurchasesService_HandleGooglePurchaseResult_m39772D1EF9BF8DAD9937EA9EED71A6DF000EE587,
	U3CU3Ec__DisplayClass3_0__ctor_mC3A6E9EBC596FEB24D5D0ADB8C0D921925C36D8D,
	U3CU3Ec__DisplayClass3_0_U3CQueryPurchasesU3Eb__0_m271CFA34204CD31766047B87FEEB9DEC3C6E34CB,
	U3CU3Ec__DisplayClass3_1__ctor_mFF71E8BEFCD45D9212B627BA1E4859FB6ED5FE78,
	U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_m82E727D6963BD44D90A27EDB5BF6C1A51AC93959,
	QuerySkuDetailsService_GetSkuDetailsParamClass_mD789C9610A3285F2C16069BB1D38C780FA51A79D,
	QuerySkuDetailsService__ctor_m7C00433FDE3D6F5A96B11924F5531F976F028B70,
	QuerySkuDetailsService_QueryAsyncSku_mEB2747272F630C9978D3E37489786C1222EAE9EA,
	QuerySkuDetailsService_QueryAsyncSku_mA47C31C84C95B7C99072A86A6F71CBF59CB318FC,
	QuerySkuDetailsService_QueryAsyncSku_m13B46DFCC2757FF93A81C05A92168BAF88FF603F,
	QuerySkuDetailsService_QueryInAppsAsync_mB48B5023AFF30594BB95528B78F9FEF949041B52,
	QuerySkuDetailsService_QuerySubsAsync_m47AA969D448E0DB9F6389A73C97F928BD6E0CABC,
	QuerySkuDetailsService_QuerySkuDetails_m3D0095A5394E9ED9BCE2205333BD87ABCC6E6707,
	QuerySkuDetailsService_ConsolidateOnSkuDetailsReceived_mD04B4D5CF870C8F6CE81DA28623377B07207D33D,
	QuerySkuDetailsService_AddToQueriedSkuDetails_m4109FAF7B2C1B6EE7A84DF24A811AA9679783E22,
	QuerySkuDetailsService_Clear_m7E0B85A438249EC3652E3DD19332A4806AD546AE,
	U3CU3Ec__DisplayClass12_0__ctor_mF3A69242486A37F0F3C214878145853D0C03C475,
	U3CU3Ec__DisplayClass12_0_U3CQueryAsyncSkuU3Eb__0_m91071CB3D7C44E4C28514FD863F490D15D446E1C,
	U3CU3Ec__cctor_m8C7FC15A10E36C647B4FBDE2123F844D123AB27B,
	U3CU3Ec__ctor_m9E7270CC4E58BE57A75A15D3EB56817EFD170580,
	U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_0_m2F9F78E147596D39BA392BFC95C8D46FC38BB5F2,
	U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_1_m4C623A3BE00D7BAEDD57F8CDF41E99B6201F208C,
	U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_0_m099BA26E59BF0BE8D54CBAC075A2D2C7B14F3E39,
	U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_1_m4068CE234A7DB1289912235480968AB86888A3AA,
	U3CU3Ec__DisplayClass16_0__ctor_mE2CB223461078491C78BE34497C58F11991BF07E,
	U3CU3Ec__DisplayClass16_0_U3CQuerySkuDetailsU3Eb__0_m261635F1D3423E025FD1E2AEE410CFE6FDE53850,
	NULL,
	NULL,
	BillingClientStateListener__ctor_m0E7B3F768FD18A6A956084ABBD4C3F1D47356F9A,
	BillingClientStateListener_RegisterOnConnected_mBFA6CB585F539DDFA0068F849F12C983957F7E5E,
	BillingClientStateListener_RegisterOnDisconnected_m0D0D5672A92F07AA4E008D6C0F4109DC9207C4CE,
	GoogleAcknowledgePurchaseListener__ctor_m4F38BF21B91CA5C5DD4FCE9404CEFC16F5B73349,
	GoogleConsumeResponseListener__ctor_mA35D7B60BC3186CC24C784AAE7E90866C2E1AC97,
	GooglePurchaseUpdatedListener__ctor_mF8CDD125ECF20F1E031A4DEFB261E76ED1A79F72,
	SkuDetailsResponseListener__ctor_m697A41335AB3524B8EC1574C886464F6899B607B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	GoogleProductMetadata_set_originalJson_m5C0E6D5C64E37D2744B5407F32506F6CC85A958B,
	GoogleProductMetadata_set_subscriptionPeriod_m1A10B3A40861B4B31B76F327DB8B0021C856949D,
	GoogleProductMetadata_set_freeTrialPeriod_m9D4C410E2B198A9EE0BC225B9DC9E992F18E736D,
	GoogleProductMetadata_set_introductoryPrice_m7E08C069CBB94CBF9199B6A60FC7BA7935080F07,
	GoogleProductMetadata_set_introductoryPricePeriod_mFDD9CCFD0C3C9E1A9DA35AE784035159679A98FD,
	GoogleProductMetadata_set_introductoryPriceCycles_m2AF614505AAA889288EC9F5F44514C3687359788,
	GoogleProductMetadata__ctor_mEA15E6CFA789E648762E43DF28BE017EC760E495,
	GoogleFetchPurchases__ctor_mE989FB6E16D2B7DAA4CC0ECA846ED98E7640BEAC,
	GoogleFetchPurchases_SetStoreCallback_m6B9EC1C8F758892FDE8769CBF7A423D253B2FBA7,
	GoogleFetchPurchases_FetchPurchases_mC0B83DC87149C46BEEDD586C91C88835276B0DD7,
	GoogleFetchPurchases_FetchPurchases_m4DA8FE6E10C7EA78165590D8BD72C14F426F6563,
	GoogleFetchPurchases_FillProductsWithPurchases_m9AD44EE648D2B14C593E505D438A402D833EE9A7,
	GoogleFetchPurchases_OnFetchedPurchase_mDC974C61FD8F93C19F0E87FA006087052F9007AD,
	GoogleFetchPurchases_ForwardPurchasesToStoreCallbackPreUnifiedIap_m34A5FB6A5FC65D9F70D7E5746DB56FA1B3432B54,
	U3CU3Ec__DisplayClass6_0__ctor_mEEF673D5C2BAB6B0398D209735EB524F8E1F35B6,
	U3CU3Ec__DisplayClass6_0_U3CFetchPurchasesU3Eb__0_mD2019480CA1B72AF20CC4B27A57969FF26CC2B71,
	U3CU3Ec__cctor_mC7D319076F3C514CC0FC2135B02B470D2D233070,
	U3CU3Ec__ctor_mE2A129F7941CDFCBEFDFC4A4DD7DCF13D37C0E5D,
	U3CU3Ec_U3CFillProductsWithPurchasesU3Eb__7_0_m85C1C0CE057A2F7FAB99389E55F73357440FD839,
	U3CU3Ec_U3COnFetchedPurchaseU3Eb__8_0_m91EFE1103B0A7A3DC3943ED746BFB2E38E485978,
	U3CU3Ec_U3COnFetchedPurchaseU3Eb__8_1_m0E6494F93B2ED06142764936DA7FEC1D4B2507AB,
	GooglePlayStoreFinishTransactionService__ctor_m88402287A94701141DCECD8A397125AB22C0B896,
	GooglePlayStoreFinishTransactionService_SetStoreCallback_mDC7FE61C8407A724D7026178BFBDCCA66E8A11BC,
	GooglePlayStoreFinishTransactionService_FinishTransaction_m8E3A06EEB7202599844C25FA09409284C3102E62,
	GooglePlayStoreFinishTransactionService_OnConsume_m033E8A9EBE3AF7B072F238F30CC2DF4920252BCA,
	GooglePlayStoreFinishTransactionService_OnAcknowledge_m622FEC17E5E23583B30D823B0366E73506E2B78C,
	GooglePlayStoreFinishTransactionService_HandleFinishTransaction_m19015A055A79CFC6498F5878DF650715EF76C5F9,
	GooglePlayStoreFinishTransactionService_CallPurchaseSucceededUpdateReceipt_m5C8941405E2D21DF582D255AE8763D950A5FBED6,
	GooglePlayStoreFinishTransactionService_IsResponseCodeInRecoverableState_mEABCB59B8DFC44A9F80735A1786BDC24DCBC40C4,
	GooglePlayStorePurchaseService__ctor_mB35E7B6722A899F6FA612AB6D29D3A66DAC77BB0,
	GooglePlayStorePurchaseService_Purchase_m2C751C4904028A4A410737F54540F09DB70A9282,
	GooglePlayStoreRetrieveProductsService__ctor_m879B2CF3383911CAF31F728DD1D5FB8428709DFA,
	GooglePlayStoreRetrieveProductsService_SetStoreCallback_m1D9AC09DC8874BCA6569E14CB8EDB4781F477050,
	GooglePlayStoreRetrieveProductsService_RetrieveProducts_m27316F35B73BA9835CE14096DC42EEF9DAC48555,
	GooglePlayStoreRetrieveProductsService_MakePurchasesIntoProducts_mEEA9AF9099363109FCFE07C506CCD94D09F067EE,
	GooglePlayStoreRetrieveProductsService_U3CRetrieveProductsU3Eb__5_0_mD1C82E151A6E3B08A3043EF0166463CBB486CDE1,
	GooglePlayStoreRetrieveProductsService_U3CRetrieveProductsU3Eb__5_1_m43E9AC304891D5FEB9E42A15BFFB2D744F24B15E,
	U3CU3Ec__DisplayClass5_0__ctor_m8BBF0BECA6D42597B03F1D2CC41B9110A51EB53F,
	U3CU3Ec__DisplayClass5_0_U3CRetrieveProductsU3Eb__2_mD914FE24DADAE1AE2417AA45B4DBADA59107D4C6,
	U3CU3Ec__DisplayClass6_0__ctor_mDC7E680C6B531DF93078611DADC9E1B6E8E717E1,
	U3CU3Ec__DisplayClass6_0_U3CMakePurchasesIntoProductsU3Eb__0_m82C14685A855090F194C15CBC4BCE81B3D0F4451,
	FakeSamsungAppsExtensions_SetMode_m30D22802E4CAF13053EDF3162AC2D90281480E95,
	FakeSamsungAppsExtensions_RestoreTransactions_mE72EB98AE4F38E37AE46186EA976C013320E24C2,
	FakeSamsungAppsExtensions__ctor_m9E80ADDEA88ADE8916E679329BF97CDA9355519C,
	NULL,
	NULL,
	SamsungAppsStoreExtensions__ctor_m1123DE8CB97E75BEAAA1CF84EB555EC83A51EDA1,
	SamsungAppsStoreExtensions_SetAndroidJavaObject_m2B7C3A5B8E21197CBF17BF2BF0AC77AC3059877A,
	SamsungAppsStoreExtensions_SetMode_m51DC42AB8FB1C45097E965E94E9EA5B0FFEF5A01,
	SamsungAppsStoreExtensions_RestoreTransactions_mF4207C8253ADA03C3C6BBE74CE9A9CC799E563EC,
	FakeUDPExtension__ctor_m4FDE880BB2A7D6C0ABD5BFB7B40F180F32756BE8,
	NULL,
	NULL,
	NULL,
	NULL,
	UDP_get_Name_mF69B95677ED7621A2EF199A0F78EEC66A5C818DA,
	UDPBindings__ctor_m2D988709CE6878EAFF257704AEC824DCBE20BE36,
	UDPBindings_Initialize_m443B77C13867133017328E77780C05674AAC35C3,
	UDPBindings_Purchase_mF82FBF9E55CF1CC8FBC6DB21F1758F034B7C9102,
	UDPBindings_RetrieveProducts_m3578C6E5327FE10B198100E6624967926D659424,
	UDPBindings_FinishTransaction_m44155D96C3BA8809943AF557FCABC1FB187ADB9D,
	UDPBindings_OnInventoryQueried_m6BE11821CBC7DB8665F353EFABD0ECB241149BF1,
	UDPBindings_RetrieveProducts_m97D8CAB8E07DFDEFF2CBB24F9E1D6D4CBD1F716B,
	UDPBindings_Purchase_mEAAE9A064BE2F7F035AA9EDF09C0DA3D443D3167,
	UDPBindings_FinishTransaction_mA2A28249C1879C67B97A39066B82E57A0970B45F,
	UDPBindings_StringPropertyToDictionary_m1FA754240E1093EE0841001B87D5D1EDF2FBA88F,
	UDPImpl_SetNativeStore_m5161126F489F498BD30602135B1C794E6C210F18,
	UDPImpl_Initialize_m89CED479AF4359D6F27A276A71BCD982F642DF13,
	UDPImpl_RetrieveProducts_mBFBFD7DC073FEB29FFC1AC69DCCCE4F8D74B42BB,
	UDPImpl_Purchase_m30725E65C3B91F88EA809F7E8666329BE7B78844,
	UDPImpl_FinishTransaction_mB6703A573936BC76098EE8A1A9CA24879335AB3A,
	UDPImpl_DictionaryToStringProperty_m05065C0579EB627A0CC0CEB23ADD0D848A79A174,
	UDPImpl__ctor_m786390014F866BBCDA7EF239232D3A8A91E3B837,
	U3CU3Ec__DisplayClass7_0__ctor_m0E4AACDD59FF0DB967DDEB43CF51F99BEA3CAF45,
	U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_mA9C57D7C0C92DF5B0634A83BE650053723877F15,
	U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_m5F743F3746D24FA5839204E91BE9CF6D302D6EF4,
	U3CU3Ec__DisplayClass8_0__ctor_m8EE5A3BDAF22E5C684D66DF7DFD97DE61501B4AA,
	U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mF4D25EC1526649F267807D16ACC84ED23EA10AAB,
	UDPReflectionUtils_GetTypeByName_mF6DF993F506B25CBB22C580F58117D62C7A4E7A0,
	UDPReflectionUtils_GetAllAssemblies_mC6B8103D7CD7E02646EFC1207D1D6E787F098AB6,
	UDPReflectionUtils_GetTypes_mBBA454F09223FAB67296A168CFBF1AB88731F3AA,
	UDPReflectionUtils__cctor_m804A91A8BF370C7CE89FF1D1B207E9C84B6830E2,
	U3CU3Ec__DisplayClass6_0__ctor_m4381DDFE65E51CCDF8C8AC5205FA8513AEFCF62D,
	U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_m3DBD9CFA9FFF1DB1DCC81A64FDA4DA68693443ED,
	InventoryInterface_GetClassType_m81C57312DDEA19EAD72BB7997AE10D3582388499,
	InventoryInterface_GetProductListMethod_mBB1DC022B415E2C8105EC8EBD2219A3E22CB2494,
	InventoryInterface_GetPurchaseInfoMethod_mB07AD57F2307A880D2C8473D2DC557E991440747,
	InventoryInterface_HasPurchaseMethod_m33F95AB422228841212B6E5CC32A196002C5C365,
	ProductInfoInterface_GetClassType_m6629C01C4F30CDC1ACF09562CD59E96DEFDAC29D,
	ProductInfoInterface_GetCurrencyProp_m132EFD864794570BB29C9F5945B620162BF6BFBF,
	ProductInfoInterface_GetDescriptionProp_mE9272BF665C4048DDBEC6AD84823D7AE14C8854C,
	ProductInfoInterface_GetPriceProp_m28B12B3E523360BE25E94ED14D3BDDF39E13DE09,
	ProductInfoInterface_GetPriceAmountMicrosProp_m2B0CEFC94FFBD9F57A6CB128153B1F617A278B48,
	ProductInfoInterface_GetProductIdProp_m069BE56CED7CA61FACCE2EC3A9FABDA7BE4860FF,
	ProductInfoInterface_GetTitleProp_m2F339121BE5B8EBA998C8BD75EDECFA4DAE46906,
	StoreServiceInterface_GetClassType_m794FAF2427A022C570686CC9BCD097563D447D06,
	StoreServiceInterface_GetNameProp_m152F863B20E678702E9E8A73FBB5357E5027689D,
	StoreServiceInterface_GetName_m893615C3E2A2FBDB76970F5C25624455E3F0ED60,
	UdpIapBridgeInterface_GetClassType_m53A99233F92901AB76C1A1688AA594621F773E82,
	UdpIapBridgeInterface_GetInitMethod_mB6851401BF92B97C1738D9FE3EC90A00794A1554,
	UdpIapBridgeInterface_GetPurchaseMethod_mF4186DD5565210444BDADDC872F4292E372211EC,
	UdpIapBridgeInterface_GetRetrieveProductsMethod_m0E76B8FF655D3D448AFFDC10B925BAABAB24C58B,
	UdpIapBridgeInterface_GetFinishTransactionMethod_mEF79F6E9718FAF23CDD3BEAEAAD079F4B767C673,
	UserInfoInterface_GetClassType_mEF7F85331D733FB4DF84C7046B453771912D0258,
	AppleStoreImpl__ctor_m15BD74B3A070C736639B29EFA28C9BBA6343DA6C,
	AppleStoreImpl_SetNativeStore_m42F96F51F93AC97A4C137CC7CD76252A310DF293,
	AppleStoreImpl_OnProductsRetrieved_m7408164517CA7AA34712BCC6CACB9A5FEA1084C4,
	AppleStoreImpl_RestoreTransactions_m0BFB7F4688AD2E50DCC1A200ADF3CDB51595E1B7,
	AppleStoreImpl_RegisterPurchaseDeferredListener_m20B0CD2B3C2AA1DFD3BE335E3C69BFDC530F48FC,
	AppleStoreImpl_OnPurchaseDeferred_m01AD523AF2C2957682BDF80000B0B30A62978D11,
	AppleStoreImpl_OnPromotionalPurchaseAttempted_m0AE06FDBCFDFE15DC593FD14D046660ACEE4A66E,
	AppleStoreImpl_OnTransactionsRestoredSuccess_m650434E104C4283533AA4C07818E1D7B02732425,
	AppleStoreImpl_OnTransactionsRestoredFail_m02C0A69AD9BD599629E77AC128F1D442CD5063FD,
	AppleStoreImpl_OnAppReceiptRetrieved_m5E83615AF918436F45EBA5746EDC0FAFE4C2B9BD,
	AppleStoreImpl_OnAppReceiptRefreshedFailed_m22DF2739D845B95C613D2F048232C8798F568AB9,
	AppleStoreImpl_MessageCallback_mE99DF09282C9C88D2FE5FD235ECF603C7E856270,
	AppleStoreImpl_ProcessMessage_m25AE34743B4C9C1FE97E6215479334F610C45867,
	AppleStoreImpl_OnPurchaseSucceeded_m7F9CBD85F8332D7ED73456A8D816ABEA9A4DF824,
	AppleStoreImpl_getAppleReceiptFromBase64String_m689E35915B81B0FF4C75BBAF8B81EE2BFB05B680,
	AppleStoreImpl_isValidPurchaseState_m5BAD2538C43EBA1636DD79C81EA924BF6242742B,
	U3CU3Ec__DisplayClass24_0__ctor_m924E0EF301F4EDAA63F908BE31DAFD95AE57FAC0,
	U3CU3Ec__DisplayClass24_0_U3COnProductsRetrievedU3Eb__0_mF54737018F6B801CE4FD18661A2A28F046BD6354,
	U3CU3Ec__cctor_m9297400E2F0C50745C4534FA0FE152B2645F122D,
	U3CU3Ec__ctor_m3255B2863A1D0B926ADB9F6FE812725FDCE91757,
	U3CU3Ec_U3COnProductsRetrievedU3Eb__24_1_m5A76F30A38D0DEB038A0916A39A0D944E36EAF31,
	U3CU3Ec_U3CisValidPurchaseStateU3Eb__41_1_mE8D109157E2C0741BCFF12CF8A108B8D746823FD,
	U3CU3Ec__DisplayClass37_0__ctor_m820CF2EEAE8738840668FDD65B1F0AAF8E10CF65,
	U3CU3Ec__DisplayClass37_0_U3CMessageCallbackU3Eb__0_mFECC25ED33E9D1CBE3F03DBA736E8A92C81C6263,
	U3CU3Ec__DisplayClass41_0__ctor_m38E279135979DFDB27447DA1D33BF933A75CC71E,
	U3CU3Ec__DisplayClass41_0_U3CisValidPurchaseStateU3Eb__0_m39FFBB0A657F6A31BD0B5818FCE969BF47902EC0,
	FakeAppleConfiguation__ctor_m608B08B7FD2D1466F70B580BF59CE365F8815A03,
	FakeAppleExtensions_RestoreTransactions_m930642FE40D412D4A7BAC8A15BF670D233255C84,
	FakeAppleExtensions_RegisterPurchaseDeferredListener_m51970DFAB32A8BEC7D6EEFD62FE116886F162EE6,
	FakeAppleExtensions__ctor_m9F84BE3E3BA9B4D9024C8F4DC5B40DB337B1B114,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	JSONStore_get_disableStoreCatalog_m196EDCAD4174BAE450CCBC0B8C91D76CC45A4F2F,
	JSONStore__ctor_m691B43840B1C303C23844D91F5C9516735355D00,
	JSONStore__ctor_mDC8A0FD3D421A1A89A46082FA1268768667C1B1E,
	JSONStore_SetNativeStore_m1E863AA67D539BD7826A873BF878E7A1E103A7E2,
	JSONStore_UnityEngine_Purchasing_IStoreInternal_SetModule_m9D831B0FA47C53AC6AA97EDCAF7DDC83BE944EA6,
	JSONStore_Initialize_m9BF93C3E7AF32E1C77D03DC065F5D7D16705C105,
	JSONStore_RetrieveProducts_m5ADD581F571881E2FE0838AA7EFFE7E097A72E9F,
	JSONStore_Purchase_m8A1B8F4BA8DBF28FB95DAE577DD021717A880695,
	JSONStore_FinishTransaction_mD0EEBB135A0D1790EC2363D24E7F5E51BDEAA421,
	JSONStore_OnSetupFailed_m368128E0856B8F26AC606AF82CD6D46609C05714,
	JSONStore_OnProductsRetrieved_m633C8BD4D73C8B95A271D7F0967F13D69A3F6DD1,
	JSONStore_OnPurchaseSucceeded_mB0B35DFBF5F04973CCA3179EF994DAE49465DA36,
	JSONStore_SendPurchaseSucceededEvent_m33E6E46B8370513DBE4684C50C2B0FE880CB4A1E,
	JSONStore_OnPurchaseFailed_mAB9B6F46AB4D5244717ECEF57E7C2A436A887CDE,
	JSONStore_OnPurchaseFailed_mE4EBBF29742BBB0694C22ED3DFFBD476C84D143D,
	JSONStore_SendPurchaseFailedEvent_m753D9ACFCC3FFFA582E0085C5EEF709458ABA8CE,
	JSONStore_GetLastPurchaseFailureDescription_mCC028F2ACBA0C3753370DB41CD3D03E7EAD72FB0,
	JSONStore_GetLastStoreSpecificPurchaseErrorCode_m49571F3ED9C150573CA77E24A3EC0760A08F7EB9,
	JSONStore_ParseStoreSpecificPurchaseErrorCode_mFF68B82A59B56DACA71199B49DE318F8150056EC,
	NativeStoreProvider_GetAndroidStore_m2DF39C205E630E4C457638E72CF1F8A7770CC68E,
	NativeStoreProvider_GetAndroidStoreHelper_m78486D193249F6BE6C5FD225E33F173BD79EBC80,
	NativeStoreProvider_GetStorekit_mC7B53021FEC5FE6D80C9DA6D2F92208D1003874D,
	NativeStoreProvider_GetFacebookStore_m5C785364EABBE05498919B3E5AE0DB46CD157E50,
	NativeStoreProvider__ctor_m76EE09D0D5A48F6349DFEE0E63F5C8213EEFBFF1,
	CloudCatalogImpl_CreateInstance_m6C5FE7386487B392773677FA90DA57B7B4348E33,
	CloudCatalogImpl__ctor_mF8A9753A51C15C54AE4A5BEDAB1F5AB758BEDC3E,
	CloudCatalogImpl_FetchProducts_mC36E0E348C6BAF3BF1EFB1966F1E1F5FA33A3ABA,
	CloudCatalogImpl_FetchProducts_mD1864A6540D6F8CCFEB19AB50D6BDAC19BCE4DBB,
	CloudCatalogImpl_ParseProductsFromJSON_m437D10D9BEA10E04D1D90E9C68F37442541322B9,
	CloudCatalogImpl_CamelCaseToSnakeCase_mBADB1DD3AAC538A34F54C64B38E35F01C0273C11,
	CloudCatalogImpl_TryPersistCatalog_mE6B9244EB1A2FC9795AA6B0686812231581065CD,
	CloudCatalogImpl_TryLoadCachedCatalog_m4B6FD79481CFBFB78CE5EB52A56BFBA717E293D1,
	U3CU3Ec__DisplayClass10_0__ctor_m3D660F98E0C25483184222130CC7A3BD4BC5BE50,
	U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__0_mCB1A6AFD33F1734CCBB3C0C95031C75FAAC5B70C,
	U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__1_m89603244B362F866035D229398B82C50568FBED1,
	U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__2_m6AC2B6757044BD7CABDEBEA2437EE85149A201A3,
	U3CU3Ec__cctor_mA01C033C107146CD72784741C4794F0FFF6EC935,
	U3CU3Ec__ctor_m55342727C50326DF6E0359A144C58FD22D568FE4,
	U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_0_mE823F64A4CE6B091709CE5810E7AA8984EA61F61,
	U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_1_mF04B1601090191A7C6E9C4B97CECAFF3ABEEF463,
	FakeManagedStoreConfig__ctor_m8E7031E72648CA7004DB67B34B8F6D47E780AC1B,
	FakeManagedStoreExtensions__ctor_m22D2FEBF5FC1A5BE2E1B829CE231884B3F0F4747,
	StoreCatalogImpl_CreateInstance_mCDDABD205A9B062BD13B54CC1982E9E382B0D11F,
	StoreCatalogImpl__ctor_mD3DF28EDF6D90868A84232B33808CB9B009FFE5A,
	AdsIPC_InitAdsIPC_m0A0D1888FDEE69025D45B855A21DAD16158428F9,
	AdsIPC_VerifyMethodExists_m4A11DABDAD001A5564C630E739A6B8ED45AD165F,
	AdsIPC__cctor_m591997BF7D1A5BE5B96F71505CDC940F13AF411C,
	EventQueue__ctor_m1D5A260EAF9E401229B6F2A36DE699E59D9116F2,
	EventQueue_Instance_m0FE87196873E5C5CD4D2F1405735BB9AD6FC4626,
	EventQueue_SetAdsUrl_m4B6521D96777DB2DDBC37D052A926606DADDB4BE,
	EventQueue_SetIapUrl_m9C2B08961951B2586C5B2C743E315039431F9EFC,
	AsyncWebUtil_Get_m48F75AAAA24CB44E488FF544052D6618B3269314,
	AsyncWebUtil_Post_mD0DAEA8939EE14D2E9CB7599BF53076FEC7BCDEC,
	AsyncWebUtil_Process_m83D9D8533F6BCE51B23FAF9F4F0F3F8B36ED33E1,
	AsyncWebUtil_Schedule_mA2006053212C1664D91373955FE7F0AF9967E894,
	AsyncWebUtil_DoInvoke_mB4AE0EC4FC52D62F7B59A0841C4A684B83557B2D,
	AsyncWebUtil__ctor_m5FF0C48F61D18E408BCA8B1DA82D737B5E0B0BF2,
	U3CProcessU3Ed__2__ctor_m280327C8078A66D4F4E5310D477A1D5981558CCD,
	U3CProcessU3Ed__2_System_IDisposable_Dispose_m2017F8EC92BBAA2B987B0E10991292130BBA466A,
	U3CProcessU3Ed__2_MoveNext_mE5F4091F265EC2F456AC95C95CC58CD7859D545A,
	U3CProcessU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m152D4F0EA14AAC2AC7A30154267DBB7E0D8224F7,
	U3CProcessU3Ed__2_System_Collections_IEnumerator_Reset_mF87F0C2C869ED55776A6807889272149DBCDE6ED,
	U3CProcessU3Ed__2_System_Collections_IEnumerator_get_Current_mCF829C822E7BAC855A7D217570A278338401DD62,
	U3CDoInvokeU3Ed__4__ctor_m635C7EEFBA67FAAA5FFC7D7961A0C6B3CDF4947F,
	U3CDoInvokeU3Ed__4_System_IDisposable_Dispose_m78653CFA392B88A1B908C77EBBB651E403907AA0,
	U3CDoInvokeU3Ed__4_MoveNext_m717F2F79FC0574801C320DD0063CBEF517F245CF,
	U3CDoInvokeU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA5E7D8A51181DD8957A94C99972A55A57548CEC8,
	U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_Reset_m9D2A457EBD872A098F80E1FC0B41A22AF448AE83,
	U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_get_Current_mDFB764619AAC1EA8D08CEC678888B251D91D4761,
	NULL,
	NULL,
	QueryHelper_ToQueryString_m4DB52CBE3D4E46BD50BC2D98CFC55F08E31573C2,
	Price_OnBeforeSerialize_mF5786372919FFC962D38CF72828EEBE6D73ADB53,
	Price_OnAfterDeserialize_m1221186D14BB604A4E57BC0D0846A785920917C2,
	Price__ctor_mE33FEC5CD5B7B9B42F2A6398D87484D44B75991A,
	LocalizedProductDescription_get_Title_mBBD2177698E1FCBEBB5638F4102F4EDACEE9B9C8,
	LocalizedProductDescription_get_Description_mF6EEEFE1C01109F9018D1C639B6320901A696984,
	LocalizedProductDescription_DecodeNonLatinCharacters_mB2618050BA68BF4FCD6C9A16A239F2577F02720A,
	LocalizedProductDescription__ctor_m04BCB98096C258B35A63DE178D301352F197060C,
	U3CU3Ec__cctor_m6CA258D09CC16429B53F9642A087842AADFB65C8,
	U3CU3Ec__ctor_mBEDA65BA87FA6E78F474CF94FCA175CACEED49A6,
	U3CU3Ec_U3CDecodeNonLatinCharactersU3Eb__11_0_m0B1A22E4B48F0875FFDB71AE3DA78E4E0DF8A1A6,
	ProductCatalogPayout_get_typeString_m7EB27B665D1B7529B46EB59EE162920FE1A66297,
	ProductCatalogPayout_get_subtype_mD976433C4E4160F17741420843C933B46A9D2B3C,
	ProductCatalogPayout_get_quantity_mCA6C834EEF2DA4F7672AF2485C6B20FD15D37B86,
	ProductCatalogPayout_get_data_mD6473846E8425BAAB2152CC02ABC42E907CB5647,
	ProductCatalogPayout__ctor_m3766919F25A5C245C48F418420738354AC23AF35,
	ProductCatalogItem_get_Payouts_mBF6C453E0564A4E544990282532131AE5EA177F4,
	ProductCatalogItem_get_allStoreIDs_m2BAF9A4FB57A7E240C5052DEF3226EF86291E1EB,
	ProductCatalogItem__ctor_m56F2DCEAFDA230EC3A97806A42A5DF7820BE1A10,
	ProductCatalog_get_allProducts_mF8FE704F2C0726F1B32C25FE5679FD897CFEFE82,
	ProductCatalog_get_allValidProducts_mF93A6FC38F798762A137CCA4AAC59A2A66E5A829,
	ProductCatalog_Initialize_m04CBA0A33C63C8A8D106CDA709D9F2D654EA7B1B,
	ProductCatalog_Initialize_m325899906228EDD7EF5115EB816D1757637647CB,
	ProductCatalog_IsEmpty_m788C8660BCB1E9D357838D5660226C10C0F5F96C,
	ProductCatalog_Deserialize_m9D8113139EC506470576EE8DDD4B7491DB7CDE6D,
	ProductCatalog_FromTextAsset_mBE7B0393C64CD67538DA86BAFF2519B95CF74563,
	ProductCatalog_LoadDefaultCatalog_m41A667039FF71AD74C993747247E5BB84DA3942F,
	ProductCatalog__ctor_m9CB354157A7BD920AA6951F4D44B03F1EE6DF97F,
	U3CU3Ec__cctor_m203C882EB65ADD17FB129C78597F20D298CE0446,
	U3CU3Ec__ctor_m977D020280DF8DA25C6CFA49D60A5616FB08B392,
	U3CU3Ec_U3Cget_allValidProductsU3Eb__8_0_mE652F496736348EA60E1E9B56DCAE4FB663DE046,
	NULL,
	ProductCatalogImpl_LoadDefaultCatalog_m9433446FE01511F2CB9AD144DA9D79A1C4B12AA8,
	ProductCatalogImpl__ctor_m0F6174A714BCA985D55D402D370D5CF34FA49BCF,
	ProfileData_get_AppId_m21C5CE0DA91C84CE31F3FD8C4CA5308BF5EB13C8,
	ProfileData_set_AppId_m6C3E92D27D678CD5F147B8CFD95C134120A2569A,
	ProfileData_get_UserId_m0E105FC0000E898DEE9527C69BB0A51D131763E4,
	ProfileData_set_UserId_mB2656ADB1B98F5AB93A030E6BD0641A6877F69CF,
	ProfileData_get_SessionId_m7DE207C6F8996A679181D0C22F5A4C4A63703B6A,
	ProfileData_set_SessionId_mD85EB399DBF8A6C26E2C41DC2A38749CAB613A4A,
	ProfileData_get_Platform_m552A623374A79A4B7529B31DD99C83F89DEB9C62,
	ProfileData_set_Platform_m8199E98D42035B2E0973553F8313EA5BD7F1F5F5,
	ProfileData_get_PlatformId_m04193677476727E1233201F59C2C049DB02AECF1,
	ProfileData_set_PlatformId_mFE467ECE584982F28A955182D93902440C06D073,
	ProfileData_get_SdkVer_mBF50A519554B01FADC52DEE026822C320FDA179B,
	ProfileData_set_SdkVer_m7F788A9BD6545DC0429B3685233A393E8ABB252C,
	ProfileData_get_OsVer_m1B33B8020E98C0423A55287655B387F4796BD47C,
	ProfileData_set_OsVer_m49170EFD3B4128DBCE2439B6EEE6C2FACDEE4E51,
	ProfileData_get_ScreenWidth_mF6DC74138660465BFE7A6CD7D0530CFB9010D115,
	ProfileData_set_ScreenWidth_mA0D6CE340732A08FC1C38D5F9EB567050272234E,
	ProfileData_get_ScreenHeight_mF36A381BB06E10CE79D2A89D29D9C59FE59F50A7,
	ProfileData_set_ScreenHeight_mA18A65FCBF5B8E2880D07F2042FE626590C6DEDE,
	ProfileData_get_ScreenDpi_m8C3FD88FD3E62EB4FF37746BF52CB6DD310B9F8A,
	ProfileData_set_ScreenDpi_m8D2F1B871564193C8AF1D3E3428D1484F1462804,
	ProfileData_get_ScreenOrientation_m660B26A160DA490F032C8564793C5463B12C42D2,
	ProfileData_set_ScreenOrientation_m76ADDB29CED459FA8F7C3A9CE8EDCF65B4156ECB,
	ProfileData_get_DeviceId_m41A459592A7B0905B708A2A209F9B5C9E471512F,
	ProfileData_set_DeviceId_m93FFBB7E435F6DA2775FCC4E6DB66C5872B4F178,
	ProfileData_get_BuildGUID_m6A0A0E6CF64D8652F16A3DD032598653FE4FE4CD,
	ProfileData_get_IapVer_m9EE900F1C01AC2CCB77671BC1DCCA0937FADF246,
	ProfileData_set_IapVer_mEEE5507A8C5735CD46D46D6C86E1FED4E77E3709,
	ProfileData_get_AdsGamerToken_mFC074A4267C38745461680DA0D5E4B6D52E945E8,
	ProfileData_set_AdsGamerToken_m4EE4F07E03FA275DFB1A68C74A4CB3A1D43D1B4E,
	ProfileData_get_TrackingOptOut_mA1621EC3315735BAAB8C2048FF364237A537A8E1,
	ProfileData_set_TrackingOptOut_mD9A5BF622CB05A821E3044C02232D530569D89ED,
	ProfileData_get_AdsABGroup_m6C5C9315BFBA056CBB930C0ABC753E8246E19F5E,
	ProfileData_set_AdsABGroup_mA5C4223DF1B2A26F124FE0389583EBDF6A7DDEB1,
	ProfileData_get_AdsGameId_m828DA700D85E69FFE6B876241974EA7125B94279,
	ProfileData_set_AdsGameId_m33150BF3C5BFB86412D651CA50CF5CD0A7AD8E15,
	ProfileData_get_StoreABGroup_m24A2253A205BAAB00C6DC9FD51F8EFD6F50303E2,
	ProfileData_get_CatalogId_m6129B4FF40405BA38E08AF30B2DE81DC84D01304,
	ProfileData_get_StoreName_m80E0A81E66ABB7B6D82AA4B698823B256EA912EA,
	ProfileData_set_StoreName_m2553119894D01DFB0ED95CBABBA74F6D10AB961D,
	ProfileData_get_GameVersion_m0B3845D276469F811DD9DF2230B06B158DA76995,
	ProfileData_set_GameVersion_m286B2D340470A5BFF4FB6C72357981E9A914F7C4,
	ProfileData_get_StoreTestEnabled_mE51505DE349ACEFD6946D4CB3D836C237B71D3F3,
	ProfileData__ctor_m05C1FA6C4C434CABF62A456D5ADA4D58AF6E1935,
	ProfileData_GetProfileDict_m2889714B030CE4DAED9638FFC55584B28C1CD02F,
	ProfileData_GetProfileIds_m615A46222008436BAF31C78CD867AFAFA63DBFCB,
	ProfileData_Instance_m3D16F88E3FB3CFF7B3D619CBDE8D721067AB7460,
	ProfileData_SetGamerToken_m5326976CC2DCA6BF670CB0BE943B029CF179C8C4,
	ProfileData_SetTrackingOptOut_m802B0447E2AE9306A3501C7D2E27486531353B51,
	ProfileData_SetGameId_mD4F86A26F66E846806604AA03D079CB4CD5874FA,
	ProfileData_SetABGroup_mBB086373441DEEC724183434E3DD7C964630B845,
	ProfileData_SetStoreName_m8273A67CDD9F69FFB34DA231BE1F9AD165215058,
	Promo_IsReady_m767C2CA50FF13DCBFB0A2F972D98102327071E74,
	Promo_Version_m8BE80D4771A83CC526F38A1C1546E92EF4289CBC,
	Promo__ctor_m35AC49585A7283E0249DDCC5FE987D4B21906F88,
	Promo_InitPromo_m438B7ABCE956A712CEE89C49C718C27AB3D3BAAB,
	Promo_InitPromo_mB60CFFC4EBB8EAD1F5B9BDF464559E7403CFD53E,
	Promo_UpdatePromoProductList_m7C7003CA414AB0485C346DD827F58AF0508E7A8C,
	Promo_ProvideProductsToAds_m99B96A92B6F746B3DF7373081924CBACDD906F91,
	Promo_ProvideProductsToAds_m42A76A0387707E1058124DD8563C92064E1427C0,
	Promo_QueryPromoProducts_m9F17EA0D16EA4B3DB463FDF36DB37C47329FA0ED,
	Promo_InitiatePromoPurchase_mE9B8A6D93A730B323AF0E351E0B93DBA0CC0190C,
	Promo_InitiatePurchasingCommand_m3F50D49543A75F3AA2987E58AE6391FD324F0EE6,
	Promo_ExecPromoPurchase_mB0531E1798FE69D64A77C6C9773F4FDBDA2705E7,
	Promo__cctor_mC65585468306F8010BF1BB5F6712C919BFEE15A2,
	StandardPurchasingModule_get_m_persistentDataPath_m12532D8F2C4B471C6DDA9BE921206877A8161D10,
	StandardPurchasingModule_set_m_persistentDataPath_m61365235F4DBA41AB4FC37B018A644EE2BA32A3A,
	StandardPurchasingModule_get_util_m87B02FC563D11D6C02EF602B517EB05FA72DB018,
	StandardPurchasingModule_set_util_m13DD17658B1F4ABCFD5C21AABD9B71660C66CB3B,
	StandardPurchasingModule_get_logger_mBFF7481ED12DF22255D4456A2F9ABB192435C795,
	StandardPurchasingModule_set_logger_m40F4797AD8E0E680B1F24F9E62EF115F400BFBBC,
	StandardPurchasingModule_get_webUtil_m3A46011A03DE50F093C88C629526FE870F37C8B7,
	StandardPurchasingModule_set_webUtil_m2EE4DDE770B20F1E1DA3A5CA93CBCA08CA0AA1AE,
	StandardPurchasingModule_get_storeInstance_m41C072D8DA395ABCE52B77EB8B5BAFCBC5A8BF38,
	StandardPurchasingModule_set_storeInstance_mB66BCE643C775865D4F525CB578807506C5987C0,
	StandardPurchasingModule__ctor_m2E50C88DFD034A3F3566A6C993622A208E3AEB7C,
	StandardPurchasingModule_get_appStore_m9A0786DEBB135FDF28778AE1D40005556339A90E,
	StandardPurchasingModule_get_useFakeStoreUIMode_m4C123B143721CBABC5A45EF80F86D38C7A04DDE7,
	StandardPurchasingModule_set_useFakeStoreUIMode_m6F535270064B46E328D8312DB75852E70BEDA4B6,
	StandardPurchasingModule_get_useFakeStoreAlways_mFA7F567C35E8925EF3CB35542868C98B499408D1,
	StandardPurchasingModule_set_useFakeStoreAlways_m9FC634E43083974E05569338375D01F7B19B0198,
	StandardPurchasingModule_Instance_m077628141769BC82450A5313D877FC8A801FA1FC,
	StandardPurchasingModule_Instance_m7D93F772AA34C52993F246BCDD5F33507A17829F,
	StandardPurchasingModule_Configure_m1DE768E4D28A82FE46CA46AE667411B5DAC95638,
	StandardPurchasingModule_InstantiateStore_m90C380628CE9AE2508EEE9D663DE0AC1FA76F9D7,
	StandardPurchasingModule_InstantiateAndroid_m307856293FBA5E97FB4CA5387C8BA8EB7AC9CFB4,
	StandardPurchasingModule_InstantiateGoogleStore_m430F411D02A6AB669CEC32755D6257AE03EC0D8A,
	StandardPurchasingModule_BindGoogleExtension_mFFC532F7C0C897E8B76ED1B09C6D5153DB3A7F08,
	StandardPurchasingModule_BuildGooglePlayStoreExtensions_mBE75F2DC21500B7274EC530CDB95C6E2DC6AF97B,
	StandardPurchasingModule_BuildGooglePlayStoreServiceAar_m7FD5DEE6D20669182E39E5656071BB064066DF5B,
	StandardPurchasingModule_InstantiateUDP_mCACEB299645CB73D0CFE6239122E64FDCB716354,
	StandardPurchasingModule_InstantiateAndroidHelper_mFE25EB724120EE1F01DB62520DE2B3215598241C,
	StandardPurchasingModule_GetAndroidNativeStore_m65B93C59904F38221FE23858764D3455552A7630,
	StandardPurchasingModule_InstantiateApple_mEC06095E364E4072640BB91525DAF59761D14DBE,
	StandardPurchasingModule_UseMockWindowsStore_m7B59FB6F9E96127D20A1981B6AC109E790F8E3EB,
	StandardPurchasingModule_instantiateWindowsStore_mA2706320C823F2F0725EFA666452F51B83F052C6,
	StandardPurchasingModule_InstantiateFacebook_m0D2CD7243C6D20F185DA9DAE4D606172B9BC608D,
	StandardPurchasingModule_InstantiateFakeStore_mFBF40088B9F8077D048395685D69FA8D9EC2BED3,
	StandardPurchasingModule__cctor_mB8739CBC28CB842589720B49DF2AD2986BA7D66D,
	StandardPurchasingModule_U3CConfigureU3Eb__49_0_m6800ABE5B38C2B21D0558FE7C09C397F8C5850C3,
	StoreInstance_get_storeName_mA35540CE83C33BEDCC535479A957F938CE36A164,
	StoreInstance_get_instance_m83A08405713123DE3AD3E38DCAE1566F64CC1FA6,
	StoreInstance__ctor_mACF98826D10A80FFCC62AA6E5A110292F7ED1AE0,
	MicrosoftConfiguration__ctor_mC9E2B3D6BD06760C4976539FBED442B42979E11E,
	MicrosoftConfiguration_set_useMockBillingSystem_m76F2198F6317012D23019A26D79BD96C04BCC230,
	StoreConfiguration_get_androidStore_m6F8752C7F2D1DFCCD2FAD73DDF6BC606433BEA23,
	StoreConfiguration_set_androidStore_m70762BBD8EB530411449FBD9285126F1243E1997,
	StoreConfiguration__ctor_m772081659C43B0A6D306E3BC2C8A759EC4F6BB71,
	StoreConfiguration_Deserialize_m5A8F15BDD6672E7434F5E20ED0331EA0B08FCC73,
	SubscriptionInfo__ctor_m18546DE0CA1C59E39D5BDE6222FD2BD2B2163D16,
	SubscriptionInfo_isExpired_mCD8BA5E2171EF63D7AC6E72BCBDFB25A79057433,
	ReceiptParserException__ctor_m3AAC4DD1E9CDF662F37555C6B686DC99F7707145,
	InvalidProductTypeException__ctor_mDA7175745E4721BEEB1ADDFB11D10C871D925B2E,
	FakeTransactionHistoryExtensions_GetLastPurchaseFailureDescription_m305EBDE3B8EA9F9CE383FEA6675073C663CFCB92,
	FakeTransactionHistoryExtensions_GetLastStoreSpecificPurchaseErrorCode_m27BE1A889BD6726264C074C1BD7A7FFB414924E6,
	FakeTransactionHistoryExtensions__ctor_m0E8824B43A1220C0950AE7D1D1A4EEBB7363A064,
	NULL,
	NULL,
	FakeMicrosoftExtensions_RestoreTransactions_mDD55B61BCB98B80BC1BA984F92A524C5DC820D70,
	FakeMicrosoftExtensions__ctor_m10C9B717A66BFBD8C758330C1AB42BA9FEB82589,
	NULL,
	NULL,
	WinRTStore__ctor_m5BF61B4DD340F511C4E1EB1BA12BEED01D46AC7F,
	WinRTStore_SetWindowsIAP_m0C6619B2B2CFE778EB7AE55C87C2D21F1CDCA173,
	WinRTStore_Initialize_m44DF69010963E8FCE49A75E67245EF5903796963,
	WinRTStore_RetrieveProducts_mBB69CE2EBA8E6A8C0450B23C21E5568389993026,
	WinRTStore_FinishTransaction_mA3B99B854F45A9063EF3624BC3E034EA2F6B78EF,
	WinRTStore_init_mDD0EB1D58C2E61D36D551B25098D19CDD12C4390,
	WinRTStore_Purchase_m80B943F8D30DADD1B6CADA340541DD76E356AEAB,
	WinRTStore_restoreTransactions_m83B976B24B1AB12E0AE1D063BDB34E3DF952CF9A,
	WinRTStore_RestoreTransactions_mEE335E114ACB8EB895FFF1357C20D4D46791512B,
	U3CU3Ec__cctor_m54FA0EAF1DEF5053ED765209581D0A3D1BB17A5D,
	U3CU3Ec__ctor_mC0DD701EABAE151521168625EA0FAEBF6FD6C813,
	U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m1D799FEB9B7EA8262F966C67C8DF4B179120B781,
	U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_mB40747A95AC9AC34029908B144C1A29B5067A636,
	FacebookStoreImpl__ctor_mEF78B812CE6C8B18095488A48FE36E38C39023D0,
	FacebookStoreImpl_SetNativeStore_m8F2457FCAB77487DBFB903F7CB8CE637E64836AA,
	FacebookStoreImpl_MessageCallback_m22696E14F2518E2D452BCF1431300FCEC0A58FB2,
	FacebookStoreImpl_ProcessMessage_m6EADC6D96149990EFD5782AF9A461DFCF51DD746,
	U3CU3Ec__DisplayClass6_0__ctor_m1ADD1DD8339C4DE6D87B0C8D9CCE29BE60AF634F,
	U3CU3Ec__DisplayClass6_0_U3CMessageCallbackU3Eb__0_m4A5EFAFD30B4311E1DC7AC430BCEA94166459266,
	FakeStore_get_unavailableProductId_m264754ACAC4D633156B64C6C9698CD01AA121BAB,
	FakeStore_Initialize_mC690C7CD01179E3D84FDB27441D4938C86021CA9,
	FakeStore_RetrieveProducts_mD76EEBB247FB03EA66B872DA0136795DD7EA2EBC,
	FakeStore_StoreRetrieveProducts_m9E967B5876D2CC7411860B5672722C19F4274902,
	FakeStore_Purchase_m5D4F293A880E2F674DC6380D03E4560C6B22FA23,
	FakeStore_FakePurchase_m8F416FAC9F8977B1100FAC3109B4092A738791BD,
	FakeStore_FinishTransaction_m5DA7C484441150252205D97ED9AAC4199C5308FB,
	FakeStore_FinishTransaction_mE4D58D8637E6CB8BE16E2764BD5F095EAD183E7B,
	NULL,
	FakeStore__ctor_m132BB1833ED938632A79E732499BF3607A5D16BE,
	FakeStore_U3CU3En__0_m6100E9F34B3D462DE1ED15CB147A96104EB7DA93,
	U3CU3Ec__DisplayClass13_0__ctor_m9C9A7204D206E8ABE652BF46BBDFBE31280BE415,
	U3CU3Ec__DisplayClass13_0_U3CStoreRetrieveProductsU3Eb__0_m0B9CC885EDE1BE2957B9FCD7532672156E5C6AD0,
	U3CU3Ec__DisplayClass15_0__ctor_m5B5EE0D48C0AE0E86F8FC6B28F75D0A8166B1116,
	U3CU3Ec__DisplayClass15_0_U3CFakePurchaseU3Eb__0_mF9E6AEC77FE2D7B0C8F057F7D5303B728AC76CC0,
	UIFakeStore__ctor_mAF83518C697D10EE641B2DEE7B0C2E44DE1632EE,
	NULL,
	UIFakeStore_StartUI_m8C292EB48C23C50805E2C6A3BBCD0F2EC7701615,
	UIFakeStore_InstantiateDialog_m8B5BE382B0A26C3760B143993C2E2F85FD8AF861,
	UIFakeStore_CreatePurchaseQuestion_m6680B2953589BBBBC3879169C2917ECADB3091FA,
	UIFakeStore_CreateRetrieveProductsQuestion_m7EDF92FD7360A5D5BF538FEF19417D283A8FE2DD,
	UIFakeStore_GetOkayButton_m8AB6651EA66C035DB826CF2839D2F924D16C13CC,
	UIFakeStore_GetCancelButton_m8C5B403D319A6EB198593CC84904B5F979580AA4,
	UIFakeStore_GetCancelButtonGameObject_mF18526DEED5D5FAB02C82AE4D03B2D3DDC27F7DE,
	UIFakeStore_GetOkayButtonText_m7AB9398C4C2CD61D1E34D582E12B5AC19C312D71,
	UIFakeStore_GetCancelButtonText_mDE7EDDF15877032CEA24B61F50B28C77047D1D42,
	UIFakeStore_GetDropdown_mD7321917FB63CC02DD6FADAC98084D9A3D55CCFC,
	UIFakeStore_GetDropdownContainerGameObject_m0D125D556C19E1A8E35D23DD7B3C5D083396F912,
	UIFakeStore_OkayButtonClicked_m6EAC8EB7F8788149F6C6769093DAFCB05EB52C02,
	UIFakeStore_CancelButtonClicked_m1E19E8B67ACDE7DB3477DF72D191C2763152BEAD,
	UIFakeStore_DropdownValueChanged_m5F3B1AA36C5136E80E870997CDCB0EE26F78B8F7,
	UIFakeStore_CloseDialog_m25D9B676F2D5927E29337C8E7C7AE04A735CF450,
	UIFakeStore_IsShowingDialog_m8E2156C8B39B602278BA0E00644E507C941BC976,
	UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m3C3396D6AEF281389FF8C56D8B3A7A5CE14199B6,
	UIFakeStore_U3CInstantiateDialogU3Eb__16_1_m076BCD5BB79FE60DB33A4DA95FD9F11CE3148A3A,
	UIFakeStore_U3CInstantiateDialogU3Eb__16_2_m54BFFB98FAE6A84D9D005EFA3CB44769D90DBDF0,
	UIFakeStore_U3CInstantiateDialogU3Eb__16_3_m696FC99A2F031280AA1160E92DD08490823C0FBF,
	DialogRequest__ctor_mAEBA5B8D29D35C31EEEDFCC2FE1F3C07F1C701F1,
	LifecycleNotifier_OnDestroy_mCBBD8438554B6A08048D3CCE61F67E63CBB8B396,
	LifecycleNotifier__ctor_m15C071234DCC80AB31B1FB108945B849C403CE0D,
	NULL,
	NULL,
	U3CU3Ec__cctor_m7520E474DA8339F026BCFAF0FA2662347A82109A,
	U3CU3Ec__ctor_mFAD327DF99F2BD3E77902EE3B087223463C313EC,
	U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_m72A35DE3EAA0E5EC8E8EF7345AC2A6E9E83A0F26,
	FileReference_CreateInstance_mB3463AFC41FA81580F572CAAA060C2FED089B3F9,
	FileReference__ctor_m4DBCE8FD6BFB7B5146698565E270A33BEF80886F,
	ProductDefinitionExtensions_DecodeJSON_m1206520A26C86C855C61B9A82E38F7A70310AF2E,
	NULL,
	UnityUtil_get_currentTime_m900C819AC0B74B1B5E04A90CD8EEB515D653113E,
	UnityUtil_get_persistentDataPath_m806A2F5A0F66CA2E68584598C1241660C545020F,
	UnityUtil_get_deviceUniqueIdentifier_mC186930BD4F9E2F7A419F2BDF398F59D017B52E7,
	UnityUtil_get_unityVersion_m90FE658057DAF49E24FDF809B1C3236E428BD587,
	UnityUtil_get_cloudProjectId_mAA38E536DA7708EFD69FEAE576BAD10974C47FEE,
	UnityUtil_get_userId_m4A57F82046BF3C97F8625C765B2DB6E6FEC807B4,
	UnityUtil_get_gameVersion_mA25F0D3BB0C839B18EAD32EF311898A8F6086228,
	UnityUtil_get_sessionId_m2E96F87FDF4B7D789847EFF3851FD460A1ED42BC,
	UnityUtil_get_platform_m47179F777F77516E27CC257AA44A3F97BBFD5177,
	UnityUtil_get_isEditor_mCD7CD6E31CAD25E365B0CCF90B2408F1A10B8477,
	UnityUtil_get_deviceModel_m1CE98F9EEF885E4237B16981A4FCA055DDCA8080,
	UnityUtil_get_deviceName_mBB2C0946B3AF32EDB5CBEA6536C283973ADEE353,
	UnityUtil_get_deviceType_m51C7E5885210B134E75228D9435B3C2513B6F51E,
	UnityUtil_get_operatingSystem_mF4D114B7DDAED944CD533B031E278F89AEE04CCE,
	UnityUtil_get_screenWidth_m8DDFF305BFCB21DA293C40B7E3259B63A7B39E41,
	UnityUtil_get_screenHeight_mAFC3803EEE66B61D2DF149FF70F80F35E4D86548,
	UnityUtil_get_screenDpi_m0C0AF6EE4AA5EBE9FD2EF55C7B825E74B5E3A44F,
	UnityUtil_get_screenOrientation_m9EE6654D8D898CB61A88B06A60855A1C9189180E,
	UnityUtil_Uniject_IUtil_InitiateCoroutine_mB69F6ECE7D61A4A959298C42229EC380F4146F41,
	UnityUtil_Uniject_IUtil_InitiateCoroutine_m6B0820F571D193D8E79B9F661B62CFD46EE45E80,
	UnityUtil_RunOnMainThread_m2CFD6575E2B23F2BEF95FB1AD06F3588418E71CC,
	UnityUtil_GetWaitForSeconds_mE2FC40904CDFE770EA7F78102C13EF0A99882F6C,
	UnityUtil_Start_mA307E8038CA5F0D4B71206E2E69B73388F3120F7,
	NULL,
	NULL,
	UnityUtil_PcPlatform_mB107F99E107C5D263CEFF1F482155B583B722DB9,
	UnityUtil_DebugLog_m79A01330958A7ED59E42F54C3F5353B57E18FA8B,
	UnityUtil_DelayedCoroutine_mF4DA2059281FF41657FEB0A6E57527425AAF827C,
	UnityUtil_Update_mFC67C2FAEA0CF6D1EBE084DA2D98A6A9FEC46ECA,
	UnityUtil_AddPauseListener_m77E3158513A48DAAD863A40ABF654C8351ED7E95,
	UnityUtil_OnApplicationPause_m60F193E0EF6C3593C07EEAF0CFDFFDFDCF57DF1C,
	UnityUtil_IsClassOrSubclass_mB47AA12B5938B04F8F70276A652EFC64B8B12F9E,
	UnityUtil__ctor_m70418A4B2FCABF9B1F26B7D769DCF0FEA04D17DF,
	UnityUtil__cctor_mA9F79FF48AB88EEE3B9E317A8CA701F190BC4751,
	U3CDelayedCoroutineU3Ed__49__ctor_m92DC94AFFDD36CD7E9CFEA01D898FAFF68FE0556,
	U3CDelayedCoroutineU3Ed__49_System_IDisposable_Dispose_m8B3BC0F48FABA4528F4B99EBD19DCCF9439C6080,
	U3CDelayedCoroutineU3Ed__49_MoveNext_m7250206E591597DB5A995F3F1BBD34F0AC352562,
	U3CDelayedCoroutineU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1D48B1A610F4D61C2AA93B49800802810F6DF338,
	U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_Reset_mFF323408CB992F902E78904791D014E77E21BD98,
	U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_get_Current_m60475CA1432F5F7F8ABCFA48F5B6B8BA835563CB,
	BillingClientResponseEnum_GetBillingResponseCodeJavaObject_m99CA5A7903DA3E64A7192A6B4E7C748070B8A5E6,
	BillingClientResponseEnum_OK_mFDCADCB505890E0CEAE241A3D9B5303D6BF32357,
	GoogleBillingClient_GetBillingFlowParamClass_mB9D6428EA0044FD8DEA85197AB990C404E799DF5,
	GoogleBillingClient_GetConsumeParamsClass_m1FC4CE0BDF03768EA02A3CB804C6B1524334EA23,
	GoogleBillingClient_GetAcknowledgePurchaseParamsClass_mC388A183E1CED06A29F3B09605C08C93B949CE92,
	GoogleBillingClient_GetBillingClientClass_m315109EFD496D228117FC2F27DB2FBE1BEEFB5B0,
	GoogleBillingClient__ctor_m09549B57B3F59AB730BC3882BF63458F465BB4DE,
	GoogleBillingClient_StartConnection_m9BEBDB9690F318608CA5A0EFEC4CDDE1340C65C4,
	GoogleBillingClient_QueryPurchase_m0AF4D962EB44F7F5B5C0B219B78F6C793D9B9589,
	GoogleBillingClient_QuerySkuDetailsAsync_mB7B85891EF16F9CDFB59414B9941DF0BD221BEA5,
	GoogleBillingClient_LaunchBillingFlow_mE7CC7C6AC4FEED61157F75EAF532208BE7F559A0,
	GoogleBillingClient_MakeBillingFlowParams_m81CCC3E34EB4BDCD88EB58571393B53BED3A2343,
	GoogleBillingClient_SetObfuscatedProfileIdIfNeeded_mEFFA8E3791C383002543F609E4F7DFD1D73EE88F,
	GoogleBillingClient_SetObfuscatedAccountIdIfNeeded_m72C76326F4972F13E7315B5B885A566AB68FA061,
	GoogleBillingClient_ConsumeAsync_m3B102B5BAF9529EDB2A51A9EBA328C16A1262B41,
	GoogleBillingClient_AcknowledgePurchase_m7E6FCD58BBE8F8FC62F508DB3E0C8E4DE1EB8C34,
	GoogleBillingResult__ctor_m358F74C128B712D6AD2889AC761AD44124068BF2,
	GoogleBillingStrings_getWarningMessageMoreThanOneSkuFound_mF064224A88888E50BDD88479656DD20BC61CDAD4,
	GooglePurchase__ctor_mDBCB3F4B6AAECEEA34AFD367A44CCE728FB271F2,
	GooglePurchase_IsAcknowledged_m84A74A70DC2CFADA8BD42CB8492A7BEB46216236,
	GooglePurchase_IsPurchased_m6E2F58CD59A504B71293A489D70A09DCEAC61381,
	GooglePurchaseResult__ctor_mB06778D6A20F6233F5A78F736C2EA0DCD1441324,
	GooglePurchaseResult_FillPurchases_m1384A7A08383C5DD9D54F39E44065936976DCF71,
	GooglePurchaseStateEnum_GetPurchaseStateJavaObject_mB8C45161526869D8097806ACF123083DFF87F677,
	GooglePurchaseStateEnum_Purchased_m1B4A0E1435BCDD710EF9E4D0712FC648AC7E5A3A,
	GoogleSkuTypeEnum_GetSkuTypeJavaObject_m5B38CA95A849715FE18A00CD354871E03C808B38,
	GoogleSkuTypeEnum_InApp_m1B83756EC2FDBD45EB2DBCA14F2E866F2367E7B8,
	GoogleSkuTypeEnum_Sub_mE8ACC3DD247CD327772CF419BFECD911A4A8B98B,
	ProductDescriptionQuery__ctor_mC2AE63C0E7E12A3945B966E27345CB967BD58FD0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AndroidJavaObjectWrapper_get_androidJavaObject_m6281EF71AD201B426EE6D0CD8BCB7298EAC1CFAF,
	AndroidJavaObjectWrapper__ctor_mC7F64BC125AE9FEF8B1BE171A9DFEDC9E46D8520,
	NULL,
	GooglePurchaseHelper_MakeGooglePurchase_m79A68AAF7BAF89C451FAA8C3F6FD205DCB336AB4,
	U3CU3Ec__DisplayClass0_0__ctor_m637DFA19E8F4BE214D3269E8C18A64920377F706,
	U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m09DB214AF3B12DA06395936A773E304AAEDD3713,
	GoogleReceiptEncoder_EncodeReceipt_m8DB1A17D262406AF181D19B4A240BC06D64B645F,
	GoogleReceiptEncoder_FormatPayload_m6FD53C545D44DBFB93CC7C7796B23BD183666D4F,
	SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m21913D2469086B7387B9261B779D79DD12986D42,
	SkuDetailsConverter_ConvertSkusDetailsToProducts_m556B51D4248F4DA7285973CF9370679152633264,
	SkuDetailsConverter_ToListProducts_mEA474FF009079899CA953FDFEDC5F661759DEEF3,
	SkuDetailsConverter_BuildProductDescription_m4E36BB32F811CF96C2BA60F7892EE7AB8EDCE00F,
	U3CPrivateImplementationDetailsU3E_ComputeStringHash_m1E419737A4A06AB6E1EDF75C1C6A68847614C38D,
};
static const int32_t s_InvokerIndices[698] = 
{
	10,
	14,
	14,
	14,
	14,
	14,
	195,
	14,
	10,
	10,
	790,
	14,
	28,
	147,
	26,
	26,
	94,
	26,
	26,
	27,
	27,
	26,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	27,
	14,
	32,
	26,
	220,
	26,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	27,
	26,
	23,
	0,
	0,
	4,
	4,
	129,
	1,
	209,
	26,
	23,
	26,
	26,
	26,
	23,
	1108,
	26,
	26,
	27,
	27,
	31,
	27,
	26,
	26,
	23,
	26,
	1,
	14,
	9,
	26,
	27,
	23,
	23,
	9,
	23,
	9,
	27,
	490,
	0,
	23,
	26,
	23,
	9,
	26,
	23,
	1023,
	26,
	23,
	23,
	23,
	23,
	220,
	26,
	128,
	490,
	26,
	27,
	220,
	128,
	125,
	152,
	27,
	23,
	26,
	27,
	26,
	209,
	28,
	27,
	23,
	26,
	23,
	26,
	4,
	27,
	27,
	27,
	27,
	27,
	27,
	220,
	220,
	26,
	23,
	23,
	26,
	3,
	23,
	9,
	28,
	9,
	28,
	23,
	27,
	14,
	26,
	23,
	26,
	26,
	220,
	220,
	220,
	26,
	26,
	26,
	26,
	23,
	26,
	26,
	27,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	32,
	5401,
	27,
	26,
	23,
	26,
	28,
	26,
	26,
	23,
	26,
	3,
	23,
	9,
	9,
	9,
	26,
	26,
	27,
	490,
	220,
	490,
	220,
	47,
	26,
	26,
	27,
	26,
	26,
	1,
	26,
	23,
	23,
	26,
	23,
	9,
	32,
	26,
	23,
	32,
	26,
	23,
	26,
	32,
	26,
	23,
	26,
	220,
	27,
	27,
	4,
	23,
	26,
	220,
	27,
	27,
	92,
	26,
	27,
	27,
	0,
	26,
	26,
	26,
	27,
	27,
	152,
	23,
	23,
	92,
	92,
	23,
	92,
	0,
	4,
	0,
	3,
	23,
	9,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	23,
	26,
	26,
	23,
	1370,
	490,
	220,
	28,
	94,
	23,
	9,
	3,
	23,
	41,
	41,
	23,
	23,
	23,
	9,
	23,
	26,
	26,
	23,
	26,
	26,
	157,
	28,
	14,
	26,
	93,
	23,
	26,
	26,
	26,
	26,
	26,
	27,
	27,
	26,
	26,
	220,
	220,
	26,
	27,
	27,
	14,
	10,
	119,
	157,
	157,
	28,
	14,
	23,
	0,
	933,
	26,
	147,
	1,
	0,
	26,
	14,
	23,
	26,
	26,
	23,
	3,
	23,
	564,
	111,
	23,
	23,
	1718,
	933,
	47,
	50,
	3,
	27,
	1,
	26,
	26,
	125,
	1395,
	168,
	147,
	61,
	23,
	32,
	23,
	93,
	14,
	23,
	14,
	32,
	23,
	93,
	14,
	23,
	14,
	125,
	147,
	0,
	23,
	23,
	23,
	14,
	14,
	0,
	23,
	3,
	23,
	28,
	14,
	14,
	507,
	14,
	23,
	14,
	14,
	23,
	14,
	14,
	3,
	177,
	93,
	0,
	0,
	4,
	23,
	3,
	23,
	9,
	14,
	14,
	23,
	14,
	26,
	14,
	26,
	195,
	223,
	14,
	26,
	10,
	32,
	14,
	26,
	14,
	26,
	10,
	32,
	10,
	32,
	790,
	380,
	14,
	26,
	14,
	26,
	14,
	14,
	26,
	14,
	26,
	1246,
	1247,
	866,
	3135,
	14,
	26,
	866,
	14,
	14,
	26,
	14,
	26,
	1246,
	26,
	14,
	14,
	0,
	26,
	1247,
	26,
	3135,
	26,
	50,
	4,
	23,
	1709,
	5413,
	4,
	115,
	664,
	4,
	47,
	47,
	47,
	3,
	14,
	26,
	14,
	26,
	14,
	26,
	14,
	26,
	14,
	26,
	4693,
	10,
	10,
	32,
	93,
	31,
	4,
	43,
	23,
	14,
	14,
	14,
	26,
	2,
	0,
	14,
	28,
	28,
	14,
	31,
	14,
	14,
	14,
	3,
	26,
	14,
	14,
	27,
	26,
	31,
	10,
	32,
	32,
	0,
	27,
	10,
	23,
	23,
	14,
	10,
	23,
	14,
	10,
	23,
	23,
	31,
	23,
	220,
	26,
	26,
	26,
	27,
	32,
	27,
	31,
	23,
	3,
	23,
	9,
	28,
	26,
	26,
	1370,
	490,
	23,
	23,
	14,
	26,
	26,
	26,
	27,
	27,
	27,
	27,
	-1,
	23,
	220,
	23,
	934,
	23,
	934,
	23,
	-1,
	3382,
	23,
	28,
	28,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	23,
	23,
	32,
	23,
	93,
	23,
	23,
	23,
	32,
	23,
	23,
	23,
	-1,
	-1,
	3,
	23,
	28,
	2,
	27,
	1,
	-1,
	116,
	14,
	14,
	14,
	14,
	14,
	14,
	195,
	10,
	93,
	14,
	14,
	10,
	14,
	10,
	10,
	790,
	14,
	28,
	147,
	26,
	34,
	23,
	-1,
	-1,
	50,
	152,
	61,
	23,
	26,
	31,
	94,
	23,
	3,
	32,
	23,
	93,
	14,
	23,
	14,
	4,
	112,
	4,
	4,
	4,
	4,
	26,
	26,
	28,
	27,
	168,
	168,
	28,
	28,
	490,
	490,
	26,
	0,
	27,
	93,
	93,
	27,
	27,
	4,
	112,
	4,
	4,
	4,
	220,
	26,
	26,
	26,
	28,
	27,
	168,
	490,
	490,
	490,
	26,
	220,
	26,
	490,
	26,
	26,
	26,
	26,
	128,
	26,
	27,
	27,
	-1,
	14,
	26,
	-1,
	1,
	23,
	9,
	131,
	2,
	152,
	0,
	0,
	0,
	98,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[2] = 
{
	{ 0x06000114, 21,  (void**)&AppleStoreImpl_MessageCallback_mE99DF09282C9C88D2FE5FD235ECF603C7E856270_RuntimeMethod_var, 0 },
	{ 0x0600021E, 22,  (void**)&FacebookStoreImpl_MessageCallback_m22696E14F2518E2D452BCF1431300FCEC0A58FB2_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[6] = 
{
	{ 0x0200009F, { 5, 2 } },
	{ 0x06000232, { 0, 5 } },
	{ 0x06000252, { 7, 5 } },
	{ 0x0600026A, { 12, 2 } },
	{ 0x0600026B, { 14, 2 } },
	{ 0x060002B0, { 16, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[17] = 
{
	{ (Il2CppRGCTXDataType)2, 108956 },
	{ (Il2CppRGCTXDataType)3, 94934 },
	{ (Il2CppRGCTXDataType)1, 94012 },
	{ (Il2CppRGCTXDataType)2, 94012 },
	{ (Il2CppRGCTXDataType)3, 94935 },
	{ (Il2CppRGCTXDataType)2, 94021 },
	{ (Il2CppRGCTXDataType)3, 94936 },
	{ (Il2CppRGCTXDataType)2, 108957 },
	{ (Il2CppRGCTXDataType)3, 94937 },
	{ (Il2CppRGCTXDataType)2, 94030 },
	{ (Il2CppRGCTXDataType)3, 94938 },
	{ (Il2CppRGCTXDataType)3, 94939 },
	{ (Il2CppRGCTXDataType)1, 94031 },
	{ (Il2CppRGCTXDataType)2, 94031 },
	{ (Il2CppRGCTXDataType)1, 94032 },
	{ (Il2CppRGCTXDataType)3, 94940 },
	{ (Il2CppRGCTXDataType)3, 94941 },
};
extern const Il2CppCodeGenModule g_StoresCodeGenModule;
const Il2CppCodeGenModule g_StoresCodeGenModule = 
{
	"Stores.dll",
	698,
	s_methodPointers,
	s_InvokerIndices,
	2,
	s_reversePInvokeIndices,
	6,
	s_rgctxIndices,
	17,
	s_rgctxValues,
	NULL,
};
