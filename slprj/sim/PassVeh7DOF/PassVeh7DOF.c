#include "PassVeh7DOF_capi.h"
#include "PassVeh7DOF.h"
#include "PassVeh7DOF_private.h"
#include "interp2_MfPDUf1L.h"
#include "look1_binlcpw.h"
#include "look1_binlxpw.h"
#define fffc1wsvta ((uint8_T)0U)
#define i4xjz4h3qp ((uint8_T)2U)
#define pqs3cqvzxy ((uint8_T)1U)
static RegMdlInfo rtMdlInfo_PassVeh7DOF [ 156 ] = { { "or0r4q4rh4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"obibbmk2hd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "dvqv2yki3l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "j4fedpjpo0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"cspwehehgp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "buwnn4ewmg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "bq3nsn4tha" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"hgz0u45ian" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "ijfgkn4l3e" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "iw0hhox1z3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"ji1gw0gkru" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "jaxagnd4mw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "jztpqiauj1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"kfn2mmtqck" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "kadjqzoj2h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "mdujpxt3og" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"ca3arilzxj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "jwuukrjcjy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "imbwkukzbz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"ihyl1wiej4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "j02rm5fknl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "f3fxumcojl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"m0dr3kevl5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "nlgkjy4ieu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "ozgwn1x4el" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"amgc5viqpp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "c1n0jnggmm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "ocgievpcmf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"haaujlu1zl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "lontiafrv5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "oro2xznq4y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"mruqemziqh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "acvtcz55rn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "mnn43hfklm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"hy2ckr4rvc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "b2xmdggan3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "obhtuyokvw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"oepqjnmpe3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "b2xjgy1es0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "ekjfzsz3hg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"iwmz3we40n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "ij0wjal3zp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "hyf3to5xos" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"ftl4ir3hp0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "pc4teyp50g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "ecmh0hr5s2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"ldsjoopn3n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "mee4esqgbl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "bp5pukdahh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"bhpfbc1iry" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "fwjzjud4mi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "h20hxunqni" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"llo4onv10p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "b2axtifb0l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "hcxaiq45q3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"jxfiol5u3d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "jnbczsppvg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "dsiazaavdd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"i4cctbfaje" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "b0ccxuamsx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "axxgnaq4jx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"b5qcncsz1r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "agsgnulyfo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "bhu3vpc40r" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"ikqrgkdcac" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "pqca3kvywqf" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , (
void * ) "PassVeh7DOF" } , { "kg2zcpxtlx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "PassVeh7DOF" } , { "gpylimk50b" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"abmhsgyjam" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "e3r11zdizr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "dn0l2t323g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"ha25zehowz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "hcqlainyez" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "n52l1mzp31" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"pcbmq2m11v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "a12pcgpb01" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "lijr033rr2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"bpefjqedzq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "id4lpjcjia" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "dgk2ovyv5o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"b51av3ulwn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "mfpcrarm3m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "g3iefm0j4w" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"lis1ormwxp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "pgy4d5vijx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "iu231drtpw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"ii3iorkudk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "ps1ayp5pv5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "hzczw4rimi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"lahi4jyhaj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "aoae4c423r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "ateq2n1kdh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"lxfh2nd3fn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "cnvadpb2ww" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "h0smf0gcsp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"khkic2rdmy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "o4j1qwtwnx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "ik0wvz4qgi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"gmtbryc4la" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "ef0eu5po0d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "cp2wwmxbs5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"kxaz1orurl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "lghji0qjts" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "mulgnbyr4x" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"dj1lt5fdt2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "lf15r5ane4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 ,
( void * ) "Clutch" } , { "l2nvzx10em" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "PassVeh7DOF" } , { "aqnxxi0zyy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"pw2p3eps2d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "fcrjmwugve" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "o0aopni2ms" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"dlyl3f4aia" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "gxel4okbyr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "nx0vn2zets" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"i0xuaxjkre" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "agp0kvhfzx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "djckwvhqwl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"l4s3qwfe05" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "elepqmmkmr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "kxq1u1mbaq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Clutch" } , {
"bcot51nxfi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "fqfjhhkyss" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "ccz2kuezyf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"armwt132yr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "e3uy3z0e1m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "lswvubjtnh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"mwwtt4vzn3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "n1hujmknlh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "ptwb5m53nr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Simple Magic Tire" } ,
{ "PassVeh7DOF" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , {
"i2rjcmb3r3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "oinmjmcxpr0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "PassVeh7DOF" } , { "oinmjmcxpr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"mkmp3c5j3y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "pa50wxsaaa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "PassVeh7DOF" } , { "struct_k3EETTmsXgkf0BoTgEtKtG" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_5NGg6nxNHRWKsr0nLboB4F" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_wjXS3rIiQNI90M790LMxVG" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_NtCe3ohFvXuRZXQoDidoXH" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_A6Yb21eKNPgaupJlKafAPB" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_NYc8q8ZDpqCMqvwIx2DzE" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_MulvPjTG5PLC9kEliA7G3E" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "mr_PassVeh7DOF_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"mr_PassVeh7DOF_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"mr_PassVeh7DOF_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"mr_PassVeh7DOF_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"mr_PassVeh7DOF_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "PassVeh7DOF" } , {
"mr_PassVeh7DOF_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "PassVeh7DOF" } , { "mr_PassVeh7DOF_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"mr_PassVeh7DOF_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "PassVeh7DOF" } , { "mr_PassVeh7DOF_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "PassVeh7DOF" } , {
"mr_PassVeh7DOF_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"PassVeh7DOF" } , { "mr_PassVeh7DOF_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "PassVeh7DOF" } , { "PassVeh7DOF.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "PassVeh7DOF.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "PassVeh7DOF" } } ;
becrktx0d0o becrktx0d0 = { 1.37 , 0.3 , 0.1 , 0.1 , { 0.0 , 0.03 , 0.06 ,
0.09 , 0.12 , 0.15 , 0.18 , 0.21 , 0.24 , 0.27 , 0.3 , 0.32999999999999996 ,
0.36 , 0.39 , 0.42 , 0.45 , 0.48000000000000004 , 0.51 , 0.54 ,
0.57000000000000006 , 0.60000000000000009 , 0.63 , 0.66 , 0.69000000000000006
, 0.72 , 0.75 , 0.78 , 0.81 , 0.84000000000000008 , 0.87 , 0.9 } , 11459.0 ,
11459.0 , { 0.0 , 0.01 , 0.02 , 0.03 , 0.04 , 0.05 , 0.06 , 0.07 , 0.08 ,
0.09 , 0.1 , 0.11 , 0.12 , 0.13 , 0.14 , 0.15 , 0.15999999999999998 ,
0.16999999999999998 , 0.18 , 0.19 , 0.19999999999999998 , 0.21 ,
0.21999999999999997 , 0.22999999999999998 , 0.24 , 0.25 , 0.26 , 0.27 ,
0.27999999999999997 , 0.29 , 0.3 } , 5000.0 , 5000.0 , 5000.0 , 5000.0 ,
3136.0 , 3136.0 , 3136.0 , 3136.0 , 2548.0 , 2548.0 , 2548.0 , 2548.0 ,
5000.0 , 0.22 , 0.22 , 0.22 , 0.22 , 206.613792 , 16.0 , 16.0 , 16.0 , 16.0 ,
0.106 , 0.106 , 0.106 , 0.106 , 2.0 , 68947.57 , 68947.57 , 68947.57 ,
68947.57 , 2.0 , 1.3526 , 1.3526 , 1.3526 , 1.3526 , 2.9439 , 2.9439 , 2.9439
, 2.9439 , - 0.5312 , - 0.5312 , - 0.5312 , - 0.5312 , 33.8114 , 33.8114 ,
33.8114 , 33.8114 , 0.2473 , 0.2473 , 0.2473 , 0.2473 , 0.1182 , 0.1182 ,
0.1182 , 0.1182 , - 0.3262 , - 0.3262 , - 0.3262 , - 0.3262 , 0.8 , 0.8 , 0.8
, 0.8 , 0.0014 , 0.0014 , 0.0014 , 0.0014 , 0.0013 , 0.0013 , 0.0013 , 0.0013
, 52.6965 , 52.6965 , 52.6965 , 52.6965 , 0.0077 , 0.0077 , 0.0077 , 0.0077 ,
- 0.3354 , - 0.3354 , - 0.3354 , - 0.3354 , - 0.3489 , - 0.3489 , - 0.3489 ,
- 0.3489 , 0.382 , 0.382 , 0.382 , 0.382 , - 0.09634 , - 0.09634 , - 0.09634
, - 0.09634 , 0.06447 , 0.06447 , 0.06447 , 0.06447 , - 0.0493 , - 0.0493 , -
0.0493 , - 0.0493 , - 0.0436 , - 0.0436 , - 0.0436 , - 0.0436 , 101325.0 ,
0.01 , 0.01 , 0.01 , 0.01 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0015 , 0.0015 , 0.0015
, 0.0015 , 8.5E-5 , 8.5E-5 , 8.5E-5 , 8.5E-5 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.9 , 0.9 , 0.9 , 0.9 , - 0.4 , - 0.4 , - 0.4 , - 0.4 ,
287.058 , 0.215 , 0.215 , 0.215 , 0.215 , 0.09 , 0.09 , 0.09 , 0.09 , 273.0 ,
0.229 , 0.229 , 0.229 , 0.229 , 0.5 , 0.5 , 0.5 , 0.5 , 0.0 , 0.0 , 0.847 ,
0.693 , { 0.0 , 0.01 , 0.02 , 0.03 , 0.04 , 0.05 , 0.06 , 0.07 , 0.08 , 0.09
, 0.1 , 0.11 , 0.12 , 0.13 , 0.14 , 0.15 , 0.15999999999999998 ,
0.16999999999999998 , 0.18 , 0.19 , 0.19999999999999998 , 0.21 ,
0.21999999999999997 , 0.22999999999999998 , 0.24 , 0.25 , 0.26 , 0.27 ,
0.27999999999999997 , 0.29 , 0.3 } , 0.01 , 0.01 , 0.001 , 0.01 , 0.0 , 0.0 ,
0.0475 , 0.0475 , 0.0475 , 0.0475 , 9.81 , 0.0 , 0.0 , 0.0 , 0.0 , 0.283 ,
0.15 , 0.15 , 0.15 , 0.15 , 1.0 , 1.0 , 1.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.0 , 0.0 ,
330.0 , 0.4 , 0.4 , 0.4 , 0.4 , 0.5 , 0.5 , 0.5 , 0.5 , 1.0 , 1.0 , 1.0 , 1.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , { 1.2 , 1.2 } ,
125.66370614359172 , 0.0 , 1.0 , 0.0 , 7.0E+6 , 2.0E+6 , 0.0 , 0.0 , - 1.0 ,
0.7 , 0.78539816339744828 , 0.0 , 2.2204460492503131E-16 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , { 3.1415926535897931 ,
3.1415926535897931 , 3.1415926535897931 , 3.1415926535897931 } , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 10000.0 , 1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0
, 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 10000.0 ,
1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 2.0 , 2.0 , 0.0 , 0.0 , - 1.0 , 0.7 , 0.78539816339744828 ,
0.0 , 2.2204460492503131E-16 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 10000.0 , 1.0E+6
, { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 } , 10000.0 , 1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0 ,
0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 2.0 , 2.0 , 0.0 , 0.0 ,
- 1.0 , 0.30000000000000004 , 0.78539816339744828 , 0.0 ,
2.2204460492503131E-16 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 10000.0 , 1.0E+6 , {
0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 } , 10000.0 , 1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 ,
0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 2.0 , 2.0 , 0.0 , 0.0 , - 1.0
, 0.30000000000000004 , 0.78539816339744828 , 0.0 , 2.2204460492503131E-16 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 10000.0 , 1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0
, 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ,
10000.0 , 1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 2.0 , 2.0 , 0.0 , - 5.0 , 5.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 20000.0 , 1000.0 , { 0.0 , 0.0 } , { - 1.0 , 1.0 } , { 1.0 , 1.0 , 1.0
} , 0.0 , - 0.5 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.5 , - 0.5 , 0.5 , 0.0
, { 0.283 , 0.283 , 0.283 , 0.283 } , { { { 0.0 , 0.0 , 0.0 , 0.0 , - 4.0 , 0
, 0 , 0 , { 0 , 1 , 0 , 0 , 1 , 1 , 1 , 0 } } } } , { { { 0.0 , 0.0 , 0.0 ,
0.0 , - 4.0 , 0 , 0 , 0 , { 0 , 1 , 0 , 0 , 1 , 1 , 1 , 0 } } } } , { { { 0.0
, 0.0 , 0.0 , 0.0 , - 4.0 , 0 , 0 , 0 , { 0 , 1 , 0 , 0 , 1 , 1 , 1 , 0 } } }
} , { { { 0.0 , 0.0 , 0.0 , 0.0 , - 4.0 , 0 , 0 , 0 , { 0 , 1 , 0 , 0 , 1 , 1
, 1 , 0 } } } } } ; static void kacppyq1hi ( real_T rhoz , real_T omega ,
real_T * Re , real_T * Fz ) ; static void idsfnt51tf ( const real_T a_data [
] , const int32_T a_size [ 2 ] , real_T y_data [ ] , int32_T y_size [ 2 ] ) ;
static real_T mw400ki20b ( real_T Re , real_T omega , real_T Vx , real_T
b_VXLOW , real_T b_kappamax ) ; static real_T czhlh0bakm ( real_T kappa ,
real_T Fz , real_T D , real_T C , real_T B , real_T E , real_T lam_mux ,
real_T b_FZMIN , real_T b_FZMAX ) ; static real_T m0bj1boftk ( real_T kappa ,
real_T Vx , real_T Fz , real_T b_gamma , real_T LONGVL , real_T FNOMIN ,
real_T b_FZMIN , real_T b_FZMAX , real_T press , real_T NOMPRES , real_T
PRESMIN , real_T PRESMAX , real_T PCX1 , real_T PDX1 , real_T PDX2 , real_T
PDX3 , real_T PEX1 , real_T PEX2 , real_T PEX3 , real_T PEX4 , real_T PKX1 ,
real_T PKX2 , real_T PKX3 , real_T PHX1 , real_T PHX2 , real_T PVX1 , real_T
PVX2 , real_T PPX1 , real_T PPX2 , real_T PPX3 , real_T PPX4 , real_T lam_Fzo
, real_T lam_muV , real_T lam_mux , real_T lam_Kxkappa , real_T lam_Cx ,
real_T lam_Ex , real_T lam_Hx , real_T lam_Vx ) ; static real_T ifxdy0al4w (
real_T Fz , real_T omega , real_T Vx , real_T press , real_T QSY1 , real_T
QSY2 , real_T QSY3 , real_T QSY7 , real_T QSY8 , real_T UNLOADED_RADIUS ,
real_T b_FZMIN , real_T b_FZMAX , real_T PRESMIN , real_T PRESMAX ) ; static
real_T c42svqng1d ( real_T Fz , real_T omega , real_T Tamb , real_T Fpl ,
real_T Cr , real_T Kt , real_T Tmeas , real_T Re , real_T b_FZMIN , real_T
b_FZMAX , real_T TMIN , real_T TMAX ) ; static boolean_T lhu0myyims ( real_T
Tout , real_T Tfmaxs , amgc5viqpp * localB , ozgwn1x4el * localDW ) ; static
boolean_T edfde4hc3b ( real_T Tout , real_T Tfmaxs , amgc5viqpp * localB ,
ozgwn1x4el * localDW , nlgkjy4ieu * localP , real_T rtp_br ) ; static void
hewkpcvg5g ( real_T Ftire_x , real_T Ftire_y , real_T b_Fxtire_sat , real_T
b_Fytire_sat , real_T * Ftire_xs , real_T * Ftire_ys ) ; static void
kacppyq1hi ( real_T rhoz , real_T omega , real_T * Re , real_T * Fz ) { * Re
= 0.0 * muDoubleScalarAbs ( omega ) + rhoz ; if ( * Re < 0.001 ) { * Re =
0.001 ; } * Fz = ( rtNaN ) ; } static void idsfnt51tf ( const real_T a_data [
] , const int32_T a_size [ 2 ] , real_T y_data [ ] , int32_T y_size [ 2 ] ) {
real_T z1_data ; int32_T loop_ub ; y_size [ 1 ] = ( int8_T ) a_size [ 1 ] ;
loop_ub = y_size [ 1 ] - 1 ; if ( 0 <= loop_ub ) { memcpy ( & z1_data , &
y_data [ 0 ] , ( loop_ub + 1 ) * sizeof ( real_T ) ) ; } if ( 0 <= y_size [ 1
] - 1 ) { z1_data = a_data [ 0 ] * a_data [ 0 ] ; } y_size [ 0 ] = 1 ;
loop_ub = y_size [ 1 ] - 1 ; if ( 0 <= loop_ub ) { memcpy ( & y_data [ 0 ] ,
& z1_data , ( loop_ub + 1 ) * sizeof ( real_T ) ) ; } } static real_T
mw400ki20b ( real_T Re , real_T omega , real_T Vx , real_T b_VXLOW , real_T
b_kappamax ) { real_T kappa ; real_T Vxpabs ; int32_T b_trueCount ; real_T
Vxpabs_data ; real_T tmp_data ; int32_T Vxpabs_size [ 2 ] ; int32_T tmp_size
[ 2 ] ; Vxpabs = muDoubleScalarAbs ( Vx ) ; b_trueCount = 0 ; if ( Vxpabs <
b_VXLOW ) { b_trueCount = 1 ; } Vxpabs_size [ 0 ] = 1 ; Vxpabs_size [ 1 ] =
b_trueCount ; if ( 0 <= b_trueCount - 1 ) { Vxpabs_data = Vxpabs / b_VXLOW ;
} idsfnt51tf ( & Vxpabs_data , Vxpabs_size , & tmp_data , tmp_size ) ; if ( 0
<= b_trueCount - 1 ) { Vxpabs_data = 2.0 * b_VXLOW / ( 3.0 - tmp_data ) ; }
if ( Vxpabs < b_VXLOW ) { Vxpabs = Vxpabs_data ; } kappa = ( Re * omega - Vx
) / Vxpabs ; b_trueCount = 0 ; if ( kappa < - b_kappamax ) { b_trueCount = 1
; } if ( 0 <= b_trueCount - 1 ) { kappa = - b_kappamax ; } if ( kappa >
b_kappamax ) { kappa = b_kappamax ; } return kappa ; } static real_T
czhlh0bakm ( real_T kappa , real_T Fz , real_T D , real_T C , real_T B ,
real_T E , real_T lam_mux , real_T b_FZMIN , real_T b_FZMAX ) { real_T
b_idx_0 ; real_T Fx_tmp ; b_idx_0 = Fz ; if ( Fz < b_FZMIN ) { b_idx_0 =
b_FZMIN ; } if ( b_idx_0 > b_FZMAX ) { b_idx_0 = b_FZMAX ; } Fx_tmp = B *
kappa ; return muDoubleScalarSin ( muDoubleScalarAtan ( Fx_tmp - ( Fx_tmp -
muDoubleScalarAtan ( Fx_tmp ) ) * E ) * C ) * D * ( b_idx_0 * lam_mux ) ; }
static real_T m0bj1boftk ( real_T kappa , real_T Vx , real_T Fz , real_T
b_gamma , real_T LONGVL , real_T FNOMIN , real_T b_FZMIN , real_T b_FZMAX ,
real_T press , real_T NOMPRES , real_T PRESMIN , real_T PRESMAX , real_T PCX1
, real_T PDX1 , real_T PDX2 , real_T PDX3 , real_T PEX1 , real_T PEX2 ,
real_T PEX3 , real_T PEX4 , real_T PKX1 , real_T PKX2 , real_T PKX3 , real_T
PHX1 , real_T PHX2 , real_T PVX1 , real_T PVX2 , real_T PPX1 , real_T PPX2 ,
real_T PPX3 , real_T PPX4 , real_T lam_Fzo , real_T lam_muV , real_T lam_mux
, real_T lam_Kxkappa , real_T lam_Cx , real_T lam_Ex , real_T lam_Hx , real_T
lam_Vx ) { real_T Fxo ; real_T dpi ; real_T dfz ; real_T kappa_x ; real_T Vsx
; real_T Cx ; real_T unusedU0 ; int32_T trueCount ; real_T unusedU0_data ;
real_T tmp_data ; int32_T unusedU0_size [ 2 ] ; int32_T tmp_size [ 2 ] ;
real_T b_idx_0 ; real_T f_idx_0 ; real_T g_idx_0 ; real_T h_idx_0 ; real_T
Cx_tmp ; b_idx_0 = Fz ; if ( Fz < b_FZMIN ) { b_idx_0 = b_FZMIN ; } if (
b_idx_0 > b_FZMAX ) { b_idx_0 = b_FZMAX ; } dfz = press ; if ( press <
PRESMIN ) { dfz = PRESMIN ; } if ( dfz > PRESMAX ) { dfz = PRESMAX ; } dpi =
( dfz - NOMPRES ) / NOMPRES ; dfz = ( b_idx_0 - FNOMIN * lam_Fzo ) / FNOMIN *
lam_Fzo ; kappa_x = ( PHX2 * dfz + PHX1 ) * lam_Hx + kappa ; Vsx = -
muDoubleScalarAbs ( Vx ) * kappa ; Vsx = lam_mux / ( muDoubleScalarSqrt ( Vsx
* Vsx ) * lam_muV / LONGVL + 1.0 ) ; Cx = PCX1 * lam_Cx ; f_idx_0 = Cx ; if (
Cx < 0.0 ) { f_idx_0 = 0.0 ; } Cx_tmp = dpi * dpi ; Cx = ( ( PPX3 * dpi + 1.0
) + Cx_tmp * PPX4 ) * ( PDX2 * dfz + PDX1 ) * ( 1.0 - b_gamma * b_gamma *
PDX3 ) * Vsx * b_idx_0 ; g_idx_0 = Cx ; if ( Cx < 0.0 ) { g_idx_0 = 0.0 ; }
Cx = ( ( PEX2 * dfz + PEX1 ) + dfz * dfz * PEX3 ) * ( 1.0 -
muDoubleScalarTanh ( 10.0 * kappa_x ) * PEX4 ) * lam_Ex ; h_idx_0 = Cx ; if (
Cx > 1.0 ) { h_idx_0 = 1.0 ; } Cx = f_idx_0 * g_idx_0 ; unusedU0 =
muDoubleScalarAbs ( Cx ) ; trueCount = 0 ; if ( unusedU0 < 0.1 ) { trueCount
= 1 ; } unusedU0_size [ 0 ] = 1 ; unusedU0_size [ 1 ] = trueCount ; if ( 0 <=
trueCount - 1 ) { unusedU0_data = unusedU0 / 0.1 ; } idsfnt51tf ( &
unusedU0_data , unusedU0_size , & tmp_data , tmp_size ) ; if ( 0 <= trueCount
- 1 ) { unusedU0_data = 0.2 / ( 3.0 - tmp_data ) ; } if ( unusedU0 < 0.1 ) {
unusedU0 = unusedU0_data ; } trueCount = 0 ; if ( Cx < 0.0 ) { trueCount = 1
; } if ( 0 <= trueCount - 1 ) { unusedU0_data = - unusedU0 ; } if ( Cx < 0.0
) { unusedU0 = unusedU0_data ; } dpi = ( PKX2 * dfz + PKX1 ) * b_idx_0 *
muDoubleScalarExp ( PKX3 * dfz ) * ( ( PPX1 * dpi + 1.0 ) + Cx_tmp * PPX2 ) *
lam_Kxkappa / unusedU0 ; dpi *= kappa_x ; Fxo = muDoubleScalarSin (
muDoubleScalarAtan ( dpi - ( dpi - muDoubleScalarAtan ( dpi ) ) * h_idx_0 ) *
f_idx_0 ) * g_idx_0 + ( PVX2 * dfz + PVX1 ) * b_idx_0 * ( Vsx * 10.0 / ( 9.0
* Vsx + 1.0 ) ) * lam_Vx ; return Fxo ; } static real_T ifxdy0al4w ( real_T
Fz , real_T omega , real_T Vx , real_T press , real_T QSY1 , real_T QSY2 ,
real_T QSY3 , real_T QSY7 , real_T QSY8 , real_T UNLOADED_RADIUS , real_T
b_FZMIN , real_T b_FZMAX , real_T PRESMIN , real_T PRESMAX ) { real_T b_idx_0
; real_T d_idx_0 ; b_idx_0 = press ; if ( press < PRESMIN ) { b_idx_0 =
PRESMIN ; } if ( b_idx_0 > PRESMAX ) { b_idx_0 = PRESMAX ; } d_idx_0 = Fz ;
if ( Fz < b_FZMIN ) { d_idx_0 = b_FZMIN ; } if ( d_idx_0 > b_FZMAX ) {
d_idx_0 = b_FZMAX ; } return ( ( QSY2 * muDoubleScalarAbs ( Vx ) + QSY1 ) +
Vx * Vx * QSY3 ) * ( muDoubleScalarTanh ( omega ) * UNLOADED_RADIUS ) * (
muDoubleScalarPower ( d_idx_0 , QSY7 ) * muDoubleScalarPower ( b_idx_0 , QSY8
) ) ; } static real_T c42svqng1d ( real_T Fz , real_T omega , real_T Tamb ,
real_T Fpl , real_T Cr , real_T Kt , real_T Tmeas , real_T Re , real_T
b_FZMIN , real_T b_FZMAX , real_T TMIN , real_T TMAX ) { real_T b_idx_0 ;
real_T d_idx_0 ; b_idx_0 = Tamb ; if ( Tamb < TMIN ) { b_idx_0 = TMIN ; } if
( b_idx_0 > TMAX ) { b_idx_0 = TMAX ; } d_idx_0 = Fz ; if ( Fz < b_FZMIN ) {
d_idx_0 = b_FZMIN ; } if ( d_idx_0 > b_FZMAX ) { d_idx_0 = b_FZMAX ; } return
( d_idx_0 * Cr * 0.001 / ( ( b_idx_0 - Tmeas ) * Kt + 1.0 ) + - Fpl ) * (
muDoubleScalarTanh ( omega ) * Re ) ; } void ptwb5m53nr ( real_T cved3liee0 ,
real_T hr35hjpkhm , real_T gbdhc1rwja , real_T jrgdlfbz0l , real_T k2sxinhxgw
, real_T hv2idhietl , real_T ashlevpkyl , real_T awiwrbj1ah , real_T
inzpjy4lsf , real_T hlmrktqqxx , real_T nskttisvdw , real_T gx2hm5rb2y ,
const real_T * j5fczfhdct , real_T hogvqsfuar , real_T b044mnnsii , real_T
gf4qpdl150 , real_T pu1ucopikz , real_T oast2q50w1 , real_T pcxjf2dejm ,
real_T ciupjj5jym , real_T ejxwq2ptzb , real_T al51nl4udn , real_T dgtanepmh3
, real_T pzgccsn2wd , real_T camr2op5y5 , real_T keqisnbd3f , real_T
dhjbvde1ql , real_T itr0vkexlm , real_T fb1lsx4wru , real_T ch5mu4pvuj ,
real_T ffca2wfrbb , real_T gvisb41nzp , real_T kzpuc5zaqp , real_T lxinzmxu4z
, real_T b5rhrqe32p , real_T apc4wkkzj0 , real_T aqcvmgvimo , const real_T *
bn0g4xdsr2 , real_T f1zwljlqis , real_T faetpfbe3t , real_T f2wrfj3ld4 ,
real_T pj0acbgno5 , real_T jdp0ygo3rk , const real_T m3cuefccje [ 3 ] , const
real_T kktb55loxf [ 3 ] , const real_T eonbpbm1ha [ 9 ] , real_T fk1k5ewp1k ,
real_T ptghaz5var , real_T oku1yjbub2 , real_T b4mwug2qvn , real_T kswf03qlmx
, real_T ev0nmrvz3n , real_T gmukh33j1x , real_T ogftb2kvic , real_T
hovfcz1beb , real_T cnhq453n1f , real_T pkzjbcphib , real_T msi2x0cy5n ,
real_T amqujbosc0 , real_T ewmdujvrwd , real_T mc1li10ian , const real_T
i5qknzmimx [ 3 ] , const real_T k2ajbqqlbw [ 3 ] , const real_T c1tj0ta223 [
9 ] , real_T cghblzuxit , real_T nnclxiugbw , real_T k3l0t243jz , real_T
j3afmcxwz5 , real_T a3e0qsj3au , real_T mkagm5ibpa , real_T bi25pt2vjy ,
real_T lmhxu3lxab , real_T envxrls2yl , real_T iz3vm40vgt , real_T baznp0pjy0
, real_T l1g1n0fail , real_T ldjsaiwmlj , real_T lvflwdxi5c , real_T
fbu1d4l3xg , real_T lyrupr0dj4 , real_T gkf12fuftl , real_T ezcoorwedf ,
real_T phwbwigd5c , real_T k3l0glmlg0 , real_T pnspslh2fe , real_T a3qmcmhclv
, real_T hizlzr3fbv , real_T nabnbe0jtn , real_T kihhma0xf1 , real_T
cf0v1zbgxi , real_T kiu1b33l4h , real_T * b335sfmhae , real_T * njhenvfe4e ,
ikqrgkdcac * localB , real_T rtp_FZMAX , real_T rtp_FZMIN , real_T rtp_VXLOW
, real_T rtp_kappamax ) { real_T Fx ; real_T Re ; real_T b_FzTire ; real_T
eonbpbm1ha_p [ 9 ] ; int32_T i ; real_T f_idx_0 ; real_T d_idx_0 ; localB ->
cngbrzew0c [ 0 ] = k2sxinhxgw ; localB -> cngbrzew0c [ 1 ] = hv2idhietl ;
localB -> cngbrzew0c [ 2 ] = ashlevpkyl ; localB -> cngbrzew0c [ 3 ] =
awiwrbj1ah ; localB -> cngbrzew0c [ 4 ] = inzpjy4lsf ; localB -> kvxvdkvc3b [
0 ] = hlmrktqqxx ; localB -> kvxvdkvc3b [ 1 ] = nskttisvdw ; localB ->
kvxvdkvc3b [ 2 ] = gx2hm5rb2y ; localB -> kvxvdkvc3b [ 3 ] = * j5fczfhdct ;
localB -> kvxvdkvc3b [ 4 ] = hogvqsfuar ; localB -> kvxvdkvc3b [ 5 ] =
b044mnnsii ; localB -> kvxvdkvc3b [ 6 ] = gf4qpdl150 ; localB -> kvxvdkvc3b [
7 ] = pu1ucopikz ; localB -> kvxvdkvc3b [ 8 ] = oast2q50w1 ; localB ->
kvxvdkvc3b [ 9 ] = pcxjf2dejm ; localB -> kvxvdkvc3b [ 10 ] = ciupjj5jym ;
localB -> kvxvdkvc3b [ 11 ] = ejxwq2ptzb ; localB -> kvxvdkvc3b [ 12 ] =
al51nl4udn ; localB -> kvxvdkvc3b [ 13 ] = dgtanepmh3 ; localB -> kvxvdkvc3b
[ 14 ] = pzgccsn2wd ; localB -> kvxvdkvc3b [ 15 ] = camr2op5y5 ; localB ->
kvxvdkvc3b [ 16 ] = keqisnbd3f ; localB -> kvxvdkvc3b [ 17 ] = dhjbvde1ql ;
localB -> kvxvdkvc3b [ 18 ] = itr0vkexlm ; localB -> kvxvdkvc3b [ 19 ] =
fb1lsx4wru ; localB -> kvxvdkvc3b [ 20 ] = ch5mu4pvuj ; localB -> kvxvdkvc3b
[ 21 ] = ffca2wfrbb ; localB -> kvxvdkvc3b [ 22 ] = gvisb41nzp ; localB ->
kvxvdkvc3b [ 23 ] = kzpuc5zaqp ; localB -> kvxvdkvc3b [ 24 ] = lxinzmxu4z ;
localB -> kvxvdkvc3b [ 25 ] = b5rhrqe32p ; localB -> kvxvdkvc3b [ 26 ] =
apc4wkkzj0 ; localB -> kvxvdkvc3b [ 27 ] = aqcvmgvimo ; localB -> kvxvdkvc3b
[ 28 ] = * bn0g4xdsr2 ; localB -> kvxvdkvc3b [ 29 ] = f1zwljlqis ; localB ->
kvxvdkvc3b [ 30 ] = faetpfbe3t ; localB -> kvxvdkvc3b [ 31 ] = f2wrfj3ld4 ;
localB -> kvxvdkvc3b [ 32 ] = pj0acbgno5 ; localB -> kvxvdkvc3b [ 33 ] =
jdp0ygo3rk ; localB -> j2px0ljv0m [ 0 ] = * j5fczfhdct ; localB -> j2px0ljv0m
[ 1 ] = fk1k5ewp1k ; localB -> j2px0ljv0m [ 2 ] = ptghaz5var ; localB ->
j2px0ljv0m [ 3 ] = oku1yjbub2 ; localB -> j2px0ljv0m [ 4 ] = b4mwug2qvn ;
localB -> j2px0ljv0m [ 5 ] = kswf03qlmx ; localB -> j2px0ljv0m [ 6 ] =
ev0nmrvz3n ; localB -> j2px0ljv0m [ 7 ] = gmukh33j1x ; localB -> j2px0ljv0m [
8 ] = ogftb2kvic ; localB -> j2px0ljv0m [ 9 ] = hovfcz1beb ; localB ->
j2px0ljv0m [ 10 ] = cnhq453n1f ; localB -> j2px0ljv0m [ 11 ] = pkzjbcphib ;
localB -> j2px0ljv0m [ 12 ] = msi2x0cy5n ; localB -> j2px0ljv0m [ 13 ] =
amqujbosc0 ; localB -> j2px0ljv0m [ 14 ] = ewmdujvrwd ; localB -> j2px0ljv0m
[ 15 ] = mc1li10ian ; localB -> p4bflvewss [ 0 ] = * j5fczfhdct ; localB ->
p4bflvewss [ 1 ] = nnclxiugbw ; localB -> p4bflvewss [ 2 ] = k3l0t243jz ;
localB -> p4bflvewss [ 3 ] = j3afmcxwz5 ; localB -> p4bflvewss [ 4 ] =
a3e0qsj3au ; localB -> p4bflvewss [ 5 ] = mkagm5ibpa ; localB -> p4bflvewss [
6 ] = bi25pt2vjy ; localB -> p4bflvewss [ 7 ] = lmhxu3lxab ; localB ->
p4bflvewss [ 8 ] = envxrls2yl ; localB -> p4bflvewss [ 9 ] = iz3vm40vgt ;
localB -> p4bflvewss [ 10 ] = baznp0pjy0 ; localB -> p4bflvewss [ 11 ] =
l1g1n0fail ; localB -> p4bflvewss [ 12 ] = ldjsaiwmlj ; localB -> p4bflvewss
[ 13 ] = lvflwdxi5c ; localB -> p4bflvewss [ 14 ] = fbu1d4l3xg ; localB ->
p4bflvewss [ 15 ] = lyrupr0dj4 ; localB -> p4bflvewss [ 16 ] = gkf12fuftl ;
localB -> p4bflvewss [ 17 ] = ezcoorwedf ; localB -> p4bflvewss [ 18 ] =
phwbwigd5c ; localB -> p4bflvewss [ 19 ] = k3l0glmlg0 ; localB -> p4bflvewss
[ 20 ] = pnspslh2fe ; localB -> p4bflvewss [ 21 ] = a3qmcmhclv ; localB ->
p4bflvewss [ 22 ] = hizlzr3fbv ; localB -> p4bflvewss [ 23 ] = nabnbe0jtn ;
switch ( ( int32_T ) kiu1b33l4h ) { case 0 : Re = cved3liee0 ; break ; case 1
: kacppyq1hi ( cghblzuxit , gbdhc1rwja , & Re , & b_FzTire ) ; break ; case 2
: Re = cved3liee0 ; break ; default : Re = cved3liee0 ; break ; } b_FzTire =
mw400ki20b ( cved3liee0 , gbdhc1rwja , jrgdlfbz0l , rtp_VXLOW , rtp_kappamax
) ; switch ( ( int32_T ) kihhma0xf1 ) { case 0 : Fx = czhlh0bakm ( b_FzTire ,
hr35hjpkhm , localB -> cngbrzew0c [ 0 ] , localB -> cngbrzew0c [ 1 ] , localB
-> cngbrzew0c [ 2 ] , localB -> cngbrzew0c [ 3 ] , localB -> cngbrzew0c [ 4 ]
, rtp_FZMIN , rtp_FZMAX ) ; break ; case 2 : Fx = m0bj1boftk ( b_FzTire ,
jrgdlfbz0l , hr35hjpkhm , localB -> kvxvdkvc3b [ 0 ] , localB -> kvxvdkvc3b [
1 ] , localB -> kvxvdkvc3b [ 2 ] , rtp_FZMIN , rtp_FZMAX , localB ->
kvxvdkvc3b [ 3 ] , localB -> kvxvdkvc3b [ 4 ] , localB -> kvxvdkvc3b [ 5 ] ,
localB -> kvxvdkvc3b [ 6 ] , localB -> kvxvdkvc3b [ 7 ] , localB ->
kvxvdkvc3b [ 8 ] , localB -> kvxvdkvc3b [ 9 ] , localB -> kvxvdkvc3b [ 10 ] ,
localB -> kvxvdkvc3b [ 11 ] , localB -> kvxvdkvc3b [ 12 ] , localB ->
kvxvdkvc3b [ 13 ] , localB -> kvxvdkvc3b [ 14 ] , localB -> kvxvdkvc3b [ 15 ]
, localB -> kvxvdkvc3b [ 16 ] , localB -> kvxvdkvc3b [ 17 ] , localB ->
kvxvdkvc3b [ 18 ] , localB -> kvxvdkvc3b [ 19 ] , localB -> kvxvdkvc3b [ 20 ]
, localB -> kvxvdkvc3b [ 21 ] , localB -> kvxvdkvc3b [ 22 ] , localB ->
kvxvdkvc3b [ 23 ] , localB -> kvxvdkvc3b [ 24 ] , localB -> kvxvdkvc3b [ 25 ]
, localB -> kvxvdkvc3b [ 26 ] , localB -> kvxvdkvc3b [ 27 ] , localB ->
kvxvdkvc3b [ 28 ] , localB -> kvxvdkvc3b [ 29 ] , localB -> kvxvdkvc3b [ 30 ]
, localB -> kvxvdkvc3b [ 31 ] , localB -> kvxvdkvc3b [ 32 ] , localB ->
kvxvdkvc3b [ 33 ] ) ; break ; case 3 : Fx = hr35hjpkhm ; if ( hr35hjpkhm <
rtp_FZMIN ) { Fx = rtp_FZMIN ; } if ( Fx > rtp_FZMAX ) { Fx = rtp_FZMAX ; }
for ( i = 0 ; i < 3 ; i ++ ) { eonbpbm1ha_p [ 3 * i ] = eonbpbm1ha [ i ] ;
eonbpbm1ha_p [ 3 * i + 1 ] = eonbpbm1ha [ i + 3 ] ; eonbpbm1ha_p [ 3 * i + 2
] = eonbpbm1ha [ i + 6 ] ; } Fx = interp2_MfPDUf1L ( m3cuefccje , kktb55loxf
, eonbpbm1ha_p , b_FzTire , Fx ) * localB -> cngbrzew0c [ 4 ] ; break ;
default : Fx = 0.0 ; b_FzTire = 0.0 ; break ; } switch ( ( int32_T )
cf0v1zbgxi ) { case 0 : localB -> imuoerh5jm = 0.0 ; break ; case 1 : localB
-> imuoerh5jm = ifxdy0al4w ( hr35hjpkhm , gbdhc1rwja , jrgdlfbz0l , localB ->
j2px0ljv0m [ 0 ] , localB -> j2px0ljv0m [ 3 ] , localB -> j2px0ljv0m [ 4 ] ,
localB -> j2px0ljv0m [ 5 ] , localB -> j2px0ljv0m [ 9 ] , localB ->
j2px0ljv0m [ 10 ] , localB -> j2px0ljv0m [ 13 ] , rtp_FZMIN , rtp_FZMAX ,
localB -> j2px0ljv0m [ 14 ] , localB -> j2px0ljv0m [ 15 ] ) ; break ; case 2
: d_idx_0 = localB -> j2px0ljv0m [ 0 ] ; if ( localB -> j2px0ljv0m [ 0 ] <
localB -> j2px0ljv0m [ 14 ] ) { d_idx_0 = localB -> j2px0ljv0m [ 14 ] ; } if
( d_idx_0 > localB -> j2px0ljv0m [ 15 ] ) { d_idx_0 = localB -> j2px0ljv0m [
15 ] ; } f_idx_0 = hr35hjpkhm ; if ( hr35hjpkhm < 0.0 ) { f_idx_0 = 0.0 ; }
if ( f_idx_0 > rtp_FZMAX ) { f_idx_0 = rtp_FZMAX ; } localB -> imuoerh5jm = (
( ( ( localB -> j2px0ljv0m [ 4 ] * Fx / localB -> j2px0ljv0m [ 1 ] + localB
-> j2px0ljv0m [ 3 ] ) + muDoubleScalarAbs ( jrgdlfbz0l / 16.7 ) * localB ->
j2px0ljv0m [ 5 ] ) + muDoubleScalarPower ( jrgdlfbz0l / 16.7 , 4.0 ) * localB
-> j2px0ljv0m [ 6 ] ) + ( localB -> j2px0ljv0m [ 8 ] * f_idx_0 / localB ->
j2px0ljv0m [ 1 ] + localB -> j2px0ljv0m [ 7 ] ) * ( localB -> j2px0ljv0m [ 11
] * localB -> j2px0ljv0m [ 11 ] ) ) * ( muDoubleScalarTanh ( gbdhc1rwja ) *
f_idx_0 * localB -> j2px0ljv0m [ 13 ] ) * ( muDoubleScalarPower ( f_idx_0 /
localB -> j2px0ljv0m [ 1 ] , localB -> j2px0ljv0m [ 9 ] ) *
muDoubleScalarPower ( d_idx_0 / localB -> j2px0ljv0m [ 2 ] , localB ->
j2px0ljv0m [ 10 ] ) ) * localB -> j2px0ljv0m [ 12 ] ; break ; case 3 :
d_idx_0 = hr35hjpkhm ; if ( hr35hjpkhm < 0.0 ) { d_idx_0 = 0.0 ; } if (
d_idx_0 > rtp_FZMAX ) { d_idx_0 = rtp_FZMAX ; } for ( i = 0 ; i < 3 ; i ++ )
{ eonbpbm1ha_p [ 3 * i ] = c1tj0ta223 [ i ] ; eonbpbm1ha_p [ 3 * i + 1 ] =
c1tj0ta223 [ i + 3 ] ; eonbpbm1ha_p [ 3 * i + 2 ] = c1tj0ta223 [ i + 6 ] ; }
localB -> imuoerh5jm = muDoubleScalarTanh ( gbdhc1rwja ) * interp2_MfPDUf1L (
i5qknzmimx , k2ajbqqlbw , eonbpbm1ha_p , jrgdlfbz0l , d_idx_0 ) ; break ;
case 4 : localB -> imuoerh5jm = c42svqng1d ( hr35hjpkhm , gbdhc1rwja , localB
-> j2px0ljv0m [ 0 ] , localB -> j2px0ljv0m [ 3 ] , localB -> j2px0ljv0m [ 4 ]
, localB -> j2px0ljv0m [ 5 ] , localB -> j2px0ljv0m [ 6 ] , Re , rtp_FZMIN ,
rtp_FZMAX , localB -> j2px0ljv0m [ 14 ] , localB -> j2px0ljv0m [ 15 ] ) ;
break ; default : localB -> imuoerh5jm = 0.0 ; break ; } localB -> dbw42rwkve
= Fx ; * b335sfmhae = b_FzTire ; * njhenvfe4e = Re ; } static boolean_T
lhu0myyims ( real_T Tout , real_T Tfmaxs , amgc5viqpp * localB , ozgwn1x4el *
localDW ) { localB -> g1bj051oh5 = Tout ; localB -> nfko0hod0i = Tfmaxs ;
localB -> p2j1wfi3wc = ( muDoubleScalarAbs ( localB -> g1bj051oh5 ) >= localB
-> nfko0hod0i ) ; localDW -> bqtdi5kbt0 = 4 ; return localB -> p2j1wfi3wc ; }
static boolean_T edfde4hc3b ( real_T Tout , real_T Tfmaxs , amgc5viqpp *
localB , ozgwn1x4el * localDW , nlgkjy4ieu * localP , real_T rtp_br ) {
real_T iachmdabn5 ; localB -> dgitpbtkqd = Tout ; localB -> ltr0ixpkao =
Tfmaxs ; iachmdabn5 = rtp_br * localP -> P_0 ; localB -> az52kqlyve = localP
-> P_8 [ ( ( ( muDoubleScalarAbs ( ( ( 0.0 - localB -> dgitpbtkqd ) -
iachmdabn5 ) + iachmdabn5 ) >= localB -> ltr0ixpkao ) + ( ( uint32_T ) (
muDoubleScalarAbs ( - localB -> dgitpbtkqd ) <= localB -> ltr0ixpkao ) << 1 )
) << 1 ) + localDW -> cnj1nd10fu ] ; localDW -> cnj1nd10fu = localB ->
az52kqlyve ; localDW -> emtfaxoulq = 4 ; return localB -> az52kqlyve ; } void
agp0kvhfzx ( amgc5viqpp * localB , ozgwn1x4el * localDW , nlgkjy4ieu * localP
, ihyl1wiej4 * localX , real_T rtp_omegao ) { localDW -> jpzho5sh4i = 0U ;
localDW -> m33bbl15dk = fffc1wsvta ; localB -> lzrwvrbve4 = 0.0 ; localB ->
ov4ud0hfcn = 0.0 ; localB -> go3cbl3j4t = 0.0 ; localB -> en4dhyobpx = 0.0 ;
localB -> p2j1wfi3wc = localP -> P_5 ; localDW -> cnj1nd10fu = localP -> P_7
; localB -> az52kqlyve = localP -> P_6 ; localX -> fvrnptjzqw = rtp_omegao ;
} void i0xuaxjkre ( amgc5viqpp * localB , ozgwn1x4el * localDW , ihyl1wiej4 *
localX ) { localDW -> jpzho5sh4i = 0U ; localDW -> m33bbl15dk = fffc1wsvta ;
localX -> fvrnptjzqw = 0.0 ; localB -> lzrwvrbve4 = 0.0 ; localB ->
ov4ud0hfcn = 0.0 ; localB -> go3cbl3j4t = 0.0 ; localB -> en4dhyobpx = 0.0 ;
} void l4s3qwfe05 ( amgc5viqpp * localB ) { localB -> g1bj051oh5 = 0.0 ;
localB -> nfko0hod0i = 0.0 ; localB -> dgitpbtkqd = 0.0 ; localB ->
ltr0ixpkao = 0.0 ; localB -> lzrwvrbve4 = 0.0 ; localB -> en4dhyobpx = 0.0 ;
localB -> p2j1wfi3wc = false ; localB -> az52kqlyve = false ; localB ->
prwycy4qbk = 0.0 ; localB -> fy1vh2s12e = 0.0 ; localB -> ax4qyk4d00 = 0.0 ;
localB -> j54l4ejpui = 0.0 ; localB -> onlat3ps3i = 0.0 ; localB ->
fm23id0axl = 0.0 ; localB -> ov4ud0hfcn = 0.0 ; localB -> go3cbl3j4t = 0.0 ;
} void kxq1u1mbaq ( pa50wxsaaa * const hokadafud5 , real_T b32oizxwva ,
real_T ken34ttqyi , real_T e35lu01p2h , amgc5viqpp * localB , ozgwn1x4el *
localDW , nlgkjy4ieu * localP , ihyl1wiej4 * localX , real_T rtp_omegao ,
real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol ) { if (
rtmIsMajorTimeStep ( hokadafud5 ) ) { localDW -> awwuuezcdb = rtmGetTaskTime
( hokadafud5 , 0 ) ; if ( localDW -> jpzho5sh4i == 0U ) { localDW ->
jpzho5sh4i = 1U ; localX -> fvrnptjzqw = rtp_omegao ; localDW -> m33bbl15dk =
i4xjz4h3qp ; localB -> prwycy4qbk = localX -> fvrnptjzqw ; localB ->
fy1vh2s12e = localP -> P_4 * localB -> prwycy4qbk ; localB -> ax4qyk4d00 =
e35lu01p2h * muDoubleScalarTanh ( localB -> fy1vh2s12e ) ; localB ->
j54l4ejpui = rtp_br * localB -> prwycy4qbk ; localB -> go3cbl3j4t = localB ->
j54l4ejpui ; localB -> lzrwvrbve4 = localB -> prwycy4qbk ; localB ->
onlat3ps3i = ( localB -> ax4qyk4d00 - b32oizxwva ) - localB -> j54l4ejpui ;
localB -> fm23id0axl = 1.0 / rtp_Iyy * localB -> onlat3ps3i ; localB ->
ov4ud0hfcn = localB -> fm23id0axl ; localB -> en4dhyobpx = localB ->
onlat3ps3i ; ssSetBlockStateForSolverChangedAtMajorStep ( hokadafud5 ->
_mdlRefSfcnS ) ; } else if ( localDW -> m33bbl15dk == pqs3cqvzxy ) { if (
lhu0myyims ( b32oizxwva , ken34ttqyi , localB , localDW ) ) { localX ->
fvrnptjzqw = 0.0 ; localDW -> m33bbl15dk = i4xjz4h3qp ; localB -> prwycy4qbk
= localX -> fvrnptjzqw ; localB -> fy1vh2s12e = localP -> P_4 * localB ->
prwycy4qbk ; localB -> ax4qyk4d00 = e35lu01p2h * muDoubleScalarTanh ( localB
-> fy1vh2s12e ) ; localB -> j54l4ejpui = rtp_br * localB -> prwycy4qbk ;
localB -> go3cbl3j4t = localB -> j54l4ejpui ; localB -> lzrwvrbve4 = localB
-> prwycy4qbk ; localB -> onlat3ps3i = ( localB -> ax4qyk4d00 - b32oizxwva )
- localB -> j54l4ejpui ; localB -> fm23id0axl = 1.0 / rtp_Iyy * localB ->
onlat3ps3i ; localB -> ov4ud0hfcn = localB -> fm23id0axl ; localB ->
en4dhyobpx = localB -> onlat3ps3i ;
ssSetBlockStateForSolverChangedAtMajorStep ( hokadafud5 -> _mdlRefSfcnS ) ; }
} else { if ( edfde4hc3b ( b32oizxwva , ken34ttqyi , localB , localDW ,
localP , rtp_br ) && ( muDoubleScalarAbs ( localB -> lzrwvrbve4 ) <=
rtp_OmegaTol ) ) { localDW -> m33bbl15dk = pqs3cqvzxy ; localB -> en4dhyobpx
= - b32oizxwva ; if ( rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit (
hokadafud5 , 1 , 0 ) ) { localB -> lzrwvrbve4 = localP -> P_1 ; localB ->
ov4ud0hfcn = localP -> P_2 ; localB -> go3cbl3j4t = localP -> P_3 ; }
ssSetBlockStateForSolverChangedAtMajorStep ( hokadafud5 -> _mdlRefSfcnS ) ; }
} } if ( localDW -> m33bbl15dk == pqs3cqvzxy ) { localB -> en4dhyobpx = -
b32oizxwva ; if ( rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit (
hokadafud5 , 1 , 0 ) ) { localB -> lzrwvrbve4 = localP -> P_1 ; localB ->
ov4ud0hfcn = localP -> P_2 ; localB -> go3cbl3j4t = localP -> P_3 ; } } else
{ localB -> prwycy4qbk = localX -> fvrnptjzqw ; localB -> fy1vh2s12e = localP
-> P_4 * localB -> prwycy4qbk ; localB -> ax4qyk4d00 = e35lu01p2h *
muDoubleScalarTanh ( localB -> fy1vh2s12e ) ; localB -> j54l4ejpui = rtp_br *
localB -> prwycy4qbk ; localB -> go3cbl3j4t = localB -> j54l4ejpui ; localB
-> lzrwvrbve4 = localB -> prwycy4qbk ; localB -> onlat3ps3i = ( localB ->
ax4qyk4d00 - b32oizxwva ) - localB -> j54l4ejpui ; localB -> fm23id0axl = 1.0
/ rtp_Iyy * localB -> onlat3ps3i ; localB -> ov4ud0hfcn = localB ->
fm23id0axl ; localB -> en4dhyobpx = localB -> onlat3ps3i ; } } void
gxel4okbyr ( amgc5viqpp * localB , ozgwn1x4el * localDW , imbwkukzbz *
localXdot ) { localXdot -> fvrnptjzqw = 0.0 ; if ( localDW -> m33bbl15dk == 2
) { localXdot -> fvrnptjzqw = localB -> fm23id0axl ; } } void dlyl3f4aia (
pa50wxsaaa * const hokadafud5 , real_T b32oizxwva , real_T ken34ttqyi ,
amgc5viqpp * localB , ozgwn1x4el * localDW , nlgkjy4ieu * localP , kfn2mmtqck
* localZCSV , real_T rtp_br , real_T rtp_OmegaTol ) { boolean_T stateChanged
; if ( localDW -> awwuuezcdb == rtmGetTaskTime ( hokadafud5 , 0 ) ) {
localZCSV -> g0mhelktla = - 1.0 ; } else { stateChanged = false ; if (
localDW -> jpzho5sh4i == 0U ) { stateChanged = true ; } else if ( localDW ->
m33bbl15dk == pqs3cqvzxy ) { if ( lhu0myyims ( b32oizxwva , ken34ttqyi ,
localB , localDW ) ) { stateChanged = true ; } } else { if ( edfde4hc3b (
b32oizxwva , ken34ttqyi , localB , localDW , localP , rtp_br ) ) {
stateChanged = ( muDoubleScalarAbs ( localB -> lzrwvrbve4 ) <= rtp_OmegaTol )
; } } if ( stateChanged ) { localZCSV -> g0mhelktla = 1.0 ; } else {
localZCSV -> g0mhelktla = - 1.0 ; } } } void kxaz1orurl ( int32_T NumIters ,
h20hxunqni localB [ 1 ] , fwjzjud4mi localDW [ 1 ] , bhpfbc1iry * localP ,
ecmh0hr5s2 localX [ 1 ] , real_T rtp_omegao ) { int32_T oaj0wdyrn3 ; for (
oaj0wdyrn3 = 0 ; oaj0wdyrn3 < NumIters ; oaj0wdyrn3 ++ ) { agp0kvhfzx ( &
localB [ oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj , & localDW [ oaj0wdyrn3 ] .
lcvqzt1s0u . ah1sdocsnj , & localP -> lcvqzt1s0u . ah1sdocsnj , & localX [
oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj , rtp_omegao ) ; } } void cp2wwmxbs5 (
int32_T NumIters , h20hxunqni localB [ 1 ] , fwjzjud4mi localDW [ 1 ] ,
ecmh0hr5s2 localX [ 1 ] ) { int32_T oaj0wdyrn3 ; for ( oaj0wdyrn3 = 0 ;
oaj0wdyrn3 < NumIters ; oaj0wdyrn3 ++ ) { i0xuaxjkre ( & localB [ oaj0wdyrn3
] . lcvqzt1s0u . ah1sdocsnj , & localDW [ oaj0wdyrn3 ] . lcvqzt1s0u .
ah1sdocsnj , & localX [ oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj ) ; } } void
mulgnbyr4x ( int32_T NumIters , h20hxunqni localB [ 1 ] ) { int32_T
oaj0wdyrn3 ; for ( oaj0wdyrn3 = 0 ; oaj0wdyrn3 < NumIters ; oaj0wdyrn3 ++ ) {
l4s3qwfe05 ( & localB [ oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj ) ; } } void
lf15r5ane4 ( int32_T NumIters , pa50wxsaaa * const hokadafud5 , const real_T
* j1fwhfq2cu , const real_T * dnbk4yhtuj , const real_T * aq2zqqc1f1 , real_T
* lecxwkizel , h20hxunqni localB [ 1 ] , fwjzjud4mi localDW [ 1 ] ,
bhpfbc1iry * localP , ecmh0hr5s2 localX [ 1 ] , real_T rtp_omegao , real_T
rtp_br , real_T rtp_Iyy , real_T rtp_VXLOW , real_T rtp_Re ) { real_T
otsnyrq2ir ; real_T dkdhqajiu0 ; real_T d3pwvpztku ; int32_T oaj0wdyrn3 ; for
( oaj0wdyrn3 = 0 ; oaj0wdyrn3 < NumIters ; oaj0wdyrn3 ++ ) { otsnyrq2ir =
j1fwhfq2cu [ oaj0wdyrn3 ] ; dkdhqajiu0 = dnbk4yhtuj [ oaj0wdyrn3 ] ;
d3pwvpztku = aq2zqqc1f1 [ oaj0wdyrn3 ] ; kxq1u1mbaq ( hokadafud5 , otsnyrq2ir
, dkdhqajiu0 , d3pwvpztku , & localB [ oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj
, & localDW [ oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj , & localP -> lcvqzt1s0u
. ah1sdocsnj , & localX [ oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj , rtp_omegao
, rtp_br , rtp_Iyy , rtp_VXLOW * rtp_Re * 0.0 ) ; lecxwkizel [ oaj0wdyrn3 ] =
localB [ oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj . lzrwvrbve4 ; } } void
gmtbryc4la ( int32_T NumIters , const real_T * j1fwhfq2cu , const real_T *
dnbk4yhtuj , const real_T * aq2zqqc1f1 , h20hxunqni localB [ 1 ] , fwjzjud4mi
localDW [ 1 ] , pc4teyp50g localXdot [ 1 ] ) { real_T otsnyrq2ir ; real_T
dkdhqajiu0 ; real_T d3pwvpztku ; int32_T oaj0wdyrn3 ; for ( oaj0wdyrn3 = 0 ;
oaj0wdyrn3 < NumIters ; oaj0wdyrn3 ++ ) { otsnyrq2ir = j1fwhfq2cu [
oaj0wdyrn3 ] ; dkdhqajiu0 = dnbk4yhtuj [ oaj0wdyrn3 ] ; d3pwvpztku =
aq2zqqc1f1 [ oaj0wdyrn3 ] ; gxel4okbyr ( & localB [ oaj0wdyrn3 ] . lcvqzt1s0u
. ah1sdocsnj , & localDW [ oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj , &
localXdot [ oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj ) ; } } void ik0wvz4qgi (
int32_T NumIters , pa50wxsaaa * const hokadafud5 , const real_T * j1fwhfq2cu
, const real_T * dnbk4yhtuj , const real_T * aq2zqqc1f1 , h20hxunqni localB [
1 ] , fwjzjud4mi localDW [ 1 ] , bhpfbc1iry * localP , ekjfzsz3hg localZCSV [
1 ] , real_T rtp_br , real_T rtp_VXLOW , real_T rtp_Re ) { real_T otsnyrq2ir
; real_T dkdhqajiu0 ; real_T d3pwvpztku ; int32_T oaj0wdyrn3 ; for (
oaj0wdyrn3 = 0 ; oaj0wdyrn3 < NumIters ; oaj0wdyrn3 ++ ) { otsnyrq2ir =
j1fwhfq2cu [ oaj0wdyrn3 ] ; dkdhqajiu0 = dnbk4yhtuj [ oaj0wdyrn3 ] ;
d3pwvpztku = aq2zqqc1f1 [ oaj0wdyrn3 ] ; dlyl3f4aia ( hokadafud5 , otsnyrq2ir
, dkdhqajiu0 , & localB [ oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj , & localDW
[ oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj , & localP -> lcvqzt1s0u .
ah1sdocsnj , & localZCSV [ oaj0wdyrn3 ] . lcvqzt1s0u . ah1sdocsnj , rtp_br ,
rtp_VXLOW * rtp_Re * 0.0 ) ; } } static void hewkpcvg5g ( real_T Ftire_x ,
real_T Ftire_y , real_T b_Fxtire_sat , real_T b_Fytire_sat , real_T *
Ftire_xs , real_T * Ftire_ys ) { real_T theta_Ftire ; real_T Ftire_mag ;
real_T Ftire_y_max ; real_T c_a ; theta_Ftire = muDoubleScalarAtan2 ( Ftire_x
, Ftire_y ) ; Ftire_y_max = muDoubleScalarCos ( theta_Ftire ) ; Ftire_mag =
b_Fxtire_sat * Ftire_y_max ; theta_Ftire = muDoubleScalarSin ( theta_Ftire )
; c_a = b_Fytire_sat * theta_Ftire ; Ftire_mag = b_Fxtire_sat * b_Fytire_sat
/ muDoubleScalarSqrt ( Ftire_mag * Ftire_mag + c_a * c_a ) ; theta_Ftire *=
Ftire_mag ; Ftire_y_max *= Ftire_mag ; * Ftire_xs = Ftire_x ; if (
muDoubleScalarAbs ( Ftire_x ) > muDoubleScalarAbs ( theta_Ftire ) ) { *
Ftire_xs = theta_Ftire ; } * Ftire_ys = Ftire_y ; if ( muDoubleScalarAbs (
Ftire_y ) > muDoubleScalarAbs ( Ftire_y_max ) ) { * Ftire_ys = Ftire_y_max ;
} } void hzczw4rimi ( pa50wxsaaa * const hokadafud5 , real_T * pe5smgk1bf ,
real_T * cr4vlmhzvc , real_T * beq1qzuhx3 , real_T * lo50jqtaqt , real_T *
mzzkjogxl0 , real_T g2tnztcpzi [ 4 ] , id4lpjcjia * localB , bpefjqedzq *
localDW , hcqlainyez * localX ) { boolean_T tmp ; localX -> l2hk3fgmlh [ 0 ]
= becrktx0d0 . P_253 ; localX -> l2hk3fgmlh [ 1 ] = becrktx0d0 . P_253 ;
localX -> l2hk3fgmlh [ 2 ] = becrktx0d0 . P_253 ; localX -> l2hk3fgmlh [ 3 ]
= becrktx0d0 . P_253 ; localX -> boq0sjomkz = becrktx0d0 . P_254 ; localDW ->
bzrcg4ekd2 = becrktx0d0 . P_260 ; localDW -> hx3dqme3j0 = becrktx0d0 . P_261
; localDW -> hvodgxjjby = becrktx0d0 . P_262 ; localDW -> h3znsdkf03 =
becrktx0d0 . P_263 ; localDW -> od03lov34i = becrktx0d0 . P_264 ; localDW ->
js1pxba5c2 = becrktx0d0 . P_265 ; localDW -> kear3lpxvq = becrktx0d0 . P_266
; localDW -> nhs2etlup5 = becrktx0d0 . P_267 ; localDW -> cpkkyluphr =
becrktx0d0 . P_268 ; localDW -> pd5cfi4ugv = becrktx0d0 . P_269 ; localDW ->
mk0ozmamcr = becrktx0d0 . P_270 ; localDW -> l0dwzkeuuy = becrktx0d0 . P_271
; localX -> g4fxozrdb2 = becrktx0d0 . P_315 ; localX -> i12d3wngfk =
becrktx0d0 . P_362 ; localX -> betxkjviha = becrktx0d0 . P_409 ; localDW ->
ncgxsvvru2 = becrktx0d0 . P_458 ; localDW -> m44z2pktlv = becrktx0d0 . P_459
; localDW -> baajemjlf1 = becrktx0d0 . P_460 ; localDW -> nag3iizhma =
becrktx0d0 . P_461 ; localDW -> kvj4uckeqc = 1 ; if ( rtmIsFirstInitCond (
hokadafud5 ) ) { localX -> n5tb00omor [ 0 ] = 0.0 ; localX -> n5tb00omor [ 1
] = 0.0 ; localX -> n5tb00omor [ 2 ] = 0.0 ; localX -> n5tb00omor [ 3 ] = 0.0
; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( hokadafud5 -> _mdlRefSfcnS ) ; localDW ->
kvj4uckeqc = ! tmp ; } else { localDW -> kvj4uckeqc = 1 ; } localX ->
bmsz0qfwwr [ 0 ] = 0.0 ; localX -> bmsz0qfwwr [ 1 ] = 0.0 ; } localDW ->
bokb5rvw5x = 1 ; if ( rtmIsFirstInitCond ( hokadafud5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( hokadafud5 -> _mdlRefSfcnS ) ; localDW ->
bokb5rvw5x = ! tmp ; } else { localDW -> bokb5rvw5x = 1 ; } } * pe5smgk1bf =
becrktx0d0 . P_469 ; * beq1qzuhx3 = becrktx0d0 . P_470 ; * cr4vlmhzvc =
becrktx0d0 . P_471 ; * mzzkjogxl0 = becrktx0d0 . P_472 ; * lo50jqtaqt =
becrktx0d0 . P_473 ; g2tnztcpzi [ 0 ] = becrktx0d0 . P_479 [ 0 ] ; g2tnztcpzi
[ 1 ] = becrktx0d0 . P_479 [ 1 ] ; g2tnztcpzi [ 2 ] = becrktx0d0 . P_479 [ 2
] ; g2tnztcpzi [ 3 ] = becrktx0d0 . P_479 [ 3 ] ; kxaz1orurl ( 1 , localB ->
lf15r5ane43 , localDW -> lf15r5ane43 , & becrktx0d0 . lf15r5ane43 , localX ->
lf15r5ane43 , becrktx0d0 . P_239 ) ; kxaz1orurl ( 1 , localB -> g2eyqylo5m ,
localDW -> g2eyqylo5m , & becrktx0d0 . g2eyqylo5m , localX -> g2eyqylo5m ,
becrktx0d0 . P_240 ) ; kxaz1orurl ( 1 , localB -> d22xfw4kpx , localDW ->
d22xfw4kpx , & becrktx0d0 . d22xfw4kpx , localX -> d22xfw4kpx , becrktx0d0 .
P_241 ) ; kxaz1orurl ( 1 , localB -> hzwxfzysvm , localDW -> hzwxfzysvm , &
becrktx0d0 . hzwxfzysvm , localX -> hzwxfzysvm , becrktx0d0 . P_242 ) ; }
void ps1ayp5pv5 ( pa50wxsaaa * const hokadafud5 , real_T * pe5smgk1bf ,
real_T * cr4vlmhzvc , real_T * beq1qzuhx3 , real_T * lo50jqtaqt , real_T *
mzzkjogxl0 , real_T g2tnztcpzi [ 4 ] , id4lpjcjia * localB , bpefjqedzq *
localDW , hcqlainyez * localX ) { boolean_T tmp ; localX -> l2hk3fgmlh [ 0 ]
= becrktx0d0 . P_253 ; localX -> l2hk3fgmlh [ 1 ] = becrktx0d0 . P_253 ;
localX -> l2hk3fgmlh [ 2 ] = becrktx0d0 . P_253 ; localX -> l2hk3fgmlh [ 3 ]
= becrktx0d0 . P_253 ; localX -> boq0sjomkz = becrktx0d0 . P_254 ; localDW ->
bzrcg4ekd2 = becrktx0d0 . P_260 ; localDW -> hx3dqme3j0 = becrktx0d0 . P_261
; localDW -> hvodgxjjby = becrktx0d0 . P_262 ; localDW -> h3znsdkf03 =
becrktx0d0 . P_263 ; localDW -> od03lov34i = becrktx0d0 . P_264 ; localDW ->
js1pxba5c2 = becrktx0d0 . P_265 ; localDW -> kear3lpxvq = becrktx0d0 . P_266
; localDW -> nhs2etlup5 = becrktx0d0 . P_267 ; localDW -> cpkkyluphr =
becrktx0d0 . P_268 ; localDW -> pd5cfi4ugv = becrktx0d0 . P_269 ; localDW ->
mk0ozmamcr = becrktx0d0 . P_270 ; localDW -> l0dwzkeuuy = becrktx0d0 . P_271
; localX -> g4fxozrdb2 = becrktx0d0 . P_315 ; localX -> i12d3wngfk =
becrktx0d0 . P_362 ; localX -> betxkjviha = becrktx0d0 . P_409 ; localDW ->
ncgxsvvru2 = becrktx0d0 . P_458 ; localDW -> m44z2pktlv = becrktx0d0 . P_459
; localDW -> baajemjlf1 = becrktx0d0 . P_460 ; localDW -> nag3iizhma =
becrktx0d0 . P_461 ; localDW -> kvj4uckeqc = 1 ; if ( rtmIsFirstInitCond (
hokadafud5 ) ) { localX -> n5tb00omor [ 0 ] = 0.0 ; localX -> n5tb00omor [ 1
] = 0.0 ; localX -> n5tb00omor [ 2 ] = 0.0 ; localX -> n5tb00omor [ 3 ] = 0.0
; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( hokadafud5 -> _mdlRefSfcnS ) ; localDW ->
kvj4uckeqc = ! tmp ; } else { localDW -> kvj4uckeqc = 1 ; } localX ->
bmsz0qfwwr [ 0 ] = 0.0 ; localX -> bmsz0qfwwr [ 1 ] = 0.0 ; } localDW ->
bokb5rvw5x = 1 ; if ( rtmIsFirstInitCond ( hokadafud5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( hokadafud5 -> _mdlRefSfcnS ) ; localDW ->
bokb5rvw5x = ! tmp ; } else { localDW -> bokb5rvw5x = 1 ; } } * pe5smgk1bf =
becrktx0d0 . P_469 ; * beq1qzuhx3 = becrktx0d0 . P_470 ; * cr4vlmhzvc =
becrktx0d0 . P_471 ; * mzzkjogxl0 = becrktx0d0 . P_472 ; * lo50jqtaqt =
becrktx0d0 . P_473 ; g2tnztcpzi [ 0 ] = becrktx0d0 . P_479 [ 0 ] ; g2tnztcpzi
[ 1 ] = becrktx0d0 . P_479 [ 1 ] ; g2tnztcpzi [ 2 ] = becrktx0d0 . P_479 [ 2
] ; g2tnztcpzi [ 3 ] = becrktx0d0 . P_479 [ 3 ] ; cp2wwmxbs5 ( 1 , localB ->
lf15r5ane43 , localDW -> lf15r5ane43 , localX -> lf15r5ane43 ) ; cp2wwmxbs5 (
1 , localB -> g2eyqylo5m , localDW -> g2eyqylo5m , localX -> g2eyqylo5m ) ;
cp2wwmxbs5 ( 1 , localB -> d22xfw4kpx , localDW -> d22xfw4kpx , localX ->
d22xfw4kpx ) ; cp2wwmxbs5 ( 1 , localB -> hzwxfzysvm , localDW -> hzwxfzysvm
, localX -> hzwxfzysvm ) ; } void aoae4c423r ( real_T * pe5smgk1bf , real_T *
cr4vlmhzvc , real_T * beq1qzuhx3 , real_T * lo50jqtaqt , real_T * mzzkjogxl0
, real_T g2tnztcpzi [ 4 ] , id4lpjcjia * localB , bpefjqedzq * localDW ) {
int32_T eufvenxnxf ; int32_T i ; mulgnbyr4x ( 1 , localB -> lf15r5ane43 ) ;
for ( eufvenxnxf = 0 ; eufvenxnxf < 4 ; eufvenxnxf ++ ) { localB ->
nqfgq4kh2x [ eufvenxnxf ] . bjb2dhghpi [ 0 ] = 0.0 ; localB -> nqfgq4kh2x [
eufvenxnxf ] . bjb2dhghpi [ 1 ] = 0.0 ; localB -> nqfgq4kh2x [ eufvenxnxf ] .
bjb2dhghpi [ 2 ] = 0.0 ; for ( i = 0 ; i < 9 ; i ++ ) { localB -> nqfgq4kh2x
[ eufvenxnxf ] . eoildmcuvz [ i ] = 0.0 ; } } localB -> oexu5qniuy [ 0 ] =
becrktx0d0 . P_281 [ 0 ] ; localB -> mstqxpzqfg [ 0 ] = becrktx0d0 . P_282 [
0 ] ; localB -> oexu5qniuy [ 1 ] = becrktx0d0 . P_281 [ 1 ] ; localB ->
mstqxpzqfg [ 1 ] = becrktx0d0 . P_282 [ 1 ] ; localB -> oexu5qniuy [ 2 ] =
becrktx0d0 . P_281 [ 2 ] ; localB -> mstqxpzqfg [ 2 ] = becrktx0d0 . P_282 [
2 ] ; localB -> ddkghz2dmk [ 0 ] = becrktx0d0 . P_286 [ 0 ] ; localB ->
f3z5ekoxpe [ 0 ] = becrktx0d0 . P_287 [ 0 ] ; localB -> ddkghz2dmk [ 1 ] =
becrktx0d0 . P_286 [ 1 ] ; localB -> f3z5ekoxpe [ 1 ] = becrktx0d0 . P_287 [
1 ] ; localB -> ddkghz2dmk [ 2 ] = becrktx0d0 . P_286 [ 2 ] ; localB ->
f3z5ekoxpe [ 2 ] = becrktx0d0 . P_287 [ 2 ] ; memcpy ( & localB -> kagvflkv30
[ 0 ] , & becrktx0d0 . P_283 [ 0 ] , 9U * sizeof ( real_T ) ) ; memcpy ( &
localB -> de3gcclrpf [ 0 ] , & becrktx0d0 . P_288 [ 0 ] , 9U * sizeof (
real_T ) ) ; localB -> hb3cv2fi41 = becrktx0d0 . P_312 ; localB -> mkkd545rnn
= becrktx0d0 . P_313 ; localB -> apmz02jse2 = becrktx0d0 . P_314 ; mulgnbyr4x
( 1 , localB -> g2eyqylo5m ) ; localB -> olljvthm5q [ 0 ] = becrktx0d0 .
P_328 [ 0 ] ; localB -> itsa2d3ctl [ 0 ] = becrktx0d0 . P_329 [ 0 ] ; localB
-> olljvthm5q [ 1 ] = becrktx0d0 . P_328 [ 1 ] ; localB -> itsa2d3ctl [ 1 ] =
becrktx0d0 . P_329 [ 1 ] ; localB -> olljvthm5q [ 2 ] = becrktx0d0 . P_328 [
2 ] ; localB -> itsa2d3ctl [ 2 ] = becrktx0d0 . P_329 [ 2 ] ; localB ->
fh5o3hjnn4 [ 0 ] = becrktx0d0 . P_333 [ 0 ] ; localB -> csi1vdg0u4 [ 0 ] =
becrktx0d0 . P_334 [ 0 ] ; localB -> fh5o3hjnn4 [ 1 ] = becrktx0d0 . P_333 [
1 ] ; localB -> csi1vdg0u4 [ 1 ] = becrktx0d0 . P_334 [ 1 ] ; localB ->
fh5o3hjnn4 [ 2 ] = becrktx0d0 . P_333 [ 2 ] ; localB -> csi1vdg0u4 [ 2 ] =
becrktx0d0 . P_334 [ 2 ] ; memcpy ( & localB -> ogwmdf0uzr [ 0 ] , &
becrktx0d0 . P_330 [ 0 ] , 9U * sizeof ( real_T ) ) ; memcpy ( & localB ->
okar031ivj [ 0 ] , & becrktx0d0 . P_335 [ 0 ] , 9U * sizeof ( real_T ) ) ;
localB -> gjifpqqgt0 = becrktx0d0 . P_359 ; localB -> ck21m4ewez = becrktx0d0
. P_360 ; localB -> dfj3e5gry1 = becrktx0d0 . P_361 ; mulgnbyr4x ( 1 , localB
-> d22xfw4kpx ) ; localB -> dkzgnds2he [ 0 ] = becrktx0d0 . P_375 [ 0 ] ;
localB -> igmssod5aw [ 0 ] = becrktx0d0 . P_376 [ 0 ] ; localB -> dkzgnds2he
[ 1 ] = becrktx0d0 . P_375 [ 1 ] ; localB -> igmssod5aw [ 1 ] = becrktx0d0 .
P_376 [ 1 ] ; localB -> dkzgnds2he [ 2 ] = becrktx0d0 . P_375 [ 2 ] ; localB
-> igmssod5aw [ 2 ] = becrktx0d0 . P_376 [ 2 ] ; localB -> cd2fs5ehmc [ 0 ] =
becrktx0d0 . P_380 [ 0 ] ; localB -> bkuftmabbw [ 0 ] = becrktx0d0 . P_381 [
0 ] ; localB -> cd2fs5ehmc [ 1 ] = becrktx0d0 . P_380 [ 1 ] ; localB ->
bkuftmabbw [ 1 ] = becrktx0d0 . P_381 [ 1 ] ; localB -> cd2fs5ehmc [ 2 ] =
becrktx0d0 . P_380 [ 2 ] ; localB -> bkuftmabbw [ 2 ] = becrktx0d0 . P_381 [
2 ] ; memcpy ( & localB -> kf1zpwhh4b [ 0 ] , & becrktx0d0 . P_377 [ 0 ] , 9U
* sizeof ( real_T ) ) ; memcpy ( & localB -> krjpez4j44 [ 0 ] , & becrktx0d0
. P_382 [ 0 ] , 9U * sizeof ( real_T ) ) ; localB -> ldhgong4mk = becrktx0d0
. P_406 ; localB -> mzqfye00vu = becrktx0d0 . P_407 ; localB -> bpsd43fx4l =
becrktx0d0 . P_408 ; mulgnbyr4x ( 1 , localB -> hzwxfzysvm ) ; localB ->
fraaz4lots [ 0 ] = becrktx0d0 . P_422 [ 0 ] ; localB -> pnn2p0abyz [ 0 ] =
becrktx0d0 . P_423 [ 0 ] ; localB -> fraaz4lots [ 1 ] = becrktx0d0 . P_422 [
1 ] ; localB -> pnn2p0abyz [ 1 ] = becrktx0d0 . P_423 [ 1 ] ; localB ->
fraaz4lots [ 2 ] = becrktx0d0 . P_422 [ 2 ] ; localB -> pnn2p0abyz [ 2 ] =
becrktx0d0 . P_423 [ 2 ] ; localB -> hjzs3f2f4p [ 0 ] = becrktx0d0 . P_427 [
0 ] ; localB -> pmmrxnudo1 [ 0 ] = becrktx0d0 . P_428 [ 0 ] ; localB ->
hjzs3f2f4p [ 1 ] = becrktx0d0 . P_427 [ 1 ] ; localB -> pmmrxnudo1 [ 1 ] =
becrktx0d0 . P_428 [ 1 ] ; localB -> hjzs3f2f4p [ 2 ] = becrktx0d0 . P_427 [
2 ] ; localB -> pmmrxnudo1 [ 2 ] = becrktx0d0 . P_428 [ 2 ] ; memcpy ( &
localB -> awixywbfuo [ 0 ] , & becrktx0d0 . P_424 [ 0 ] , 9U * sizeof (
real_T ) ) ; memcpy ( & localB -> kieptjun4i [ 0 ] , & becrktx0d0 . P_429 [ 0
] , 9U * sizeof ( real_T ) ) ; localB -> e40b3h5ffu = becrktx0d0 . P_453 ;
localB -> nf4jsbi5wr = becrktx0d0 . P_454 ; localB -> pkyhejy0vp = becrktx0d0
. P_455 ; localDW -> fvd2istvuu = 0 ; * pe5smgk1bf = becrktx0d0 . P_469 ; *
beq1qzuhx3 = becrktx0d0 . P_470 ; * cr4vlmhzvc = becrktx0d0 . P_471 ; *
mzzkjogxl0 = becrktx0d0 . P_472 ; * lo50jqtaqt = becrktx0d0 . P_473 ;
g2tnztcpzi [ 0 ] = becrktx0d0 . P_479 [ 0 ] ; g2tnztcpzi [ 1 ] = becrktx0d0 .
P_479 [ 1 ] ; g2tnztcpzi [ 2 ] = becrktx0d0 . P_479 [ 2 ] ; g2tnztcpzi [ 3 ]
= becrktx0d0 . P_479 [ 3 ] ; } void PassVeh7DOF ( pa50wxsaaa * const
hokadafud5 , const real_T fo3cvtmfih [ 4 ] , const real_T dfx1ca0pmi [ 4 ] ,
const real_T pf4xf35zus [ 3 ] , const real_T gxlrb30ei4 [ 4 ] , const real_T
bv2zp3o4ji [ 4 ] , const real_T czlc2qmxmx [ 4 ] , real_T * lfffcfi0vv ,
real_T * o4a5winsib , real_T * jhdgl4izoc , real_T * d45afs3uxn , real_T *
pe5smgk1bf , real_T * paxgty22h2 , real_T * ldkjetp0we , real_T * cr4vlmhzvc
, real_T * beq1qzuhx3 , real_T * e5f1z1hip1 , real_T * lo50jqtaqt , real_T *
mzzkjogxl0 , real_T * eobrear1ct , real_T pnofovjzba [ 4 ] , real_T
aehgk41bne [ 4 ] , real_T * jr1ehl1zxa , real_T eueb01ol1w [ 4 ] , real_T
g2tnztcpzi [ 4 ] , real_T ebhsrqq1o4 [ 4 ] , real_T eplypn1mx4 [ 4 ] ,
id4lpjcjia * localB , bpefjqedzq * localDW , hcqlainyez * localX ) { real_T
aqytxw532u [ 4 ] ; int32_T eufvenxnxf ; real_T Fx_fl ; real_T Fx_fr ; real_T
Fx_rl ; real_T Fx_rr ; real_T Fy_fl ; real_T Fy_fr ; real_T Fy_rl ; real_T
Fy_rr ; real_T xddot ; real_T yddot ; real_T rdot ; real_T z1_data ; real_T
pn4wwp53rv ; real_T odhytzs2sq ; real_T huqtoo4ku1 ; real_T ldzdoaktef ;
real_T hwqlfbxzai ; real_T nf2m5ypf5y [ 3 ] ; real_T cnydngolnu_p ; real_T
aprhm5pfo4_p ; real_T phadir2dvq_p ; real_T pg5pugmpbd_p ; real_T
n5gbyy525k_p ; real_T gdcxt1uwbj_p [ 6 ] ; real_T c2hj0tccof_p ; real_T
agmc0hkxpl_p [ 9 ] ; real_T nkgbsdliai_p [ 12 ] ; int32_T i ; real_T tmp [ 3
] ; int32_T loop_ub ; real_T nkuvcrp5qp_p ; real_T gkmrybnks1_p ; real_T
nkuvcrp5qp_idx_0 ; real_T nkuvcrp5qp_idx_1 ; real_T nkuvcrp5qp_idx_2 ; real_T
gexl04dl1m_idx_0 ; real_T gkmrybnks1_idx_1 ; real_T gkmrybnks1_idx_0 ; real_T
gexl04dl1m_idx_1 ; real_T gexl04dl1m_idx_2 ; real_T gexl04dl1m_idx_3 ; real_T
ncjyyiy4or_idx_0 ; real_T ncjyyiy4or_idx_1 ; real_T ncjyyiy4or_idx_2 ; real_T
Fz_idx_1 ; real_T u_idx_0_tmp ; real_T u_idx_0_tmp_p ; real_T u_idx_0_tmp_e ;
if ( rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0
) ) { localB -> kbexeitavt [ 0 ] = becrktx0d0 . P_176 ; localB -> kbexeitavt
[ 1 ] = becrktx0d0 . P_176 ; localB -> kbexeitavt [ 2 ] = becrktx0d0 . P_176
; localB -> kbexeitavt [ 3 ] = becrktx0d0 . P_176 ; localB -> h5wh4b5rct =
becrktx0d0 . P_150 ; localB -> d5szsmebdo = becrktx0d0 . P_178 ; localB ->
bz31s42s1u = becrktx0d0 . P_257 * localB -> d5szsmebdo ; localB -> opkh3muany
= becrktx0d0 . P_235 ; } gexl04dl1m_idx_0 = localX -> l2hk3fgmlh [ 0 ] ;
gexl04dl1m_idx_1 = localX -> l2hk3fgmlh [ 1 ] ; gexl04dl1m_idx_2 = localX ->
l2hk3fgmlh [ 2 ] ; gexl04dl1m_idx_3 = localX -> l2hk3fgmlh [ 3 ] ;
cnydngolnu_p = localX -> boq0sjomkz ; localB -> d33z0mbyhk = ( fo3cvtmfih [ 0
] - localX -> boq0sjomkz * localB -> h5wh4b5rct ) * becrktx0d0 . P_255 ;
ncjyyiy4or_idx_0 = becrktx0d0 . P_256 * dfx1ca0pmi [ 0 ] * localB ->
bz31s42s1u * localB -> d5szsmebdo * localB -> opkh3muany ; if (
ncjyyiy4or_idx_0 > becrktx0d0 . P_258 ) { ncjyyiy4or_idx_0 = becrktx0d0 .
P_258 ; } else { if ( ncjyyiy4or_idx_0 < becrktx0d0 . P_259 ) {
ncjyyiy4or_idx_0 = becrktx0d0 . P_259 ; } } localB -> cwma5eq5ke = becrktx0d0
. P_154 * becrktx0d0 . P_227 * ncjyyiy4or_idx_0 ; localB -> p2nljx3dbq =
becrktx0d0 . P_231 / becrktx0d0 . P_227 * localB -> cwma5eq5ke ; lf15r5ane4 (
1 , hokadafud5 , & localB -> d33z0mbyhk , & localB -> p2nljx3dbq , & localB
-> cwma5eq5ke , & localB -> ohauu0whxn , localB -> lf15r5ane43 , localDW ->
lf15r5ane43 , & becrktx0d0 . lf15r5ane43 , localX -> lf15r5ane43 , becrktx0d0
. P_239 , becrktx0d0 . P_172 , becrktx0d0 . P_21 , becrktx0d0 . P_163 ,
becrktx0d0 . P_150 ) ; if ( rtmIsMajorTimeStep ( hokadafud5 ) &&
rtmIsSampleHit ( hokadafud5 , 1 , 0 ) ) { localB -> imq4m422ep [ 0 ] =
localDW -> bzrcg4ekd2 ; localB -> imq4m422ep [ 1 ] = localDW -> hx3dqme3j0 ;
localB -> imq4m422ep [ 2 ] = localDW -> hvodgxjjby ; localB -> imq4m422ep [ 3
] = localDW -> h3znsdkf03 ; localB -> imq4m422ep [ 4 ] = localDW ->
od03lov34i ; localB -> imq4m422ep [ 5 ] = localDW -> js1pxba5c2 ; localB ->
imq4m422ep [ 6 ] = localDW -> kear3lpxvq ; localB -> imq4m422ep [ 7 ] =
localDW -> nhs2etlup5 ; localB -> imq4m422ep [ 8 ] = localDW -> cpkkyluphr ;
localB -> imq4m422ep [ 9 ] = localDW -> pd5cfi4ugv ; localB -> imq4m422ep [
10 ] = localDW -> mk0ozmamcr ; localB -> imq4m422ep [ 11 ] = localDW ->
l0dwzkeuuy ; localB -> ftaf4cxqll [ 0 ] = becrktx0d0 . P_272 [ 0 ] ; localB
-> ftaf4cxqll [ 1 ] = becrktx0d0 . P_272 [ 1 ] ; localB -> ftaf4cxqll [ 2 ] =
becrktx0d0 . P_272 [ 2 ] ; localB -> ftaf4cxqll [ 3 ] = becrktx0d0 . P_272 [
3 ] ; localB -> gaoeewqk5x = becrktx0d0 . P_273 ; } nkgbsdliai_p [ 0 ] =
localB -> ftaf4cxqll [ 0 ] ; nkgbsdliai_p [ 1 ] = localB -> kbexeitavt [ 0 ]
; nkgbsdliai_p [ 2 ] = gxlrb30ei4 [ 0 ] ; nkgbsdliai_p [ 3 ] = localB ->
ftaf4cxqll [ 1 ] ; nkgbsdliai_p [ 4 ] = localB -> kbexeitavt [ 1 ] ;
nkgbsdliai_p [ 5 ] = gxlrb30ei4 [ 1 ] + localB -> gaoeewqk5x ; nkgbsdliai_p [
6 ] = localB -> ftaf4cxqll [ 2 ] ; nkgbsdliai_p [ 7 ] = localB -> kbexeitavt
[ 2 ] ; nkgbsdliai_p [ 8 ] = gxlrb30ei4 [ 2 ] ; nkgbsdliai_p [ 9 ] = localB
-> ftaf4cxqll [ 3 ] ; nkgbsdliai_p [ 10 ] = localB -> kbexeitavt [ 3 ] ;
nkgbsdliai_p [ 11 ] = gxlrb30ei4 [ 3 ] + localB -> gaoeewqk5x ; for (
eufvenxnxf = 0 ; eufvenxnxf < 4 ; eufvenxnxf ++ ) { localB -> nqfgq4kh2x [
eufvenxnxf ] . bjb2dhghpi [ 2 ] = nkgbsdliai_p [ 3 * eufvenxnxf ] ; localB ->
nqfgq4kh2x [ eufvenxnxf ] . bjb2dhghpi [ 1 ] = nkgbsdliai_p [ 3 * eufvenxnxf
+ 1 ] ; localB -> nqfgq4kh2x [ eufvenxnxf ] . bjb2dhghpi [ 0 ] = nkgbsdliai_p
[ 3 * eufvenxnxf + 2 ] ; ncjyyiy4or_idx_0 = localB -> imq4m422ep [ 3 *
eufvenxnxf ] ; ncjyyiy4or_idx_1 = localB -> imq4m422ep [ 3 * eufvenxnxf + 1 ]
; ncjyyiy4or_idx_2 = localB -> imq4m422ep [ 3 * eufvenxnxf + 2 ] ;
muDoubleScalarSinCos ( localB -> nqfgq4kh2x [ eufvenxnxf ] . bjb2dhghpi [ 0 ]
, & pg5pugmpbd_p , & n5gbyy525k_p ) ; muDoubleScalarSinCos ( localB ->
nqfgq4kh2x [ eufvenxnxf ] . bjb2dhghpi [ 1 ] , & pn4wwp53rv , & aprhm5pfo4_p
) ; muDoubleScalarSinCos ( localB -> nqfgq4kh2x [ eufvenxnxf ] . bjb2dhghpi [
2 ] , & c2hj0tccof_p , & nkuvcrp5qp_idx_0 ) ; localB -> nqfgq4kh2x [
eufvenxnxf ] . eoildmcuvz [ 0 ] = aprhm5pfo4_p * n5gbyy525k_p ;
nkuvcrp5qp_idx_1 = c2hj0tccof_p * pn4wwp53rv ; localB -> nqfgq4kh2x [
eufvenxnxf ] . eoildmcuvz [ 1 ] = nkuvcrp5qp_idx_1 * n5gbyy525k_p -
nkuvcrp5qp_idx_0 * pg5pugmpbd_p ; phadir2dvq_p = nkuvcrp5qp_idx_0 *
pn4wwp53rv ; localB -> nqfgq4kh2x [ eufvenxnxf ] . eoildmcuvz [ 2 ] =
phadir2dvq_p * n5gbyy525k_p + c2hj0tccof_p * pg5pugmpbd_p ; localB ->
nqfgq4kh2x [ eufvenxnxf ] . eoildmcuvz [ 3 ] = aprhm5pfo4_p * pg5pugmpbd_p ;
localB -> nqfgq4kh2x [ eufvenxnxf ] . eoildmcuvz [ 4 ] = nkuvcrp5qp_idx_1 *
pg5pugmpbd_p + nkuvcrp5qp_idx_0 * n5gbyy525k_p ; localB -> nqfgq4kh2x [
eufvenxnxf ] . eoildmcuvz [ 5 ] = phadir2dvq_p * pg5pugmpbd_p - c2hj0tccof_p
* n5gbyy525k_p ; localB -> nqfgq4kh2x [ eufvenxnxf ] . eoildmcuvz [ 6 ] = -
pn4wwp53rv ; localB -> nqfgq4kh2x [ eufvenxnxf ] . eoildmcuvz [ 7 ] =
c2hj0tccof_p * aprhm5pfo4_p ; localB -> nqfgq4kh2x [ eufvenxnxf ] .
eoildmcuvz [ 8 ] = nkuvcrp5qp_idx_0 * aprhm5pfo4_p ; for ( i = 0 ; i < 3 ; i
++ ) { tmp [ i ] = localB -> nqfgq4kh2x [ eufvenxnxf ] . eoildmcuvz [ i + 6 ]
* ncjyyiy4or_idx_2 + ( localB -> nqfgq4kh2x [ eufvenxnxf ] . eoildmcuvz [ i +
3 ] * ncjyyiy4or_idx_1 + localB -> nqfgq4kh2x [ eufvenxnxf ] . eoildmcuvz [ i
] * ncjyyiy4or_idx_0 ) ; } localB -> d0bzowv2xg [ eufvenxnxf ] = tmp [ 0 ] ;
} if ( rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 ,
0 ) ) { localB -> cfkwlnof2v = becrktx0d0 . P_274 ; localB -> cnco5gb5p4 =
becrktx0d0 . P_275 ; localB -> d3cr0a5inc = becrktx0d0 . P_276 ; localB ->
dii1opjuxw = becrktx0d0 . P_277 ; localB -> kctb5ztf1e = becrktx0d0 . P_278 ;
localB -> ke422y3bvs = becrktx0d0 . P_183 ; localB -> fuuyvpusrs = becrktx0d0
. P_26 ; localB -> hpxyou1fxl = becrktx0d0 . P_8 ; localB -> joma1bywx4 =
becrktx0d0 . P_35 ; localB -> ns140f1t3p = becrktx0d0 . P_279 ; localB ->
c3s1hqfkfr = becrktx0d0 . P_280 ; localB -> iufwwlr0ge = becrktx0d0 . P_40 ;
localB -> jsdlv222qc = becrktx0d0 . P_44 ; localB -> p24b3nl2wp = becrktx0d0
. P_48 ; localB -> olixj4xtkl = becrktx0d0 . P_52 ; localB -> bbw5zyrrqz =
becrktx0d0 . P_56 ; localB -> ogp2hwtunx = becrktx0d0 . P_60 ; localB ->
f01m4oosvg = becrktx0d0 . P_64 ; localB -> gx2tzcmrwe = becrktx0d0 . P_68 ;
localB -> obsb1m4u4l = becrktx0d0 . P_80 ; localB -> k11qglhlxp = becrktx0d0
. P_84 ; localB -> ismgtq3zck = becrktx0d0 . P_88 ; localB -> mkkd4eqabm =
becrktx0d0 . P_72 ; localB -> bf2kwgrinx = becrktx0d0 . P_76 ; localB ->
g2jaz2ry10 = becrktx0d0 . P_108 ; localB -> gbpcpgmhwi = becrktx0d0 . P_112 ;
localB -> jvgs2uru4k = becrktx0d0 . P_92 ; localB -> mi3utydr02 = becrktx0d0
. P_96 ; localB -> f3w3p2nxm4 = becrktx0d0 . P_100 ; localB -> fbyp0wzxjv =
becrktx0d0 . P_104 ; localB -> lvetekphxz = becrktx0d0 . P_200 ; localB ->
fg4jh2yypn = becrktx0d0 . P_220 ; localB -> julgzulrmc = becrktx0d0 . P_208 ;
localB -> cvwzw1hfzy = becrktx0d0 . P_192 ; localB -> bjklpb2rya = becrktx0d0
. P_196 ; localB -> kfd3ejtb1f = becrktx0d0 . P_204 ; localB -> ons10a2rwj =
becrktx0d0 . P_216 ; localB -> oexu5qniuy [ 0 ] = becrktx0d0 . P_281 [ 0 ] ;
localB -> mstqxpzqfg [ 0 ] = becrktx0d0 . P_282 [ 0 ] ; localB -> oexu5qniuy
[ 1 ] = becrktx0d0 . P_281 [ 1 ] ; localB -> mstqxpzqfg [ 1 ] = becrktx0d0 .
P_282 [ 1 ] ; localB -> oexu5qniuy [ 2 ] = becrktx0d0 . P_281 [ 2 ] ; localB
-> mstqxpzqfg [ 2 ] = becrktx0d0 . P_282 [ 2 ] ; localB -> hz1rwguwag =
becrktx0d0 . P_8 ; localB -> jzgij4yhlc = becrktx0d0 . P_35 ; localB ->
ns1yn0d111 = becrktx0d0 . P_117 ; localB -> mtsri5oeit = becrktx0d0 . P_121 ;
localB -> lpc02n3ntq = becrktx0d0 . P_125 ; localB -> esav0j3his = becrktx0d0
. P_129 ; localB -> lnbbakkwsv = becrktx0d0 . P_133 ; localB -> phlogjscto =
becrktx0d0 . P_137 ; localB -> h0u3dlxfhh = becrktx0d0 . P_141 ; localB ->
i3ympmozxc = becrktx0d0 . P_145 ; localB -> kwyv52a2iq = becrktx0d0 . P_183 ;
localB -> mrtivmxzok = becrktx0d0 . P_212 ; localB -> oxh3shkcwr = becrktx0d0
. P_159 ; localB -> dqqylbxuq5 = becrktx0d0 . P_284 ; localB -> pwaomw2yrj =
becrktx0d0 . P_285 ; localB -> ddkghz2dmk [ 0 ] = becrktx0d0 . P_286 [ 0 ] ;
localB -> f3z5ekoxpe [ 0 ] = becrktx0d0 . P_287 [ 0 ] ; localB -> ddkghz2dmk
[ 1 ] = becrktx0d0 . P_286 [ 1 ] ; localB -> f3z5ekoxpe [ 1 ] = becrktx0d0 .
P_287 [ 1 ] ; localB -> ddkghz2dmk [ 2 ] = becrktx0d0 . P_286 [ 2 ] ; localB
-> f3z5ekoxpe [ 2 ] = becrktx0d0 . P_287 [ 2 ] ; memcpy ( & localB ->
kagvflkv30 [ 0 ] , & becrktx0d0 . P_283 [ 0 ] , 9U * sizeof ( real_T ) ) ;
memcpy ( & localB -> de3gcclrpf [ 0 ] , & becrktx0d0 . P_288 [ 0 ] , 9U *
sizeof ( real_T ) ) ; localB -> atndxdnoha = becrktx0d0 . P_289 ; localB ->
o2cghmzchb = becrktx0d0 . P_290 ; localB -> bgytv1ipnn = becrktx0d0 . P_291 ;
localB -> ipcdka0rdk = becrktx0d0 . P_292 ; localB -> c3lbwtdvd0 = becrktx0d0
. P_293 ; localB -> npitkxcqq2 = becrktx0d0 . P_294 ; localB -> gysfmmd0g3 =
becrktx0d0 . P_295 ; localB -> b4q4rezl5q = becrktx0d0 . P_296 ; localB ->
glpg1q0zrp = becrktx0d0 . P_297 ; localB -> fsm4hj0yo3 = becrktx0d0 . P_298 ;
localB -> dilqq2ziew = becrktx0d0 . P_299 ; localB -> pkxrfmf4km = becrktx0d0
. P_300 ; localB -> g14qb1cf4b = becrktx0d0 . P_301 ; localB -> cumr04c4lu =
becrktx0d0 . P_302 ; localB -> cvybf3pb0o = becrktx0d0 . P_303 ; localB ->
bmhzwlmjce = becrktx0d0 . P_304 ; localB -> a0insx4qj4 = becrktx0d0 . P_305 ;
localB -> imn5tyasnw = becrktx0d0 . P_306 ; localB -> pcfnviw5ae = becrktx0d0
. P_307 ; localB -> o4fejfnl4y = becrktx0d0 . P_308 ; localB -> o5r2t5nyti =
becrktx0d0 . P_309 ; localB -> gj1iqu4vq3 = becrktx0d0 . P_310 ; localB ->
gubs2kpup1 = becrktx0d0 . P_311 ; localB -> hb3cv2fi41 = becrktx0d0 . P_312 ;
localB -> mkkd545rnn = becrktx0d0 . P_313 ; localB -> apmz02jse2 = becrktx0d0
. P_314 ; } ptwb5m53nr ( localB -> h5wh4b5rct , gexl04dl1m_idx_0 , localB ->
ohauu0whxn , localB -> d0bzowv2xg [ 0 ] , localB -> cfkwlnof2v , localB ->
cnco5gb5p4 , localB -> d3cr0a5inc , localB -> dii1opjuxw , localB ->
kctb5ztf1e , localB -> ke422y3bvs , localB -> fuuyvpusrs , localB ->
hpxyou1fxl , & bv2zp3o4ji [ 0 ] , localB -> joma1bywx4 , localB -> ns140f1t3p
, localB -> c3s1hqfkfr , localB -> iufwwlr0ge , localB -> jsdlv222qc , localB
-> p24b3nl2wp , localB -> olixj4xtkl , localB -> bbw5zyrrqz , localB ->
ogp2hwtunx , localB -> f01m4oosvg , localB -> gx2tzcmrwe , localB ->
obsb1m4u4l , localB -> k11qglhlxp , localB -> ismgtq3zck , localB ->
mkkd4eqabm , localB -> bf2kwgrinx , localB -> g2jaz2ry10 , localB ->
gbpcpgmhwi , localB -> jvgs2uru4k , localB -> mi3utydr02 , localB ->
f3w3p2nxm4 , localB -> fbyp0wzxjv , localB -> lvetekphxz , localB ->
fg4jh2yypn , & czlc2qmxmx [ 0 ] , localB -> julgzulrmc , localB -> cvwzw1hfzy
, localB -> bjklpb2rya , localB -> kfd3ejtb1f , localB -> ons10a2rwj , localB
-> oexu5qniuy , localB -> mstqxpzqfg , localB -> kagvflkv30 , localB ->
hz1rwguwag , localB -> jzgij4yhlc , localB -> ns1yn0d111 , localB ->
mtsri5oeit , localB -> lpc02n3ntq , localB -> esav0j3his , localB ->
lnbbakkwsv , localB -> phlogjscto , localB -> h0u3dlxfhh , localB ->
i3ympmozxc , localB -> kwyv52a2iq , localB -> mrtivmxzok , localB ->
oxh3shkcwr , localB -> dqqylbxuq5 , localB -> pwaomw2yrj , localB ->
ddkghz2dmk , localB -> f3z5ekoxpe , localB -> de3gcclrpf , 0.0 , localB ->
atndxdnoha , localB -> o2cghmzchb , localB -> bgytv1ipnn , localB ->
ipcdka0rdk , localB -> c3lbwtdvd0 , localB -> npitkxcqq2 , localB ->
gysfmmd0g3 , localB -> b4q4rezl5q , localB -> glpg1q0zrp , localB ->
fsm4hj0yo3 , localB -> dilqq2ziew , localB -> pkxrfmf4km , localB ->
g14qb1cf4b , localB -> cumr04c4lu , localB -> cvybf3pb0o , localB ->
bmhzwlmjce , localB -> a0insx4qj4 , localB -> imn5tyasnw , localB ->
pcfnviw5ae , localB -> o4fejfnl4y , localB -> o5r2t5nyti , localB ->
gj1iqu4vq3 , localB -> gubs2kpup1 , localB -> hb3cv2fi41 , localB ->
mkkd545rnn , localB -> apmz02jse2 , & pnofovjzba [ 0 ] , & aqytxw532u [ 0 ] ,
& localB -> f1abnn2ast , becrktx0d0 . P_12 , becrktx0d0 . P_16 , becrktx0d0 .
P_163 , becrktx0d0 . P_188 ) ; nkuvcrp5qp_idx_0 = localB -> f1abnn2ast .
dbw42rwkve ; if ( rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit (
hokadafud5 , 1 , 0 ) ) { localB -> hesaewh1nb = becrktx0d0 . P_151 ; localB
-> kv4swuqrzp = becrktx0d0 . P_179 ; localB -> k5vua1hg0r = becrktx0d0 .
P_318 * localB -> kv4swuqrzp ; localB -> n53jpn1qce = becrktx0d0 . P_236 ; }
aprhm5pfo4_p = localX -> g4fxozrdb2 ; localB -> k30er0vypb = ( fo3cvtmfih [ 1
] - localX -> g4fxozrdb2 * localB -> hesaewh1nb ) * becrktx0d0 . P_316 ;
ncjyyiy4or_idx_0 = becrktx0d0 . P_317 * dfx1ca0pmi [ 1 ] * localB ->
k5vua1hg0r * localB -> kv4swuqrzp * localB -> n53jpn1qce ; if (
ncjyyiy4or_idx_0 > becrktx0d0 . P_319 ) { ncjyyiy4or_idx_0 = becrktx0d0 .
P_319 ; } else { if ( ncjyyiy4or_idx_0 < becrktx0d0 . P_320 ) {
ncjyyiy4or_idx_0 = becrktx0d0 . P_320 ; } } localB -> fj3higzat4 = becrktx0d0
. P_155 * becrktx0d0 . P_228 * ncjyyiy4or_idx_0 ; localB -> gsndiu20vl =
becrktx0d0 . P_232 / becrktx0d0 . P_228 * localB -> fj3higzat4 ; lf15r5ane4 (
1 , hokadafud5 , & localB -> k30er0vypb , & localB -> gsndiu20vl , & localB
-> fj3higzat4 , & localB -> nabgbcf5q2 , localB -> g2eyqylo5m , localDW ->
g2eyqylo5m , & becrktx0d0 . g2eyqylo5m , localX -> g2eyqylo5m , becrktx0d0 .
P_240 , becrktx0d0 . P_173 , becrktx0d0 . P_22 , becrktx0d0 . P_164 ,
becrktx0d0 . P_151 ) ; if ( rtmIsMajorTimeStep ( hokadafud5 ) &&
rtmIsSampleHit ( hokadafud5 , 1 , 0 ) ) { localB -> ba0ld5sik1 = becrktx0d0 .
P_321 ; localB -> cub55shpyy = becrktx0d0 . P_322 ; localB -> admeqoujcv =
becrktx0d0 . P_323 ; localB -> hfhahdak4j = becrktx0d0 . P_324 ; localB ->
jave5yanub = becrktx0d0 . P_325 ; localB -> hydfzxc1qw = becrktx0d0 . P_184 ;
localB -> gjjpikelm0 = becrktx0d0 . P_27 ; localB -> ifrllhbun4 = becrktx0d0
. P_9 ; localB -> k3bhiqv4ab = becrktx0d0 . P_36 ; localB -> jmkkmaikcr =
becrktx0d0 . P_326 ; localB -> hj3pfrn0ic = becrktx0d0 . P_327 ; localB ->
jhnjiazapj = becrktx0d0 . P_41 ; localB -> dzbahowvuv = becrktx0d0 . P_45 ;
localB -> gzqzv2jn3n = becrktx0d0 . P_49 ; localB -> frpicsct0d = becrktx0d0
. P_53 ; localB -> obk1sfjkrp = becrktx0d0 . P_57 ; localB -> cf3brbnk05 =
becrktx0d0 . P_61 ; localB -> g5d12pto5p = becrktx0d0 . P_65 ; localB ->
nm5yy52fdt = becrktx0d0 . P_69 ; localB -> fockx2e1oo = becrktx0d0 . P_81 ;
localB -> jiseemzgoj = becrktx0d0 . P_85 ; localB -> gr04nqocvw = becrktx0d0
. P_89 ; localB -> ddj1fithyg = becrktx0d0 . P_73 ; localB -> j3vo1m3qkh =
becrktx0d0 . P_77 ; localB -> cqusxcow01 = becrktx0d0 . P_109 ; localB ->
kdvyxjauqy = becrktx0d0 . P_113 ; localB -> ogkxlqn0ly = becrktx0d0 . P_93 ;
localB -> mocljcsb0l = becrktx0d0 . P_97 ; localB -> jwi0ilfhab = becrktx0d0
. P_101 ; localB -> dtbhvrzq1j = becrktx0d0 . P_105 ; localB -> ahcnv4kv2y =
becrktx0d0 . P_201 ; localB -> gpj11f5vfk = becrktx0d0 . P_221 ; localB ->
hjtogq12op = becrktx0d0 . P_209 ; localB -> kt3crarmz2 = becrktx0d0 . P_193 ;
localB -> iss5uqc4oh = becrktx0d0 . P_197 ; localB -> npf0ptc4p1 = becrktx0d0
. P_205 ; localB -> i5nks3ee35 = becrktx0d0 . P_217 ; localB -> olljvthm5q [
0 ] = becrktx0d0 . P_328 [ 0 ] ; localB -> itsa2d3ctl [ 0 ] = becrktx0d0 .
P_329 [ 0 ] ; localB -> olljvthm5q [ 1 ] = becrktx0d0 . P_328 [ 1 ] ; localB
-> itsa2d3ctl [ 1 ] = becrktx0d0 . P_329 [ 1 ] ; localB -> olljvthm5q [ 2 ] =
becrktx0d0 . P_328 [ 2 ] ; localB -> itsa2d3ctl [ 2 ] = becrktx0d0 . P_329 [
2 ] ; localB -> bmc0r01xwr = becrktx0d0 . P_9 ; localB -> cxzcjkmj54 =
becrktx0d0 . P_36 ; localB -> am3a3q2vdm = becrktx0d0 . P_118 ; localB ->
ncyqy0yu1h = becrktx0d0 . P_122 ; localB -> fbx3ttcelh = becrktx0d0 . P_126 ;
localB -> ph2yn2vowk = becrktx0d0 . P_130 ; localB -> f5yw0whn1p = becrktx0d0
. P_134 ; localB -> mpfonz5yz3 = becrktx0d0 . P_138 ; localB -> nrag1moweu =
becrktx0d0 . P_142 ; localB -> hzazvjwjyl = becrktx0d0 . P_146 ; localB ->
ihbutzjchr = becrktx0d0 . P_184 ; localB -> ogpxhmlkj2 = becrktx0d0 . P_213 ;
localB -> aols2kz0cw = becrktx0d0 . P_160 ; localB -> caxemhiem2 = becrktx0d0
. P_331 ; localB -> h5c0akz3b0 = becrktx0d0 . P_332 ; localB -> fh5o3hjnn4 [
0 ] = becrktx0d0 . P_333 [ 0 ] ; localB -> csi1vdg0u4 [ 0 ] = becrktx0d0 .
P_334 [ 0 ] ; localB -> fh5o3hjnn4 [ 1 ] = becrktx0d0 . P_333 [ 1 ] ; localB
-> csi1vdg0u4 [ 1 ] = becrktx0d0 . P_334 [ 1 ] ; localB -> fh5o3hjnn4 [ 2 ] =
becrktx0d0 . P_333 [ 2 ] ; localB -> csi1vdg0u4 [ 2 ] = becrktx0d0 . P_334 [
2 ] ; memcpy ( & localB -> ogwmdf0uzr [ 0 ] , & becrktx0d0 . P_330 [ 0 ] , 9U
* sizeof ( real_T ) ) ; memcpy ( & localB -> okar031ivj [ 0 ] , & becrktx0d0
. P_335 [ 0 ] , 9U * sizeof ( real_T ) ) ; localB -> km5fhe0gnv = becrktx0d0
. P_336 ; localB -> b3ysg2oisu = becrktx0d0 . P_337 ; localB -> mbyyukadlc =
becrktx0d0 . P_338 ; localB -> btnqxxqvbk = becrktx0d0 . P_339 ; localB ->
e2vyxvqumc = becrktx0d0 . P_340 ; localB -> biv4pqjbsb = becrktx0d0 . P_341 ;
localB -> pqxcjr4w14 = becrktx0d0 . P_342 ; localB -> auyhxb2a4z = becrktx0d0
. P_343 ; localB -> eucevkyrvu = becrktx0d0 . P_344 ; localB -> mm2332ncmt =
becrktx0d0 . P_345 ; localB -> cqk3cfqgxq = becrktx0d0 . P_346 ; localB ->
h3uwlqjqg4 = becrktx0d0 . P_347 ; localB -> fiowcjrj00 = becrktx0d0 . P_348 ;
localB -> bnbgtownki = becrktx0d0 . P_349 ; localB -> jqa5jx145u = becrktx0d0
. P_350 ; localB -> l4lqosbi0l = becrktx0d0 . P_351 ; localB -> htzr5zrjqm =
becrktx0d0 . P_352 ; localB -> kxof5m5sk5 = becrktx0d0 . P_353 ; localB ->
lhdwcfxppe = becrktx0d0 . P_354 ; localB -> iczvf5zaaa = becrktx0d0 . P_355 ;
localB -> hfbgp15dhh = becrktx0d0 . P_356 ; localB -> ppdns1mxw2 = becrktx0d0
. P_357 ; localB -> cbzncau3rp = becrktx0d0 . P_358 ; localB -> gjifpqqgt0 =
becrktx0d0 . P_359 ; localB -> ck21m4ewez = becrktx0d0 . P_360 ; localB ->
dfj3e5gry1 = becrktx0d0 . P_361 ; } ptwb5m53nr ( localB -> hesaewh1nb ,
gexl04dl1m_idx_1 , localB -> nabgbcf5q2 , localB -> d0bzowv2xg [ 1 ] , localB
-> ba0ld5sik1 , localB -> cub55shpyy , localB -> admeqoujcv , localB ->
hfhahdak4j , localB -> jave5yanub , localB -> hydfzxc1qw , localB ->
gjjpikelm0 , localB -> ifrllhbun4 , & bv2zp3o4ji [ 1 ] , localB -> k3bhiqv4ab
, localB -> jmkkmaikcr , localB -> hj3pfrn0ic , localB -> jhnjiazapj , localB
-> dzbahowvuv , localB -> gzqzv2jn3n , localB -> frpicsct0d , localB ->
obk1sfjkrp , localB -> cf3brbnk05 , localB -> g5d12pto5p , localB ->
nm5yy52fdt , localB -> fockx2e1oo , localB -> jiseemzgoj , localB ->
gr04nqocvw , localB -> ddj1fithyg , localB -> j3vo1m3qkh , localB ->
cqusxcow01 , localB -> kdvyxjauqy , localB -> ogkxlqn0ly , localB ->
mocljcsb0l , localB -> jwi0ilfhab , localB -> dtbhvrzq1j , localB ->
ahcnv4kv2y , localB -> gpj11f5vfk , & czlc2qmxmx [ 1 ] , localB -> hjtogq12op
, localB -> kt3crarmz2 , localB -> iss5uqc4oh , localB -> npf0ptc4p1 , localB
-> i5nks3ee35 , localB -> olljvthm5q , localB -> itsa2d3ctl , localB ->
ogwmdf0uzr , localB -> bmc0r01xwr , localB -> cxzcjkmj54 , localB ->
am3a3q2vdm , localB -> ncyqy0yu1h , localB -> fbx3ttcelh , localB ->
ph2yn2vowk , localB -> f5yw0whn1p , localB -> mpfonz5yz3 , localB ->
nrag1moweu , localB -> hzazvjwjyl , localB -> ihbutzjchr , localB ->
ogpxhmlkj2 , localB -> aols2kz0cw , localB -> caxemhiem2 , localB ->
h5c0akz3b0 , localB -> fh5o3hjnn4 , localB -> csi1vdg0u4 , localB ->
okar031ivj , 0.0 , localB -> km5fhe0gnv , localB -> b3ysg2oisu , localB ->
mbyyukadlc , localB -> btnqxxqvbk , localB -> e2vyxvqumc , localB ->
biv4pqjbsb , localB -> pqxcjr4w14 , localB -> auyhxb2a4z , localB ->
eucevkyrvu , localB -> mm2332ncmt , localB -> cqk3cfqgxq , localB ->
h3uwlqjqg4 , localB -> fiowcjrj00 , localB -> bnbgtownki , localB ->
jqa5jx145u , localB -> l4lqosbi0l , localB -> htzr5zrjqm , localB ->
kxof5m5sk5 , localB -> lhdwcfxppe , localB -> iczvf5zaaa , localB ->
hfbgp15dhh , localB -> ppdns1mxw2 , localB -> cbzncau3rp , localB ->
gjifpqqgt0 , localB -> ck21m4ewez , localB -> dfj3e5gry1 , & pnofovjzba [ 1 ]
, & aqytxw532u [ 1 ] , & localB -> dycowragfc , becrktx0d0 . P_13 ,
becrktx0d0 . P_17 , becrktx0d0 . P_164 , becrktx0d0 . P_189 ) ;
nkuvcrp5qp_idx_1 = localB -> dycowragfc . dbw42rwkve ; if (
rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) )
{ localB -> g1pa1tegyz = becrktx0d0 . P_152 ; localB -> bfpipbo4us =
becrktx0d0 . P_180 ; localB -> j2swsz0urn = becrktx0d0 . P_365 * localB ->
bfpipbo4us ; localB -> gcyfeyhaz1 = becrktx0d0 . P_237 ; } phadir2dvq_p =
localX -> i12d3wngfk ; localB -> mfblx2srrc = ( fo3cvtmfih [ 2 ] - localX ->
i12d3wngfk * localB -> g1pa1tegyz ) * becrktx0d0 . P_363 ; ncjyyiy4or_idx_0 =
becrktx0d0 . P_364 * dfx1ca0pmi [ 2 ] * localB -> j2swsz0urn * localB ->
bfpipbo4us * localB -> gcyfeyhaz1 ; if ( ncjyyiy4or_idx_0 > becrktx0d0 .
P_366 ) { ncjyyiy4or_idx_0 = becrktx0d0 . P_366 ; } else { if (
ncjyyiy4or_idx_0 < becrktx0d0 . P_367 ) { ncjyyiy4or_idx_0 = becrktx0d0 .
P_367 ; } } localB -> hhhc50br05 = becrktx0d0 . P_156 * becrktx0d0 . P_229 *
ncjyyiy4or_idx_0 ; localB -> dxpeamn3hy = becrktx0d0 . P_233 / becrktx0d0 .
P_229 * localB -> hhhc50br05 ; lf15r5ane4 ( 1 , hokadafud5 , & localB ->
mfblx2srrc , & localB -> dxpeamn3hy , & localB -> hhhc50br05 , & localB ->
da1axvglkx , localB -> d22xfw4kpx , localDW -> d22xfw4kpx , & becrktx0d0 .
d22xfw4kpx , localX -> d22xfw4kpx , becrktx0d0 . P_241 , becrktx0d0 . P_174 ,
becrktx0d0 . P_23 , becrktx0d0 . P_165 , becrktx0d0 . P_152 ) ; if (
rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) )
{ localB -> foidnpo0oq = becrktx0d0 . P_368 ; localB -> ayhcndhlu0 =
becrktx0d0 . P_369 ; localB -> iy5hfoisnh = becrktx0d0 . P_370 ; localB ->
hvqnttiddu = becrktx0d0 . P_371 ; localB -> fhd4tw3lqf = becrktx0d0 . P_372 ;
localB -> mh1rri0s1r = becrktx0d0 . P_185 ; localB -> p50mqehgj2 = becrktx0d0
. P_28 ; localB -> n2dth3maot = becrktx0d0 . P_10 ; localB -> p2zqzg0hdx =
becrktx0d0 . P_37 ; localB -> ghocmfp3xl = becrktx0d0 . P_373 ; localB ->
b0iwqa1a5h = becrktx0d0 . P_374 ; localB -> nrv0gankso = becrktx0d0 . P_42 ;
localB -> konnlipgzj = becrktx0d0 . P_46 ; localB -> pox1w1uosi = becrktx0d0
. P_50 ; localB -> ch20ki1ox4 = becrktx0d0 . P_54 ; localB -> hzyod14crr =
becrktx0d0 . P_58 ; localB -> ofl5o4i551 = becrktx0d0 . P_62 ; localB ->
ncdmeuoier = becrktx0d0 . P_66 ; localB -> dfyhgivb3s = becrktx0d0 . P_70 ;
localB -> nazhgfr5nl = becrktx0d0 . P_82 ; localB -> lc2piclprf = becrktx0d0
. P_86 ; localB -> ltgrpu3l4q = becrktx0d0 . P_90 ; localB -> p2b1rccb34 =
becrktx0d0 . P_74 ; localB -> lwb33yxaj2 = becrktx0d0 . P_78 ; localB ->
h4ppx2rq3w = becrktx0d0 . P_110 ; localB -> dshvak0l0t = becrktx0d0 . P_114 ;
localB -> gu4axrtwrg = becrktx0d0 . P_94 ; localB -> moxt0psems = becrktx0d0
. P_98 ; localB -> mbwmesteyr = becrktx0d0 . P_102 ; localB -> p012a231oc =
becrktx0d0 . P_106 ; localB -> mwy3qoplw4 = becrktx0d0 . P_202 ; localB ->
itz0cpq0ou = becrktx0d0 . P_222 ; localB -> lerala1r0i = becrktx0d0 . P_210 ;
localB -> jb3ei4i5jp = becrktx0d0 . P_194 ; localB -> cxto45s3l2 = becrktx0d0
. P_198 ; localB -> b3pltw4d0f = becrktx0d0 . P_206 ; localB -> ajq4ib3z4q =
becrktx0d0 . P_218 ; localB -> dkzgnds2he [ 0 ] = becrktx0d0 . P_375 [ 0 ] ;
localB -> igmssod5aw [ 0 ] = becrktx0d0 . P_376 [ 0 ] ; localB -> dkzgnds2he
[ 1 ] = becrktx0d0 . P_375 [ 1 ] ; localB -> igmssod5aw [ 1 ] = becrktx0d0 .
P_376 [ 1 ] ; localB -> dkzgnds2he [ 2 ] = becrktx0d0 . P_375 [ 2 ] ; localB
-> igmssod5aw [ 2 ] = becrktx0d0 . P_376 [ 2 ] ; localB -> nfugqxwdby =
becrktx0d0 . P_10 ; localB -> ck02uwdqxw = becrktx0d0 . P_37 ; localB ->
f2neh4sudt = becrktx0d0 . P_119 ; localB -> ngdktndyrj = becrktx0d0 . P_123 ;
localB -> js1tlkukyv = becrktx0d0 . P_127 ; localB -> gt0zjjnrzw = becrktx0d0
. P_131 ; localB -> afg2asvxic = becrktx0d0 . P_135 ; localB -> pwzktwzfnp =
becrktx0d0 . P_139 ; localB -> nyijyqxduk = becrktx0d0 . P_143 ; localB ->
nvdwbnmtpb = becrktx0d0 . P_147 ; localB -> c2oxnm12uw = becrktx0d0 . P_185 ;
localB -> n5prl5hqtx = becrktx0d0 . P_214 ; localB -> mjh54inqdn = becrktx0d0
. P_161 ; localB -> aqlfp0saei = becrktx0d0 . P_378 ; localB -> caw3ndnhbd =
becrktx0d0 . P_379 ; localB -> cd2fs5ehmc [ 0 ] = becrktx0d0 . P_380 [ 0 ] ;
localB -> bkuftmabbw [ 0 ] = becrktx0d0 . P_381 [ 0 ] ; localB -> cd2fs5ehmc
[ 1 ] = becrktx0d0 . P_380 [ 1 ] ; localB -> bkuftmabbw [ 1 ] = becrktx0d0 .
P_381 [ 1 ] ; localB -> cd2fs5ehmc [ 2 ] = becrktx0d0 . P_380 [ 2 ] ; localB
-> bkuftmabbw [ 2 ] = becrktx0d0 . P_381 [ 2 ] ; memcpy ( & localB ->
kf1zpwhh4b [ 0 ] , & becrktx0d0 . P_377 [ 0 ] , 9U * sizeof ( real_T ) ) ;
memcpy ( & localB -> krjpez4j44 [ 0 ] , & becrktx0d0 . P_382 [ 0 ] , 9U *
sizeof ( real_T ) ) ; localB -> kauangfpz2 = becrktx0d0 . P_383 ; localB ->
ic0iaiqfjv = becrktx0d0 . P_384 ; localB -> nauzowwkur = becrktx0d0 . P_385 ;
localB -> ktxbr2qn24 = becrktx0d0 . P_386 ; localB -> imih2mhusj = becrktx0d0
. P_387 ; localB -> bb1nk0llvq = becrktx0d0 . P_388 ; localB -> oi1h5qg1nu =
becrktx0d0 . P_389 ; localB -> lhkjmqfwms = becrktx0d0 . P_390 ; localB ->
moonpo1qpg = becrktx0d0 . P_391 ; localB -> cuu54cqr5x = becrktx0d0 . P_392 ;
localB -> nkimsrvhv0 = becrktx0d0 . P_393 ; localB -> ab5d4ujsnv = becrktx0d0
. P_394 ; localB -> ouuwsyssnc = becrktx0d0 . P_395 ; localB -> g1ni03prm0 =
becrktx0d0 . P_396 ; localB -> mxyh3y0fqs = becrktx0d0 . P_397 ; localB ->
lczmfdcnj1 = becrktx0d0 . P_398 ; localB -> mygyc4cuhm = becrktx0d0 . P_399 ;
localB -> dp1b4412au = becrktx0d0 . P_400 ; localB -> kupsc2ix3y = becrktx0d0
. P_401 ; localB -> gvtptbywt1 = becrktx0d0 . P_402 ; localB -> efwt4j5usk =
becrktx0d0 . P_403 ; localB -> p30bk3v314 = becrktx0d0 . P_404 ; localB ->
pgnkahl1ya = becrktx0d0 . P_405 ; localB -> ldhgong4mk = becrktx0d0 . P_406 ;
localB -> mzqfye00vu = becrktx0d0 . P_407 ; localB -> bpsd43fx4l = becrktx0d0
. P_408 ; } ptwb5m53nr ( localB -> g1pa1tegyz , gexl04dl1m_idx_2 , localB ->
da1axvglkx , localB -> d0bzowv2xg [ 2 ] , localB -> foidnpo0oq , localB ->
ayhcndhlu0 , localB -> iy5hfoisnh , localB -> hvqnttiddu , localB ->
fhd4tw3lqf , localB -> mh1rri0s1r , localB -> p50mqehgj2 , localB ->
n2dth3maot , & bv2zp3o4ji [ 2 ] , localB -> p2zqzg0hdx , localB -> ghocmfp3xl
, localB -> b0iwqa1a5h , localB -> nrv0gankso , localB -> konnlipgzj , localB
-> pox1w1uosi , localB -> ch20ki1ox4 , localB -> hzyod14crr , localB ->
ofl5o4i551 , localB -> ncdmeuoier , localB -> dfyhgivb3s , localB ->
nazhgfr5nl , localB -> lc2piclprf , localB -> ltgrpu3l4q , localB ->
p2b1rccb34 , localB -> lwb33yxaj2 , localB -> h4ppx2rq3w , localB ->
dshvak0l0t , localB -> gu4axrtwrg , localB -> moxt0psems , localB ->
mbwmesteyr , localB -> p012a231oc , localB -> mwy3qoplw4 , localB ->
itz0cpq0ou , & czlc2qmxmx [ 2 ] , localB -> lerala1r0i , localB -> jb3ei4i5jp
, localB -> cxto45s3l2 , localB -> b3pltw4d0f , localB -> ajq4ib3z4q , localB
-> dkzgnds2he , localB -> igmssod5aw , localB -> kf1zpwhh4b , localB ->
nfugqxwdby , localB -> ck02uwdqxw , localB -> f2neh4sudt , localB ->
ngdktndyrj , localB -> js1tlkukyv , localB -> gt0zjjnrzw , localB ->
afg2asvxic , localB -> pwzktwzfnp , localB -> nyijyqxduk , localB ->
nvdwbnmtpb , localB -> c2oxnm12uw , localB -> n5prl5hqtx , localB ->
mjh54inqdn , localB -> aqlfp0saei , localB -> caw3ndnhbd , localB ->
cd2fs5ehmc , localB -> bkuftmabbw , localB -> krjpez4j44 , 0.0 , localB ->
kauangfpz2 , localB -> ic0iaiqfjv , localB -> nauzowwkur , localB ->
ktxbr2qn24 , localB -> imih2mhusj , localB -> bb1nk0llvq , localB ->
oi1h5qg1nu , localB -> lhkjmqfwms , localB -> moonpo1qpg , localB ->
cuu54cqr5x , localB -> nkimsrvhv0 , localB -> ab5d4ujsnv , localB ->
ouuwsyssnc , localB -> g1ni03prm0 , localB -> mxyh3y0fqs , localB ->
lczmfdcnj1 , localB -> mygyc4cuhm , localB -> dp1b4412au , localB ->
kupsc2ix3y , localB -> gvtptbywt1 , localB -> efwt4j5usk , localB ->
p30bk3v314 , localB -> pgnkahl1ya , localB -> ldhgong4mk , localB ->
mzqfye00vu , localB -> bpsd43fx4l , & pnofovjzba [ 2 ] , & aqytxw532u [ 2 ] ,
& localB -> i24h43uxd3 , becrktx0d0 . P_14 , becrktx0d0 . P_18 , becrktx0d0 .
P_165 , becrktx0d0 . P_190 ) ; nkuvcrp5qp_idx_2 = localB -> i24h43uxd3 .
dbw42rwkve ; if ( rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit (
hokadafud5 , 1 , 0 ) ) { localB -> ftkrxmz2gl = becrktx0d0 . P_153 ; localB
-> pzvvahdijo = becrktx0d0 . P_181 ; localB -> ba3eebeu23 = becrktx0d0 .
P_412 * localB -> pzvvahdijo ; localB -> ajlesncb5s = becrktx0d0 . P_238 ; }
pg5pugmpbd_p = localX -> betxkjviha ; localB -> e1urxzmaq0 = ( fo3cvtmfih [ 3
] - localX -> betxkjviha * localB -> ftkrxmz2gl ) * becrktx0d0 . P_410 ;
ncjyyiy4or_idx_0 = becrktx0d0 . P_411 * dfx1ca0pmi [ 3 ] * localB ->
ba3eebeu23 * localB -> pzvvahdijo * localB -> ajlesncb5s ; if (
ncjyyiy4or_idx_0 > becrktx0d0 . P_413 ) { ncjyyiy4or_idx_0 = becrktx0d0 .
P_413 ; } else { if ( ncjyyiy4or_idx_0 < becrktx0d0 . P_414 ) {
ncjyyiy4or_idx_0 = becrktx0d0 . P_414 ; } } localB -> cohvkbnuuk = becrktx0d0
. P_157 * becrktx0d0 . P_230 * ncjyyiy4or_idx_0 ; localB -> nbbgsqzccu =
becrktx0d0 . P_234 / becrktx0d0 . P_230 * localB -> cohvkbnuuk ; lf15r5ane4 (
1 , hokadafud5 , & localB -> e1urxzmaq0 , & localB -> nbbgsqzccu , & localB
-> cohvkbnuuk , & localB -> lg2haxd3ng , localB -> hzwxfzysvm , localDW ->
hzwxfzysvm , & becrktx0d0 . hzwxfzysvm , localX -> hzwxfzysvm , becrktx0d0 .
P_242 , becrktx0d0 . P_175 , becrktx0d0 . P_24 , becrktx0d0 . P_166 ,
becrktx0d0 . P_153 ) ; if ( rtmIsMajorTimeStep ( hokadafud5 ) &&
rtmIsSampleHit ( hokadafud5 , 1 , 0 ) ) { localB -> hi0pegbdyc = becrktx0d0 .
P_415 ; localB -> bcaoqtity3 = becrktx0d0 . P_416 ; localB -> hvepbvdr32 =
becrktx0d0 . P_417 ; localB -> m2rztfpqle = becrktx0d0 . P_418 ; localB ->
jy4skpqqza = becrktx0d0 . P_419 ; localB -> niwe0per3h = becrktx0d0 . P_186 ;
localB -> nwjplc5kqb = becrktx0d0 . P_29 ; localB -> ljz3ikjllu = becrktx0d0
. P_11 ; localB -> jybjfieadv = becrktx0d0 . P_38 ; localB -> ahkepbzhuv =
becrktx0d0 . P_420 ; localB -> mjwgioxasa = becrktx0d0 . P_421 ; localB ->
apo4noaele = becrktx0d0 . P_43 ; localB -> bs5ayvcsk0 = becrktx0d0 . P_47 ;
localB -> iqkqeqrnd5 = becrktx0d0 . P_51 ; localB -> mcr41djdeb = becrktx0d0
. P_55 ; localB -> nd50pzk0ym = becrktx0d0 . P_59 ; localB -> mekhgj4dmz =
becrktx0d0 . P_63 ; localB -> ekt1rzqyam = becrktx0d0 . P_67 ; localB ->
o0xjpkriin = becrktx0d0 . P_71 ; localB -> do3if2olyh = becrktx0d0 . P_83 ;
localB -> btx3kvx2ih = becrktx0d0 . P_87 ; localB -> e1ufkioyxf = becrktx0d0
. P_91 ; localB -> ar0tmceeba = becrktx0d0 . P_75 ; localB -> aggsae520q =
becrktx0d0 . P_79 ; localB -> iwxicjhyqf = becrktx0d0 . P_111 ; localB ->
bnsxmpvh0w = becrktx0d0 . P_115 ; localB -> egxcf2r42j = becrktx0d0 . P_95 ;
localB -> ag332kqdvc = becrktx0d0 . P_99 ; localB -> kmm51olbtz = becrktx0d0
. P_103 ; localB -> d4xe44ovvq = becrktx0d0 . P_107 ; localB -> kbvh3hrm4f =
becrktx0d0 . P_203 ; localB -> bkluqrodja = becrktx0d0 . P_223 ; localB ->
ggmwi1oklo = becrktx0d0 . P_211 ; localB -> dty4d52ply = becrktx0d0 . P_195 ;
localB -> mi4ly2orqs = becrktx0d0 . P_199 ; localB -> nkm02g5azg = becrktx0d0
. P_207 ; localB -> b2ahrn1m5z = becrktx0d0 . P_219 ; localB -> fraaz4lots [
0 ] = becrktx0d0 . P_422 [ 0 ] ; localB -> pnn2p0abyz [ 0 ] = becrktx0d0 .
P_423 [ 0 ] ; localB -> fraaz4lots [ 1 ] = becrktx0d0 . P_422 [ 1 ] ; localB
-> pnn2p0abyz [ 1 ] = becrktx0d0 . P_423 [ 1 ] ; localB -> fraaz4lots [ 2 ] =
becrktx0d0 . P_422 [ 2 ] ; localB -> pnn2p0abyz [ 2 ] = becrktx0d0 . P_423 [
2 ] ; localB -> b3kmb4trgj = becrktx0d0 . P_11 ; localB -> deukthg15z =
becrktx0d0 . P_38 ; localB -> or1pmiehbm = becrktx0d0 . P_120 ; localB ->
gjenvtggot = becrktx0d0 . P_124 ; localB -> cbphg11o4k = becrktx0d0 . P_128 ;
localB -> l4brhjoncl = becrktx0d0 . P_132 ; localB -> dhk4cumhug = becrktx0d0
. P_136 ; localB -> o3uc3arohm = becrktx0d0 . P_140 ; localB -> bs5oyflpc4 =
becrktx0d0 . P_144 ; localB -> biudufsugi = becrktx0d0 . P_148 ; localB ->
jwvrvmpniz = becrktx0d0 . P_186 ; localB -> mavol2x2ye = becrktx0d0 . P_215 ;
localB -> pge4rqmuym = becrktx0d0 . P_162 ; localB -> mjnitjatxg = becrktx0d0
. P_425 ; localB -> aco4ypxfsm = becrktx0d0 . P_426 ; localB -> hjzs3f2f4p [
0 ] = becrktx0d0 . P_427 [ 0 ] ; localB -> pmmrxnudo1 [ 0 ] = becrktx0d0 .
P_428 [ 0 ] ; localB -> hjzs3f2f4p [ 1 ] = becrktx0d0 . P_427 [ 1 ] ; localB
-> pmmrxnudo1 [ 1 ] = becrktx0d0 . P_428 [ 1 ] ; localB -> hjzs3f2f4p [ 2 ] =
becrktx0d0 . P_427 [ 2 ] ; localB -> pmmrxnudo1 [ 2 ] = becrktx0d0 . P_428 [
2 ] ; memcpy ( & localB -> awixywbfuo [ 0 ] , & becrktx0d0 . P_424 [ 0 ] , 9U
* sizeof ( real_T ) ) ; memcpy ( & localB -> kieptjun4i [ 0 ] , & becrktx0d0
. P_429 [ 0 ] , 9U * sizeof ( real_T ) ) ; localB -> c4spjjrnou = becrktx0d0
. P_430 ; localB -> lc1hxdornj = becrktx0d0 . P_431 ; localB -> eonipvj1k0 =
becrktx0d0 . P_432 ; localB -> bbbhu0swkp = becrktx0d0 . P_433 ; localB ->
hcxjtuo55z = becrktx0d0 . P_434 ; localB -> gnpc1bj2np = becrktx0d0 . P_435 ;
localB -> muroenhlxx = becrktx0d0 . P_436 ; localB -> nbxvmo3lgk = becrktx0d0
. P_437 ; localB -> icol2u0fpg = becrktx0d0 . P_438 ; localB -> euccxm0qrg =
becrktx0d0 . P_439 ; localB -> fzjncdftut = becrktx0d0 . P_440 ; localB ->
a5ldoidwqe = becrktx0d0 . P_441 ; localB -> flsml1nkv1 = becrktx0d0 . P_442 ;
localB -> hn3qcfzdqi = becrktx0d0 . P_443 ; localB -> jcpawmwg3g = becrktx0d0
. P_444 ; localB -> kpc1dliopx = becrktx0d0 . P_445 ; localB -> na5nhpz2m2 =
becrktx0d0 . P_446 ; localB -> deyxiewxuk = becrktx0d0 . P_447 ; localB ->
pyldnrbuod = becrktx0d0 . P_448 ; localB -> irvwz5wovb = becrktx0d0 . P_449 ;
localB -> avwnhpgxj1 = becrktx0d0 . P_450 ; localB -> fw2rrhfwt2 = becrktx0d0
. P_451 ; localB -> ogqbn0zua1 = becrktx0d0 . P_452 ; localB -> e40b3h5ffu =
becrktx0d0 . P_453 ; localB -> nf4jsbi5wr = becrktx0d0 . P_454 ; localB ->
pkyhejy0vp = becrktx0d0 . P_455 ; } ptwb5m53nr ( localB -> ftkrxmz2gl ,
gexl04dl1m_idx_3 , localB -> lg2haxd3ng , localB -> d0bzowv2xg [ 3 ] , localB
-> hi0pegbdyc , localB -> bcaoqtity3 , localB -> hvepbvdr32 , localB ->
m2rztfpqle , localB -> jy4skpqqza , localB -> niwe0per3h , localB ->
nwjplc5kqb , localB -> ljz3ikjllu , & bv2zp3o4ji [ 3 ] , localB -> jybjfieadv
, localB -> ahkepbzhuv , localB -> mjwgioxasa , localB -> apo4noaele , localB
-> bs5ayvcsk0 , localB -> iqkqeqrnd5 , localB -> mcr41djdeb , localB ->
nd50pzk0ym , localB -> mekhgj4dmz , localB -> ekt1rzqyam , localB ->
o0xjpkriin , localB -> do3if2olyh , localB -> btx3kvx2ih , localB ->
e1ufkioyxf , localB -> ar0tmceeba , localB -> aggsae520q , localB ->
iwxicjhyqf , localB -> bnsxmpvh0w , localB -> egxcf2r42j , localB ->
ag332kqdvc , localB -> kmm51olbtz , localB -> d4xe44ovvq , localB ->
kbvh3hrm4f , localB -> bkluqrodja , & czlc2qmxmx [ 3 ] , localB -> ggmwi1oklo
, localB -> dty4d52ply , localB -> mi4ly2orqs , localB -> nkm02g5azg , localB
-> b2ahrn1m5z , localB -> fraaz4lots , localB -> pnn2p0abyz , localB ->
awixywbfuo , localB -> b3kmb4trgj , localB -> deukthg15z , localB ->
or1pmiehbm , localB -> gjenvtggot , localB -> cbphg11o4k , localB ->
l4brhjoncl , localB -> dhk4cumhug , localB -> o3uc3arohm , localB ->
bs5oyflpc4 , localB -> biudufsugi , localB -> jwvrvmpniz , localB ->
mavol2x2ye , localB -> pge4rqmuym , localB -> mjnitjatxg , localB ->
aco4ypxfsm , localB -> hjzs3f2f4p , localB -> pmmrxnudo1 , localB ->
kieptjun4i , 0.0 , localB -> c4spjjrnou , localB -> lc1hxdornj , localB ->
eonipvj1k0 , localB -> bbbhu0swkp , localB -> hcxjtuo55z , localB ->
gnpc1bj2np , localB -> muroenhlxx , localB -> nbxvmo3lgk , localB ->
icol2u0fpg , localB -> euccxm0qrg , localB -> fzjncdftut , localB ->
a5ldoidwqe , localB -> flsml1nkv1 , localB -> hn3qcfzdqi , localB ->
jcpawmwg3g , localB -> kpc1dliopx , localB -> na5nhpz2m2 , localB ->
deyxiewxuk , localB -> pyldnrbuod , localB -> irvwz5wovb , localB ->
avwnhpgxj1 , localB -> fw2rrhfwt2 , localB -> ogqbn0zua1 , localB ->
e40b3h5ffu , localB -> nf4jsbi5wr , localB -> pkyhejy0vp , & pnofovjzba [ 3 ]
, & aqytxw532u [ 3 ] , & localB -> fbdb5pexuk , becrktx0d0 . P_15 ,
becrktx0d0 . P_19 , becrktx0d0 . P_166 , becrktx0d0 . P_191 ) ; if (
nkuvcrp5qp_idx_0 > becrktx0d0 . P_457 ) { nkuvcrp5qp_idx_0 -= becrktx0d0 .
P_457 ; } else if ( nkuvcrp5qp_idx_0 >= becrktx0d0 . P_456 ) {
nkuvcrp5qp_idx_0 = 0.0 ; } else { nkuvcrp5qp_idx_0 -= becrktx0d0 . P_456 ; }
if ( nkuvcrp5qp_idx_1 > becrktx0d0 . P_457 ) { nkuvcrp5qp_idx_1 -= becrktx0d0
. P_457 ; } else if ( nkuvcrp5qp_idx_1 >= becrktx0d0 . P_456 ) {
nkuvcrp5qp_idx_1 = 0.0 ; } else { nkuvcrp5qp_idx_1 -= becrktx0d0 . P_456 ; }
if ( nkuvcrp5qp_idx_2 > becrktx0d0 . P_457 ) { nkuvcrp5qp_idx_2 -= becrktx0d0
. P_457 ; } else if ( nkuvcrp5qp_idx_2 >= becrktx0d0 . P_456 ) {
nkuvcrp5qp_idx_2 = 0.0 ; } else { nkuvcrp5qp_idx_2 -= becrktx0d0 . P_456 ; }
if ( localB -> fbdb5pexuk . dbw42rwkve > becrktx0d0 . P_457 ) { nkuvcrp5qp_p
= localB -> fbdb5pexuk . dbw42rwkve - becrktx0d0 . P_457 ; } else if ( localB
-> fbdb5pexuk . dbw42rwkve >= becrktx0d0 . P_456 ) { nkuvcrp5qp_p = 0.0 ; }
else { nkuvcrp5qp_p = localB -> fbdb5pexuk . dbw42rwkve - becrktx0d0 . P_456
; } if ( rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1
, 0 ) ) { eueb01ol1w [ 0 ] = 0.0 ; eueb01ol1w [ 1 ] = 0.0 ; eueb01ol1w [ 2 ]
= 0.0 ; eueb01ol1w [ 3 ] = 0.0 ; eueb01ol1w [ 0 ] = - eueb01ol1w [ 0 ] ;
eueb01ol1w [ 1 ] = - eueb01ol1w [ 1 ] ; eueb01ol1w [ 2 ] = - eueb01ol1w [ 2 ]
; eueb01ol1w [ 3 ] = - eueb01ol1w [ 3 ] ; localB -> bj5ypscq0g = becrktx0d0 .
P_30 ; localB -> oo2du3h4oj = - becrktx0d0 . P_163 ; localB -> mw4grvy22m =
becrktx0d0 . P_163 ; } n5gbyy525k_p = localB -> ohauu0whxn * localB ->
h5wh4b5rct ; if ( ( n5gbyy525k_p >= localB -> oo2du3h4oj ) && ( n5gbyy525k_p
<= localB -> mw4grvy22m ) ) { n5gbyy525k_p = 1.0 / ( 3.0 -
muDoubleScalarPower ( n5gbyy525k_p / 0.5 , 2.0 ) ) ; } else { n5gbyy525k_p =
muDoubleScalarAbs ( n5gbyy525k_p ) ; } localB -> k5tf43ru55 = ( ( localB ->
f1abnn2ast . imuoerh5jm / localB -> h5wh4b5rct + localB -> f1abnn2ast .
dbw42rwkve ) - cnydngolnu_p ) * ( n5gbyy525k_p / localB -> bj5ypscq0g ) ; if
( rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 )
) { localB -> ptxv211opk = becrktx0d0 . P_31 ; localB -> ntxmyrdcci = -
becrktx0d0 . P_164 ; localB -> l1fgxh5rmu = becrktx0d0 . P_164 ; }
cnydngolnu_p = localB -> nabgbcf5q2 * localB -> hesaewh1nb ; if ( (
cnydngolnu_p >= localB -> ntxmyrdcci ) && ( cnydngolnu_p <= localB ->
l1fgxh5rmu ) ) { cnydngolnu_p = 1.0 / ( 3.0 - muDoubleScalarPower (
cnydngolnu_p / 0.5 , 2.0 ) ) ; } else { cnydngolnu_p = muDoubleScalarAbs (
cnydngolnu_p ) ; } localB -> csv1tz3mo5 = ( ( localB -> dycowragfc .
imuoerh5jm / localB -> hesaewh1nb + localB -> dycowragfc . dbw42rwkve ) -
aprhm5pfo4_p ) * ( cnydngolnu_p / localB -> ptxv211opk ) ; if (
rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) )
{ localB -> o2v1omqp5o = becrktx0d0 . P_32 ; localB -> fug3ylqa5c = -
becrktx0d0 . P_165 ; localB -> eu0prsnkho = becrktx0d0 . P_165 ; }
aprhm5pfo4_p = localB -> da1axvglkx * localB -> g1pa1tegyz ; if ( (
aprhm5pfo4_p >= localB -> fug3ylqa5c ) && ( aprhm5pfo4_p <= localB ->
eu0prsnkho ) ) { aprhm5pfo4_p = 1.0 / ( 3.0 - muDoubleScalarPower (
aprhm5pfo4_p / 0.5 , 2.0 ) ) ; } else { aprhm5pfo4_p = muDoubleScalarAbs (
aprhm5pfo4_p ) ; } localB -> m2qthtd2dk = ( ( localB -> i24h43uxd3 .
imuoerh5jm / localB -> g1pa1tegyz + localB -> i24h43uxd3 . dbw42rwkve ) -
phadir2dvq_p ) * ( aprhm5pfo4_p / localB -> o2v1omqp5o ) ; if (
rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) )
{ localB -> n5naxrnqpp = becrktx0d0 . P_33 ; localB -> lvdk5yc0vx = -
becrktx0d0 . P_166 ; localB -> d4xbfidkhy = becrktx0d0 . P_166 ; }
phadir2dvq_p = localB -> lg2haxd3ng * localB -> ftkrxmz2gl ; if ( (
phadir2dvq_p >= localB -> lvdk5yc0vx ) && ( phadir2dvq_p <= localB ->
d4xbfidkhy ) ) { phadir2dvq_p = 1.0 / ( 3.0 - muDoubleScalarPower (
phadir2dvq_p / 0.5 , 2.0 ) ) ; } else { phadir2dvq_p = muDoubleScalarAbs (
phadir2dvq_p ) ; } localB -> l1v2ykrtac = ( ( localB -> fbdb5pexuk .
imuoerh5jm / localB -> ftkrxmz2gl + localB -> fbdb5pexuk . dbw42rwkve ) -
pg5pugmpbd_p ) * ( phadir2dvq_p / localB -> n5naxrnqpp ) ; aehgk41bne [ 0 ] =
localB -> ohauu0whxn ; aehgk41bne [ 1 ] = localB -> nabgbcf5q2 ; aehgk41bne [
2 ] = localB -> da1axvglkx ; aehgk41bne [ 3 ] = localB -> lg2haxd3ng ; if (
rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) )
{ localB -> etnalojlqn = becrktx0d0 . P_247 ; if ( localDW -> ncgxsvvru2 >
becrktx0d0 . P_462 ) { localB -> jyhyy5jhuv [ 0 ] = becrktx0d0 . P_462 ; }
else if ( localDW -> ncgxsvvru2 < becrktx0d0 . P_463 ) { localB -> jyhyy5jhuv
[ 0 ] = becrktx0d0 . P_463 ; } else { localB -> jyhyy5jhuv [ 0 ] = localDW ->
ncgxsvvru2 ; } if ( localDW -> m44z2pktlv > becrktx0d0 . P_462 ) { localB ->
jyhyy5jhuv [ 1 ] = becrktx0d0 . P_462 ; } else if ( localDW -> m44z2pktlv <
becrktx0d0 . P_463 ) { localB -> jyhyy5jhuv [ 1 ] = becrktx0d0 . P_463 ; }
else { localB -> jyhyy5jhuv [ 1 ] = localDW -> m44z2pktlv ; } if ( localDW ->
baajemjlf1 > becrktx0d0 . P_462 ) { localB -> jyhyy5jhuv [ 2 ] = becrktx0d0 .
P_462 ; } else if ( localDW -> baajemjlf1 < becrktx0d0 . P_463 ) { localB ->
jyhyy5jhuv [ 2 ] = becrktx0d0 . P_463 ; } else { localB -> jyhyy5jhuv [ 2 ] =
localDW -> baajemjlf1 ; } if ( localDW -> nag3iizhma > becrktx0d0 . P_462 ) {
localB -> jyhyy5jhuv [ 3 ] = becrktx0d0 . P_462 ; } else if ( localDW ->
nag3iizhma < becrktx0d0 . P_463 ) { localB -> jyhyy5jhuv [ 3 ] = becrktx0d0 .
P_463 ; } else { localB -> jyhyy5jhuv [ 3 ] = localDW -> nag3iizhma ; }
localB -> laszgf0kuz [ 0 ] = becrktx0d0 . P_248 ; localB -> laszgf0kuz [ 1 ]
= becrktx0d0 . P_250 ; localB -> laszgf0kuz [ 2 ] = becrktx0d0 . P_243 ;
localB -> laszgf0kuz [ 3 ] = becrktx0d0 . P_244 ; } localB -> l1buwvww42 [ 0
] = ( localB -> jyhyy5jhuv [ 0 ] - gexl04dl1m_idx_0 ) * localB -> etnalojlqn
; localB -> l1buwvww42 [ 1 ] = ( localB -> jyhyy5jhuv [ 1 ] -
gexl04dl1m_idx_1 ) * localB -> etnalojlqn ; localB -> l1buwvww42 [ 2 ] = (
localB -> jyhyy5jhuv [ 2 ] - gexl04dl1m_idx_2 ) * localB -> etnalojlqn ;
localB -> l1buwvww42 [ 3 ] = ( localB -> jyhyy5jhuv [ 3 ] - gexl04dl1m_idx_3
) * localB -> etnalojlqn ; if ( localDW -> kvj4uckeqc != 0 ) { localX ->
n5tb00omor [ 0 ] = localB -> laszgf0kuz [ 0 ] ; localX -> n5tb00omor [ 1 ] =
localB -> laszgf0kuz [ 1 ] ; localX -> n5tb00omor [ 2 ] = localB ->
laszgf0kuz [ 2 ] ; localX -> n5tb00omor [ 3 ] = localB -> laszgf0kuz [ 3 ] ;
} gexl04dl1m_idx_0 = localX -> n5tb00omor [ 0 ] ; gexl04dl1m_idx_1 = localX
-> n5tb00omor [ 1 ] ; gexl04dl1m_idx_2 = localX -> n5tb00omor [ 2 ] ;
gexl04dl1m_idx_3 = localX -> n5tb00omor [ 3 ] ; muDoubleScalarSinCos ( localX
-> n5tb00omor [ 2 ] , & pn4wwp53rv , & pg5pugmpbd_p ) ; gkmrybnks1_p = localX
-> n5tb00omor [ 0 ] - ( pg5pugmpbd_p * pf4xf35zus [ 0 ] + pn4wwp53rv *
pf4xf35zus [ 1 ] ) ; gkmrybnks1_idx_0 = gkmrybnks1_p ; ncjyyiy4or_idx_0 =
gkmrybnks1_p * gkmrybnks1_p ; gkmrybnks1_p = localX -> n5tb00omor [ 1 ] - (
pg5pugmpbd_p * pf4xf35zus [ 1 ] - pn4wwp53rv * pf4xf35zus [ 0 ] ) ;
c2hj0tccof_p = ( gkmrybnks1_p * gkmrybnks1_p + ncjyyiy4or_idx_0 ) + ( 0.0 -
pf4xf35zus [ 2 ] ) * ( 0.0 - pf4xf35zus [ 2 ] ) ; if ( rtmIsMajorTimeStep (
hokadafud5 ) ) { if ( localDW -> fvd2istvuu != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( hokadafud5 -> _mdlRefSfcnS ) ;
localDW -> fvd2istvuu = 0 ; } pn4wwp53rv = muDoubleScalarSqrt ( c2hj0tccof_p
) ; } else if ( c2hj0tccof_p < 0.0 ) { pn4wwp53rv = - muDoubleScalarSqrt (
muDoubleScalarAbs ( c2hj0tccof_p ) ) ; localDW -> fvd2istvuu = 1 ; } else {
pn4wwp53rv = muDoubleScalarSqrt ( c2hj0tccof_p ) ; } c2hj0tccof_p =
pn4wwp53rv * pn4wwp53rv ; if ( rtmIsMajorTimeStep ( hokadafud5 ) &&
rtmIsSampleHit ( hokadafud5 , 1 , 0 ) ) { localB -> bhtsntdwoh [ 0 ] =
becrktx0d0 . P_1 ; } pn4wwp53rv = muDoubleScalarAtan2 ( gkmrybnks1_p ,
gkmrybnks1_idx_0 ) ; localB -> bhtsntdwoh [ 1 ] = look1_binlcpw ( pn4wwp53rv
, becrktx0d0 . P_171 , becrktx0d0 . P_4 , 30U ) ; if ( rtmIsMajorTimeStep (
hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) ) { localB ->
bhtsntdwoh [ 2 ] = becrktx0d0 . P_2 ; localB -> pnnunnvv1j [ 0 ] = becrktx0d0
. P_466 [ 0 ] ; localB -> gsskq4zyxa [ 0 ] = - localB -> pnnunnvv1j [ 0 ] ;
localB -> pnnunnvv1j [ 1 ] = becrktx0d0 . P_466 [ 1 ] ; localB -> gsskq4zyxa
[ 1 ] = - localB -> pnnunnvv1j [ 1 ] ; localB -> pnnunnvv1j [ 2 ] =
becrktx0d0 . P_466 [ 2 ] ; localB -> gsskq4zyxa [ 2 ] = - localB ->
pnnunnvv1j [ 2 ] ; } localB -> bhtsntdwoh [ 3 ] = look1_binlxpw ( pn4wwp53rv
, becrktx0d0 . P_465 , becrktx0d0 . P_464 , 1U ) ; if ( gkmrybnks1_idx_0 >=
becrktx0d0 . P_467 ) { gkmrybnks1_idx_0 = localB -> pnnunnvv1j [ 0 ] ; } else
{ gkmrybnks1_idx_0 = localB -> gsskq4zyxa [ 0 ] ; } if ( rtmIsMajorTimeStep (
hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) ) { localB ->
d3ffw0bqsw = becrktx0d0 . P_3 ; localB -> iervwtn0w5 = becrktx0d0 . P_158 ; }
localB -> bhtsntdwoh [ 4 ] = gkmrybnks1_idx_0 * localB -> d3ffw0bqsw ; localB
-> bhtsntdwoh [ 5 ] = look1_binlxpw ( pn4wwp53rv , becrktx0d0 . P_171 ,
becrktx0d0 . P_7 , 30U ) ; pn4wwp53rv = 0.5 * becrktx0d0 . P_0 * becrktx0d0 .
P_116 / becrktx0d0 . P_149 ; for ( i = 0 ; i < 6 ; i ++ ) { gdcxt1uwbj_p [ i
] = c2hj0tccof_p * localB -> bhtsntdwoh [ i ] / localB -> iervwtn0w5 *
pn4wwp53rv ; } if ( rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit (
hokadafud5 , 1 , 0 ) ) { localB -> pozrpcw3rm = becrktx0d0 . P_169 +
becrktx0d0 . P_170 ; } ncjyyiy4or_idx_0 = - ( gdcxt1uwbj_p [ 3 ] * localB ->
pozrpcw3rm ) ; gkmrybnks1_idx_0 = - ( gkmrybnks1_idx_0 * gdcxt1uwbj_p [ 0 ] )
; ncjyyiy4or_idx_1 = - ( gdcxt1uwbj_p [ 4 ] * localB -> pozrpcw3rm ) ; if (
gkmrybnks1_p >= becrktx0d0 . P_467 ) { gkmrybnks1_p = localB -> pnnunnvv1j [
1 ] ; } else { gkmrybnks1_p = localB -> gsskq4zyxa [ 1 ] ; } gkmrybnks1_idx_1
= - ( gkmrybnks1_p * gdcxt1uwbj_p [ 1 ] ) ; ncjyyiy4or_idx_2 = - (
gdcxt1uwbj_p [ 5 ] * localB -> pozrpcw3rm ) ; if ( 0.0 - pf4xf35zus [ 2 ] >=
becrktx0d0 . P_467 ) { gkmrybnks1_p = localB -> pnnunnvv1j [ 2 ] ; } else {
gkmrybnks1_p = localB -> gsskq4zyxa [ 2 ] ; } gkmrybnks1_p = - ( gkmrybnks1_p
* gdcxt1uwbj_p [ 2 ] ) ; if ( rtmIsMajorTimeStep ( hokadafud5 ) &&
rtmIsSampleHit ( hokadafud5 , 1 , 0 ) ) { localB -> kyrnjux3iw [ 0 ] =
becrktx0d0 . P_5 ; localB -> kyrnjux3iw [ 1 ] = becrktx0d0 . P_5 ; localB ->
huii2aaokv [ 0 ] = becrktx0d0 . P_6 ; localB -> huii2aaokv [ 1 ] = becrktx0d0
. P_6 ; odhytzs2sq = becrktx0d0 . P_468 * becrktx0d0 . P_246 [ 0 ] ; localB
-> p1hnofbqbf [ 0 ] = becrktx0d0 . P_167 ; localB -> p1hnofbqbf [ 1 ] =
becrktx0d0 . P_168 ; * pe5smgk1bf = becrktx0d0 . P_469 ; * beq1qzuhx3 =
becrktx0d0 . P_470 ; * cr4vlmhzvc = becrktx0d0 . P_471 ; } if ( localDW ->
bokb5rvw5x != 0 ) { localX -> bmsz0qfwwr [ 0 ] = localB -> p1hnofbqbf [ 0 ] ;
localX -> bmsz0qfwwr [ 1 ] = localB -> p1hnofbqbf [ 1 ] ; }
muDoubleScalarSinCos ( gexl04dl1m_idx_2 , & cnydngolnu_p , & nf2m5ypf5y [ 0 ]
) ; muDoubleScalarSinCos ( * beq1qzuhx3 , & phadir2dvq_p , & nf2m5ypf5y [ 1 ]
) ; muDoubleScalarSinCos ( * cr4vlmhzvc , & pg5pugmpbd_p , & nf2m5ypf5y [ 2 ]
) ; agmc0hkxpl_p [ 0 ] = nf2m5ypf5y [ 1 ] * nf2m5ypf5y [ 0 ] ; n5gbyy525k_p =
pg5pugmpbd_p * phadir2dvq_p ; agmc0hkxpl_p [ 1 ] = n5gbyy525k_p * nf2m5ypf5y
[ 0 ] - nf2m5ypf5y [ 2 ] * cnydngolnu_p ; pn4wwp53rv = nf2m5ypf5y [ 2 ] *
phadir2dvq_p ; agmc0hkxpl_p [ 2 ] = pn4wwp53rv * nf2m5ypf5y [ 0 ] +
pg5pugmpbd_p * cnydngolnu_p ; agmc0hkxpl_p [ 3 ] = nf2m5ypf5y [ 1 ] *
cnydngolnu_p ; agmc0hkxpl_p [ 4 ] = n5gbyy525k_p * cnydngolnu_p + nf2m5ypf5y
[ 2 ] * nf2m5ypf5y [ 0 ] ; agmc0hkxpl_p [ 5 ] = pn4wwp53rv * cnydngolnu_p -
pg5pugmpbd_p * nf2m5ypf5y [ 0 ] ; agmc0hkxpl_p [ 6 ] = - phadir2dvq_p ;
agmc0hkxpl_p [ 7 ] = pg5pugmpbd_p * nf2m5ypf5y [ 1 ] ; agmc0hkxpl_p [ 8 ] =
nf2m5ypf5y [ 2 ] * nf2m5ypf5y [ 1 ] ; if ( rtmIsMajorTimeStep ( hokadafud5 )
&& rtmIsSampleHit ( hokadafud5 , 1 , 0 ) ) { localB -> j3goyfyj54 [ 0 ] =
becrktx0d0 . P_169 ; localB -> j3goyfyj54 [ 1 ] = odhytzs2sq - becrktx0d0 .
P_177 ; localB -> j3goyfyj54 [ 2 ] = becrktx0d0 . P_187 ; } for ( i = 0 ; i <
3 ; i ++ ) { nf2m5ypf5y [ i ] = agmc0hkxpl_p [ 3 * i + 2 ] * localB ->
j3goyfyj54 [ 2 ] + ( agmc0hkxpl_p [ 3 * i + 1 ] * localB -> j3goyfyj54 [ 1 ]
+ agmc0hkxpl_p [ 3 * i ] * localB -> j3goyfyj54 [ 0 ] ) ; } ebhsrqq1o4 [ 0 ]
= localX -> bmsz0qfwwr [ 0 ] + nf2m5ypf5y [ 0 ] ; eplypn1mx4 [ 0 ] = localX
-> bmsz0qfwwr [ 1 ] + nf2m5ypf5y [ 1 ] ; if ( rtmIsMajorTimeStep ( hokadafud5
) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) ) { * mzzkjogxl0 = becrktx0d0 .
P_472 ; localB -> ow2xlzwlpr = * mzzkjogxl0 * localB -> j3goyfyj54 [ 2 ] ; *
lo50jqtaqt = becrktx0d0 . P_473 ; localB -> idd2bdwvig = * lo50jqtaqt *
localB -> j3goyfyj54 [ 1 ] ; localB -> nd5yaadfjn = * lo50jqtaqt * localB ->
j3goyfyj54 [ 2 ] ; localB -> phtmvwm1qm = * mzzkjogxl0 * localB -> j3goyfyj54
[ 0 ] ; localB -> ib54sd0pej = becrktx0d0 . P_474 ; huqtoo4ku1 = becrktx0d0 .
P_475 * becrktx0d0 . P_246 [ 0 ] ; } localB -> jsk5luwvju [ 0 ] = ( localB ->
ow2xlzwlpr - gexl04dl1m_idx_3 * localB -> j3goyfyj54 [ 1 ] ) +
gexl04dl1m_idx_0 ; localB -> jsk5luwvju [ 1 ] = ( gexl04dl1m_idx_3 * localB
-> j3goyfyj54 [ 0 ] - localB -> nd5yaadfjn ) + gexl04dl1m_idx_1 ; localB ->
jsk5luwvju [ 2 ] = ( localB -> idd2bdwvig - localB -> phtmvwm1qm ) + localB
-> ib54sd0pej ; muDoubleScalarSinCos ( gexl04dl1m_idx_2 , & nf2m5ypf5y [ 0 ]
, & cnydngolnu_p ) ; muDoubleScalarSinCos ( * beq1qzuhx3 , & nf2m5ypf5y [ 1 ]
, & phadir2dvq_p ) ; muDoubleScalarSinCos ( * cr4vlmhzvc , & nf2m5ypf5y [ 2 ]
, & pg5pugmpbd_p ) ; agmc0hkxpl_p [ 0 ] = phadir2dvq_p * cnydngolnu_p ;
n5gbyy525k_p = nf2m5ypf5y [ 2 ] * nf2m5ypf5y [ 1 ] ; agmc0hkxpl_p [ 1 ] =
n5gbyy525k_p * cnydngolnu_p - pg5pugmpbd_p * nf2m5ypf5y [ 0 ] ; pn4wwp53rv =
pg5pugmpbd_p * nf2m5ypf5y [ 1 ] ; agmc0hkxpl_p [ 2 ] = pn4wwp53rv *
cnydngolnu_p + nf2m5ypf5y [ 2 ] * nf2m5ypf5y [ 0 ] ; agmc0hkxpl_p [ 3 ] =
phadir2dvq_p * nf2m5ypf5y [ 0 ] ; agmc0hkxpl_p [ 4 ] = n5gbyy525k_p *
nf2m5ypf5y [ 0 ] + pg5pugmpbd_p * cnydngolnu_p ; agmc0hkxpl_p [ 5 ] =
pn4wwp53rv * nf2m5ypf5y [ 0 ] - nf2m5ypf5y [ 2 ] * cnydngolnu_p ;
agmc0hkxpl_p [ 6 ] = - nf2m5ypf5y [ 1 ] ; agmc0hkxpl_p [ 7 ] = nf2m5ypf5y [ 2
] * phadir2dvq_p ; agmc0hkxpl_p [ 8 ] = pg5pugmpbd_p * phadir2dvq_p ; if (
rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) )
{ localB -> n4g0nfc4au [ 0 ] = becrktx0d0 . P_169 ; localB -> n4g0nfc4au [ 1
] = huqtoo4ku1 - becrktx0d0 . P_177 ; localB -> n4g0nfc4au [ 2 ] = becrktx0d0
. P_187 ; } for ( i = 0 ; i < 3 ; i ++ ) { nf2m5ypf5y [ i ] = agmc0hkxpl_p [
3 * i + 2 ] * localB -> n4g0nfc4au [ 2 ] + ( agmc0hkxpl_p [ 3 * i + 1 ] *
localB -> n4g0nfc4au [ 1 ] + agmc0hkxpl_p [ 3 * i ] * localB -> n4g0nfc4au [
0 ] ) ; } ebhsrqq1o4 [ 1 ] = localX -> bmsz0qfwwr [ 0 ] + nf2m5ypf5y [ 0 ] ;
eplypn1mx4 [ 1 ] = localX -> bmsz0qfwwr [ 1 ] + nf2m5ypf5y [ 1 ] ; if (
rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) )
{ localB -> m5swi44apm = * mzzkjogxl0 * localB -> n4g0nfc4au [ 2 ] ; localB
-> prlujidgvs = * lo50jqtaqt * localB -> n4g0nfc4au [ 1 ] ; localB ->
nrjbcbkraq = * lo50jqtaqt * localB -> n4g0nfc4au [ 2 ] ; localB -> enb3lqwiyx
= * mzzkjogxl0 * localB -> n4g0nfc4au [ 0 ] ; } localB -> f11ihjym5d [ 0 ] =
( localB -> m5swi44apm - gexl04dl1m_idx_3 * localB -> n4g0nfc4au [ 1 ] ) +
gexl04dl1m_idx_0 ; localB -> f11ihjym5d [ 1 ] = ( gexl04dl1m_idx_3 * localB
-> n4g0nfc4au [ 0 ] - localB -> nrjbcbkraq ) + gexl04dl1m_idx_1 ; localB ->
f11ihjym5d [ 2 ] = ( localB -> prlujidgvs - localB -> enb3lqwiyx ) + localB
-> ib54sd0pej ; muDoubleScalarSinCos ( gexl04dl1m_idx_2 , & nf2m5ypf5y [ 0 ]
, & cnydngolnu_p ) ; muDoubleScalarSinCos ( * beq1qzuhx3 , & nf2m5ypf5y [ 1 ]
, & phadir2dvq_p ) ; muDoubleScalarSinCos ( * cr4vlmhzvc , & nf2m5ypf5y [ 2 ]
, & pg5pugmpbd_p ) ; if ( rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit
( hokadafud5 , 1 , 0 ) ) { ldzdoaktef = becrktx0d0 . P_476 * becrktx0d0 .
P_246 [ 1 ] ; } muDoubleScalarSinCos ( gexl04dl1m_idx_2 , & nf2m5ypf5y [ 0 ]
, & cnydngolnu_p ) ; muDoubleScalarSinCos ( * beq1qzuhx3 , & nf2m5ypf5y [ 1 ]
, & phadir2dvq_p ) ; muDoubleScalarSinCos ( * cr4vlmhzvc , & nf2m5ypf5y [ 2 ]
, & pg5pugmpbd_p ) ; agmc0hkxpl_p [ 0 ] = phadir2dvq_p * cnydngolnu_p ;
n5gbyy525k_p = nf2m5ypf5y [ 2 ] * nf2m5ypf5y [ 1 ] ; agmc0hkxpl_p [ 1 ] =
n5gbyy525k_p * cnydngolnu_p - pg5pugmpbd_p * nf2m5ypf5y [ 0 ] ; pn4wwp53rv =
pg5pugmpbd_p * nf2m5ypf5y [ 1 ] ; agmc0hkxpl_p [ 2 ] = pn4wwp53rv *
cnydngolnu_p + nf2m5ypf5y [ 2 ] * nf2m5ypf5y [ 0 ] ; agmc0hkxpl_p [ 3 ] =
phadir2dvq_p * nf2m5ypf5y [ 0 ] ; agmc0hkxpl_p [ 4 ] = n5gbyy525k_p *
nf2m5ypf5y [ 0 ] + pg5pugmpbd_p * cnydngolnu_p ; agmc0hkxpl_p [ 5 ] =
pn4wwp53rv * nf2m5ypf5y [ 0 ] - nf2m5ypf5y [ 2 ] * cnydngolnu_p ;
agmc0hkxpl_p [ 6 ] = - nf2m5ypf5y [ 1 ] ; agmc0hkxpl_p [ 7 ] = nf2m5ypf5y [ 2
] * phadir2dvq_p ; agmc0hkxpl_p [ 8 ] = pg5pugmpbd_p * phadir2dvq_p ; if (
rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) )
{ localB -> ponlrrdraj [ 0 ] = - becrktx0d0 . P_170 ; localB -> ponlrrdraj [
1 ] = ldzdoaktef - becrktx0d0 . P_177 ; localB -> ponlrrdraj [ 2 ] =
becrktx0d0 . P_187 ; } for ( i = 0 ; i < 3 ; i ++ ) { nf2m5ypf5y [ i ] =
agmc0hkxpl_p [ 3 * i + 2 ] * localB -> ponlrrdraj [ 2 ] + ( agmc0hkxpl_p [ 3
* i + 1 ] * localB -> ponlrrdraj [ 1 ] + agmc0hkxpl_p [ 3 * i ] * localB ->
ponlrrdraj [ 0 ] ) ; } ebhsrqq1o4 [ 2 ] = localX -> bmsz0qfwwr [ 0 ] +
nf2m5ypf5y [ 0 ] ; eplypn1mx4 [ 2 ] = localX -> bmsz0qfwwr [ 1 ] + nf2m5ypf5y
[ 1 ] ; if ( rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5
, 1 , 0 ) ) { localB -> ecbos4qscr = * mzzkjogxl0 * localB -> ponlrrdraj [ 2
] ; localB -> aunggg41b5 = * lo50jqtaqt * localB -> ponlrrdraj [ 1 ] ; localB
-> phf53zkp1e = * lo50jqtaqt * localB -> ponlrrdraj [ 2 ] ; localB ->
f4g2t0avbl = * mzzkjogxl0 * localB -> ponlrrdraj [ 0 ] ; hwqlfbxzai =
becrktx0d0 . P_477 * becrktx0d0 . P_246 [ 1 ] ; } localB -> b0z4gwmh4i [ 0 ]
= ( localB -> ecbos4qscr - gexl04dl1m_idx_3 * localB -> ponlrrdraj [ 1 ] ) +
gexl04dl1m_idx_0 ; localB -> b0z4gwmh4i [ 1 ] = ( gexl04dl1m_idx_3 * localB
-> ponlrrdraj [ 0 ] - localB -> phf53zkp1e ) + gexl04dl1m_idx_1 ; localB ->
b0z4gwmh4i [ 2 ] = ( localB -> aunggg41b5 - localB -> f4g2t0avbl ) + localB
-> ib54sd0pej ; muDoubleScalarSinCos ( gexl04dl1m_idx_2 , & nf2m5ypf5y [ 0 ]
, & cnydngolnu_p ) ; muDoubleScalarSinCos ( * beq1qzuhx3 , & nf2m5ypf5y [ 1 ]
, & phadir2dvq_p ) ; muDoubleScalarSinCos ( * cr4vlmhzvc , & nf2m5ypf5y [ 2 ]
, & pg5pugmpbd_p ) ; agmc0hkxpl_p [ 0 ] = phadir2dvq_p * cnydngolnu_p ;
n5gbyy525k_p = nf2m5ypf5y [ 2 ] * nf2m5ypf5y [ 1 ] ; agmc0hkxpl_p [ 1 ] =
n5gbyy525k_p * cnydngolnu_p - pg5pugmpbd_p * nf2m5ypf5y [ 0 ] ; pn4wwp53rv =
pg5pugmpbd_p * nf2m5ypf5y [ 1 ] ; agmc0hkxpl_p [ 2 ] = pn4wwp53rv *
cnydngolnu_p + nf2m5ypf5y [ 2 ] * nf2m5ypf5y [ 0 ] ; agmc0hkxpl_p [ 3 ] =
phadir2dvq_p * nf2m5ypf5y [ 0 ] ; agmc0hkxpl_p [ 4 ] = n5gbyy525k_p *
nf2m5ypf5y [ 0 ] + pg5pugmpbd_p * cnydngolnu_p ; agmc0hkxpl_p [ 5 ] =
pn4wwp53rv * nf2m5ypf5y [ 0 ] - nf2m5ypf5y [ 2 ] * cnydngolnu_p ;
agmc0hkxpl_p [ 6 ] = - nf2m5ypf5y [ 1 ] ; agmc0hkxpl_p [ 7 ] = nf2m5ypf5y [ 2
] * phadir2dvq_p ; agmc0hkxpl_p [ 8 ] = pg5pugmpbd_p * phadir2dvq_p ; if (
rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) )
{ localB -> a5sij35bll [ 0 ] = - becrktx0d0 . P_170 ; localB -> a5sij35bll [
1 ] = hwqlfbxzai - becrktx0d0 . P_177 ; localB -> a5sij35bll [ 2 ] =
becrktx0d0 . P_187 ; } for ( i = 0 ; i < 3 ; i ++ ) { nf2m5ypf5y [ i ] =
agmc0hkxpl_p [ 3 * i + 2 ] * localB -> a5sij35bll [ 2 ] + ( agmc0hkxpl_p [ 3
* i + 1 ] * localB -> a5sij35bll [ 1 ] + agmc0hkxpl_p [ 3 * i ] * localB ->
a5sij35bll [ 0 ] ) ; } if ( rtmIsMajorTimeStep ( hokadafud5 ) &&
rtmIsSampleHit ( hokadafud5 , 1 , 0 ) ) { localB -> pc1zej1xix = * mzzkjogxl0
* localB -> a5sij35bll [ 2 ] ; localB -> jamoyndfv0 = * lo50jqtaqt * localB
-> a5sij35bll [ 1 ] ; localB -> csiqu2egxv = * lo50jqtaqt * localB ->
a5sij35bll [ 2 ] ; localB -> c0aneq0jso = * mzzkjogxl0 * localB -> a5sij35bll
[ 0 ] ; localB -> oxc1mfwz5g [ 0 ] = becrktx0d0 . P_478 ; localB ->
oxc1mfwz5g [ 1 ] = becrktx0d0 . P_478 ; } localB -> hoyuoz4g0k [ 0 ] = (
localB -> pc1zej1xix - gexl04dl1m_idx_3 * localB -> a5sij35bll [ 1 ] ) +
gexl04dl1m_idx_0 ; localB -> hoyuoz4g0k [ 1 ] = ( gexl04dl1m_idx_3 * localB
-> a5sij35bll [ 0 ] - localB -> csiqu2egxv ) + gexl04dl1m_idx_1 ; localB ->
hoyuoz4g0k [ 2 ] = ( localB -> jamoyndfv0 - localB -> c0aneq0jso ) + localB
-> ib54sd0pej ; odhytzs2sq = muDoubleScalarSin ( gexl04dl1m_idx_2 ) ;
huqtoo4ku1 = muDoubleScalarCos ( gexl04dl1m_idx_2 ) ; localB -> avc4qfob4e [
0 ] = gexl04dl1m_idx_0 * huqtoo4ku1 - gexl04dl1m_idx_1 * odhytzs2sq ; localB
-> avc4qfob4e [ 1 ] = gexl04dl1m_idx_0 * odhytzs2sq + gexl04dl1m_idx_1 *
huqtoo4ku1 ; hwqlfbxzai = muDoubleScalarAbs ( gexl04dl1m_idx_0 ) ; i = 0 ; if
( hwqlfbxzai < becrktx0d0 . P_249 ) { i = 1 ; } if ( 0 <= i - 1 ) { Fz_idx_1
= hwqlfbxzai / becrktx0d0 . P_249 ; z1_data = Fz_idx_1 ; } if ( 0 <= i - 1 )
{ z1_data = Fz_idx_1 * Fz_idx_1 ; } loop_ub = i - 1 ; for ( i = 0 ; i <=
loop_ub ; i ++ ) { z1_data = 2.0 * becrktx0d0 . P_249 / ( 3.0 - z1_data ) ; }
if ( hwqlfbxzai < becrktx0d0 . P_249 ) { hwqlfbxzai = z1_data ; } i = 0 ; if
( gexl04dl1m_idx_0 < 0.0 ) { i = 1 ; } if ( 0 <= i - 1 ) { Fz_idx_1 = -
hwqlfbxzai ; } odhytzs2sq = hwqlfbxzai ; if ( gexl04dl1m_idx_0 < 0.0 ) {
odhytzs2sq = Fz_idx_1 ; } hwqlfbxzai = gxlrb30ei4 [ 0 ] ; c2hj0tccof_p =
gxlrb30ei4 [ 1 ] ; pn4wwp53rv = localB -> oxc1mfwz5g [ 0 ] ; pg5pugmpbd_p =
localB -> oxc1mfwz5g [ 1 ] ; n5gbyy525k_p = muDoubleScalarTanh ( 4.0 *
gexl04dl1m_idx_0 ) ; cnydngolnu_p = becrktx0d0 . P_246 [ 0 ] / 2.0 *
gexl04dl1m_idx_3 ; aprhm5pfo4_p = becrktx0d0 . P_169 * gexl04dl1m_idx_3 +
gexl04dl1m_idx_1 ; phadir2dvq_p = muDoubleScalarAtan2 ( aprhm5pfo4_p ,
muDoubleScalarAbs ( cnydngolnu_p + odhytzs2sq ) ) - gxlrb30ei4 [ 0 ] *
n5gbyy525k_p ; aprhm5pfo4_p = muDoubleScalarAtan2 ( aprhm5pfo4_p ,
muDoubleScalarAbs ( odhytzs2sq - cnydngolnu_p ) ) - gxlrb30ei4 [ 1 ] *
n5gbyy525k_p ; huqtoo4ku1 = becrktx0d0 . P_246 [ 1 ] / 2.0 * gexl04dl1m_idx_3
; ldzdoaktef = gexl04dl1m_idx_1 - becrktx0d0 . P_170 * gexl04dl1m_idx_3 ;
cnydngolnu_p = muDoubleScalarAtan2 ( ldzdoaktef , muDoubleScalarAbs (
huqtoo4ku1 + odhytzs2sq ) ) - localB -> oxc1mfwz5g [ 0 ] * n5gbyy525k_p ;
n5gbyy525k_p = muDoubleScalarAtan2 ( ldzdoaktef , muDoubleScalarAbs (
odhytzs2sq - huqtoo4ku1 ) ) - localB -> oxc1mfwz5g [ 1 ] * n5gbyy525k_p ;
odhytzs2sq = 0.0 ; Fz_idx_1 = 0.0 ; ldzdoaktef = 0.0 ; huqtoo4ku1 = 0.0 ; for
( i = 0 ; i < 11 ; i ++ ) { if ( i == 0 ) { odhytzs2sq = - gexl04dl1m_idx_1 *
gexl04dl1m_idx_3 * becrktx0d0 . P_187 ; huqtoo4ku1 = gkmrybnks1_idx_0 *
becrktx0d0 . P_187 ; Fz_idx_1 = ( ( ( ( becrktx0d0 . P_182 * becrktx0d0 .
P_170 - odhytzs2sq ) * becrktx0d0 . P_226 + gkmrybnks1_p * becrktx0d0 . P_170
) + huqtoo4ku1 ) - ncjyyiy4or_idx_1 ) / ( becrktx0d0 . P_169 + becrktx0d0 .
P_170 ) ; huqtoo4ku1 = ( ( ( ( odhytzs2sq + becrktx0d0 . P_182 * becrktx0d0 .
P_169 ) * becrktx0d0 . P_226 + gkmrybnks1_p * becrktx0d0 . P_169 ) -
huqtoo4ku1 ) + ncjyyiy4or_idx_1 ) / ( becrktx0d0 . P_169 + becrktx0d0 . P_170
) ; z1_data = gexl04dl1m_idx_0 * gexl04dl1m_idx_3 ; u_idx_0_tmp =
gkmrybnks1_idx_1 * becrktx0d0 . P_187 ; u_idx_0_tmp_p = ( z1_data *
becrktx0d0 . P_226 * becrktx0d0 . P_187 - u_idx_0_tmp ) + ncjyyiy4or_idx_0 ;
odhytzs2sq = ( u_idx_0_tmp_p + Fz_idx_1 ) * ( becrktx0d0 . P_246 [ 0 ] / 2.0
- becrktx0d0 . P_177 ) / ( becrktx0d0 . P_246 [ 0 ] / 2.0 ) ; z1_data = (
z1_data * - becrktx0d0 . P_226 * becrktx0d0 . P_187 + u_idx_0_tmp ) +
ncjyyiy4or_idx_0 ; Fz_idx_1 = ( z1_data + Fz_idx_1 ) * ( becrktx0d0 . P_246 [
0 ] / 2.0 + becrktx0d0 . P_177 ) / ( becrktx0d0 . P_246 [ 0 ] / 2.0 ) ;
ldzdoaktef = ( u_idx_0_tmp_p + huqtoo4ku1 ) * ( becrktx0d0 . P_246 [ 1 ] /
2.0 - becrktx0d0 . P_177 ) / ( becrktx0d0 . P_246 [ 1 ] / 2.0 ) ; huqtoo4ku1
= ( z1_data + huqtoo4ku1 ) * ( becrktx0d0 . P_246 [ 1 ] / 2.0 + becrktx0d0 .
P_177 ) / ( becrktx0d0 . P_246 [ 1 ] / 2.0 ) ; if ( odhytzs2sq < 0.0 ) {
odhytzs2sq = 0.0 ; } if ( Fz_idx_1 < 0.0 ) { Fz_idx_1 = 0.0 ; } if (
ldzdoaktef < 0.0 ) { ldzdoaktef = 0.0 ; } if ( huqtoo4ku1 < 0.0 ) {
huqtoo4ku1 = 0.0 ; } } hewkpcvg5g ( nkuvcrp5qp_idx_0 , - localB -> kyrnjux3iw
[ 0 ] / 2.0 * phadir2dvq_p * czlc2qmxmx [ 0 ] * odhytzs2sq / becrktx0d0 .
P_20 , becrktx0d0 . P_251 * odhytzs2sq / becrktx0d0 . P_20 , becrktx0d0 .
P_252 * odhytzs2sq / becrktx0d0 . P_20 , & Fy_fl , & Fx_fr ) ; hewkpcvg5g (
nkuvcrp5qp_idx_1 , - localB -> kyrnjux3iw [ 1 ] / 2.0 * aprhm5pfo4_p *
czlc2qmxmx [ 2 ] * Fz_idx_1 / becrktx0d0 . P_20 , becrktx0d0 . P_251 *
Fz_idx_1 / becrktx0d0 . P_20 , becrktx0d0 . P_252 * Fz_idx_1 / becrktx0d0 .
P_20 , & Fy_fr , & Fx_rl ) ; hewkpcvg5g ( nkuvcrp5qp_idx_2 , - localB ->
huii2aaokv [ 0 ] / 2.0 * cnydngolnu_p * czlc2qmxmx [ 1 ] * ldzdoaktef /
becrktx0d0 . P_20 , becrktx0d0 . P_251 * ldzdoaktef / becrktx0d0 . P_20 ,
becrktx0d0 . P_252 * ldzdoaktef / becrktx0d0 . P_20 , & Fy_rl , & Fx_rr ) ;
hewkpcvg5g ( nkuvcrp5qp_p , - localB -> huii2aaokv [ 1 ] / 2.0 * n5gbyy525k_p
* czlc2qmxmx [ 3 ] * huqtoo4ku1 / becrktx0d0 . P_20 , becrktx0d0 . P_251 *
huqtoo4ku1 / becrktx0d0 . P_20 , becrktx0d0 . P_252 * huqtoo4ku1 / becrktx0d0
. P_20 , & Fy_rr , & xddot ) ; yddot = muDoubleScalarCos ( hwqlfbxzai ) ;
rdot = muDoubleScalarSin ( hwqlfbxzai ) ; Fx_fl = Fy_fl * yddot - Fx_fr *
rdot ; Fy_fl = Fx_fr * yddot - Fy_fl * rdot ; yddot = muDoubleScalarCos (
c2hj0tccof_p ) ; rdot = muDoubleScalarSin ( c2hj0tccof_p ) ; Fx_fr = Fy_fr *
yddot - Fx_rl * rdot ; Fy_fr = Fx_rl * yddot - Fy_fr * rdot ; yddot =
muDoubleScalarCos ( pn4wwp53rv ) ; rdot = muDoubleScalarSin ( pn4wwp53rv ) ;
Fx_rl = Fy_rl * yddot - Fx_rr * rdot ; Fy_rl = Fx_rr * yddot - Fy_rl * rdot ;
yddot = muDoubleScalarCos ( pg5pugmpbd_p ) ; rdot = muDoubleScalarSin (
pg5pugmpbd_p ) ; Fx_rr = Fy_rr * yddot - xddot * rdot ; Fy_rr = xddot * yddot
- Fy_rr * rdot ; odhytzs2sq = gexl04dl1m_idx_1 * gexl04dl1m_idx_3 ; xddot = (
( ( ( ( Fx_fl + Fx_fr ) + Fx_rl ) + Fx_rr ) + gkmrybnks1_idx_0 ) / becrktx0d0
. P_226 + odhytzs2sq ) - becrktx0d0 . P_182 * 0.0 ; rdot = Fy_fl + Fy_fr ;
yddot = ( ( ( rdot + Fy_rl ) + Fy_rr ) + gkmrybnks1_idx_1 ) / becrktx0d0 .
P_226 + - gexl04dl1m_idx_0 * gexl04dl1m_idx_3 ; rdot = ( ( ( ( rdot *
becrktx0d0 . P_169 - ( Fy_rl + Fy_rr ) * becrktx0d0 . P_170 ) + becrktx0d0 .
P_246 [ 0 ] / 2.0 * ( Fx_fl - Fx_fr ) ) + becrktx0d0 . P_246 [ 1 ] / 2.0 * (
Fx_rl - Fx_rr ) ) + ncjyyiy4or_idx_2 ) / becrktx0d0 . P_25 ; odhytzs2sq = (
xddot - odhytzs2sq ) * becrktx0d0 . P_187 ; huqtoo4ku1 = gkmrybnks1_idx_0 *
becrktx0d0 . P_187 ; Fz_idx_1 = ( ( ( ( becrktx0d0 . P_182 * becrktx0d0 .
P_170 - odhytzs2sq ) * becrktx0d0 . P_226 + gkmrybnks1_p * becrktx0d0 . P_170
) + huqtoo4ku1 ) - ncjyyiy4or_idx_1 ) / ( becrktx0d0 . P_169 + becrktx0d0 .
P_170 ) ; huqtoo4ku1 = ( ( ( ( odhytzs2sq + becrktx0d0 . P_182 * becrktx0d0 .
P_169 ) * becrktx0d0 . P_226 + gkmrybnks1_p * becrktx0d0 . P_169 ) -
huqtoo4ku1 ) + ncjyyiy4or_idx_1 ) / ( becrktx0d0 . P_169 + becrktx0d0 . P_170
) ; z1_data = gexl04dl1m_idx_0 * gexl04dl1m_idx_3 + yddot ; u_idx_0_tmp =
gkmrybnks1_idx_1 * becrktx0d0 . P_187 ; u_idx_0_tmp_p = becrktx0d0 . P_246 [
0 ] / 2.0 - becrktx0d0 . P_177 ; u_idx_0_tmp_e = becrktx0d0 . P_246 [ 0 ] /
2.0 + becrktx0d0 . P_177 ; ldzdoaktef = ( z1_data * becrktx0d0 . P_226 *
becrktx0d0 . P_187 - u_idx_0_tmp ) - ncjyyiy4or_idx_0 ; odhytzs2sq = (
ldzdoaktef / u_idx_0_tmp_e / 2.0 + Fz_idx_1 ) * u_idx_0_tmp_p / ( becrktx0d0
. P_246 [ 0 ] / 2.0 ) ; z1_data = ( z1_data * - becrktx0d0 . P_226 *
becrktx0d0 . P_187 + u_idx_0_tmp ) + ncjyyiy4or_idx_0 ; Fz_idx_1 = ( z1_data
/ u_idx_0_tmp_p / 2.0 + Fz_idx_1 ) * u_idx_0_tmp_e / ( becrktx0d0 . P_246 [ 0
] / 2.0 ) ; u_idx_0_tmp_p = becrktx0d0 . P_246 [ 1 ] / 2.0 - becrktx0d0 .
P_177 ; u_idx_0_tmp_e = becrktx0d0 . P_246 [ 1 ] / 2.0 + becrktx0d0 . P_177 ;
ldzdoaktef = ( ldzdoaktef / u_idx_0_tmp_e / 2.0 + huqtoo4ku1 ) *
u_idx_0_tmp_p / ( becrktx0d0 . P_246 [ 1 ] / 2.0 ) ; huqtoo4ku1 = ( z1_data /
u_idx_0_tmp_p / 2.0 + huqtoo4ku1 ) * u_idx_0_tmp_e / ( becrktx0d0 . P_246 [ 1
] / 2.0 ) ; if ( odhytzs2sq < 0.0 ) { odhytzs2sq = 0.0 ; } if ( Fz_idx_1 <
0.0 ) { Fz_idx_1 = 0.0 ; } if ( ldzdoaktef < 0.0 ) { ldzdoaktef = 0.0 ; } if
( huqtoo4ku1 < 0.0 ) { huqtoo4ku1 = 0.0 ; } } localB -> lb143o4zo2 [ 0 ] =
Fx_fl / becrktx0d0 . P_34 ; localB -> lb143o4zo2 [ 1 ] = Fy_fl / becrktx0d0 .
P_34 ; localB -> lb143o4zo2 [ 2 ] = odhytzs2sq / becrktx0d0 . P_34 ; localB
-> lb143o4zo2 [ 3 ] = Fx_fr / becrktx0d0 . P_34 ; localB -> lb143o4zo2 [ 4 ]
= Fy_fr / becrktx0d0 . P_34 ; localB -> lb143o4zo2 [ 5 ] = Fz_idx_1 /
becrktx0d0 . P_34 ; localB -> lb143o4zo2 [ 6 ] = Fx_rl / becrktx0d0 . P_39 ;
localB -> lb143o4zo2 [ 7 ] = Fy_rl / becrktx0d0 . P_39 ; localB -> lb143o4zo2
[ 8 ] = ldzdoaktef / becrktx0d0 . P_39 ; localB -> lb143o4zo2 [ 9 ] = Fx_rr /
becrktx0d0 . P_39 ; localB -> lb143o4zo2 [ 10 ] = Fy_rr / becrktx0d0 . P_39 ;
localB -> lb143o4zo2 [ 11 ] = huqtoo4ku1 / becrktx0d0 . P_39 ; localB ->
kh1nblrgqs [ 0 ] = xddot ; localB -> kh1nblrgqs [ 1 ] = yddot ; localB ->
kh1nblrgqs [ 2 ] = gexl04dl1m_idx_3 ; localB -> kh1nblrgqs [ 3 ] = rdot ; *
jr1ehl1zxa = ( gexl04dl1m_idx_0 * gexl04dl1m_idx_3 + yddot ) *
0.10197162129779282 ; eplypn1mx4 [ 3 ] = localX -> bmsz0qfwwr [ 1 ] +
nf2m5ypf5y [ 1 ] ; ebhsrqq1o4 [ 3 ] = localX -> bmsz0qfwwr [ 0 ] + nf2m5ypf5y
[ 0 ] ; * jhdgl4izoc = localX -> bmsz0qfwwr [ 0 ] ; * paxgty22h2 = localB ->
avc4qfob4e [ 0 ] ; * d45afs3uxn = localX -> bmsz0qfwwr [ 1 ] ; * ldkjetp0we =
localB -> avc4qfob4e [ 1 ] ; * e5f1z1hip1 = gexl04dl1m_idx_2 ; * eobrear1ct =
gexl04dl1m_idx_3 ; * lfffcfi0vv = gexl04dl1m_idx_0 ; * o4a5winsib =
gexl04dl1m_idx_1 ; if ( rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit (
hokadafud5 , 1 , 0 ) ) { g2tnztcpzi [ 0 ] = becrktx0d0 . P_479 [ 0 ] ;
g2tnztcpzi [ 1 ] = becrktx0d0 . P_479 [ 1 ] ; g2tnztcpzi [ 2 ] = becrktx0d0 .
P_479 [ 2 ] ; g2tnztcpzi [ 3 ] = becrktx0d0 . P_479 [ 3 ] ; } } void
ii3iorkudk ( pa50wxsaaa * const hokadafud5 , id4lpjcjia * localB , bpefjqedzq
* localDW ) { if ( rtmIsMajorTimeStep ( hokadafud5 ) ) { if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 0 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 0 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 0 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal [
0 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 0 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 0 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 1 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 1 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 1 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal [
1 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 1 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 1 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 2 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 2 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 2 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal [
2 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 2 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 2 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 3 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 3 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 3 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal [
3 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 3 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 3 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 4 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 4 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 4 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal [
4 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 4 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 4 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 5 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 5 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 5 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal [
5 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 5 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 5 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 6 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 6 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 6 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal [
6 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 6 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 6 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 7 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 7 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 7 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal [
7 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 7 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 7 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 8 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 8 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 8 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal [
8 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 8 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 8 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 9 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 9 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 9 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal [
9 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 9 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 9 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 10 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 10 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 10
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal
[ 10 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 10 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 10 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 11 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 11 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 11
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal
[ 11 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 11 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 11 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 12 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 12 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 12
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal
[ 12 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 12 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 12 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 13 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 13 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 13
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal
[ 13 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 13 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 13 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 14 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 14 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 14
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal
[ 14 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 14 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 14 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 15 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 15 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 15
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal
[ 15 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 15 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 15 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 16 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 16 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 16
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal
[ 16 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 16 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 16 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 17 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 17 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 17
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal
[ 17 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 17 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 17 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 18 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 18 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 18
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal
[ 18 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 18 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 18 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 19 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 19 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 19
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal
[ 19 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 19 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 19 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 20 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 20 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 20
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal
[ 20 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 20 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 20 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } if ( memcmp (
hokadafud5 -> nonContDerivSignal [ 21 ] . pCurrVal , hokadafud5 ->
nonContDerivSignal [ 21 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 21
] . sizeInBytes ) != 0 ) { ( void ) memcpy ( hokadafud5 -> nonContDerivSignal
[ 21 ] . pPrevVal , hokadafud5 -> nonContDerivSignal [ 21 ] . pCurrVal ,
hokadafud5 -> nonContDerivSignal [ 21 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( hokadafud5 -> _mdlRefSfcnS ) ; } } if (
rtmIsMajorTimeStep ( hokadafud5 ) && rtmIsSampleHit ( hokadafud5 , 1 , 0 ) )
{ localDW -> bzrcg4ekd2 = localB -> jsk5luwvju [ 0 ] ; localDW -> hx3dqme3j0
= localB -> jsk5luwvju [ 1 ] ; localDW -> hvodgxjjby = localB -> jsk5luwvju [
2 ] ; localDW -> h3znsdkf03 = localB -> f11ihjym5d [ 0 ] ; localDW ->
od03lov34i = localB -> f11ihjym5d [ 1 ] ; localDW -> js1pxba5c2 = localB ->
f11ihjym5d [ 2 ] ; localDW -> kear3lpxvq = localB -> b0z4gwmh4i [ 0 ] ;
localDW -> nhs2etlup5 = localB -> b0z4gwmh4i [ 1 ] ; localDW -> cpkkyluphr =
localB -> b0z4gwmh4i [ 2 ] ; localDW -> pd5cfi4ugv = localB -> hoyuoz4g0k [ 0
] ; localDW -> mk0ozmamcr = localB -> hoyuoz4g0k [ 1 ] ; localDW ->
l0dwzkeuuy = localB -> hoyuoz4g0k [ 2 ] ; localDW -> ncgxsvvru2 = localB ->
lb143o4zo2 [ 2 ] ; localDW -> m44z2pktlv = localB -> lb143o4zo2 [ 5 ] ;
localDW -> baajemjlf1 = localB -> lb143o4zo2 [ 8 ] ; localDW -> nag3iizhma =
localB -> lb143o4zo2 [ 11 ] ; } localDW -> kvj4uckeqc = 0 ; localDW ->
bokb5rvw5x = 0 ; } void iu231drtpw ( id4lpjcjia * localB , bpefjqedzq *
localDW , ha25zehowz * localXdot ) { localXdot -> l2hk3fgmlh [ 0 ] = localB
-> l1buwvww42 [ 0 ] ; localXdot -> l2hk3fgmlh [ 1 ] = localB -> l1buwvww42 [
1 ] ; localXdot -> l2hk3fgmlh [ 2 ] = localB -> l1buwvww42 [ 2 ] ; localXdot
-> l2hk3fgmlh [ 3 ] = localB -> l1buwvww42 [ 3 ] ; localXdot -> boq0sjomkz =
localB -> k5tf43ru55 ; gmtbryc4la ( 1 , & localB -> d33z0mbyhk , & localB ->
p2nljx3dbq , & localB -> cwma5eq5ke , localB -> lf15r5ane43 , localDW ->
lf15r5ane43 , localXdot -> lf15r5ane43 ) ; localXdot -> g4fxozrdb2 = localB
-> csv1tz3mo5 ; gmtbryc4la ( 1 , & localB -> k30er0vypb , & localB ->
gsndiu20vl , & localB -> fj3higzat4 , localB -> g2eyqylo5m , localDW ->
g2eyqylo5m , localXdot -> g2eyqylo5m ) ; localXdot -> i12d3wngfk = localB ->
m2qthtd2dk ; gmtbryc4la ( 1 , & localB -> mfblx2srrc , & localB -> dxpeamn3hy
, & localB -> hhhc50br05 , localB -> d22xfw4kpx , localDW -> d22xfw4kpx ,
localXdot -> d22xfw4kpx ) ; localXdot -> betxkjviha = localB -> l1v2ykrtac ;
gmtbryc4la ( 1 , & localB -> e1urxzmaq0 , & localB -> nbbgsqzccu , & localB
-> cohvkbnuuk , localB -> hzwxfzysvm , localDW -> hzwxfzysvm , localXdot ->
hzwxfzysvm ) ; localXdot -> n5tb00omor [ 0 ] = localB -> kh1nblrgqs [ 0 ] ;
localXdot -> n5tb00omor [ 1 ] = localB -> kh1nblrgqs [ 1 ] ; localXdot ->
n5tb00omor [ 2 ] = localB -> kh1nblrgqs [ 2 ] ; localXdot -> n5tb00omor [ 3 ]
= localB -> kh1nblrgqs [ 3 ] ; localXdot -> bmsz0qfwwr [ 0 ] = localB ->
avc4qfob4e [ 0 ] ; localXdot -> bmsz0qfwwr [ 1 ] = localB -> avc4qfob4e [ 1 ]
; } void pgy4d5vijx ( pa50wxsaaa * const hokadafud5 , id4lpjcjia * localB ,
bpefjqedzq * localDW , kg2zcpxtlx * localZCSV ) { ik0wvz4qgi ( 1 , hokadafud5
, & localB -> d33z0mbyhk , & localB -> p2nljx3dbq , & localB -> cwma5eq5ke ,
localB -> lf15r5ane43 , localDW -> lf15r5ane43 , & becrktx0d0 . lf15r5ane43 ,
localZCSV -> lf15r5ane43 , becrktx0d0 . P_172 , becrktx0d0 . P_163 ,
becrktx0d0 . P_150 ) ; ik0wvz4qgi ( 1 , hokadafud5 , & localB -> k30er0vypb ,
& localB -> gsndiu20vl , & localB -> fj3higzat4 , localB -> g2eyqylo5m ,
localDW -> g2eyqylo5m , & becrktx0d0 . g2eyqylo5m , localZCSV -> g2eyqylo5m ,
becrktx0d0 . P_173 , becrktx0d0 . P_164 , becrktx0d0 . P_151 ) ; ik0wvz4qgi (
1 , hokadafud5 , & localB -> mfblx2srrc , & localB -> dxpeamn3hy , & localB
-> hhhc50br05 , localB -> d22xfw4kpx , localDW -> d22xfw4kpx , & becrktx0d0 .
d22xfw4kpx , localZCSV -> d22xfw4kpx , becrktx0d0 . P_174 , becrktx0d0 .
P_165 , becrktx0d0 . P_152 ) ; ik0wvz4qgi ( 1 , hokadafud5 , & localB ->
e1urxzmaq0 , & localB -> nbbgsqzccu , & localB -> cohvkbnuuk , localB ->
hzwxfzysvm , localDW -> hzwxfzysvm , & becrktx0d0 . hzwxfzysvm , localZCSV ->
hzwxfzysvm , becrktx0d0 . P_175 , becrktx0d0 . P_166 , becrktx0d0 . P_153 ) ;
} void b51av3ulwn ( pa50wxsaaa * const hokadafud5 ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( hokadafud5 ->
_mdlRefSfcnS , "PassVeh7DOF" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" )
; } } void lahi4jyhaj ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , pa50wxsaaa * const hokadafud5 , id4lpjcjia
* localB , bpefjqedzq * localDW , hcqlainyez * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; becrktx0d0 . P_258 = rtInf ; becrktx0d0 . P_319 =
rtInf ; becrktx0d0 . P_366 = rtInf ; becrktx0d0 . P_413 = rtInf ; ( void )
memset ( ( void * ) hokadafud5 , 0 , sizeof ( pa50wxsaaa ) ) ; hokadafud5 ->
Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; hokadafud5 -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; hokadafud5 -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( hokadafud5 -> _mdlRefSfcnS , "PassVeh7DOF" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( id4lpjcjia ) ) ; { int32_T i ; for ( i = 0 ; i < 12
; i ++ ) { localB -> imq4m422ep [ i ] = 0.0 ; } for ( i = 0 ; i < 9 ; i ++ )
{ localB -> kagvflkv30 [ i ] = 0.0 ; } for ( i = 0 ; i < 9 ; i ++ ) { localB
-> de3gcclrpf [ i ] = 0.0 ; } for ( i = 0 ; i < 9 ; i ++ ) { localB ->
ogwmdf0uzr [ i ] = 0.0 ; } for ( i = 0 ; i < 9 ; i ++ ) { localB ->
okar031ivj [ i ] = 0.0 ; } for ( i = 0 ; i < 9 ; i ++ ) { localB ->
kf1zpwhh4b [ i ] = 0.0 ; } for ( i = 0 ; i < 9 ; i ++ ) { localB ->
krjpez4j44 [ i ] = 0.0 ; } for ( i = 0 ; i < 9 ; i ++ ) { localB ->
awixywbfuo [ i ] = 0.0 ; } for ( i = 0 ; i < 9 ; i ++ ) { localB ->
kieptjun4i [ i ] = 0.0 ; } for ( i = 0 ; i < 6 ; i ++ ) { localB ->
bhtsntdwoh [ i ] = 0.0 ; } for ( i = 0 ; i < 12 ; i ++ ) { localB ->
lb143o4zo2 [ i ] = 0.0 ; } for ( i = 0 ; i < 5 ; i ++ ) { localB ->
fbdb5pexuk . cngbrzew0c [ i ] = 0.0 ; } for ( i = 0 ; i < 34 ; i ++ ) {
localB -> fbdb5pexuk . kvxvdkvc3b [ i ] = 0.0 ; } for ( i = 0 ; i < 16 ; i ++
) { localB -> fbdb5pexuk . j2px0ljv0m [ i ] = 0.0 ; } for ( i = 0 ; i < 24 ;
i ++ ) { localB -> fbdb5pexuk . p4bflvewss [ i ] = 0.0 ; } for ( i = 0 ; i <
5 ; i ++ ) { localB -> i24h43uxd3 . cngbrzew0c [ i ] = 0.0 ; } for ( i = 0 ;
i < 34 ; i ++ ) { localB -> i24h43uxd3 . kvxvdkvc3b [ i ] = 0.0 ; } for ( i =
0 ; i < 16 ; i ++ ) { localB -> i24h43uxd3 . j2px0ljv0m [ i ] = 0.0 ; } for (
i = 0 ; i < 24 ; i ++ ) { localB -> i24h43uxd3 . p4bflvewss [ i ] = 0.0 ; }
for ( i = 0 ; i < 5 ; i ++ ) { localB -> dycowragfc . cngbrzew0c [ i ] = 0.0
; } for ( i = 0 ; i < 34 ; i ++ ) { localB -> dycowragfc . kvxvdkvc3b [ i ] =
0.0 ; } for ( i = 0 ; i < 16 ; i ++ ) { localB -> dycowragfc . j2px0ljv0m [ i
] = 0.0 ; } for ( i = 0 ; i < 24 ; i ++ ) { localB -> dycowragfc . p4bflvewss
[ i ] = 0.0 ; } for ( i = 0 ; i < 5 ; i ++ ) { localB -> f1abnn2ast .
cngbrzew0c [ i ] = 0.0 ; } for ( i = 0 ; i < 34 ; i ++ ) { localB ->
f1abnn2ast . kvxvdkvc3b [ i ] = 0.0 ; } for ( i = 0 ; i < 16 ; i ++ ) {
localB -> f1abnn2ast . j2px0ljv0m [ i ] = 0.0 ; } for ( i = 0 ; i < 24 ; i ++
) { localB -> f1abnn2ast . p4bflvewss [ i ] = 0.0 ; } localB -> kbexeitavt [
0 ] = 0.0 ; localB -> kbexeitavt [ 1 ] = 0.0 ; localB -> kbexeitavt [ 2 ] =
0.0 ; localB -> kbexeitavt [ 3 ] = 0.0 ; localB -> h5wh4b5rct = 0.0 ; localB
-> d33z0mbyhk = 0.0 ; localB -> d5szsmebdo = 0.0 ; localB -> bz31s42s1u = 0.0
; localB -> opkh3muany = 0.0 ; localB -> cwma5eq5ke = 0.0 ; localB ->
p2nljx3dbq = 0.0 ; localB -> ftaf4cxqll [ 0 ] = 0.0 ; localB -> ftaf4cxqll [
1 ] = 0.0 ; localB -> ftaf4cxqll [ 2 ] = 0.0 ; localB -> ftaf4cxqll [ 3 ] =
0.0 ; localB -> gaoeewqk5x = 0.0 ; localB -> cfkwlnof2v = 0.0 ; localB ->
cnco5gb5p4 = 0.0 ; localB -> d3cr0a5inc = 0.0 ; localB -> dii1opjuxw = 0.0 ;
localB -> kctb5ztf1e = 0.0 ; localB -> ke422y3bvs = 0.0 ; localB ->
fuuyvpusrs = 0.0 ; localB -> hpxyou1fxl = 0.0 ; localB -> joma1bywx4 = 0.0 ;
localB -> ns140f1t3p = 0.0 ; localB -> c3s1hqfkfr = 0.0 ; localB ->
iufwwlr0ge = 0.0 ; localB -> jsdlv222qc = 0.0 ; localB -> p24b3nl2wp = 0.0 ;
localB -> olixj4xtkl = 0.0 ; localB -> bbw5zyrrqz = 0.0 ; localB ->
ogp2hwtunx = 0.0 ; localB -> f01m4oosvg = 0.0 ; localB -> gx2tzcmrwe = 0.0 ;
localB -> obsb1m4u4l = 0.0 ; localB -> k11qglhlxp = 0.0 ; localB ->
ismgtq3zck = 0.0 ; localB -> mkkd4eqabm = 0.0 ; localB -> bf2kwgrinx = 0.0 ;
localB -> g2jaz2ry10 = 0.0 ; localB -> gbpcpgmhwi = 0.0 ; localB ->
jvgs2uru4k = 0.0 ; localB -> mi3utydr02 = 0.0 ; localB -> f3w3p2nxm4 = 0.0 ;
localB -> fbyp0wzxjv = 0.0 ; localB -> lvetekphxz = 0.0 ; localB ->
fg4jh2yypn = 0.0 ; localB -> julgzulrmc = 0.0 ; localB -> cvwzw1hfzy = 0.0 ;
localB -> bjklpb2rya = 0.0 ; localB -> kfd3ejtb1f = 0.0 ; localB ->
ons10a2rwj = 0.0 ; localB -> oexu5qniuy [ 0 ] = 0.0 ; localB -> oexu5qniuy [
1 ] = 0.0 ; localB -> oexu5qniuy [ 2 ] = 0.0 ; localB -> mstqxpzqfg [ 0 ] =
0.0 ; localB -> mstqxpzqfg [ 1 ] = 0.0 ; localB -> mstqxpzqfg [ 2 ] = 0.0 ;
localB -> hz1rwguwag = 0.0 ; localB -> jzgij4yhlc = 0.0 ; localB ->
ns1yn0d111 = 0.0 ; localB -> mtsri5oeit = 0.0 ; localB -> lpc02n3ntq = 0.0 ;
localB -> esav0j3his = 0.0 ; localB -> lnbbakkwsv = 0.0 ; localB ->
phlogjscto = 0.0 ; localB -> h0u3dlxfhh = 0.0 ; localB -> i3ympmozxc = 0.0 ;
localB -> kwyv52a2iq = 0.0 ; localB -> mrtivmxzok = 0.0 ; localB ->
oxh3shkcwr = 0.0 ; localB -> dqqylbxuq5 = 0.0 ; localB -> pwaomw2yrj = 0.0 ;
localB -> ddkghz2dmk [ 0 ] = 0.0 ; localB -> ddkghz2dmk [ 1 ] = 0.0 ; localB
-> ddkghz2dmk [ 2 ] = 0.0 ; localB -> f3z5ekoxpe [ 0 ] = 0.0 ; localB ->
f3z5ekoxpe [ 1 ] = 0.0 ; localB -> f3z5ekoxpe [ 2 ] = 0.0 ; localB ->
atndxdnoha = 0.0 ; localB -> o2cghmzchb = 0.0 ; localB -> bgytv1ipnn = 0.0 ;
localB -> ipcdka0rdk = 0.0 ; localB -> c3lbwtdvd0 = 0.0 ; localB ->
npitkxcqq2 = 0.0 ; localB -> gysfmmd0g3 = 0.0 ; localB -> b4q4rezl5q = 0.0 ;
localB -> glpg1q0zrp = 0.0 ; localB -> fsm4hj0yo3 = 0.0 ; localB ->
dilqq2ziew = 0.0 ; localB -> pkxrfmf4km = 0.0 ; localB -> g14qb1cf4b = 0.0 ;
localB -> cumr04c4lu = 0.0 ; localB -> cvybf3pb0o = 0.0 ; localB ->
bmhzwlmjce = 0.0 ; localB -> a0insx4qj4 = 0.0 ; localB -> imn5tyasnw = 0.0 ;
localB -> pcfnviw5ae = 0.0 ; localB -> o4fejfnl4y = 0.0 ; localB ->
o5r2t5nyti = 0.0 ; localB -> gj1iqu4vq3 = 0.0 ; localB -> gubs2kpup1 = 0.0 ;
localB -> hb3cv2fi41 = 0.0 ; localB -> mkkd545rnn = 0.0 ; localB ->
apmz02jse2 = 0.0 ; localB -> hesaewh1nb = 0.0 ; localB -> k30er0vypb = 0.0 ;
localB -> kv4swuqrzp = 0.0 ; localB -> k5vua1hg0r = 0.0 ; localB ->
n53jpn1qce = 0.0 ; localB -> fj3higzat4 = 0.0 ; localB -> gsndiu20vl = 0.0 ;
localB -> ba0ld5sik1 = 0.0 ; localB -> cub55shpyy = 0.0 ; localB ->
admeqoujcv = 0.0 ; localB -> hfhahdak4j = 0.0 ; localB -> jave5yanub = 0.0 ;
localB -> hydfzxc1qw = 0.0 ; localB -> gjjpikelm0 = 0.0 ; localB ->
ifrllhbun4 = 0.0 ; localB -> k3bhiqv4ab = 0.0 ; localB -> jmkkmaikcr = 0.0 ;
localB -> hj3pfrn0ic = 0.0 ; localB -> jhnjiazapj = 0.0 ; localB ->
dzbahowvuv = 0.0 ; localB -> gzqzv2jn3n = 0.0 ; localB -> frpicsct0d = 0.0 ;
localB -> obk1sfjkrp = 0.0 ; localB -> cf3brbnk05 = 0.0 ; localB ->
g5d12pto5p = 0.0 ; localB -> nm5yy52fdt = 0.0 ; localB -> fockx2e1oo = 0.0 ;
localB -> jiseemzgoj = 0.0 ; localB -> gr04nqocvw = 0.0 ; localB ->
ddj1fithyg = 0.0 ; localB -> j3vo1m3qkh = 0.0 ; localB -> cqusxcow01 = 0.0 ;
localB -> kdvyxjauqy = 0.0 ; localB -> ogkxlqn0ly = 0.0 ; localB ->
mocljcsb0l = 0.0 ; localB -> jwi0ilfhab = 0.0 ; localB -> dtbhvrzq1j = 0.0 ;
localB -> ahcnv4kv2y = 0.0 ; localB -> gpj11f5vfk = 0.0 ; localB ->
hjtogq12op = 0.0 ; localB -> kt3crarmz2 = 0.0 ; localB -> iss5uqc4oh = 0.0 ;
localB -> npf0ptc4p1 = 0.0 ; localB -> i5nks3ee35 = 0.0 ; localB ->
olljvthm5q [ 0 ] = 0.0 ; localB -> olljvthm5q [ 1 ] = 0.0 ; localB ->
olljvthm5q [ 2 ] = 0.0 ; localB -> itsa2d3ctl [ 0 ] = 0.0 ; localB ->
itsa2d3ctl [ 1 ] = 0.0 ; localB -> itsa2d3ctl [ 2 ] = 0.0 ; localB ->
bmc0r01xwr = 0.0 ; localB -> cxzcjkmj54 = 0.0 ; localB -> am3a3q2vdm = 0.0 ;
localB -> ncyqy0yu1h = 0.0 ; localB -> fbx3ttcelh = 0.0 ; localB ->
ph2yn2vowk = 0.0 ; localB -> f5yw0whn1p = 0.0 ; localB -> mpfonz5yz3 = 0.0 ;
localB -> nrag1moweu = 0.0 ; localB -> hzazvjwjyl = 0.0 ; localB ->
ihbutzjchr = 0.0 ; localB -> ogpxhmlkj2 = 0.0 ; localB -> aols2kz0cw = 0.0 ;
localB -> caxemhiem2 = 0.0 ; localB -> h5c0akz3b0 = 0.0 ; localB ->
fh5o3hjnn4 [ 0 ] = 0.0 ; localB -> fh5o3hjnn4 [ 1 ] = 0.0 ; localB ->
fh5o3hjnn4 [ 2 ] = 0.0 ; localB -> csi1vdg0u4 [ 0 ] = 0.0 ; localB ->
csi1vdg0u4 [ 1 ] = 0.0 ; localB -> csi1vdg0u4 [ 2 ] = 0.0 ; localB ->
km5fhe0gnv = 0.0 ; localB -> b3ysg2oisu = 0.0 ; localB -> mbyyukadlc = 0.0 ;
localB -> btnqxxqvbk = 0.0 ; localB -> e2vyxvqumc = 0.0 ; localB ->
biv4pqjbsb = 0.0 ; localB -> pqxcjr4w14 = 0.0 ; localB -> auyhxb2a4z = 0.0 ;
localB -> eucevkyrvu = 0.0 ; localB -> mm2332ncmt = 0.0 ; localB ->
cqk3cfqgxq = 0.0 ; localB -> h3uwlqjqg4 = 0.0 ; localB -> fiowcjrj00 = 0.0 ;
localB -> bnbgtownki = 0.0 ; localB -> jqa5jx145u = 0.0 ; localB ->
l4lqosbi0l = 0.0 ; localB -> htzr5zrjqm = 0.0 ; localB -> kxof5m5sk5 = 0.0 ;
localB -> lhdwcfxppe = 0.0 ; localB -> iczvf5zaaa = 0.0 ; localB ->
hfbgp15dhh = 0.0 ; localB -> ppdns1mxw2 = 0.0 ; localB -> cbzncau3rp = 0.0 ;
localB -> gjifpqqgt0 = 0.0 ; localB -> ck21m4ewez = 0.0 ; localB ->
dfj3e5gry1 = 0.0 ; localB -> g1pa1tegyz = 0.0 ; localB -> mfblx2srrc = 0.0 ;
localB -> bfpipbo4us = 0.0 ; localB -> j2swsz0urn = 0.0 ; localB ->
gcyfeyhaz1 = 0.0 ; localB -> hhhc50br05 = 0.0 ; localB -> dxpeamn3hy = 0.0 ;
localB -> foidnpo0oq = 0.0 ; localB -> ayhcndhlu0 = 0.0 ; localB ->
iy5hfoisnh = 0.0 ; localB -> hvqnttiddu = 0.0 ; localB -> fhd4tw3lqf = 0.0 ;
localB -> mh1rri0s1r = 0.0 ; localB -> p50mqehgj2 = 0.0 ; localB ->
n2dth3maot = 0.0 ; localB -> p2zqzg0hdx = 0.0 ; localB -> ghocmfp3xl = 0.0 ;
localB -> b0iwqa1a5h = 0.0 ; localB -> nrv0gankso = 0.0 ; localB ->
konnlipgzj = 0.0 ; localB -> pox1w1uosi = 0.0 ; localB -> ch20ki1ox4 = 0.0 ;
localB -> hzyod14crr = 0.0 ; localB -> ofl5o4i551 = 0.0 ; localB ->
ncdmeuoier = 0.0 ; localB -> dfyhgivb3s = 0.0 ; localB -> nazhgfr5nl = 0.0 ;
localB -> lc2piclprf = 0.0 ; localB -> ltgrpu3l4q = 0.0 ; localB ->
p2b1rccb34 = 0.0 ; localB -> lwb33yxaj2 = 0.0 ; localB -> h4ppx2rq3w = 0.0 ;
localB -> dshvak0l0t = 0.0 ; localB -> gu4axrtwrg = 0.0 ; localB ->
moxt0psems = 0.0 ; localB -> mbwmesteyr = 0.0 ; localB -> p012a231oc = 0.0 ;
localB -> mwy3qoplw4 = 0.0 ; localB -> itz0cpq0ou = 0.0 ; localB ->
lerala1r0i = 0.0 ; localB -> jb3ei4i5jp = 0.0 ; localB -> cxto45s3l2 = 0.0 ;
localB -> b3pltw4d0f = 0.0 ; localB -> ajq4ib3z4q = 0.0 ; localB ->
dkzgnds2he [ 0 ] = 0.0 ; localB -> dkzgnds2he [ 1 ] = 0.0 ; localB ->
dkzgnds2he [ 2 ] = 0.0 ; localB -> igmssod5aw [ 0 ] = 0.0 ; localB ->
igmssod5aw [ 1 ] = 0.0 ; localB -> igmssod5aw [ 2 ] = 0.0 ; localB ->
nfugqxwdby = 0.0 ; localB -> ck02uwdqxw = 0.0 ; localB -> f2neh4sudt = 0.0 ;
localB -> ngdktndyrj = 0.0 ; localB -> js1tlkukyv = 0.0 ; localB ->
gt0zjjnrzw = 0.0 ; localB -> afg2asvxic = 0.0 ; localB -> pwzktwzfnp = 0.0 ;
localB -> nyijyqxduk = 0.0 ; localB -> nvdwbnmtpb = 0.0 ; localB ->
c2oxnm12uw = 0.0 ; localB -> n5prl5hqtx = 0.0 ; localB -> mjh54inqdn = 0.0 ;
localB -> aqlfp0saei = 0.0 ; localB -> caw3ndnhbd = 0.0 ; localB ->
cd2fs5ehmc [ 0 ] = 0.0 ; localB -> cd2fs5ehmc [ 1 ] = 0.0 ; localB ->
cd2fs5ehmc [ 2 ] = 0.0 ; localB -> bkuftmabbw [ 0 ] = 0.0 ; localB ->
bkuftmabbw [ 1 ] = 0.0 ; localB -> bkuftmabbw [ 2 ] = 0.0 ; localB ->
kauangfpz2 = 0.0 ; localB -> ic0iaiqfjv = 0.0 ; localB -> nauzowwkur = 0.0 ;
localB -> ktxbr2qn24 = 0.0 ; localB -> imih2mhusj = 0.0 ; localB ->
bb1nk0llvq = 0.0 ; localB -> oi1h5qg1nu = 0.0 ; localB -> lhkjmqfwms = 0.0 ;
localB -> moonpo1qpg = 0.0 ; localB -> cuu54cqr5x = 0.0 ; localB ->
nkimsrvhv0 = 0.0 ; localB -> ab5d4ujsnv = 0.0 ; localB -> ouuwsyssnc = 0.0 ;
localB -> g1ni03prm0 = 0.0 ; localB -> mxyh3y0fqs = 0.0 ; localB ->
lczmfdcnj1 = 0.0 ; localB -> mygyc4cuhm = 0.0 ; localB -> dp1b4412au = 0.0 ;
localB -> kupsc2ix3y = 0.0 ; localB -> gvtptbywt1 = 0.0 ; localB ->
efwt4j5usk = 0.0 ; localB -> p30bk3v314 = 0.0 ; localB -> pgnkahl1ya = 0.0 ;
localB -> ldhgong4mk = 0.0 ; localB -> mzqfye00vu = 0.0 ; localB ->
bpsd43fx4l = 0.0 ; localB -> ftkrxmz2gl = 0.0 ; localB -> e1urxzmaq0 = 0.0 ;
localB -> pzvvahdijo = 0.0 ; localB -> ba3eebeu23 = 0.0 ; localB ->
ajlesncb5s = 0.0 ; localB -> cohvkbnuuk = 0.0 ; localB -> nbbgsqzccu = 0.0 ;
localB -> hi0pegbdyc = 0.0 ; localB -> bcaoqtity3 = 0.0 ; localB ->
hvepbvdr32 = 0.0 ; localB -> m2rztfpqle = 0.0 ; localB -> jy4skpqqza = 0.0 ;
localB -> niwe0per3h = 0.0 ; localB -> nwjplc5kqb = 0.0 ; localB ->
ljz3ikjllu = 0.0 ; localB -> jybjfieadv = 0.0 ; localB -> ahkepbzhuv = 0.0 ;
localB -> mjwgioxasa = 0.0 ; localB -> apo4noaele = 0.0 ; localB ->
bs5ayvcsk0 = 0.0 ; localB -> iqkqeqrnd5 = 0.0 ; localB -> mcr41djdeb = 0.0 ;
localB -> nd50pzk0ym = 0.0 ; localB -> mekhgj4dmz = 0.0 ; localB ->
ekt1rzqyam = 0.0 ; localB -> o0xjpkriin = 0.0 ; localB -> do3if2olyh = 0.0 ;
localB -> btx3kvx2ih = 0.0 ; localB -> e1ufkioyxf = 0.0 ; localB ->
ar0tmceeba = 0.0 ; localB -> aggsae520q = 0.0 ; localB -> iwxicjhyqf = 0.0 ;
localB -> bnsxmpvh0w = 0.0 ; localB -> egxcf2r42j = 0.0 ; localB ->
ag332kqdvc = 0.0 ; localB -> kmm51olbtz = 0.0 ; localB -> d4xe44ovvq = 0.0 ;
localB -> kbvh3hrm4f = 0.0 ; localB -> bkluqrodja = 0.0 ; localB ->
ggmwi1oklo = 0.0 ; localB -> dty4d52ply = 0.0 ; localB -> mi4ly2orqs = 0.0 ;
localB -> nkm02g5azg = 0.0 ; localB -> b2ahrn1m5z = 0.0 ; localB ->
fraaz4lots [ 0 ] = 0.0 ; localB -> fraaz4lots [ 1 ] = 0.0 ; localB ->
fraaz4lots [ 2 ] = 0.0 ; localB -> pnn2p0abyz [ 0 ] = 0.0 ; localB ->
pnn2p0abyz [ 1 ] = 0.0 ; localB -> pnn2p0abyz [ 2 ] = 0.0 ; localB ->
b3kmb4trgj = 0.0 ; localB -> deukthg15z = 0.0 ; localB -> or1pmiehbm = 0.0 ;
localB -> gjenvtggot = 0.0 ; localB -> cbphg11o4k = 0.0 ; localB ->
l4brhjoncl = 0.0 ; localB -> dhk4cumhug = 0.0 ; localB -> o3uc3arohm = 0.0 ;
localB -> bs5oyflpc4 = 0.0 ; localB -> biudufsugi = 0.0 ; localB ->
jwvrvmpniz = 0.0 ; localB -> mavol2x2ye = 0.0 ; localB -> pge4rqmuym = 0.0 ;
localB -> mjnitjatxg = 0.0 ; localB -> aco4ypxfsm = 0.0 ; localB ->
hjzs3f2f4p [ 0 ] = 0.0 ; localB -> hjzs3f2f4p [ 1 ] = 0.0 ; localB ->
hjzs3f2f4p [ 2 ] = 0.0 ; localB -> pmmrxnudo1 [ 0 ] = 0.0 ; localB ->
pmmrxnudo1 [ 1 ] = 0.0 ; localB -> pmmrxnudo1 [ 2 ] = 0.0 ; localB ->
c4spjjrnou = 0.0 ; localB -> lc1hxdornj = 0.0 ; localB -> eonipvj1k0 = 0.0 ;
localB -> bbbhu0swkp = 0.0 ; localB -> hcxjtuo55z = 0.0 ; localB ->
gnpc1bj2np = 0.0 ; localB -> muroenhlxx = 0.0 ; localB -> nbxvmo3lgk = 0.0 ;
localB -> icol2u0fpg = 0.0 ; localB -> euccxm0qrg = 0.0 ; localB ->
fzjncdftut = 0.0 ; localB -> a5ldoidwqe = 0.0 ; localB -> flsml1nkv1 = 0.0 ;
localB -> hn3qcfzdqi = 0.0 ; localB -> jcpawmwg3g = 0.0 ; localB ->
kpc1dliopx = 0.0 ; localB -> na5nhpz2m2 = 0.0 ; localB -> deyxiewxuk = 0.0 ;
localB -> pyldnrbuod = 0.0 ; localB -> irvwz5wovb = 0.0 ; localB ->
avwnhpgxj1 = 0.0 ; localB -> fw2rrhfwt2 = 0.0 ; localB -> ogqbn0zua1 = 0.0 ;
localB -> e40b3h5ffu = 0.0 ; localB -> nf4jsbi5wr = 0.0 ; localB ->
pkyhejy0vp = 0.0 ; localB -> bj5ypscq0g = 0.0 ; localB -> oo2du3h4oj = 0.0 ;
localB -> mw4grvy22m = 0.0 ; localB -> k5tf43ru55 = 0.0 ; localB ->
ptxv211opk = 0.0 ; localB -> ntxmyrdcci = 0.0 ; localB -> l1fgxh5rmu = 0.0 ;
localB -> csv1tz3mo5 = 0.0 ; localB -> o2v1omqp5o = 0.0 ; localB ->
fug3ylqa5c = 0.0 ; localB -> eu0prsnkho = 0.0 ; localB -> m2qthtd2dk = 0.0 ;
localB -> n5naxrnqpp = 0.0 ; localB -> lvdk5yc0vx = 0.0 ; localB ->
d4xbfidkhy = 0.0 ; localB -> l1v2ykrtac = 0.0 ; localB -> etnalojlqn = 0.0 ;
localB -> jyhyy5jhuv [ 0 ] = 0.0 ; localB -> jyhyy5jhuv [ 1 ] = 0.0 ; localB
-> jyhyy5jhuv [ 2 ] = 0.0 ; localB -> jyhyy5jhuv [ 3 ] = 0.0 ; localB ->
l1buwvww42 [ 0 ] = 0.0 ; localB -> l1buwvww42 [ 1 ] = 0.0 ; localB ->
l1buwvww42 [ 2 ] = 0.0 ; localB -> l1buwvww42 [ 3 ] = 0.0 ; localB ->
laszgf0kuz [ 0 ] = 0.0 ; localB -> laszgf0kuz [ 1 ] = 0.0 ; localB ->
laszgf0kuz [ 2 ] = 0.0 ; localB -> laszgf0kuz [ 3 ] = 0.0 ; localB ->
pnnunnvv1j [ 0 ] = 0.0 ; localB -> pnnunnvv1j [ 1 ] = 0.0 ; localB ->
pnnunnvv1j [ 2 ] = 0.0 ; localB -> gsskq4zyxa [ 0 ] = 0.0 ; localB ->
gsskq4zyxa [ 1 ] = 0.0 ; localB -> gsskq4zyxa [ 2 ] = 0.0 ; localB ->
d3ffw0bqsw = 0.0 ; localB -> iervwtn0w5 = 0.0 ; localB -> pozrpcw3rm = 0.0 ;
localB -> kyrnjux3iw [ 0 ] = 0.0 ; localB -> kyrnjux3iw [ 1 ] = 0.0 ; localB
-> huii2aaokv [ 0 ] = 0.0 ; localB -> huii2aaokv [ 1 ] = 0.0 ; localB ->
p1hnofbqbf [ 0 ] = 0.0 ; localB -> p1hnofbqbf [ 1 ] = 0.0 ; localB ->
j3goyfyj54 [ 0 ] = 0.0 ; localB -> j3goyfyj54 [ 1 ] = 0.0 ; localB ->
j3goyfyj54 [ 2 ] = 0.0 ; localB -> ow2xlzwlpr = 0.0 ; localB -> idd2bdwvig =
0.0 ; localB -> nd5yaadfjn = 0.0 ; localB -> phtmvwm1qm = 0.0 ; localB ->
ib54sd0pej = 0.0 ; localB -> jsk5luwvju [ 0 ] = 0.0 ; localB -> jsk5luwvju [
1 ] = 0.0 ; localB -> jsk5luwvju [ 2 ] = 0.0 ; localB -> n4g0nfc4au [ 0 ] =
0.0 ; localB -> n4g0nfc4au [ 1 ] = 0.0 ; localB -> n4g0nfc4au [ 2 ] = 0.0 ;
localB -> m5swi44apm = 0.0 ; localB -> prlujidgvs = 0.0 ; localB ->
nrjbcbkraq = 0.0 ; localB -> enb3lqwiyx = 0.0 ; localB -> f11ihjym5d [ 0 ] =
0.0 ; localB -> f11ihjym5d [ 1 ] = 0.0 ; localB -> f11ihjym5d [ 2 ] = 0.0 ;
localB -> ponlrrdraj [ 0 ] = 0.0 ; localB -> ponlrrdraj [ 1 ] = 0.0 ; localB
-> ponlrrdraj [ 2 ] = 0.0 ; localB -> ecbos4qscr = 0.0 ; localB -> aunggg41b5
= 0.0 ; localB -> phf53zkp1e = 0.0 ; localB -> f4g2t0avbl = 0.0 ; localB ->
b0z4gwmh4i [ 0 ] = 0.0 ; localB -> b0z4gwmh4i [ 1 ] = 0.0 ; localB ->
b0z4gwmh4i [ 2 ] = 0.0 ; localB -> a5sij35bll [ 0 ] = 0.0 ; localB ->
a5sij35bll [ 1 ] = 0.0 ; localB -> a5sij35bll [ 2 ] = 0.0 ; localB ->
pc1zej1xix = 0.0 ; localB -> jamoyndfv0 = 0.0 ; localB -> csiqu2egxv = 0.0 ;
localB -> c0aneq0jso = 0.0 ; localB -> hoyuoz4g0k [ 0 ] = 0.0 ; localB ->
hoyuoz4g0k [ 1 ] = 0.0 ; localB -> hoyuoz4g0k [ 2 ] = 0.0 ; localB ->
oxc1mfwz5g [ 0 ] = 0.0 ; localB -> oxc1mfwz5g [ 1 ] = 0.0 ; localB ->
kh1nblrgqs [ 0 ] = 0.0 ; localB -> kh1nblrgqs [ 1 ] = 0.0 ; localB ->
kh1nblrgqs [ 2 ] = 0.0 ; localB -> kh1nblrgqs [ 3 ] = 0.0 ; localB ->
avc4qfob4e [ 0 ] = 0.0 ; localB -> avc4qfob4e [ 1 ] = 0.0 ; localB ->
d0bzowv2xg [ 0 ] = 0.0 ; localB -> d0bzowv2xg [ 1 ] = 0.0 ; localB ->
d0bzowv2xg [ 2 ] = 0.0 ; localB -> d0bzowv2xg [ 3 ] = 0.0 ; localB ->
lg2haxd3ng = 0.0 ; localB -> da1axvglkx = 0.0 ; localB -> nabgbcf5q2 = 0.0 ;
localB -> ohauu0whxn = 0.0 ; localB -> fbdb5pexuk . dbw42rwkve = 0.0 ; localB
-> fbdb5pexuk . imuoerh5jm = 0.0 ; localB -> i24h43uxd3 . dbw42rwkve = 0.0 ;
localB -> i24h43uxd3 . imuoerh5jm = 0.0 ; localB -> dycowragfc . dbw42rwkve =
0.0 ; localB -> dycowragfc . imuoerh5jm = 0.0 ; localB -> f1abnn2ast .
dbw42rwkve = 0.0 ; localB -> f1abnn2ast . imuoerh5jm = 0.0 ; } ( void )
memset ( ( void * ) localDW , 0 , sizeof ( bpefjqedzq ) ) ; localDW ->
bzrcg4ekd2 = 0.0 ; localDW -> hx3dqme3j0 = 0.0 ; localDW -> hvodgxjjby = 0.0
; localDW -> h3znsdkf03 = 0.0 ; localDW -> od03lov34i = 0.0 ; localDW ->
js1pxba5c2 = 0.0 ; localDW -> kear3lpxvq = 0.0 ; localDW -> nhs2etlup5 = 0.0
; localDW -> cpkkyluphr = 0.0 ; localDW -> pd5cfi4ugv = 0.0 ; localDW ->
mk0ozmamcr = 0.0 ; localDW -> l0dwzkeuuy = 0.0 ; localDW -> ncgxsvvru2 = 0.0
; localDW -> m44z2pktlv = 0.0 ; localDW -> baajemjlf1 = 0.0 ; localDW ->
nag3iizhma = 0.0 ; PassVeh7DOF_InitializeDataMapInfo ( hokadafud5 , localDW ,
localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( hokadafud5 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
hokadafud5 -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( hokadafud5 -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } hokadafud5 -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig0 ; hokadafud5 ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 2 * sizeof ( real_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> oxc1mfwz5g [ 0 ] ) ; ; hokadafud5 -> nonContDerivSignal [ 1 ] . pPrevVal =
( char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig1 ; hokadafud5
-> nonContDerivSignal [ 1 ] . sizeInBytes = ( 2 * sizeof ( real_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> huii2aaokv [ 0 ] ) ; ; hokadafud5 -> nonContDerivSignal [ 2 ] . pPrevVal =
( char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig2 ; hokadafud5
-> nonContDerivSignal [ 2 ] . sizeInBytes = ( 2 * sizeof ( real_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 2 ] . pCurrVal = ( char_T * ) ( & localB
-> kyrnjux3iw [ 0 ] ) ; ; hokadafud5 -> nonContDerivSignal [ 3 ] . pPrevVal =
( char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig3 ; hokadafud5
-> nonContDerivSignal [ 3 ] . sizeInBytes = ( 3 * sizeof ( real_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 3 ] . pCurrVal = ( char_T * ) ( & localB
-> gsskq4zyxa [ 0 ] ) ; ; hokadafud5 -> nonContDerivSignal [ 4 ] . pPrevVal =
( char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig4 ; hokadafud5
-> nonContDerivSignal [ 4 ] . sizeInBytes = ( 4 * sizeof ( real_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 4 ] . pCurrVal = ( char_T * ) ( & localB
-> jyhyy5jhuv [ 0 ] ) ; ; hokadafud5 -> nonContDerivSignal [ 5 ] . pPrevVal =
( char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig5 ; hokadafud5
-> nonContDerivSignal [ 5 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 5 ] . pCurrVal = ( char_T * ) ( & localB
-> ba3eebeu23 ) ; ; hokadafud5 -> nonContDerivSignal [ 6 ] . pPrevVal = (
char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig6 ; hokadafud5 ->
nonContDerivSignal [ 6 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 6 ] . pCurrVal = ( char_T * ) ( & localB
-> ftkrxmz2gl ) ; ; hokadafud5 -> nonContDerivSignal [ 7 ] . pPrevVal = (
char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig7 ; hokadafud5 ->
nonContDerivSignal [ 7 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 7 ] . pCurrVal = ( char_T * ) ( & localB
-> j2swsz0urn ) ; ; hokadafud5 -> nonContDerivSignal [ 8 ] . pPrevVal = (
char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig8 ; hokadafud5 ->
nonContDerivSignal [ 8 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 8 ] . pCurrVal = ( char_T * ) ( & localB
-> g1pa1tegyz ) ; ; hokadafud5 -> nonContDerivSignal [ 9 ] . pPrevVal = (
char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig9 ; hokadafud5 ->
nonContDerivSignal [ 9 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 9 ] . pCurrVal = ( char_T * ) ( & localB
-> k5vua1hg0r ) ; ; hokadafud5 -> nonContDerivSignal [ 10 ] . pPrevVal = (
char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig10 ; hokadafud5 ->
nonContDerivSignal [ 10 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 10 ] . pCurrVal = ( char_T * ) ( & localB
-> hesaewh1nb ) ; ; hokadafud5 -> nonContDerivSignal [ 11 ] . pPrevVal = (
char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig11 ; hokadafud5 ->
nonContDerivSignal [ 11 ] . sizeInBytes = ( 12 * sizeof ( real_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 11 ] . pCurrVal = ( char_T * ) ( & localB
-> imq4m422ep [ 0 ] ) ; ; hokadafud5 -> nonContDerivSignal [ 12 ] . pPrevVal
= ( char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig12 ;
hokadafud5 -> nonContDerivSignal [ 12 ] . sizeInBytes = ( 1 * sizeof ( real_T
) ) ; hokadafud5 -> nonContDerivSignal [ 12 ] . pCurrVal = ( char_T * ) ( &
localB -> bz31s42s1u ) ; ; hokadafud5 -> nonContDerivSignal [ 13 ] . pPrevVal
= ( char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig13 ;
hokadafud5 -> nonContDerivSignal [ 13 ] . sizeInBytes = ( 1 * sizeof ( real_T
) ) ; hokadafud5 -> nonContDerivSignal [ 13 ] . pCurrVal = ( char_T * ) ( &
localB -> h5wh4b5rct ) ; ; hokadafud5 -> nonContDerivSignal [ 14 ] . pPrevVal
= ( char_T * ) hokadafud5 -> NonContDerivMemory . mr_nonContSig14 ;
hokadafud5 -> nonContDerivSignal [ 14 ] . sizeInBytes = ( 1 * sizeof (
boolean_T ) ) ; hokadafud5 -> nonContDerivSignal [ 14 ] . pCurrVal = ( char_T
* ) ( & localB -> hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . p2j1wfi3wc ) ;
; hokadafud5 -> nonContDerivSignal [ 15 ] . pPrevVal = ( char_T * )
hokadafud5 -> NonContDerivMemory . mr_nonContSig15 ; hokadafud5 ->
nonContDerivSignal [ 15 ] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ;
hokadafud5 -> nonContDerivSignal [ 15 ] . pCurrVal = ( char_T * ) ( & localB
-> hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . az52kqlyve ) ; ; hokadafud5
-> nonContDerivSignal [ 16 ] . pPrevVal = ( char_T * ) hokadafud5 ->
NonContDerivMemory . mr_nonContSig16 ; hokadafud5 -> nonContDerivSignal [ 16
] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; hokadafud5 ->
nonContDerivSignal [ 16 ] . pCurrVal = ( char_T * ) ( & localB -> d22xfw4kpx
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . p2j1wfi3wc ) ; ; hokadafud5 ->
nonContDerivSignal [ 17 ] . pPrevVal = ( char_T * ) hokadafud5 ->
NonContDerivMemory . mr_nonContSig17 ; hokadafud5 -> nonContDerivSignal [ 17
] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; hokadafud5 ->
nonContDerivSignal [ 17 ] . pCurrVal = ( char_T * ) ( & localB -> d22xfw4kpx
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . az52kqlyve ) ; ; hokadafud5 ->
nonContDerivSignal [ 18 ] . pPrevVal = ( char_T * ) hokadafud5 ->
NonContDerivMemory . mr_nonContSig18 ; hokadafud5 -> nonContDerivSignal [ 18
] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; hokadafud5 ->
nonContDerivSignal [ 18 ] . pCurrVal = ( char_T * ) ( & localB -> g2eyqylo5m
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . p2j1wfi3wc ) ; ; hokadafud5 ->
nonContDerivSignal [ 19 ] . pPrevVal = ( char_T * ) hokadafud5 ->
NonContDerivMemory . mr_nonContSig19 ; hokadafud5 -> nonContDerivSignal [ 19
] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; hokadafud5 ->
nonContDerivSignal [ 19 ] . pCurrVal = ( char_T * ) ( & localB -> g2eyqylo5m
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . az52kqlyve ) ; ; hokadafud5 ->
nonContDerivSignal [ 20 ] . pPrevVal = ( char_T * ) hokadafud5 ->
NonContDerivMemory . mr_nonContSig20 ; hokadafud5 -> nonContDerivSignal [ 20
] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; hokadafud5 ->
nonContDerivSignal [ 20 ] . pCurrVal = ( char_T * ) ( & localB -> lf15r5ane43
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . p2j1wfi3wc ) ; ; hokadafud5 ->
nonContDerivSignal [ 21 ] . pPrevVal = ( char_T * ) hokadafud5 ->
NonContDerivMemory . mr_nonContSig21 ; hokadafud5 -> nonContDerivSignal [ 21
] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; hokadafud5 ->
nonContDerivSignal [ 21 ] . pCurrVal = ( char_T * ) ( & localB -> lf15r5ane43
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . az52kqlyve ) ; ; if ( mr_nonContOutputArray
[ 13 ] != ( NULL ) ) { mr_nonContOutputArray [ 13 ] [ 0 ] . sizeInBytes = 1 *
sizeof ( real_T ) ; mr_nonContOutputArray [ 13 ] [ 0 ] . currVal = ( char_T *
) & localB -> ba3eebeu23 ; mr_nonContOutputArray [ 13 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 13 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 13 ] !=
( NULL ) ) { mr_nonContOutputArray [ 13 ] [ 1 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 13 ] [ 1 ] . currVal = ( char_T * ) &
localB -> ftkrxmz2gl ; mr_nonContOutputArray [ 13 ] [ 1 ] . next = & (
mr_nonContOutputArray [ 13 ] [ 2 ] ) ; } if ( mr_nonContOutputArray [ 13 ] !=
( NULL ) ) { mr_nonContOutputArray [ 13 ] [ 2 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 13 ] [ 2 ] . currVal = ( char_T * ) &
localB -> j2swsz0urn ; mr_nonContOutputArray [ 13 ] [ 2 ] . next = & (
mr_nonContOutputArray [ 13 ] [ 3 ] ) ; } if ( mr_nonContOutputArray [ 13 ] !=
( NULL ) ) { mr_nonContOutputArray [ 13 ] [ 3 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 13 ] [ 3 ] . currVal = ( char_T * ) &
localB -> g1pa1tegyz ; mr_nonContOutputArray [ 13 ] [ 3 ] . next = & (
mr_nonContOutputArray [ 13 ] [ 4 ] ) ; } if ( mr_nonContOutputArray [ 13 ] !=
( NULL ) ) { mr_nonContOutputArray [ 13 ] [ 4 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 13 ] [ 4 ] . currVal = ( char_T * ) &
localB -> k5vua1hg0r ; mr_nonContOutputArray [ 13 ] [ 4 ] . next = & (
mr_nonContOutputArray [ 13 ] [ 5 ] ) ; } if ( mr_nonContOutputArray [ 13 ] !=
( NULL ) ) { mr_nonContOutputArray [ 13 ] [ 5 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 13 ] [ 5 ] . currVal = ( char_T * ) &
localB -> hesaewh1nb ; mr_nonContOutputArray [ 13 ] [ 5 ] . next = & (
mr_nonContOutputArray [ 13 ] [ 6 ] ) ; } if ( mr_nonContOutputArray [ 13 ] !=
( NULL ) ) { mr_nonContOutputArray [ 13 ] [ 6 ] . sizeInBytes = 12 * sizeof (
real_T ) ; mr_nonContOutputArray [ 13 ] [ 6 ] . currVal = ( char_T * ) &
localB -> imq4m422ep [ 0 ] ; mr_nonContOutputArray [ 13 ] [ 6 ] . next = & (
mr_nonContOutputArray [ 13 ] [ 7 ] ) ; } if ( mr_nonContOutputArray [ 13 ] !=
( NULL ) ) { mr_nonContOutputArray [ 13 ] [ 7 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 13 ] [ 7 ] . currVal = ( char_T * ) &
localB -> bz31s42s1u ; mr_nonContOutputArray [ 13 ] [ 7 ] . next = & (
mr_nonContOutputArray [ 13 ] [ 8 ] ) ; } if ( mr_nonContOutputArray [ 13 ] !=
( NULL ) ) { mr_nonContOutputArray [ 13 ] [ 8 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 13 ] [ 8 ] . currVal = ( char_T * ) &
localB -> h5wh4b5rct ; mr_nonContOutputArray [ 13 ] [ 8 ] . next = & (
mr_nonContOutputArray [ 13 ] [ 9 ] ) ; } if ( mr_nonContOutputArray [ 13 ] !=
( NULL ) ) { mr_nonContOutputArray [ 13 ] [ 9 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 13 ] [ 9 ] . currVal = ( char_T * ) &
localB -> hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . p2j1wfi3wc ;
mr_nonContOutputArray [ 13 ] [ 9 ] . next = & ( mr_nonContOutputArray [ 13 ]
[ 10 ] ) ; } if ( mr_nonContOutputArray [ 13 ] != ( NULL ) ) {
mr_nonContOutputArray [ 13 ] [ 10 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 13 ] [ 10 ] . currVal = ( char_T * ) & localB ->
hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . az52kqlyve ;
mr_nonContOutputArray [ 13 ] [ 10 ] . next = & ( mr_nonContOutputArray [ 13 ]
[ 11 ] ) ; } if ( mr_nonContOutputArray [ 13 ] != ( NULL ) ) {
mr_nonContOutputArray [ 13 ] [ 11 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 13 ] [ 11 ] . currVal = ( char_T * ) & localB ->
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . p2j1wfi3wc ;
mr_nonContOutputArray [ 13 ] [ 11 ] . next = & ( mr_nonContOutputArray [ 13 ]
[ 12 ] ) ; } if ( mr_nonContOutputArray [ 13 ] != ( NULL ) ) {
mr_nonContOutputArray [ 13 ] [ 12 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 13 ] [ 12 ] . currVal = ( char_T * ) & localB ->
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . az52kqlyve ;
mr_nonContOutputArray [ 13 ] [ 12 ] . next = & ( mr_nonContOutputArray [ 13 ]
[ 13 ] ) ; } if ( mr_nonContOutputArray [ 13 ] != ( NULL ) ) {
mr_nonContOutputArray [ 13 ] [ 13 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 13 ] [ 13 ] . currVal = ( char_T * ) & localB ->
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . p2j1wfi3wc ;
mr_nonContOutputArray [ 13 ] [ 13 ] . next = & ( mr_nonContOutputArray [ 13 ]
[ 14 ] ) ; } if ( mr_nonContOutputArray [ 13 ] != ( NULL ) ) {
mr_nonContOutputArray [ 13 ] [ 14 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 13 ] [ 14 ] . currVal = ( char_T * ) & localB ->
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . az52kqlyve ;
mr_nonContOutputArray [ 13 ] [ 14 ] . next = & ( mr_nonContOutputArray [ 13 ]
[ 15 ] ) ; } if ( mr_nonContOutputArray [ 13 ] != ( NULL ) ) {
mr_nonContOutputArray [ 13 ] [ 15 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 13 ] [ 15 ] . currVal = ( char_T * ) & localB ->
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . p2j1wfi3wc ;
mr_nonContOutputArray [ 13 ] [ 15 ] . next = & ( mr_nonContOutputArray [ 13 ]
[ 16 ] ) ; } if ( mr_nonContOutputArray [ 13 ] != ( NULL ) ) {
mr_nonContOutputArray [ 13 ] [ 16 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 13 ] [ 16 ] . currVal = ( char_T * ) & localB ->
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . az52kqlyve ;
mr_nonContOutputArray [ 13 ] [ 16 ] . next = ( NULL ) ; } if (
mr_nonContOutputArray [ 14 ] != ( NULL ) ) { mr_nonContOutputArray [ 14 ] [ 0
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 14 ] [ 0 ]
. currVal = ( char_T * ) & localB -> ba3eebeu23 ; mr_nonContOutputArray [ 14
] [ 0 ] . next = & ( mr_nonContOutputArray [ 14 ] [ 1 ] ) ; } if (
mr_nonContOutputArray [ 14 ] != ( NULL ) ) { mr_nonContOutputArray [ 14 ] [ 1
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 14 ] [ 1 ]
. currVal = ( char_T * ) & localB -> ftkrxmz2gl ; mr_nonContOutputArray [ 14
] [ 1 ] . next = & ( mr_nonContOutputArray [ 14 ] [ 2 ] ) ; } if (
mr_nonContOutputArray [ 14 ] != ( NULL ) ) { mr_nonContOutputArray [ 14 ] [ 2
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 14 ] [ 2 ]
. currVal = ( char_T * ) & localB -> j2swsz0urn ; mr_nonContOutputArray [ 14
] [ 2 ] . next = & ( mr_nonContOutputArray [ 14 ] [ 3 ] ) ; } if (
mr_nonContOutputArray [ 14 ] != ( NULL ) ) { mr_nonContOutputArray [ 14 ] [ 3
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 14 ] [ 3 ]
. currVal = ( char_T * ) & localB -> g1pa1tegyz ; mr_nonContOutputArray [ 14
] [ 3 ] . next = & ( mr_nonContOutputArray [ 14 ] [ 4 ] ) ; } if (
mr_nonContOutputArray [ 14 ] != ( NULL ) ) { mr_nonContOutputArray [ 14 ] [ 4
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 14 ] [ 4 ]
. currVal = ( char_T * ) & localB -> k5vua1hg0r ; mr_nonContOutputArray [ 14
] [ 4 ] . next = & ( mr_nonContOutputArray [ 14 ] [ 5 ] ) ; } if (
mr_nonContOutputArray [ 14 ] != ( NULL ) ) { mr_nonContOutputArray [ 14 ] [ 5
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 14 ] [ 5 ]
. currVal = ( char_T * ) & localB -> hesaewh1nb ; mr_nonContOutputArray [ 14
] [ 5 ] . next = & ( mr_nonContOutputArray [ 14 ] [ 6 ] ) ; } if (
mr_nonContOutputArray [ 14 ] != ( NULL ) ) { mr_nonContOutputArray [ 14 ] [ 6
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 14 ] [ 6 ]
. currVal = ( char_T * ) & localB -> bz31s42s1u ; mr_nonContOutputArray [ 14
] [ 6 ] . next = & ( mr_nonContOutputArray [ 14 ] [ 7 ] ) ; } if (
mr_nonContOutputArray [ 14 ] != ( NULL ) ) { mr_nonContOutputArray [ 14 ] [ 7
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 14 ] [ 7 ]
. currVal = ( char_T * ) & localB -> h5wh4b5rct ; mr_nonContOutputArray [ 14
] [ 7 ] . next = & ( mr_nonContOutputArray [ 14 ] [ 8 ] ) ; } if (
mr_nonContOutputArray [ 14 ] != ( NULL ) ) { mr_nonContOutputArray [ 14 ] [ 8
] . sizeInBytes = 1 * sizeof ( boolean_T ) ; mr_nonContOutputArray [ 14 ] [ 8
] . currVal = ( char_T * ) & localB -> hzwxfzysvm [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . p2j1wfi3wc ; mr_nonContOutputArray [ 14 ] [ 8 ] . next = & (
mr_nonContOutputArray [ 14 ] [ 9 ] ) ; } if ( mr_nonContOutputArray [ 14 ] !=
( NULL ) ) { mr_nonContOutputArray [ 14 ] [ 9 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 14 ] [ 9 ] . currVal = ( char_T * ) &
localB -> hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . az52kqlyve ;
mr_nonContOutputArray [ 14 ] [ 9 ] . next = & ( mr_nonContOutputArray [ 14 ]
[ 10 ] ) ; } if ( mr_nonContOutputArray [ 14 ] != ( NULL ) ) {
mr_nonContOutputArray [ 14 ] [ 10 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 14 ] [ 10 ] . currVal = ( char_T * ) & localB ->
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . p2j1wfi3wc ;
mr_nonContOutputArray [ 14 ] [ 10 ] . next = & ( mr_nonContOutputArray [ 14 ]
[ 11 ] ) ; } if ( mr_nonContOutputArray [ 14 ] != ( NULL ) ) {
mr_nonContOutputArray [ 14 ] [ 11 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 14 ] [ 11 ] . currVal = ( char_T * ) & localB ->
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . az52kqlyve ;
mr_nonContOutputArray [ 14 ] [ 11 ] . next = & ( mr_nonContOutputArray [ 14 ]
[ 12 ] ) ; } if ( mr_nonContOutputArray [ 14 ] != ( NULL ) ) {
mr_nonContOutputArray [ 14 ] [ 12 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 14 ] [ 12 ] . currVal = ( char_T * ) & localB ->
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . p2j1wfi3wc ;
mr_nonContOutputArray [ 14 ] [ 12 ] . next = & ( mr_nonContOutputArray [ 14 ]
[ 13 ] ) ; } if ( mr_nonContOutputArray [ 14 ] != ( NULL ) ) {
mr_nonContOutputArray [ 14 ] [ 13 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 14 ] [ 13 ] . currVal = ( char_T * ) & localB ->
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . az52kqlyve ;
mr_nonContOutputArray [ 14 ] [ 13 ] . next = & ( mr_nonContOutputArray [ 14 ]
[ 14 ] ) ; } if ( mr_nonContOutputArray [ 14 ] != ( NULL ) ) {
mr_nonContOutputArray [ 14 ] [ 14 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 14 ] [ 14 ] . currVal = ( char_T * ) & localB ->
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . p2j1wfi3wc ;
mr_nonContOutputArray [ 14 ] [ 14 ] . next = & ( mr_nonContOutputArray [ 14 ]
[ 15 ] ) ; } if ( mr_nonContOutputArray [ 14 ] != ( NULL ) ) {
mr_nonContOutputArray [ 14 ] [ 15 ] . sizeInBytes = 1 * sizeof ( boolean_T )
; mr_nonContOutputArray [ 14 ] [ 15 ] . currVal = ( char_T * ) & localB ->
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . az52kqlyve ;
mr_nonContOutputArray [ 14 ] [ 15 ] . next = ( NULL ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 0
] . sizeInBytes = 2 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 0 ]
. currVal = ( char_T * ) & localB -> oxc1mfwz5g [ 0 ] ; mr_nonContOutputArray
[ 15 ] [ 0 ] . next = & ( mr_nonContOutputArray [ 15 ] [ 1 ] ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 1
] . sizeInBytes = 2 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 1 ]
. currVal = ( char_T * ) & localB -> huii2aaokv [ 0 ] ; mr_nonContOutputArray
[ 15 ] [ 1 ] . next = & ( mr_nonContOutputArray [ 15 ] [ 2 ] ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 2
] . sizeInBytes = 2 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 2 ]
. currVal = ( char_T * ) & localB -> kyrnjux3iw [ 0 ] ; mr_nonContOutputArray
[ 15 ] [ 2 ] . next = & ( mr_nonContOutputArray [ 15 ] [ 3 ] ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 3
] . sizeInBytes = 3 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 3 ]
. currVal = ( char_T * ) & localB -> gsskq4zyxa [ 0 ] ; mr_nonContOutputArray
[ 15 ] [ 3 ] . next = & ( mr_nonContOutputArray [ 15 ] [ 4 ] ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 4
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 4 ]
. currVal = ( char_T * ) & localB -> ba3eebeu23 ; mr_nonContOutputArray [ 15
] [ 4 ] . next = & ( mr_nonContOutputArray [ 15 ] [ 5 ] ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 5
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 5 ]
. currVal = ( char_T * ) & localB -> ftkrxmz2gl ; mr_nonContOutputArray [ 15
] [ 5 ] . next = & ( mr_nonContOutputArray [ 15 ] [ 6 ] ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 6
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 6 ]
. currVal = ( char_T * ) & localB -> j2swsz0urn ; mr_nonContOutputArray [ 15
] [ 6 ] . next = & ( mr_nonContOutputArray [ 15 ] [ 7 ] ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 7
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 7 ]
. currVal = ( char_T * ) & localB -> g1pa1tegyz ; mr_nonContOutputArray [ 15
] [ 7 ] . next = & ( mr_nonContOutputArray [ 15 ] [ 8 ] ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 8
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 8 ]
. currVal = ( char_T * ) & localB -> k5vua1hg0r ; mr_nonContOutputArray [ 15
] [ 8 ] . next = & ( mr_nonContOutputArray [ 15 ] [ 9 ] ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 9
] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 9 ]
. currVal = ( char_T * ) & localB -> hesaewh1nb ; mr_nonContOutputArray [ 15
] [ 9 ] . next = & ( mr_nonContOutputArray [ 15 ] [ 10 ] ) ; } if (
mr_nonContOutputArray [ 15 ] != ( NULL ) ) { mr_nonContOutputArray [ 15 ] [
10 ] . sizeInBytes = 12 * sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [
10 ] . currVal = ( char_T * ) & localB -> imq4m422ep [ 0 ] ;
mr_nonContOutputArray [ 15 ] [ 10 ] . next = & ( mr_nonContOutputArray [ 15 ]
[ 11 ] ) ; } if ( mr_nonContOutputArray [ 15 ] != ( NULL ) ) {
mr_nonContOutputArray [ 15 ] [ 11 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 15 ] [ 11 ] . currVal = ( char_T * ) & localB ->
bz31s42s1u ; mr_nonContOutputArray [ 15 ] [ 11 ] . next = & (
mr_nonContOutputArray [ 15 ] [ 12 ] ) ; } if ( mr_nonContOutputArray [ 15 ]
!= ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 12 ] . sizeInBytes = 1 *
sizeof ( real_T ) ; mr_nonContOutputArray [ 15 ] [ 12 ] . currVal = ( char_T
* ) & localB -> h5wh4b5rct ; mr_nonContOutputArray [ 15 ] [ 12 ] . next = & (
mr_nonContOutputArray [ 15 ] [ 13 ] ) ; } if ( mr_nonContOutputArray [ 15 ]
!= ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 13 ] . sizeInBytes = 1 *
sizeof ( boolean_T ) ; mr_nonContOutputArray [ 15 ] [ 13 ] . currVal = (
char_T * ) & localB -> hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
p2j1wfi3wc ; mr_nonContOutputArray [ 15 ] [ 13 ] . next = & (
mr_nonContOutputArray [ 15 ] [ 14 ] ) ; } if ( mr_nonContOutputArray [ 15 ]
!= ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 14 ] . sizeInBytes = 1 *
sizeof ( boolean_T ) ; mr_nonContOutputArray [ 15 ] [ 14 ] . currVal = (
char_T * ) & localB -> hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
az52kqlyve ; mr_nonContOutputArray [ 15 ] [ 14 ] . next = & (
mr_nonContOutputArray [ 15 ] [ 15 ] ) ; } if ( mr_nonContOutputArray [ 15 ]
!= ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 15 ] . sizeInBytes = 1 *
sizeof ( boolean_T ) ; mr_nonContOutputArray [ 15 ] [ 15 ] . currVal = (
char_T * ) & localB -> d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
p2j1wfi3wc ; mr_nonContOutputArray [ 15 ] [ 15 ] . next = & (
mr_nonContOutputArray [ 15 ] [ 16 ] ) ; } if ( mr_nonContOutputArray [ 15 ]
!= ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 16 ] . sizeInBytes = 1 *
sizeof ( boolean_T ) ; mr_nonContOutputArray [ 15 ] [ 16 ] . currVal = (
char_T * ) & localB -> d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
az52kqlyve ; mr_nonContOutputArray [ 15 ] [ 16 ] . next = & (
mr_nonContOutputArray [ 15 ] [ 17 ] ) ; } if ( mr_nonContOutputArray [ 15 ]
!= ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 17 ] . sizeInBytes = 1 *
sizeof ( boolean_T ) ; mr_nonContOutputArray [ 15 ] [ 17 ] . currVal = (
char_T * ) & localB -> g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
p2j1wfi3wc ; mr_nonContOutputArray [ 15 ] [ 17 ] . next = & (
mr_nonContOutputArray [ 15 ] [ 18 ] ) ; } if ( mr_nonContOutputArray [ 15 ]
!= ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 18 ] . sizeInBytes = 1 *
sizeof ( boolean_T ) ; mr_nonContOutputArray [ 15 ] [ 18 ] . currVal = (
char_T * ) & localB -> g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
az52kqlyve ; mr_nonContOutputArray [ 15 ] [ 18 ] . next = & (
mr_nonContOutputArray [ 15 ] [ 19 ] ) ; } if ( mr_nonContOutputArray [ 15 ]
!= ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 19 ] . sizeInBytes = 1 *
sizeof ( boolean_T ) ; mr_nonContOutputArray [ 15 ] [ 19 ] . currVal = (
char_T * ) & localB -> lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
p2j1wfi3wc ; mr_nonContOutputArray [ 15 ] [ 19 ] . next = & (
mr_nonContOutputArray [ 15 ] [ 20 ] ) ; } if ( mr_nonContOutputArray [ 15 ]
!= ( NULL ) ) { mr_nonContOutputArray [ 15 ] [ 20 ] . sizeInBytes = 1 *
sizeof ( boolean_T ) ; mr_nonContOutputArray [ 15 ] [ 20 ] . currVal = (
char_T * ) & localB -> lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
az52kqlyve ; mr_nonContOutputArray [ 15 ] [ 20 ] . next = ( NULL ) ; } if (
mr_nonContOutputArray [ 18 ] != ( NULL ) ) { mr_nonContOutputArray [ 18 ] [ 0
] . sizeInBytes = 3 * sizeof ( real_T ) ; mr_nonContOutputArray [ 18 ] [ 0 ]
. currVal = ( char_T * ) & localB -> a5sij35bll [ 0 ] ; mr_nonContOutputArray
[ 18 ] [ 0 ] . next = & ( mr_nonContOutputArray [ 18 ] [ 1 ] ) ; } if (
mr_nonContOutputArray [ 18 ] != ( NULL ) ) { mr_nonContOutputArray [ 18 ] [ 1
] . sizeInBytes = 3 * sizeof ( real_T ) ; mr_nonContOutputArray [ 18 ] [ 1 ]
. currVal = ( char_T * ) & localB -> ponlrrdraj [ 0 ] ; mr_nonContOutputArray
[ 18 ] [ 1 ] . next = & ( mr_nonContOutputArray [ 18 ] [ 2 ] ) ; } if (
mr_nonContOutputArray [ 18 ] != ( NULL ) ) { mr_nonContOutputArray [ 18 ] [ 2
] . sizeInBytes = 3 * sizeof ( real_T ) ; mr_nonContOutputArray [ 18 ] [ 2 ]
. currVal = ( char_T * ) & localB -> n4g0nfc4au [ 0 ] ; mr_nonContOutputArray
[ 18 ] [ 2 ] . next = & ( mr_nonContOutputArray [ 18 ] [ 3 ] ) ; } if (
mr_nonContOutputArray [ 18 ] != ( NULL ) ) { mr_nonContOutputArray [ 18 ] [ 3
] . sizeInBytes = 3 * sizeof ( real_T ) ; mr_nonContOutputArray [ 18 ] [ 3 ]
. currVal = ( char_T * ) & localB -> j3goyfyj54 [ 0 ] ; mr_nonContOutputArray
[ 18 ] [ 3 ] . next = ( NULL ) ; } if ( mr_nonContOutputArray [ 19 ] != (
NULL ) ) { mr_nonContOutputArray [ 19 ] [ 0 ] . sizeInBytes = 3 * sizeof (
real_T ) ; mr_nonContOutputArray [ 19 ] [ 0 ] . currVal = ( char_T * ) &
localB -> a5sij35bll [ 0 ] ; mr_nonContOutputArray [ 19 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 19 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 19 ] !=
( NULL ) ) { mr_nonContOutputArray [ 19 ] [ 1 ] . sizeInBytes = 3 * sizeof (
real_T ) ; mr_nonContOutputArray [ 19 ] [ 1 ] . currVal = ( char_T * ) &
localB -> ponlrrdraj [ 0 ] ; mr_nonContOutputArray [ 19 ] [ 1 ] . next = & (
mr_nonContOutputArray [ 19 ] [ 2 ] ) ; } if ( mr_nonContOutputArray [ 19 ] !=
( NULL ) ) { mr_nonContOutputArray [ 19 ] [ 2 ] . sizeInBytes = 3 * sizeof (
real_T ) ; mr_nonContOutputArray [ 19 ] [ 2 ] . currVal = ( char_T * ) &
localB -> n4g0nfc4au [ 0 ] ; mr_nonContOutputArray [ 19 ] [ 2 ] . next = & (
mr_nonContOutputArray [ 19 ] [ 3 ] ) ; } if ( mr_nonContOutputArray [ 19 ] !=
( NULL ) ) { mr_nonContOutputArray [ 19 ] [ 3 ] . sizeInBytes = 3 * sizeof (
real_T ) ; mr_nonContOutputArray [ 19 ] [ 3 ] . currVal = ( char_T * ) &
localB -> j3goyfyj54 [ 0 ] ; mr_nonContOutputArray [ 19 ] [ 3 ] . next = (
NULL ) ; } } void mr_PassVeh7DOF_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_PassVeh7DOF , 156
) ; * retVal = 1 ; } static void mr_PassVeh7DOF_cacheDataAsMxArray ( mxArray
* destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_PassVeh7DOF_cacheDataAsMxArray ( mxArray * destArray , mwIndex
i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_PassVeh7DOF_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_PassVeh7DOF_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_PassVeh7DOF_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_PassVeh7DOF_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_PassVeh7DOF_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_PassVeh7DOF_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
{ uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber (
destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes
] , ( const uint8_T * ) srcData , numBytes ) ; } static void
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_PassVeh7DOF_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_PassVeh7DOF_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_PassVeh7DOF_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_PassVeh7DOF_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_PassVeh7DOF_GetDWork ( const pqca3kvywqf * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" ,
} ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( ssDW , 0 , 0 , & ( mdlrefDW -> rtb ) ,
sizeof ( mdlrefDW -> rtb ) ) ; { static const char * rtdwDataFieldNames [ 59
] = { "mdlrefDW->rtdw.bzrcg4ekd2" , "mdlrefDW->rtdw.hx3dqme3j0" ,
"mdlrefDW->rtdw.hvodgxjjby" , "mdlrefDW->rtdw.h3znsdkf03" ,
"mdlrefDW->rtdw.od03lov34i" , "mdlrefDW->rtdw.js1pxba5c2" ,
"mdlrefDW->rtdw.kear3lpxvq" , "mdlrefDW->rtdw.nhs2etlup5" ,
"mdlrefDW->rtdw.cpkkyluphr" , "mdlrefDW->rtdw.pd5cfi4ugv" ,
"mdlrefDW->rtdw.mk0ozmamcr" , "mdlrefDW->rtdw.l0dwzkeuuy" ,
"mdlrefDW->rtdw.ncgxsvvru2" , "mdlrefDW->rtdw.m44z2pktlv" ,
"mdlrefDW->rtdw.baajemjlf1" , "mdlrefDW->rtdw.nag3iizhma" ,
"mdlrefDW->rtdw.kvj4uckeqc" , "mdlrefDW->rtdw.bokb5rvw5x" ,
"mdlrefDW->rtdw.fvd2istvuu" ,
"mdlrefDW->rtdw.hzwxfzysvm[0].lcvqzt1s0u.ah1sdocsnj.awwuuezcdb" ,
"mdlrefDW->rtdw.hzwxfzysvm[0].lcvqzt1s0u.ah1sdocsnj.cnj1nd10fu" ,
"mdlrefDW->rtdw.hzwxfzysvm[0].lcvqzt1s0u.ah1sdocsnj.kmdx3cmv55" ,
"mdlrefDW->rtdw.hzwxfzysvm[0].lcvqzt1s0u.ah1sdocsnj.bnlw1fvcna" ,
"mdlrefDW->rtdw.hzwxfzysvm[0].lcvqzt1s0u.ah1sdocsnj.ntf2dcu4tb" ,
"mdlrefDW->rtdw.hzwxfzysvm[0].lcvqzt1s0u.ah1sdocsnj.mz5iqdef2z" ,
"mdlrefDW->rtdw.hzwxfzysvm[0].lcvqzt1s0u.ah1sdocsnj.emtfaxoulq" ,
"mdlrefDW->rtdw.hzwxfzysvm[0].lcvqzt1s0u.ah1sdocsnj.bqtdi5kbt0" ,
"mdlrefDW->rtdw.hzwxfzysvm[0].lcvqzt1s0u.ah1sdocsnj.jpzho5sh4i" ,
"mdlrefDW->rtdw.hzwxfzysvm[0].lcvqzt1s0u.ah1sdocsnj.m33bbl15dk" ,
"mdlrefDW->rtdw.d22xfw4kpx[0].lcvqzt1s0u.ah1sdocsnj.awwuuezcdb" ,
"mdlrefDW->rtdw.d22xfw4kpx[0].lcvqzt1s0u.ah1sdocsnj.cnj1nd10fu" ,
"mdlrefDW->rtdw.d22xfw4kpx[0].lcvqzt1s0u.ah1sdocsnj.kmdx3cmv55" ,
"mdlrefDW->rtdw.d22xfw4kpx[0].lcvqzt1s0u.ah1sdocsnj.bnlw1fvcna" ,
"mdlrefDW->rtdw.d22xfw4kpx[0].lcvqzt1s0u.ah1sdocsnj.ntf2dcu4tb" ,
"mdlrefDW->rtdw.d22xfw4kpx[0].lcvqzt1s0u.ah1sdocsnj.mz5iqdef2z" ,
"mdlrefDW->rtdw.d22xfw4kpx[0].lcvqzt1s0u.ah1sdocsnj.emtfaxoulq" ,
"mdlrefDW->rtdw.d22xfw4kpx[0].lcvqzt1s0u.ah1sdocsnj.bqtdi5kbt0" ,
"mdlrefDW->rtdw.d22xfw4kpx[0].lcvqzt1s0u.ah1sdocsnj.jpzho5sh4i" ,
"mdlrefDW->rtdw.d22xfw4kpx[0].lcvqzt1s0u.ah1sdocsnj.m33bbl15dk" ,
"mdlrefDW->rtdw.g2eyqylo5m[0].lcvqzt1s0u.ah1sdocsnj.awwuuezcdb" ,
"mdlrefDW->rtdw.g2eyqylo5m[0].lcvqzt1s0u.ah1sdocsnj.cnj1nd10fu" ,
"mdlrefDW->rtdw.g2eyqylo5m[0].lcvqzt1s0u.ah1sdocsnj.kmdx3cmv55" ,
"mdlrefDW->rtdw.g2eyqylo5m[0].lcvqzt1s0u.ah1sdocsnj.bnlw1fvcna" ,
"mdlrefDW->rtdw.g2eyqylo5m[0].lcvqzt1s0u.ah1sdocsnj.ntf2dcu4tb" ,
"mdlrefDW->rtdw.g2eyqylo5m[0].lcvqzt1s0u.ah1sdocsnj.mz5iqdef2z" ,
"mdlrefDW->rtdw.g2eyqylo5m[0].lcvqzt1s0u.ah1sdocsnj.emtfaxoulq" ,
"mdlrefDW->rtdw.g2eyqylo5m[0].lcvqzt1s0u.ah1sdocsnj.bqtdi5kbt0" ,
"mdlrefDW->rtdw.g2eyqylo5m[0].lcvqzt1s0u.ah1sdocsnj.jpzho5sh4i" ,
"mdlrefDW->rtdw.g2eyqylo5m[0].lcvqzt1s0u.ah1sdocsnj.m33bbl15dk" ,
"mdlrefDW->rtdw.lf15r5ane43[0].lcvqzt1s0u.ah1sdocsnj.awwuuezcdb" ,
"mdlrefDW->rtdw.lf15r5ane43[0].lcvqzt1s0u.ah1sdocsnj.cnj1nd10fu" ,
"mdlrefDW->rtdw.lf15r5ane43[0].lcvqzt1s0u.ah1sdocsnj.kmdx3cmv55" ,
"mdlrefDW->rtdw.lf15r5ane43[0].lcvqzt1s0u.ah1sdocsnj.bnlw1fvcna" ,
"mdlrefDW->rtdw.lf15r5ane43[0].lcvqzt1s0u.ah1sdocsnj.ntf2dcu4tb" ,
"mdlrefDW->rtdw.lf15r5ane43[0].lcvqzt1s0u.ah1sdocsnj.mz5iqdef2z" ,
"mdlrefDW->rtdw.lf15r5ane43[0].lcvqzt1s0u.ah1sdocsnj.emtfaxoulq" ,
"mdlrefDW->rtdw.lf15r5ane43[0].lcvqzt1s0u.ah1sdocsnj.bqtdi5kbt0" ,
"mdlrefDW->rtdw.lf15r5ane43[0].lcvqzt1s0u.ah1sdocsnj.jpzho5sh4i" ,
"mdlrefDW->rtdw.lf15r5ane43[0].lcvqzt1s0u.ah1sdocsnj.m33bbl15dk" , } ;
mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 59 , rtdwDataFieldNames )
; int k0 ; mxSetFieldByNumber ( rtdwData , 0 , 19 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . hzwxfzysvm
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . awwuuezcdb ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 20 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
cnj1nd10fu ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 21 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . kmdx3cmv55 ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 22 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . hzwxfzysvm
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . bnlw1fvcna ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 23 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
ntf2dcu4tb ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 24 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 25 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . hzwxfzysvm
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 26 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
bqtdi5kbt0 ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 27 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . jpzho5sh4i ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 28 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . hzwxfzysvm
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . m33bbl15dk ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 29 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
awwuuezcdb ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 30 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . cnj1nd10fu ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 31 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . d22xfw4kpx
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . kmdx3cmv55 ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 32 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
bnlw1fvcna ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 33 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 34 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . d22xfw4kpx
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 35 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
emtfaxoulq ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 36 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0 ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 37 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . d22xfw4kpx
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . jpzho5sh4i ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 38 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
m33bbl15dk ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 39 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . awwuuezcdb ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 40 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . g2eyqylo5m
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . cnj1nd10fu ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 41 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
kmdx3cmv55 ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 42 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . bnlw1fvcna ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 43 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . g2eyqylo5m
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 44 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
mz5iqdef2z ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 45 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 46 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . g2eyqylo5m
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0 ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 47 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
jpzho5sh4i ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 48 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . m33bbl15dk ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 49 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . lf15r5ane43
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . awwuuezcdb ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 50 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
cnj1nd10fu ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 51 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . kmdx3cmv55 ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 52 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . lf15r5ane43
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . bnlw1fvcna ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 53 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
ntf2dcu4tb ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 54 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 55 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . lf15r5ane43
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 56 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
bqtdi5kbt0 ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 57 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . jpzho5sh4i ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 58 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . lf15r5ane43
[ 0 ] . lcvqzt1s0u . ah1sdocsnj . m33bbl15dk ) , mxUINT8_CLASS , mxREAL ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 0 , & ( mdlrefDW -> rtdw .
bzrcg4ekd2 ) , sizeof ( mdlrefDW -> rtdw . bzrcg4ekd2 ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 1 , & ( mdlrefDW -> rtdw .
hx3dqme3j0 ) , sizeof ( mdlrefDW -> rtdw . hx3dqme3j0 ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 2 , & ( mdlrefDW -> rtdw .
hvodgxjjby ) , sizeof ( mdlrefDW -> rtdw . hvodgxjjby ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW -> rtdw .
h3znsdkf03 ) , sizeof ( mdlrefDW -> rtdw . h3znsdkf03 ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 4 , & ( mdlrefDW -> rtdw .
od03lov34i ) , sizeof ( mdlrefDW -> rtdw . od03lov34i ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 5 , & ( mdlrefDW -> rtdw .
js1pxba5c2 ) , sizeof ( mdlrefDW -> rtdw . js1pxba5c2 ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 6 , & ( mdlrefDW -> rtdw .
kear3lpxvq ) , sizeof ( mdlrefDW -> rtdw . kear3lpxvq ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 7 , & ( mdlrefDW -> rtdw .
nhs2etlup5 ) , sizeof ( mdlrefDW -> rtdw . nhs2etlup5 ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 8 , & ( mdlrefDW -> rtdw .
cpkkyluphr ) , sizeof ( mdlrefDW -> rtdw . cpkkyluphr ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 9 , & ( mdlrefDW -> rtdw .
pd5cfi4ugv ) , sizeof ( mdlrefDW -> rtdw . pd5cfi4ugv ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 10 , & ( mdlrefDW -> rtdw
. mk0ozmamcr ) , sizeof ( mdlrefDW -> rtdw . mk0ozmamcr ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 11 , & ( mdlrefDW -> rtdw
. l0dwzkeuuy ) , sizeof ( mdlrefDW -> rtdw . l0dwzkeuuy ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 12 , & ( mdlrefDW -> rtdw
. ncgxsvvru2 ) , sizeof ( mdlrefDW -> rtdw . ncgxsvvru2 ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 13 , & ( mdlrefDW -> rtdw
. m44z2pktlv ) , sizeof ( mdlrefDW -> rtdw . m44z2pktlv ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 14 , & ( mdlrefDW -> rtdw
. baajemjlf1 ) , sizeof ( mdlrefDW -> rtdw . baajemjlf1 ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 15 , & ( mdlrefDW -> rtdw
. nag3iizhma ) , sizeof ( mdlrefDW -> rtdw . nag3iizhma ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 16 , & ( mdlrefDW -> rtdw
. kvj4uckeqc ) , sizeof ( mdlrefDW -> rtdw . kvj4uckeqc ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 17 , & ( mdlrefDW -> rtdw
. bokb5rvw5x ) , sizeof ( mdlrefDW -> rtdw . bokb5rvw5x ) ) ;
mr_PassVeh7DOF_cacheDataAsMxArray ( rtdwData , 0 , 18 , & ( mdlrefDW -> rtdw
. fvd2istvuu ) , sizeof ( mdlrefDW -> rtdw . fvd2istvuu ) ) ; for ( k0 = 0 ;
k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 19 , offset0 , &
( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj . awwuuezcdb
) , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
awwuuezcdb ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
20 , offset0 , & ( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . cnj1nd10fu ) , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . cnj1nd10fu ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 21 , offset0 , &
( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj . kmdx3cmv55
) , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
kmdx3cmv55 ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
22 , offset0 , & ( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . bnlw1fvcna ) , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . bnlw1fvcna ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 23 , offset0 , &
( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb
) , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
ntf2dcu4tb ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
24 , offset0 , & ( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . mz5iqdef2z ) , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 25 , offset0 , &
( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj . emtfaxoulq
) , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
emtfaxoulq ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
26 , offset0 , & ( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . bqtdi5kbt0 ) , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0 ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 27 , offset0 , &
( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj . jpzho5sh4i
) , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
jpzho5sh4i ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
28 , offset0 , & ( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . m33bbl15dk ) , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . m33bbl15dk ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 )
{ const mwIndex offset0 = k0 ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 29 , offset0 , & ( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] .
lcvqzt1s0u . ah1sdocsnj . awwuuezcdb ) , sizeof ( mdlrefDW -> rtdw .
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . awwuuezcdb ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 30 , offset0 , &
( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj . cnj1nd10fu
) , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
cnj1nd10fu ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
31 , offset0 , & ( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . kmdx3cmv55 ) , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . kmdx3cmv55 ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 32 , offset0 , &
( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj . bnlw1fvcna
) , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
bnlw1fvcna ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
33 , offset0 , & ( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . ntf2dcu4tb ) , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 34 , offset0 , &
( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z
) , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
mz5iqdef2z ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
35 , offset0 , & ( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . emtfaxoulq ) , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 36 , offset0 , &
( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0
) , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
bqtdi5kbt0 ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
37 , offset0 , & ( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . jpzho5sh4i ) , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . jpzho5sh4i ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 38 , offset0 , &
( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj . m33bbl15dk
) , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
m33bbl15dk ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const mwIndex offset0 =
k0 ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 39 ,
offset0 , & ( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj
. awwuuezcdb ) , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . awwuuezcdb ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 40 , offset0 , & ( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] .
lcvqzt1s0u . ah1sdocsnj . cnj1nd10fu ) , sizeof ( mdlrefDW -> rtdw .
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . cnj1nd10fu ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 41 , offset0 , &
( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj . kmdx3cmv55
) , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
kmdx3cmv55 ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
42 , offset0 , & ( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . bnlw1fvcna ) , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . bnlw1fvcna ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 43 , offset0 , &
( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb
) , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
ntf2dcu4tb ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
44 , offset0 , & ( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . mz5iqdef2z ) , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 45 , offset0 , &
( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj . emtfaxoulq
) , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
emtfaxoulq ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
46 , offset0 , & ( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . bqtdi5kbt0 ) , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0 ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 47 , offset0 , &
( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj . jpzho5sh4i
) , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj .
jpzho5sh4i ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
48 , offset0 , & ( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u .
ah1sdocsnj . m33bbl15dk ) , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] .
lcvqzt1s0u . ah1sdocsnj . m33bbl15dk ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 )
{ const mwIndex offset0 = k0 ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 49 , offset0 , & ( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] .
lcvqzt1s0u . ah1sdocsnj . awwuuezcdb ) , sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . awwuuezcdb ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 50 , offset0 , &
( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
cnj1nd10fu ) , sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . cnj1nd10fu ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 51 , offset0 , & ( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] .
lcvqzt1s0u . ah1sdocsnj . kmdx3cmv55 ) , sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . kmdx3cmv55 ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 52 , offset0 , &
( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
bnlw1fvcna ) , sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . bnlw1fvcna ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 53 , offset0 , & ( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] .
lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ) , sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 54 , offset0 , &
( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
mz5iqdef2z ) , sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . mz5iqdef2z ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 55 , offset0 , & ( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] .
lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ) , sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 56 , offset0 , &
( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
bqtdi5kbt0 ) , sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . bqtdi5kbt0 ) ) ; mr_PassVeh7DOF_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 57 , offset0 , & ( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] .
lcvqzt1s0u . ah1sdocsnj . jpzho5sh4i ) , sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . jpzho5sh4i ) ) ;
mr_PassVeh7DOF_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 58 , offset0 , &
( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
m33bbl15dk ) , sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . m33bbl15dk ) ) ; } mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData
) ; } ( void ) mdlrefDW ; return ssDW ; } void mr_PassVeh7DOF_SetDWork (
pqca3kvywqf * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void )
mdlrefDW ; mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) ,
ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; int k0 ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . bzrcg4ekd2 ) ,
rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . bzrcg4ekd2 ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . hx3dqme3j0 ) ,
rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . hx3dqme3j0 ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . hvodgxjjby ) ,
rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . hvodgxjjby ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . h3znsdkf03 ) ,
rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . h3znsdkf03 ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . od03lov34i ) ,
rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . od03lov34i ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . js1pxba5c2 ) ,
rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . js1pxba5c2 ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . kear3lpxvq ) ,
rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . kear3lpxvq ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . nhs2etlup5 ) ,
rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . nhs2etlup5 ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . cpkkyluphr ) ,
rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . cpkkyluphr ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . pd5cfi4ugv ) ,
rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw . pd5cfi4ugv ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . mk0ozmamcr ) ,
rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . mk0ozmamcr ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . l0dwzkeuuy ) ,
rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw . l0dwzkeuuy ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . ncgxsvvru2 ) ,
rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw . ncgxsvvru2 ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . m44z2pktlv ) ,
rtdwData , 0 , 13 , sizeof ( mdlrefDW -> rtdw . m44z2pktlv ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . baajemjlf1 ) ,
rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . baajemjlf1 ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . nag3iizhma ) ,
rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw . nag3iizhma ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . kvj4uckeqc ) ,
rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw . kvj4uckeqc ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . bokb5rvw5x ) ,
rtdwData , 0 , 17 , sizeof ( mdlrefDW -> rtdw . bokb5rvw5x ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . fvd2istvuu ) ,
rtdwData , 0 , 18 , sizeof ( mdlrefDW -> rtdw . fvd2istvuu ) ) ; for ( k0 = 0
; k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj . awwuuezcdb ) , rtdwData , 0 ,
19 , offset0 , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . awwuuezcdb ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
cnj1nd10fu ) , rtdwData , 0 , 20 , offset0 , sizeof ( mdlrefDW -> rtdw .
hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . cnj1nd10fu ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj . kmdx3cmv55 ) , rtdwData , 0 ,
21 , offset0 , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . kmdx3cmv55 ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
bnlw1fvcna ) , rtdwData , 0 , 22 , offset0 , sizeof ( mdlrefDW -> rtdw .
hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . bnlw1fvcna ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ) , rtdwData , 0 ,
23 , offset0 , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . ntf2dcu4tb ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
mz5iqdef2z ) , rtdwData , 0 , 24 , offset0 , sizeof ( mdlrefDW -> rtdw .
hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ) , rtdwData , 0 ,
25 , offset0 , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . emtfaxoulq ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
bqtdi5kbt0 ) , rtdwData , 0 , 26 , offset0 , sizeof ( mdlrefDW -> rtdw .
hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0 ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj . jpzho5sh4i ) , rtdwData , 0 ,
27 , offset0 , sizeof ( mdlrefDW -> rtdw . hzwxfzysvm [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . jpzho5sh4i ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . hzwxfzysvm [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
m33bbl15dk ) , rtdwData , 0 , 28 , offset0 , sizeof ( mdlrefDW -> rtdw .
hzwxfzysvm [ 0 ] . lcvqzt1s0u . ah1sdocsnj . m33bbl15dk ) ) ; } for ( k0 = 0
; k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj . awwuuezcdb ) , rtdwData , 0 ,
29 , offset0 , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . awwuuezcdb ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
cnj1nd10fu ) , rtdwData , 0 , 30 , offset0 , sizeof ( mdlrefDW -> rtdw .
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . cnj1nd10fu ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj . kmdx3cmv55 ) , rtdwData , 0 ,
31 , offset0 , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . kmdx3cmv55 ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
bnlw1fvcna ) , rtdwData , 0 , 32 , offset0 , sizeof ( mdlrefDW -> rtdw .
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . bnlw1fvcna ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ) , rtdwData , 0 ,
33 , offset0 , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . ntf2dcu4tb ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
mz5iqdef2z ) , rtdwData , 0 , 34 , offset0 , sizeof ( mdlrefDW -> rtdw .
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ) , rtdwData , 0 ,
35 , offset0 , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . emtfaxoulq ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
bqtdi5kbt0 ) , rtdwData , 0 , 36 , offset0 , sizeof ( mdlrefDW -> rtdw .
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0 ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj . jpzho5sh4i ) , rtdwData , 0 ,
37 , offset0 , sizeof ( mdlrefDW -> rtdw . d22xfw4kpx [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . jpzho5sh4i ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . d22xfw4kpx [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
m33bbl15dk ) , rtdwData , 0 , 38 , offset0 , sizeof ( mdlrefDW -> rtdw .
d22xfw4kpx [ 0 ] . lcvqzt1s0u . ah1sdocsnj . m33bbl15dk ) ) ; } for ( k0 = 0
; k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj . awwuuezcdb ) , rtdwData , 0 ,
39 , offset0 , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . awwuuezcdb ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
cnj1nd10fu ) , rtdwData , 0 , 40 , offset0 , sizeof ( mdlrefDW -> rtdw .
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . cnj1nd10fu ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj . kmdx3cmv55 ) , rtdwData , 0 ,
41 , offset0 , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . kmdx3cmv55 ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
bnlw1fvcna ) , rtdwData , 0 , 42 , offset0 , sizeof ( mdlrefDW -> rtdw .
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . bnlw1fvcna ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ) , rtdwData , 0 ,
43 , offset0 , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . ntf2dcu4tb ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
mz5iqdef2z ) , rtdwData , 0 , 44 , offset0 , sizeof ( mdlrefDW -> rtdw .
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ) , rtdwData , 0 ,
45 , offset0 , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . emtfaxoulq ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
bqtdi5kbt0 ) , rtdwData , 0 , 46 , offset0 , sizeof ( mdlrefDW -> rtdw .
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0 ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj . jpzho5sh4i ) , rtdwData , 0 ,
47 , offset0 , sizeof ( mdlrefDW -> rtdw . g2eyqylo5m [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . jpzho5sh4i ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . g2eyqylo5m [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
m33bbl15dk ) , rtdwData , 0 , 48 , offset0 , sizeof ( mdlrefDW -> rtdw .
g2eyqylo5m [ 0 ] . lcvqzt1s0u . ah1sdocsnj . m33bbl15dk ) ) ; } for ( k0 = 0
; k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj . awwuuezcdb ) , rtdwData , 0 ,
49 , offset0 , sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . awwuuezcdb ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
cnj1nd10fu ) , rtdwData , 0 , 50 , offset0 , sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . cnj1nd10fu ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj . kmdx3cmv55 ) , rtdwData , 0 ,
51 , offset0 , sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . kmdx3cmv55 ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
bnlw1fvcna ) , rtdwData , 0 , 52 , offset0 , sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . bnlw1fvcna ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj . ntf2dcu4tb ) , rtdwData , 0 ,
53 , offset0 , sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . ntf2dcu4tb ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
mz5iqdef2z ) , rtdwData , 0 , 54 , offset0 , sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . mz5iqdef2z ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj . emtfaxoulq ) , rtdwData , 0 ,
55 , offset0 , sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . emtfaxoulq ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
bqtdi5kbt0 ) , rtdwData , 0 , 56 , offset0 , sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . bqtdi5kbt0 ) ) ;
mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj . jpzho5sh4i ) , rtdwData , 0 ,
57 , offset0 , sizeof ( mdlrefDW -> rtdw . lf15r5ane43 [ 0 ] . lcvqzt1s0u .
ah1sdocsnj . jpzho5sh4i ) ) ; mr_PassVeh7DOF_restoreDataFromMxArrayWithOffset
( & ( mdlrefDW -> rtdw . lf15r5ane43 [ k0 ] . lcvqzt1s0u . ah1sdocsnj .
m33bbl15dk ) , rtdwData , 0 , 58 , offset0 , sizeof ( mdlrefDW -> rtdw .
lf15r5ane43 [ 0 ] . lcvqzt1s0u . ah1sdocsnj . m33bbl15dk ) ) ; } } } void
mr_PassVeh7DOF_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 1846573972U , 2328581759U , 3342147734U , 3355268383U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "PassVeh7DOF" , & chksum [ 0 ] ) ;
} mxArray * mr_PassVeh7DOF_GetSimStateDisallowedBlocks ( ) { return NULL ; }
