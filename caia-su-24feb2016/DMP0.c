#include "dx.h"
void DMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,W=0,V33=0,V37=0,V54=0,V104=0,V123=0,V130=0,V140=0,V158=0,V153=0,V154=0,V156=0,V160=0,V214=0,I=0,C=0,S=0,V265=0,V164=0,V209=0,V232=0,V243=0,V26=0,V133=0,V204=0,V87=0;
int X,R,TL,BT,BB;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=288;
x[jvj+1]=10483;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1426&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; R=pile[v[22]+1]; TL=pile[v[22]+2]; BT=pile[v[22]+3]; BB=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,X,jvj+93)*/
pile[v[22]]=101; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+93,jvj+94)*/
if((x[jvj+94]!=179)) goto l42;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(436,X,jvj+95)*/
pile[v[22]]=140; pile[WZ1]=jvj+95; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(140,jvj+95,V243)*/
V243=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,X,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+96,jvj+97)*/
if((x[jvj+97]!=43)) goto l42;
pile[v[22]]=102; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,jvj+96,jvj+98)*/
pile[v[22]]=103; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,jvj+96,jvj+99)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+99; pile[WZ2]=V243; pile[WZ3]=R; pile[WZ4]=X; pile[WZ5]=BT; pile[v[22]+6]=jvj+100; 
(*f[1650])( );     /*DMO0(jvj+98,jvj+99,V243,R,X,BT,jvj+100)*/
l56:if((x[jvj+100]==250)) goto l57;
pile[v[22]]=jvj+100; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; 
(*f[1647])( );     /*DMT0(jvj+100,BT,X,R)*/
l57:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l2:x[jvj+2]=t[x[jvj+2]];
l1:if((x[jvj+2]<=0)) goto l46;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+3,V21)*/
V21=pile[WZ2]; 
if((V21!=V26)) goto l2;
x[jvj+158]=incon;
pile[v[22]]=158; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+3,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+4,W)*/
W=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-697); pile[WZ4]=jvj+187; 
(*f[270])( );     /*QUADRI7(100,21,140,(-697),jvj+187)*/
pile[v[22]]=jvj+187; pile[WZ1]=103; pile[WZ2]=jvj+188; 
(*f[54])( );     /*TRI1(jvj+187,103,jvj+188)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+188; pile[WZ5]=jvj+159; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+8,jvj+188,jvj+159)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+189; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+189)*/
pile[v[22]]=jvj+189; pile[WZ1]=103; pile[WZ2]=jvj+190; 
(*f[54])( );     /*TRI1(jvj+189,103,jvj+190)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+190; pile[WZ5]=jvj+160; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+10,jvj+190,jvj+160)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+6; pile[WZ4]=jvj+158; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+6,jvj+158)*/
pile[v[22]]=jvj+158; pile[WZ1]=114; pile[WZ2]=jvj+159; 
(*f[36])( );     /*PLUSC0(jvj+158,114,jvj+159)*/
pile[WZ2]=jvj+160; 
(*f[36])( );     /*PLUSC0(jvj+158,114,jvj+160)*/
l45:x[jvj+100]=x[jvj+158] ;z[jvj+100]=z[jvj+158];
goto l56;
l3:pile[v[22]]=110; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(110,jvj+3,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-697); pile[WZ4]=jvj+191; 
(*f[270])( );     /*QUADRI7(100,21,140,(-697),jvj+191)*/
pile[v[22]]=jvj+191; pile[WZ1]=103; pile[WZ2]=jvj+192; 
(*f[54])( );     /*TRI1(jvj+191,103,jvj+192)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+112; pile[WZ4]=jvj+192; pile[WZ5]=jvj+161; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+112,jvj+192,jvj+161)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V33; pile[WZ4]=jvj+195; 
(*f[270])( );     /*QUADRI7(100,21,140,V33,jvj+195)*/
pile[WZ3]=(-671); pile[WZ4]=jvj+193; 
(*f[270])( );     /*QUADRI7(100,21,140,(-671),jvj+193)*/
pile[v[22]]=jvj+193; pile[WZ1]=103; pile[WZ2]=jvj+194; 
(*f[54])( );     /*TRI1(jvj+193,103,jvj+194)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+195; pile[WZ4]=jvj+194; pile[WZ5]=jvj+162; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+195,jvj+194,jvj+162)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+199; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+199)*/
pile[WZ3]=41; pile[WZ4]=jvj+201; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+201)*/
pile[v[22]]=jvj+199; pile[WZ1]=111; pile[WZ2]=jvj+200; 
(*f[54])( );     /*TRI1(jvj+199,111,jvj+200)*/
pile[v[22]]=jvj+200; pile[WZ1]=jvj+201; pile[WZ2]=103; pile[WZ3]=jvj+202; 
(*f[58])( );     /*TRI3(jvj+200,jvj+201,103,jvj+202)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+111; pile[WZ4]=jvj+202; pile[WZ5]=jvj+198; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+111,jvj+202,jvj+198)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2060); pile[WZ4]=jvj+196; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2060),jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=103; pile[WZ2]=jvj+197; 
(*f[54])( );     /*TRI1(jvj+196,103,jvj+197)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+198; pile[WZ4]=jvj+197; pile[WZ5]=jvj+163; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+198,jvj+197,jvj+163)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+114; pile[WZ4]=jvj+158; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+114,jvj+158)*/
pile[v[22]]=jvj+158; pile[WZ1]=114; pile[WZ2]=jvj+161; 
(*f[36])( );     /*PLUSC0(jvj+158,114,jvj+161)*/
pile[WZ2]=jvj+162; 
(*f[36])( );     /*PLUSC0(jvj+158,114,jvj+162)*/
pile[WZ2]=jvj+163; 
(*f[36])( );     /*PLUSC0(jvj+158,114,jvj+163)*/
goto l45;
l5:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]==21)) goto l50;
l6:x[jvj+12]=t[x[jvj+12]];
l4:if((x[jvj+12]>0)) goto l5;
pile[v[22]]=108; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(108,jvj+11,jvj+16)*/
l7:if((x[jvj+16]>0)) goto l8;
x[jvj+26]=0 ;z[jvj+26]=0;
pile[v[22]]=108; pile[WZ1]=jvj+11; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(108,jvj+11,jvj+20)*/
x[jvj+21]=d[27];z[jvj+21]=0;
l10:if((x[jvj+20]>0)) goto l11;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+120; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+120)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,X,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=jvj+122; 
(*f[255])( );     /*COPEXP0(jvj+121,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10490; pile[WZ4]=jvj+172; 
(*f[181])( );     /*QUADRI2(100,20,101,10490,jvj+172)*/
pile[v[22]]=jvj+26; pile[WZ1]=128; pile[WZ2]=jvj+271; 
(*f[300])( );     /*TRI10(jvj+26,128,jvj+271)*/
pile[v[22]]=jvj+271; pile[WZ2]=100; pile[WZ3]=jvj+270; 
(*f[58])( );     /*TRI3(jvj+271,128,100,jvj+270)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-612); pile[WZ4]=jvj+268; 
(*f[270])( );     /*QUADRI7(100,21,140,(-612),jvj+268)*/
pile[v[22]]=jvj+268; pile[WZ1]=103; pile[WZ2]=jvj+269; 
(*f[54])( );     /*TRI1(jvj+268,103,jvj+269)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+270; pile[WZ4]=jvj+269; pile[WZ5]=jvj+173; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+270,jvj+269,jvj+173)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2269); pile[WZ4]=jvj+272; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2269),jvj+272)*/
pile[v[22]]=jvj+272; pile[WZ1]=103; pile[WZ2]=jvj+273; 
(*f[54])( );     /*TRI1(jvj+272,103,jvj+273)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+120; pile[WZ4]=jvj+273; pile[WZ5]=jvj+174; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+120,jvj+273,jvj+174)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-697); pile[WZ4]=jvj+274; 
(*f[270])( );     /*QUADRI7(100,21,140,(-697),jvj+274)*/
pile[v[22]]=jvj+274; pile[WZ1]=103; pile[WZ2]=jvj+275; 
(*f[54])( );     /*TRI1(jvj+274,103,jvj+275)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+122; pile[WZ4]=jvj+275; pile[WZ5]=jvj+175; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+122,jvj+275,jvj+175)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+172; pile[WZ4]=jvj+100; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+172,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=114; pile[WZ2]=jvj+173; 
(*f[36])( );     /*PLUSC0(jvj+100,114,jvj+173)*/
pile[WZ2]=jvj+174; 
(*f[36])( );     /*PLUSC0(jvj+100,114,jvj+174)*/
pile[WZ2]=jvj+175; 
(*f[36])( );     /*PLUSC0(jvj+100,114,jvj+175)*/
goto l56;
l8:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=102; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+18,jvj+19)*/
V37=x[jvj+19];
if((V54=w[V37][1])==incon) goto l9;
if((V54==23)) goto l50;
l9:x[jvj+16]=t[x[jvj+16]];
goto l7;
l11:x[jvj+22]=s[x[jvj+20]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+20];
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+23,jvj+24)*/
x[jvj+203]=x[jvj+24] ;z[jvj+203]=z[jvj+24];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+203; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+203,jvj+25)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[196])( );     /*PLUF0(jvj+21,jvj+25,jvj+26)*/
l12:x[jvj+20]=t[x[jvj+20]];
goto l10;
l16:x[jvj+29]=t[x[jvj+29]];
l15:if((x[jvj+29]<=0)) goto l17;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+30,V123)*/
V123=pile[WZ2]; 
if((V123!=V104)) goto l16;
pile[v[22]]=158; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(158,jvj+30,jvj+31)*/
x[jvj+32]=x[jvj+31] ;z[jvj+32]=z[jvj+31];
l18:if((x[jvj+32]==(-99999998))) goto l58;
pile[v[22]]=140; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l58;     /*FNDC1(140,jvj+32,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=jvj+27; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V130; pile[WZ4]=jvj+164; 
(*f[270])( );     /*QUADRI7(100,21,140,V130,jvj+164)*/
pile[v[22]]=jvj+164; pile[WZ1]=103; pile[WZ2]=jvj+165; 
(*f[54])( );     /*TRI1(jvj+164,103,jvj+165)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+165; pile[WZ5]=jvj+108; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+33,jvj+165,jvj+108)*/
l43:pile[v[22]]=jvj+108; pile[WZ1]=jvj+109; 
(*f[255])( );     /*COPEXP0(jvj+108,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+102; pile[WZ4]=jvj+169; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+102,jvj+169)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+264; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+264)*/
pile[v[22]]=jvj+264; pile[WZ1]=103; pile[WZ2]=jvj+265; 
(*f[54])( );     /*TRI1(jvj+264,103,jvj+265)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+107; pile[WZ4]=jvj+265; pile[WZ5]=jvj+170; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+107,jvj+265,jvj+170)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-602); pile[WZ4]=jvj+266; 
(*f[270])( );     /*QUADRI7(100,21,140,(-602),jvj+266)*/
pile[v[22]]=jvj+266; pile[WZ1]=103; pile[WZ2]=jvj+267; 
(*f[54])( );     /*TRI1(jvj+266,103,jvj+267)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+105; pile[WZ4]=jvj+267; pile[WZ5]=jvj+171; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+105,jvj+267,jvj+171)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+169; pile[WZ4]=jvj+100; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+169,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=114; pile[WZ2]=jvj+170; 
(*f[36])( );     /*PLUSC0(jvj+100,114,jvj+170)*/
pile[WZ2]=jvj+171; 
(*f[36])( );     /*PLUSC0(jvj+100,114,jvj+171)*/
pile[WZ2]=jvj+109; 
(*f[36])( );     /*PLUSC0(jvj+100,114,jvj+109)*/
goto l56;
l17:if(x[jvj+32]==incon) goto l58;
goto l18;
l20:x[jvj+34]=t[x[jvj+34]];
l19:if((x[jvj+34]<=0)) goto l50;
x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=510; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(510,jvj+35,V140)*/
V140=pile[WZ2]; 
if((V140!=V133)) goto l20;
pile[v[22]]=218; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(218,jvj+35,jvj+132)*/
pile[v[22]]=132; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(132,jvj+35,jvj+133)*/
pile[v[22]]=297; pile[WZ1]=TL; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(297,TL,jvj+134)*/
pile[v[22]]=115; pile[WZ1]=jvj+35; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(115,jvj+35,jvj+135)*/
pile[v[22]]=147; pile[WZ1]=jvj+134; pile[WZ2]=jvj+136; 
(*f[33])( );     /*FNDE0(147,jvj+134,jvj+136)*/
pile[v[22]]=BB; pile[WZ1]=jvj+135; pile[WZ2]=jvj+137; 
(*f[1649])( );     /*USD2(BB,jvj+135,jvj+137)*/
pile[v[22]]=jvj+133; pile[WZ1]=jvj+137; pile[WZ2]=jvj+136; pile[WZ3]=jvj+138; 
(*f[1648])( );     /*USN0(jvj+133,jvj+137,jvj+136,jvj+138)*/
x[jvj+46]=0 ;z[jvj+46]=0;
x[jvj+286]=x[jvj+138] ;z[jvj+286]=z[jvj+138];
l26:if((x[jvj+286]>0)) goto l27;
x[jvj+38]=0 ;z[jvj+38]=0;
x[jvj+36]=d[7];z[jvj+36]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V133; pile[WZ4]=jvj+210; 
(*f[192])( );     /*QUADRI4(100,41,130,V133,jvj+210)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5251); pile[WZ4]=jvj+208; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5251),jvj+208)*/
pile[v[22]]=jvj+208; pile[WZ1]=103; pile[WZ2]=jvj+209; 
(*f[54])( );     /*TRI1(jvj+208,103,jvj+209)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+210; pile[WZ4]=jvj+209; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+210,jvj+209,jvj+37)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[196])( );     /*PLUF0(jvj+36,jvj+37,jvj+38)*/
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(583,TL,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+39; pile[WZ4]=jvj+213; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+39,jvj+213)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5249); pile[WZ4]=jvj+211; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5249),jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=103; pile[WZ2]=jvj+212; 
(*f[54])( );     /*TRI1(jvj+211,103,jvj+212)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+213; pile[WZ4]=jvj+212; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+213,jvj+212,jvj+40)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+40; pile[WZ2]=jvj+38; 
(*f[196])( );     /*PLUF0(jvj+36,jvj+40,jvj+38)*/
l21:pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,TL,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V158; pile[WZ4]=jvj+216; 
(*f[192])( );     /*QUADRI4(100,41,130,V158,jvj+216)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5250); pile[WZ4]=jvj+214; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5250),jvj+214)*/
pile[v[22]]=jvj+214; pile[WZ1]=103; pile[WZ2]=jvj+215; 
(*f[54])( );     /*TRI1(jvj+214,103,jvj+215)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+216; pile[WZ4]=jvj+215; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+216,jvj+215,jvj+41)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+41; pile[WZ2]=jvj+38; 
(*f[196])( );     /*PLUF0(jvj+36,jvj+41,jvj+38)*/
l22:if((x[jvj+138]>0)) goto l23;
pile[v[22]]=jvj+38; pile[WZ1]=jvj+139; 
(*f[299])( );     /*COPEL0(jvj+38,jvj+139)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10645; pile[WZ4]=jvj+179; 
(*f[181])( );     /*QUADRI2(100,20,101,10645,jvj+179)*/
pile[WZ3]=135; pile[WZ4]=jvj+278; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+278)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-609); pile[WZ4]=jvj+276; 
(*f[270])( );     /*QUADRI7(100,21,140,(-609),jvj+276)*/
pile[v[22]]=jvj+276; pile[WZ1]=103; pile[WZ2]=jvj+277; 
(*f[54])( );     /*TRI1(jvj+276,103,jvj+277)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+278; pile[WZ4]=jvj+277; pile[WZ5]=jvj+177; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+278,jvj+277,jvj+177)*/
pile[v[22]]=jvj+139; pile[WZ1]=114; pile[WZ2]=jvj+176; 
(*f[300])( );     /*TRI10(jvj+139,114,jvj+176)*/
pile[v[22]]=jvj+177; pile[WZ1]=(-20); pile[WZ3]=113; pile[WZ4]=jvj+178; 
(*f[298])( );     /*TRIENS1(jvj+177,(-20),jvj+176,113,jvj+178)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+179; pile[WZ5]=jvj+100; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+179,jvj+178,jvj+100)*/
pile[v[22]]=jvj+132; pile[WZ1]=273; pile[WZ2]=jvj+46; 
(*f[34])( );     /*CHGC0(jvj+132,273,jvj+46)*/
goto l56;
l23:x[jvj+42]=s[x[jvj+138]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+138];
pile[v[22]]=163; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(163,jvj+42,V153)*/
V153=pile[WZ2]; 
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(110,jvj+42,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V153; pile[WZ4]=jvj+219; 
(*f[270])( );     /*QUADRI7(100,96,163,V153,jvj+219)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V154; pile[WZ4]=jvj+217; 
(*f[270])( );     /*QUADRI7(100,21,140,V154,jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=103; pile[WZ2]=jvj+218; 
(*f[54])( );     /*TRI1(jvj+217,103,jvj+218)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+219; pile[WZ4]=jvj+218; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+219,jvj+218,jvj+43)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+43; pile[WZ2]=jvj+38; 
(*f[196])( );     /*PLUF0(jvj+36,jvj+43,jvj+38)*/
l25:pile[v[22]]=140; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,jvj+42,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V153; pile[WZ4]=jvj+222; 
(*f[270])( );     /*QUADRI7(100,21,140,V153,jvj+222)*/
pile[WZ3]=V156; pile[WZ4]=jvj+220; 
(*f[270])( );     /*QUADRI7(100,21,140,V156,jvj+220)*/
pile[v[22]]=jvj+220; pile[WZ1]=103; pile[WZ2]=jvj+221; 
(*f[54])( );     /*TRI1(jvj+220,103,jvj+221)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+222; pile[WZ4]=jvj+221; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+222,jvj+221,jvj+44)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+44; pile[WZ2]=jvj+38; 
(*f[196])( );     /*PLUF0(jvj+36,jvj+44,jvj+38)*/
l24:x[jvj+138]=t[x[jvj+138]];
goto l22;
l27:x[jvj+45]=s[x[jvj+286]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+286];
pile[v[22]]=163; pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(163,jvj+45,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=jvj+46; pile[WZ1]=V160; 
(*f[331])( );     /*PLUE3(jvj+46,V160)*/
l28:x[jvj+286]=t[x[jvj+286]];
goto l26;
l35:x[jvj+82]=t[x[jvj+82]];
l34:if((x[jvj+82]<=0)) goto l37;
x[jvj+47]=s[x[jvj+82]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+82];
x[jvj+51]=0 ;z[jvj+51]=0;
pile[v[22]]=158; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(158,jvj+47,jvj+48)*/
x[jvj+49]=d[7];z[jvj+49]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+48; pile[WZ4]=jvj+225; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+48,jvj+225)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+223; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+223)*/
pile[v[22]]=jvj+223; pile[WZ1]=103; pile[WZ2]=jvj+224; 
(*f[54])( );     /*TRI1(jvj+223,103,jvj+224)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+225; pile[WZ4]=jvj+224; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+225,jvj+224,jvj+50)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[196])( );     /*PLUF0(jvj+49,jvj+50,jvj+51)*/
pile[v[22]]=140; pile[WZ1]=jvj+48; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+48,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V164; pile[WZ4]=jvj+228; 
(*f[270])( );     /*QUADRI7(100,21,140,V164,jvj+228)*/
pile[WZ3]=V214; pile[WZ4]=jvj+226; 
(*f[270])( );     /*QUADRI7(100,21,140,V214,jvj+226)*/
pile[v[22]]=jvj+226; pile[WZ1]=103; pile[WZ2]=jvj+227; 
(*f[54])( );     /*TRI1(jvj+226,103,jvj+227)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+228; pile[WZ4]=jvj+227; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+228,jvj+227,jvj+52)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+52; pile[WZ2]=jvj+51; 
(*f[196])( );     /*PLUF0(jvj+49,jvj+52,jvj+51)*/
l36:pile[v[22]]=140; pile[WZ1]=jvj+47; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+47,V209)*/
V209=pile[WZ2]; 
if((V209!=V164)) goto l35;
pile[v[22]]=jvj+51; pile[WZ1]=jvj+83; 
(*f[299])( );     /*COPEL0(jvj+51,jvj+83)*/
x[jvj+287]=x[jvj+83] ;z[jvj+287]=z[jvj+83];
l40:if((x[jvj+287]>0)) goto l41;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10016; pile[WZ4]=jvj+183; 
(*f[181])( );     /*QUADRI2(100,20,101,10016,jvj+183)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V204; pile[WZ4]=jvj+281; 
(*f[270])( );     /*QUADRI7(100,21,140,V204,jvj+281)*/
pile[WZ3]=(-2274); pile[WZ4]=jvj+279; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2274),jvj+279)*/
pile[v[22]]=jvj+279; pile[WZ1]=103; pile[WZ2]=jvj+280; 
(*f[54])( );     /*TRI1(jvj+279,103,jvj+280)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+281; pile[WZ4]=jvj+280; pile[WZ5]=jvj+181; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+281,jvj+280,jvj+181)*/
pile[v[22]]=jvj+92; pile[WZ1]=114; pile[WZ2]=jvj+180; 
(*f[300])( );     /*TRI10(jvj+92,114,jvj+180)*/
pile[v[22]]=jvj+181; pile[WZ1]=(-20); pile[WZ3]=113; pile[WZ4]=jvj+182; 
(*f[298])( );     /*TRIENS1(jvj+181,(-20),jvj+180,113,jvj+182)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+183; pile[WZ5]=jvj+100; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+183,jvj+182,jvj+100)*/
goto l56;
l37:if(x[jvj+287]==incon) goto l38;
goto l40;
l38:x[jvj+287]=x[jvj+89] ;z[jvj+287]=z[jvj+89];
goto l40;
l41:x[jvj+90]=s[x[jvj+287]] ;z[jvj+90]=(x[jvj+90]<=sepcte) ? x[jvj+90] : z[jvj+287];
pile[v[22]]=jvj+90; pile[WZ1]=jvj+91; 
(*f[255])( );     /*COPEXP0(jvj+90,jvj+91)*/
pile[v[22]]=jvj+92; 
(*f[68])( );     /*PLUE0(jvj+92,jvj+91)*/
x[jvj+287]=t[x[jvj+287]];
goto l40;
l42:if(x[jvj+94]!=36&&x[jvj+94]!=38&&x[jvj+94]!=84&&x[jvj+94]!=364&&x[jvj+94]!=915&&x[jvj+94]!=1372&&x[jvj+94]!=1568) goto l44;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,X,jvj+101)*/
if((x[jvj+101]!=73)) goto l44;
pile[v[22]]=109; pile[WZ1]=jvj+94; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(109,jvj+94,jvj+102)*/
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(160,X,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+103; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+103)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=jvj+105; 
(*f[255])( );     /*COPEXP0(jvj+104,jvj+105)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=jvj+107; 
(*f[255])( );     /*COPEXP0(jvj+106,jvj+107)*/
x[jvj+108]=incon;
x[jvj+32]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=69)) goto l13;
x[jvj+32]=20 ;z[jvj+32]=20;
l13:if(x[jvj+28]!=96&&x[jvj+28]!=89&&x[jvj+28]!=41&&x[jvj+28]!=20&&x[jvj+28]!=128&&x[jvj+28]!=570&&x[jvj+28]!=1317) goto l14;
x[jvj+32]=x[jvj+28] ;z[jvj+32]=z[jvj+28];
l14:pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+27,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(283,TL,jvj+29)*/
goto l15;
l44:if(x[jvj+94]!=430&&x[jvj+94]!=732) goto l46;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,X,jvj+110)*/
if((x[jvj+110]!=73)) goto l46;
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(103,X,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(140,jvj+9,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=jvj+111; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+111)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,X,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+112; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+112)*/
pile[v[22]]=109; pile[WZ1]=jvj+94; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(109,jvj+94,jvj+113)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+113; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+113,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+114; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+114)*/
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(283,TL,jvj+2)*/
goto l1;
l46:if(x[jvj+94]!=33&&x[jvj+94]!=853&&x[jvj+94]!=1479) goto l47;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,X,jvj+115)*/
if((x[jvj+115]!=73)) goto l47;
pile[v[22]]=120; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(120,X,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+117; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+117)*/
pile[v[22]]=jvj+116; pile[WZ1]=jvj+117; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=BT; pile[WZ5]=250; pile[v[22]+6]=jvj+94; 
(*f[1645])( );     /*DMR0(jvj+116,jvj+117,X,R,BT,250,jvj+94)*/
goto l57;
l47:if((x[jvj+94]==430)) goto l48;
if((x[jvj+94]==82)) goto l49;
if((x[jvj+94]!=725)) goto l50;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,X,jvj+131)*/
pile[v[22]]=130; pile[WZ1]=jvj+131; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(130,jvj+131,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=724; pile[WZ1]=TL; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(724,TL,jvj+34)*/
goto l19;
l48:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,X,jvj+118)*/
if((x[jvj+118]!=73)) goto l50;
pile[v[22]]=103; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,X,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+11,jvj+119)*/
if((x[jvj+119]!=69)) goto l50;
pile[v[22]]=108; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(108,jvj+11,jvj+12)*/
goto l4;
l49:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,X,jvj+123)*/
pile[v[22]]=111; pile[WZ1]=jvj+123; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+123,jvj+124)*/
pile[v[22]]=101; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+124,jvj+125)*/
if((x[jvj+125]!=224)) goto l50;
pile[v[22]]=103; pile[WZ1]=jvj+123; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,jvj+123,jvj+126)*/
pile[v[22]]=102; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+123,jvj+127)*/
pile[v[22]]=jvj+127; pile[WZ1]=jvj+128; 
(*f[378])( );     /*CPI0(jvj+127,jvj+128)*/
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(436,X,jvj+129)*/
pile[v[22]]=jvj+129; pile[WZ1]=jvj+130; 
(*f[378])( );     /*CPI0(jvj+129,jvj+130)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+128; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=BT; pile[WZ5]=jvj+130; pile[v[22]+6]=224; 
(*f[1645])( );     /*DMR0(jvj+126,jvj+128,X,R,BT,jvj+130,224)*/
goto l57;
l50:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,X,jvj+140)*/
if((x[jvj+140]!=435)) goto l51;
pile[v[22]]=102; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,X,jvj+141)*/
pile[v[22]]=111; pile[WZ1]=jvj+141; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+141,jvj+142)*/
pile[v[22]]=101; pile[WZ1]=jvj+142; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+142,jvj+143)*/
if((x[jvj+143]!=623)) goto l51;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(436,X,jvj+144)*/
pile[v[22]]=140; pile[WZ1]=jvj+144; 
(*f[44])( );if(v[102]) goto l51;     /*FNDC1(140,jvj+144,V204)*/
V204=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+141; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,jvj+141,jvj+73)*/
x[jvj+92]=0 ;z[jvj+92]=0;
pile[v[22]]=jvj+73; pile[WZ1]=jvj+88; 
(*f[255])( );     /*COPEXP0(jvj+73,jvj+88)*/
x[jvj+86]=0 ;z[jvj+86]=0;
x[jvj+84]=d[7];z[jvj+84]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=20; pile[WZ4]=jvj+261; 
(*f[181])( );     /*QUADRI2(100,20,101,20,jvj+261)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+259; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+259)*/
pile[v[22]]=jvj+259; pile[WZ1]=103; pile[WZ2]=jvj+260; 
(*f[54])( );     /*TRI1(jvj+259,103,jvj+260)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+261; pile[WZ4]=jvj+260; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+261,jvj+260,jvj+85)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[196])( );     /*PLUF0(jvj+84,jvj+85,jvj+86)*/
pile[v[22]]=140; pile[WZ1]=20; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(140,20,V232)*/
V232=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V232; pile[WZ4]=jvj+262; 
(*f[270])( );     /*QUADRI7(100,21,140,V232,jvj+262)*/
pile[v[22]]=jvj+262; pile[WZ1]=103; pile[WZ2]=jvj+263; 
(*f[54])( );     /*TRI1(jvj+262,103,jvj+263)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+88; pile[WZ4]=jvj+263; pile[WZ5]=jvj+87; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+88,jvj+263,jvj+87)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+87; pile[WZ2]=jvj+86; 
(*f[196])( );     /*PLUF0(jvj+84,jvj+87,jvj+86)*/
l39:pile[v[22]]=jvj+86; pile[WZ1]=jvj+89; 
(*f[299])( );     /*COPEL0(jvj+86,jvj+89)*/
x[jvj+287]=incon;
pile[v[22]]=101; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+73,jvj+74)*/
x[jvj+55]=0 ;z[jvj+55]=0;
x[jvj+53]=d[7];z[jvj+53]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=20; pile[WZ4]=jvj+231; 
(*f[181])( );     /*QUADRI2(100,20,101,20,jvj+231)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+229; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+229)*/
pile[v[22]]=jvj+229; pile[WZ1]=103; pile[WZ2]=jvj+230; 
(*f[54])( );     /*TRI1(jvj+229,103,jvj+230)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+231; pile[WZ4]=jvj+230; pile[WZ5]=jvj+54; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+231,jvj+230,jvj+54)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[196])( );     /*PLUF0(jvj+53,jvj+54,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+74; pile[WZ4]=jvj+234; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+74,jvj+234)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2269); pile[WZ4]=jvj+232; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2269),jvj+232)*/
pile[v[22]]=jvj+232; pile[WZ1]=103; pile[WZ2]=jvj+233; 
(*f[54])( );     /*TRI1(jvj+232,103,jvj+233)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+234; pile[WZ4]=jvj+233; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+234,jvj+233,jvj+56)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+56; pile[WZ2]=jvj+55; 
(*f[196])( );     /*PLUF0(jvj+53,jvj+56,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+75; 
(*f[299])( );     /*COPEL0(jvj+55,jvj+75)*/
x[jvj+287]=x[jvj+75] ;z[jvj+287]=z[jvj+75];
l29:pile[v[22]]=130; pile[WZ1]=jvj+73; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(130,jvj+73,I)*/
I=pile[WZ2]; 
x[jvj+59]=0 ;z[jvj+59]=0;
x[jvj+57]=d[7];z[jvj+57]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=41; pile[WZ4]=jvj+237; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+237)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+235; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+235)*/
pile[v[22]]=jvj+235; pile[WZ1]=103; pile[WZ2]=jvj+236; 
(*f[54])( );     /*TRI1(jvj+235,103,jvj+236)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+237; pile[WZ4]=jvj+236; pile[WZ5]=jvj+58; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+237,jvj+236,jvj+58)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[196])( );     /*PLUF0(jvj+57,jvj+58,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+240; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+240)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2060); pile[WZ4]=jvj+238; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2060),jvj+238)*/
pile[v[22]]=jvj+238; pile[WZ1]=103; pile[WZ2]=jvj+239; 
(*f[54])( );     /*TRI1(jvj+238,103,jvj+239)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+240; pile[WZ4]=jvj+239; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+240,jvj+239,jvj+60)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+60; pile[WZ2]=jvj+59; 
(*f[196])( );     /*PLUF0(jvj+57,jvj+60,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+76; 
(*f[299])( );     /*COPEL0(jvj+59,jvj+76)*/
x[jvj+287]=x[jvj+76] ;z[jvj+287]=z[jvj+76];
l30:pile[v[22]]=162; pile[WZ1]=jvj+73; 
(*f[219])( );if(v[102]) goto l31;     /*FNDC2(162,jvj+73,C)*/
C=pile[WZ2]; 
x[jvj+63]=0 ;z[jvj+63]=0;
x[jvj+61]=d[7];z[jvj+61]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=89; pile[WZ4]=jvj+243; 
(*f[181])( );     /*QUADRI2(100,20,101,89,jvj+243)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+241; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+241)*/
pile[v[22]]=jvj+241; pile[WZ1]=103; pile[WZ2]=jvj+242; 
(*f[54])( );     /*TRI1(jvj+241,103,jvj+242)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+243; pile[WZ4]=jvj+242; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+243,jvj+242,jvj+62)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[196])( );     /*PLUF0(jvj+61,jvj+62,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=C; pile[WZ4]=jvj+246; 
(*f[272])( );     /*QUADRI9(100,89,162,C,jvj+246)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2059); pile[WZ4]=jvj+244; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2059),jvj+244)*/
pile[v[22]]=jvj+244; pile[WZ1]=103; pile[WZ2]=jvj+245; 
(*f[54])( );     /*TRI1(jvj+244,103,jvj+245)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+246; pile[WZ4]=jvj+245; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+246,jvj+245,jvj+64)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+64; pile[WZ2]=jvj+63; 
(*f[196])( );     /*PLUF0(jvj+61,jvj+64,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+77; 
(*f[299])( );     /*COPEL0(jvj+63,jvj+77)*/
x[jvj+287]=x[jvj+77] ;z[jvj+287]=z[jvj+77];
l31:pile[v[22]]=163; pile[WZ1]=jvj+73; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(163,jvj+73,S)*/
S=pile[WZ2]; 
x[jvj+67]=0 ;z[jvj+67]=0;
x[jvj+65]=d[7];z[jvj+65]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=96; pile[WZ4]=jvj+249; 
(*f[181])( );     /*QUADRI2(100,20,101,96,jvj+249)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+247; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+247)*/
pile[v[22]]=jvj+247; pile[WZ1]=103; pile[WZ2]=jvj+248; 
(*f[54])( );     /*TRI1(jvj+247,103,jvj+248)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+249; pile[WZ4]=jvj+248; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+249,jvj+248,jvj+66)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[196])( );     /*PLUF0(jvj+65,jvj+66,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=S; pile[WZ4]=jvj+252; 
(*f[270])( );     /*QUADRI7(100,96,163,S,jvj+252)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-700); pile[WZ4]=jvj+250; 
(*f[270])( );     /*QUADRI7(100,21,140,(-700),jvj+250)*/
pile[v[22]]=jvj+250; pile[WZ1]=103; pile[WZ2]=jvj+251; 
(*f[54])( );     /*TRI1(jvj+250,103,jvj+251)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+252; pile[WZ4]=jvj+251; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+252,jvj+251,jvj+68)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+68; pile[WZ2]=jvj+67; 
(*f[196])( );     /*PLUF0(jvj+65,jvj+68,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+78; 
(*f[299])( );     /*COPEL0(jvj+67,jvj+78)*/
x[jvj+287]=x[jvj+78] ;z[jvj+287]=z[jvj+78];
l32:pile[v[22]]=100; pile[WZ1]=jvj+73; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+73,jvj+79)*/
if((x[jvj+79]!=1317)) goto l33;
pile[v[22]]=jvj+73; pile[WZ1]=1352; pile[WZ3]=jvj+80; 
(*f[45])( );if(v[102]) goto l33;     /*FNDZ0(jvj+73,1352,V265,jvj+80)*/
V265=pile[WZ2]; 
x[jvj+71]=0 ;z[jvj+71]=0;
x[jvj+69]=d[7];z[jvj+69]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1317; pile[WZ4]=jvj+255; 
(*f[181])( );     /*QUADRI2(100,20,101,1317,jvj+255)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+253; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+253)*/
pile[v[22]]=jvj+253; pile[WZ1]=103; pile[WZ2]=jvj+254; 
(*f[54])( );     /*TRI1(jvj+253,103,jvj+254)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+255; pile[WZ4]=jvj+254; pile[WZ5]=jvj+70; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+255,jvj+254,jvj+70)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[196])( );     /*PLUF0(jvj+69,jvj+70,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=1427; pile[WZ2]=1352; pile[WZ3]=V265; pile[WZ4]=jvj+258; 
(*f[271])( );     /*QUADRI8(100,1427,1352,V265,jvj+258)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1496); pile[WZ4]=jvj+256; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1496),jvj+256)*/
pile[v[22]]=jvj+256; pile[WZ1]=103; pile[WZ2]=jvj+257; 
(*f[54])( );     /*TRI1(jvj+256,103,jvj+257)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+258; pile[WZ4]=jvj+257; pile[WZ5]=jvj+72; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+258,jvj+257,jvj+72)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+72; pile[WZ2]=jvj+71; 
(*f[196])( );     /*PLUF0(jvj+69,jvj+72,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+81; 
(*f[299])( );     /*COPEL0(jvj+71,jvj+81)*/
x[jvj+287]=x[jvj+81] ;z[jvj+287]=z[jvj+81];
l33:pile[v[22]]=140; pile[WZ1]=jvj+73; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(140,jvj+73,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+82; 
(*f[33])( );     /*FNDE0(283,TL,jvj+82)*/
goto l34;
l51:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(100,X,jvj+145)*/
if((x[jvj+145]!=73)) goto l53;
pile[v[22]]=111; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(111,X,jvj+146)*/
pile[v[22]]=101; pile[WZ1]=jvj+146; pile[WZ2]=jvj+147; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(101,jvj+146,jvj+147)*/
if(x[jvj+147]!=430&&x[jvj+147]!=732&&x[jvj+147]!=564&&x[jvj+147]!=841) goto l53;
pile[v[22]]=109; pile[WZ1]=jvj+147; pile[WZ2]=jvj+148; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(109,jvj+147,jvj+148)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,X,jvj+149)*/
pile[v[22]]=jvj+149; pile[WZ1]=jvj+150; 
(*f[1646])( );if(v[102]) goto l53;     /*QTYPE0(jvj+149,jvj+150)*/
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l53;     /*FNDC1(140,jvj+150,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=jvj+149; pile[WZ1]=jvj+151; 
(*f[255])( );     /*COPEXP0(jvj+149,jvj+151)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(102,X,jvj+152)*/
pile[v[22]]=jvj+152; pile[WZ1]=jvj+153; 
(*f[255])( );     /*COPEXP0(jvj+152,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+148; pile[WZ4]=jvj+184; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+148,jvj+184)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-697); pile[WZ4]=jvj+282; 
(*f[270])( );     /*QUADRI7(100,21,140,(-697),jvj+282)*/
pile[v[22]]=jvj+282; pile[WZ1]=103; pile[WZ2]=jvj+283; 
(*f[54])( );     /*TRI1(jvj+282,103,jvj+283)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+153; pile[WZ4]=jvj+283; pile[WZ5]=jvj+185; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+153,jvj+283,jvj+185)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V87; pile[WZ4]=jvj+284; 
(*f[270])( );     /*QUADRI7(100,21,140,V87,jvj+284)*/
pile[v[22]]=jvj+284; pile[WZ1]=103; pile[WZ2]=jvj+285; 
(*f[54])( );     /*TRI1(jvj+284,103,jvj+285)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+151; pile[WZ4]=jvj+285; pile[WZ5]=jvj+186; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+151,jvj+285,jvj+186)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+184; pile[WZ4]=jvj+100; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+184,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=114; pile[WZ2]=jvj+185; 
(*f[36])( );     /*PLUSC0(jvj+100,114,jvj+185)*/
pile[WZ2]=jvj+186; 
(*f[36])( );     /*PLUSC0(jvj+100,114,jvj+186)*/
goto l56;
l53:x[jvj+154]=d[107];z[jvj+154]=0;
l52:if((x[jvj+154]<=0)) goto l57;
x[jvj+155]=s[x[jvj+154]] ;z[jvj+155]=(x[jvj+155]<=sepcte) ? x[jvj+155] : z[jvj+154];
pile[v[22]]=jvj+155; pile[WZ1]=X; pile[WZ2]=jvj+156; 
(*f[33])( );     /*FNDE0(jvj+155,X,jvj+156)*/
x[jvj+288]=x[jvj+156] ;z[jvj+288]=z[jvj+156];
l54:if((x[jvj+288]>0)) goto l55;
x[jvj+154]=t[x[jvj+154]];
goto l52;
l55:x[jvj+157]=s[x[jvj+288]] ;z[jvj+157]=(x[jvj+157]<=sepcte) ? x[jvj+157] : z[jvj+288];
pile[v[22]]=jvj+157; pile[WZ1]=X; pile[WZ2]=TL; pile[WZ3]=jvj+155; pile[WZ4]=BB; 
(*f[1426])( );     /*DMP0(jvj+157,X,TL,jvj+155,BB)*/
x[jvj+288]=t[x[jvj+288]];
goto l54;
l58:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+204; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+204)*/
pile[WZ3]=41; pile[WZ4]=jvj+206; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+206)*/
pile[v[22]]=jvj+204; pile[WZ1]=111; pile[WZ2]=jvj+205; 
(*f[54])( );     /*TRI1(jvj+204,111,jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=jvj+206; pile[WZ2]=103; pile[WZ3]=jvj+207; 
(*f[58])( );     /*TRI3(jvj+205,jvj+206,103,jvj+207)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+103; pile[WZ4]=jvj+207; pile[WZ5]=jvj+168; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+103,jvj+207,jvj+168)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2060); pile[WZ4]=jvj+166; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2060),jvj+166)*/
pile[v[22]]=jvj+166; pile[WZ1]=103; pile[WZ2]=jvj+167; 
(*f[54])( );     /*TRI1(jvj+166,103,jvj+167)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+168; pile[WZ4]=jvj+167; pile[WZ5]=jvj+108; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+168,jvj+167,jvj+108)*/
goto l43;
}
