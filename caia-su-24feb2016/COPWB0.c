#include "dx.h"
void COPWB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V=0;
int R,Y,BT,RM,Z,M,H;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=486;
x[jvj+1]=10152;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2157&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; Y=pile[v[22]+1]; BT=pile[v[22]+2]; RM=pile[v[22]+3]; Z=pile[v[22]+4]; M=pile[v[22]+5]; H=pile[v[22]+6]; RES=pile[v[22]+7]; v[22]+=8; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=x[RES]=incon;
pile[v[22]]=258; pile[WZ1]=240; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(258,240,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
K=x[H];
pile[v[22]]=jvj+8; 
(*f[1071])( );if(v[102]) goto l14;     /*NOUB0(jvj+8)*/
pile[v[22]]=H; pile[WZ1]=218; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(H,218,jvj+55)*/
pile[v[22]]=102; pile[WZ1]=M; pile[WZ2]=109; pile[WZ3]=jvj+8; pile[WZ4]=jvj+55; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(102,M,109,jvj+8,jvj+55,jvj+9)*/
pile[v[22]]=240; pile[WZ1]=258; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(240,258,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=741; pile[WZ2]=120; 
(*f[43])( );     /*CHGC2(jvj+8,741,120)*/
if((K==369)) goto l23;
if((K!=410)) goto l7;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+159; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+159)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+161; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+161)*/
pile[v[22]]=jvj+159; pile[WZ1]=111; pile[WZ2]=jvj+160; 
(*f[54])( );     /*TRI1(jvj+159,111,jvj+160)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+161; pile[WZ4]=jvj+160; pile[WZ5]=jvj+155; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+161,jvj+160,jvj+155)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+166; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+166)*/
pile[WZ3]=82; pile[WZ4]=jvj+164; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+164)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+162; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+162)*/
pile[v[22]]=jvj+162; pile[WZ1]=436; pile[WZ2]=jvj+163; 
(*f[54])( );     /*TRI1(jvj+162,436,jvj+163)*/
pile[v[22]]=jvj+163; pile[WZ1]=jvj+164; pile[WZ2]=111; pile[WZ3]=jvj+165; 
(*f[58])( );     /*TRI3(jvj+163,jvj+164,111,jvj+165)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+166; pile[WZ4]=jvj+165; pile[WZ5]=jvj+157; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+166,jvj+165,jvj+157)*/
pile[v[22]]=jvj+155; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+156; 
(*f[180])( );     /*TRIENS0(jvj+155,(-20),107,jvj+156)*/
pile[v[22]]=jvj+157; pile[WZ2]=jvj+156; pile[WZ3]=105; pile[WZ4]=jvj+158; 
(*f[298])( );     /*TRIENS1(jvj+157,(-20),jvj+156,105,jvj+158)*/
pile[v[22]]=jvj+158; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+158,42,100,jvj+20)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+171; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+171)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+175; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+175)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=35; pile[WZ4]=jvj+178; 
(*f[181])( );     /*QUADRI2(100,20,101,35,jvj+178)*/
pile[WZ3]=100; pile[WZ4]=jvj+181; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+181)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+179; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=103; pile[WZ2]=jvj+180; 
(*f[54])( );     /*TRI1(jvj+179,103,jvj+180)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+181; pile[WZ4]=jvj+180; pile[WZ5]=jvj+176; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+181,jvj+180,jvj+176)*/
pile[v[22]]=jvj+176; pile[WZ1]=103; pile[WZ2]=jvj+177; 
(*f[54])( );     /*TRI1(jvj+176,103,jvj+177)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+178; pile[WZ4]=jvj+177; pile[WZ5]=jvj+173; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+178,jvj+177,jvj+173)*/
pile[v[22]]=jvj+171; pile[WZ1]=111; pile[WZ2]=jvj+172; 
(*f[54])( );     /*TRI1(jvj+171,111,jvj+172)*/
pile[v[22]]=jvj+172; pile[WZ1]=jvj+173; pile[WZ2]=103; pile[WZ3]=jvj+174; 
(*f[58])( );     /*TRI3(jvj+172,jvj+173,103,jvj+174)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+175; pile[WZ4]=jvj+174; pile[WZ5]=jvj+169; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+175,jvj+174,jvj+169)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+8; pile[WZ4]=jvj+186; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+8,jvj+186)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+192; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+192)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+190; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=103; pile[WZ2]=jvj+191; 
(*f[54])( );     /*TRI1(jvj+190,103,jvj+191)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+192; pile[WZ4]=jvj+191; pile[WZ5]=jvj+189; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+192,jvj+191,jvj+189)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+187; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+187)*/
pile[v[22]]=jvj+187; pile[WZ1]=103; pile[WZ2]=jvj+188; 
(*f[54])( );     /*TRI1(jvj+187,103,jvj+188)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+189; pile[WZ4]=jvj+188; pile[WZ5]=jvj+182; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+189,jvj+188,jvj+182)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+195; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+195)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+193; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+193)*/
pile[v[22]]=jvj+193; pile[WZ1]=103; pile[WZ2]=jvj+194; 
(*f[54])( );     /*TRI1(jvj+193,103,jvj+194)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+195; pile[WZ4]=jvj+194; pile[WZ5]=jvj+184; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+195,jvj+194,jvj+184)*/
pile[v[22]]=jvj+182; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+183; 
(*f[180])( );     /*TRIENS0(jvj+182,(-20),114,jvj+183)*/
pile[v[22]]=jvj+184; pile[WZ2]=jvj+183; pile[WZ3]=113; pile[WZ4]=jvj+185; 
(*f[298])( );     /*TRIENS1(jvj+184,(-20),jvj+183,113,jvj+185)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+186; pile[WZ5]=jvj+170; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+186,jvj+185,jvj+170)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+200; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+200)*/
pile[WZ3]=82; pile[WZ4]=jvj+198; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+198)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+196; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=436; pile[WZ2]=jvj+197; 
(*f[54])( );     /*TRI1(jvj+196,436,jvj+197)*/
pile[v[22]]=jvj+197; pile[WZ1]=jvj+198; pile[WZ2]=111; pile[WZ3]=jvj+199; 
(*f[58])( );     /*TRI3(jvj+197,jvj+198,111,jvj+199)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+200; pile[WZ4]=jvj+199; pile[WZ5]=jvj+167; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+200,jvj+199,jvj+167)*/
pile[v[22]]=jvj+167; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+168; 
(*f[180])( );     /*TRIENS0(jvj+167,(-20),105,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+168,42,100,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=107; pile[WZ2]=jvj+169; 
(*f[36])( );     /*PLUSC0(jvj+21,107,jvj+169)*/
pile[WZ2]=jvj+170; 
(*f[36])( );     /*PLUSC0(jvj+21,107,jvj+170)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+206; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+206)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+210; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+210)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=7; pile[WZ4]=jvj+213; 
(*f[181])( );     /*QUADRI2(100,20,101,7,jvj+213)*/
pile[WZ3]=100; pile[WZ4]=jvj+216; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+216)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+214; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+214)*/
pile[v[22]]=jvj+214; pile[WZ1]=103; pile[WZ2]=jvj+215; 
(*f[54])( );     /*TRI1(jvj+214,103,jvj+215)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+216; pile[WZ4]=jvj+215; pile[WZ5]=jvj+211; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+216,jvj+215,jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=103; pile[WZ2]=jvj+212; 
(*f[54])( );     /*TRI1(jvj+211,103,jvj+212)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+213; pile[WZ4]=jvj+212; pile[WZ5]=jvj+208; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+213,jvj+212,jvj+208)*/
pile[v[22]]=jvj+206; pile[WZ1]=111; pile[WZ2]=jvj+207; 
(*f[54])( );     /*TRI1(jvj+206,111,jvj+207)*/
pile[v[22]]=jvj+207; pile[WZ1]=jvj+208; pile[WZ2]=103; pile[WZ3]=jvj+209; 
(*f[58])( );     /*TRI3(jvj+207,jvj+208,103,jvj+209)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+210; pile[WZ4]=jvj+209; pile[WZ5]=jvj+203; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+210,jvj+209,jvj+203)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+217; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+217)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+221; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+221)*/
pile[WZ3]=(-605); pile[WZ4]=jvj+224; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+224)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+222; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+222)*/
pile[v[22]]=jvj+222; pile[WZ1]=103; pile[WZ2]=jvj+223; 
(*f[54])( );     /*TRI1(jvj+222,103,jvj+223)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+224; pile[WZ4]=jvj+223; pile[WZ5]=jvj+219; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+224,jvj+223,jvj+219)*/
pile[v[22]]=jvj+217; pile[WZ1]=111; pile[WZ2]=jvj+218; 
(*f[54])( );     /*TRI1(jvj+217,111,jvj+218)*/
pile[v[22]]=jvj+218; pile[WZ1]=jvj+219; pile[WZ2]=103; pile[WZ3]=jvj+220; 
(*f[58])( );     /*TRI3(jvj+218,jvj+219,103,jvj+220)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+221; pile[WZ4]=jvj+220; pile[WZ5]=jvj+204; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+221,jvj+220,jvj+204)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+8; pile[WZ4]=jvj+229; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+8,jvj+229)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+232; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+232)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+230; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+230)*/
pile[v[22]]=jvj+230; pile[WZ1]=103; pile[WZ2]=jvj+231; 
(*f[54])( );     /*TRI1(jvj+230,103,jvj+231)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+232; pile[WZ4]=jvj+231; pile[WZ5]=jvj+225; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+232,jvj+231,jvj+225)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+235; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+235)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+233; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+233)*/
pile[v[22]]=jvj+233; pile[WZ1]=103; pile[WZ2]=jvj+234; 
(*f[54])( );     /*TRI1(jvj+233,103,jvj+234)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+235; pile[WZ4]=jvj+234; pile[WZ5]=jvj+227; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+235,jvj+234,jvj+227)*/
pile[v[22]]=jvj+225; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+226; 
(*f[180])( );     /*TRIENS0(jvj+225,(-20),114,jvj+226)*/
pile[v[22]]=jvj+227; pile[WZ2]=jvj+226; pile[WZ3]=113; pile[WZ4]=jvj+228; 
(*f[298])( );     /*TRIENS1(jvj+227,(-20),jvj+226,113,jvj+228)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+229; pile[WZ5]=jvj+205; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+229,jvj+228,jvj+205)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+240; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+240)*/
pile[WZ3]=82; pile[WZ4]=jvj+238; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+238)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+236; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+236)*/
pile[v[22]]=jvj+236; pile[WZ1]=436; pile[WZ2]=jvj+237; 
(*f[54])( );     /*TRI1(jvj+236,436,jvj+237)*/
pile[v[22]]=jvj+237; pile[WZ1]=jvj+238; pile[WZ2]=111; pile[WZ3]=jvj+239; 
(*f[58])( );     /*TRI3(jvj+237,jvj+238,111,jvj+239)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+240; pile[WZ4]=jvj+239; pile[WZ5]=jvj+201; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+240,jvj+239,jvj+201)*/
pile[v[22]]=jvj+201; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+202; 
(*f[180])( );     /*TRIENS0(jvj+201,(-20),105,jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+202,42,100,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=107; pile[WZ2]=jvj+203; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+203)*/
pile[WZ2]=jvj+204; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+204)*/
pile[WZ2]=jvj+205; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+205)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+22)*/
pile[v[22]]=M; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(M,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+245; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+245)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+248; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+248)*/
pile[v[22]]=jvj+245; pile[WZ1]=111; pile[WZ2]=jvj+246; 
(*f[54])( );     /*TRI1(jvj+245,111,jvj+246)*/
pile[v[22]]=jvj+246; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+247; 
(*f[58])( );     /*TRI3(jvj+246,jvj+23,103,jvj+247)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+248; pile[WZ4]=jvj+247; pile[WZ5]=jvj+241; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+248,jvj+247,jvj+241)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+253; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+253)*/
pile[WZ3]=82; pile[WZ4]=jvj+251; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+251)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+249; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+249)*/
pile[v[22]]=jvj+249; pile[WZ1]=436; pile[WZ2]=jvj+250; 
(*f[54])( );     /*TRI1(jvj+249,436,jvj+250)*/
pile[v[22]]=jvj+250; pile[WZ1]=jvj+251; pile[WZ2]=111; pile[WZ3]=jvj+252; 
(*f[58])( );     /*TRI3(jvj+250,jvj+251,111,jvj+252)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+253; pile[WZ4]=jvj+252; pile[WZ5]=jvj+243; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+253,jvj+252,jvj+243)*/
pile[v[22]]=jvj+241; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+242; 
(*f[180])( );     /*TRIENS0(jvj+241,(-20),107,jvj+242)*/
pile[v[22]]=jvj+243; pile[WZ2]=jvj+242; pile[WZ3]=105; pile[WZ4]=jvj+244; 
(*f[298])( );     /*TRIENS1(jvj+243,(-20),jvj+242,105,jvj+244)*/
pile[v[22]]=jvj+244; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+244,42,100,jvj+24)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+24)*/
l7:if(K!=370&&K!=671&&K!=1224) goto l9;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+258; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+258)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+262; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+262)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=7; pile[WZ4]=jvj+265; 
(*f[181])( );     /*QUADRI2(100,20,101,7,jvj+265)*/
pile[WZ3]=100; pile[WZ4]=jvj+268; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+268)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+266; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+266)*/
pile[v[22]]=jvj+266; pile[WZ1]=103; pile[WZ2]=jvj+267; 
(*f[54])( );     /*TRI1(jvj+266,103,jvj+267)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+268; pile[WZ4]=jvj+267; pile[WZ5]=jvj+263; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+268,jvj+267,jvj+263)*/
pile[v[22]]=jvj+263; pile[WZ1]=103; pile[WZ2]=jvj+264; 
(*f[54])( );     /*TRI1(jvj+263,103,jvj+264)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+265; pile[WZ4]=jvj+264; pile[WZ5]=jvj+260; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+265,jvj+264,jvj+260)*/
pile[v[22]]=jvj+258; pile[WZ1]=111; pile[WZ2]=jvj+259; 
(*f[54])( );     /*TRI1(jvj+258,111,jvj+259)*/
pile[v[22]]=jvj+259; pile[WZ1]=jvj+260; pile[WZ2]=103; pile[WZ3]=jvj+261; 
(*f[58])( );     /*TRI3(jvj+259,jvj+260,103,jvj+261)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+262; pile[WZ4]=jvj+261; pile[WZ5]=jvj+256; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+262,jvj+261,jvj+256)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+269; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+269)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+273; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+273)*/
pile[WZ3]=(-605); pile[WZ4]=jvj+276; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+276)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+274; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+274)*/
pile[v[22]]=jvj+274; pile[WZ1]=103; pile[WZ2]=jvj+275; 
(*f[54])( );     /*TRI1(jvj+274,103,jvj+275)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+276; pile[WZ4]=jvj+275; pile[WZ5]=jvj+271; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+276,jvj+275,jvj+271)*/
pile[v[22]]=jvj+269; pile[WZ1]=111; pile[WZ2]=jvj+270; 
(*f[54])( );     /*TRI1(jvj+269,111,jvj+270)*/
pile[v[22]]=jvj+270; pile[WZ1]=jvj+271; pile[WZ2]=103; pile[WZ3]=jvj+272; 
(*f[58])( );     /*TRI3(jvj+270,jvj+271,103,jvj+272)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+273; pile[WZ4]=jvj+272; pile[WZ5]=jvj+257; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+273,jvj+272,jvj+257)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+8; pile[WZ4]=jvj+277; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+8,jvj+277)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+282; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+282)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+280; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+280)*/
pile[v[22]]=jvj+280; pile[WZ1]=103; pile[WZ2]=jvj+281; 
(*f[54])( );     /*TRI1(jvj+280,103,jvj+281)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+282; pile[WZ4]=jvj+281; pile[WZ5]=jvj+278; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+282,jvj+281,jvj+278)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4054); pile[WZ4]=jvj+285; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4054),jvj+285)*/
pile[WZ4]=jvj+283; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4054),jvj+283)*/
pile[v[22]]=jvj+283; pile[WZ1]=103; pile[WZ2]=jvj+284; 
(*f[54])( );     /*TRI1(jvj+283,103,jvj+284)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+285; pile[WZ4]=jvj+284; pile[WZ5]=jvj+279; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+285,jvj+284,jvj+279)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+277; pile[WZ4]=jvj+254; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+277,jvj+254)*/
pile[v[22]]=jvj+254; pile[WZ1]=114; pile[WZ2]=jvj+278; 
(*f[36])( );     /*PLUSC0(jvj+254,114,jvj+278)*/
pile[WZ2]=jvj+279; 
(*f[36])( );     /*PLUSC0(jvj+254,114,jvj+279)*/
pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+255; 
(*f[180])( );     /*TRIENS0(jvj+254,(-20),105,jvj+255)*/
pile[v[22]]=jvj+255; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+255,42,100,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=107; pile[WZ2]=jvj+256; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+256)*/
pile[WZ2]=jvj+257; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+257)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=158; pile[WZ4]=jvj+297; 
(*f[181])( );     /*QUADRI2(100,20,101,158,jvj+297)*/
pile[WZ3]=250; pile[WZ4]=jvj+295; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+295)*/
pile[v[22]]=jvj+295; pile[WZ1]=103; pile[WZ2]=jvj+296; 
(*f[54])( );     /*TRI1(jvj+295,103,jvj+296)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+297; pile[WZ4]=jvj+296; pile[WZ5]=jvj+293; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+297,jvj+296,jvj+293)*/
pile[v[22]]=jvj+293; pile[WZ1]=(-20); pile[WZ2]=108; pile[WZ3]=jvj+294; 
(*f[180])( );     /*TRIENS0(jvj+293,(-20),108,jvj+294)*/
pile[v[22]]=jvj+294; pile[WZ1]=69; pile[WZ2]=100; pile[WZ3]=jvj+292; 
(*f[58])( );     /*TRI3(jvj+294,69,100,jvj+292)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+290; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+290)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4054); pile[WZ4]=jvj+288; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4054),jvj+288)*/
pile[v[22]]=jvj+288; pile[WZ1]=436; pile[WZ2]=jvj+289; 
(*f[54])( );     /*TRI1(jvj+288,436,jvj+289)*/
pile[v[22]]=jvj+289; pile[WZ1]=jvj+290; pile[WZ2]=111; pile[WZ3]=jvj+291; 
(*f[58])( );     /*TRI3(jvj+289,jvj+290,111,jvj+291)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+292; pile[WZ4]=jvj+291; pile[WZ5]=jvj+286; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+292,jvj+291,jvj+286)*/
pile[v[22]]=jvj+286; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+287; 
(*f[180])( );     /*TRIENS0(jvj+286,(-20),105,jvj+287)*/
pile[v[22]]=jvj+287; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+287,42,100,jvj+26)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+298; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+298)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+302; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+302)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=35; pile[WZ4]=jvj+305; 
(*f[181])( );     /*QUADRI2(100,20,101,35,jvj+305)*/
pile[WZ3]=100; pile[WZ4]=jvj+308; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+308)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+306; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+306)*/
pile[v[22]]=jvj+306; pile[WZ1]=103; pile[WZ2]=jvj+307; 
(*f[54])( );     /*TRI1(jvj+306,103,jvj+307)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+308; pile[WZ4]=jvj+307; pile[WZ5]=jvj+303; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+308,jvj+307,jvj+303)*/
pile[v[22]]=jvj+303; pile[WZ1]=103; pile[WZ2]=jvj+304; 
(*f[54])( );     /*TRI1(jvj+303,103,jvj+304)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+305; pile[WZ4]=jvj+304; pile[WZ5]=jvj+300; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+305,jvj+304,jvj+300)*/
pile[v[22]]=jvj+298; pile[WZ1]=111; pile[WZ2]=jvj+299; 
(*f[54])( );     /*TRI1(jvj+298,111,jvj+299)*/
pile[v[22]]=jvj+299; pile[WZ1]=jvj+300; pile[WZ2]=103; pile[WZ3]=jvj+301; 
(*f[58])( );     /*TRI3(jvj+299,jvj+300,103,jvj+301)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+302; pile[WZ4]=jvj+301; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+302,jvj+301,jvj+51)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+8; pile[WZ4]=jvj+309; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+8,jvj+309)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+317; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+317)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+315; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+315)*/
pile[v[22]]=jvj+315; pile[WZ1]=103; pile[WZ2]=jvj+316; 
(*f[54])( );     /*TRI1(jvj+315,103,jvj+316)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+317; pile[WZ4]=jvj+316; pile[WZ5]=jvj+314; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+317,jvj+316,jvj+314)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+312; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+312)*/
pile[v[22]]=jvj+312; pile[WZ1]=103; pile[WZ2]=jvj+313; 
(*f[54])( );     /*TRI1(jvj+312,103,jvj+313)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+314; pile[WZ4]=jvj+313; pile[WZ5]=jvj+310; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+314,jvj+313,jvj+310)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4054); pile[WZ4]=jvj+320; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4054),jvj+320)*/
pile[WZ4]=jvj+318; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4054),jvj+318)*/
pile[v[22]]=jvj+318; pile[WZ1]=103; pile[WZ2]=jvj+319; 
(*f[54])( );     /*TRI1(jvj+318,103,jvj+319)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+320; pile[WZ4]=jvj+319; pile[WZ5]=jvj+311; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+320,jvj+319,jvj+311)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+309; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+309,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=114; pile[WZ2]=jvj+310; 
(*f[36])( );     /*PLUSC0(jvj+53,114,jvj+310)*/
pile[WZ2]=jvj+311; 
(*f[36])( );     /*PLUSC0(jvj+53,114,jvj+311)*/
pile[v[22]]=jvj+51; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+52; 
(*f[180])( );     /*TRIENS0(jvj+51,(-20),107,jvj+52)*/
pile[v[22]]=jvj+53; pile[WZ2]=jvj+52; pile[WZ3]=105; pile[WZ4]=jvj+54; 
(*f[298])( );     /*TRIENS1(jvj+53,(-20),jvj+52,105,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+54,42,100,jvj+10)*/
if((K!=1224)) goto l8;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=45; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,45,jvj+56)*/
pile[WZ3]=100; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+61; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=103; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,103,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+62; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+63,jvj+62,jvj+60)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=484; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,484,jvj+64)*/
pile[WZ3]=531; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,531,jvj+65)*/
pile[WZ3]=453; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,453,jvj+66)*/
pile[WZ3]=979; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,979,jvj+67)*/
pile[WZ3]=1027; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,1027,jvj+68)*/
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=jvj+58; 
(*f[54])( );     /*TRI1(128,100,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=128; pile[WZ2]=jvj+64; 
(*f[36])( );     /*PLUSC0(jvj+58,128,jvj+64)*/
pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+58,128,jvj+65)*/
pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(jvj+58,128,jvj+66)*/
pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+58,128,jvj+67)*/
pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+58,128,jvj+68)*/
pile[v[22]]=jvj+56; pile[WZ1]=111; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+56,111,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; pile[WZ2]=103; pile[WZ3]=jvj+59; 
(*f[58])( );     /*TRI3(jvj+57,jvj+58,103,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+60; pile[WZ4]=jvj+59; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+60,jvj+59,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=107; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+11)*/
l8:pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+10)*/
l9:if(K!=671&&K!=1224) goto l10;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=229; pile[WZ4]=jvj+321; 
(*f[181])( );     /*QUADRI2(100,20,101,229,jvj+321)*/
pile[WZ3]=130; pile[WZ4]=jvj+332; 
(*f[181])( );     /*QUADRI2(100,20,101,130,jvj+332)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4054); pile[WZ4]=jvj+330; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4054),jvj+330)*/
pile[v[22]]=jvj+330; pile[WZ1]=103; pile[WZ2]=jvj+331; 
(*f[54])( );     /*TRI1(jvj+330,103,jvj+331)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+332; pile[WZ4]=jvj+331; pile[WZ5]=jvj+329; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+332,jvj+331,jvj+329)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+327; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+327)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+325; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+325)*/
pile[v[22]]=jvj+325; pile[WZ1]=436; pile[WZ2]=jvj+326; 
(*f[54])( );     /*TRI1(jvj+325,436,jvj+326)*/
pile[v[22]]=jvj+326; pile[WZ1]=jvj+327; pile[WZ2]=111; pile[WZ3]=jvj+328; 
(*f[58])( );     /*TRI3(jvj+326,jvj+327,111,jvj+328)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+329; pile[WZ4]=jvj+328; pile[WZ5]=jvj+323; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+329,jvj+328,jvj+323)*/
pile[v[22]]=jvj+321; pile[WZ1]=337; pile[WZ2]=jvj+322; 
(*f[54])( );     /*TRI1(jvj+321,337,jvj+322)*/
pile[v[22]]=jvj+323; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+324; 
(*f[298])( );     /*TRIENS1(jvj+323,(-20),jvj+322,105,jvj+324)*/
pile[v[22]]=jvj+324; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+324,42,100,jvj+27)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+27)*/
pile[v[22]]=M; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(M,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+337; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+337)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+340; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+340)*/
pile[v[22]]=jvj+337; pile[WZ1]=111; pile[WZ2]=jvj+338; 
(*f[54])( );     /*TRI1(jvj+337,111,jvj+338)*/
pile[v[22]]=jvj+338; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+339; 
(*f[58])( );     /*TRI3(jvj+338,jvj+28,103,jvj+339)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+340; pile[WZ4]=jvj+339; pile[WZ5]=jvj+333; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+340,jvj+339,jvj+333)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=130; pile[WZ4]=jvj+347; 
(*f[181])( );     /*QUADRI2(100,20,101,130,jvj+347)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4054); pile[WZ4]=jvj+345; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4054),jvj+345)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+341; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+341)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=84; pile[WZ4]=jvj+343; 
(*f[181])( );     /*QUADRI2(100,20,101,84,jvj+343)*/
pile[v[22]]=jvj+341; pile[WZ1]=160; pile[WZ2]=jvj+342; 
(*f[54])( );     /*TRI1(jvj+341,160,jvj+342)*/
pile[v[22]]=jvj+342; pile[WZ1]=jvj+343; pile[WZ2]=111; pile[WZ3]=jvj+344; 
(*f[58])( );     /*TRI3(jvj+342,jvj+343,111,jvj+344)*/
pile[v[22]]=jvj+344; pile[WZ1]=jvj+345; pile[WZ2]=103; pile[WZ3]=jvj+346; 
(*f[58])( );     /*TRI3(jvj+344,jvj+345,103,jvj+346)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+347; pile[WZ4]=jvj+346; pile[WZ5]=jvj+335; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+347,jvj+346,jvj+335)*/
pile[v[22]]=jvj+333; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+334; 
(*f[180])( );     /*TRIENS0(jvj+333,(-20),107,jvj+334)*/
pile[v[22]]=jvj+335; pile[WZ2]=jvj+334; pile[WZ3]=105; pile[WZ4]=jvj+336; 
(*f[298])( );     /*TRIENS1(jvj+335,(-20),jvj+334,105,jvj+336)*/
pile[v[22]]=jvj+336; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+336,42,100,jvj+29)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+29)*/
l10:if(K!=930&&K!=1222) goto l12;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+352; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+352)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+356; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+356)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=35; pile[WZ4]=jvj+359; 
(*f[181])( );     /*QUADRI2(100,20,101,35,jvj+359)*/
pile[WZ3]=100; pile[WZ4]=jvj+362; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+362)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+360; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+360)*/
pile[v[22]]=jvj+360; pile[WZ1]=103; pile[WZ2]=jvj+361; 
(*f[54])( );     /*TRI1(jvj+360,103,jvj+361)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+362; pile[WZ4]=jvj+361; pile[WZ5]=jvj+357; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+362,jvj+361,jvj+357)*/
pile[v[22]]=jvj+357; pile[WZ1]=103; pile[WZ2]=jvj+358; 
(*f[54])( );     /*TRI1(jvj+357,103,jvj+358)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+359; pile[WZ4]=jvj+358; pile[WZ5]=jvj+354; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+359,jvj+358,jvj+354)*/
pile[v[22]]=jvj+352; pile[WZ1]=111; pile[WZ2]=jvj+353; 
(*f[54])( );     /*TRI1(jvj+352,111,jvj+353)*/
pile[v[22]]=jvj+353; pile[WZ1]=jvj+354; pile[WZ2]=103; pile[WZ3]=jvj+355; 
(*f[58])( );     /*TRI3(jvj+353,jvj+354,103,jvj+355)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+356; pile[WZ4]=jvj+355; pile[WZ5]=jvj+348; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+356,jvj+355,jvj+348)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+8; pile[WZ4]=jvj+363; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+8,jvj+363)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+371; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+371)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+369; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+369)*/
pile[v[22]]=jvj+369; pile[WZ1]=103; pile[WZ2]=jvj+370; 
(*f[54])( );     /*TRI1(jvj+369,103,jvj+370)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+371; pile[WZ4]=jvj+370; pile[WZ5]=jvj+368; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+371,jvj+370,jvj+368)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+366; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+366)*/
pile[v[22]]=jvj+366; pile[WZ1]=103; pile[WZ2]=jvj+367; 
(*f[54])( );     /*TRI1(jvj+366,103,jvj+367)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+368; pile[WZ4]=jvj+367; pile[WZ5]=jvj+364; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+368,jvj+367,jvj+364)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+374; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+374)*/
pile[WZ4]=jvj+372; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+372)*/
pile[v[22]]=jvj+372; pile[WZ1]=103; pile[WZ2]=jvj+373; 
(*f[54])( );     /*TRI1(jvj+372,103,jvj+373)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+374; pile[WZ4]=jvj+373; pile[WZ5]=jvj+365; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+374,jvj+373,jvj+365)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+363; pile[WZ4]=jvj+350; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+363,jvj+350)*/
pile[v[22]]=jvj+350; pile[WZ1]=114; pile[WZ2]=jvj+364; 
(*f[36])( );     /*PLUSC0(jvj+350,114,jvj+364)*/
pile[WZ2]=jvj+365; 
(*f[36])( );     /*PLUSC0(jvj+350,114,jvj+365)*/
pile[v[22]]=jvj+348; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+349; 
(*f[180])( );     /*TRIENS0(jvj+348,(-20),107,jvj+349)*/
pile[v[22]]=jvj+350; pile[WZ2]=jvj+349; pile[WZ3]=105; pile[WZ4]=jvj+351; 
(*f[298])( );     /*TRIENS1(jvj+350,(-20),jvj+349,105,jvj+351)*/
pile[v[22]]=jvj+351; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+351,42,100,jvj+30)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+379; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+379)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+383; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+383)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=7; pile[WZ4]=jvj+386; 
(*f[181])( );     /*QUADRI2(100,20,101,7,jvj+386)*/
pile[WZ3]=100; pile[WZ4]=jvj+389; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+389)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+387; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+387)*/
pile[v[22]]=jvj+387; pile[WZ1]=103; pile[WZ2]=jvj+388; 
(*f[54])( );     /*TRI1(jvj+387,103,jvj+388)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+389; pile[WZ4]=jvj+388; pile[WZ5]=jvj+384; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+389,jvj+388,jvj+384)*/
pile[v[22]]=jvj+384; pile[WZ1]=103; pile[WZ2]=jvj+385; 
(*f[54])( );     /*TRI1(jvj+384,103,jvj+385)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+386; pile[WZ4]=jvj+385; pile[WZ5]=jvj+381; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+386,jvj+385,jvj+381)*/
pile[v[22]]=jvj+379; pile[WZ1]=111; pile[WZ2]=jvj+380; 
(*f[54])( );     /*TRI1(jvj+379,111,jvj+380)*/
pile[v[22]]=jvj+380; pile[WZ1]=jvj+381; pile[WZ2]=103; pile[WZ3]=jvj+382; 
(*f[58])( );     /*TRI3(jvj+380,jvj+381,103,jvj+382)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+383; pile[WZ4]=jvj+382; pile[WZ5]=jvj+377; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+383,jvj+382,jvj+377)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+390; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+390)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+394; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+394)*/
pile[WZ3]=(-605); pile[WZ4]=jvj+397; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+397)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+395; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+395)*/
pile[v[22]]=jvj+395; pile[WZ1]=103; pile[WZ2]=jvj+396; 
(*f[54])( );     /*TRI1(jvj+395,103,jvj+396)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+397; pile[WZ4]=jvj+396; pile[WZ5]=jvj+392; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+397,jvj+396,jvj+392)*/
pile[v[22]]=jvj+390; pile[WZ1]=111; pile[WZ2]=jvj+391; 
(*f[54])( );     /*TRI1(jvj+390,111,jvj+391)*/
pile[v[22]]=jvj+391; pile[WZ1]=jvj+392; pile[WZ2]=103; pile[WZ3]=jvj+393; 
(*f[58])( );     /*TRI3(jvj+391,jvj+392,103,jvj+393)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+394; pile[WZ4]=jvj+393; pile[WZ5]=jvj+378; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+394,jvj+393,jvj+378)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+8; pile[WZ4]=jvj+398; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+8,jvj+398)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+403; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+403)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+401; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+401)*/
pile[v[22]]=jvj+401; pile[WZ1]=103; pile[WZ2]=jvj+402; 
(*f[54])( );     /*TRI1(jvj+401,103,jvj+402)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+403; pile[WZ4]=jvj+402; pile[WZ5]=jvj+399; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+403,jvj+402,jvj+399)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+406; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+406)*/
pile[WZ4]=jvj+404; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+404)*/
pile[v[22]]=jvj+404; pile[WZ1]=103; pile[WZ2]=jvj+405; 
(*f[54])( );     /*TRI1(jvj+404,103,jvj+405)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+406; pile[WZ4]=jvj+405; pile[WZ5]=jvj+400; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+406,jvj+405,jvj+400)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+398; pile[WZ4]=jvj+375; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+398,jvj+375)*/
pile[v[22]]=jvj+375; pile[WZ1]=114; pile[WZ2]=jvj+399; 
(*f[36])( );     /*PLUSC0(jvj+375,114,jvj+399)*/
pile[WZ2]=jvj+400; 
(*f[36])( );     /*PLUSC0(jvj+375,114,jvj+400)*/
pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+376; 
(*f[180])( );     /*TRIENS0(jvj+375,(-20),105,jvj+376)*/
pile[v[22]]=jvj+376; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+376,42,100,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=107; pile[WZ2]=jvj+377; 
(*f[36])( );     /*PLUSC0(jvj+31,107,jvj+377)*/
pile[WZ2]=jvj+378; 
(*f[36])( );     /*PLUSC0(jvj+31,107,jvj+378)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=239; pile[WZ4]=jvj+407; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+407)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1278); pile[WZ4]=jvj+415; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1278),jvj+415)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+413; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+413)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+411; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+411)*/
pile[v[22]]=jvj+411; pile[WZ1]=436; pile[WZ2]=jvj+412; 
(*f[54])( );     /*TRI1(jvj+411,436,jvj+412)*/
pile[v[22]]=jvj+412; pile[WZ1]=jvj+413; pile[WZ2]=111; pile[WZ3]=jvj+414; 
(*f[58])( );     /*TRI3(jvj+412,jvj+413,111,jvj+414)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+415; pile[WZ4]=jvj+414; pile[WZ5]=jvj+409; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+415,jvj+414,jvj+409)*/
pile[v[22]]=jvj+407; pile[WZ1]=337; pile[WZ2]=jvj+408; 
(*f[54])( );     /*TRI1(jvj+407,337,jvj+408)*/
pile[v[22]]=jvj+409; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+410; 
(*f[298])( );     /*TRIENS1(jvj+409,(-20),jvj+408,105,jvj+410)*/
pile[v[22]]=jvj+410; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+410,42,100,jvj+32)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+32)*/
x[jvj+429]=incon;
if((K==930)) goto l6;
x[jvj+429]=732 ;z[jvj+429]=732;
l11:pile[v[22]]=M; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(M,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+420; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+420)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+423; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+423)*/
pile[v[22]]=jvj+420; pile[WZ1]=111; pile[WZ2]=jvj+421; 
(*f[54])( );     /*TRI1(jvj+420,111,jvj+421)*/
pile[v[22]]=jvj+421; pile[WZ1]=jvj+33; pile[WZ2]=103; pile[WZ3]=jvj+422; 
(*f[58])( );     /*TRI3(jvj+421,jvj+33,103,jvj+422)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+423; pile[WZ4]=jvj+422; pile[WZ5]=jvj+416; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+423,jvj+422,jvj+416)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+428; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+428)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+426; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+426)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+429; pile[WZ4]=jvj+424; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+429,jvj+424)*/
pile[v[22]]=jvj+424; pile[WZ1]=111; pile[WZ2]=jvj+425; 
(*f[54])( );     /*TRI1(jvj+424,111,jvj+425)*/
pile[v[22]]=jvj+425; pile[WZ1]=jvj+426; pile[WZ2]=103; pile[WZ3]=jvj+427; 
(*f[58])( );     /*TRI3(jvj+425,jvj+426,103,jvj+427)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+428; pile[WZ4]=jvj+427; pile[WZ5]=jvj+418; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+428,jvj+427,jvj+418)*/
pile[v[22]]=jvj+416; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+417; 
(*f[180])( );     /*TRIENS0(jvj+416,(-20),107,jvj+417)*/
pile[v[22]]=jvj+418; pile[WZ2]=jvj+417; pile[WZ3]=105; pile[WZ4]=jvj+419; 
(*f[298])( );     /*TRIENS1(jvj+418,(-20),jvj+417,105,jvj+419)*/
pile[v[22]]=jvj+419; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+419,42,100,jvj+34)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+34)*/
l12:pile[v[22]]=Z; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(Z,jvj+35)*/
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
x[jvj+36]=incon;
if((x[H]==410)) goto l22;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+36)*/
l13:pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+36; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+8; pile[WZ4]=jvj+434; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+8,jvj+434)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+435; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+435)*/
pile[v[22]]=jvj+435; pile[WZ1]=103; pile[WZ2]=jvj+436; 
(*f[54])( );     /*TRI1(jvj+435,103,jvj+436)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+436; pile[WZ5]=jvj+430; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+35,jvj+436,jvj+430)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+439; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+439)*/
pile[WZ3]=(-4053); pile[WZ4]=jvj+437; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+437)*/
pile[v[22]]=jvj+437; pile[WZ1]=103; pile[WZ2]=jvj+438; 
(*f[54])( );     /*TRI1(jvj+437,103,jvj+438)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+439; pile[WZ4]=jvj+438; pile[WZ5]=jvj+432; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+439,jvj+438,jvj+432)*/
pile[v[22]]=jvj+430; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+431; 
(*f[180])( );     /*TRIENS0(jvj+430,(-20),114,jvj+431)*/
pile[v[22]]=jvj+432; pile[WZ2]=jvj+431; pile[WZ3]=113; pile[WZ4]=jvj+433; 
(*f[298])( );     /*TRIENS1(jvj+432,(-20),jvj+431,113,jvj+433)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+434; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+434,jvj+433,jvj+37)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+37; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+37)*/
x[RES]=67 ;z[RES]=67;
l14:if((K!=370)) goto l20;
x[jvj+486]=incon;
pile[v[22]]=111; pile[WZ1]=M; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,M,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=654)) goto l5;
pile[v[22]]=103; pile[WZ1]=M; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,M,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+14,jvj+15)*/
x[jvj+486]=x[jvj+15] ;z[jvj+486]=z[jvj+15];
l15:x[jvj+38]=x[jvj+486] ;z[jvj+38]=z[jvj+486];
if(x[jvj+8]!=incon) goto l16;
l20:if(x[RES]!=incon) goto l21;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=8; v[102]=1;return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+3,jvj+4)*/
if((x[jvj+4]!=x[H])) goto l3;
pile[v[22]]=109; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+3,jvj+5)*/
pile[v[22]]=102; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+3,jvj+6)*/
pile[v[22]]=M; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[2202])( );     /*MEMEM0(M,jvj+6,jvj+7)*/
if((x[jvj+7]==135)) goto l4;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+8]=x[jvj+5] ;z[jvj+8]=z[jvj+5];
K=67;
goto l7;
l5:x[jvj+486]=250 ;z[jvj+486]=250;
goto l15;
l6:x[jvj+429]=430 ;z[jvj+429]=430;
goto l11;
l16:x[jvj+39]=incon;
if((x[jvj+38]==250)) goto l17;
pile[v[22]]=210; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(210,jvj+38,jvj+39)*/
l24:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=229; pile[WZ4]=jvj+440; 
(*f[181])( );     /*QUADRI2(100,20,101,229,jvj+440)*/
pile[WZ3]=jvj+39; pile[WZ4]=jvj+451; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+39,jvj+451)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4054); pile[WZ4]=jvj+449; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4054),jvj+449)*/
pile[v[22]]=jvj+449; pile[WZ1]=103; pile[WZ2]=jvj+450; 
(*f[54])( );     /*TRI1(jvj+449,103,jvj+450)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+451; pile[WZ4]=jvj+450; pile[WZ5]=jvj+448; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+451,jvj+450,jvj+448)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+446; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+446)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+444; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+444)*/
pile[v[22]]=jvj+444; pile[WZ1]=436; pile[WZ2]=jvj+445; 
(*f[54])( );     /*TRI1(jvj+444,436,jvj+445)*/
pile[v[22]]=jvj+445; pile[WZ1]=jvj+446; pile[WZ2]=111; pile[WZ3]=jvj+447; 
(*f[58])( );     /*TRI3(jvj+445,jvj+446,111,jvj+447)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+448; pile[WZ4]=jvj+447; pile[WZ5]=jvj+442; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+448,jvj+447,jvj+442)*/
pile[v[22]]=jvj+440; pile[WZ1]=337; pile[WZ2]=jvj+441; 
(*f[54])( );     /*TRI1(jvj+440,337,jvj+441)*/
pile[v[22]]=jvj+442; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+443; 
(*f[298])( );     /*TRIENS1(jvj+442,(-20),jvj+441,105,jvj+443)*/
pile[v[22]]=jvj+443; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+443,42,100,jvj+40)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+40)*/
if((x[jvj+38]==250)) goto l18;
pile[v[22]]=210; pile[WZ1]=jvj+38; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(210,jvj+38,jvj+43)*/
pile[v[22]]=M; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(M,jvj+44)*/
if((x[jvj+485]=w[x[jvj+38]][3])==incon) goto l20;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+471; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+471)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+474; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+474)*/
pile[v[22]]=jvj+471; pile[WZ1]=111; pile[WZ2]=jvj+472; 
(*f[54])( );     /*TRI1(jvj+471,111,jvj+472)*/
pile[v[22]]=jvj+472; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+473; 
(*f[58])( );     /*TRI3(jvj+472,jvj+44,103,jvj+473)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+474; pile[WZ4]=jvj+473; pile[WZ5]=jvj+467; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+474,jvj+473,jvj+467)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+43; pile[WZ4]=jvj+481; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+43,jvj+481)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4054); pile[WZ4]=jvj+479; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4054),jvj+479)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+485; pile[WZ4]=jvj+484; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+485,jvj+484)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+482; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+482)*/
pile[v[22]]=jvj+482; pile[WZ1]=103; pile[WZ2]=jvj+483; 
(*f[54])( );     /*TRI1(jvj+482,103,jvj+483)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+484; pile[WZ4]=jvj+483; pile[WZ5]=jvj+475; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+484,jvj+483,jvj+475)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=36; pile[WZ4]=jvj+477; 
(*f[181])( );     /*QUADRI2(100,20,101,36,jvj+477)*/
pile[v[22]]=jvj+475; pile[WZ1]=160; pile[WZ2]=jvj+476; 
(*f[54])( );     /*TRI1(jvj+475,160,jvj+476)*/
pile[v[22]]=jvj+476; pile[WZ1]=jvj+477; pile[WZ2]=111; pile[WZ3]=jvj+478; 
(*f[58])( );     /*TRI3(jvj+476,jvj+477,111,jvj+478)*/
pile[v[22]]=jvj+478; pile[WZ1]=jvj+479; pile[WZ2]=103; pile[WZ3]=jvj+480; 
(*f[58])( );     /*TRI3(jvj+478,jvj+479,103,jvj+480)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+481; pile[WZ4]=jvj+480; pile[WZ5]=jvj+469; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+481,jvj+480,jvj+469)*/
pile[v[22]]=jvj+467; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+468; 
(*f[180])( );     /*TRIENS0(jvj+467,(-20),107,jvj+468)*/
pile[v[22]]=jvj+469; pile[WZ2]=jvj+468; pile[WZ3]=105; pile[WZ4]=jvj+470; 
(*f[298])( );     /*TRIENS1(jvj+469,(-20),jvj+468,105,jvj+470)*/
pile[v[22]]=jvj+470; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+470,42,100,jvj+45)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+45)*/
goto l20;
l17:x[jvj+39]=159 ;z[jvj+39]=159;
goto l24;
l18:pile[v[22]]=M; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(M,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+456; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+456)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+459; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+459)*/
pile[v[22]]=jvj+456; pile[WZ1]=111; pile[WZ2]=jvj+457; 
(*f[54])( );     /*TRI1(jvj+456,111,jvj+457)*/
pile[v[22]]=jvj+457; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+458; 
(*f[58])( );     /*TRI3(jvj+457,jvj+41,103,jvj+458)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+459; pile[WZ4]=jvj+458; pile[WZ5]=jvj+452; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+459,jvj+458,jvj+452)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=159; pile[WZ4]=jvj+466; 
(*f[181])( );     /*QUADRI2(100,20,101,159,jvj+466)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4054); pile[WZ4]=jvj+464; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4054),jvj+464)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+460; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+460)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=36; pile[WZ4]=jvj+462; 
(*f[181])( );     /*QUADRI2(100,20,101,36,jvj+462)*/
pile[v[22]]=jvj+460; pile[WZ1]=160; pile[WZ2]=jvj+461; 
(*f[54])( );     /*TRI1(jvj+460,160,jvj+461)*/
pile[v[22]]=jvj+461; pile[WZ1]=jvj+462; pile[WZ2]=111; pile[WZ3]=jvj+463; 
(*f[58])( );     /*TRI3(jvj+461,jvj+462,111,jvj+463)*/
pile[v[22]]=jvj+463; pile[WZ1]=jvj+464; pile[WZ2]=103; pile[WZ3]=jvj+465; 
(*f[58])( );     /*TRI3(jvj+463,jvj+464,103,jvj+465)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+466; pile[WZ4]=jvj+465; pile[WZ5]=jvj+454; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+466,jvj+465,jvj+454)*/
pile[v[22]]=jvj+452; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+453; 
(*f[180])( );     /*TRIENS0(jvj+452,(-20),107,jvj+453)*/
pile[v[22]]=jvj+454; pile[WZ2]=jvj+453; pile[WZ3]=105; pile[WZ4]=jvj+455; 
(*f[298])( );     /*TRIENS1(jvj+454,(-20),jvj+453,105,jvj+455)*/
pile[v[22]]=jvj+455; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+455,42,100,jvj+42)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+42)*/
goto l20;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=8; v[102]=0;return;
l22:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+46)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+50; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+50)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+48)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=103; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+47,jvj+48,103,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+50,jvj+49,jvj+36)*/
goto l13;
l23:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+73)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+77; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+77)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=35; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,20,101,35,jvj+80)*/
pile[WZ3]=100; pile[WZ4]=jvj+83; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+83)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+81; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=103; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+81,103,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+83; pile[WZ4]=jvj+82; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+83,jvj+82,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=103; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+78,103,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+80; pile[WZ4]=jvj+79; pile[WZ5]=jvj+75; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+80,jvj+79,jvj+75)*/
pile[v[22]]=jvj+73; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,111,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; pile[WZ2]=103; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+74,jvj+75,103,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+77; pile[WZ4]=jvj+76; pile[WZ5]=jvj+69; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+77,jvj+76,jvj+69)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+8; pile[WZ4]=jvj+88; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+8,jvj+88)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+94; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+94)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+92; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=103; pile[WZ2]=jvj+93; 
(*f[54])( );     /*TRI1(jvj+92,103,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+93; pile[WZ5]=jvj+91; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+94,jvj+93,jvj+91)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+89; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=103; pile[WZ2]=jvj+90; 
(*f[54])( );     /*TRI1(jvj+89,103,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+91; pile[WZ4]=jvj+90; pile[WZ5]=jvj+84; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+91,jvj+90,jvj+84)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-631); pile[WZ4]=jvj+97; 
(*f[270])( );     /*QUADRI7(100,21,140,(-631),jvj+97)*/
pile[WZ3]=(-4053); pile[WZ4]=jvj+95; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=103; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,103,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+97; pile[WZ4]=jvj+96; pile[WZ5]=jvj+86; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+97,jvj+96,jvj+86)*/
pile[v[22]]=jvj+84; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+85; 
(*f[180])( );     /*TRIENS0(jvj+84,(-20),114,jvj+85)*/
pile[v[22]]=jvj+86; pile[WZ2]=jvj+85; pile[WZ3]=113; pile[WZ4]=jvj+87; 
(*f[298])( );     /*TRIENS1(jvj+86,(-20),jvj+85,113,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+88; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+88,jvj+87,jvj+71)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-631); pile[WZ4]=jvj+102; 
(*f[270])( );     /*QUADRI7(100,21,140,(-631),jvj+102)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+100; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+100)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+98; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=436; pile[WZ2]=jvj+99; 
(*f[54])( );     /*TRI1(jvj+98,436,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=jvj+100; pile[WZ2]=111; pile[WZ3]=jvj+101; 
(*f[58])( );     /*TRI3(jvj+99,jvj+100,111,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+102; pile[WZ4]=jvj+101; pile[WZ5]=jvj+72; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+102,jvj+101,jvj+72)*/
pile[v[22]]=jvj+69; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+70; 
(*f[180])( );     /*TRIENS0(jvj+69,(-20),107,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+70,42,100,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=105; pile[WZ2]=jvj+71; 
(*f[36])( );     /*PLUSC0(jvj+16,105,jvj+71)*/
pile[WZ2]=jvj+72; 
(*f[36])( );     /*PLUSC0(jvj+16,105,jvj+72)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+107)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+111; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+111)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=7; pile[WZ4]=jvj+114; 
(*f[181])( );     /*QUADRI2(100,20,101,7,jvj+114)*/
pile[WZ3]=100; pile[WZ4]=jvj+117; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+117)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+115; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+115)*/
pile[v[22]]=jvj+115; pile[WZ1]=103; pile[WZ2]=jvj+116; 
(*f[54])( );     /*TRI1(jvj+115,103,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+117; pile[WZ4]=jvj+116; pile[WZ5]=jvj+112; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+117,jvj+116,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=103; pile[WZ2]=jvj+113; 
(*f[54])( );     /*TRI1(jvj+112,103,jvj+113)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+114; pile[WZ4]=jvj+113; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+114,jvj+113,jvj+109)*/
pile[v[22]]=jvj+107; pile[WZ1]=111; pile[WZ2]=jvj+108; 
(*f[54])( );     /*TRI1(jvj+107,111,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+109; pile[WZ2]=103; pile[WZ3]=jvj+110; 
(*f[58])( );     /*TRI3(jvj+108,jvj+109,103,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+111; pile[WZ4]=jvj+110; pile[WZ5]=jvj+103; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+111,jvj+110,jvj+103)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+118; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+118)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+122; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+122)*/
pile[WZ3]=(-605); pile[WZ4]=jvj+125; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+125)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+123; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+123)*/
pile[v[22]]=jvj+123; pile[WZ1]=103; pile[WZ2]=jvj+124; 
(*f[54])( );     /*TRI1(jvj+123,103,jvj+124)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+125; pile[WZ4]=jvj+124; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+125,jvj+124,jvj+120)*/
pile[v[22]]=jvj+118; pile[WZ1]=111; pile[WZ2]=jvj+119; 
(*f[54])( );     /*TRI1(jvj+118,111,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=jvj+120; pile[WZ2]=103; pile[WZ3]=jvj+121; 
(*f[58])( );     /*TRI3(jvj+119,jvj+120,103,jvj+121)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+122; pile[WZ4]=jvj+121; pile[WZ5]=jvj+104; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+122,jvj+121,jvj+104)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+8; pile[WZ4]=jvj+130; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+8,jvj+130)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+133; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+133)*/
pile[WZ3]=(-4052); pile[WZ4]=jvj+131; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=103; pile[WZ2]=jvj+132; 
(*f[54])( );     /*TRI1(jvj+131,103,jvj+132)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+133; pile[WZ4]=jvj+132; pile[WZ5]=jvj+126; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+133,jvj+132,jvj+126)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-631); pile[WZ4]=jvj+136; 
(*f[270])( );     /*QUADRI7(100,21,140,(-631),jvj+136)*/
pile[WZ3]=(-4053); pile[WZ4]=jvj+134; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+134)*/
pile[v[22]]=jvj+134; pile[WZ1]=103; pile[WZ2]=jvj+135; 
(*f[54])( );     /*TRI1(jvj+134,103,jvj+135)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+136; pile[WZ4]=jvj+135; pile[WZ5]=jvj+128; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+136,jvj+135,jvj+128)*/
pile[v[22]]=jvj+126; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+127; 
(*f[180])( );     /*TRIENS0(jvj+126,(-20),114,jvj+127)*/
pile[v[22]]=jvj+128; pile[WZ2]=jvj+127; pile[WZ3]=113; pile[WZ4]=jvj+129; 
(*f[298])( );     /*TRIENS1(jvj+128,(-20),jvj+127,113,jvj+129)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+130; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+130,jvj+129,jvj+105)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-631); pile[WZ4]=jvj+141; 
(*f[270])( );     /*QUADRI7(100,21,140,(-631),jvj+141)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+139; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+139)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+137; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+137)*/
pile[v[22]]=jvj+137; pile[WZ1]=436; pile[WZ2]=jvj+138; 
(*f[54])( );     /*TRI1(jvj+137,436,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=jvj+139; pile[WZ2]=111; pile[WZ3]=jvj+140; 
(*f[58])( );     /*TRI3(jvj+138,jvj+139,111,jvj+140)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+141; pile[WZ4]=jvj+140; pile[WZ5]=jvj+106; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+141,jvj+140,jvj+106)*/
pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(42,100,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=107; pile[WZ2]=jvj+103; 
(*f[36])( );     /*PLUSC0(jvj+17,107,jvj+103)*/
pile[WZ2]=jvj+104; 
(*f[36])( );     /*PLUSC0(jvj+17,107,jvj+104)*/
pile[WZ1]=105; pile[WZ2]=jvj+105; 
(*f[36])( );     /*PLUSC0(jvj+17,105,jvj+105)*/
pile[WZ2]=jvj+106; 
(*f[36])( );     /*PLUSC0(jvj+17,105,jvj+106)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+17)*/
pile[v[22]]=M; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(M,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+146; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+146)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+149; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+149)*/
pile[v[22]]=jvj+146; pile[WZ1]=111; pile[WZ2]=jvj+147; 
(*f[54])( );     /*TRI1(jvj+146,111,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+148; 
(*f[58])( );     /*TRI3(jvj+147,jvj+18,103,jvj+148)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+149; pile[WZ4]=jvj+148; pile[WZ5]=jvj+142; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+149,jvj+148,jvj+142)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4052); pile[WZ4]=jvj+154; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4052),jvj+154)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+152; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+152)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4053); pile[WZ4]=jvj+150; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4053),jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=436; pile[WZ2]=jvj+151; 
(*f[54])( );     /*TRI1(jvj+150,436,jvj+151)*/
pile[v[22]]=jvj+151; pile[WZ1]=jvj+152; pile[WZ2]=111; pile[WZ3]=jvj+153; 
(*f[58])( );     /*TRI3(jvj+151,jvj+152,111,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+154; pile[WZ4]=jvj+153; pile[WZ5]=jvj+144; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+154,jvj+153,jvj+144)*/
pile[v[22]]=jvj+142; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+143; 
(*f[180])( );     /*TRIENS0(jvj+142,(-20),107,jvj+143)*/
pile[v[22]]=jvj+144; pile[WZ2]=jvj+143; pile[WZ3]=105; pile[WZ4]=jvj+145; 
(*f[298])( );     /*TRIENS1(jvj+144,(-20),jvj+143,105,jvj+145)*/
pile[v[22]]=jvj+145; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+145,42,100,jvj+19)*/
pile[v[22]]=jvj+8; pile[WZ1]=184; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+8,184,jvj+19)*/
goto l7;
}
