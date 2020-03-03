#include "dx.h"
void ANARENDEMENT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V7=0,V10=0,V171=0,V172=0,V27=0,V11=0,V30=0,V13=0,V33=0,V15=0,V36=0,V17=0,V39=0,V19=0,V42=0,V21=0,V45=0,V23=0,V48=0,V25=0,V57=0,V58=0,V54=0,V53=0,V52=0,V51=0,V174=0,V175=0,V176=0,V177=0,V178=0,V179=0,V181=0,V182=0,V183=0,V185=0,V186=0,V188=0,V189=0,V191=0,V192=0,V65=0,V66=0,V62=0,V61=0,V60=0,V59=0,V194=0,V195=0,V196=0,V197=0,V198=0,V199=0,V201=0,V202=0,V203=0,V205=0,V206=0,V208=0,V209=0,V211=0,V212=0,V85=0,V87=0,V84=0,V71=0,V95=0,V97=0,V94=0,V74=0,V=0,V77=0,V76=0,VV=0,V79=0,V78=0,V140=0,V142=0,V139=0,V126=0,V150=0,V152=0,V149=0,V129=0,V123=0,V132=0,V131=0,V124=0,V134=0,V133=0,V82=0,V109=0,V108=0,V114=0,V113=0,V107=0,V106=0,V112=0,V111=0,V225=0,V231=0,V216=0,V217=0,V218=0,V219=0,V220=0,V221=0,V222=0,V224=0,V226=0,V227=0,V228=0,V230=0,V164=0,V163=0,V169=0,V168=0,V162=0,V161=0,V167=0,V166=0,V243=0,V249=0,V234=0,V235=0,V236=0,V237=0,V238=0,V239=0,V240=0,V242=0,V244=0,V245=0,V246=0,V248=0,V72=0,V75=0,V127=0,V130=0;
int UR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=78;
x[jvj+1]=11269;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==881&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((UR==61)) goto l6;
if((UR!=60)) goto l61;
pile[v[22]]=jvj+9; 
(*f[138])( );if(v[102]) goto l61;     /*EXPPB0(jvj+9)*/
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=159; pile[WZ1]=1298; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,1298,jvj+6)*/
l2:if((x[jvj+6]>0)) goto l3;
x[jvj+66]=x[jvj+7] ;z[jvj+66]=z[jvj+7];
if((x[jvj+66]==0)) goto l61;
x[jvj+8]=x[jvj+66] ;z[jvj+8]=z[jvj+66];
l8:for(i=x[jvj+8],V10=0;i>0;i=t[i],V10++)  ;
pile[v[22]]=0; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(0,(-9543),V171)*/
V171=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V10; pile[WZ2]=V171; 
(*f[39])( );     /*SDX0(41,V10,V171,V172)*/
V172=pile[WZ3]; 
pile[v[22]]=V172; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V172,(-2986),V8)*/
V8=pile[WZ2]; 
V7=incon;
if((V10>1)) goto l7;
V7=V8;
l9:pile[v[22]]=V7; 
(*f[40])( );     /*SLG0(V7)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(0,117,jvj+12)*/
x[jvj+67]=x[jvj+8] ;z[jvj+67]=z[jvj+8];
l10:if((x[jvj+67]>0)) goto l11;
pile[v[22]]=117; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(117,jvj+12,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(0,117,jvj+15)*/
x[jvj+68]=x[jvj+8] ;z[jvj+68]=z[jvj+8];
l13:if((x[jvj+68]>0)) goto l14;
pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(117,jvj+15,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(0,117,jvj+18)*/
x[jvj+69]=x[jvj+8] ;z[jvj+69]=z[jvj+8];
l16:if((x[jvj+69]>0)) goto l17;
pile[v[22]]=117; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(117,jvj+18,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(0,117,jvj+21)*/
x[jvj+70]=x[jvj+8] ;z[jvj+70]=z[jvj+8];
l19:if((x[jvj+70]>0)) goto l20;
pile[v[22]]=117; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(117,jvj+21,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(0,117,jvj+24)*/
x[jvj+71]=x[jvj+8] ;z[jvj+71]=z[jvj+8];
l22:if((x[jvj+71]>0)) goto l23;
pile[v[22]]=117; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(117,jvj+24,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+27; 
(*f[46])( );     /*TRI0(0,117,jvj+27)*/
x[jvj+72]=x[jvj+8] ;z[jvj+72]=z[jvj+8];
l25:if((x[jvj+72]>0)) goto l26;
pile[v[22]]=117; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(117,jvj+27,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(0,117,jvj+30)*/
x[jvj+73]=x[jvj+8] ;z[jvj+73]=z[jvj+8];
l28:if((x[jvj+73]>0)) goto l29;
pile[v[22]]=117; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(117,jvj+30,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(0,117,jvj+33)*/
x[jvj+74]=x[jvj+8] ;z[jvj+74]=z[jvj+8];
l31:if((x[jvj+74]>0)) goto l32;
pile[v[22]]=117; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(117,jvj+33,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=936; pile[WZ2]=jvj+59; 
(*f[46])( );     /*TRI0(V19,936,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=V23; pile[WZ2]=876; pile[WZ3]=jvj+60; 
(*f[189])( );     /*TRI4(jvj+59,V23,876,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=V25; pile[WZ2]=707; pile[WZ3]=jvj+61; 
(*f[189])( );     /*TRI4(jvj+60,V25,707,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=V17; pile[WZ2]=610; pile[WZ3]=jvj+62; 
(*f[189])( );     /*TRI4(jvj+61,V17,610,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=V15; pile[WZ2]=609; pile[WZ3]=jvj+63; 
(*f[189])( );     /*TRI4(jvj+62,V15,609,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=V13; pile[WZ2]=515; pile[WZ3]=jvj+64; 
(*f[189])( );     /*TRI4(jvj+63,V13,515,jvj+64)*/
pile[v[22]]=117; pile[WZ1]=V21; pile[WZ2]=510; pile[WZ3]=V11; pile[WZ4]=jvj+64; pile[WZ5]=jvj+34; 
(*f[190])( );     /*QUADRI3(117,V21,510,V11,jvj+64,jvj+34)*/
pile[v[22]]=876; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(876,jvj+34,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(936,jvj+34,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(609,jvj+34,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(510,jvj+34,V53)*/
V53=pile[WZ2]; 
V52=1000*V53;
V51=V52/V54;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,0,683,V174)*/
V174=pile[WZ3]; 
pile[v[22]]=V174; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V174,61,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=V175; pile[WZ1]=1; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V175,1,41,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V176; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V176,936,V177)*/
V177=pile[WZ3]; 
pile[v[22]]=V177; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V177,61,V178)*/
V178=pile[WZ2]; 
pile[v[22]]=V178; pile[WZ1]=V58; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V178,V58,41,V179)*/
V179=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V179; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V179,876,V181)*/
V181=pile[WZ3]; 
pile[v[22]]=V181; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V181,61,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=V182; pile[WZ1]=V57; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V182,V57,41,V183)*/
V183=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V183; pile[WZ2]=967; 
(*f[42])( );     /*SRA1(135,V183,967,V185)*/
V185=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V53; pile[WZ2]=V185; 
(*f[39])( );     /*SDX0(41,V53,V185,V186)*/
V186=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V186; pile[WZ2]=1296; 
(*f[42])( );     /*SRA1(135,V186,1296,V188)*/
V188=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V54; pile[WZ2]=V188; 
(*f[39])( );     /*SDX0(41,V54,V188,V189)*/
V189=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V189; pile[WZ2]=1298; 
(*f[42])( );     /*SRA1(135,V189,1298,V191)*/
V191=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V51; pile[WZ2]=V191; 
(*f[39])( );     /*SDX0(41,V51,V191,V192)*/
V192=pile[WZ3]; 
pile[v[22]]=V192; 
(*f[40])( );     /*SLG0(V192)*/
l34:pile[v[22]]=707; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(707,jvj+34,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(117,jvj+34,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=610; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(610,jvj+34,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(515,jvj+34,V61)*/
V61=pile[WZ2]; 
V60=1000*V61;
V59=V60/V62;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,0,683,V194)*/
V194=pile[WZ3]; 
pile[v[22]]=V194; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V194,61,V195)*/
V195=pile[WZ2]; 
pile[v[22]]=V195; pile[WZ1]=3; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V195,3,41,V196)*/
V196=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V196; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V196,936,V197)*/
V197=pile[WZ3]; 
pile[v[22]]=V197; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V197,61,V198)*/
V198=pile[WZ2]; 
pile[v[22]]=V198; pile[WZ1]=V66; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V198,V66,41,V199)*/
V199=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V199; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V199,876,V201)*/
V201=pile[WZ3]; 
pile[v[22]]=V201; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V201,61,V202)*/
V202=pile[WZ2]; 
pile[v[22]]=V202; pile[WZ1]=V65; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V202,V65,41,V203)*/
V203=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V203; pile[WZ2]=967; 
(*f[42])( );     /*SRA1(135,V203,967,V205)*/
V205=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V61; pile[WZ2]=V205; 
(*f[39])( );     /*SDX0(41,V61,V205,V206)*/
V206=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V206; pile[WZ2]=1296; 
(*f[42])( );     /*SRA1(135,V206,1296,V208)*/
V208=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V62; pile[WZ2]=V208; 
(*f[39])( );     /*SDX0(41,V62,V208,V209)*/
V209=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V209; pile[WZ2]=1298; 
(*f[42])( );     /*SRA1(135,V209,1298,V211)*/
V211=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V59; pile[WZ2]=V211; 
(*f[39])( );     /*SDX0(41,V59,V211,V212)*/
V212=pile[WZ3]; 
pile[v[22]]=V212; 
(*f[40])( );     /*SLG0(V212)*/
l56:for(i=x[jvj+8],V82=0;i>0;i=t[i],V82++)  ;
if((V82<=1)) goto l61;
x[jvj+37]=0 ;z[jvj+37]=0;
V72=incon;
x[jvj+75]=x[jvj+8] ;z[jvj+75]=z[jvj+8];
l35:if((x[jvj+75]>0)) goto l36;
if((x[jvj+37]<=0)) goto l45;
x[jvj+51]=s[x[jvj+37]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+37];
pile[v[22]]=447; pile[WZ1]=jvj+51; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(447,jvj+51,jvj+42)*/
pile[v[22]]=1296; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(1296,jvj+42,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(109,jvj+42,jvj+52)*/
pile[v[22]]=967; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(967,jvj+42,V108)*/
V108=pile[WZ2]; 
x[jvj+40]=0 ;z[jvj+40]=0;
V75=incon;
x[jvj+76]=x[jvj+8] ;z[jvj+76]=z[jvj+8];
l39:if((x[jvj+76]>0)) goto l40;
if((x[jvj+40]<=0)) goto l45;
x[jvj+53]=s[x[jvj+40]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+40];
pile[v[22]]=447; pile[WZ1]=jvj+53; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(447,jvj+53,jvj+41)*/
pile[v[22]]=1296; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(1296,jvj+41,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(109,jvj+41,jvj+54)*/
pile[v[22]]=967; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(967,jvj+41,V113)*/
V113=pile[WZ2]; 
V107=1000*V108;
V106=V107/V109;
V112=1000*V113;
V111=V112/V114;
V225=x[jvj+54];
V231=x[jvj+52];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,0,683,V216)*/
V216=pile[WZ3]; 
pile[v[22]]=V216; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V216,61,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V217; 
(*f[39])( );     /*SDX0(41,1,V217,V218)*/
V218=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V218; pile[WZ2]=1298; 
(*f[42])( );     /*SRA1(135,V218,1298,V219)*/
V219=pile[WZ3]; 
pile[WZ1]=V219; pile[WZ2]=490; 
(*f[42])( );     /*SRA1(135,V219,490,V220)*/
V220=pile[WZ3]; 
pile[v[22]]=V220; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V220,58,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V111; pile[WZ2]=V221; 
(*f[39])( );     /*SDX0(41,V111,V221,V222)*/
V222=pile[WZ3]; 
pile[v[22]]=V222; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V222,(-9543),V224)*/
V224=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V225; pile[WZ2]=V224; 
(*f[39])( );     /*SDX0(20,V225,V224,V77)*/
V77=pile[WZ3]; 
V76=incon;
pile[v[22]]=163; pile[WZ1]=jvj+41; 
(*f[44])( );if(v[102]) goto l43;     /*FNDC1(163,jvj+41,V)*/
V=pile[WZ2]; 
pile[v[22]]=V77; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V77,V,V76)*/
V76=pile[WZ2]; 
l57:pile[v[22]]=135; pile[WZ1]=V76; pile[WZ2]=491; 
(*f[42])( );     /*SRA1(135,V76,491,V226)*/
V226=pile[WZ3]; 
pile[v[22]]=V226; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V226,58,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V106; pile[WZ2]=V227; 
(*f[39])( );     /*SDX0(41,V106,V227,V228)*/
V228=pile[WZ3]; 
pile[v[22]]=V228; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V228,(-9543),V230)*/
V230=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V231; pile[WZ2]=V230; 
(*f[39])( );     /*SDX0(20,V231,V230,V79)*/
V79=pile[WZ3]; 
V78=incon;
pile[v[22]]=163; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(163,jvj+42,VV)*/
VV=pile[WZ2]; 
pile[v[22]]=V79; pile[WZ1]=VV; 
(*f[37])( );     /*SRA0(V79,VV,V78)*/
V78=pile[WZ2]; 
l58:pile[v[22]]=V78; 
(*f[40])( );     /*SLG0(V78)*/
l45:x[jvj+45]=0 ;z[jvj+45]=0;
V127=incon;
x[jvj+77]=x[jvj+8] ;z[jvj+77]=z[jvj+8];
l46:if((x[jvj+77]>0)) goto l47;
if((x[jvj+45]<=0)) goto l61;
x[jvj+55]=s[x[jvj+45]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+45];
pile[v[22]]=459; pile[WZ1]=jvj+55; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(459,jvj+55,jvj+50)*/
pile[v[22]]=1296; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(1296,jvj+50,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(109,jvj+50,jvj+56)*/
pile[v[22]]=967; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(967,jvj+50,V163)*/
V163=pile[WZ2]; 
x[jvj+48]=0 ;z[jvj+48]=0;
V130=incon;
x[jvj+78]=x[jvj+8] ;z[jvj+78]=z[jvj+8];
l50:if((x[jvj+78]>0)) goto l51;
if((x[jvj+48]<=0)) goto l61;
x[jvj+57]=s[x[jvj+48]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+48];
pile[v[22]]=459; pile[WZ1]=jvj+57; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(459,jvj+57,jvj+49)*/
pile[v[22]]=1296; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(1296,jvj+49,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(109,jvj+49,jvj+58)*/
pile[v[22]]=967; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(967,jvj+49,V168)*/
V168=pile[WZ2]; 
V162=1000*V163;
V161=V162/V164;
V167=1000*V168;
V166=V167/V169;
V243=x[jvj+58];
V249=x[jvj+56];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,0,683,V234)*/
V234=pile[WZ3]; 
pile[v[22]]=V234; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V234,61,V235)*/
V235=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V235; 
(*f[39])( );     /*SDX0(41,3,V235,V236)*/
V236=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V236; pile[WZ2]=1298; 
(*f[42])( );     /*SRA1(135,V236,1298,V237)*/
V237=pile[WZ3]; 
pile[WZ1]=V237; pile[WZ2]=490; 
(*f[42])( );     /*SRA1(135,V237,490,V238)*/
V238=pile[WZ3]; 
pile[v[22]]=V238; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V238,58,V239)*/
V239=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V166; pile[WZ2]=V239; 
(*f[39])( );     /*SDX0(41,V166,V239,V240)*/
V240=pile[WZ3]; 
pile[v[22]]=V240; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V240,(-9543),V242)*/
V242=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V243; pile[WZ2]=V242; 
(*f[39])( );     /*SDX0(20,V243,V242,V132)*/
V132=pile[WZ3]; 
V131=incon;
pile[v[22]]=163; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l54;     /*FNDC1(163,jvj+49,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=V132; pile[WZ1]=V123; 
(*f[37])( );     /*SRA0(V132,V123,V131)*/
V131=pile[WZ2]; 
l59:pile[v[22]]=135; pile[WZ1]=V131; pile[WZ2]=491; 
(*f[42])( );     /*SRA1(135,V131,491,V244)*/
V244=pile[WZ3]; 
pile[v[22]]=V244; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V244,58,V245)*/
V245=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V161; pile[WZ2]=V245; 
(*f[39])( );     /*SDX0(41,V161,V245,V246)*/
V246=pile[WZ3]; 
pile[v[22]]=V246; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V246,(-9543),V248)*/
V248=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V249; pile[WZ2]=V248; 
(*f[39])( );     /*SDX0(20,V249,V248,V134)*/
V134=pile[WZ3]; 
V133=incon;
pile[v[22]]=163; pile[WZ1]=jvj+50; 
(*f[44])( );if(v[102]) goto l55;     /*FNDC1(163,jvj+50,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=V134; pile[WZ1]=V124; 
(*f[37])( );     /*SRA0(V134,V124,V133)*/
V133=pile[WZ2]; 
l60:pile[v[22]]=V133; 
(*f[40])( );     /*SLG0(V133)*/
l61:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
pile[v[22]]=447; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(447,jvj+2,jvj+3)*/
x[jvj+65]=x[jvj+9] ;z[jvj+65]=z[jvj+9];
l1:if((x[jvj+65]<=0)) goto l4;
x[jvj+4]=s[x[jvj+65]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+65];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[806])( );     /*EQVALSYM0(jvj+4,jvj+3,jvj+5)*/
if((x[jvj+5]==135)) goto l5;
x[jvj+65]=t[x[jvj+65]];
goto l1;
l5:pile[v[22]]=jvj+7; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+2)*/
l4:x[jvj+6]=t[x[jvj+6]];
goto l2;
l6:pile[v[22]]=159; pile[WZ1]=1298; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(159,1298,jvj+8)*/
goto l8;
l7:pile[v[22]]=V8; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V8,83,V7)*/
V7=pile[WZ2]; 
goto l9;
l11:x[jvj+10]=s[x[jvj+67]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+67];
pile[v[22]]=447; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(447,jvj+10,jvj+11)*/
pile[v[22]]=967; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(967,jvj+11,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=117; pile[WZ2]=V27; 
(*f[186])( );     /*BTC0(jvj+12,117,V27)*/
l12:x[jvj+67]=t[x[jvj+67]];
goto l10;
l14:x[jvj+13]=s[x[jvj+68]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+68];
pile[v[22]]=459; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(459,jvj+13,jvj+14)*/
pile[v[22]]=967; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(967,jvj+14,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=jvj+15; pile[WZ1]=117; pile[WZ2]=V30; 
(*f[186])( );     /*BTC0(jvj+15,117,V30)*/
l15:x[jvj+68]=t[x[jvj+68]];
goto l13;
l17:x[jvj+16]=s[x[jvj+69]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+69];
pile[v[22]]=447; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(447,jvj+16,jvj+17)*/
pile[v[22]]=1296; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(1296,jvj+17,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=jvj+18; pile[WZ1]=117; pile[WZ2]=V33; 
(*f[186])( );     /*BTC0(jvj+18,117,V33)*/
l18:x[jvj+69]=t[x[jvj+69]];
goto l16;
l20:x[jvj+19]=s[x[jvj+70]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+70];
pile[v[22]]=459; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(459,jvj+19,jvj+20)*/
pile[v[22]]=1296; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(1296,jvj+20,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=jvj+21; pile[WZ1]=117; pile[WZ2]=V36; 
(*f[186])( );     /*BTC0(jvj+21,117,V36)*/
l21:x[jvj+70]=t[x[jvj+70]];
goto l19;
l23:x[jvj+22]=s[x[jvj+71]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+71];
pile[v[22]]=447; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(447,jvj+22,jvj+23)*/
pile[v[22]]=936; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(936,jvj+23,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=jvj+24; pile[WZ1]=117; pile[WZ2]=V39; 
(*f[186])( );     /*BTC0(jvj+24,117,V39)*/
l24:x[jvj+71]=t[x[jvj+71]];
goto l22;
l26:x[jvj+25]=s[x[jvj+72]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+72];
pile[v[22]]=459; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(459,jvj+25,jvj+26)*/
pile[v[22]]=936; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(936,jvj+26,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=jvj+27; pile[WZ1]=117; pile[WZ2]=V42; 
(*f[186])( );     /*BTC0(jvj+27,117,V42)*/
l27:x[jvj+72]=t[x[jvj+72]];
goto l25;
l29:x[jvj+28]=s[x[jvj+73]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+73];
pile[v[22]]=447; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(447,jvj+28,jvj+29)*/
pile[v[22]]=876; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(876,jvj+29,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=jvj+30; pile[WZ1]=117; pile[WZ2]=V45; 
(*f[186])( );     /*BTC0(jvj+30,117,V45)*/
l30:x[jvj+73]=t[x[jvj+73]];
goto l28;
l32:x[jvj+31]=s[x[jvj+74]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+74];
pile[v[22]]=459; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(459,jvj+31,jvj+32)*/
pile[v[22]]=876; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(876,jvj+32,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=jvj+33; pile[WZ1]=117; pile[WZ2]=V48; 
(*f[186])( );     /*BTC0(jvj+33,117,V48)*/
l33:x[jvj+74]=t[x[jvj+74]];
goto l31;
l36:x[jvj+35]=s[x[jvj+75]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+75];
pile[v[22]]=447; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(447,jvj+35,jvj+36)*/
pile[v[22]]=967; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(967,jvj+36,V85)*/
V85=pile[WZ2]; 
if((V85<=0)) goto l37;
pile[v[22]]=1296; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(1296,jvj+36,V87)*/
V87=pile[WZ2]; 
if((V87<=0)) goto l37;
V84=1000*V85;
V71=V84/V87;
if(V72==incon) goto l62;
if((V71==V72)) goto l38;
if((V71<=V72)) goto l62;
l37:x[jvj+75]=t[x[jvj+75]];
goto l35;
l40:x[jvj+38]=s[x[jvj+76]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+76];
pile[v[22]]=447; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(447,jvj+38,jvj+39)*/
pile[v[22]]=967; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(967,jvj+39,V95)*/
V95=pile[WZ2]; 
if((V95<=0)) goto l41;
pile[v[22]]=1296; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(1296,jvj+39,V97)*/
V97=pile[WZ2]; 
if((V97<=0)) goto l41;
V94=1000*V95;
V74=V94/V97;
if(V75==incon) goto l63;
if((V74==V75)) goto l42;
if((V74>=V75)) goto l63;
l41:x[jvj+76]=t[x[jvj+76]];
goto l39;
l43:V76=V77;
goto l57;
l44:V78=V79;
goto l58;
l47:x[jvj+43]=s[x[jvj+77]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+77];
pile[v[22]]=459; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(459,jvj+43,jvj+44)*/
pile[v[22]]=967; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(967,jvj+44,V140)*/
V140=pile[WZ2]; 
if((V140<=0)) goto l48;
pile[v[22]]=1296; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(1296,jvj+44,V142)*/
V142=pile[WZ2]; 
if((V142<=0)) goto l48;
V139=1000*V140;
V126=V139/V142;
if(V127==incon) goto l64;
if((V126==V127)) goto l49;
if((V126<=V127)) goto l64;
l48:x[jvj+77]=t[x[jvj+77]];
goto l46;
l51:x[jvj+46]=s[x[jvj+78]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+78];
pile[v[22]]=459; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(459,jvj+46,jvj+47)*/
pile[v[22]]=967; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(967,jvj+47,V150)*/
V150=pile[WZ2]; 
if((V150<=0)) goto l52;
pile[v[22]]=1296; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(1296,jvj+47,V152)*/
V152=pile[WZ2]; 
if((V152<=0)) goto l52;
V149=1000*V150;
V129=V149/V152;
if(V130==incon) goto l65;
if((V129==V130)) goto l53;
if((V129>=V130)) goto l65;
l52:x[jvj+78]=t[x[jvj+78]];
goto l50;
l54:V131=V132;
goto l59;
l55:V133=V134;
goto l60;
l62:V72=V71;
x[jvj+37]=0 ;z[jvj+37]=0;
l38:pile[v[22]]=jvj+37; pile[WZ1]=jvj+35; 
(*f[68])( );     /*PLUE0(jvj+37,jvj+35)*/
goto l37;
l63:V75=V74;
x[jvj+40]=0 ;z[jvj+40]=0;
l42:pile[v[22]]=jvj+40; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+38)*/
goto l41;
l64:V127=V126;
x[jvj+45]=0 ;z[jvj+45]=0;
l49:pile[v[22]]=jvj+45; pile[WZ1]=jvj+43; 
(*f[68])( );     /*PLUE0(jvj+45,jvj+43)*/
goto l48;
l65:V130=V129;
x[jvj+48]=0 ;z[jvj+48]=0;
l53:pile[v[22]]=jvj+48; pile[WZ1]=jvj+46; 
(*f[68])( );     /*PLUE0(jvj+48,jvj+46)*/
goto l52;
}
