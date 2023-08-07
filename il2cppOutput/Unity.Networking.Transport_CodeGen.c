#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"



extern const RuntimeMethod* UDPNetworkInterface_AbortSendMessage_m2D2277C29CF9721D4143404F51FAFD7DA7B3ED9A_RuntimeMethod_var;
extern const RuntimeMethod* UDPNetworkInterface_BeginSendMessage_mE825F4B82CCD7FF06BEA57AF7D66AAEAC50646D4_RuntimeMethod_var;
extern const RuntimeMethod* UDPNetworkInterface_EndSendMessage_m98325DF88A408B9482B6BF26B0F2495C55645A11_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Boolean Unity.Networking.Transport.network_address::Equals(Unity.Networking.Transport.network_address)
extern void network_address_Equals_mC9677EEEF83970F9C047554855E8142CB2B01033_AdjustorThunk (void);
// 0x00000002 System.Int32 Unity.Networking.Transport.NativeBindings::network_terminate()
extern void NativeBindings_network_terminate_mEF70B9B8D12FC0F4F49563851C133B8D88641133 (void);
// 0x00000003 System.Int32 Unity.Networking.Transport.NativeBindings::network_create_and_bind(System.Int64&,Unity.Networking.Transport.network_address&,System.Int32&)
extern void NativeBindings_network_create_and_bind_m57FC3336FCB886B173D34E8EEA72A856D8A7E967 (void);
// 0x00000004 System.Int32 Unity.Networking.Transport.NativeBindings::network_close(System.Int64&,System.Int32&)
extern void NativeBindings_network_close_m7A1F3BEADF84033AED54F8375356DD81DE05A00D (void);
// 0x00000005 System.Int32 Unity.Networking.Transport.NativeBindings::network_set_nonblocking(System.Int64,System.Int32&)
extern void NativeBindings_network_set_nonblocking_mBFB251AADCFBDAE5314ADBD7847DC3E65CEC930A (void);
// 0x00000006 System.Int32 Unity.Networking.Transport.NativeBindings::network_set_send_buffer_size(System.Int64,System.Int32,System.Int32&)
extern void NativeBindings_network_set_send_buffer_size_m3FF9871B752F9B824A7D7C7D9AA12090282959CD (void);
// 0x00000007 System.Int32 Unity.Networking.Transport.NativeBindings::network_set_receive_buffer_size(System.Int64,System.Int32,System.Int32&)
extern void NativeBindings_network_set_receive_buffer_size_m47E74091BB5FA99C25060BF63D670DCB090EC742 (void);
// 0x00000008 System.Int32 Unity.Networking.Transport.NativeBindings::network_get_send_buffer_size(System.Int64,System.Int32&,System.Int32&)
extern void NativeBindings_network_get_send_buffer_size_m8C68A1EB225809415C670322082E8D6D9D97DD96 (void);
// 0x00000009 System.Int32 Unity.Networking.Transport.NativeBindings::network_get_receive_buffer_size(System.Int64,System.Int32&,System.Int32&)
extern void NativeBindings_network_get_receive_buffer_size_m94B7D3A6B41A4BED2C830F3901EBF8E306191BDE (void);
// 0x0000000A System.Int32 Unity.Networking.Transport.NativeBindings::network_set_connection_reset(System.Int64,System.Int32)
extern void NativeBindings_network_set_connection_reset_mFF9086D9DE39F34E301F9E23F7A78CDF2DEA35A8 (void);
// 0x0000000B System.Int32 Unity.Networking.Transport.NativeBindings::network_sendmsg(System.Int64,System.Void*,System.Int32,Unity.Networking.Transport.network_address&,System.Int32&)
extern void NativeBindings_network_sendmsg_mF5550350119C08CDEDB5D9D6429D3BA858138A3F (void);
// 0x0000000C System.Int32 Unity.Networking.Transport.NativeBindings::network_recvmsg(System.Int64,System.Void*,System.Int32,Unity.Networking.Transport.network_address&,System.Int32&)
extern void NativeBindings_network_recvmsg_mC758C4B214BD84EBF42F5B89ACB1D17FA89BF474 (void);
// 0x0000000D System.Void Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate::.ctor(System.Object,System.IntPtr)
extern void BeginSendMessageDelegate__ctor_mBABA51ACBE18164BDD4C0464E98106AB70E9B8C7 (void);
// 0x0000000E System.Int32 Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate::Invoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr,System.Int32)
extern void BeginSendMessageDelegate_Invoke_mDDD214EC6CCDB7BEE5D8C89AB02AE972D6D993A8 (void);
// 0x0000000F System.IAsyncResult Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate::BeginInvoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern void BeginSendMessageDelegate_BeginInvoke_mF33DCD6745C49511E93B834A07D1E2FA999F8D55 (void);
// 0x00000010 System.Int32 Unity.Networking.Transport.NetworkSendInterface_BeginSendMessageDelegate::EndInvoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IAsyncResult)
extern void BeginSendMessageDelegate_EndInvoke_mD3133AD3D9E86EF85290896400A9A1BFC93C27BF (void);
// 0x00000011 System.Void Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate::.ctor(System.Object,System.IntPtr)
extern void EndSendMessageDelegate__ctor_mE5E0E71FFF4EA46BB0C20F05F55FD4215C802BA8 (void);
// 0x00000012 System.Int32 Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate::Invoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.IntPtr,Unity.Networking.Transport.NetworkSendQueueHandle&)
extern void EndSendMessageDelegate_Invoke_m4CC0B2D83D4F050FB85C6BD3E4CA71D3AEE07B28 (void);
// 0x00000013 System.IAsyncResult Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate::BeginInvoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.IntPtr,Unity.Networking.Transport.NetworkSendQueueHandle&,System.AsyncCallback,System.Object)
extern void EndSendMessageDelegate_BeginInvoke_m1DDCC310373CB71D57A64095B5AB7F23A45AD68B (void);
// 0x00000014 System.Int32 Unity.Networking.Transport.NetworkSendInterface_EndSendMessageDelegate::EndInvoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkInterfaceEndPoint&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IAsyncResult)
extern void EndSendMessageDelegate_EndInvoke_mB3FD95156A770DA1C1CFFAEDAE8290B838F06A8B (void);
// 0x00000015 System.Void Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate::.ctor(System.Object,System.IntPtr)
extern void AbortSendMessageDelegate__ctor_mDB6B7932166F5A16426EA890D990CDFE6C6EECC5 (void);
// 0x00000016 System.Void Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate::Invoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr)
extern void AbortSendMessageDelegate_Invoke_mE73985F95E05E17F7F8061204618069273F9F176 (void);
// 0x00000017 System.IAsyncResult Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate::BeginInvoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr,System.AsyncCallback,System.Object)
extern void AbortSendMessageDelegate_BeginInvoke_mAA235CC906C01B97608DCC388F54CFBF043FD041 (void);
// 0x00000018 System.Void Unity.Networking.Transport.NetworkSendInterface_AbortSendMessageDelegate::EndInvoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IAsyncResult)
extern void AbortSendMessageDelegate_EndInvoke_m5E7C6E499CDA054ECC8ADA4FC0866482C4181598 (void);
// 0x00000019 System.Void Unity.Networking.Transport.NetworkEndPoint::.cctor()
extern void NetworkEndPoint__cctor_m7B3E38065FBA46DA95BB7160E4BC76DCCB857163 (void);
// 0x0000001A System.UInt16 Unity.Networking.Transport.NetworkEndPoint::get_Port()
extern void NetworkEndPoint_get_Port_m38690BA3B68376261CAC75686FC1366971F7B742_AdjustorThunk (void);
// 0x0000001B Unity.Networking.Transport.NetworkFamily Unity.Networking.Transport.NetworkEndPoint::get_Family()
extern void NetworkEndPoint_get_Family_mAAAFD4DD31A8696D1EA376AD3493CE573AE23FB3_AdjustorThunk (void);
// 0x0000001C System.Void Unity.Networking.Transport.NetworkEndPoint::set_Family(Unity.Networking.Transport.NetworkFamily)
extern void NetworkEndPoint_set_Family_m95C94A903A391BE27287807461EE02829DEB44C1_AdjustorThunk (void);
// 0x0000001D Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkEndPoint::GetRawAddressBytes()
extern void NetworkEndPoint_GetRawAddressBytes_m3216D65ED4A40A668EC65242DD93AAD68976C6A6_AdjustorThunk (void);
// 0x0000001E System.Void Unity.Networking.Transport.NetworkEndPoint::SetRawAddressBytes(Unity.Collections.NativeArray`1<System.Byte>,Unity.Networking.Transport.NetworkFamily)
extern void NetworkEndPoint_SetRawAddressBytes_m1BB613BF547BED8BF76D6783A07186B514D58242_AdjustorThunk (void);
// 0x0000001F System.UInt16 Unity.Networking.Transport.NetworkEndPoint::get_RawPort()
extern void NetworkEndPoint_get_RawPort_mED5AC3808B0E01F161DE5E3D036DAB43125F3B93_AdjustorThunk (void);
// 0x00000020 System.Void Unity.Networking.Transport.NetworkEndPoint::set_RawPort(System.UInt16)
extern void NetworkEndPoint_set_RawPort_mD0E1D11C0544798A61F5570AB74F88897A896176_AdjustorThunk (void);
// 0x00000021 System.String Unity.Networking.Transport.NetworkEndPoint::get_Address()
extern void NetworkEndPoint_get_Address_m71B08B9A8394D42577350E72DF4A30F23AD9F5A8_AdjustorThunk (void);
// 0x00000022 System.Boolean Unity.Networking.Transport.NetworkEndPoint::get_IsValid()
extern void NetworkEndPoint_get_IsValid_m9AA29EF5B4960261F50354EEB97D8C709AE0909B_AdjustorThunk (void);
// 0x00000023 Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::get_AnyIpv4()
extern void NetworkEndPoint_get_AnyIpv4_mF5C5A510219907BFC8B888F94B1DE258CB387F97 (void);
// 0x00000024 System.Boolean Unity.Networking.Transport.NetworkEndPoint::TryParse(System.String,System.UInt16,Unity.Networking.Transport.NetworkEndPoint&,Unity.Networking.Transport.NetworkFamily)
extern void NetworkEndPoint_TryParse_m23163432CF3A1B4E98C2D76A046668663B89445A (void);
// 0x00000025 System.Boolean Unity.Networking.Transport.NetworkEndPoint::op_Equality(Unity.Networking.Transport.NetworkEndPoint,Unity.Networking.Transport.NetworkEndPoint)
extern void NetworkEndPoint_op_Equality_m89D4B029CF44EB80585F8A25D67E30B42AEA5336 (void);
// 0x00000026 System.Boolean Unity.Networking.Transport.NetworkEndPoint::Equals(System.Object)
extern void NetworkEndPoint_Equals_m6DC01312B2C5E44E7FD56E48515ACD6FCEEC0D95_AdjustorThunk (void);
// 0x00000027 System.Int32 Unity.Networking.Transport.NetworkEndPoint::GetHashCode()
extern void NetworkEndPoint_GetHashCode_mD2585758E84F0263DDEC02472E81EEF26C905002_AdjustorThunk (void);
// 0x00000028 System.Boolean Unity.Networking.Transport.NetworkEndPoint::Compare(Unity.Networking.Transport.NetworkEndPoint)
extern void NetworkEndPoint_Compare_mAE8457D4CD6A7D684D1B8D1019F01DC6976044F3_AdjustorThunk (void);
// 0x00000029 System.String Unity.Networking.Transport.NetworkEndPoint::AddressAsString()
extern void NetworkEndPoint_AddressAsString_m0AFA40D9D4CB91FE013615316E52F89F9D881756_AdjustorThunk (void);
// 0x0000002A System.UInt16 Unity.Networking.Transport.NetworkEndPoint::ByteSwap(System.UInt16)
extern void NetworkEndPoint_ByteSwap_m2E1932FB51C3E00EAE4933CB437D92D100CE78FF (void);
// 0x0000002B System.UInt32 Unity.Networking.Transport.NetworkEndPoint::ByteSwap(System.UInt32)
extern void NetworkEndPoint_ByteSwap_m8102F3407880255D362C9A48F5B5F5737411C5BD (void);
// 0x0000002C Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::CreateAddress(System.UInt16,Unity.Networking.Transport.NetworkEndPoint_AddressType,Unity.Networking.Transport.NetworkFamily)
extern void NetworkEndPoint_CreateAddress_m24F15B27A5948F9A1C7A7A0FD8C2A272BC13C540 (void);
// 0x0000002D System.Boolean Unity.Networking.Transport.NetworkInterfaceEndPoint::op_Equality(Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.NetworkInterfaceEndPoint)
extern void NetworkInterfaceEndPoint_op_Equality_m881EAFED3A1273EF9C31886B7D633597853212B7 (void);
// 0x0000002E System.Boolean Unity.Networking.Transport.NetworkInterfaceEndPoint::Equals(System.Object)
extern void NetworkInterfaceEndPoint_Equals_m2FA52DE13A8E9F1D24B9D964D28DDE9B9A6F548B_AdjustorThunk (void);
// 0x0000002F System.Int32 Unity.Networking.Transport.NetworkInterfaceEndPoint::GetHashCode()
extern void NetworkInterfaceEndPoint_GetHashCode_mB9E7512A0CB786C5C5D31231A0344D2CA4E1D17E_AdjustorThunk (void);
// 0x00000030 System.Boolean Unity.Networking.Transport.NetworkInterfaceEndPoint::Compare(Unity.Networking.Transport.NetworkInterfaceEndPoint)
extern void NetworkInterfaceEndPoint_Compare_m22D67F8E2007CCB5758BC9A501CD94E8B8E2879C_AdjustorThunk (void);
// 0x00000031 System.Void Unity.Networking.Transport.TransportFunctionPointer`1::.ctor(T)
// 0x00000032 Unity.Networking.Transport.NetworkInterfaceEndPoint Unity.Networking.Transport.UDPNetworkInterface::ParseNetworkAddress(Unity.Networking.Transport.NetworkEndPoint)
extern void UDPNetworkInterface_ParseNetworkAddress_m5BAA9B51B792B3F8C1822BF981FD4FA4DD101FC3 (void);
// 0x00000033 Unity.Networking.Transport.NetworkInterfaceEndPoint Unity.Networking.Transport.UDPNetworkInterface::CreateInterfaceEndPoint(Unity.Networking.Transport.NetworkEndPoint)
extern void UDPNetworkInterface_CreateInterfaceEndPoint_mCEE29608220F44B4C1227C7BED954298EA84D2D0_AdjustorThunk (void);
// 0x00000034 Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.UDPNetworkInterface::GetGenericEndPoint(Unity.Networking.Transport.NetworkInterfaceEndPoint)
extern void UDPNetworkInterface_GetGenericEndPoint_m5DF19E390E437C36B08437FA3A2D49696C89559B_AdjustorThunk (void);
// 0x00000035 System.Void Unity.Networking.Transport.UDPNetworkInterface::Dispose()
extern void UDPNetworkInterface_Dispose_m8DE7CFD142ED7EF300FE2189A8934EF807A94CFD_AdjustorThunk (void);
// 0x00000036 System.Void Unity.Networking.Transport.UDPNetworkInterface::Close()
extern void UDPNetworkInterface_Close_mF5BD73EA728C95817A0E0D9E771CA4738804680B_AdjustorThunk (void);
// 0x00000037 System.Int32 Unity.Networking.Transport.UDPNetworkInterface::BeginSendMessage(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr,System.Int32)
extern void UDPNetworkInterface_BeginSendMessage_mE825F4B82CCD7FF06BEA57AF7D66AAEAC50646D4 (void);
// 0x00000038 System.Int32 Unity.Networking.Transport.UDPNetworkInterface::EndSendMessage(Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.IntPtr,Unity.Networking.Transport.NetworkSendQueueHandle&)
extern void UDPNetworkInterface_EndSendMessage_m98325DF88A408B9482B6BF26B0F2495C55645A11 (void);
// 0x00000039 System.Void Unity.Networking.Transport.UDPNetworkInterface::AbortSendMessage(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr)
extern void UDPNetworkInterface_AbortSendMessage_m2D2277C29CF9721D4143404F51FAFD7DA7B3ED9A (void);
// 0x0000003A System.Void Unity.Networking.Transport.UDPNetworkInterface::.cctor()
extern void UDPNetworkInterface__cctor_m7AC2881BFA3D5C6CD173B68153F27DA4C8F595FF (void);
static Il2CppMethodPointer s_methodPointers[58] = 
{
	network_address_Equals_mC9677EEEF83970F9C047554855E8142CB2B01033_AdjustorThunk,
	NativeBindings_network_terminate_mEF70B9B8D12FC0F4F49563851C133B8D88641133,
	NativeBindings_network_create_and_bind_m57FC3336FCB886B173D34E8EEA72A856D8A7E967,
	NativeBindings_network_close_m7A1F3BEADF84033AED54F8375356DD81DE05A00D,
	NativeBindings_network_set_nonblocking_mBFB251AADCFBDAE5314ADBD7847DC3E65CEC930A,
	NativeBindings_network_set_send_buffer_size_m3FF9871B752F9B824A7D7C7D9AA12090282959CD,
	NativeBindings_network_set_receive_buffer_size_m47E74091BB5FA99C25060BF63D670DCB090EC742,
	NativeBindings_network_get_send_buffer_size_m8C68A1EB225809415C670322082E8D6D9D97DD96,
	NativeBindings_network_get_receive_buffer_size_m94B7D3A6B41A4BED2C830F3901EBF8E306191BDE,
	NativeBindings_network_set_connection_reset_mFF9086D9DE39F34E301F9E23F7A78CDF2DEA35A8,
	NativeBindings_network_sendmsg_mF5550350119C08CDEDB5D9D6429D3BA858138A3F,
	NativeBindings_network_recvmsg_mC758C4B214BD84EBF42F5B89ACB1D17FA89BF474,
	BeginSendMessageDelegate__ctor_mBABA51ACBE18164BDD4C0464E98106AB70E9B8C7,
	BeginSendMessageDelegate_Invoke_mDDD214EC6CCDB7BEE5D8C89AB02AE972D6D993A8,
	BeginSendMessageDelegate_BeginInvoke_mF33DCD6745C49511E93B834A07D1E2FA999F8D55,
	BeginSendMessageDelegate_EndInvoke_mD3133AD3D9E86EF85290896400A9A1BFC93C27BF,
	EndSendMessageDelegate__ctor_mE5E0E71FFF4EA46BB0C20F05F55FD4215C802BA8,
	EndSendMessageDelegate_Invoke_m4CC0B2D83D4F050FB85C6BD3E4CA71D3AEE07B28,
	EndSendMessageDelegate_BeginInvoke_m1DDCC310373CB71D57A64095B5AB7F23A45AD68B,
	EndSendMessageDelegate_EndInvoke_mB3FD95156A770DA1C1CFFAEDAE8290B838F06A8B,
	AbortSendMessageDelegate__ctor_mDB6B7932166F5A16426EA890D990CDFE6C6EECC5,
	AbortSendMessageDelegate_Invoke_mE73985F95E05E17F7F8061204618069273F9F176,
	AbortSendMessageDelegate_BeginInvoke_mAA235CC906C01B97608DCC388F54CFBF043FD041,
	AbortSendMessageDelegate_EndInvoke_m5E7C6E499CDA054ECC8ADA4FC0866482C4181598,
	NetworkEndPoint__cctor_m7B3E38065FBA46DA95BB7160E4BC76DCCB857163,
	NetworkEndPoint_get_Port_m38690BA3B68376261CAC75686FC1366971F7B742_AdjustorThunk,
	NetworkEndPoint_get_Family_mAAAFD4DD31A8696D1EA376AD3493CE573AE23FB3_AdjustorThunk,
	NetworkEndPoint_set_Family_m95C94A903A391BE27287807461EE02829DEB44C1_AdjustorThunk,
	NetworkEndPoint_GetRawAddressBytes_m3216D65ED4A40A668EC65242DD93AAD68976C6A6_AdjustorThunk,
	NetworkEndPoint_SetRawAddressBytes_m1BB613BF547BED8BF76D6783A07186B514D58242_AdjustorThunk,
	NetworkEndPoint_get_RawPort_mED5AC3808B0E01F161DE5E3D036DAB43125F3B93_AdjustorThunk,
	NetworkEndPoint_set_RawPort_mD0E1D11C0544798A61F5570AB74F88897A896176_AdjustorThunk,
	NetworkEndPoint_get_Address_m71B08B9A8394D42577350E72DF4A30F23AD9F5A8_AdjustorThunk,
	NetworkEndPoint_get_IsValid_m9AA29EF5B4960261F50354EEB97D8C709AE0909B_AdjustorThunk,
	NetworkEndPoint_get_AnyIpv4_mF5C5A510219907BFC8B888F94B1DE258CB387F97,
	NetworkEndPoint_TryParse_m23163432CF3A1B4E98C2D76A046668663B89445A,
	NetworkEndPoint_op_Equality_m89D4B029CF44EB80585F8A25D67E30B42AEA5336,
	NetworkEndPoint_Equals_m6DC01312B2C5E44E7FD56E48515ACD6FCEEC0D95_AdjustorThunk,
	NetworkEndPoint_GetHashCode_mD2585758E84F0263DDEC02472E81EEF26C905002_AdjustorThunk,
	NetworkEndPoint_Compare_mAE8457D4CD6A7D684D1B8D1019F01DC6976044F3_AdjustorThunk,
	NetworkEndPoint_AddressAsString_m0AFA40D9D4CB91FE013615316E52F89F9D881756_AdjustorThunk,
	NetworkEndPoint_ByteSwap_m2E1932FB51C3E00EAE4933CB437D92D100CE78FF,
	NetworkEndPoint_ByteSwap_m8102F3407880255D362C9A48F5B5F5737411C5BD,
	NetworkEndPoint_CreateAddress_m24F15B27A5948F9A1C7A7A0FD8C2A272BC13C540,
	NetworkInterfaceEndPoint_op_Equality_m881EAFED3A1273EF9C31886B7D633597853212B7,
	NetworkInterfaceEndPoint_Equals_m2FA52DE13A8E9F1D24B9D964D28DDE9B9A6F548B_AdjustorThunk,
	NetworkInterfaceEndPoint_GetHashCode_mB9E7512A0CB786C5C5D31231A0344D2CA4E1D17E_AdjustorThunk,
	NetworkInterfaceEndPoint_Compare_m22D67F8E2007CCB5758BC9A501CD94E8B8E2879C_AdjustorThunk,
	NULL,
	UDPNetworkInterface_ParseNetworkAddress_m5BAA9B51B792B3F8C1822BF981FD4FA4DD101FC3,
	UDPNetworkInterface_CreateInterfaceEndPoint_mCEE29608220F44B4C1227C7BED954298EA84D2D0_AdjustorThunk,
	UDPNetworkInterface_GetGenericEndPoint_m5DF19E390E437C36B08437FA3A2D49696C89559B_AdjustorThunk,
	UDPNetworkInterface_Dispose_m8DE7CFD142ED7EF300FE2189A8934EF807A94CFD_AdjustorThunk,
	UDPNetworkInterface_Close_mF5BD73EA728C95817A0E0D9E771CA4738804680B_AdjustorThunk,
	UDPNetworkInterface_BeginSendMessage_mE825F4B82CCD7FF06BEA57AF7D66AAEAC50646D4,
	UDPNetworkInterface_EndSendMessage_m98325DF88A408B9482B6BF26B0F2495C55645A11,
	UDPNetworkInterface_AbortSendMessage_m2D2277C29CF9721D4143404F51FAFD7DA7B3ED9A,
	UDPNetworkInterface__cctor_m7AC2881BFA3D5C6CD173B68153F27DA4C8F595FF,
};
static const int32_t s_InvokerIndices[58] = 
{
	5283,
	112,
	580,
	388,
	5284,
	5285,
	5285,
	5286,
	5286,
	886,
	5287,
	5287,
	140,
	5288,
	5289,
	4381,
	140,
	5290,
	1441,
	4524,
	140,
	5291,
	4757,
	166,
	3,
	262,
	10,
	32,
	5110,
	5292,
	262,
	656,
	14,
	93,
	5293,
	5294,
	5295,
	9,
	10,
	5296,
	14,
	259,
	21,
	5297,
	5298,
	9,
	10,
	5299,
	-1,
	5300,
	5301,
	5302,
	23,
	23,
	5303,
	5304,
	5305,
	3,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[3] = 
{
	{ 0x06000037, 18,  (void**)&UDPNetworkInterface_BeginSendMessage_mE825F4B82CCD7FF06BEA57AF7D66AAEAC50646D4_RuntimeMethod_var, 0 },
	{ 0x06000038, 19,  (void**)&UDPNetworkInterface_EndSendMessage_m98325DF88A408B9482B6BF26B0F2495C55645A11_RuntimeMethod_var, 0 },
	{ 0x06000039, 20,  (void**)&UDPNetworkInterface_AbortSendMessage_m2D2277C29CF9721D4143404F51FAFD7DA7B3ED9A_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x0200001A, { 0, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[1] = 
{
	{ (Il2CppRGCTXDataType)3, 94856 },
};
extern const Il2CppCodeGenModule g_Unity_Networking_TransportCodeGenModule;
const Il2CppCodeGenModule g_Unity_Networking_TransportCodeGenModule = 
{
	"Unity.Networking.Transport.dll",
	58,
	s_methodPointers,
	s_InvokerIndices,
	3,
	s_reversePInvokeIndices,
	1,
	s_rgctxIndices,
	1,
	s_rgctxValues,
	NULL,
};
