#include "dx.h"
void SORELT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V151=0,V150=0,M=0,V147=0,V146=0,BL=0,NT=0,V149=0,V72=0,YA=0,V152=0,V153=0,V155=0,V3=0,V75=0,V73=0,V5=0,V79=0,V158=0,V159=0,V7=0,V10=0,V9=0,V81=0,V11=0,V165=0,V164=0,V13=0,C=0,V167=0,V168=0,V17=0,NC=0,V20=0,V171=0,V172=0,V19=0,V83=0,V15=0,NF=0,V24=0,V176=0,V177=0,V23=0,V93=0,V21=0,D=0,V28=0,V181=0,V182=0,V27=0,ND=0,V30=0,V185=0,V186=0,V29=0,V96=0,V95=0,V102=0,V101=0,V189=0,V190=0,V25=0,V106=0,V34=0,V193=0,R=0,V194=0,V33=0,NE=0,V36=0,V197=0,V198=0,V35=0,V105=0,V104=0,V111=0,V110=0,V201=0,V202=0,V31=0,V113=0,V114=0,V116=0,V115=0,V205=0,V206=0,V207=0,V208=0,V37=0,V118=0,V119=0,V121=0,V120=0,V211=0,V212=0,V213=0,V214=0,V39=0,V123=0,V124=0,V126=0,V125=0,V217=0,V218=0,V219=0,V220=0,V41=0,F=0,V223=0,V224=0,V45=0,NG=0,V48=0,V227=0,V228=0,V47=0,V127=0,V231=0,V43=0,G=0,V232=0,V233=0,V51=0,NH=0,V54=0,V236=0,V237=0,V53=0,V131=0,V240=0,V49=0,H=0,V241=0,V242=0,V57=0,NI=0,V60=0,V245=0,V246=0,V59=0,V135=0,V249=0,V55=0,I=0,V250=0,V251=0,V63=0,V139=0,V255=0,V61=0,J=0,V256=0,V257=0,V67=0,V142=0,V261=0,V65=0,V69=0,V145=0,V262=0,V264=0,V265=0,V266=0,V267=0,V269=0;
int K,Z,UR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=24;
if(v[0]>99700) (*f[6])( );

K=pile[v[22]]; Z=pile[v[22]+1]; UR=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V2=tt[K];
x[jvj+24]=V2 ;z[jvj+24]=(V2<=sepcte) ? V2 : 0;
x[jvj+1]=x[jvj+24] ;z[jvj+1]=z[jvj+24];
if((x[jvj+1]!=864)) goto l1;
pile[v[22]]=70; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(70,0,42,V151)*/
V151=pile[WZ3]; 
pile[v[22]]=V151; 
(*f[40])( );     /*SLG0(V151)*/
l1:V150=tm[K];
M=V150;
if((M>0)) goto l2;
BL=250;
if((M!=0)) goto l3;
pile[v[22]]=855; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(855,jvj+1,NT)*/
NT=pile[WZ2]; 
l67:V69=tp[K];
V3=incon;
if((x[jvj+1]!=576)) goto l4;
V72=ta1[K];
x[jvj+2]=V72 ;z[jvj+2]=(V72<=sepcte) ? V72 : 0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(929,jvj+2,YA)*/
YA=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(0,91,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=V152; pile[WZ1]=YA; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V152,YA,41,V153)*/
V153=pile[WZ3]; 
pile[v[22]]=V153; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V153,93,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=V155; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V155,32,V3)*/
V3=pile[WZ2]; 
l68:V145=tu[K];
V5=incon;
if((V69<=0)) goto l7;
if((x[Z]==250)) goto l7;
pile[v[22]]=130; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,Z,V75)*/
V75=pile[WZ2]; 
x[jvj+3]=V69 ;z[jvj+3]=(V69<=sepcte) ? V69 : 0;
pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+3,V73)*/
V73=pile[WZ2]; 
if((V73<=V75)) goto l5;
if((UR==73)) goto l6;
l7:V5=V3;
l8:V7=incon;
if((x[jvj+1]!=489)) goto l9;
V79=tn[K];
if((K!=V79)) goto l9;
pile[v[22]]=50; pile[WZ1]=V5; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(50,V5,42,V158)*/
V158=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V158; pile[WZ2]=864; 
(*f[42])( );     /*SRA1(135,V158,864,V159)*/
V159=pile[WZ3]; 
V7=0;
V269=V159;
if((V269<0)) goto l69;
pile[v[22]]=V269; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V269,3)*/
l69:pile[v[22]]=41; pile[WZ1]=K; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(41,K,V7,V262)*/
V262=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V262; pile[WZ2]=jvj+1; 
(*f[42])( );     /*SRA1(135,V262,jvj+1,V10)*/
V10=pile[WZ3]; 
V9=incon;
if((V69>0)) goto l10;
V9=V10;
l11:V11=incon;
V81=tn[K];
pile[v[22]]=41; pile[WZ1]=V81; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(41,V81,V9,V11)*/
V11=pile[WZ3]; 
V13=incon;
if((M>0)) goto l12;
V13=V11;
l13:V15=incon;
if((M!=0)) goto l18;
if((NT<=0)) goto l18;
V83=ta1[K];
pile[v[22]]=849; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(849,jvj+1,jvj+7)*/
V17=incon;
if((x[jvj+7]!=20)) goto l14;
x[jvj+5]=V83 ;z[jvj+5]=(V83<=sepcte) ? V83 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(642,jvj+5,C)*/
C=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V13,40,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=V167; pile[WZ1]=C; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V167,C,41,V168)*/
V168=pile[WZ3]; 
pile[v[22]]=V168; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V168,41,V17)*/
V17=pile[WZ2]; 
l16:pile[v[22]]=jvj+7; pile[WZ1]=V83; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(jvj+7,V83,V17,V20)*/
V20=pile[WZ3]; 
V19=incon;
if((x[jvj+7]!=20)) goto l15;
x[jvj+6]=V83 ;z[jvj+6]=(V83<=sepcte) ? V83 : 0;
pile[v[22]]=929; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(929,jvj+6,NC)*/
NC=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V20,91,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=V171; pile[WZ1]=NC; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V171,NC,41,V172)*/
V172=pile[WZ3]; 
pile[v[22]]=V172; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V172,93,V19)*/
V19=pile[WZ2]; 
l17:V15=V19;
l19:V21=incon;
if((M!=0)) goto l22;
if((NT<=1)) goto l22;
V93=ta2[K];
pile[v[22]]=852; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(852,jvj+1,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=V93; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(jvj+9,V93,V15,V24)*/
V24=pile[WZ3]; 
V23=incon;
if((x[jvj+9]!=20)) goto l20;
x[jvj+8]=V93 ;z[jvj+8]=(V93<=sepcte) ? V93 : 0;
pile[v[22]]=929; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(929,jvj+8,NF)*/
NF=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V24,91,V176)*/
V176=pile[WZ2]; 
pile[v[22]]=V176; pile[WZ1]=NF; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V176,NF,41,V177)*/
V177=pile[WZ3]; 
pile[v[22]]=V177; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V177,93,V23)*/
V23=pile[WZ2]; 
l21:V21=V23;
l23:V25=incon;
if((M<=0)) goto l28;
if((NT<=0)) goto l28;
V96=ta1[K];
V95=tnd[M][0];
x[jvj+12]=V95 ;z[jvj+12]=(V95<=sepcte) ? V95 : 0;
V102=vnd[M][0];
V101=V102;
pile[v[22]]=V21; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V21,40,V189)*/
V189=pile[WZ2]; 
pile[v[22]]=V101; pile[WZ1]=V189; 
(*f[64])( );     /*SRA2(V101,V189,V190)*/
V190=pile[WZ2]; 
pile[v[22]]=V190; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V190,58,V28)*/
V28=pile[WZ2]; 
V27=incon;
if((x[jvj+12]!=20)) goto l24;
x[jvj+10]=V96 ;z[jvj+10]=(V96<=sepcte) ? V96 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(642,jvj+10,D)*/
D=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V28,40,V181)*/
V181=pile[WZ2]; 
pile[v[22]]=V181; pile[WZ1]=D; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V181,D,41,V182)*/
V182=pile[WZ3]; 
pile[v[22]]=V182; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V182,41,V27)*/
V27=pile[WZ2]; 
l26:pile[v[22]]=jvj+12; pile[WZ1]=V96; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(jvj+12,V96,V27,V30)*/
V30=pile[WZ3]; 
V29=incon;
if((x[jvj+12]!=20)) goto l25;
x[jvj+11]=V96 ;z[jvj+11]=(V96<=sepcte) ? V96 : 0;
pile[v[22]]=929; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(929,jvj+11,ND)*/
ND=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V30,91,V185)*/
V185=pile[WZ2]; 
pile[v[22]]=V185; pile[WZ1]=ND; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V185,ND,41,V186)*/
V186=pile[WZ3]; 
pile[v[22]]=V186; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V186,93,V29)*/
V29=pile[WZ2]; 
l27:pile[v[22]]=V29; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V29,41,V25)*/
V25=pile[WZ2]; 
l29:V31=incon;
if((M<=0)) goto l34;
if((NT<=1)) goto l34;
V105=ta2[K];
V104=tnd[M][1];
x[jvj+15]=V104 ;z[jvj+15]=(V104<=sepcte) ? V104 : 0;
V111=vnd[M][1];
V110=V111;
R=0;
pile[v[22]]=V25; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V25,40,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=V110; pile[WZ1]=V201; 
(*f[64])( );     /*SRA2(V110,V201,V202)*/
V202=pile[WZ2]; 
pile[v[22]]=V202; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V202,58,V34)*/
V34=pile[WZ2]; 
V33=incon;
if((x[jvj+15]!=20)) goto l30;
x[jvj+13]=V105 ;z[jvj+13]=(V105<=sepcte) ? V105 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(642,jvj+13,V106)*/
V106=pile[WZ2]; 
if((R!=V106)) goto l30;
pile[v[22]]=V34; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V34,40,V193)*/
V193=pile[WZ2]; 
pile[v[22]]=V193; pile[WZ1]=R; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V193,R,41,V194)*/
V194=pile[WZ3]; 
pile[v[22]]=V194; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V194,41,V33)*/
V33=pile[WZ2]; 
l32:pile[v[22]]=jvj+15; pile[WZ1]=V105; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(jvj+15,V105,V33,V36)*/
V36=pile[WZ3]; 
V35=incon;
if((x[jvj+15]!=20)) goto l31;
x[jvj+14]=V105 ;z[jvj+14]=(V105<=sepcte) ? V105 : 0;
pile[v[22]]=929; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(929,jvj+14,NE)*/
NE=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V36,91,V197)*/
V197=pile[WZ2]; 
pile[v[22]]=V197; pile[WZ1]=NE; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V197,NE,41,V198)*/
V198=pile[WZ3]; 
pile[v[22]]=V198; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V198,93,V35)*/
V35=pile[WZ2]; 
l33:pile[v[22]]=V35; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V35,41,V31)*/
V31=pile[WZ2]; 
l35:V37=incon;
if((M<=0)) goto l36;
if((NT<=2)) goto l36;
V113=tnd[M][2];
x[jvj+16]=V113 ;z[jvj+16]=(V113<=sepcte) ? V113 : 0;
V114=ta3[K];
V116=vnd[M][2];
V115=V116;
pile[v[22]]=V31; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V31,40,V205)*/
V205=pile[WZ2]; 
pile[v[22]]=V115; pile[WZ1]=V205; 
(*f[64])( );     /*SRA2(V115,V205,V206)*/
V206=pile[WZ2]; 
pile[v[22]]=V206; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V206,58,V207)*/
V207=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=V114; pile[WZ2]=V207; 
(*f[39])( );     /*SDX0(jvj+16,V114,V207,V208)*/
V208=pile[WZ3]; 
pile[v[22]]=V208; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V208,41,V37)*/
V37=pile[WZ2]; 
l37:V39=incon;
if((M<=0)) goto l38;
if((NT<=3)) goto l38;
V118=tnd[M][3];
x[jvj+17]=V118 ;z[jvj+17]=(V118<=sepcte) ? V118 : 0;
V119=ta4[K];
V121=vnd[M][3];
V120=V121;
pile[v[22]]=V37; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V37,40,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=V120; pile[WZ1]=V211; 
(*f[64])( );     /*SRA2(V120,V211,V212)*/
V212=pile[WZ2]; 
pile[v[22]]=V212; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V212,58,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=V119; pile[WZ2]=V213; 
(*f[39])( );     /*SDX0(jvj+17,V119,V213,V214)*/
V214=pile[WZ3]; 
pile[v[22]]=V214; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V214,41,V39)*/
V39=pile[WZ2]; 
l39:V41=incon;
if((M<=0)) goto l40;
if((NT<=4)) goto l40;
V123=tnd[M][4];
x[jvj+18]=V123 ;z[jvj+18]=(V123<=sepcte) ? V123 : 0;
V124=ta5[K];
V126=vnd[M][4];
V125=V126;
pile[v[22]]=V39; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V39,40,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=V125; pile[WZ1]=V217; 
(*f[64])( );     /*SRA2(V125,V217,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=V218; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V218,58,V219)*/
V219=pile[WZ2]; 
pile[v[22]]=jvj+18; pile[WZ1]=V124; pile[WZ2]=V219; 
(*f[39])( );     /*SDX0(jvj+18,V124,V219,V220)*/
V220=pile[WZ3]; 
pile[v[22]]=V220; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V220,41,V41)*/
V41=pile[WZ2]; 
l41:V43=incon;
if((M!=0)) goto l46;
if((NT!=0)) goto l46;
V127=ta1[K];
if((V127<=0)) goto l46;
x[jvj+19]=V127 ;z[jvj+19]=(V127<=sepcte) ? V127 : 0;
V45=incon;
pile[v[22]]=642; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(642,jvj+19,F)*/
F=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V41,40,V223)*/
V223=pile[WZ2]; 
pile[v[22]]=V223; pile[WZ1]=F; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V223,F,41,V224)*/
V224=pile[WZ3]; 
pile[v[22]]=V224; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V224,41,V45)*/
V45=pile[WZ2]; 
l44:V231=x[jvj+19];
pile[v[22]]=20; pile[WZ1]=V231; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(20,V231,V45,V48)*/
V48=pile[WZ3]; 
V47=incon;
pile[v[22]]=929; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(929,jvj+19,NG)*/
NG=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V48,91,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=V227; pile[WZ1]=NG; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V227,NG,41,V228)*/
V228=pile[WZ3]; 
pile[v[22]]=V228; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V228,93,V47)*/
V47=pile[WZ2]; 
l45:V43=V47;
l47:V49=incon;
if((M!=0)) goto l52;
if((NT>1)) goto l52;
V131=ta2[K];
if((V131<=0)) goto l52;
x[jvj+20]=V131 ;z[jvj+20]=(V131<=sepcte) ? V131 : 0;
V51=incon;
pile[v[22]]=642; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(642,jvj+20,G)*/
G=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V43,40,V232)*/
V232=pile[WZ2]; 
pile[v[22]]=V232; pile[WZ1]=G; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V232,G,41,V233)*/
V233=pile[WZ3]; 
pile[v[22]]=V233; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V233,41,V51)*/
V51=pile[WZ2]; 
l50:V240=x[jvj+20];
pile[v[22]]=20; pile[WZ1]=V240; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(20,V240,V51,V54)*/
V54=pile[WZ3]; 
V53=incon;
pile[v[22]]=929; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(929,jvj+20,NH)*/
NH=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V54,91,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=V236; pile[WZ1]=NH; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V236,NH,41,V237)*/
V237=pile[WZ3]; 
pile[v[22]]=V237; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V237,93,V53)*/
V53=pile[WZ2]; 
l51:V49=V53;
l53:V55=incon;
if((M!=0)) goto l58;
if((NT>2)) goto l58;
V135=ta3[K];
if((V135<=0)) goto l58;
x[jvj+21]=V135 ;z[jvj+21]=(V135<=sepcte) ? V135 : 0;
V57=incon;
pile[v[22]]=642; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(642,jvj+21,H)*/
H=pile[WZ2]; 
pile[v[22]]=V49; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V49,40,V241)*/
V241=pile[WZ2]; 
pile[v[22]]=V241; pile[WZ1]=H; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V241,H,41,V242)*/
V242=pile[WZ3]; 
pile[v[22]]=V242; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V242,41,V57)*/
V57=pile[WZ2]; 
l56:V249=x[jvj+21];
pile[v[22]]=20; pile[WZ1]=V249; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(20,V249,V57,V60)*/
V60=pile[WZ3]; 
V59=incon;
pile[v[22]]=929; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(929,jvj+21,NI)*/
NI=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V60,91,V245)*/
V245=pile[WZ2]; 
pile[v[22]]=V245; pile[WZ1]=NI; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V245,NI,41,V246)*/
V246=pile[WZ3]; 
pile[v[22]]=V246; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V246,93,V59)*/
V59=pile[WZ2]; 
l57:V55=V59;
l59:V61=incon;
if((M!=0)) goto l62;
if((NT>3)) goto l62;
V139=ta4[K];
if((V139<=0)) goto l62;
x[jvj+22]=V139 ;z[jvj+22]=(V139<=sepcte) ? V139 : 0;
V63=incon;
pile[v[22]]=642; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(642,jvj+22,I)*/
I=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V55,40,V250)*/
V250=pile[WZ2]; 
pile[v[22]]=V250; pile[WZ1]=I; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V250,I,41,V251)*/
V251=pile[WZ3]; 
pile[v[22]]=V251; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V251,41,V63)*/
V63=pile[WZ2]; 
l61:V255=x[jvj+22];
pile[v[22]]=20; pile[WZ1]=V255; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(20,V255,V63,V61)*/
V61=pile[WZ3]; 
l63:V65=incon;
if((M!=0)) goto l66;
if((NT>4)) goto l66;
V142=ta5[K];
if((V142<=0)) goto l66;
x[jvj+23]=V142 ;z[jvj+23]=(V142<=sepcte) ? V142 : 0;
V67=incon;
pile[v[22]]=642; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l64;     /*FNDC0(642,jvj+23,J)*/
J=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V61,40,V256)*/
V256=pile[WZ2]; 
pile[v[22]]=V256; pile[WZ1]=J; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V256,J,41,V257)*/
V257=pile[WZ3]; 
pile[v[22]]=V257; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V257,41,V67)*/
V67=pile[WZ2]; 
l65:V261=x[jvj+23];
pile[v[22]]=20; pile[WZ1]=V261; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(20,V261,V67,V65)*/
V65=pile[WZ3]; 
l70:pile[v[22]]=V65; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V65,46,V264)*/
V264=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V264; pile[WZ2]=613; 
(*f[42])( );     /*SRA1(135,V264,613,V265)*/
V265=pile[WZ3]; 
pile[v[22]]=V265; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V265,58,V266)*/
V266=pile[WZ2]; 
pile[v[22]]=V266; pile[WZ1]=V145; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V266,V145,41,V267)*/
V267=pile[WZ3]; 
pile[v[22]]=V267; 
(*f[40])( );     /*SLG0(V267)*/
fflush(stdout);
v[0]=jvj; v[22]-=3; return;
l2:V147=vbl[M];
V146=V147;
BL=V146;
l3:V149=knd[M];
NT=V149;
goto l67;
l4:V3=0;
goto l68;
l5:if((UR!=73)) goto l6;
if((V73>=V75)) goto l6;
goto l7;
l6:pile[v[22]]=15; pile[WZ1]=V3; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(15,V3,42,V5)*/
V5=pile[WZ3]; 
goto l8;
l9:V7=V5;
goto l69;
l10:x[jvj+4]=V69 ;z[jvj+4]=(V69<=sepcte) ? V69 : 0;
pile[v[22]]=135; pile[WZ1]=V10; pile[WZ2]=jvj+4; 
(*f[42])( );     /*SRA1(135,V10,jvj+4,V9)*/
V9=pile[WZ3]; 
goto l11;
l12:V165=BL;
pile[v[22]]=20; pile[WZ1]=V165; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(20,V165,V11,V164)*/
V164=pile[WZ3]; 
pile[v[22]]=V164; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V164,32,V13)*/
V13=pile[WZ2]; 
goto l13;
l14:V17=V13;
goto l16;
l15:V19=V20;
goto l17;
l18:V15=V13;
goto l19;
l20:V23=V24;
goto l21;
l22:V21=V15;
goto l23;
l24:V27=V28;
goto l26;
l25:V29=V30;
goto l27;
l28:V25=V21;
goto l29;
l30:V33=V34;
goto l32;
l31:V35=V36;
goto l33;
l34:V31=V25;
goto l35;
l36:V37=V31;
goto l37;
l38:V39=V37;
goto l39;
l40:V41=V39;
goto l41;
l42:V45=V41;
goto l44;
l43:V47=V48;
goto l45;
l46:V43=V41;
goto l47;
l48:V51=V43;
goto l50;
l49:V53=V54;
goto l51;
l52:V49=V43;
goto l53;
l54:V57=V49;
goto l56;
l55:V59=V60;
goto l57;
l58:V55=V49;
goto l59;
l60:V63=V55;
goto l61;
l62:V61=V55;
goto l63;
l64:V67=V61;
goto l65;
l66:V65=V61;
goto l70;
}
