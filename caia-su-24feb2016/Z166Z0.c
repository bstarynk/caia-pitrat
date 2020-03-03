#include "dx.h"
void Z166Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,V1=0,V28=0,V49=0,V56=0,V77=0,V105=0,V84=0,V111=0,V135=0,V328=0,V456=0,V430=0,V458=0,V433=0,V155=0,V175=0,V157=0,V285=0,V229=0,V211=0,V217=0,V26=0,V29=0,V182=0,V202=0,V184=0,V311=0,V260=0,V240=0,V248=0,V109=0,K=0,V2=0,V85=0,V54=0,V57=0,V448=0,V450=0,V454=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=284;
x[jvj+1]=15667;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1889&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(538,NNNY,jvj+28)*/
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=25)) goto l35;
x[jvj+31]=d[20];z[jvj+31]=0;
l27:if((x[jvj+31]>0)) goto l28;
x[jvj+41]=d[20];z[jvj+41]=0;
l30:if((x[jvj+41]>0)) goto l31;
x[jvj+52]=d[20];z[jvj+52]=0;
l33:if((x[jvj+52]<=0)) goto l35;
x[jvj+53]=s[x[jvj+52]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+52];
pile[v[22]]=jvj+53; pile[WZ1]=jvj+28; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+53,jvj+28,jvj+54)*/
pile[v[22]]=111; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+54,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]!=1273)) goto l34;
pile[v[22]]=268; pile[WZ1]=jvj+53; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(268,jvj+53,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+28; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+57,jvj+28,jvj+58)*/
pile[v[22]]=130; pile[WZ1]=jvj+58; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+58,V229)*/
V229=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+54; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(107,jvj+54,jvj+59)*/
V211=V229;
for(i=x[jvj+59],V217=0;i>0;i=t[i],V217++)  ;
if((V217!=V211)) goto l34;
pile[v[22]]=102; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+54,jvj+60)*/
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+2]=d[76];z[jvj+2]=0;
l9:if((x[jvj+59]>0)) goto l10;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+61; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+61)*/
NNNT=115;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+211; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=111; pile[WZ2]=jvj+212; 
(*f[54])( );     /*TRI1(jvj+211,111,jvj+212)*/
pile[v[22]]=jvj+212; pile[WZ1]=jvj+61; pile[WZ2]=107; pile[WZ3]=jvj+213; 
(*f[301])( );     /*TRI11(jvj+212,jvj+61,107,jvj+213)*/
pile[v[22]]=jvj+213; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+213,22,100,jvj+62)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+62; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+62,NNNX)*/
l72:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l1:V22=K+1;
V1=V22;
l51:pile[v[22]]=103; pile[WZ1]=jvj+84; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+84,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=jvj+128; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+128,jvj+129)*/
if((x[jvj+129]!=22)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+128,jvj+130)*/
pile[v[22]]=101; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+130,jvj+131)*/
if(x[jvj+131]!=1215&&x[jvj+131]!=1214&&x[jvj+131]!=1273) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+128; pile[WZ2]=jvj+132; 
(*f[33])( );     /*FNDE0(107,jvj+128,jvj+132)*/
for(i=x[jvj+132],V2=0;i>0;i=t[i],V2++)  ;
if((V2!=V1)) goto l4;
NNNT=86;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+223; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+223)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V1; pile[WZ4]=jvj+225; 
(*f[192])( );     /*QUADRI4(100,41,130,V1,jvj+225)*/
pile[v[22]]=jvj+223; pile[WZ1]=111; pile[WZ2]=jvj+224; 
(*f[54])( );     /*TRI1(jvj+223,111,jvj+224)*/
pile[v[22]]=jvj+224; pile[WZ1]=jvj+225; pile[WZ2]=103; pile[WZ3]=jvj+226; 
(*f[58])( );     /*TRI3(jvj+224,jvj+225,103,jvj+226)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+128; pile[WZ4]=jvj+226; pile[WZ5]=jvj+133; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+128,jvj+226,jvj+133)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+133; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+84,jvj+133,NNNX)*/
goto l72;
l2:V28=V26;
l36:pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+28,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+65,jvj+66)*/
if((x[jvj+66]!=22)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+65,jvj+67)*/
pile[v[22]]=101; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+67,jvj+68)*/
if(x[jvj+68]!=1215&&x[jvj+68]!=1273&&x[jvj+68]!=1214) goto l7;
pile[v[22]]=107; pile[WZ1]=jvj+65; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(107,jvj+65,jvj+69)*/
for(i=x[jvj+69],V29=0;i>0;i=t[i],V29++)  ;
if((V29>=V28)) goto l7;
NNNT=87;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+70)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+70; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+70,NNNX)*/
goto l72;
l3:V56=V54;
l54:pile[v[22]]=111; pile[WZ1]=jvj+127; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(111,jvj+127,jvj+142)*/
pile[v[22]]=101; pile[WZ1]=jvj+142; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(101,jvj+142,jvj+143)*/
if(x[jvj+143]!=1215&&x[jvj+143]!=1273&&x[jvj+143]!=1214) goto l55;
pile[v[22]]=107; pile[WZ1]=jvj+127; pile[WZ2]=jvj+144; 
(*f[33])( );     /*FNDE0(107,jvj+127,jvj+144)*/
for(i=x[jvj+144],V57=0;i>0;i=t[i],V57++)  ;
if((V57>=V56)) goto l55;
NNNT=87;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+145; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+145)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+145; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+84,jvj+145,NNNX)*/
goto l72;
l4:V84=incon;
if((x[jvj+86]==29)) goto l5;
V84=K;
l52:pile[v[22]]=103; pile[WZ1]=jvj+84; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,jvj+84,jvj+134)*/
pile[v[22]]=100; pile[WZ1]=jvj+134; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(100,jvj+134,jvj+135)*/
if((x[jvj+135]!=22)) goto l53;
pile[v[22]]=111; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(111,jvj+134,jvj+136)*/
pile[v[22]]=101; pile[WZ1]=jvj+136; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(101,jvj+136,jvj+137)*/
if(x[jvj+137]!=1215&&x[jvj+137]!=1273&&x[jvj+137]!=1214) goto l53;
pile[v[22]]=107; pile[WZ1]=jvj+134; pile[WZ2]=jvj+138; 
(*f[33])( );     /*FNDE0(107,jvj+134,jvj+138)*/
for(i=x[jvj+138],V85=0;i>0;i=t[i],V85++)  ;
if((V85>=V84)) goto l53;
NNNT=88;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+139; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+139)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+139; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+84,jvj+139,NNNX)*/
goto l72;
l5:V105=K+1;
V84=V105;
goto l52;
l6:V111=0;
l49:pile[v[22]]=100; pile[WZ1]=jvj+84; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+84,jvj+119)*/
if((x[jvj+119]!=22)) goto l50;
pile[v[22]]=102; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+84,jvj+120)*/
pile[v[22]]=130; pile[WZ1]=jvj+120; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(130,jvj+120,V109)*/
V109=pile[WZ2]; 
if((V109>=V111)) goto l50;
pile[v[22]]=103; pile[WZ1]=jvj+84; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,jvj+84,jvj+121)*/
pile[v[22]]=100; pile[WZ1]=jvj+121; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+121,jvj+122)*/
if((x[jvj+122]!=22)) goto l50;
pile[v[22]]=111; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+121,jvj+123)*/
pile[v[22]]=101; pile[WZ1]=jvj+123; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+123,jvj+124)*/
if(x[jvj+124]!=1215&&x[jvj+124]!=1273&&x[jvj+124]!=1214) goto l50;
NNNT=89;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+125; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+125)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+125; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+84,jvj+125,NNNX)*/
goto l72;
l7:V135=incon;
if((x[jvj+30]==29)) goto l8;
V135=(-1);
l37:if((V26>V135)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+28,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+71,jvj+72)*/
if((x[jvj+72]!=22)) goto l17;
pile[v[22]]=111; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+71,jvj+73)*/
pile[v[22]]=101; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+73,jvj+74)*/
if(x[jvj+74]!=1215&&x[jvj+74]!=1273&&x[jvj+74]!=1214) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+71; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(107,jvj+71,jvj+75)*/
NNNT=98;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+76)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+76; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+76,NNNX)*/
goto l72;
l8:V135=0;
goto l37;
l10:x[jvj+190]=s[x[jvj+59]] ;z[jvj+190]=(x[jvj+190]<=sepcte) ? x[jvj+190] : z[jvj+59];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+188; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+188)*/
pile[v[22]]=jvj+188; pile[WZ1]=111; pile[WZ2]=jvj+189; 
(*f[54])( );     /*TRI1(jvj+188,111,jvj+189)*/
pile[v[22]]=jvj+189; pile[WZ1]=jvj+190; pile[WZ2]=103; pile[WZ3]=jvj+191; 
(*f[58])( );     /*TRI3(jvj+189,jvj+190,103,jvj+191)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+60; pile[WZ4]=jvj+191; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+60,jvj+191,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[196])( );     /*PLUF0(jvj+2,jvj+3,jvj+4)*/
x[jvj+59]=t[x[jvj+59]];
goto l9;
l12:x[jvj+194]=s[x[jvj+115]] ;z[jvj+194]=(x[jvj+194]<=sepcte) ? x[jvj+194] : z[jvj+115];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+192; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+192)*/
pile[v[22]]=jvj+192; pile[WZ1]=111; pile[WZ2]=jvj+193; 
(*f[54])( );     /*TRI1(jvj+192,111,jvj+193)*/
pile[v[22]]=jvj+193; pile[WZ1]=jvj+194; pile[WZ2]=103; pile[WZ3]=jvj+195; 
(*f[58])( );     /*TRI3(jvj+193,jvj+194,103,jvj+195)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+116; pile[WZ4]=jvj+195; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+116,jvj+195,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+6,jvj+7)*/
x[jvj+115]=t[x[jvj+115]];
l11:if((x[jvj+115]>0)) goto l12;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+117; 
(*f[299])( );     /*COPEL0(jvj+7,jvj+117)*/
NNNT=115;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+220; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+220)*/
pile[v[22]]=jvj+220; pile[WZ1]=111; pile[WZ2]=jvj+221; 
(*f[54])( );     /*TRI1(jvj+220,111,jvj+221)*/
pile[v[22]]=jvj+221; pile[WZ1]=jvj+117; pile[WZ2]=107; pile[WZ3]=jvj+222; 
(*f[301])( );     /*TRI11(jvj+221,jvj+117,107,jvj+222)*/
pile[v[22]]=jvj+222; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+118; 
(*f[58])( );     /*TRI3(jvj+222,22,100,jvj+118)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+118; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+84,jvj+118,NNNX)*/
goto l72;
l14:x[jvj+198]=s[x[jvj+48]] ;z[jvj+198]=(x[jvj+198]<=sepcte) ? x[jvj+198] : z[jvj+48];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+196; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=111; pile[WZ2]=jvj+197; 
(*f[54])( );     /*TRI1(jvj+196,111,jvj+197)*/
pile[v[22]]=jvj+197; pile[WZ1]=jvj+198; pile[WZ2]=103; pile[WZ3]=jvj+199; 
(*f[58])( );     /*TRI3(jvj+197,jvj+198,103,jvj+199)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+199; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+49,jvj+199,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+8,jvj+9,jvj+10)*/
x[jvj+48]=t[x[jvj+48]];
l13:if((x[jvj+48]>0)) goto l14;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+50; 
(*f[299])( );     /*COPEL0(jvj+10,jvj+50)*/
NNNT=116;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+208; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+208)*/
pile[v[22]]=jvj+208; pile[WZ1]=111; pile[WZ2]=jvj+209; 
(*f[54])( );     /*TRI1(jvj+208,111,jvj+209)*/
pile[v[22]]=jvj+209; pile[WZ1]=jvj+50; pile[WZ2]=107; pile[WZ3]=jvj+210; 
(*f[301])( );     /*TRI11(jvj+209,jvj+50,107,jvj+210)*/
pile[v[22]]=jvj+210; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+210,22,100,jvj+51)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+51; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+51,NNNX)*/
goto l72;
l16:x[jvj+202]=s[x[jvj+104]] ;z[jvj+202]=(x[jvj+202]<=sepcte) ? x[jvj+202] : z[jvj+104];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+200; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+200)*/
pile[v[22]]=jvj+200; pile[WZ1]=111; pile[WZ2]=jvj+201; 
(*f[54])( );     /*TRI1(jvj+200,111,jvj+201)*/
pile[v[22]]=jvj+201; pile[WZ1]=jvj+202; pile[WZ2]=103; pile[WZ3]=jvj+203; 
(*f[58])( );     /*TRI3(jvj+201,jvj+202,103,jvj+203)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+105; pile[WZ4]=jvj+203; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+105,jvj+203,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[196])( );     /*PLUF0(jvj+11,jvj+12,jvj+13)*/
x[jvj+104]=t[x[jvj+104]];
l15:if((x[jvj+104]>0)) goto l16;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+106; 
(*f[299])( );     /*COPEL0(jvj+13,jvj+106)*/
NNNT=116;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+217; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=111; pile[WZ2]=jvj+218; 
(*f[54])( );     /*TRI1(jvj+217,111,jvj+218)*/
pile[v[22]]=jvj+218; pile[WZ1]=jvj+106; pile[WZ2]=107; pile[WZ3]=jvj+219; 
(*f[301])( );     /*TRI11(jvj+218,jvj+106,107,jvj+219)*/
pile[v[22]]=jvj+219; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+107; 
(*f[58])( );     /*TRI3(jvj+219,22,100,jvj+107)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+107; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+84,jvj+107,NNNX)*/
goto l72;
l17:V328=incon;
if((x[jvj+30]==29)) goto l18;
V328=0;
l38:if((V26!=V328)) goto l39;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(102,jvj+28,jvj+77)*/
pile[v[22]]=111; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+77,jvj+78)*/
pile[v[22]]=101; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+78,jvj+79)*/
if((x[jvj+79]!=1273)) goto l39;
pile[v[22]]=107; pile[WZ1]=jvj+77; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(107,jvj+77,jvj+80)*/
pile[v[22]]=102; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(102,jvj+77,jvj+81)*/
x[jvj+16]=0 ;z[jvj+16]=0;
x[jvj+14]=d[76];z[jvj+14]=0;
l19:if((x[jvj+80]>0)) goto l20;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+82; 
(*f[299])( );     /*COPEL0(jvj+16,jvj+82)*/
NNNT=117;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+214; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+214)*/
pile[v[22]]=jvj+214; pile[WZ1]=111; pile[WZ2]=jvj+215; 
(*f[54])( );     /*TRI1(jvj+214,111,jvj+215)*/
pile[v[22]]=jvj+215; pile[WZ1]=jvj+82; pile[WZ2]=107; pile[WZ3]=jvj+216; 
(*f[301])( );     /*TRI11(jvj+215,jvj+82,107,jvj+216)*/
pile[v[22]]=jvj+216; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+216,22,100,jvj+83)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+83; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+83,NNNX)*/
goto l72;
l18:V328=1;
goto l38;
l20:x[jvj+206]=s[x[jvj+80]] ;z[jvj+206]=(x[jvj+206]<=sepcte) ? x[jvj+206] : z[jvj+80];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+204; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=111; pile[WZ2]=jvj+205; 
(*f[54])( );     /*TRI1(jvj+204,111,jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=jvj+206; pile[WZ2]=103; pile[WZ3]=jvj+207; 
(*f[58])( );     /*TRI3(jvj+205,jvj+206,103,jvj+207)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+81; pile[WZ4]=jvj+207; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+81,jvj+207,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[196])( );     /*PLUF0(jvj+14,jvj+15,jvj+16)*/
x[jvj+80]=t[x[jvj+80]];
goto l19;
l22:x[jvj+18]=s[x[jvj+266]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+266];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[522])( );     /*PLUB2(jvj+17,jvj+18)*/
x[jvj+266]=t[x[jvj+266]];
l21:if((x[jvj+266]>0)) goto l22;
x[jvj+267]=x[jvj+160] ;z[jvj+267]=z[jvj+160];
l23:if((x[jvj+267]>0)) goto l24;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+161; 
(*f[299])( );     /*COPEL0(jvj+17,jvj+161)*/
pile[v[22]]=102; pile[WZ1]=jvj+155; pile[WZ2]=jvj+162; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(102,jvj+155,jvj+162)*/
pile[v[22]]=jvj+153; pile[WZ1]=jvj+162; pile[WZ2]=jvj+163; 
(*f[760])( );     /*MEMEX0(jvj+153,jvj+162,jvj+163)*/
if((x[jvj+163]==135)) goto l60;
l59:x[jvj+270]=t[x[jvj+270]];
l58:if((x[jvj+270]<=0)) goto l57;
x[jvj+155]=s[x[jvj+270]] ;z[jvj+155]=(x[jvj+155]<=sepcte) ? x[jvj+155] : z[jvj+270];
if((x[jvj+150]==x[jvj+155])) goto l59;
pile[v[22]]=111; pile[WZ1]=jvj+155; pile[WZ2]=jvj+156; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(111,jvj+155,jvj+156)*/
pile[v[22]]=101; pile[WZ1]=jvj+156; pile[WZ2]=jvj+157; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(101,jvj+156,jvj+157)*/
if((x[jvj+157]!=1273)) goto l59;
x[jvj+250]=x[jvj+155] ;z[jvj+250]=z[jvj+155];
x[jvj+276]=x[jvj+284] ;z[jvj+276]=z[jvj+284];
l79:if((x[jvj+276]>0)) goto l80;
goto l59;
l24:x[jvj+19]=s[x[jvj+267]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+267];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+19; 
(*f[522])( );     /*PLUB2(jvj+17,jvj+19)*/
x[jvj+267]=t[x[jvj+267]];
goto l23;
l28:x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+28; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(jvj+32,jvj+28,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+34]!=22)) goto l29;
pile[v[22]]=111; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+33,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+35,jvj+36)*/
V155=x[jvj+36];
if(V155!=1215&&V155!=1273&&V155!=1214) goto l29;
pile[v[22]]=268; pile[WZ1]=jvj+32; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(268,jvj+32,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+28; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(jvj+37,jvj+28,jvj+38)*/
pile[v[22]]=130; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(130,jvj+38,V175)*/
V175=pile[WZ2]; 
V157=V175;
if((V157>=0)) goto l29;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+39)*/
NNNT=99;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+40)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+40; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+40,NNNX)*/
goto l72;
l29:x[jvj+31]=t[x[jvj+31]];
goto l27;
l31:x[jvj+42]=s[x[jvj+41]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+41];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+28; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+42,jvj+28,jvj+43)*/
pile[v[22]]=111; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+43,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+44,jvj+45)*/
if((x[jvj+45]!=1273)) goto l32;
pile[v[22]]=268; pile[WZ1]=jvj+42; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(268,jvj+42,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+28; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+46,jvj+28,jvj+47)*/
pile[v[22]]=130; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,jvj+47,V285)*/
V285=pile[WZ2]; 
if((V285!=0)) goto l32;
pile[v[22]]=107; pile[WZ1]=jvj+43; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(107,jvj+43,jvj+48)*/
pile[v[22]]=102; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,jvj+43,jvj+49)*/
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+8]=d[76];z[jvj+8]=0;
goto l13;
l32:x[jvj+41]=t[x[jvj+41]];
goto l30;
l34:x[jvj+52]=t[x[jvj+52]];
goto l33;
l35:if(x[jvj+30]!=29&&x[jvj+30]!=30) goto l39;
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(100,jvj+28,jvj+63)*/
if((x[jvj+63]!=22)) goto l39;
pile[v[22]]=103; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(103,jvj+28,jvj+64)*/
pile[v[22]]=130; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(130,jvj+64,V26)*/
V26=pile[WZ2]; 
V28=incon;
if((x[jvj+30]==29)) goto l2;
V49=V26+1;
V28=V49;
goto l36;
l39:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(539,NNNY,jvj+84)*/
pile[v[22]]=111; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(111,jvj+84,jvj+85)*/
pile[v[22]]=101; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(101,jvj+85,jvj+86)*/
if((x[jvj+86]!=25)) goto l48;
x[jvj+87]=d[20];z[jvj+87]=0;
l40:if((x[jvj+87]>0)) goto l41;
x[jvj+97]=d[20];z[jvj+97]=0;
l43:if((x[jvj+97]>0)) goto l44;
x[jvj+108]=d[20];z[jvj+108]=0;
l46:if((x[jvj+108]<=0)) goto l48;
x[jvj+109]=s[x[jvj+108]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+108];
pile[v[22]]=jvj+109; pile[WZ1]=jvj+84; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(jvj+109,jvj+84,jvj+110)*/
pile[v[22]]=111; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+110,jvj+111)*/
pile[v[22]]=101; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+111,jvj+112)*/
if((x[jvj+112]!=1273)) goto l47;
pile[v[22]]=268; pile[WZ1]=jvj+109; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(268,jvj+109,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=jvj+84; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(jvj+113,jvj+84,jvj+114)*/
pile[v[22]]=130; pile[WZ1]=jvj+114; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+114,V260)*/
V260=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+110; pile[WZ2]=jvj+115; 
(*f[33])( );     /*FNDE0(107,jvj+110,jvj+115)*/
V240=V260;
for(i=x[jvj+115],V248=0;i>0;i=t[i],V248++)  ;
if((V248!=V240)) goto l47;
pile[v[22]]=102; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+110,jvj+116)*/
x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+5]=d[76];z[jvj+5]=0;
goto l11;
l41:x[jvj+88]=s[x[jvj+87]] ;z[jvj+88]=(x[jvj+88]<=sepcte) ? x[jvj+88] : z[jvj+87];
pile[v[22]]=jvj+88; pile[WZ1]=jvj+84; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(jvj+88,jvj+84,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+89,jvj+90)*/
if((x[jvj+90]!=22)) goto l42;
pile[v[22]]=111; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+89,jvj+91)*/
pile[v[22]]=101; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+91,jvj+92)*/
V182=x[jvj+92];
if(V182!=1215&&V182!=1273&&V182!=1214) goto l42;
pile[v[22]]=268; pile[WZ1]=jvj+88; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(268,jvj+88,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+84; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(jvj+93,jvj+84,jvj+94)*/
pile[v[22]]=130; pile[WZ1]=jvj+94; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+94,V202)*/
V202=pile[WZ2]; 
V184=V202;
if((V184>=0)) goto l42;
pile[v[22]]=107; pile[WZ1]=jvj+89; pile[WZ2]=jvj+95; 
(*f[33])( );     /*FNDE0(107,jvj+89,jvj+95)*/
NNNT=99;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+96; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+96)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+96; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+84,jvj+96,NNNX)*/
goto l72;
l42:x[jvj+87]=t[x[jvj+87]];
goto l40;
l44:x[jvj+98]=s[x[jvj+97]] ;z[jvj+98]=(x[jvj+98]<=sepcte) ? x[jvj+98] : z[jvj+97];
pile[v[22]]=jvj+98; pile[WZ1]=jvj+84; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(jvj+98,jvj+84,jvj+99)*/
pile[v[22]]=111; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,jvj+99,jvj+100)*/
pile[v[22]]=101; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+100,jvj+101)*/
if((x[jvj+101]!=1273)) goto l45;
pile[v[22]]=268; pile[WZ1]=jvj+98; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(268,jvj+98,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=jvj+84; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(jvj+102,jvj+84,jvj+103)*/
pile[v[22]]=130; pile[WZ1]=jvj+103; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(130,jvj+103,V311)*/
V311=pile[WZ2]; 
if((V311!=0)) goto l45;
pile[v[22]]=107; pile[WZ1]=jvj+99; pile[WZ2]=jvj+104; 
(*f[33])( );     /*FNDE0(107,jvj+99,jvj+104)*/
pile[v[22]]=102; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+99,jvj+105)*/
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+11]=d[76];z[jvj+11]=0;
goto l15;
l45:x[jvj+97]=t[x[jvj+97]];
goto l43;
l47:x[jvj+108]=t[x[jvj+108]];
goto l46;
l48:if(x[jvj+86]!=30&&x[jvj+86]!=29) goto l55;
V111=incon;
if((x[jvj+86]==29)) goto l6;
V111=1;
goto l49;
l50:pile[v[22]]=100; pile[WZ1]=jvj+84; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(100,jvj+84,jvj+126)*/
if((x[jvj+126]!=22)) goto l55;
pile[v[22]]=102; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(102,jvj+84,jvj+127)*/
pile[v[22]]=130; pile[WZ1]=jvj+127; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(130,jvj+127,K)*/
K=pile[WZ2]; 
V1=incon;
if((x[jvj+86]==29)) goto l1;
V1=K;
goto l51;
l53:pile[v[22]]=100; pile[WZ1]=jvj+127; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(100,jvj+127,jvj+140)*/
if((x[jvj+140]!=22)) goto l55;
pile[v[22]]=103; pile[WZ1]=jvj+84; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(103,jvj+84,jvj+141)*/
pile[v[22]]=130; pile[WZ1]=jvj+141; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(130,jvj+141,V54)*/
V54=pile[WZ2]; 
V56=incon;
if((x[jvj+86]==29)) goto l3;
V77=V54+1;
V56=V77;
goto l54;
l55:pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(543,NNNY,jvj+146)*/
pile[v[22]]=111; pile[WZ1]=jvj+146; pile[WZ2]=jvj+147; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,jvj+146,jvj+147)*/
pile[v[22]]=101; pile[WZ1]=jvj+147; pile[WZ2]=jvj+148; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+147,jvj+148)*/
if((x[jvj+148]!=485)) goto l61;
pile[v[22]]=107; pile[WZ1]=jvj+146; pile[WZ2]=jvj+149; 
(*f[33])( );     /*FNDE0(107,jvj+146,jvj+149)*/
x[jvj+274]=x[jvj+149] ;z[jvj+274]=z[jvj+149];
l73:if((x[jvj+274]>0)) goto l74;
l61:pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+165; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(111,NNNY,jvj+165)*/
pile[v[22]]=101; pile[WZ1]=jvj+165; pile[WZ2]=jvj+166; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(101,jvj+165,jvj+166)*/
if((x[jvj+166]!=1273)) goto l71;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(102,NNNY,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+167; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(100,jvj+20,jvj+167)*/
if(x[jvj+167]!=96&&x[jvj+167]!=89&&x[jvj+167]!=41&&x[jvj+167]!=20&&x[jvj+167]!=128&&x[jvj+167]!=570&&x[jvj+167]!=1317) goto l71;
pile[v[22]]=107; pile[WZ1]=NNNY; pile[WZ2]=jvj+168; 
(*f[33])( );     /*FNDE0(107,NNNY,jvj+168)*/
if((x[jvj+169]=w[x[jvj+167]][3])==incon) goto l68;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+169; pile[WZ3]=jvj+170; 
(*f[45])( );if(v[102]) goto l68;     /*FNDZ0(jvj+20,jvj+169,V448,jvj+170)*/
V448=pile[WZ2]; 
x[jvj+271]=x[jvj+168] ;z[jvj+271]=z[jvj+168];
l62:if((x[jvj+271]>0)) goto l63;
x[jvj+272]=x[jvj+168] ;z[jvj+272]=z[jvj+168];
l65:if((x[jvj+272]<=0)) goto l68;
x[jvj+178]=s[x[jvj+272]] ;z[jvj+178]=(x[jvj+178]<=sepcte) ? x[jvj+178] : z[jvj+272];
pile[v[22]]=100; pile[WZ1]=jvj+178; pile[WZ2]=jvj+179; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(100,jvj+178,jvj+179)*/
if(x[jvj+179]!=96&&x[jvj+179]!=89&&x[jvj+179]!=41&&x[jvj+179]!=20&&x[jvj+179]!=128&&x[jvj+179]!=570&&x[jvj+179]!=1317) goto l66;
pile[v[22]]=jvj+178; pile[WZ1]=jvj+169; pile[WZ3]=jvj+180; 
(*f[45])( );if(v[102]) goto l66;     /*FNDZ0(jvj+178,jvj+169,V454,jvj+180)*/
V454=pile[WZ2]; 
if((V448==V454)) goto l66;
x[jvj+280]=x[jvj+168] ;z[jvj+280]=z[jvj+168];
l91:if((x[jvj+280]>0)) goto l92;
l66:x[jvj+272]=t[x[jvj+272]];
goto l65;
l57:x[jvj+269]=t[x[jvj+269]];
l56:if((x[jvj+269]<=0)) goto l61;
x[jvj+150]=s[x[jvj+269]] ;z[jvj+150]=(x[jvj+150]<=sepcte) ? x[jvj+150] : z[jvj+269];
if((x[NNNY]!=x[jvj+150])) goto l57;
pile[v[22]]=111; pile[WZ1]=jvj+150; pile[WZ2]=jvj+151; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(111,jvj+150,jvj+151)*/
pile[v[22]]=101; pile[WZ1]=jvj+151; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(101,jvj+151,jvj+152)*/
if((x[jvj+152]!=1273)) goto l57;
pile[v[22]]=102; pile[WZ1]=jvj+150; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(102,jvj+150,jvj+153)*/
pile[v[22]]=107; pile[WZ2]=jvj+154; 
(*f[33])( );     /*FNDE0(107,jvj+150,jvj+154)*/
x[jvj+232]=x[jvj+153] ;z[jvj+232]=z[jvj+153];
x[jvj+270]=x[jvj+149] ;z[jvj+270]=z[jvj+149];
goto l58;
l60:NNNT=118;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+227; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+227)*/
pile[WZ3]=1273; pile[WZ4]=jvj+229; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+229)*/
pile[v[22]]=jvj+229; pile[WZ1]=111; pile[WZ2]=jvj+230; 
(*f[54])( );     /*TRI1(jvj+229,111,jvj+230)*/
pile[v[22]]=jvj+230; pile[WZ1]=jvj+161; pile[WZ2]=107; pile[WZ3]=jvj+231; 
(*f[301])( );     /*TRI11(jvj+230,jvj+161,107,jvj+231)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+232; pile[WZ4]=jvj+231; pile[WZ5]=jvj+228; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+232,jvj+231,jvj+228)*/
pile[WZ2]=111; pile[WZ3]=jvj+227; pile[WZ4]=jvj+164; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+227,jvj+164)*/
pile[v[22]]=jvj+164; pile[WZ1]=107; pile[WZ2]=jvj+228; 
(*f[36])( );     /*PLUSC0(jvj+164,107,jvj+228)*/
pile[v[22]]=jvj+159; pile[WZ1]=jvj+164; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+159,jvj+164,107)*/
pile[v[22]]=jvj+146; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+146,jvj+164,NNNX)*/
goto l72;
l63:x[jvj+173]=s[x[jvj+271]] ;z[jvj+173]=(x[jvj+173]<=sepcte) ? x[jvj+173] : z[jvj+271];
x[jvj+171]=x[jvj+173] ;z[jvj+171]=z[jvj+173];
pile[v[22]]=jvj+171; pile[WZ1]=jvj+169; pile[WZ3]=jvj+172; 
(*f[45])( );if(v[102]) goto l64;     /*FNDZ0(jvj+171,jvj+169,V450,jvj+172)*/
V450=pile[WZ2]; 
if((V448!=V450)) goto l64;
pile[v[22]]=100; pile[WZ1]=jvj+173; pile[WZ2]=jvj+174; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(100,jvj+173,jvj+174)*/
if(x[jvj+174]!=96&&x[jvj+174]!=89&&x[jvj+174]!=41&&x[jvj+174]!=20&&x[jvj+174]!=128&&x[jvj+174]!=570&&x[jvj+174]!=1317) goto l64;
x[jvj+278]=x[jvj+168] ;z[jvj+278]=z[jvj+168];
l85:if((x[jvj+278]>0)) goto l86;
l64:x[jvj+271]=t[x[jvj+271]];
goto l62;
l68:x[jvj+273]=x[jvj+168] ;z[jvj+273]=z[jvj+168];
l67:if((x[jvj+273]<=0)) goto l71;
x[jvj+23]=s[x[jvj+273]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+273];
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+184; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(100,jvj+23,jvj+184)*/
if((x[jvj+184]!=484)) goto l69;
if((x[jvj+21]=w[x[jvj+167]][3])==incon) goto l97;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ3]=jvj+22; 
(*f[45])( );if(v[102]) goto l97;     /*FNDZ0(jvj+20,jvj+21,V456,jvj+22)*/
V456=pile[WZ2]; 
V430=V456;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[200])( );if(v[102]) goto l97;     /*NDD0(jvj+23,jvj+24)*/
pile[v[22]]=365; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(365,jvj+24,jvj+25)*/
x[jvj+268]=x[jvj+25] ;z[jvj+268]=z[jvj+25];
l25:if((x[jvj+268]<=0)) goto l97;
x[jvj+26]=s[x[jvj+268]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+268];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+21; pile[WZ3]=jvj+27; 
(*f[45])( );if(v[102]) goto l26;     /*FNDZ0(jvj+26,jvj+21,V458,jvj+27)*/
V458=pile[WZ2]; 
V433=V458;
if((V430==V433)) goto l69;
l26:x[jvj+268]=t[x[jvj+268]];
goto l25;
l71:x[NNNX]=NNNT=incon;
l70:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l74:x[jvj+245]=s[x[jvj+274]] ;z[jvj+245]=(x[jvj+245]<=sepcte) ? x[jvj+245] : z[jvj+274];
pile[v[22]]=jvj+245; pile[WZ1]=NNNY; pile[WZ2]=jvj+246; 
(*f[760])( );     /*MEMEX0(jvj+245,NNNY,jvj+246)*/
if((x[jvj+246]==135)) goto l75;
x[jvj+274]=t[x[jvj+274]];
goto l73;
l75:x[jvj+247]=0 ;z[jvj+247]=0;
x[jvj+275]=x[jvj+149] ;z[jvj+275]=z[jvj+149];
l76:if((x[jvj+275]>0)) goto l77;
x[jvj+284]=x[jvj+247] ;z[jvj+284]=z[jvj+247];
x[jvj+269]=x[jvj+149] ;z[jvj+269]=z[jvj+149];
goto l56;
l77:x[jvj+248]=s[x[jvj+275]] ;z[jvj+248]=(x[jvj+248]<=sepcte) ? x[jvj+248] : z[jvj+275];
if((x[jvj+248]==x[jvj+245])) goto l78;
pile[v[22]]=jvj+247; pile[WZ1]=jvj+248; 
(*f[68])( );     /*PLUE0(jvj+247,jvj+248)*/
l78:x[jvj+275]=t[x[jvj+275]];
goto l76;
l80:x[jvj+249]=s[x[jvj+276]] ;z[jvj+249]=(x[jvj+249]<=sepcte) ? x[jvj+249] : z[jvj+276];
pile[v[22]]=jvj+249; pile[WZ1]=jvj+250; pile[WZ2]=jvj+251; 
(*f[760])( );     /*MEMEX0(jvj+249,jvj+250,jvj+251)*/
if((x[jvj+251]==135)) goto l81;
x[jvj+276]=t[x[jvj+276]];
goto l79;
l81:x[jvj+252]=0 ;z[jvj+252]=0;
x[jvj+277]=x[jvj+284] ;z[jvj+277]=z[jvj+284];
l82:if((x[jvj+277]>0)) goto l83;
x[jvj+158]=x[jvj+252] ;z[jvj+158]=z[jvj+252];
pile[v[22]]=jvj+158; pile[WZ1]=jvj+159; 
(*f[299])( );     /*COPEL0(jvj+158,jvj+159)*/
pile[v[22]]=107; pile[WZ1]=jvj+155; pile[WZ2]=jvj+160; 
(*f[33])( );     /*FNDE0(107,jvj+155,jvj+160)*/
x[jvj+17]=0 ;z[jvj+17]=0;
x[jvj+266]=x[jvj+154] ;z[jvj+266]=z[jvj+154];
goto l21;
l83:x[jvj+253]=s[x[jvj+277]] ;z[jvj+253]=(x[jvj+253]<=sepcte) ? x[jvj+253] : z[jvj+277];
if((x[jvj+253]==x[jvj+249])) goto l84;
pile[v[22]]=jvj+252; pile[WZ1]=jvj+253; 
(*f[68])( );     /*PLUE0(jvj+252,jvj+253)*/
l84:x[jvj+277]=t[x[jvj+277]];
goto l82;
l86:x[jvj+254]=s[x[jvj+278]] ;z[jvj+254]=(x[jvj+254]<=sepcte) ? x[jvj+254] : z[jvj+278];
pile[v[22]]=jvj+254; pile[WZ1]=jvj+171; pile[WZ2]=jvj+255; 
(*f[760])( );     /*MEMEX0(jvj+254,jvj+171,jvj+255)*/
if((x[jvj+255]==135)) goto l87;
x[jvj+278]=t[x[jvj+278]];
goto l85;
l87:x[jvj+256]=0 ;z[jvj+256]=0;
x[jvj+279]=x[jvj+168] ;z[jvj+279]=z[jvj+168];
l88:if((x[jvj+279]>0)) goto l89;
x[jvj+175]=x[jvj+256] ;z[jvj+175]=z[jvj+256];
pile[v[22]]=jvj+175; pile[WZ1]=jvj+176; 
(*f[299])( );     /*COPEL0(jvj+175,jvj+176)*/
NNNT=120;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+233; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+233)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+234; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+234)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1273; pile[WZ4]=jvj+236; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+236)*/
pile[v[22]]=jvj+236; pile[WZ1]=111; pile[WZ2]=jvj+237; 
(*f[54])( );     /*TRI1(jvj+236,111,jvj+237)*/
pile[v[22]]=jvj+237; pile[WZ1]=jvj+176; pile[WZ2]=107; pile[WZ3]=jvj+238; 
(*f[301])( );     /*TRI11(jvj+237,jvj+176,107,jvj+238)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+238; pile[WZ5]=jvj+235; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+238,jvj+235)*/
pile[WZ2]=111; pile[WZ3]=jvj+233; pile[WZ4]=jvj+177; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+233,jvj+177)*/
pile[v[22]]=jvj+177; pile[WZ1]=107; pile[WZ2]=jvj+234; 
(*f[36])( );     /*PLUSC0(jvj+177,107,jvj+234)*/
pile[WZ2]=jvj+235; 
(*f[36])( );     /*PLUSC0(jvj+177,107,jvj+235)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+177; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+177,NNNX)*/
goto l72;
l89:x[jvj+257]=s[x[jvj+279]] ;z[jvj+257]=(x[jvj+257]<=sepcte) ? x[jvj+257] : z[jvj+279];
if((x[jvj+257]==x[jvj+254])) goto l90;
pile[v[22]]=jvj+256; pile[WZ1]=jvj+257; 
(*f[68])( );     /*PLUE0(jvj+256,jvj+257)*/
l90:x[jvj+279]=t[x[jvj+279]];
goto l88;
l92:x[jvj+258]=s[x[jvj+280]] ;z[jvj+258]=(x[jvj+258]<=sepcte) ? x[jvj+258] : z[jvj+280];
pile[v[22]]=jvj+258; pile[WZ1]=jvj+178; pile[WZ2]=jvj+259; 
(*f[760])( );     /*MEMEX0(jvj+258,jvj+178,jvj+259)*/
if((x[jvj+259]==135)) goto l93;
x[jvj+280]=t[x[jvj+280]];
goto l91;
l93:x[jvj+260]=0 ;z[jvj+260]=0;
x[jvj+281]=x[jvj+168] ;z[jvj+281]=z[jvj+168];
l94:if((x[jvj+281]>0)) goto l95;
x[jvj+181]=x[jvj+260] ;z[jvj+181]=z[jvj+260];
pile[v[22]]=jvj+181; pile[WZ1]=jvj+182; 
(*f[299])( );     /*COPEL0(jvj+181,jvj+182)*/
NNNT=121;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1273; pile[WZ4]=jvj+239; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+239)*/
pile[v[22]]=jvj+239; pile[WZ1]=111; pile[WZ2]=jvj+240; 
(*f[54])( );     /*TRI1(jvj+239,111,jvj+240)*/
pile[v[22]]=jvj+240; pile[WZ1]=jvj+182; pile[WZ2]=107; pile[WZ3]=jvj+241; 
(*f[301])( );     /*TRI11(jvj+240,jvj+182,107,jvj+241)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+241; pile[WZ5]=jvj+183; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+241,jvj+183)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+183; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+183,NNNX)*/
goto l72;
l95:x[jvj+261]=s[x[jvj+281]] ;z[jvj+261]=(x[jvj+261]<=sepcte) ? x[jvj+261] : z[jvj+281];
if((x[jvj+261]==x[jvj+258])) goto l96;
pile[v[22]]=jvj+260; pile[WZ1]=jvj+261; 
(*f[68])( );     /*PLUE0(jvj+260,jvj+261)*/
l96:x[jvj+281]=t[x[jvj+281]];
goto l94;
l97:x[jvj+282]=x[jvj+168] ;z[jvj+282]=z[jvj+168];
l98:if((x[jvj+282]>0)) goto l99;
l69:x[jvj+273]=t[x[jvj+273]];
goto l67;
l99:x[jvj+262]=s[x[jvj+282]] ;z[jvj+262]=(x[jvj+262]<=sepcte) ? x[jvj+262] : z[jvj+282];
pile[v[22]]=jvj+262; pile[WZ1]=jvj+23; pile[WZ2]=jvj+263; 
(*f[760])( );     /*MEMEX0(jvj+262,jvj+23,jvj+263)*/
if((x[jvj+263]==135)) goto l100;
x[jvj+282]=t[x[jvj+282]];
goto l98;
l100:x[jvj+264]=0 ;z[jvj+264]=0;
x[jvj+283]=x[jvj+168] ;z[jvj+283]=z[jvj+168];
l101:if((x[jvj+283]>0)) goto l102;
x[jvj+185]=x[jvj+264] ;z[jvj+185]=z[jvj+264];
pile[v[22]]=jvj+185; pile[WZ1]=jvj+186; 
(*f[299])( );     /*COPEL0(jvj+185,jvj+186)*/
NNNT=122;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1273; pile[WZ4]=jvj+242; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+242)*/
pile[v[22]]=jvj+242; pile[WZ1]=111; pile[WZ2]=jvj+243; 
(*f[54])( );     /*TRI1(jvj+242,111,jvj+243)*/
pile[v[22]]=jvj+243; pile[WZ1]=jvj+186; pile[WZ2]=107; pile[WZ3]=jvj+244; 
(*f[301])( );     /*TRI11(jvj+243,jvj+186,107,jvj+244)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+244; pile[WZ5]=jvj+187; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+244,jvj+187)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+187; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+187,NNNX)*/
goto l72;
l102:x[jvj+265]=s[x[jvj+283]] ;z[jvj+265]=(x[jvj+265]<=sepcte) ? x[jvj+265] : z[jvj+283];
if((x[jvj+265]==x[jvj+262])) goto l103;
pile[v[22]]=jvj+264; pile[WZ1]=jvj+265; 
(*f[68])( );     /*PLUE0(jvj+264,jvj+265)*/
l103:x[jvj+283]=t[x[jvj+283]];
goto l101;
}
