#include "dx.h"
void SPK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V26=0,V=0,V184=0,V185=0,G=0,V191=0,V192=0,K=0,V205=0,V208=0,V201=0,V198=0,V199=0,M=0,V19=0,V21=0,V2=0,V3=0,V4=0,V6=0,V7=0,V8=0,V9=0,V10=0,V5=0,V11=0,V16=0,V17=0,V18=0,V15=0,V13=0,V14=0,V12=0,L=0,V118=0,V119=0,V100=0,V101=0,V103=0,V104=0,V102=0,V98=0,V99=0,V97=0,V106=0,V109=0,V110=0,V112=0,V113=0,V111=0,V107=0,V108=0,V105=0,V114=0,W=0,V123=0,Q=0,V150=0,V151=0,V131=0,V132=0,V134=0,V135=0,V133=0,V129=0,V130=0,V128=0,V137=0,V140=0,V141=0,V143=0,V144=0,V142=0,V138=0,V139=0,V136=0,V145=0,V230=0,V235=0,V236=0,V210=0,V212=0,V216=0,V217=0,V218=0,V214=0,V215=0,V213=0,V211=0,V219=0,V221=0,V223=0,V224=0,V225=0,V226=0,V222=0,V220=0,V228=0,V229=0,V227=0,Z=0,V180=0,V182=0,V178=0,V157=0,V159=0,V165=0,V166=0,V167=0,V163=0,V164=0,V161=0,V162=0,V170=0,V171=0,V172=0,V168=0,V169=0,V160=0,V158=0,V173=0,V174=0,V175=0,V156=0,B=0,N=0,V63=0,V64=0,V69=0,V72=0,V76=0,V32=0,V67=0,V77=0,VH=0,V35=0,V36=0,V37=0,V33=0,V34=0,V38=0,V31=0,V39=0,V82=0,V88=0,TT=0,V45=0,V46=0,V47=0,V43=0,V44=0,V42=0,V48=0,V40=0,V54=0,V55=0,V56=0,V52=0,V53=0,V51=0,V57=0,V49=0,V80=0,V58=0,V91=0,V93=0,JJ=0;
int I;
int J;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=60;
x[jvj+1]=10050;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1607&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
pile[v[22]]=299; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(299,jvj+2,jvj+3)*/
if((x[jvj+3]!=0)) goto l1;
V=I;
l2:x[jvj+4]=vo[15];z[jvj+4]=vz[15];
pile[v[22]]=222; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(222,jvj+4,jvj+5)*/
if((x[jvj+5]!=0)) goto l3;
G=V;
l4:x[jvj+6]=vo[15];z[jvj+6]=vz[15];
pile[v[22]]=223; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(223,jvj+6,jvj+7)*/
if((x[jvj+7]!=0)) goto l5;
K=G;
l9:x[jvj+11]=vo[15];z[jvj+11]=vz[15];
pile[v[22]]=870; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,jvj+11,V201)*/
V201=pile[WZ2]; 
if((V201<=1)) goto l10;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=474; pile[WZ1]=21; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(474,21,jvj+8)*/
l6:if((x[jvj+8]>0)) goto l7;
pile[v[22]]=(-2625); pile[WZ1]=K; 
(*f[64])( );     /*SRA2((-2625),K,V198)*/
V198=pile[WZ2]; 
pile[v[22]]=V198; pile[WZ1]=jvj+10; pile[WZ2]=32; pile[WZ3]=21; 
(*f[1804])( );     /*SPE0(V198,jvj+10,32,21,V199)*/
V199=pile[WZ4]; 
pile[v[22]]=V199; 
(*f[1803])( );     /*SPLL0(V199,M)*/
M=pile[WZ1]; 
l11:x[jvj+12]=vo[15];z[jvj+12]=vz[15];
pile[v[22]]=117; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+12,V19)*/
V19=pile[WZ2]; 
if((V19<=0)) goto l12;
pile[v[22]]=241; pile[WZ1]=18; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,18,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=(-789); pile[WZ1]=M; 
(*f[64])( );     /*SRA2((-789),M,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=V2; 
(*f[64])( );     /*SRA2((-2521),V2,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; 
(*f[1803])( );     /*SPLL0(V3,V4)*/
V4=pile[WZ1]; 
pile[v[22]]=(-2521); pile[WZ1]=V4; 
(*f[64])( );     /*SRA2((-2521),V4,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V6,61,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-2491),V7,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V8,91,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V9; 
(*f[99])( );     /*SPM0(0,V9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V10,93,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; 
(*f[1803])( );     /*SPLL0(V5,V11)*/
V11=pile[WZ1]; 
pile[v[22]]=(-2491); pile[WZ1]=V11; 
(*f[64])( );     /*SRA2((-2491),V11,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V16,91,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V17; 
(*f[99])( );     /*SPM0(0,V17,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V18,93,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=V15; 
(*f[64])( );     /*SRA2(V21,V15,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V13,61,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=V14; 
(*f[99])( );     /*SPM0(V19,V14,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; 
(*f[1803])( );     /*SPLL0(V12,L)*/
L=pile[WZ1]; 
l13:x[jvj+13]=vo[15];z[jvj+13]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(583,jvj+13,jvj+14)*/
pile[v[22]]=708; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(708,jvj+14,jvj+15)*/
if(x[jvj+15]!=68&&x[jvj+15]!=729) goto l15;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(241,51,V118)*/
V118=pile[WZ2]; 
V119=x[jvj+14];
pile[v[22]]=(-1719); pile[WZ1]=L; 
(*f[64])( );     /*SRA2((-1719),L,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=V100; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V100,91,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=V101; 
(*f[64])( );     /*SRA2((-2521),V101,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=V118; pile[WZ1]=V103; 
(*f[64])( );     /*SRA2(V118,V103,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V104; 
(*f[99])( );     /*SPM0(1,V104,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=V102; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V102,93,V98)*/
V98=pile[WZ2]; 
pile[v[22]]=V98; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V98,61,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=V119; pile[WZ1]=V99; 
(*f[99])( );     /*SPM0(V119,V99,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=V97; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V97,59,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V106; 
(*f[64])( );     /*SRA2((-1729),V106,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=V109; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V109,91,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=V110; 
(*f[64])( );     /*SRA2((-2521),V110,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=V118; pile[WZ1]=V112; 
(*f[64])( );     /*SRA2(V118,V112,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V113; 
(*f[99])( );     /*SPM0(1,V113,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=V111; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V111,93,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=V107; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V107,61,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=(-100); pile[WZ1]=V108; 
(*f[99])( );     /*SPM0((-100),V108,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=V105; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V105,59,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=V114; 
(*f[656])( );     /*SPLN2(V114,W)*/
W=pile[WZ1]; 
x[jvj+16]=vo[15];z[jvj+16]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(297,jvj+16,jvj+17)*/
pile[v[22]]=365; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(365,jvj+17,jvj+18)*/
for(i=x[jvj+18],V123=0;i>0;i=t[i],V123++)  ;
if((V123==1)) goto l14;
if((V123<=1)) goto l15;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(241,51,V150)*/
V150=pile[WZ2]; 
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+16,V151)*/
V151=pile[WZ2]; 
pile[v[22]]=(-1719); pile[WZ1]=W; 
(*f[64])( );     /*SRA2((-1719),W,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=V131; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V131,91,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=V132; 
(*f[64])( );     /*SRA2((-2521),V132,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=V150; pile[WZ1]=V134; 
(*f[64])( );     /*SRA2(V150,V134,V135)*/
V135=pile[WZ2]; 
pile[v[22]]=2; pile[WZ1]=V135; 
(*f[99])( );     /*SPM0(2,V135,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=V133; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V133,93,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=V129; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V129,61,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=V151; pile[WZ1]=V130; 
(*f[99])( );     /*SPM0(V151,V130,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=V128; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V128,59,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V137; 
(*f[64])( );     /*SRA2((-1729),V137,V140)*/
V140=pile[WZ2]; 
pile[v[22]]=V140; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V140,91,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=V141; 
(*f[64])( );     /*SRA2((-2521),V141,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=V150; pile[WZ1]=V143; 
(*f[64])( );     /*SRA2(V150,V143,V144)*/
V144=pile[WZ2]; 
pile[v[22]]=2; pile[WZ1]=V144; 
(*f[99])( );     /*SPM0(2,V144,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=V142; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V142,93,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=V138; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V138,61,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=(-101); pile[WZ1]=V139; 
(*f[99])( );     /*SPM0((-101),V139,V136)*/
V136=pile[WZ2]; 
pile[v[22]]=V136; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V136,59,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=V145; 
(*f[656])( );     /*SPLN2(V145,Q)*/
Q=pile[WZ1]; 
l16:x[jvj+20]=vo[15];z[jvj+20]=vz[15];
pile[v[22]]=117; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+20,V230)*/
V230=pile[WZ2]; 
if((V230<=0)) goto l17;
pile[v[22]]=583; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(583,jvj+20,jvj+21)*/
if((x[jvj+21]==11103)) goto l17;
pile[v[22]]=365; pile[WZ1]=11103; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(365,11103,jvj+19)*/
if((x[jvj+19]<=0)) goto l17;
x[jvj+22]=s[x[jvj+19]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+19];
pile[v[22]]=241; pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(241,27,V235)*/
V235=pile[WZ2]; 
pile[v[22]]=246; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(246,jvj+22,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=Q; 
(*f[64])( );     /*SRA2((-2577),Q,V210)*/
V210=pile[WZ2]; 
pile[v[22]]=V210; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V210,40,V212)*/
V212=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V212; 
(*f[64])( );     /*SRA2((-2491),V212,V216)*/
V216=pile[WZ2]; 
pile[v[22]]=V216; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V216,91,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V217; 
(*f[99])( );     /*SPM0(0,V217,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=V218; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V218,93,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=V235; pile[WZ1]=V214; 
(*f[64])( );     /*SRA2(V235,V214,V215)*/
V215=pile[WZ2]; 
pile[v[22]]=99700; pile[WZ1]=V215; 
(*f[99])( );     /*SPM0(99700,V215,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=V213; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V213,41,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=V211; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V211,32,V219)*/
V219=pile[WZ2]; 
pile[v[22]]=V219; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V219,40,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=V221; 
(*f[64])( );     /*SRA2((-2532),V221,V223)*/
V223=pile[WZ2]; 
pile[v[22]]=(-3571); pile[WZ1]=V223; 
(*f[64])( );     /*SRA2((-3571),V223,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=V224; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V224,91,V225)*/
V225=pile[WZ2]; 
pile[v[22]]=V236; pile[WZ1]=V225; 
(*f[99])( );     /*SPM0(V236,V225,V226)*/
V226=pile[WZ2]; 
pile[v[22]]=V226; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V226,93,V222)*/
V222=pile[WZ2]; 
pile[v[22]]=V222; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V222,41,V220)*/
V220=pile[WZ2]; 
pile[v[22]]=V220; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V220,40,V228)*/
V228=pile[WZ2]; 
pile[v[22]]=V228; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V228,32,V229)*/
V229=pile[WZ2]; 
pile[v[22]]=V229; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V229,41,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=V227; 
(*f[1803])( );     /*SPLL0(V227,Z)*/
Z=pile[WZ1]; 
l18:x[jvj+23]=vo[20];z[jvj+23]=vz[20];
pile[v[22]]=617; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(617,jvj+23,jvj+24)*/
if((x[jvj+24]!=68)) goto l19;
pile[v[22]]=241; pile[WZ1]=25; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(241,25,V180)*/
V180=pile[WZ2]; 
pile[WZ1]=143; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(241,143,V182)*/
V182=pile[WZ2]; 
x[jvj+25]=vo[15];z[jvj+25]=vz[15];
pile[v[22]]=246; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(246,jvj+25,V178)*/
V178=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=Z; 
(*f[64])( );     /*SRA2((-2577),Z,V157)*/
V157=pile[WZ2]; 
pile[v[22]]=V157; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V157,40,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V159; 
(*f[64])( );     /*SRA2((-2491),V159,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=V165; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V165,91,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=90; pile[WZ1]=V166; 
(*f[99])( );     /*SPM0(90,V166,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=V167; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V167,93,V163)*/
V163=pile[WZ2]; 
pile[v[22]]=V180; pile[WZ1]=V163; 
(*f[64])( );     /*SRA2(V180,V163,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=V178; pile[WZ1]=V164; 
(*f[99])( );     /*SPM0(V178,V164,V161)*/
V161=pile[WZ2]; 
pile[v[22]]=V182; pile[WZ1]=V161; 
(*f[64])( );     /*SRA2(V182,V161,V162)*/
V162=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V162; 
(*f[64])( );     /*SRA2((-2491),V162,V170)*/
V170=pile[WZ2]; 
pile[v[22]]=V170; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V170,91,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=97; pile[WZ1]=V171; 
(*f[99])( );     /*SPM0(97,V171,V172)*/
V172=pile[WZ2]; 
pile[v[22]]=V172; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V172,93,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=V180; pile[WZ1]=V168; 
(*f[64])( );     /*SRA2(V180,V168,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V169; 
(*f[99])( );     /*SPM0(0,V169,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=V160; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V160,41,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=V158; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V158,32,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=V173; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V173,123,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=V174; 
(*f[1808])( );if(v[102]) goto l19;     /*SPKM0(V174,V175)*/
V175=pile[WZ1]; 
pile[v[22]]=V175; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V175,125,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=V156; 
(*f[656])( );     /*SPLN2(V156,B)*/
B=pile[WZ1]; 
l37:x[jvj+44]=vo[15];z[jvj+44]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(583,jvj+44,jvj+45)*/
if((x[jvj+45]!=10833)) goto l38;
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(494,324,jvj+28)*/
l20:if((x[jvj+28]>0)) goto l21;
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(494,324,jvj+41)*/
V32=0;
l34:if((x[jvj+41]<=0)) goto l38;
x[jvj+42]=s[x[jvj+41]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+41];
pile[v[22]]=130; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,jvj+42,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(109,jvj+42,jvj+43)*/
x[jvj+31]=x[jvj+43] ;z[jvj+31]=z[jvj+43];
if(x[jvj+31]==10833||x[jvj+31]==11040||x[jvj+31]==10061) goto l35;
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(246,jvj+42,V77)*/
V77=pile[WZ2]; 
VH=V67;
pile[v[22]]=345; pile[WZ1]=jvj+31; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(345,jvj+31,jvj+34)*/
pile[v[22]]=365; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(365,jvj+34,jvj+35)*/
x[jvj+58]=x[jvj+35] ;z[jvj+58]=z[jvj+35];
l28:if((x[jvj+58]<=0)) goto l24;
x[jvj+36]=s[x[jvj+58]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+58];
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(130,jvj+36,V72)*/
V72=pile[WZ2]; 
if((V72==VH)) goto l36;
l29:x[jvj+58]=t[x[jvj+58]];
goto l28;
l1:pile[v[22]]=(-2625); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2625),I,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=jvj+3; pile[WZ2]=32; pile[WZ3]=255; 
(*f[1804])( );     /*SPE0(V25,jvj+3,32,255,V26)*/
V26=pile[WZ4]; 
pile[v[22]]=V26; 
(*f[1803])( );     /*SPLL0(V26,V)*/
V=pile[WZ1]; 
goto l2;
l3:pile[v[22]]=(-2625); pile[WZ1]=V; 
(*f[64])( );     /*SRA2((-2625),V,V184)*/
V184=pile[WZ2]; 
pile[v[22]]=V184; pile[WZ1]=jvj+5; pile[WZ2]=32; pile[WZ3]=21; 
(*f[1804])( );     /*SPE0(V184,jvj+5,32,21,V185)*/
V185=pile[WZ4]; 
pile[v[22]]=V185; 
(*f[1803])( );     /*SPLL0(V185,G)*/
G=pile[WZ1]; 
goto l4;
l5:pile[v[22]]=(-2625); pile[WZ1]=G; 
(*f[64])( );     /*SRA2((-2625),G,V191)*/
V191=pile[WZ2]; 
pile[v[22]]=V191; pile[WZ1]=jvj+7; pile[WZ2]=32; pile[WZ3]=21; 
(*f[1804])( );     /*SPE0(V191,jvj+7,32,21,V192)*/
V192=pile[WZ4]; 
pile[v[22]]=V192; 
(*f[1803])( );     /*SPLL0(V192,K)*/
K=pile[WZ1]; 
goto l9;
l7:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+9,V205)*/
V205=pile[WZ2]; 
if((V205>=V201)) goto l8;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(110,jvj+9,V208)*/
V208=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V208; 
(*f[331])( );     /*PLUE3(jvj+10,V208)*/
l8:x[jvj+8]=t[x[jvj+8]];
goto l6;
l10:M=K;
goto l11;
l12:L=M;
goto l13;
l14:Q=W;
goto l16;
l15:Q=L;
goto l16;
l17:Z=Q;
goto l18;
l19:pile[v[22]]=Z; 
(*f[656])( );     /*SPLN2(Z,B)*/
B=pile[WZ1]; 
goto l37;
l21:x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+29,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(109,jvj+29,jvj+30)*/
N=V63;
x[jvj+26]=x[jvj+30] ;z[jvj+26]=z[jvj+30];
pile[v[22]]=jvj+26; pile[WZ1]=N; pile[WZ2]=jvj+27; 
(*f[133])( );if(v[102]) goto l23;     /*TLDEBL1(jvj+26,N,jvj+27)*/
l22:x[jvj+28]=t[x[jvj+28]];
goto l20;
l23:V64=x[jvj+29];
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=V64; 
(*f[134])( );     /*OTA0(494,324,V64)*/
goto l22;
l24:pile[v[22]]=365; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(365,jvj+31,jvj+32)*/
x[jvj+57]=x[jvj+32] ;z[jvj+57]=z[jvj+32];
l25:if((x[jvj+57]>0)) goto l26;
pile[v[22]]=367; pile[WZ1]=jvj+31; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(367,jvj+31,jvj+37)*/
x[jvj+59]=x[jvj+37] ;z[jvj+59]=z[jvj+37];
l30:if((x[jvj+59]<=0)) goto l35;
x[jvj+38]=s[x[jvj+59]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+59];
pile[v[22]]=365; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(365,jvj+38,jvj+39)*/
x[jvj+60]=x[jvj+39] ;z[jvj+60]=z[jvj+39];
l31:if((x[jvj+60]>0)) goto l32;
x[jvj+59]=t[x[jvj+59]];
goto l30;
l26:x[jvj+33]=s[x[jvj+57]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+57];
pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+33,V69)*/
V69=pile[WZ2]; 
if((V69==VH)) goto l36;
l27:x[jvj+57]=t[x[jvj+57]];
goto l25;
l32:x[jvj+40]=s[x[jvj+60]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+60];
pile[v[22]]=130; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+40,V76)*/
V76=pile[WZ2]; 
if((V76==VH)) goto l36;
l33:x[jvj+60]=t[x[jvj+60]];
goto l31;
l36:pile[v[22]]=(-3571); pile[WZ1]=V32; 
(*f[64])( );     /*SRA2((-3571),V32,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V35,91,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V77; pile[WZ1]=V36; 
(*f[99])( );     /*SPM0(V77,V36,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V37,93,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V33,61,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V34; pile[WZ2]=jvj+31; 
(*f[98])( );     /*SRA3(135,V34,jvj+31,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=VH; pile[WZ1]=V38; 
(*f[99])( );     /*SPM0(VH,V38,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; 
(*f[289])( );     /*SPLN1(V31)*/
l35:x[jvj+41]=t[x[jvj+41]];
goto l34;
l38:x[jvj+46]=vo[15];z[jvj+46]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(583,jvj+46,jvj+47)*/
if((x[jvj+47]!=10061)) goto l44;
(*f[1805])( );     /*SPKMAIN0()*/
l44:x[jvj+48]=vo[15];z[jvj+48]=vz[15];
pile[v[22]]=246; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(246,jvj+48,V80)*/
V80=pile[WZ2]; 
V39=incon;
pile[v[22]]=583; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(583,jvj+48,jvj+49)*/
pile[v[22]]=133; pile[WZ1]=324; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(133,324,jvj+50)*/
for(a=x[jvj+50];a>0;a=t[a]) if(s[a]==x[jvj+49]) goto l39;
l40:pile[v[22]]=213; pile[WZ1]=jvj+48; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(213,jvj+48,jvj+51)*/
for(i=x[jvj+51],V82=0;i>0;i=t[i],V82++)  ;
V39=V82;
l45:pile[v[22]]=V80; pile[WZ1]=0; pile[WZ2]=0; 
(*f[1806])( );     /*SPKS0(V80,0,0,TT)*/
TT=pile[WZ3]; 
V40=incon;
if((V39<=0)) goto l41;
pile[v[22]]=241; pile[WZ1]=445; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(241,445,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=TT; 
(*f[64])( );     /*SRA2((-2491),TT,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V45,91,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V46; 
(*f[99])( );     /*SPM0(22,V46,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V47,93,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V88; pile[WZ1]=V43; 
(*f[64])( );     /*SRA2(V88,V43,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=V44; 
(*f[99])( );     /*SPM0(V39,V44,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V42,59,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V48,32,V40)*/
V40=pile[WZ2]; 
l42:V49=incon;
pile[v[22]]=372; pile[WZ1]=jvj+48; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(372,jvj+48,jvj+52)*/
if((x[jvj+52]!=68)) goto l43;
pile[v[22]]=(-8066); pile[WZ1]=V40; 
(*f[64])( );     /*SRA2((-8066),V40,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V54,91,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=V55; 
(*f[99])( );     /*SPM0(100,V55,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V56,93,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V52; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V52,61,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V53; 
(*f[99])( );     /*SPM0(0,V53,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V51,59,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V57,32,V49)*/
V49=pile[WZ2]; 
l46:pile[v[22]]=V49; 
(*f[656])( );     /*SPLN2(V49,V58)*/
V58=pile[WZ1]; 
l47:x[jvj+53]=vo[15];z[jvj+53]=vz[15];
pile[v[22]]=870; pile[WZ1]=jvj+53; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(870,jvj+53,V91)*/
V91=pile[WZ2]; 
if((V91<=1)) goto l48;
V93=V91-1;
pile[v[22]]=B; pile[WZ1]=V93; 
(*f[1807])( );     /*SPKV0(B,V93,JJ)*/
JJ=pile[WZ2]; 
l48:x[jvj+54]=vo[15];z[jvj+54]=vz[15];
pile[v[22]]=372; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(372,jvj+54,jvj+55)*/
if((x[jvj+55]!=68)) goto l49;
pile[v[22]]=302; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(302,jvj+54,jvj+56)*/
pile[v[22]]=jvj+56; 
(*f[1809])( );     /*NUMEROTENS3(jvj+56)*/
l49:pile[v[22]]=0; 
(*f[1810])( );     /*SPW0(0)*/
J=0;
pile[v[22]]=372; pile[WZ1]=jvj+54; 
(*f[71])( );     /*ENLV0(372,jvj+54)*/
l50:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=J; return;
l39:V39=100;
goto l45;
l41:V40=TT;
goto l42;
l43:V49=V40;
goto l46;
}
