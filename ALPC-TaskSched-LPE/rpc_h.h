

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for rpc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __rpc_h_h__
#define __rpc_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __DefaultIfName_INTERFACE_DEFINED__
#define __DefaultIfName_INTERFACE_DEFINED__

/* interface DefaultIfName */
/* [version][uuid] */ 

typedef struct Struct_18_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    } 	Struct_18_t;

typedef struct Struct_74_t
    {
    long StructMember0;
    long StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    } 	Struct_74_t;

typedef struct Struct_144_t
    {
    long StructMember0;
    short StructMember1;
    short StructMember2;
    byte StructMember3[ 8 ];
    } 	Struct_144_t;

typedef struct Struct_246_t
    {
    short StructMember0;
    short StructMember1;
    short StructMember2;
    short StructMember3;
    short StructMember4;
    short StructMember5;
    short StructMember6;
    short StructMember7;
    } 	Struct_246_t;

long _SchRpcHighestVersion( 
    /* [in] */ handle_t IDL_handle,
    /* [out] */ long *arg_1);

long _SchRpcRegisterTask( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [string][unique][in] */ wchar_t *arg_4,
    /* [in] */ long arg_5,
    /* [in] */ long arg_6,
    /* [size_is][unique][in] */ struct Struct_18_t *arg_7,
    /* [string][ref][out] */ wchar_t **arg_8,
    /* [ref][out] */ struct Struct_74_t **arg_9);

long SchRpcRetrieveTask( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long *arg_3,
    /* [string][ref][out] */ wchar_t **arg_4);

long _SchRpcCreateFolder( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3);

long _SchRpcSetSecurity( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3);

long _SchRpcGetSecurity( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [string][ref][out] */ wchar_t **arg_3);

long _SchRpcEnumFolders( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [out][in] */ long *arg_3,
    /* [in] */ long arg_4,
    /* [out] */ long *arg_5,
    /* [string][size_is][size_is][ref][out] */ wchar_t ***arg_6);

long _SchRpcEnumTasks( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [out][in] */ long *arg_3,
    /* [in] */ long arg_4,
    /* [out] */ long *arg_5,
    /* [string][size_is][size_is][ref][out] */ wchar_t ***arg_6);

long _SchRpcEnumInstances( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [out] */ long *arg_3,
    /* [size_is][size_is][ref][out] */ struct Struct_144_t **arg_4);

long _SchRpcGetInstanceInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_144_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2,
    /* [out] */ long *arg_3,
    /* [string][ref][out] */ wchar_t **arg_4,
    /* [string][ref][out] */ wchar_t **arg_5,
    /* [out] */ long *arg_6,
    /* [size_is][size_is][ref][out] */ struct Struct_144_t **arg_7,
    /* [out] */ long *arg_8);

long _SchRpcStopInstance( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_144_t *arg_1,
    /* [in] */ long arg_2);

long _SchRpcStop( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2);

long _SchRpcRun( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [string][size_is][unique][in] */ wchar_t **arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [string][unique][in] */ wchar_t *arg_6,
    /* [out] */ struct Struct_144_t *arg_7);

long _SchRpcDelete( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2);

long _SchRpcRename( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3);

long _SchRpcScheduledRuntimes( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [unique][in] */ struct Struct_246_t *arg_2,
    /* [unique][in] */ struct Struct_246_t *arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [out] */ long *arg_6,
    /* [size_is][size_is][ref][out] */ struct Struct_246_t **arg_7);

long _SchRpcGetLastRunInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [out] */ struct Struct_246_t *arg_2,
    /* [out] */ long *arg_3);

long _SchRpcGetTaskInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [out] */ long *arg_3,
    /* [out] */ long *arg_4);

long _SchRpcGetNumberOfMissedRuns( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [out] */ long *arg_2);

long _SchRpcEnableTask( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2);



extern RPC_IF_HANDLE DefaultIfName_v1_0_c_ifspec;
extern RPC_IF_HANDLE DefaultIfName_v1_0_s_ifspec;
#endif /* __DefaultIfName_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


