#include "dx.h"
void DIAC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V21=0,V22=0,V10=0,V23=0,V38=0,V40=0,V50=0,V52=0,V54=0,V55=0,V110=0,V111=0,V99=0,V112=0,V113=0,V73=0,V5=0,V37=0,V17=0,TP=0,V107=0,V94=0;
int X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=421;
x[jvj+1]=10665;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==308&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=X; pile[WZ1]=jvj+2; 
(*f[686])( );if(v[102]) goto l41;     /*DIAD0(X,jvj+2)*/
pile[v[22]]=184; 
(*f[71])( );     /*ENLV0(184,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=10665; 
(*f[294])( );     /*PLUK2(jvj+2,10665)*/
pile[v[22]]=301; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(301,X,jvj+37)*/
if((x[jvj+37]!=68)) goto l21;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10667; pile[WZ4]=jvj+161; 
(*f[181])( );     /*QUADRI2(100,20,101,10667,jvj+161)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+164; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+164)*/
pile[WZ3]=(-608); pile[WZ4]=jvj+162; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+162)*/
pile[v[22]]=jvj+162; pile[WZ1]=103; pile[WZ2]=jvj+163; 
(*f[54])( );     /*TRI1(jvj+162,103,jvj+163)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+164; pile[WZ4]=jvj+163; pile[WZ5]=jvj+157; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+164,jvj+163,jvj+157)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4584); pile[WZ4]=jvj+167; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4584),jvj+167)*/
pile[WZ3]=(-697); pile[WZ4]=jvj+165; 
(*f[270])( );     /*QUADRI7(100,21,140,(-697),jvj+165)*/
pile[v[22]]=jvj+165; pile[WZ1]=103; pile[WZ2]=jvj+166; 
(*f[54])( );     /*TRI1(jvj+165,103,jvj+166)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+167; pile[WZ4]=jvj+166; pile[WZ5]=jvj+159; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+167,jvj+166,jvj+159)*/
pile[v[22]]=jvj+157; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+158; 
(*f[180])( );     /*TRIENS0(jvj+157,(-20),114,jvj+158)*/
pile[v[22]]=jvj+159; pile[WZ2]=jvj+158; pile[WZ3]=113; pile[WZ4]=jvj+160; 
(*f[298])( );     /*TRIENS1(jvj+159,(-20),jvj+158,113,jvj+160)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+161; pile[WZ5]=jvj+153; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+161,jvj+160,jvj+153)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4584); pile[WZ4]=jvj+172; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4584),jvj+172)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+170; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+170)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4780); pile[WZ4]=jvj+168; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4780),jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=436; pile[WZ2]=jvj+169; 
(*f[54])( );     /*TRI1(jvj+168,436,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=jvj+170; pile[WZ2]=111; pile[WZ3]=jvj+171; 
(*f[58])( );     /*TRI3(jvj+169,jvj+170,111,jvj+171)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+172; pile[WZ4]=jvj+171; pile[WZ5]=jvj+155; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+172,jvj+171,jvj+155)*/
pile[v[22]]=jvj+153; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+154; 
(*f[180])( );     /*TRIENS0(jvj+153,(-20),107,jvj+154)*/
pile[v[22]]=jvj+155; pile[WZ2]=jvj+154; pile[WZ3]=105; pile[WZ4]=jvj+156; 
(*f[298])( );     /*TRIENS1(jvj+155,(-20),jvj+154,105,jvj+156)*/
pile[v[22]]=jvj+156; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+156,42,100,jvj+38)*/
pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+38)*/
pile[v[22]]=110; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(110,X,V73)*/
V73=pile[WZ2]; 
x[jvj+22]=0 ;z[jvj+22]=0;
pile[v[22]]=159; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(159,X,jvj+17)*/
x[jvj+18]=d[27];z[jvj+18]=0;
l8:if((x[jvj+17]>0)) goto l9;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+39; 
(*f[299])( );     /*COPEL0(jvj+22,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+177; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+177)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3822); pile[WZ4]=jvj+181; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3822),jvj+181)*/
pile[WZ3]=(-4780); pile[WZ4]=jvj+179; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4780),jvj+179)*/
pile[v[22]]=jvj+177; pile[WZ1]=111; pile[WZ2]=jvj+178; 
(*f[54])( );     /*TRI1(jvj+177,111,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=jvj+179; pile[WZ2]=103; pile[WZ3]=jvj+180; 
(*f[58])( );     /*TRI3(jvj+178,jvj+179,103,jvj+180)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+181; pile[WZ4]=jvj+180; pile[WZ5]=jvj+175; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+181,jvj+180,jvj+175)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=45; pile[WZ4]=jvj+182; 
(*f[181])( );     /*QUADRI2(100,20,101,45,jvj+182)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3822); pile[WZ4]=jvj+186; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3822),jvj+186)*/
pile[v[22]]=jvj+39; pile[WZ1]=128; pile[WZ2]=jvj+187; 
(*f[300])( );     /*TRI10(jvj+39,128,jvj+187)*/
pile[v[22]]=jvj+187; pile[WZ2]=100; pile[WZ3]=jvj+184; 
(*f[58])( );     /*TRI3(jvj+187,128,100,jvj+184)*/
pile[v[22]]=jvj+182; pile[WZ1]=111; pile[WZ2]=jvj+183; 
(*f[54])( );     /*TRI1(jvj+182,111,jvj+183)*/
pile[v[22]]=jvj+183; pile[WZ1]=jvj+184; pile[WZ2]=103; pile[WZ3]=jvj+185; 
(*f[58])( );     /*TRI3(jvj+183,jvj+184,103,jvj+185)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+186; pile[WZ4]=jvj+185; pile[WZ5]=jvj+176; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+186,jvj+185,jvj+176)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=33; pile[WZ4]=jvj+190; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+190)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+197; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+197)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V73; pile[WZ4]=jvj+195; 
(*f[270])( );     /*QUADRI7(100,96,163,V73,jvj+195)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+191; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+191)*/
pile[WZ3]=68; pile[WZ4]=jvj+204; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+204)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3822); pile[WZ4]=jvj+202; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3822),jvj+202)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+198; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+198)*/
pile[WZ3]=68; pile[WZ4]=jvj+211; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+211)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=(-740); pile[WZ4]=jvj+209; 
(*f[270])( );     /*QUADRI7(100,96,163,(-740),jvj+209)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+205; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+205)*/
pile[WZ3]=68; pile[WZ4]=jvj+216; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+216)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+214; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+214)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+212; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+212)*/
pile[v[22]]=jvj+212; pile[WZ1]=160; pile[WZ2]=jvj+213; 
(*f[54])( );     /*TRI1(jvj+212,160,jvj+213)*/
pile[v[22]]=jvj+213; pile[WZ1]=jvj+214; pile[WZ2]=103; pile[WZ3]=jvj+215; 
(*f[58])( );     /*TRI3(jvj+213,jvj+214,103,jvj+215)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+216; pile[WZ4]=jvj+215; pile[WZ5]=jvj+207; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+216,jvj+215,jvj+207)*/
pile[v[22]]=jvj+205; pile[WZ1]=160; pile[WZ2]=jvj+206; 
(*f[54])( );     /*TRI1(jvj+205,160,jvj+206)*/
pile[v[22]]=jvj+206; pile[WZ1]=jvj+207; pile[WZ2]=120; pile[WZ3]=jvj+208; 
(*f[58])( );     /*TRI3(jvj+206,jvj+207,120,jvj+208)*/
pile[v[22]]=jvj+208; pile[WZ1]=jvj+209; pile[WZ2]=103; pile[WZ3]=jvj+210; 
(*f[58])( );     /*TRI3(jvj+208,jvj+209,103,jvj+210)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+211; pile[WZ4]=jvj+210; pile[WZ5]=jvj+200; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+211,jvj+210,jvj+200)*/
pile[v[22]]=jvj+198; pile[WZ1]=160; pile[WZ2]=jvj+199; 
(*f[54])( );     /*TRI1(jvj+198,160,jvj+199)*/
pile[v[22]]=jvj+199; pile[WZ1]=jvj+200; pile[WZ2]=120; pile[WZ3]=jvj+201; 
(*f[58])( );     /*TRI3(jvj+199,jvj+200,120,jvj+201)*/
pile[v[22]]=jvj+201; pile[WZ1]=jvj+202; pile[WZ2]=103; pile[WZ3]=jvj+203; 
(*f[58])( );     /*TRI3(jvj+201,jvj+202,103,jvj+203)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+204; pile[WZ4]=jvj+203; pile[WZ5]=jvj+193; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+204,jvj+203,jvj+193)*/
pile[v[22]]=jvj+191; pile[WZ1]=160; pile[WZ2]=jvj+192; 
(*f[54])( );     /*TRI1(jvj+191,160,jvj+192)*/
pile[v[22]]=jvj+192; pile[WZ1]=jvj+193; pile[WZ2]=120; pile[WZ3]=jvj+194; 
(*f[58])( );     /*TRI3(jvj+192,jvj+193,120,jvj+194)*/
pile[v[22]]=jvj+194; pile[WZ1]=jvj+195; pile[WZ2]=103; pile[WZ3]=jvj+196; 
(*f[58])( );     /*TRI3(jvj+194,jvj+195,103,jvj+196)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+197; pile[WZ4]=jvj+196; pile[WZ5]=jvj+188; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+197,jvj+196,jvj+188)*/
pile[v[22]]=jvj+188; pile[WZ1]=120; pile[WZ2]=jvj+189; 
(*f[54])( );     /*TRI1(jvj+188,120,jvj+189)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+190; pile[WZ4]=jvj+189; pile[WZ5]=jvj+173; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+190,jvj+189,jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+174; 
(*f[180])( );     /*TRIENS0(jvj+173,(-20),105,jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+174,42,100,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=107; pile[WZ2]=jvj+175; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+175)*/
pile[WZ2]=jvj+176; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+176)*/
pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+40)*/
pile[v[22]]=159; pile[WZ1]=X; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(159,X,jvj+41)*/
l17:if((x[jvj+41]<=0)) goto l21;
x[jvj+23]=s[x[jvj+41]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+41];
pile[v[22]]=530; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(530,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]==135)) goto l18;
l11:pile[v[22]]=521; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(521,jvj+23,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]==135)) goto l18;
l19:pile[v[22]]=122; pile[WZ1]=jvj+23; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(122,jvj+23,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+217; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+217)*/
pile[WZ3]=jvj+42; pile[WZ4]=jvj+221; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+42,jvj+221)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4780); pile[WZ4]=jvj+219; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4780),jvj+219)*/
pile[v[22]]=jvj+217; pile[WZ1]=111; pile[WZ2]=jvj+218; 
(*f[54])( );     /*TRI1(jvj+217,111,jvj+218)*/
pile[v[22]]=jvj+218; pile[WZ1]=jvj+219; pile[WZ2]=103; pile[WZ3]=jvj+220; 
(*f[58])( );     /*TRI3(jvj+218,jvj+219,103,jvj+220)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+221; pile[WZ4]=jvj+220; pile[WZ5]=jvj+91; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+221,jvj+220,jvj+91)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=33; pile[WZ4]=jvj+224; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+224)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+231; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+231)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V73; pile[WZ4]=jvj+229; 
(*f[270])( );     /*QUADRI7(100,96,163,V73,jvj+229)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+225; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+225)*/
pile[WZ3]=75; pile[WZ4]=jvj+238; 
(*f[272])( );     /*QUADRI9(100,89,162,75,jvj+238)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+236; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+236)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+232; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+232)*/
pile[WZ3]=68; pile[WZ4]=jvj+245; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+245)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+42; pile[WZ4]=jvj+243; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+42,jvj+243)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+239; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+239)*/
pile[WZ3]=68; pile[WZ4]=jvj+252; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+252)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=(-740); pile[WZ4]=jvj+250; 
(*f[270])( );     /*QUADRI7(100,96,163,(-740),jvj+250)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+246; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+246)*/
pile[WZ3]=68; pile[WZ4]=jvj+257; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+257)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+255; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+255)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+253; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+253)*/
pile[v[22]]=jvj+253; pile[WZ1]=160; pile[WZ2]=jvj+254; 
(*f[54])( );     /*TRI1(jvj+253,160,jvj+254)*/
pile[v[22]]=jvj+254; pile[WZ1]=jvj+255; pile[WZ2]=103; pile[WZ3]=jvj+256; 
(*f[58])( );     /*TRI3(jvj+254,jvj+255,103,jvj+256)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+257; pile[WZ4]=jvj+256; pile[WZ5]=jvj+248; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+257,jvj+256,jvj+248)*/
pile[v[22]]=jvj+246; pile[WZ1]=160; pile[WZ2]=jvj+247; 
(*f[54])( );     /*TRI1(jvj+246,160,jvj+247)*/
pile[v[22]]=jvj+247; pile[WZ1]=jvj+248; pile[WZ2]=120; pile[WZ3]=jvj+249; 
(*f[58])( );     /*TRI3(jvj+247,jvj+248,120,jvj+249)*/
pile[v[22]]=jvj+249; pile[WZ1]=jvj+250; pile[WZ2]=103; pile[WZ3]=jvj+251; 
(*f[58])( );     /*TRI3(jvj+249,jvj+250,103,jvj+251)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+252; pile[WZ4]=jvj+251; pile[WZ5]=jvj+241; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+252,jvj+251,jvj+241)*/
pile[v[22]]=jvj+239; pile[WZ1]=160; pile[WZ2]=jvj+240; 
(*f[54])( );     /*TRI1(jvj+239,160,jvj+240)*/
pile[v[22]]=jvj+240; pile[WZ1]=jvj+241; pile[WZ2]=120; pile[WZ3]=jvj+242; 
(*f[58])( );     /*TRI3(jvj+240,jvj+241,120,jvj+242)*/
pile[v[22]]=jvj+242; pile[WZ1]=jvj+243; pile[WZ2]=103; pile[WZ3]=jvj+244; 
(*f[58])( );     /*TRI3(jvj+242,jvj+243,103,jvj+244)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+245; pile[WZ4]=jvj+244; pile[WZ5]=jvj+234; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+245,jvj+244,jvj+234)*/
pile[v[22]]=jvj+232; pile[WZ1]=160; pile[WZ2]=jvj+233; 
(*f[54])( );     /*TRI1(jvj+232,160,jvj+233)*/
pile[v[22]]=jvj+233; pile[WZ1]=jvj+234; pile[WZ2]=120; pile[WZ3]=jvj+235; 
(*f[58])( );     /*TRI3(jvj+233,jvj+234,120,jvj+235)*/
pile[v[22]]=jvj+235; pile[WZ1]=jvj+236; pile[WZ2]=103; pile[WZ3]=jvj+237; 
(*f[58])( );     /*TRI3(jvj+235,jvj+236,103,jvj+237)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+238; pile[WZ4]=jvj+237; pile[WZ5]=jvj+227; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+238,jvj+237,jvj+227)*/
pile[v[22]]=jvj+225; pile[WZ1]=160; pile[WZ2]=jvj+226; 
(*f[54])( );     /*TRI1(jvj+225,160,jvj+226)*/
pile[v[22]]=jvj+226; pile[WZ1]=jvj+227; pile[WZ2]=120; pile[WZ3]=jvj+228; 
(*f[58])( );     /*TRI3(jvj+226,jvj+227,120,jvj+228)*/
pile[v[22]]=jvj+228; pile[WZ1]=jvj+229; pile[WZ2]=103; pile[WZ3]=jvj+230; 
(*f[58])( );     /*TRI3(jvj+228,jvj+229,103,jvj+230)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+231; pile[WZ4]=jvj+230; pile[WZ5]=jvj+222; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+231,jvj+230,jvj+222)*/
pile[v[22]]=jvj+222; pile[WZ1]=120; pile[WZ2]=jvj+223; 
(*f[54])( );     /*TRI1(jvj+222,120,jvj+223)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+224; pile[WZ4]=jvj+223; pile[WZ5]=jvj+93; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+224,jvj+223,jvj+93)*/
pile[v[22]]=jvj+91; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+92; 
(*f[180])( );     /*TRIENS0(jvj+91,(-20),107,jvj+92)*/
pile[v[22]]=jvj+93; pile[WZ2]=jvj+92; pile[WZ3]=105; pile[WZ4]=jvj+94; 
(*f[298])( );     /*TRIENS1(jvj+93,(-20),jvj+92,105,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+94,42,100,jvj+30)*/
pile[v[22]]=530; pile[WZ1]=jvj+23; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(530,jvj+23,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+139; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+139)*/
pile[v[22]]=jvj+139; pile[WZ1]=111; pile[WZ2]=jvj+140; 
(*f[54])( );     /*TRI1(jvj+139,111,jvj+140)*/
pile[v[22]]=jvj+29; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+141; 
(*f[298])( );     /*TRIENS1(jvj+29,(-20),jvj+140,107,jvj+141)*/
pile[v[22]]=jvj+141; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+141,22,100,jvj+31)*/
pile[v[22]]=jvj+30; pile[WZ1]=107; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+31)*/
l12:pile[v[22]]=521; pile[WZ1]=jvj+23; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(521,jvj+23,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(jvj+32,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+142; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=111; pile[WZ2]=jvj+143; 
(*f[54])( );     /*TRI1(jvj+142,111,jvj+143)*/
pile[v[22]]=jvj+33; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+144; 
(*f[298])( );     /*TRIENS1(jvj+33,(-20),jvj+143,107,jvj+144)*/
pile[v[22]]=jvj+144; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+144,22,100,jvj+34)*/
pile[v[22]]=jvj+30; pile[WZ1]=107; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+34)*/
l20:pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+30)*/
l18:x[jvj+41]=t[x[jvj+41]];
goto l17;
l3:V10=V21;
l1:x[jvj+71]=incon;
if((V19=w[x[jvj+113]][1])==incon) goto l42;
if((V19==23)) goto l42;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+113; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+113,jvj+70)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=103; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+70,jvj+69,jvj+71)*/
l29:pile[v[22]]=754; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(754,jvj+49,V17)*/
V17=pile[WZ2]; 
TP=V10;
x[jvj+55]=x[jvj+71] ;z[jvj+55]=z[jvj+71];
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; 
(*f[255])( );     /*COPEXP0(jvj+55,jvj+56)*/
x[jvj+57]=incon;
if((TP==41)) goto l4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+72; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+72)*/
pile[WZ3]=41; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+74)*/
pile[v[22]]=jvj+72; pile[WZ1]=111; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+72,111,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+74; pile[WZ2]=103; pile[WZ3]=jvj+75; 
(*f[58])( );     /*TRI3(jvj+73,jvj+74,103,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+56; pile[WZ4]=jvj+75; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+56,jvj+75,jvj+57)*/
l30:pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; 
(*f[255])( );     /*COPEXP0(jvj+57,jvj+58)*/
x[jvj+338]=x[jvj+56] ;z[jvj+338]=z[jvj+56];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=27; pile[WZ4]=jvj+308; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+308)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V17; pile[WZ4]=jvj+310; 
(*f[270])( );     /*QUADRI7(100,21,140,V17,jvj+310)*/
pile[v[22]]=jvj+308; pile[WZ1]=111; pile[WZ2]=jvj+309; 
(*f[54])( );     /*TRI1(jvj+308,111,jvj+309)*/
pile[v[22]]=jvj+309; pile[WZ1]=jvj+310; pile[WZ2]=103; pile[WZ3]=jvj+311; 
(*f[58])( );     /*TRI3(jvj+309,jvj+310,103,jvj+311)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+311; pile[WZ5]=jvj+99; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+311,jvj+99)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=33; pile[WZ4]=jvj+314; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+314)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+321; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+321)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V37; pile[WZ4]=jvj+319; 
(*f[270])( );     /*QUADRI7(100,96,163,V37,jvj+319)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+315; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+315)*/
pile[WZ3]=75; pile[WZ4]=jvj+328; 
(*f[272])( );     /*QUADRI9(100,89,162,75,jvj+328)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=164; pile[WZ4]=jvj+326; 
(*f[181])( );     /*QUADRI2(100,20,101,164,jvj+326)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+322; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+322)*/
pile[WZ3]=68; pile[WZ4]=jvj+335; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+335)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+113; pile[WZ4]=jvj+333; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+113,jvj+333)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+329; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+329)*/
pile[WZ3]=68; pile[WZ4]=jvj+340; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+340)*/
pile[WZ3]=46; pile[WZ4]=jvj+336; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+336)*/
pile[v[22]]=jvj+336; pile[WZ1]=160; pile[WZ2]=jvj+337; 
(*f[54])( );     /*TRI1(jvj+336,160,jvj+337)*/
pile[v[22]]=jvj+337; pile[WZ1]=jvj+338; pile[WZ2]=103; pile[WZ3]=jvj+339; 
(*f[58])( );     /*TRI3(jvj+337,jvj+338,103,jvj+339)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+340; pile[WZ4]=jvj+339; pile[WZ5]=jvj+331; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+340,jvj+339,jvj+331)*/
pile[v[22]]=jvj+329; pile[WZ1]=160; pile[WZ2]=jvj+330; 
(*f[54])( );     /*TRI1(jvj+329,160,jvj+330)*/
pile[v[22]]=jvj+330; pile[WZ1]=jvj+331; pile[WZ2]=120; pile[WZ3]=jvj+332; 
(*f[58])( );     /*TRI3(jvj+330,jvj+331,120,jvj+332)*/
pile[v[22]]=jvj+332; pile[WZ1]=jvj+333; pile[WZ2]=103; pile[WZ3]=jvj+334; 
(*f[58])( );     /*TRI3(jvj+332,jvj+333,103,jvj+334)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+335; pile[WZ4]=jvj+334; pile[WZ5]=jvj+324; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+335,jvj+334,jvj+324)*/
pile[v[22]]=jvj+322; pile[WZ1]=160; pile[WZ2]=jvj+323; 
(*f[54])( );     /*TRI1(jvj+322,160,jvj+323)*/
pile[v[22]]=jvj+323; pile[WZ1]=jvj+324; pile[WZ2]=120; pile[WZ3]=jvj+325; 
(*f[58])( );     /*TRI3(jvj+323,jvj+324,120,jvj+325)*/
pile[v[22]]=jvj+325; pile[WZ1]=jvj+326; pile[WZ2]=103; pile[WZ3]=jvj+327; 
(*f[58])( );     /*TRI3(jvj+325,jvj+326,103,jvj+327)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+328; pile[WZ4]=jvj+327; pile[WZ5]=jvj+317; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+328,jvj+327,jvj+317)*/
pile[v[22]]=jvj+315; pile[WZ1]=160; pile[WZ2]=jvj+316; 
(*f[54])( );     /*TRI1(jvj+315,160,jvj+316)*/
pile[v[22]]=jvj+316; pile[WZ1]=jvj+317; pile[WZ2]=120; pile[WZ3]=jvj+318; 
(*f[58])( );     /*TRI3(jvj+316,jvj+317,120,jvj+318)*/
pile[v[22]]=jvj+318; pile[WZ1]=jvj+319; pile[WZ2]=103; pile[WZ3]=jvj+320; 
(*f[58])( );     /*TRI3(jvj+318,jvj+319,103,jvj+320)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+321; pile[WZ4]=jvj+320; pile[WZ5]=jvj+312; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+321,jvj+320,jvj+312)*/
pile[v[22]]=jvj+312; pile[WZ1]=120; pile[WZ2]=jvj+313; 
(*f[54])( );     /*TRI1(jvj+312,120,jvj+313)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+314; pile[WZ4]=jvj+313; pile[WZ5]=jvj+101; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+314,jvj+313,jvj+101)*/
pile[v[22]]=jvj+99; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+100; 
(*f[180])( );     /*TRIENS0(jvj+99,(-20),107,jvj+100)*/
pile[v[22]]=jvj+101; pile[WZ2]=jvj+100; pile[WZ3]=105; pile[WZ4]=jvj+102; 
(*f[298])( );     /*TRIENS1(jvj+101,(-20),jvj+100,105,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+3; 
(*f[58])( );     /*TRI3(jvj+102,42,100,jvj+3)*/
if((V23=w[x[jvj+113]][1])==incon) goto l31;
if((V23!=23)) goto l31;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+114; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+114)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4781); pile[WZ4]=jvj+118; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4781),jvj+118)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+113; pile[WZ4]=jvj+121; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+113,jvj+121)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+119; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=103; pile[WZ2]=jvj+120; 
(*f[54])( );     /*TRI1(jvj+119,103,jvj+120)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+121; pile[WZ4]=jvj+120; pile[WZ5]=jvj+116; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+121,jvj+120,jvj+116)*/
pile[v[22]]=jvj+114; pile[WZ1]=111; pile[WZ2]=jvj+115; 
(*f[54])( );     /*TRI1(jvj+114,111,jvj+115)*/
pile[v[22]]=jvj+115; pile[WZ1]=jvj+116; pile[WZ2]=103; pile[WZ3]=jvj+117; 
(*f[58])( );     /*TRI3(jvj+115,jvj+116,103,jvj+117)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+118; pile[WZ4]=jvj+117; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+118,jvj+117,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+4)*/
l31:pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+3)*/
l13:V99=incon;
if((V110=w[x[jvj+113]][1])==incon) goto l35;
if((V110!=23)) goto l14;
if((V111=w[x[jvj+113]][2])==incon) goto l14;
V99=V111;
l15:x[jvj+86]=incon;
if((V112=w[x[jvj+113]][1])==incon) goto l45;
if((V112==23)) goto l45;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+113; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+113,jvj+85)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+83; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=103; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,103,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+85; pile[WZ4]=jvj+84; pile[WZ5]=jvj+86; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+85,jvj+84,jvj+86)*/
l32:pile[v[22]]=755; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(755,jvj+49,V107)*/
V107=pile[WZ2]; 
V94=V99;
x[jvj+59]=x[jvj+86] ;z[jvj+59]=z[jvj+86];
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[255])( );     /*COPEXP0(jvj+59,jvj+60)*/
x[jvj+61]=incon;
if((V94==41)) goto l16;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+87)*/
pile[WZ3]=41; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+89)*/
pile[v[22]]=jvj+87; pile[WZ1]=111; pile[WZ2]=jvj+88; 
(*f[54])( );     /*TRI1(jvj+87,111,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+89; pile[WZ2]=103; pile[WZ3]=jvj+90; 
(*f[58])( );     /*TRI3(jvj+88,jvj+89,103,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+60; pile[WZ4]=jvj+90; pile[WZ5]=jvj+61; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+60,jvj+90,jvj+61)*/
l33:pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[255])( );     /*COPEXP0(jvj+61,jvj+62)*/
x[jvj+371]=x[jvj+60] ;z[jvj+371]=z[jvj+60];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+341; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+341)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V107; pile[WZ4]=jvj+343; 
(*f[270])( );     /*QUADRI7(100,21,140,V107,jvj+343)*/
pile[v[22]]=jvj+341; pile[WZ1]=111; pile[WZ2]=jvj+342; 
(*f[54])( );     /*TRI1(jvj+341,111,jvj+342)*/
pile[v[22]]=jvj+342; pile[WZ1]=jvj+343; pile[WZ2]=103; pile[WZ3]=jvj+344; 
(*f[58])( );     /*TRI3(jvj+342,jvj+343,103,jvj+344)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+344; pile[WZ5]=jvj+103; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+62,jvj+344,jvj+103)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=33; pile[WZ4]=jvj+347; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+347)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+354; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+354)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V37; pile[WZ4]=jvj+352; 
(*f[270])( );     /*QUADRI7(100,96,163,V37,jvj+352)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+348; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+348)*/
pile[WZ3]=75; pile[WZ4]=jvj+361; 
(*f[272])( );     /*QUADRI9(100,89,162,75,jvj+361)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=280; pile[WZ4]=jvj+359; 
(*f[181])( );     /*QUADRI2(100,20,101,280,jvj+359)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+355; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+355)*/
pile[WZ3]=68; pile[WZ4]=jvj+368; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+368)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+113; pile[WZ4]=jvj+366; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+113,jvj+366)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+362; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+362)*/
pile[WZ3]=68; pile[WZ4]=jvj+373; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+373)*/
pile[WZ3]=46; pile[WZ4]=jvj+369; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+369)*/
pile[v[22]]=jvj+369; pile[WZ1]=160; pile[WZ2]=jvj+370; 
(*f[54])( );     /*TRI1(jvj+369,160,jvj+370)*/
pile[v[22]]=jvj+370; pile[WZ1]=jvj+371; pile[WZ2]=103; pile[WZ3]=jvj+372; 
(*f[58])( );     /*TRI3(jvj+370,jvj+371,103,jvj+372)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+373; pile[WZ4]=jvj+372; pile[WZ5]=jvj+364; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+373,jvj+372,jvj+364)*/
pile[v[22]]=jvj+362; pile[WZ1]=160; pile[WZ2]=jvj+363; 
(*f[54])( );     /*TRI1(jvj+362,160,jvj+363)*/
pile[v[22]]=jvj+363; pile[WZ1]=jvj+364; pile[WZ2]=120; pile[WZ3]=jvj+365; 
(*f[58])( );     /*TRI3(jvj+363,jvj+364,120,jvj+365)*/
pile[v[22]]=jvj+365; pile[WZ1]=jvj+366; pile[WZ2]=103; pile[WZ3]=jvj+367; 
(*f[58])( );     /*TRI3(jvj+365,jvj+366,103,jvj+367)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+368; pile[WZ4]=jvj+367; pile[WZ5]=jvj+357; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+368,jvj+367,jvj+357)*/
pile[v[22]]=jvj+355; pile[WZ1]=160; pile[WZ2]=jvj+356; 
(*f[54])( );     /*TRI1(jvj+355,160,jvj+356)*/
pile[v[22]]=jvj+356; pile[WZ1]=jvj+357; pile[WZ2]=120; pile[WZ3]=jvj+358; 
(*f[58])( );     /*TRI3(jvj+356,jvj+357,120,jvj+358)*/
pile[v[22]]=jvj+358; pile[WZ1]=jvj+359; pile[WZ2]=103; pile[WZ3]=jvj+360; 
(*f[58])( );     /*TRI3(jvj+358,jvj+359,103,jvj+360)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+361; pile[WZ4]=jvj+360; pile[WZ5]=jvj+350; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+361,jvj+360,jvj+350)*/
pile[v[22]]=jvj+348; pile[WZ1]=160; pile[WZ2]=jvj+349; 
(*f[54])( );     /*TRI1(jvj+348,160,jvj+349)*/
pile[v[22]]=jvj+349; pile[WZ1]=jvj+350; pile[WZ2]=120; pile[WZ3]=jvj+351; 
(*f[58])( );     /*TRI3(jvj+349,jvj+350,120,jvj+351)*/
pile[v[22]]=jvj+351; pile[WZ1]=jvj+352; pile[WZ2]=103; pile[WZ3]=jvj+353; 
(*f[58])( );     /*TRI3(jvj+351,jvj+352,103,jvj+353)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+354; pile[WZ4]=jvj+353; pile[WZ5]=jvj+345; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+354,jvj+353,jvj+345)*/
pile[v[22]]=jvj+345; pile[WZ1]=120; pile[WZ2]=jvj+346; 
(*f[54])( );     /*TRI1(jvj+345,120,jvj+346)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+347; pile[WZ4]=jvj+346; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+347,jvj+346,jvj+105)*/
pile[v[22]]=jvj+103; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+104; 
(*f[180])( );     /*TRIENS0(jvj+103,(-20),107,jvj+104)*/
pile[v[22]]=jvj+105; pile[WZ2]=jvj+104; pile[WZ3]=105; pile[WZ4]=jvj+106; 
(*f[298])( );     /*TRIENS1(jvj+105,(-20),jvj+104,105,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+106,42,100,jvj+35)*/
if((V113=w[x[jvj+113]][1])==incon) goto l34;
if((V113!=23)) goto l34;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+145; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+145)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4781); pile[WZ4]=jvj+149; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4781),jvj+149)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+113; pile[WZ4]=jvj+152; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+113,jvj+152)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+150; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=103; pile[WZ2]=jvj+151; 
(*f[54])( );     /*TRI1(jvj+150,103,jvj+151)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+152; pile[WZ4]=jvj+151; pile[WZ5]=jvj+147; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+152,jvj+151,jvj+147)*/
pile[v[22]]=jvj+145; pile[WZ1]=111; pile[WZ2]=jvj+146; 
(*f[54])( );     /*TRI1(jvj+145,111,jvj+146)*/
pile[v[22]]=jvj+146; pile[WZ1]=jvj+147; pile[WZ2]=103; pile[WZ3]=jvj+148; 
(*f[58])( );     /*TRI3(jvj+146,jvj+147,103,jvj+148)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+149; pile[WZ4]=jvj+148; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+149,jvj+148,jvj+36)*/
pile[v[22]]=jvj+35; pile[WZ1]=107; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+35,107,jvj+36)*/
l34:pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+35)*/
l35:pile[v[22]]=530; pile[WZ1]=jvj+49; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(530,jvj+49,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=300; pile[WZ4]=jvj+374; 
(*f[181])( );     /*QUADRI2(100,20,101,300,jvj+374)*/
pile[WZ3]=jvj+50; pile[WZ4]=jvj+378; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+50,jvj+378)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+376; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+376)*/
pile[v[22]]=jvj+374; pile[WZ1]=111; pile[WZ2]=jvj+375; 
(*f[54])( );     /*TRI1(jvj+374,111,jvj+375)*/
pile[v[22]]=jvj+375; pile[WZ1]=jvj+376; pile[WZ2]=103; pile[WZ3]=jvj+377; 
(*f[58])( );     /*TRI3(jvj+375,jvj+376,103,jvj+377)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+378; pile[WZ4]=jvj+377; pile[WZ5]=jvj+107; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+378,jvj+377,jvj+107)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=33; pile[WZ4]=jvj+381; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+381)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+388; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+388)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V37; pile[WZ4]=jvj+386; 
(*f[270])( );     /*QUADRI7(100,96,163,V37,jvj+386)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+382; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+382)*/
pile[WZ3]=75; pile[WZ4]=jvj+395; 
(*f[272])( );     /*QUADRI9(100,89,162,75,jvj+395)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=300; pile[WZ4]=jvj+393; 
(*f[181])( );     /*QUADRI2(100,20,101,300,jvj+393)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+389; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+389)*/
pile[WZ3]=68; pile[WZ4]=jvj+402; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+402)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+50; pile[WZ4]=jvj+400; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+50,jvj+400)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+396; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+396)*/
pile[WZ3]=68; pile[WZ4]=jvj+409; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+409)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=(-740); pile[WZ4]=jvj+407; 
(*f[270])( );     /*QUADRI7(100,96,163,(-740),jvj+407)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+403; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+403)*/
pile[WZ3]=68; pile[WZ4]=jvj+414; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+414)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+412; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+412)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+410; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+410)*/
pile[v[22]]=jvj+410; pile[WZ1]=160; pile[WZ2]=jvj+411; 
(*f[54])( );     /*TRI1(jvj+410,160,jvj+411)*/
pile[v[22]]=jvj+411; pile[WZ1]=jvj+412; pile[WZ2]=103; pile[WZ3]=jvj+413; 
(*f[58])( );     /*TRI3(jvj+411,jvj+412,103,jvj+413)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+414; pile[WZ4]=jvj+413; pile[WZ5]=jvj+405; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+414,jvj+413,jvj+405)*/
pile[v[22]]=jvj+403; pile[WZ1]=160; pile[WZ2]=jvj+404; 
(*f[54])( );     /*TRI1(jvj+403,160,jvj+404)*/
pile[v[22]]=jvj+404; pile[WZ1]=jvj+405; pile[WZ2]=120; pile[WZ3]=jvj+406; 
(*f[58])( );     /*TRI3(jvj+404,jvj+405,120,jvj+406)*/
pile[v[22]]=jvj+406; pile[WZ1]=jvj+407; pile[WZ2]=103; pile[WZ3]=jvj+408; 
(*f[58])( );     /*TRI3(jvj+406,jvj+407,103,jvj+408)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+409; pile[WZ4]=jvj+408; pile[WZ5]=jvj+398; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+409,jvj+408,jvj+398)*/
pile[v[22]]=jvj+396; pile[WZ1]=160; pile[WZ2]=jvj+397; 
(*f[54])( );     /*TRI1(jvj+396,160,jvj+397)*/
pile[v[22]]=jvj+397; pile[WZ1]=jvj+398; pile[WZ2]=120; pile[WZ3]=jvj+399; 
(*f[58])( );     /*TRI3(jvj+397,jvj+398,120,jvj+399)*/
pile[v[22]]=jvj+399; pile[WZ1]=jvj+400; pile[WZ2]=103; pile[WZ3]=jvj+401; 
(*f[58])( );     /*TRI3(jvj+399,jvj+400,103,jvj+401)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+402; pile[WZ4]=jvj+401; pile[WZ5]=jvj+391; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+402,jvj+401,jvj+391)*/
pile[v[22]]=jvj+389; pile[WZ1]=160; pile[WZ2]=jvj+390; 
(*f[54])( );     /*TRI1(jvj+389,160,jvj+390)*/
pile[v[22]]=jvj+390; pile[WZ1]=jvj+391; pile[WZ2]=120; pile[WZ3]=jvj+392; 
(*f[58])( );     /*TRI3(jvj+390,jvj+391,120,jvj+392)*/
pile[v[22]]=jvj+392; pile[WZ1]=jvj+393; pile[WZ2]=103; pile[WZ3]=jvj+394; 
(*f[58])( );     /*TRI3(jvj+392,jvj+393,103,jvj+394)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+395; pile[WZ4]=jvj+394; pile[WZ5]=jvj+384; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+395,jvj+394,jvj+384)*/
pile[v[22]]=jvj+382; pile[WZ1]=160; pile[WZ2]=jvj+383; 
(*f[54])( );     /*TRI1(jvj+382,160,jvj+383)*/
pile[v[22]]=jvj+383; pile[WZ1]=jvj+384; pile[WZ2]=120; pile[WZ3]=jvj+385; 
(*f[58])( );     /*TRI3(jvj+383,jvj+384,120,jvj+385)*/
pile[v[22]]=jvj+385; pile[WZ1]=jvj+386; pile[WZ2]=103; pile[WZ3]=jvj+387; 
(*f[58])( );     /*TRI3(jvj+385,jvj+386,103,jvj+387)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+388; pile[WZ4]=jvj+387; pile[WZ5]=jvj+379; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+388,jvj+387,jvj+379)*/
pile[v[22]]=jvj+379; pile[WZ1]=120; pile[WZ2]=jvj+380; 
(*f[54])( );     /*TRI1(jvj+379,120,jvj+380)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+381; pile[WZ4]=jvj+380; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+381,jvj+380,jvj+109)*/
pile[v[22]]=jvj+107; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+108; 
(*f[180])( );     /*TRIENS0(jvj+107,(-20),107,jvj+108)*/
pile[v[22]]=jvj+109; pile[WZ2]=jvj+108; pile[WZ3]=105; pile[WZ4]=jvj+110; 
(*f[298])( );     /*TRIENS1(jvj+109,(-20),jvj+108,105,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+110,42,100,jvj+16)*/
x[jvj+13]=x[jvj+63] ;z[jvj+13]=z[jvj+63];
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l36;
l7:pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; 
(*f[378])( );     /*CPI0(jvj+13,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=107; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+15)*/
l36:pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+16)*/
l26:x[jvj+421]=t[x[jvj+421]];
l25:if((x[jvj+421]<=0)) goto l37;
x[jvj+49]=s[x[jvj+421]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+421];
pile[v[22]]=122; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(122,jvj+49,jvj+50)*/
x[jvj+113]=x[jvj+50] ;z[jvj+113]=z[jvj+50];
x[jvj+79]=incon;
if((V38=w[x[jvj+113]][1])==incon) goto l43;
if((V38==23)) goto l43;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+113; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+113,jvj+78)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+76; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=103; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,103,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+78; pile[WZ4]=jvj+77; pile[WZ5]=jvj+79; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+78,jvj+77,jvj+79)*/
l27:pile[v[22]]=613; pile[WZ1]=jvj+49; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(613,jvj+49,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; 
(*f[255])( );     /*COPEXP0(jvj+51,jvj+52)*/
x[jvj+53]=x[jvj+79] ;z[jvj+53]=z[jvj+79];
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[255])( );     /*COPEXP0(jvj+53,jvj+54)*/
x[jvj+305]=x[jvj+54] ;z[jvj+305]=z[jvj+54];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=45; pile[WZ4]=jvj+276; 
(*f[181])( );     /*QUADRI2(100,20,101,45,jvj+276)*/
pile[v[22]]=jvj+276; pile[WZ1]=111; pile[WZ2]=jvj+277; 
(*f[54])( );     /*TRI1(jvj+276,111,jvj+277)*/
pile[v[22]]=jvj+277; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+278; 
(*f[58])( );     /*TRI3(jvj+277,jvj+52,103,jvj+278)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+278; pile[WZ5]=jvj+95; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+54,jvj+278,jvj+95)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=33; pile[WZ4]=jvj+281; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+281)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+288; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+288)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V37; pile[WZ4]=jvj+286; 
(*f[270])( );     /*QUADRI7(100,96,163,V37,jvj+286)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+282; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+282)*/
pile[WZ3]=75; pile[WZ4]=jvj+295; 
(*f[272])( );     /*QUADRI9(100,89,162,75,jvj+295)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+113; pile[WZ4]=jvj+293; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+113,jvj+293)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+289; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+289)*/
pile[WZ3]=68; pile[WZ4]=jvj+302; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+302)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=(-4390); pile[WZ4]=jvj+300; 
(*f[270])( );     /*QUADRI7(100,96,163,(-4390),jvj+300)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+296; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+296)*/
pile[WZ3]=68; pile[WZ4]=jvj+307; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+307)*/
pile[WZ3]=46; pile[WZ4]=jvj+303; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+303)*/
pile[v[22]]=jvj+303; pile[WZ1]=160; pile[WZ2]=jvj+304; 
(*f[54])( );     /*TRI1(jvj+303,160,jvj+304)*/
pile[v[22]]=jvj+304; pile[WZ1]=jvj+305; pile[WZ2]=103; pile[WZ3]=jvj+306; 
(*f[58])( );     /*TRI3(jvj+304,jvj+305,103,jvj+306)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+307; pile[WZ4]=jvj+306; pile[WZ5]=jvj+298; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+307,jvj+306,jvj+298)*/
pile[v[22]]=jvj+296; pile[WZ1]=160; pile[WZ2]=jvj+297; 
(*f[54])( );     /*TRI1(jvj+296,160,jvj+297)*/
pile[v[22]]=jvj+297; pile[WZ1]=jvj+298; pile[WZ2]=120; pile[WZ3]=jvj+299; 
(*f[58])( );     /*TRI3(jvj+297,jvj+298,120,jvj+299)*/
pile[v[22]]=jvj+299; pile[WZ1]=jvj+300; pile[WZ2]=103; pile[WZ3]=jvj+301; 
(*f[58])( );     /*TRI3(jvj+299,jvj+300,103,jvj+301)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+302; pile[WZ4]=jvj+301; pile[WZ5]=jvj+291; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+302,jvj+301,jvj+291)*/
pile[v[22]]=jvj+289; pile[WZ1]=160; pile[WZ2]=jvj+290; 
(*f[54])( );     /*TRI1(jvj+289,160,jvj+290)*/
pile[v[22]]=jvj+290; pile[WZ1]=jvj+291; pile[WZ2]=120; pile[WZ3]=jvj+292; 
(*f[58])( );     /*TRI3(jvj+290,jvj+291,120,jvj+292)*/
pile[v[22]]=jvj+292; pile[WZ1]=jvj+293; pile[WZ2]=103; pile[WZ3]=jvj+294; 
(*f[58])( );     /*TRI3(jvj+292,jvj+293,103,jvj+294)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+295; pile[WZ4]=jvj+294; pile[WZ5]=jvj+284; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+295,jvj+294,jvj+284)*/
pile[v[22]]=jvj+282; pile[WZ1]=160; pile[WZ2]=jvj+283; 
(*f[54])( );     /*TRI1(jvj+282,160,jvj+283)*/
pile[v[22]]=jvj+283; pile[WZ1]=jvj+284; pile[WZ2]=120; pile[WZ3]=jvj+285; 
(*f[58])( );     /*TRI3(jvj+283,jvj+284,120,jvj+285)*/
pile[v[22]]=jvj+285; pile[WZ1]=jvj+286; pile[WZ2]=103; pile[WZ3]=jvj+287; 
(*f[58])( );     /*TRI3(jvj+285,jvj+286,103,jvj+287)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+288; pile[WZ4]=jvj+287; pile[WZ5]=jvj+279; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+288,jvj+287,jvj+279)*/
pile[v[22]]=jvj+279; pile[WZ1]=120; pile[WZ2]=jvj+280; 
(*f[54])( );     /*TRI1(jvj+279,120,jvj+280)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+281; pile[WZ4]=jvj+280; pile[WZ5]=jvj+97; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+281,jvj+280,jvj+97)*/
pile[v[22]]=jvj+95; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+96; 
(*f[180])( );     /*TRIENS0(jvj+95,(-20),107,jvj+96)*/
pile[v[22]]=jvj+97; pile[WZ2]=jvj+96; pile[WZ3]=105; pile[WZ4]=jvj+98; 
(*f[298])( );     /*TRIENS1(jvj+97,(-20),jvj+96,105,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+5; 
(*f[58])( );     /*TRI3(jvj+98,42,100,jvj+5)*/
if((V40=w[x[jvj+113]][1])==incon) goto l28;
if((V40!=23)) goto l28;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+122; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+122)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4781); pile[WZ4]=jvj+126; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4781),jvj+126)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+113; pile[WZ4]=jvj+129; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+113,jvj+129)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+127; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+127)*/
pile[v[22]]=jvj+127; pile[WZ1]=103; pile[WZ2]=jvj+128; 
(*f[54])( );     /*TRI1(jvj+127,103,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+129; pile[WZ4]=jvj+128; pile[WZ5]=jvj+124; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+129,jvj+128,jvj+124)*/
pile[v[22]]=jvj+122; pile[WZ1]=111; pile[WZ2]=jvj+123; 
(*f[54])( );     /*TRI1(jvj+122,111,jvj+123)*/
pile[v[22]]=jvj+123; pile[WZ1]=jvj+124; pile[WZ2]=103; pile[WZ3]=jvj+125; 
(*f[58])( );     /*TRI3(jvj+123,jvj+124,103,jvj+125)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+126; pile[WZ4]=jvj+125; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+126,jvj+125,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=107; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+6)*/
l28:pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+5)*/
l2:V10=incon;
if((V21=w[x[jvj+113]][1])==incon) goto l13;
if((V21!=23)) goto l3;
if((V22=w[x[jvj+113]][2])==incon) goto l3;
V10=V22;
goto l1;
l4:x[jvj+57]=x[jvj+55] ;z[jvj+57]=z[jvj+55];
goto l30;
l6:x[jvj+420]=t[x[jvj+420]];
l5:if((x[jvj+420]<=0)) goto l38;
x[jvj+10]=s[x[jvj+420]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+420];
pile[v[22]]=110; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(110,jvj+10,V52)*/
V52=pile[WZ2]; 
if((V50!=V52)) goto l6;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+65; 
(*f[686])( );if(v[102]) goto l38;     /*DIAD0(jvj+10,jvj+65)*/
x[jvj+130]=x[jvj+64] ;z[jvj+130]=z[jvj+64];
x[jvj+66]=incon;
if((V54=w[x[jvj+130]][1])==incon) goto l44;
if((V54==23)) goto l44;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+130; pile[WZ4]=jvj+82; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+130,jvj+82)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=103; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,103,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+82; pile[WZ4]=jvj+81; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+82,jvj+81,jvj+66)*/
l39:pile[v[22]]=jvj+66; pile[WZ1]=jvj+67; 
(*f[255])( );     /*COPEXP0(jvj+66,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+65; pile[WZ4]=jvj+417; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+65,jvj+417)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+418; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+418)*/
pile[v[22]]=jvj+418; pile[WZ1]=103; pile[WZ2]=jvj+419; 
(*f[54])( );     /*TRI1(jvj+418,103,jvj+419)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+419; pile[WZ5]=jvj+415; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+67,jvj+419,jvj+415)*/
pile[v[22]]=jvj+415; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+416; 
(*f[180])( );     /*TRIENS0(jvj+415,(-20),114,jvj+416)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+417; pile[WZ4]=jvj+416; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+417,jvj+416,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+112; 
(*f[180])( );     /*TRIENS0(jvj+111,(-20),105,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+112,42,100,jvj+11)*/
if((V55=w[x[jvj+130]][1])==incon) goto l40;
if((V55!=23)) goto l40;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+131; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+131)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4781); pile[WZ4]=jvj+135; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4781),jvj+135)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+130; pile[WZ4]=jvj+138; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+130,jvj+138)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4762); pile[WZ4]=jvj+136; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=103; pile[WZ2]=jvj+137; 
(*f[54])( );     /*TRI1(jvj+136,103,jvj+137)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+138; pile[WZ4]=jvj+137; pile[WZ5]=jvj+133; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+138,jvj+137,jvj+133)*/
pile[v[22]]=jvj+131; pile[WZ1]=111; pile[WZ2]=jvj+132; 
(*f[54])( );     /*TRI1(jvj+131,111,jvj+132)*/
pile[v[22]]=jvj+132; pile[WZ1]=jvj+133; pile[WZ2]=103; pile[WZ3]=jvj+134; 
(*f[58])( );     /*TRI3(jvj+132,jvj+133,103,jvj+134)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+135; pile[WZ4]=jvj+134; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+135,jvj+134,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=107; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+12)*/
l40:pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+11)*/
l38:x[jvj+48]=t[x[jvj+48]];
l37:if((x[jvj+48]<=0)) goto l41;
x[jvj+7]=s[x[jvj+48]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+48];
pile[v[22]]=122; pile[WZ1]=jvj+7; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(122,jvj+7,jvj+64)*/
pile[v[22]]=120; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(120,jvj+7,jvj+8)*/
pile[v[22]]=110; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(110,jvj+8,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=552; pile[WZ1]=727; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(552,727,jvj+9)*/
x[jvj+420]=x[jvj+9] ;z[jvj+420]=z[jvj+9];
goto l5;
l9:x[jvj+19]=s[x[jvj+17]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+17];
pile[v[22]]=122; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(122,jvj+19,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+20; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+20,jvj+21)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[196])( );     /*PLUF0(jvj+18,jvj+21,jvj+22)*/
l10:x[jvj+17]=t[x[jvj+17]];
goto l8;
l14:V99=V110;
goto l15;
l16:x[jvj+61]=x[jvj+59] ;z[jvj+61]=z[jvj+59];
goto l33;
l21:pile[v[22]]=258; pile[WZ1]=X; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(258,X,jvj+43)*/
l22:if((x[jvj+43]>0)) goto l23;
pile[v[22]]=159; pile[WZ1]=X; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(159,X,jvj+48)*/
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(110,X,V37)*/
V37=pile[WZ2]; 
x[jvj+421]=x[jvj+48] ;z[jvj+421]=z[jvj+48];
goto l25;
l23:x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=110; pile[WZ1]=jvj+44; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(110,jvj+44,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=129; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(129,jvj+44,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[255])( );     /*COPEXP0(jvj+45,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=433; pile[WZ4]=jvj+265; 
(*f[181])( );     /*QUADRI2(100,20,101,433,jvj+265)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4782); pile[WZ4]=jvj+270; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4782),jvj+270)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+271; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+271)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4782); pile[WZ4]=jvj+274; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4782),jvj+274)*/
pile[v[22]]=jvj+271; pile[WZ1]=111; pile[WZ2]=jvj+272; 
(*f[54])( );     /*TRI1(jvj+271,111,jvj+272)*/
pile[v[22]]=jvj+272; pile[WZ1]=jvj+46; pile[WZ2]=103; pile[WZ3]=jvj+273; 
(*f[58])( );     /*TRI3(jvj+272,jvj+46,103,jvj+273)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+274; pile[WZ4]=jvj+273; pile[WZ5]=jvj+268; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+274,jvj+273,jvj+268)*/
pile[v[22]]=jvj+268; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+269; 
(*f[180])( );     /*TRIENS0(jvj+268,(-20),107,jvj+269)*/
pile[v[22]]=100; pile[WZ1]=452; pile[WZ2]=102; pile[WZ3]=jvj+270; pile[WZ4]=jvj+269; pile[WZ5]=jvj+266; 
(*f[269])( );     /*QUADRI6(100,452,102,jvj+270,jvj+269,jvj+266)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+275; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+275)*/
pile[WZ1]=452; pile[WZ2]=102; pile[WZ3]=jvj+275; pile[WZ4]=jvj+267; 
(*f[181])( );     /*QUADRI2(100,452,102,jvj+275,jvj+267)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+265; pile[WZ4]=jvj+264; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+265,jvj+264)*/
pile[v[22]]=jvj+264; pile[WZ1]=107; pile[WZ2]=jvj+266; 
(*f[36])( );     /*PLUSC0(jvj+264,107,jvj+266)*/
pile[WZ2]=jvj+267; 
(*f[36])( );     /*PLUSC0(jvj+264,107,jvj+267)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+262; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+262)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V5; pile[WZ4]=jvj+260; 
(*f[270])( );     /*QUADRI7(100,21,140,V5,jvj+260)*/
pile[v[22]]=jvj+260; pile[WZ1]=436; pile[WZ2]=jvj+261; 
(*f[54])( );     /*TRI1(jvj+260,436,jvj+261)*/
pile[v[22]]=jvj+261; pile[WZ1]=jvj+262; pile[WZ2]=111; pile[WZ3]=jvj+263; 
(*f[58])( );     /*TRI3(jvj+261,jvj+262,111,jvj+263)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+264; pile[WZ4]=jvj+263; pile[WZ5]=jvj+258; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+264,jvj+263,jvj+258)*/
pile[v[22]]=jvj+258; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+259; 
(*f[180])( );     /*TRIENS0(jvj+258,(-20),105,jvj+259)*/
pile[v[22]]=jvj+259; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+259,42,100,jvj+47)*/
pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+47)*/
l24:x[jvj+43]=t[x[jvj+43]];
goto l22;
l41:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l42:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4781); pile[WZ4]=jvj+71; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4781),jvj+71)*/
goto l29;
l43:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4781); pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4781),jvj+79)*/
goto l27;
l44:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4781); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4781),jvj+66)*/
goto l39;
l45:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4781); pile[WZ4]=jvj+86; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4781),jvj+86)*/
goto l32;
}
