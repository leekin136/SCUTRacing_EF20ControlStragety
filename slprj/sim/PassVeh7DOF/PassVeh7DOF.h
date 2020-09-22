#ifndef RTW_HEADER_PassVeh7DOF_h_
#define RTW_HEADER_PassVeh7DOF_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef PassVeh7DOF_COMMON_INCLUDES_
#define PassVeh7DOF_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "PassVeh7DOF_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
typedef struct { real_T cngbrzew0c [ 5 ] ; real_T kvxvdkvc3b [ 34 ] ; real_T
j2px0ljv0m [ 16 ] ; real_T p4bflvewss [ 24 ] ; real_T dbw42rwkve ; real_T
imuoerh5jm ; } ikqrgkdcac ; typedef struct { real_T g1bj051oh5 ; real_T
nfko0hod0i ; real_T dgitpbtkqd ; real_T ltr0ixpkao ; real_T lzrwvrbve4 ;
real_T ov4ud0hfcn ; real_T en4dhyobpx ; real_T go3cbl3j4t ; real_T prwycy4qbk
; real_T fy1vh2s12e ; real_T ax4qyk4d00 ; real_T j54l4ejpui ; real_T
onlat3ps3i ; real_T fm23id0axl ; boolean_T az52kqlyve ; boolean_T p2j1wfi3wc
; } amgc5viqpp ; typedef struct { real_T awwuuezcdb ; boolean_T cnj1nd10fu ;
int8_T kmdx3cmv55 ; int8_T bnlw1fvcna ; int8_T ntf2dcu4tb ; int8_T mz5iqdef2z
; int8_T emtfaxoulq ; int8_T bqtdi5kbt0 ; uint8_T jpzho5sh4i ; uint8_T
m33bbl15dk ; } ozgwn1x4el ; typedef struct { real_T fvrnptjzqw ; } ihyl1wiej4
; typedef struct { real_T fvrnptjzqw ; } imbwkukzbz ; typedef struct {
boolean_T fvrnptjzqw ; } jwuukrjcjy ; typedef struct { real_T fvrnptjzqw ; }
ca3arilzxj ; typedef struct { real_T fvrnptjzqw ; } mdujpxt3og ; typedef
struct { real_T fvrnptjzqw ; } kadjqzoj2h ; typedef struct { real_T
g0mhelktla ; } kfn2mmtqck ; typedef struct { amgc5viqpp ah1sdocsnj ; }
b2xjgy1es0 ; typedef struct { ozgwn1x4el ah1sdocsnj ; } oepqjnmpe3 ; typedef
struct { ihyl1wiej4 ah1sdocsnj ; } acvtcz55rn ; typedef struct { imbwkukzbz
ah1sdocsnj ; } mruqemziqh ; typedef struct { jwuukrjcjy ah1sdocsnj ; }
oro2xznq4y ; typedef struct { ca3arilzxj ah1sdocsnj ; } lontiafrv5 ; typedef
struct { mdujpxt3og ah1sdocsnj ; } haaujlu1zl ; typedef struct { kadjqzoj2h
ah1sdocsnj ; } ocgievpcmf ; typedef struct { kfn2mmtqck ah1sdocsnj ; }
c1n0jnggmm ; typedef struct { b2xjgy1es0 lcvqzt1s0u ; } h20hxunqni ; typedef
struct { oepqjnmpe3 lcvqzt1s0u ; } fwjzjud4mi ; typedef struct { acvtcz55rn
lcvqzt1s0u ; } ecmh0hr5s2 ; typedef struct { mruqemziqh lcvqzt1s0u ; }
pc4teyp50g ; typedef struct { oro2xznq4y lcvqzt1s0u ; } ftl4ir3hp0 ; typedef
struct { lontiafrv5 lcvqzt1s0u ; } hyf3to5xos ; typedef struct { haaujlu1zl
lcvqzt1s0u ; } ij0wjal3zp ; typedef struct { ocgievpcmf lcvqzt1s0u ; }
iwmz3we40n ; typedef struct { c1n0jnggmm lcvqzt1s0u ; } ekjfzsz3hg ; typedef
struct { real_T bjb2dhghpi [ 3 ] ; real_T eoildmcuvz [ 9 ] ; } jztpqiauj1 ;
typedef struct { real_T kbexeitavt [ 4 ] ; real_T h5wh4b5rct ; real_T
d33z0mbyhk ; real_T d5szsmebdo ; real_T bz31s42s1u ; real_T opkh3muany ;
real_T cwma5eq5ke ; real_T p2nljx3dbq ; real_T imq4m422ep [ 12 ] ; real_T
ftaf4cxqll [ 4 ] ; real_T gaoeewqk5x ; real_T cfkwlnof2v ; real_T cnco5gb5p4
; real_T d3cr0a5inc ; real_T dii1opjuxw ; real_T kctb5ztf1e ; real_T
ke422y3bvs ; real_T fuuyvpusrs ; real_T hpxyou1fxl ; real_T joma1bywx4 ;
real_T ns140f1t3p ; real_T c3s1hqfkfr ; real_T iufwwlr0ge ; real_T jsdlv222qc
; real_T p24b3nl2wp ; real_T olixj4xtkl ; real_T bbw5zyrrqz ; real_T
ogp2hwtunx ; real_T f01m4oosvg ; real_T gx2tzcmrwe ; real_T obsb1m4u4l ;
real_T k11qglhlxp ; real_T ismgtq3zck ; real_T mkkd4eqabm ; real_T bf2kwgrinx
; real_T g2jaz2ry10 ; real_T gbpcpgmhwi ; real_T jvgs2uru4k ; real_T
mi3utydr02 ; real_T f3w3p2nxm4 ; real_T fbyp0wzxjv ; real_T lvetekphxz ;
real_T fg4jh2yypn ; real_T julgzulrmc ; real_T cvwzw1hfzy ; real_T bjklpb2rya
; real_T kfd3ejtb1f ; real_T ons10a2rwj ; real_T oexu5qniuy [ 3 ] ; real_T
mstqxpzqfg [ 3 ] ; real_T kagvflkv30 [ 9 ] ; real_T hz1rwguwag ; real_T
jzgij4yhlc ; real_T ns1yn0d111 ; real_T mtsri5oeit ; real_T lpc02n3ntq ;
real_T esav0j3his ; real_T lnbbakkwsv ; real_T phlogjscto ; real_T h0u3dlxfhh
; real_T i3ympmozxc ; real_T kwyv52a2iq ; real_T mrtivmxzok ; real_T
oxh3shkcwr ; real_T dqqylbxuq5 ; real_T pwaomw2yrj ; real_T ddkghz2dmk [ 3 ]
; real_T f3z5ekoxpe [ 3 ] ; real_T de3gcclrpf [ 9 ] ; real_T atndxdnoha ;
real_T o2cghmzchb ; real_T bgytv1ipnn ; real_T ipcdka0rdk ; real_T c3lbwtdvd0
; real_T npitkxcqq2 ; real_T gysfmmd0g3 ; real_T b4q4rezl5q ; real_T
glpg1q0zrp ; real_T fsm4hj0yo3 ; real_T dilqq2ziew ; real_T pkxrfmf4km ;
real_T g14qb1cf4b ; real_T cumr04c4lu ; real_T cvybf3pb0o ; real_T bmhzwlmjce
; real_T a0insx4qj4 ; real_T imn5tyasnw ; real_T pcfnviw5ae ; real_T
o4fejfnl4y ; real_T o5r2t5nyti ; real_T gj1iqu4vq3 ; real_T gubs2kpup1 ;
real_T hb3cv2fi41 ; real_T mkkd545rnn ; real_T apmz02jse2 ; real_T hesaewh1nb
; real_T k30er0vypb ; real_T kv4swuqrzp ; real_T k5vua1hg0r ; real_T
n53jpn1qce ; real_T fj3higzat4 ; real_T gsndiu20vl ; real_T ba0ld5sik1 ;
real_T cub55shpyy ; real_T admeqoujcv ; real_T hfhahdak4j ; real_T jave5yanub
; real_T hydfzxc1qw ; real_T gjjpikelm0 ; real_T ifrllhbun4 ; real_T
k3bhiqv4ab ; real_T jmkkmaikcr ; real_T hj3pfrn0ic ; real_T jhnjiazapj ;
real_T dzbahowvuv ; real_T gzqzv2jn3n ; real_T frpicsct0d ; real_T obk1sfjkrp
; real_T cf3brbnk05 ; real_T g5d12pto5p ; real_T nm5yy52fdt ; real_T
fockx2e1oo ; real_T jiseemzgoj ; real_T gr04nqocvw ; real_T ddj1fithyg ;
real_T j3vo1m3qkh ; real_T cqusxcow01 ; real_T kdvyxjauqy ; real_T ogkxlqn0ly
; real_T mocljcsb0l ; real_T jwi0ilfhab ; real_T dtbhvrzq1j ; real_T
ahcnv4kv2y ; real_T gpj11f5vfk ; real_T hjtogq12op ; real_T kt3crarmz2 ;
real_T iss5uqc4oh ; real_T npf0ptc4p1 ; real_T i5nks3ee35 ; real_T olljvthm5q
[ 3 ] ; real_T itsa2d3ctl [ 3 ] ; real_T ogwmdf0uzr [ 9 ] ; real_T bmc0r01xwr
; real_T cxzcjkmj54 ; real_T am3a3q2vdm ; real_T ncyqy0yu1h ; real_T
fbx3ttcelh ; real_T ph2yn2vowk ; real_T f5yw0whn1p ; real_T mpfonz5yz3 ;
real_T nrag1moweu ; real_T hzazvjwjyl ; real_T ihbutzjchr ; real_T ogpxhmlkj2
; real_T aols2kz0cw ; real_T caxemhiem2 ; real_T h5c0akz3b0 ; real_T
fh5o3hjnn4 [ 3 ] ; real_T csi1vdg0u4 [ 3 ] ; real_T okar031ivj [ 9 ] ; real_T
km5fhe0gnv ; real_T b3ysg2oisu ; real_T mbyyukadlc ; real_T btnqxxqvbk ;
real_T e2vyxvqumc ; real_T biv4pqjbsb ; real_T pqxcjr4w14 ; real_T auyhxb2a4z
; real_T eucevkyrvu ; real_T mm2332ncmt ; real_T cqk3cfqgxq ; real_T
h3uwlqjqg4 ; real_T fiowcjrj00 ; real_T bnbgtownki ; real_T jqa5jx145u ;
real_T l4lqosbi0l ; real_T htzr5zrjqm ; real_T kxof5m5sk5 ; real_T lhdwcfxppe
; real_T iczvf5zaaa ; real_T hfbgp15dhh ; real_T ppdns1mxw2 ; real_T
cbzncau3rp ; real_T gjifpqqgt0 ; real_T ck21m4ewez ; real_T dfj3e5gry1 ;
real_T g1pa1tegyz ; real_T mfblx2srrc ; real_T bfpipbo4us ; real_T j2swsz0urn
; real_T gcyfeyhaz1 ; real_T hhhc50br05 ; real_T dxpeamn3hy ; real_T
foidnpo0oq ; real_T ayhcndhlu0 ; real_T iy5hfoisnh ; real_T hvqnttiddu ;
real_T fhd4tw3lqf ; real_T mh1rri0s1r ; real_T p50mqehgj2 ; real_T n2dth3maot
; real_T p2zqzg0hdx ; real_T ghocmfp3xl ; real_T b0iwqa1a5h ; real_T
nrv0gankso ; real_T konnlipgzj ; real_T pox1w1uosi ; real_T ch20ki1ox4 ;
real_T hzyod14crr ; real_T ofl5o4i551 ; real_T ncdmeuoier ; real_T dfyhgivb3s
; real_T nazhgfr5nl ; real_T lc2piclprf ; real_T ltgrpu3l4q ; real_T
p2b1rccb34 ; real_T lwb33yxaj2 ; real_T h4ppx2rq3w ; real_T dshvak0l0t ;
real_T gu4axrtwrg ; real_T moxt0psems ; real_T mbwmesteyr ; real_T p012a231oc
; real_T mwy3qoplw4 ; real_T itz0cpq0ou ; real_T lerala1r0i ; real_T
jb3ei4i5jp ; real_T cxto45s3l2 ; real_T b3pltw4d0f ; real_T ajq4ib3z4q ;
real_T dkzgnds2he [ 3 ] ; real_T igmssod5aw [ 3 ] ; real_T kf1zpwhh4b [ 9 ] ;
real_T nfugqxwdby ; real_T ck02uwdqxw ; real_T f2neh4sudt ; real_T ngdktndyrj
; real_T js1tlkukyv ; real_T gt0zjjnrzw ; real_T afg2asvxic ; real_T
pwzktwzfnp ; real_T nyijyqxduk ; real_T nvdwbnmtpb ; real_T c2oxnm12uw ;
real_T n5prl5hqtx ; real_T mjh54inqdn ; real_T aqlfp0saei ; real_T caw3ndnhbd
; real_T cd2fs5ehmc [ 3 ] ; real_T bkuftmabbw [ 3 ] ; real_T krjpez4j44 [ 9 ]
; real_T kauangfpz2 ; real_T ic0iaiqfjv ; real_T nauzowwkur ; real_T
ktxbr2qn24 ; real_T imih2mhusj ; real_T bb1nk0llvq ; real_T oi1h5qg1nu ;
real_T lhkjmqfwms ; real_T moonpo1qpg ; real_T cuu54cqr5x ; real_T nkimsrvhv0
; real_T ab5d4ujsnv ; real_T ouuwsyssnc ; real_T g1ni03prm0 ; real_T
mxyh3y0fqs ; real_T lczmfdcnj1 ; real_T mygyc4cuhm ; real_T dp1b4412au ;
real_T kupsc2ix3y ; real_T gvtptbywt1 ; real_T efwt4j5usk ; real_T p30bk3v314
; real_T pgnkahl1ya ; real_T ldhgong4mk ; real_T mzqfye00vu ; real_T
bpsd43fx4l ; real_T ftkrxmz2gl ; real_T e1urxzmaq0 ; real_T pzvvahdijo ;
real_T ba3eebeu23 ; real_T ajlesncb5s ; real_T cohvkbnuuk ; real_T nbbgsqzccu
; real_T hi0pegbdyc ; real_T bcaoqtity3 ; real_T hvepbvdr32 ; real_T
m2rztfpqle ; real_T jy4skpqqza ; real_T niwe0per3h ; real_T nwjplc5kqb ;
real_T ljz3ikjllu ; real_T jybjfieadv ; real_T ahkepbzhuv ; real_T mjwgioxasa
; real_T apo4noaele ; real_T bs5ayvcsk0 ; real_T iqkqeqrnd5 ; real_T
mcr41djdeb ; real_T nd50pzk0ym ; real_T mekhgj4dmz ; real_T ekt1rzqyam ;
real_T o0xjpkriin ; real_T do3if2olyh ; real_T btx3kvx2ih ; real_T e1ufkioyxf
; real_T ar0tmceeba ; real_T aggsae520q ; real_T iwxicjhyqf ; real_T
bnsxmpvh0w ; real_T egxcf2r42j ; real_T ag332kqdvc ; real_T kmm51olbtz ;
real_T d4xe44ovvq ; real_T kbvh3hrm4f ; real_T bkluqrodja ; real_T ggmwi1oklo
; real_T dty4d52ply ; real_T mi4ly2orqs ; real_T nkm02g5azg ; real_T
b2ahrn1m5z ; real_T fraaz4lots [ 3 ] ; real_T pnn2p0abyz [ 3 ] ; real_T
awixywbfuo [ 9 ] ; real_T b3kmb4trgj ; real_T deukthg15z ; real_T or1pmiehbm
; real_T gjenvtggot ; real_T cbphg11o4k ; real_T l4brhjoncl ; real_T
dhk4cumhug ; real_T o3uc3arohm ; real_T bs5oyflpc4 ; real_T biudufsugi ;
real_T jwvrvmpniz ; real_T mavol2x2ye ; real_T pge4rqmuym ; real_T mjnitjatxg
; real_T aco4ypxfsm ; real_T hjzs3f2f4p [ 3 ] ; real_T pmmrxnudo1 [ 3 ] ;
real_T kieptjun4i [ 9 ] ; real_T c4spjjrnou ; real_T lc1hxdornj ; real_T
eonipvj1k0 ; real_T bbbhu0swkp ; real_T hcxjtuo55z ; real_T gnpc1bj2np ;
real_T muroenhlxx ; real_T nbxvmo3lgk ; real_T icol2u0fpg ; real_T euccxm0qrg
; real_T fzjncdftut ; real_T a5ldoidwqe ; real_T flsml1nkv1 ; real_T
hn3qcfzdqi ; real_T jcpawmwg3g ; real_T kpc1dliopx ; real_T na5nhpz2m2 ;
real_T deyxiewxuk ; real_T pyldnrbuod ; real_T irvwz5wovb ; real_T avwnhpgxj1
; real_T fw2rrhfwt2 ; real_T ogqbn0zua1 ; real_T e40b3h5ffu ; real_T
nf4jsbi5wr ; real_T pkyhejy0vp ; real_T bj5ypscq0g ; real_T oo2du3h4oj ;
real_T mw4grvy22m ; real_T k5tf43ru55 ; real_T ptxv211opk ; real_T ntxmyrdcci
; real_T l1fgxh5rmu ; real_T csv1tz3mo5 ; real_T o2v1omqp5o ; real_T
fug3ylqa5c ; real_T eu0prsnkho ; real_T m2qthtd2dk ; real_T n5naxrnqpp ;
real_T lvdk5yc0vx ; real_T d4xbfidkhy ; real_T l1v2ykrtac ; real_T etnalojlqn
; real_T jyhyy5jhuv [ 4 ] ; real_T l1buwvww42 [ 4 ] ; real_T laszgf0kuz [ 4 ]
; real_T pnnunnvv1j [ 3 ] ; real_T gsskq4zyxa [ 3 ] ; real_T d3ffw0bqsw ;
real_T bhtsntdwoh [ 6 ] ; real_T iervwtn0w5 ; real_T pozrpcw3rm ; real_T
kyrnjux3iw [ 2 ] ; real_T huii2aaokv [ 2 ] ; real_T p1hnofbqbf [ 2 ] ; real_T
j3goyfyj54 [ 3 ] ; real_T ow2xlzwlpr ; real_T idd2bdwvig ; real_T nd5yaadfjn
; real_T phtmvwm1qm ; real_T ib54sd0pej ; real_T jsk5luwvju [ 3 ] ; real_T
n4g0nfc4au [ 3 ] ; real_T m5swi44apm ; real_T prlujidgvs ; real_T nrjbcbkraq
; real_T enb3lqwiyx ; real_T f11ihjym5d [ 3 ] ; real_T ponlrrdraj [ 3 ] ;
real_T ecbos4qscr ; real_T aunggg41b5 ; real_T phf53zkp1e ; real_T f4g2t0avbl
; real_T b0z4gwmh4i [ 3 ] ; real_T a5sij35bll [ 3 ] ; real_T pc1zej1xix ;
real_T jamoyndfv0 ; real_T csiqu2egxv ; real_T c0aneq0jso ; real_T hoyuoz4g0k
[ 3 ] ; real_T oxc1mfwz5g [ 2 ] ; real_T lb143o4zo2 [ 12 ] ; real_T
kh1nblrgqs [ 4 ] ; real_T avc4qfob4e [ 2 ] ; real_T d0bzowv2xg [ 4 ] ; real_T
lg2haxd3ng ; real_T da1axvglkx ; real_T nabgbcf5q2 ; real_T ohauu0whxn ;
jztpqiauj1 nqfgq4kh2x [ 4 ] ; h20hxunqni hzwxfzysvm [ 1 ] ; ikqrgkdcac
fbdb5pexuk ; h20hxunqni d22xfw4kpx [ 1 ] ; ikqrgkdcac i24h43uxd3 ; h20hxunqni
g2eyqylo5m [ 1 ] ; ikqrgkdcac dycowragfc ; h20hxunqni lf15r5ane43 [ 1 ] ;
ikqrgkdcac f1abnn2ast ; } id4lpjcjia ; typedef struct { real_T bzrcg4ekd2 ;
real_T hx3dqme3j0 ; real_T hvodgxjjby ; real_T h3znsdkf03 ; real_T od03lov34i
; real_T js1pxba5c2 ; real_T kear3lpxvq ; real_T nhs2etlup5 ; real_T
cpkkyluphr ; real_T pd5cfi4ugv ; real_T mk0ozmamcr ; real_T l0dwzkeuuy ;
real_T ncgxsvvru2 ; real_T m44z2pktlv ; real_T baajemjlf1 ; real_T nag3iizhma
; int_T kvj4uckeqc ; int_T bokb5rvw5x ; int8_T fvd2istvuu ; fwjzjud4mi
hzwxfzysvm [ 1 ] ; fwjzjud4mi d22xfw4kpx [ 1 ] ; fwjzjud4mi g2eyqylo5m [ 1 ]
; fwjzjud4mi lf15r5ane43 [ 1 ] ; } bpefjqedzq ; typedef struct { real_T
l2hk3fgmlh [ 4 ] ; real_T boq0sjomkz ; real_T g4fxozrdb2 ; real_T i12d3wngfk
; real_T betxkjviha ; real_T n5tb00omor [ 4 ] ; real_T bmsz0qfwwr [ 2 ] ;
ecmh0hr5s2 hzwxfzysvm [ 1 ] ; ecmh0hr5s2 d22xfw4kpx [ 1 ] ; ecmh0hr5s2
g2eyqylo5m [ 1 ] ; ecmh0hr5s2 lf15r5ane43 [ 1 ] ; } hcqlainyez ; typedef
struct { real_T l2hk3fgmlh [ 4 ] ; real_T boq0sjomkz ; real_T g4fxozrdb2 ;
real_T i12d3wngfk ; real_T betxkjviha ; real_T n5tb00omor [ 4 ] ; real_T
bmsz0qfwwr [ 2 ] ; pc4teyp50g hzwxfzysvm [ 1 ] ; pc4teyp50g d22xfw4kpx [ 1 ]
; pc4teyp50g g2eyqylo5m [ 1 ] ; pc4teyp50g lf15r5ane43 [ 1 ] ; } ha25zehowz ;
typedef struct { boolean_T l2hk3fgmlh [ 4 ] ; boolean_T boq0sjomkz ;
boolean_T g4fxozrdb2 ; boolean_T i12d3wngfk ; boolean_T betxkjviha ;
boolean_T n5tb00omor [ 4 ] ; boolean_T bmsz0qfwwr [ 2 ] ; ftl4ir3hp0
hzwxfzysvm [ 1 ] ; ftl4ir3hp0 d22xfw4kpx [ 1 ] ; ftl4ir3hp0 g2eyqylo5m [ 1 ]
; ftl4ir3hp0 lf15r5ane43 [ 1 ] ; } dn0l2t323g ; typedef struct { real_T
l2hk3fgmlh [ 4 ] ; real_T boq0sjomkz ; real_T g4fxozrdb2 ; real_T i12d3wngfk
; real_T betxkjviha ; real_T n5tb00omor [ 4 ] ; real_T bmsz0qfwwr [ 2 ] ;
hyf3to5xos hzwxfzysvm [ 1 ] ; hyf3to5xos d22xfw4kpx [ 1 ] ; hyf3to5xos
g2eyqylo5m [ 1 ] ; hyf3to5xos lf15r5ane43 [ 1 ] ; } e3r11zdizr ; typedef
struct { real_T l2hk3fgmlh [ 4 ] ; real_T boq0sjomkz ; real_T g4fxozrdb2 ;
real_T i12d3wngfk ; real_T betxkjviha ; real_T n5tb00omor [ 4 ] ; real_T
bmsz0qfwwr [ 2 ] ; ij0wjal3zp hzwxfzysvm [ 1 ] ; ij0wjal3zp d22xfw4kpx [ 1 ]
; ij0wjal3zp g2eyqylo5m [ 1 ] ; ij0wjal3zp lf15r5ane43 [ 1 ] ; } abmhsgyjam ;
typedef struct { real_T l2hk3fgmlh [ 4 ] ; real_T boq0sjomkz ; real_T
g4fxozrdb2 ; real_T i12d3wngfk ; real_T betxkjviha ; real_T n5tb00omor [ 4 ]
; real_T bmsz0qfwwr [ 2 ] ; iwmz3we40n hzwxfzysvm [ 1 ] ; iwmz3we40n
d22xfw4kpx [ 1 ] ; iwmz3we40n g2eyqylo5m [ 1 ] ; iwmz3we40n lf15r5ane43 [ 1 ]
; } gpylimk50b ; typedef struct { ekjfzsz3hg hzwxfzysvm [ 1 ] ; ekjfzsz3hg
d22xfw4kpx [ 1 ] ; ekjfzsz3hg g2eyqylo5m [ 1 ] ; ekjfzsz3hg lf15r5ane43 [ 1 ]
; } kg2zcpxtlx ; struct nlgkjy4ieu_ { real_T P_0 ; real_T P_1 ; real_T P_2 ;
real_T P_3 ; real_T P_4 ; boolean_T P_5 ; boolean_T P_6 ; boolean_T P_7 ;
boolean_T P_8 [ 8 ] ; } ; struct obhtuyokvw_ { nlgkjy4ieu ah1sdocsnj ; } ;
struct bhpfbc1iry_ { obhtuyokvw lcvqzt1s0u ; } ; struct becrktx0d0o_ { real_T
P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 [ 31 ] ; real_T P_5 ;
real_T P_6 ; real_T P_7 [ 31 ] ; real_T P_8 ; real_T P_9 ; real_T P_10 ;
real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T
P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ;
real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T
P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ;
real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T
P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ;
real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T
P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ;
real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T
P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 ;
real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ; real_T
P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ;
real_T P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ; real_T
P_82 ; real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T P_86 ; real_T P_87 ;
real_T P_88 ; real_T P_89 ; real_T P_90 ; real_T P_91 ; real_T P_92 ; real_T
P_93 ; real_T P_94 ; real_T P_95 ; real_T P_96 ; real_T P_97 ; real_T P_98 ;
real_T P_99 ; real_T P_100 ; real_T P_101 ; real_T P_102 ; real_T P_103 ;
real_T P_104 ; real_T P_105 ; real_T P_106 ; real_T P_107 ; real_T P_108 ;
real_T P_109 ; real_T P_110 ; real_T P_111 ; real_T P_112 ; real_T P_113 ;
real_T P_114 ; real_T P_115 ; real_T P_116 ; real_T P_117 ; real_T P_118 ;
real_T P_119 ; real_T P_120 ; real_T P_121 ; real_T P_122 ; real_T P_123 ;
real_T P_124 ; real_T P_125 ; real_T P_126 ; real_T P_127 ; real_T P_128 ;
real_T P_129 ; real_T P_130 ; real_T P_131 ; real_T P_132 ; real_T P_133 ;
real_T P_134 ; real_T P_135 ; real_T P_136 ; real_T P_137 ; real_T P_138 ;
real_T P_139 ; real_T P_140 ; real_T P_141 ; real_T P_142 ; real_T P_143 ;
real_T P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ; real_T P_148 ;
real_T P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ; real_T P_153 ;
real_T P_154 ; real_T P_155 ; real_T P_156 ; real_T P_157 ; real_T P_158 ;
real_T P_159 ; real_T P_160 ; real_T P_161 ; real_T P_162 ; real_T P_163 ;
real_T P_164 ; real_T P_165 ; real_T P_166 ; real_T P_167 ; real_T P_168 ;
real_T P_169 ; real_T P_170 ; real_T P_171 [ 31 ] ; real_T P_172 ; real_T
P_173 ; real_T P_174 ; real_T P_175 ; real_T P_176 ; real_T P_177 ; real_T
P_178 ; real_T P_179 ; real_T P_180 ; real_T P_181 ; real_T P_182 ; real_T
P_183 ; real_T P_184 ; real_T P_185 ; real_T P_186 ; real_T P_187 ; real_T
P_188 ; real_T P_189 ; real_T P_190 ; real_T P_191 ; real_T P_192 ; real_T
P_193 ; real_T P_194 ; real_T P_195 ; real_T P_196 ; real_T P_197 ; real_T
P_198 ; real_T P_199 ; real_T P_200 ; real_T P_201 ; real_T P_202 ; real_T
P_203 ; real_T P_204 ; real_T P_205 ; real_T P_206 ; real_T P_207 ; real_T
P_208 ; real_T P_209 ; real_T P_210 ; real_T P_211 ; real_T P_212 ; real_T
P_213 ; real_T P_214 ; real_T P_215 ; real_T P_216 ; real_T P_217 ; real_T
P_218 ; real_T P_219 ; real_T P_220 ; real_T P_221 ; real_T P_222 ; real_T
P_223 ; real_T P_224 ; real_T P_225 ; real_T P_226 ; real_T P_227 ; real_T
P_228 ; real_T P_229 ; real_T P_230 ; real_T P_231 ; real_T P_232 ; real_T
P_233 ; real_T P_234 ; real_T P_235 ; real_T P_236 ; real_T P_237 ; real_T
P_238 ; real_T P_239 ; real_T P_240 ; real_T P_241 ; real_T P_242 ; real_T
P_243 ; real_T P_244 ; real_T P_245 ; real_T P_246 [ 2 ] ; real_T P_247 ;
real_T P_248 ; real_T P_249 ; real_T P_250 ; real_T P_251 ; real_T P_252 ;
real_T P_253 ; real_T P_254 ; real_T P_255 ; real_T P_256 ; real_T P_257 ;
real_T P_258 ; real_T P_259 ; real_T P_260 ; real_T P_261 ; real_T P_262 ;
real_T P_263 ; real_T P_264 ; real_T P_265 ; real_T P_266 ; real_T P_267 ;
real_T P_268 ; real_T P_269 ; real_T P_270 ; real_T P_271 ; real_T P_272 [ 4
] ; real_T P_273 ; real_T P_274 ; real_T P_275 ; real_T P_276 ; real_T P_277
; real_T P_278 ; real_T P_279 ; real_T P_280 ; real_T P_281 [ 3 ] ; real_T
P_282 [ 3 ] ; real_T P_283 [ 9 ] ; real_T P_284 ; real_T P_285 ; real_T P_286
[ 3 ] ; real_T P_287 [ 3 ] ; real_T P_288 [ 9 ] ; real_T P_289 ; real_T P_290
; real_T P_291 ; real_T P_292 ; real_T P_293 ; real_T P_294 ; real_T P_295 ;
real_T P_296 ; real_T P_297 ; real_T P_298 ; real_T P_299 ; real_T P_300 ;
real_T P_301 ; real_T P_302 ; real_T P_303 ; real_T P_304 ; real_T P_305 ;
real_T P_306 ; real_T P_307 ; real_T P_308 ; real_T P_309 ; real_T P_310 ;
real_T P_311 ; real_T P_312 ; real_T P_313 ; real_T P_314 ; real_T P_315 ;
real_T P_316 ; real_T P_317 ; real_T P_318 ; real_T P_319 ; real_T P_320 ;
real_T P_321 ; real_T P_322 ; real_T P_323 ; real_T P_324 ; real_T P_325 ;
real_T P_326 ; real_T P_327 ; real_T P_328 [ 3 ] ; real_T P_329 [ 3 ] ;
real_T P_330 [ 9 ] ; real_T P_331 ; real_T P_332 ; real_T P_333 [ 3 ] ;
real_T P_334 [ 3 ] ; real_T P_335 [ 9 ] ; real_T P_336 ; real_T P_337 ;
real_T P_338 ; real_T P_339 ; real_T P_340 ; real_T P_341 ; real_T P_342 ;
real_T P_343 ; real_T P_344 ; real_T P_345 ; real_T P_346 ; real_T P_347 ;
real_T P_348 ; real_T P_349 ; real_T P_350 ; real_T P_351 ; real_T P_352 ;
real_T P_353 ; real_T P_354 ; real_T P_355 ; real_T P_356 ; real_T P_357 ;
real_T P_358 ; real_T P_359 ; real_T P_360 ; real_T P_361 ; real_T P_362 ;
real_T P_363 ; real_T P_364 ; real_T P_365 ; real_T P_366 ; real_T P_367 ;
real_T P_368 ; real_T P_369 ; real_T P_370 ; real_T P_371 ; real_T P_372 ;
real_T P_373 ; real_T P_374 ; real_T P_375 [ 3 ] ; real_T P_376 [ 3 ] ;
real_T P_377 [ 9 ] ; real_T P_378 ; real_T P_379 ; real_T P_380 [ 3 ] ;
real_T P_381 [ 3 ] ; real_T P_382 [ 9 ] ; real_T P_383 ; real_T P_384 ;
real_T P_385 ; real_T P_386 ; real_T P_387 ; real_T P_388 ; real_T P_389 ;
real_T P_390 ; real_T P_391 ; real_T P_392 ; real_T P_393 ; real_T P_394 ;
real_T P_395 ; real_T P_396 ; real_T P_397 ; real_T P_398 ; real_T P_399 ;
real_T P_400 ; real_T P_401 ; real_T P_402 ; real_T P_403 ; real_T P_404 ;
real_T P_405 ; real_T P_406 ; real_T P_407 ; real_T P_408 ; real_T P_409 ;
real_T P_410 ; real_T P_411 ; real_T P_412 ; real_T P_413 ; real_T P_414 ;
real_T P_415 ; real_T P_416 ; real_T P_417 ; real_T P_418 ; real_T P_419 ;
real_T P_420 ; real_T P_421 ; real_T P_422 [ 3 ] ; real_T P_423 [ 3 ] ;
real_T P_424 [ 9 ] ; real_T P_425 ; real_T P_426 ; real_T P_427 [ 3 ] ;
real_T P_428 [ 3 ] ; real_T P_429 [ 9 ] ; real_T P_430 ; real_T P_431 ;
real_T P_432 ; real_T P_433 ; real_T P_434 ; real_T P_435 ; real_T P_436 ;
real_T P_437 ; real_T P_438 ; real_T P_439 ; real_T P_440 ; real_T P_441 ;
real_T P_442 ; real_T P_443 ; real_T P_444 ; real_T P_445 ; real_T P_446 ;
real_T P_447 ; real_T P_448 ; real_T P_449 ; real_T P_450 ; real_T P_451 ;
real_T P_452 ; real_T P_453 ; real_T P_454 ; real_T P_455 ; real_T P_456 ;
real_T P_457 ; real_T P_458 ; real_T P_459 ; real_T P_460 ; real_T P_461 ;
real_T P_462 ; real_T P_463 ; real_T P_464 [ 2 ] ; real_T P_465 [ 2 ] ;
real_T P_466 [ 3 ] ; real_T P_467 ; real_T P_468 ; real_T P_469 ; real_T
P_470 ; real_T P_471 ; real_T P_472 ; real_T P_473 ; real_T P_474 ; real_T
P_475 ; real_T P_476 ; real_T P_477 ; real_T P_478 ; real_T P_479 [ 4 ] ;
bhpfbc1iry hzwxfzysvm ; bhpfbc1iry d22xfw4kpx ; bhpfbc1iry g2eyqylo5m ;
bhpfbc1iry lf15r5ane43 ; } ; struct mkmp3c5j3y { struct SimStruct_tag *
_mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 2 ] ; real_T mr_nonContSig1 [
2 ] ; real_T mr_nonContSig2 [ 2 ] ; real_T mr_nonContSig3 [ 3 ] ; real_T
mr_nonContSig4 [ 4 ] ; real_T mr_nonContSig5 [ 1 ] ; real_T mr_nonContSig6 [
1 ] ; real_T mr_nonContSig7 [ 1 ] ; real_T mr_nonContSig8 [ 1 ] ; real_T
mr_nonContSig9 [ 1 ] ; real_T mr_nonContSig10 [ 1 ] ; real_T mr_nonContSig11
[ 12 ] ; real_T mr_nonContSig12 [ 1 ] ; real_T mr_nonContSig13 [ 1 ] ;
boolean_T mr_nonContSig14 [ 1 ] ; boolean_T mr_nonContSig15 [ 1 ] ; boolean_T
mr_nonContSig16 [ 1 ] ; boolean_T mr_nonContSig17 [ 1 ] ; boolean_T
mr_nonContSig18 [ 1 ] ; boolean_T mr_nonContSig19 [ 1 ] ; boolean_T
mr_nonContSig20 [ 1 ] ; boolean_T mr_nonContSig21 [ 1 ] ; }
NonContDerivMemory ; ssNonContDerivSigInfo nonContDerivSignal [ 22 ] ; const
rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
7 ] ; int32_T * vardimsAddress [ 7 ] ; RTWLoggingFcnPtr loggingPtrs [ 7 ] ;
sysRanDType * systemRan [ 38 ] ; int_T systemTid [ 38 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct {
id4lpjcjia rtb ; bpefjqedzq rtdw ; pa50wxsaaa rtm ; } pqca3kvywqf ; extern
void lahi4jyhaj ( SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports
* * mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 ,
pa50wxsaaa * const hokadafud5 , id4lpjcjia * localB , bpefjqedzq * localDW ,
hcqlainyez * localX , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_PassVeh7DOF_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_PassVeh7DOF_GetDWork ( const
pqca3kvywqf * mdlrefDW ) ; extern void mr_PassVeh7DOF_SetDWork ( pqca3kvywqf
* mdlrefDW , const mxArray * ssDW ) ; extern void
mr_PassVeh7DOF_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_PassVeh7DOF_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * PassVeh7DOF_GetCAPIStaticMap ( void ) ;
extern void ptwb5m53nr ( real_T cved3liee0 , real_T hr35hjpkhm , real_T
gbdhc1rwja , real_T jrgdlfbz0l , real_T k2sxinhxgw , real_T hv2idhietl ,
real_T ashlevpkyl , real_T awiwrbj1ah , real_T inzpjy4lsf , real_T hlmrktqqxx
, real_T nskttisvdw , real_T gx2hm5rb2y , const real_T * j5fczfhdct , real_T
hogvqsfuar , real_T b044mnnsii , real_T gf4qpdl150 , real_T pu1ucopikz ,
real_T oast2q50w1 , real_T pcxjf2dejm , real_T ciupjj5jym , real_T ejxwq2ptzb
, real_T al51nl4udn , real_T dgtanepmh3 , real_T pzgccsn2wd , real_T
camr2op5y5 , real_T keqisnbd3f , real_T dhjbvde1ql , real_T itr0vkexlm ,
real_T fb1lsx4wru , real_T ch5mu4pvuj , real_T ffca2wfrbb , real_T gvisb41nzp
, real_T kzpuc5zaqp , real_T lxinzmxu4z , real_T b5rhrqe32p , real_T
apc4wkkzj0 , real_T aqcvmgvimo , const real_T * bn0g4xdsr2 , real_T
f1zwljlqis , real_T faetpfbe3t , real_T f2wrfj3ld4 , real_T pj0acbgno5 ,
real_T jdp0ygo3rk , const real_T m3cuefccje [ 3 ] , const real_T kktb55loxf [
3 ] , const real_T eonbpbm1ha [ 9 ] , real_T fk1k5ewp1k , real_T ptghaz5var ,
real_T oku1yjbub2 , real_T b4mwug2qvn , real_T kswf03qlmx , real_T ev0nmrvz3n
, real_T gmukh33j1x , real_T ogftb2kvic , real_T hovfcz1beb , real_T
cnhq453n1f , real_T pkzjbcphib , real_T msi2x0cy5n , real_T amqujbosc0 ,
real_T ewmdujvrwd , real_T mc1li10ian , const real_T i5qknzmimx [ 3 ] , const
real_T k2ajbqqlbw [ 3 ] , const real_T c1tj0ta223 [ 9 ] , real_T cghblzuxit ,
real_T nnclxiugbw , real_T k3l0t243jz , real_T j3afmcxwz5 , real_T a3e0qsj3au
, real_T mkagm5ibpa , real_T bi25pt2vjy , real_T lmhxu3lxab , real_T
envxrls2yl , real_T iz3vm40vgt , real_T baznp0pjy0 , real_T l1g1n0fail ,
real_T ldjsaiwmlj , real_T lvflwdxi5c , real_T fbu1d4l3xg , real_T lyrupr0dj4
, real_T gkf12fuftl , real_T ezcoorwedf , real_T phwbwigd5c , real_T
k3l0glmlg0 , real_T pnspslh2fe , real_T a3qmcmhclv , real_T hizlzr3fbv ,
real_T nabnbe0jtn , real_T kihhma0xf1 , real_T cf0v1zbgxi , real_T kiu1b33l4h
, real_T * b335sfmhae , real_T * njhenvfe4e , ikqrgkdcac * localB , real_T
rtp_FZMAX , real_T rtp_FZMIN , real_T rtp_VXLOW , real_T rtp_kappamax ) ;
extern void agp0kvhfzx ( amgc5viqpp * localB , ozgwn1x4el * localDW ,
nlgkjy4ieu * localP , ihyl1wiej4 * localX , real_T rtp_omegao ) ; extern void
i0xuaxjkre ( amgc5viqpp * localB , ozgwn1x4el * localDW , ihyl1wiej4 * localX
) ; extern void l4s3qwfe05 ( amgc5viqpp * localB ) ; extern void gxel4okbyr (
amgc5viqpp * localB , ozgwn1x4el * localDW , imbwkukzbz * localXdot ) ;
extern void dlyl3f4aia ( pa50wxsaaa * const hokadafud5 , real_T b32oizxwva ,
real_T ken34ttqyi , amgc5viqpp * localB , ozgwn1x4el * localDW , nlgkjy4ieu *
localP , kfn2mmtqck * localZCSV , real_T rtp_br , real_T rtp_OmegaTol ) ;
extern void kxq1u1mbaq ( pa50wxsaaa * const hokadafud5 , real_T b32oizxwva ,
real_T ken34ttqyi , real_T e35lu01p2h , amgc5viqpp * localB , ozgwn1x4el *
localDW , nlgkjy4ieu * localP , ihyl1wiej4 * localX , real_T rtp_omegao ,
real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol ) ; extern void
kxaz1orurl ( int32_T NumIters , h20hxunqni localB [ 1 ] , fwjzjud4mi localDW
[ 1 ] , bhpfbc1iry * localP , ecmh0hr5s2 localX [ 1 ] , real_T rtp_omegao ) ;
extern void cp2wwmxbs5 ( int32_T NumIters , h20hxunqni localB [ 1 ] ,
fwjzjud4mi localDW [ 1 ] , ecmh0hr5s2 localX [ 1 ] ) ; extern void mulgnbyr4x
( int32_T NumIters , h20hxunqni localB [ 1 ] ) ; extern void gmtbryc4la (
int32_T NumIters , const real_T * j1fwhfq2cu , const real_T * dnbk4yhtuj ,
const real_T * aq2zqqc1f1 , h20hxunqni localB [ 1 ] , fwjzjud4mi localDW [ 1
] , pc4teyp50g localXdot [ 1 ] ) ; extern void ik0wvz4qgi ( int32_T NumIters
, pa50wxsaaa * const hokadafud5 , const real_T * j1fwhfq2cu , const real_T *
dnbk4yhtuj , const real_T * aq2zqqc1f1 , h20hxunqni localB [ 1 ] , fwjzjud4mi
localDW [ 1 ] , bhpfbc1iry * localP , ekjfzsz3hg localZCSV [ 1 ] , real_T
rtp_br , real_T rtp_VXLOW , real_T rtp_Re ) ; extern void lf15r5ane4 (
int32_T NumIters , pa50wxsaaa * const hokadafud5 , const real_T * j1fwhfq2cu
, const real_T * dnbk4yhtuj , const real_T * aq2zqqc1f1 , real_T * lecxwkizel
, h20hxunqni localB [ 1 ] , fwjzjud4mi localDW [ 1 ] , bhpfbc1iry * localP ,
ecmh0hr5s2 localX [ 1 ] , real_T rtp_omegao , real_T rtp_br , real_T rtp_Iyy
, real_T rtp_VXLOW , real_T rtp_Re ) ; extern void hzczw4rimi ( pa50wxsaaa *
const hokadafud5 , real_T * pe5smgk1bf , real_T * cr4vlmhzvc , real_T *
beq1qzuhx3 , real_T * lo50jqtaqt , real_T * mzzkjogxl0 , real_T g2tnztcpzi [
4 ] , id4lpjcjia * localB , bpefjqedzq * localDW , hcqlainyez * localX ) ;
extern void ps1ayp5pv5 ( pa50wxsaaa * const hokadafud5 , real_T * pe5smgk1bf
, real_T * cr4vlmhzvc , real_T * beq1qzuhx3 , real_T * lo50jqtaqt , real_T *
mzzkjogxl0 , real_T g2tnztcpzi [ 4 ] , id4lpjcjia * localB , bpefjqedzq *
localDW , hcqlainyez * localX ) ; extern void aoae4c423r ( real_T *
pe5smgk1bf , real_T * cr4vlmhzvc , real_T * beq1qzuhx3 , real_T * lo50jqtaqt
, real_T * mzzkjogxl0 , real_T g2tnztcpzi [ 4 ] , id4lpjcjia * localB ,
bpefjqedzq * localDW ) ; extern void iu231drtpw ( id4lpjcjia * localB ,
bpefjqedzq * localDW , ha25zehowz * localXdot ) ; extern void pgy4d5vijx (
pa50wxsaaa * const hokadafud5 , id4lpjcjia * localB , bpefjqedzq * localDW ,
kg2zcpxtlx * localZCSV ) ; extern void ii3iorkudk ( pa50wxsaaa * const
hokadafud5 , id4lpjcjia * localB , bpefjqedzq * localDW ) ; extern void
PassVeh7DOF ( pa50wxsaaa * const hokadafud5 , const real_T fo3cvtmfih [ 4 ] ,
const real_T dfx1ca0pmi [ 4 ] , const real_T pf4xf35zus [ 3 ] , const real_T
gxlrb30ei4 [ 4 ] , const real_T bv2zp3o4ji [ 4 ] , const real_T czlc2qmxmx [
4 ] , real_T * lfffcfi0vv , real_T * o4a5winsib , real_T * jhdgl4izoc ,
real_T * d45afs3uxn , real_T * pe5smgk1bf , real_T * paxgty22h2 , real_T *
ldkjetp0we , real_T * cr4vlmhzvc , real_T * beq1qzuhx3 , real_T * e5f1z1hip1
, real_T * lo50jqtaqt , real_T * mzzkjogxl0 , real_T * eobrear1ct , real_T
pnofovjzba [ 4 ] , real_T aehgk41bne [ 4 ] , real_T * jr1ehl1zxa , real_T
eueb01ol1w [ 4 ] , real_T g2tnztcpzi [ 4 ] , real_T ebhsrqq1o4 [ 4 ] , real_T
eplypn1mx4 [ 4 ] , id4lpjcjia * localB , bpefjqedzq * localDW , hcqlainyez *
localX ) ; extern void b51av3ulwn ( pa50wxsaaa * const hokadafud5 ) ;
#endif
