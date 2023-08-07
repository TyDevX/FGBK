#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Void FileIO::Initialise()
extern void FileIO_Initialise_mA66FB6D2F059D43EFC2FCF637C81B7FDC5EDA09D (void);
// 0x00000002 System.Void FileIO::Log(System.String)
extern void FileIO_Log_mB0500B5CCAC1F3D9D0DBFA4A3631D0449F807BEB (void);
// 0x00000003 System.String FileIO::GetMountName(FileIO_EnumStorageType)
extern void FileIO_GetMountName_m05DE6BE0F757471B925B3BB9BA475B6ACC677567 (void);
// 0x00000004 System.String FileIO::GetMountPath(FileIO_EnumStorageType)
extern void FileIO_GetMountPath_m43598EFCAF5BD3BCDB737C4D85D7CA6C34094DF2 (void);
// 0x00000005 System.String FileIO::AffixMountPath(FileIO_EnumStorageType,System.String)
extern void FileIO_AffixMountPath_mEEB6547464CF0FE5D0520D3FF86A89FAD5EFC0A5 (void);
// 0x00000006 System.Boolean FileIO::FileExists(FileIO_EnumStorageType,System.String)
extern void FileIO_FileExists_m6AB4060FA0192C9F2A64E69E6F017C40B9F332AC (void);
// 0x00000007 System.String[] FileIO::GetFiles(FileIO_EnumStorageType,System.String,System.String)
extern void FileIO_GetFiles_m80572B80FD0717B05407A89A9A0B9499B7BD7EED (void);
// 0x00000008 System.Byte[] FileIO::ReadAllBytes(FileIO_EnumStorageType,System.String)
extern void FileIO_ReadAllBytes_mD5064FFE5063CE2029A44468262654D7EA343966 (void);
// 0x00000009 System.Void FileIO::WriteAllBytes(FileIO_EnumStorageType,System.String,System.Byte[]&)
extern void FileIO_WriteAllBytes_m617797EE4755D83E52095D31C6556C82D78DCDC5 (void);
// 0x0000000A System.Void FileIO::.cctor()
extern void FileIO__cctor_mFBE7B0B54BB7A34272591FB4780D62F66FA256F8 (void);
// 0x0000000B System.String PersistentDataPath::get_Location()
extern void PersistentDataPath_get_Location_m27108D9E406DCDE826F54FFE9590B481114DA9F6 (void);
// 0x0000000C System.Void PersistentDataPath::.cctor()
extern void PersistentDataPath__cctor_mF538E8298B41EB597047555416AB5269115B44FF (void);
static Il2CppMethodPointer s_methodPointers[12] = 
{
	FileIO_Initialise_mA66FB6D2F059D43EFC2FCF637C81B7FDC5EDA09D,
	FileIO_Log_mB0500B5CCAC1F3D9D0DBFA4A3631D0449F807BEB,
	FileIO_GetMountName_m05DE6BE0F757471B925B3BB9BA475B6ACC677567,
	FileIO_GetMountPath_m43598EFCAF5BD3BCDB737C4D85D7CA6C34094DF2,
	FileIO_AffixMountPath_mEEB6547464CF0FE5D0520D3FF86A89FAD5EFC0A5,
	FileIO_FileExists_m6AB4060FA0192C9F2A64E69E6F017C40B9F332AC,
	FileIO_GetFiles_m80572B80FD0717B05407A89A9A0B9499B7BD7EED,
	FileIO_ReadAllBytes_mD5064FFE5063CE2029A44468262654D7EA343966,
	FileIO_WriteAllBytes_m617797EE4755D83E52095D31C6556C82D78DCDC5,
	FileIO__cctor_mFBE7B0B54BB7A34272591FB4780D62F66FA256F8,
	PersistentDataPath_get_Location_m27108D9E406DCDE826F54FFE9590B481114DA9F6,
	PersistentDataPath__cctor_mF538E8298B41EB597047555416AB5269115B44FF,
};
static const int32_t s_InvokerIndices[12] = 
{
	3,
	177,
	43,
	43,
	148,
	1638,
	493,
	148,
	4363,
	3,
	4,
	3,
};
extern const Il2CppCodeGenModule g_DeviceIOCodeGenModule;
const Il2CppCodeGenModule g_DeviceIOCodeGenModule = 
{
	"DeviceIO.dll",
	12,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
};
