#include "__cf_flightControlSystem.h"
#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef flightControlSystem_COMMON_INCLUDES_
#define flightControlSystem_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "flightControlSystem_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T fau3qf03xm ; } hrtts4l5bc ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T bxsgbjn4aq_kkiq3xxxve [ 12 ] ; real32_T
kay0cd5epw_cxarnvbvui [ 9 ] ; real32_T kay0cd5epw_bhxxfovxdy [ 9 ] ; real_T
cvn1y0qugd_pbm3vprmfu [ 4 ] ; real_T debnagvb2q_cv5hdgrwft [ 3 ] ; real_T
kay0cd5epw_fqdqrf4qbc [ 3 ] ; real32_T fp0u5nlpgw [ 6 ] ; real32_T fv [ 4 ] ;
real_T anb5oj1pfl [ 2 ] ; real_T lykdweywxi [ 2 ] ; real_T bwqcqppmf2 [ 2 ] ;
real_T dvsfse2ekp [ 2 ] ; real_T otk3eizuo5 [ 2 ] ; real_T
dlbnl1ikca_g2mlkqadfk [ 2 ] ; real32_T aeuwjbq1ap_g1smspu5ke [ 3 ] ; real32_T
mp2qxfrcby_merlcviukg [ 3 ] ; boolean_T vecs_nan [ 8 ] ; real_T gh2ypb1cbo ;
real_T kyxvfj1u0m [ 2 ] ; real_T hl1gt1onfn ; real_T m1pbmijzoo [ 3 ] ;
real_T bmh1uxdp00 [ 2 ] ; real_T nrm ; real_T scale ; real_T absxk ; real_T t
; real_T jqbvkizrto_nz4o0shxby ; real_T b22seejnkq_ppxrqq0gsf ; real_T
vec2target_idx_1 ; real_T hzf3pepvlx_idx_0 ; real_T hzf3pepvlx_idx_1 ;
real32_T ho5b44npcl [ 2 ] ; real32_T adeo1vbgwa [ 6 ] ; real32_T dmhcbk042m [
2 ] ; real32_T ddoh1wonhb [ 3 ] ; real32_T lficepm3mc [ 3 ] ; real32_T
mgswyh41yi [ 2 ] ; real32_T bekwzy4z2m [ 2 ] ; real32_T hngearr0b1_llw0u2ae0v
[ 2 ] ; real32_T krvltktmtc_jwzvbuczlb [ 2 ] ; real32_T pzsluzni4a_dhmrxtyqop
[ 2 ] ; real32_T ma5qqh1kd2_guugdwf2m3 [ 2 ] ; real32_T jlxr1vljte_ldqodwenvz
[ 2 ] ; real32_T ona0tvczss ; real32_T ml1qws0rmi ; real32_T geo5shglit [ 2 ]
; real32_T g1o0ienmq0 [ 2 ] ; real32_T ezye0grcl4 ; real32_T kqqoboosgm [ 4 ]
; real32_T d0v5ufwbzs [ 2 ] ; real32_T ezhwpgszpj [ 2 ] ; real32_T kp2wyybtvv
[ 3 ] ; real32_T ho5b44npcl_mbvzarwird [ 16 ] ; real32_T pzsluzni4a [ 4 ] ;
real32_T gxr5em01cl [ 4 ] ; real32_T m3gx22n0v2 [ 2 ] ; real32_T i1vcqunjaq [
2 ] ; real32_T egipgh2zwz [ 2 ] ; real32_T k2fos24u52 [ 2 ] ; real32_T
am02ahvbbh ; real32_T ak5nwgg1nn ; real32_T acc1 ; real32_T Biggest_sum ;
real32_T sum ; real32_T ommhe4timg_dhamdvybc1 ; real32_T
anxg5mweww_dypejvacrn ; real32_T kwiatvim50_lxo5edjg3c ; real32_T
ptnwsicd12_owjr1h1vqy ; real32_T kjhd5a3hxc_bjbgfqrolh ; real32_T
i2isp25rdv_idx_2 ; real32_T pveoiu4lda_idx_2 ; real32_T f4ihbzxcff_idx_1 ;
real32_T av0beeyvfl_idx_1 ; real32_T i2isp25rdv_idx_0 ; real32_T
av0beeyvfl_idx_0 ; real32_T i2isp25rdv_idx_1 ; real32_T av0beeyvfl_idx_2 ;
real32_T ddkqv1pmir_idx_1 ; real32_T pveoiu4lda_idx_1 ; real32_T
ddkqv1pmir_idx_2 ; real32_T ewntiiyvca_idx_1 ; int32_T denIdx ; int32_T
n_best ; int32_T g3bl4433tw_nuebgmauvi ; int32_T i ; uint32_T l0snej1xwo ;
uint32_T l41vmn4q2m ; uint32_T duuws2afjr ; uint8_T bsum0gfj1k ; boolean_T
gb0vokbhuj ; boolean_T n5cpyr4ki1 ; boolean_T m3gx22n0v2_cl54gopm0x ;
boolean_T enu1mayiyp ; } eo4bbte2ey ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T mck2owxrk2 ; real_T etwz51o21c [ 2 ] ; real_T
c4t5e3w5ek [ 3 ] ; real_T bw2ribqmwm ; real_T fl2edockfe ; struct { void *
LoggedData ; void * SignalProbe ; } mpopad3fr1 ; real32_T jxg1zvdttz [ 2 ] ;
real32_T kgows215bs [ 3 ] ; real32_T liybiw1jbg [ 5 ] ; real32_T nbbc5odoq4 [
15 ] ; real32_T kzeijhdtif [ 2 ] ; real32_T heeedoxzle [ 10 ] ; real32_T
gqxdiwstsm [ 2 ] ; real32_T a3uar2xrsb [ 2 ] ; real32_T lw3rw5s0ye [ 2 ] ;
real32_T dap1x3o2yu ; real32_T mmra2ocd2f ; real32_T arxwp2yly1 [ 40 ] ;
real32_T flja5n4s5w ; real32_T crdrxyhgkv [ 40 ] ; real32_T pj0itb1fdn ;
real32_T cosb2ibhn3 [ 2 ] ; real32_T fuo05buemm [ 2 ] ; real32_T ppp4ajc3p1 ;
int32_T cfcgwprtdx ; uint32_T npsllq52wf ; uint32_T i13qoukcsn ; uint32_T
dxm3w2i52x ; real32_T ik5zcuhoy3 ; real32_T lfi3mnae2m [ 3 ] ; real32_T
lpva1qajzk ; real32_T dhhdwwczx2 [ 2 ] ; int8_T ii2o5s5qnf ; int8_T
gafzug4yea ; int8_T nuogwfijir ; int8_T hihnlferdi ; int8_T pxamy50saq ;
int8_T btfjf5acqg ; int8_T oa1muqt4on ; int8_T h0cudiu0ft ; uint8_T
ozjz0fr0k4 ; uint8_T pvn1aiza5a ; uint8_T asdl3sh333 ; uint8_T bcjydglz0i ;
uint8_T izmdgt5ucq ; uint8_T jegd0fwsvy ; boolean_T j20mj4ai3a ; boolean_T
bgpppixzwr ; boolean_T cmab1dak24 ; boolean_T jtnjtissuf ; hrtts4l5bc
ciy1c2o0rv ; hrtts4l5bc jvbbqhrajh ; hrtts4l5bc clwiujjdqo ; hrtts4l5bc
acfz1zxm4t ; hrtts4l5bc ghadbep3bbv ; } dmp1xsadgu ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T boii0beovz [ 2 ] ; real_T gju1dxukfw [ 2 ] ; }
a1db5q0bmx ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T aklk353cnw [ 2 ] ; real_T jvp4m2gaev [ 2 ] ; }
c4xnknezxh ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { uint8_T b_varargout_3 [ 19200 ] ; uint8_T b_varargout_2 [
19200 ] ; uint8_T b_varargout_1 [ 19200 ] ; boolean_T haw4rfq5mc_mbvzarwird [
19200 ] ; real32_T f5412pbmuh_cl54gopm0x [ 8 ] ; real32_T
ckwcz4dmhj_kkiq3xxxve [ 8 ] ; real_T bnfoohghoz_cxarnvbvui [ 2 ] ; real_T
red_px_count ; real_T row_pos ; real_T lxh2q2agot_bhxxfovxdy ; real_T
afc4uplug5_idx_0 ; real_T afc4uplug5_idx_1 ; real_T fooq0gc5sx_idx_0 ; real_T
fooq0gc5sx_idx_1 ; real_T nlqitk3jkv_idx_0 ; real_T nlqitk3jkv_idx_1 ;
int32_T i ; int32_T i1 ; c4xnknezxh olazcoxuml ; c4xnknezxh ngohvujvlv ;
a1db5q0bmx h0jrdiu1ne ; a1db5q0bmx jt4brjmloy ; eo4bbte2ey otjykwnhb3s ; }
ircitwx3zdm ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { bjqsgn0csy etjsv5qmr0 ; real_T iw3hmm5m4i [ 4 ] ; struct {
void * AQHandles ; void * SlioLTF ; } hmjrarajme ; struct { void * AQHandles
; void * SlioLTF ; } jj12g5curl ; real32_T oq44mkeutp [ 16 ] ; int8_T
fb0f52aifb ; int8_T ffnzl4dxna ; boolean_T ceqjgges5x ; boolean_T oylyr3xlre
; dmp1xsadgu otjykwnhb3s ; } nllkaxiwhzw ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct bpvdgm2xq5_ { uint8_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct nu4qaxumex_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real32_T P_6 ; real32_T P_7 ; real32_T P_8 ;
real32_T P_9 ; real32_T P_10 ; real32_T P_11 ; real32_T P_12 ; real32_T P_13
; real32_T P_14 ; real32_T P_15 ; real32_T P_16 ; real32_T P_17 ; real32_T
P_18 ; real32_T P_19 ; real32_T P_20 ; real32_T P_21 ; real32_T P_22 ;
real32_T P_23 ; real32_T P_24 ; real32_T P_25 ; real32_T P_26 ; real32_T P_27
; real32_T P_28 ; uint32_T P_29 ; uint32_T P_30 ; uint32_T P_31 ; uint32_T
P_32 ; uint32_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37
; real_T P_38 ; real_T P_39 ; real_T P_40 [ 4 ] ; real_T P_41 [ 4 ] ; real_T
P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ;
real_T P_48 [ 4 ] ; real_T P_49 [ 2 ] ; real_T P_50 [ 2 ] ; real_T P_51 [ 4 ]
; real_T P_52 [ 2 ] ; real_T P_53 [ 2 ] ; real_T P_54 ; real_T P_55 [ 4 ] ;
real_T P_56 [ 2 ] ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ;
real_T P_61 [ 2 ] ; real_T P_62 [ 3 ] ; real_T P_63 [ 3 ] ; real_T P_64 [ 4 ]
; real_T P_65 [ 4 ] ; real_T P_66 [ 4 ] ; real32_T P_67 [ 2 ] ; real32_T P_68
; real32_T P_69 ; real32_T P_70 ; real32_T P_71 [ 2 ] ; real32_T P_72 ;
real32_T P_73 ; real32_T P_74 ; real32_T P_75 ; real32_T P_76 ; real32_T P_77
; real32_T P_78 ; real32_T P_79 ; real32_T P_80 ; real32_T P_81 ; real32_T
P_82 ; real32_T P_83 ; real32_T P_84 ; real32_T P_85 ; real32_T P_86 ;
real32_T P_87 ; real32_T P_88 ; real32_T P_89 ; real32_T P_90 ; real32_T P_91
[ 4 ] ; real32_T P_92 [ 4 ] ; real32_T P_93 ; real32_T P_94 [ 3 ] ; real32_T
P_95 ; real32_T P_96 [ 6 ] ; real32_T P_97 [ 6 ] ; real32_T P_98 [ 6 ] ;
real32_T P_99 [ 6 ] ; real32_T P_100 ; real32_T P_101 ; real32_T P_102 ;
real32_T P_103 [ 6 ] ; real32_T P_104 ; real32_T P_105 [ 6 ] ; real32_T P_106
[ 6 ] ; real32_T P_107 ; real32_T P_108 ; real32_T P_109 ; real32_T P_110 ;
real32_T P_111 ; real32_T P_112 ; real32_T P_113 ; real32_T P_114 ; real32_T
P_115 ; real32_T P_116 ; real32_T P_117 ; real32_T P_118 ; real32_T P_119 ;
real32_T P_120 ; real32_T P_121 [ 2 ] ; real32_T P_122 ; real32_T P_123 ;
real32_T P_124 ; real32_T P_125 ; real32_T P_126 ; real32_T P_127 [ 2 ] ;
real32_T P_128 ; real32_T P_129 ; real32_T P_130 ; real32_T P_131 ; real32_T
P_132 ; real32_T P_133 ; real32_T P_134 ; real32_T P_135 ; real32_T P_136 ;
real32_T P_137 ; real32_T P_138 ; real32_T P_139 ; real32_T P_140 ; real32_T
P_141 [ 4 ] ; real32_T P_142 ; real32_T P_143 ; real32_T P_144 [ 16 ] ;
real32_T P_145 ; real32_T P_146 ; real32_T P_147 ; real32_T P_148 ; real32_T
P_149 ; real32_T P_150 ; real32_T P_151 [ 4 ] ; real32_T P_152 [ 4 ] ;
real32_T P_153 [ 4 ] ; real32_T P_154 [ 4 ] ; real32_T P_155 [ 4 ] ; real32_T
P_156 [ 4 ] ; real32_T P_157 [ 4 ] ; real32_T P_158 [ 4 ] ; real32_T P_159 [
4 ] ; real32_T P_160 [ 4 ] ; real32_T P_161 [ 2 ] ; uint32_T P_162 ; uint32_T
P_163 ; uint32_T P_164 ; uint32_T P_165 ; uint32_T P_166 ; uint32_T P_167 ;
uint32_T P_168 ; uint32_T P_169 ; uint32_T P_170 ; boolean_T P_171 ; uint8_T
P_172 ; bpvdgm2xq5 ciy1c2o0rv ; bpvdgm2xq5 jvbbqhrajh ; bpvdgm2xq5 clwiujjdqo
; bpvdgm2xq5 acfz1zxm4t ; bpvdgm2xq5 ghadbep3bbv ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct ileg2v2ld1r_ { real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ;
real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10
; real_T P_11 ; real_T P_12 ; real_T P_13 ; real32_T P_14 ; boolean_T P_15 ;
nu4qaxumex otjykwnhb3s ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct diqjpw4041 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 26 ] ; int32_T * vardimsAddress [
26 ] ; RTWLoggingFcnPtr loggingPtrs [ 26 ] ; sysRanDType * systemRan [ 42 ] ;
int_T systemTid [ 42 ] ; } DataMapInfo ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ipf5ube4r0 rtm ; } lhjbdsj2rjg ;
#endif
extern struct_8SSZ93PxvPkADZcA4gG8MD rtP_Sensors ; extern void dw0zngvhyq (
void ) ; extern void ha1ipjbq54 ( uint8_T * o3vpgniqky ) ; extern void
gwlyno50ln ( void ) ; extern void m0l5se3ogg ( void ) ; extern void
k3yxem35zg ( void ) ; extern void bog0frvixl ( void ) ; extern void
pyvd4pdf3iTID0 ( void ) ; extern void pyvd4pdf3iTID1 ( void ) ; extern void
pyvd4pdf3iTID2 ( void ) ; extern void flightControlSystemTID0 ( const
CommandBus * iarztl0jur , const SensorsBus * pxdb2gu5va , real32_T pikqq4svts
[ 4 ] , uint8_T * o3vpgniqky ) ; extern void flightControlSystemTID1 ( void )
; extern void flightControlSystemTID2 ( void ) ; extern void o2f5l50guo (
void ) ; extern void f4qzdbbxmw ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_flightControlSystem_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_flightControlSystem_GetDWork ( ) ; extern void
mr_flightControlSystem_SetDWork ( const mxArray * ssDW ) ; extern void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * flightControlSystem_GetCAPIStaticMap (
void ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern void ghadbep3bb ( uint8_T * hfpztkhwej , bpvdgm2xq5 * localP ) ;
extern void ic5jb3movn ( eo4bbte2ey * localB , dmp1xsadgu * localDW ,
nu4qaxumex * localP ) ; extern void bxsrqc204k ( dmp1xsadgu * localDW ,
nu4qaxumex * localP ) ; extern void kegjp2lgms ( eo4bbte2ey * localB ,
dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern void lsjhvu4egy (
eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern
void otjykwnhb3 ( ipf5ube4r0 * const accn4cnket , const CommandBus *
ipxpc4eli1 , const SensorsBus * fp0u5nlpgw , const real32_T awzlithttz [ 8 ]
, boolean_T bjijbcbp0d , const real_T d5tzeghksb [ 2 ] , eo4bbte2ey * localB
, dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern void otjykwnhb3TID2 (
eo4bbte2ey * localB , nu4qaxumex * localP ) ; extern void ftmkr5osne ( const
boolean_T mtpnhqi5ba [ 19200 ] , real_T czbscgaikn , a1db5q0bmx * localB ) ;
extern void cewcysmmn5 ( const boolean_T nvmzxosxma [ 19200 ] , real_T
o5pgh4jndc , c4xnknezxh * localB ) ;
#endif
void mr_flightControlSystem_CreateInitRestoreData ( ) ; void
mr_flightControlSystem_CopyFromInitRestoreData ( ) ; void
mr_flightControlSystem_DestroyInitRestoreData ( ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern lhjbdsj2rjg lhjbdsj2rj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern ircitwx3zdm ksm0js2nhsy ; extern nllkaxiwhzw dqykr4eggmg ;
#endif
#endif
