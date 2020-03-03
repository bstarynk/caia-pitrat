#include "dx.h"
void COPWW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V36=0,V144=0,V93=0,V117=0,V103=0,V56=0,V38=0,VV=0,V141=0,V119=0,V122=0,V71=0,V59=0,W=0,V=0,T=0,V408=0,V409=0;
int R,Y,BT,RM;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=341;
x[jvj+1]=10206;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2154&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; Y=pile[v[22]+1]; BT=pile[v[22]+2]; RM=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,Y,jvj+51)*/
pile[v[22]]=101; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+51,jvj+52)*/
if((x[jvj+52]==425)) goto l22;
if((x[jvj+52]!=638)) goto l24;
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,Y,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[255])( );     /*COPEXP0(jvj+56,jvj+57)*/
(*f[1817])( );     /*NOUV2(V93)*/
V93=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V93; pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(100,21,140,V93,jvj+58)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=54; pile[WZ4]=jvj+181; 
(*f[181])( );     /*QUADRI2(100,20,101,54,jvj+181)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V93; pile[WZ4]=jvj+179; 
(*f[270])( );     /*QUADRI7(100,21,140,V93,jvj+179)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+184; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+184)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V93; pile[WZ4]=jvj+188; 
(*f[270])( );     /*QUADRI7(100,21,140,V93,jvj+188)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=128; pile[WZ4]=jvj+191; 
(*f[181])( );     /*QUADRI2(100,20,101,128,jvj+191)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+189; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+189)*/
pile[v[22]]=jvj+189; pile[WZ1]=103; pile[WZ2]=jvj+190; 
(*f[54])( );     /*TRI1(jvj+189,103,jvj+190)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+191; pile[WZ4]=jvj+190; pile[WZ5]=jvj+186; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+191,jvj+190,jvj+186)*/
pile[v[22]]=jvj+184; pile[WZ1]=111; pile[WZ2]=jvj+185; 
(*f[54])( );     /*TRI1(jvj+184,111,jvj+185)*/
pile[v[22]]=jvj+185; pile[WZ1]=jvj+186; pile[WZ2]=103; pile[WZ3]=jvj+187; 
(*f[58])( );     /*TRI3(jvj+185,jvj+186,103,jvj+187)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+188; pile[WZ4]=jvj+187; pile[WZ5]=jvj+182; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+188,jvj+187,jvj+182)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+192; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+192)*/
pile[WZ3]=140; pile[WZ4]=jvj+198; 
(*f[181])( );     /*QUADRI2(100,20,101,140,jvj+198)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V93; pile[WZ4]=jvj+196; 
(*f[270])( );     /*QUADRI7(100,21,140,V93,jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=103; pile[WZ2]=jvj+197; 
(*f[54])( );     /*TRI1(jvj+196,103,jvj+197)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+198; pile[WZ4]=jvj+197; pile[WZ5]=jvj+195; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+198,jvj+197,jvj+195)*/
pile[v[22]]=jvj+192; pile[WZ1]=111; pile[WZ2]=jvj+193; 
(*f[54])( );     /*TRI1(jvj+192,111,jvj+193)*/
pile[v[22]]=jvj+193; pile[WZ1]=jvj+57; pile[WZ2]=103; pile[WZ3]=jvj+194; 
(*f[58])( );     /*TRI3(jvj+193,jvj+57,103,jvj+194)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+195; pile[WZ4]=jvj+194; pile[WZ5]=jvj+183; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+195,jvj+194,jvj+183)*/
pile[v[22]]=jvj+179; pile[WZ1]=436; pile[WZ2]=jvj+180; 
(*f[54])( );     /*TRI1(jvj+179,436,jvj+180)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+181; pile[WZ4]=jvj+180; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,111,jvj+181,jvj+180,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=107; pile[WZ2]=jvj+182; 
(*f[36])( );     /*PLUSC0(jvj+59,107,jvj+182)*/
pile[WZ2]=jvj+183; 
(*f[36])( );     /*PLUSC0(jvj+59,107,jvj+183)*/
pile[v[22]]=RM; pile[WZ2]=RM; pile[WZ3]=jvj+59; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+59)*/
l23:x[RES]=67 ;z[RES]=67;
l38:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+340]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+340];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=646)) goto l3;
x[jvj+15]=x[jvj+2] ;z[jvj+15]=z[jvj+2];
l36:x[RES]=67 ;z[RES]=67;
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+132; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+132)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=239; pile[WZ4]=jvj+331; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+331)*/
pile[WZ3]=255; pile[WZ4]=jvj+337; 
(*f[181])( );     /*QUADRI2(100,20,101,255,jvj+337)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+335; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+335)*/
pile[v[22]]=jvj+335; pile[WZ1]=(-20); pile[WZ2]=128; pile[WZ3]=jvj+336; 
(*f[180])( );     /*TRIENS0(jvj+335,(-20),128,jvj+336)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+337; pile[WZ4]=jvj+336; pile[WZ5]=jvj+333; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+337,jvj+336,jvj+333)*/
pile[v[22]]=jvj+331; pile[WZ1]=337; pile[WZ2]=jvj+332; 
(*f[54])( );     /*TRI1(jvj+331,337,jvj+332)*/
pile[v[22]]=jvj+333; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+334; 
(*f[298])( );     /*TRIENS1(jvj+333,(-20),jvj+332,105,jvj+334)*/
pile[v[22]]=jvj+334; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+134; 
(*f[58])( );     /*TRI3(jvj+334,42,100,jvj+134)*/
pile[v[22]]=jvj+132; pile[WZ1]=436; pile[WZ2]=jvj+133; 
(*f[54])( );     /*TRI1(jvj+132,436,jvj+133)*/
pile[v[22]]=jvj+134; pile[WZ1]=(-20); pile[WZ3]=184; pile[WZ4]=jvj+135; 
(*f[298])( );     /*TRIENS1(jvj+134,(-20),jvj+133,184,jvj+135)*/
pile[v[22]]=jvj+135; pile[WZ1]=47; pile[WZ2]=100; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+135,47,100,jvj+11)*/
if((x[jvj+15]==134)) goto l41;
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+15,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+157; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+157)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+159; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+159)*/
pile[v[22]]=jvj+157; pile[WZ1]=111; pile[WZ2]=jvj+158; 
(*f[54])( );     /*TRI1(jvj+157,111,jvj+158)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+159; pile[WZ4]=jvj+158; pile[WZ5]=jvj+153; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+159,jvj+158,jvj+153)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+162; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+162)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+160; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+160)*/
pile[v[22]]=jvj+160; pile[WZ1]=436; pile[WZ2]=jvj+161; 
(*f[54])( );     /*TRI1(jvj+160,436,jvj+161)*/
pile[v[22]]=jvj+161; pile[WZ1]=jvj+162; pile[WZ2]=111; pile[WZ3]=jvj+163; 
(*f[58])( );     /*TRI3(jvj+161,jvj+162,111,jvj+163)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+163; pile[WZ5]=jvj+155; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+17,jvj+163,jvj+155)*/
pile[v[22]]=jvj+153; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+154; 
(*f[180])( );     /*TRIENS0(jvj+153,(-20),107,jvj+154)*/
pile[v[22]]=jvj+155; pile[WZ2]=jvj+154; pile[WZ3]=105; pile[WZ4]=jvj+156; 
(*f[298])( );     /*TRIENS1(jvj+155,(-20),jvj+154,105,jvj+156)*/
pile[v[22]]=jvj+156; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+156,42,100,jvj+18)*/
pile[v[22]]=jvj+11; pile[WZ1]=184; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+11,184,jvj+18)*/
l8:if((x[jvj+104]>0)) goto l9;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+105; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+105)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+105)*/
pile[WZ1]=107; pile[WZ2]=jvj+13; pile[WZ3]=jvj+11; 
(*f[1819])( );     /*COPV1(RM,107,jvj+13,jvj+11)*/
goto l38;
l3:x[jvj+340]=t[x[jvj+340]];
l1:if((x[jvj+340]>0)) goto l2;
x[jvj+15]=134 ;z[jvj+15]=134;
goto l36;
l4:x[jvj+13]=incon;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,R,jvj+4)*/
if((x[jvj+4]!=22)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,R,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+5,jvj+6)*/
pile[v[22]]=155; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(155,jvj+6,jvj+7)*/
if((x[jvj+7]!=68)) goto l5;
x[jvj+13]=x[R] ;z[jvj+13]=z[R];
l35:pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+104; 
(*f[33])( );     /*FNDE0(107,Y,jvj+104)*/
x[jvj+15]=incon;
x[jvj+340]=x[jvj+104] ;z[jvj+340]=z[jvj+104];
goto l1;
l5:x[jvj+13]=x[RM] ;z[jvj+13]=z[RM];
goto l35;
l7:x[jvj+8]=s[x[jvj+341]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+341];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+9)*/
x[jvj+341]=t[x[jvj+341]];
l6:if((x[jvj+341]>0)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+19,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+23)*/
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=V36; 
(*f[134])( );     /*OTA0(107,Y,V36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+169; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+169)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+167; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+167)*/
pile[v[22]]=jvj+167; pile[WZ1]=436; pile[WZ2]=jvj+168; 
(*f[54])( );     /*TRI1(jvj+167,436,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=jvj+169; pile[WZ2]=111; pile[WZ3]=jvj+170; 
(*f[58])( );     /*TRI3(jvj+168,jvj+169,111,jvj+170)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+170; pile[WZ5]=jvj+165; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+23,jvj+170,jvj+165)*/
pile[v[22]]=jvj+10; pile[WZ1]=107; pile[WZ2]=jvj+164; 
(*f[300])( );     /*TRI10(jvj+10,107,jvj+164)*/
pile[v[22]]=jvj+165; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+166; 
(*f[298])( );     /*TRIENS1(jvj+165,(-20),jvj+164,105,jvj+166)*/
pile[v[22]]=jvj+166; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+166,42,100,jvj+24)*/
pile[v[22]]=jvj+11; pile[WZ1]=184; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+11,184,jvj+24)*/
l10:x[jvj+104]=t[x[jvj+104]];
goto l8;
l9:x[jvj+19]=s[x[jvj+104]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+104];
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=452)) goto l10;
V36=x[jvj+19];
pile[v[22]]=107; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+21)*/
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+341]=x[jvj+21] ;z[jvj+341]=z[jvj+21];
goto l6;
l11:x[jvj+84]=x[RM] ;z[jvj+84]=z[RM];
l29:pile[v[22]]=145; pile[WZ1]=jvj+52; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(145,jvj+52,jvj+77)*/
(*f[1817])( );     /*NOUV2(V38)*/
V38=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(VV)*/
VV=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V38; pile[WZ4]=jvj+119; 
(*f[270])( );     /*QUADRI7(100,21,140,V38,jvj+119)*/
pile[WZ1]=47; pile[WZ2]=436; pile[WZ3]=jvj+119; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,47,436,jvj+119,jvj+81)*/
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,Y,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+79; 
(*f[255])( );     /*COPEXP0(jvj+78,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=117; pile[WZ4]=jvj+232; 
(*f[181])( );     /*QUADRI2(100,20,101,117,jvj+232)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+230; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+230)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+77; pile[WZ4]=jvj+228; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+77,jvj+228)*/
pile[v[22]]=jvj+79; pile[WZ1]=160; pile[WZ2]=jvj+227; 
(*f[54])( );     /*TRI1(jvj+79,160,jvj+227)*/
pile[v[22]]=jvj+227; pile[WZ1]=jvj+228; pile[WZ2]=111; pile[WZ3]=jvj+229; 
(*f[58])( );     /*TRI3(jvj+227,jvj+228,111,jvj+229)*/
pile[v[22]]=jvj+229; pile[WZ1]=jvj+230; pile[WZ2]=103; pile[WZ3]=jvj+231; 
(*f[58])( );     /*TRI3(jvj+229,jvj+230,103,jvj+231)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+232; pile[WZ4]=jvj+231; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+232,jvj+231,jvj+120)*/
pile[v[22]]=jvj+120; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+121; 
(*f[180])( );     /*TRIENS0(jvj+120,(-20),105,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+121,42,100,jvj+31)*/
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,Y,jvj+28)*/
l12:if((x[jvj+28]>0)) goto l13;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V38; pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(100,21,140,V38,jvj+80)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+80)*/
x[RES]=67 ;z[RES]=67;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=239; pile[WZ4]=jvj+233; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+233)*/
pile[WZ3]=117; pile[WZ4]=jvj+246; 
(*f[181])( );     /*QUADRI2(100,20,101,117,jvj+246)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V56; pile[WZ4]=jvj+244; 
(*f[192])( );     /*QUADRI4(100,41,130,V56,jvj+244)*/
pile[v[22]]=jvj+244; pile[WZ1]=103; pile[WZ2]=jvj+245; 
(*f[54])( );     /*TRI1(jvj+244,103,jvj+245)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+246; pile[WZ4]=jvj+245; pile[WZ5]=jvj+242; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+246,jvj+245,jvj+242)*/
pile[v[22]]=jvj+242; pile[WZ1]=(-20); pile[WZ2]=108; pile[WZ3]=jvj+243; 
(*f[180])( );     /*TRIENS0(jvj+242,(-20),108,jvj+243)*/
pile[v[22]]=jvj+243; pile[WZ1]=69; pile[WZ2]=100; pile[WZ3]=jvj+241; 
(*f[58])( );     /*TRI3(jvj+243,69,100,jvj+241)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+239; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+239)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+237; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+237)*/
pile[v[22]]=jvj+237; pile[WZ1]=436; pile[WZ2]=jvj+238; 
(*f[54])( );     /*TRI1(jvj+237,436,jvj+238)*/
pile[v[22]]=jvj+238; pile[WZ1]=jvj+239; pile[WZ2]=111; pile[WZ3]=jvj+240; 
(*f[58])( );     /*TRI3(jvj+238,jvj+239,111,jvj+240)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+241; pile[WZ4]=jvj+240; pile[WZ5]=jvj+235; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+241,jvj+240,jvj+235)*/
pile[v[22]]=jvj+233; pile[WZ1]=337; pile[WZ2]=jvj+234; 
(*f[54])( );     /*TRI1(jvj+233,337,jvj+234)*/
pile[v[22]]=jvj+235; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+236; 
(*f[298])( );     /*TRIENS1(jvj+235,(-20),jvj+234,105,jvj+236)*/
pile[v[22]]=jvj+236; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+82; 
(*f[58])( );     /*TRI3(jvj+236,42,100,jvj+82)*/
pile[v[22]]=jvj+81; pile[WZ1]=184; pile[WZ2]=jvj+82; 
(*f[36])( );     /*PLUSC0(jvj+81,184,jvj+82)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+81,184,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=229; pile[WZ4]=jvj+247; 
(*f[181])( );     /*QUADRI2(100,20,101,229,jvj+247)*/
pile[WZ3]=117; pile[WZ4]=jvj+258; 
(*f[181])( );     /*QUADRI2(100,20,101,117,jvj+258)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+256; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+256)*/
pile[v[22]]=jvj+256; pile[WZ1]=103; pile[WZ2]=jvj+257; 
(*f[54])( );     /*TRI1(jvj+256,103,jvj+257)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+258; pile[WZ4]=jvj+257; pile[WZ5]=jvj+255; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+258,jvj+257,jvj+255)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+253; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+253)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V38; pile[WZ4]=jvj+251; 
(*f[270])( );     /*QUADRI7(100,21,140,V38,jvj+251)*/
pile[v[22]]=jvj+251; pile[WZ1]=436; pile[WZ2]=jvj+252; 
(*f[54])( );     /*TRI1(jvj+251,436,jvj+252)*/
pile[v[22]]=jvj+252; pile[WZ1]=jvj+253; pile[WZ2]=111; pile[WZ3]=jvj+254; 
(*f[58])( );     /*TRI3(jvj+252,jvj+253,111,jvj+254)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+255; pile[WZ4]=jvj+254; pile[WZ5]=jvj+249; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+255,jvj+254,jvj+249)*/
pile[v[22]]=jvj+247; pile[WZ1]=337; pile[WZ2]=jvj+248; 
(*f[54])( );     /*TRI1(jvj+247,337,jvj+248)*/
pile[v[22]]=jvj+249; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+250; 
(*f[298])( );     /*TRIENS1(jvj+249,(-20),jvj+248,105,jvj+250)*/
pile[v[22]]=jvj+250; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+250,42,100,jvj+83)*/
pile[v[22]]=jvj+81; pile[WZ1]=184; pile[WZ2]=jvj+83; 
(*f[36])( );     /*PLUSC0(jvj+81,184,jvj+83)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=jvj+84; pile[WZ3]=jvj+81; 
(*f[1819])( );     /*COPV1(RM,107,jvj+84,jvj+81)*/
goto l38;
l13:x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[378])( );     /*CPI0(jvj+29,jvj+30)*/
pile[v[22]]=jvj+31; pile[WZ1]=107; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+31,107,jvj+30)*/
x[jvj+28]=t[x[jvj+28]];
goto l12;
l14:x[jvj+102]=x[RM] ;z[jvj+102]=z[RM];
l33:pile[v[22]]=117; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(117,jvj+52,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,Y,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=jvj+98; 
(*f[255])( );     /*COPEXP0(jvj+97,jvj+98)*/
(*f[1817])( );     /*NOUV2(V59)*/
V59=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V59; pile[WZ4]=jvj+125; 
(*f[270])( );     /*QUADRI7(100,21,140,V59,jvj+125)*/
pile[WZ1]=47; pile[WZ2]=436; pile[WZ3]=jvj+125; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,47,436,jvj+125,jvj+101)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V71; pile[WZ4]=jvj+314; 
(*f[192])( );     /*QUADRI4(100,41,130,V71,jvj+314)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+312; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+312)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V59; pile[WZ4]=jvj+310; 
(*f[270])( );     /*QUADRI7(100,21,140,V59,jvj+310)*/
pile[v[22]]=jvj+310; pile[WZ1]=436; pile[WZ2]=jvj+311; 
(*f[54])( );     /*TRI1(jvj+310,436,jvj+311)*/
pile[v[22]]=jvj+311; pile[WZ1]=jvj+312; pile[WZ2]=111; pile[WZ3]=jvj+313; 
(*f[58])( );     /*TRI3(jvj+311,jvj+312,111,jvj+313)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+314; pile[WZ4]=jvj+313; pile[WZ5]=jvj+126; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+314,jvj+313,jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+127; 
(*f[180])( );     /*TRIENS0(jvj+126,(-20),105,jvj+127)*/
pile[v[22]]=jvj+127; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+100; 
(*f[58])( );     /*TRI3(jvj+127,42,100,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V59; pile[WZ4]=jvj+99; 
(*f[270])( );     /*QUADRI7(100,21,140,V59,jvj+99)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+99)*/
pile[v[22]]=jvj+100; pile[WZ1]=184; pile[WZ2]=jvj+101; pile[WZ3]=jvj+100; 
(*f[1819])( );     /*COPV1(jvj+100,184,jvj+101,jvj+100)*/
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+317; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+317)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+315; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+315)*/
pile[v[22]]=jvj+315; pile[WZ1]=436; pile[WZ2]=jvj+316; 
(*f[54])( );     /*TRI1(jvj+315,436,jvj+316)*/
pile[v[22]]=jvj+316; pile[WZ1]=jvj+317; pile[WZ2]=111; pile[WZ3]=jvj+318; 
(*f[58])( );     /*TRI3(jvj+316,jvj+317,111,jvj+318)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+98; pile[WZ4]=jvj+318; pile[WZ5]=jvj+128; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+98,jvj+318,jvj+128)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+52; pile[WZ4]=jvj+325; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+52,jvj+325)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V59; pile[WZ4]=jvj+323; 
(*f[270])( );     /*QUADRI7(100,21,140,V59,jvj+323)*/
pile[WZ3]=W; pile[WZ4]=jvj+319; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+319)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=534; pile[WZ4]=jvj+321; 
(*f[181])( );     /*QUADRI2(100,20,101,534,jvj+321)*/
pile[v[22]]=jvj+319; pile[WZ1]=160; pile[WZ2]=jvj+320; 
(*f[54])( );     /*TRI1(jvj+319,160,jvj+320)*/
pile[v[22]]=jvj+320; pile[WZ1]=jvj+321; pile[WZ2]=111; pile[WZ3]=jvj+322; 
(*f[58])( );     /*TRI3(jvj+320,jvj+321,111,jvj+322)*/
pile[v[22]]=jvj+322; pile[WZ1]=jvj+323; pile[WZ2]=103; pile[WZ3]=jvj+324; 
(*f[58])( );     /*TRI3(jvj+322,jvj+323,103,jvj+324)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+325; pile[WZ4]=jvj+324; pile[WZ5]=jvj+130; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+325,jvj+324,jvj+130)*/
pile[v[22]]=jvj+128; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+129; 
(*f[180])( );     /*TRIENS0(jvj+128,(-20),107,jvj+129)*/
pile[v[22]]=jvj+130; pile[WZ2]=jvj+129; pile[WZ3]=105; pile[WZ4]=jvj+131; 
(*f[298])( );     /*TRIENS1(jvj+130,(-20),jvj+129,105,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+131,42,100,jvj+38)*/
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,Y,jvj+35)*/
l15:if((x[jvj+35]>0)) goto l16;
pile[v[22]]=jvj+38; pile[WZ1]=184; pile[WZ2]=jvj+101; pile[WZ3]=jvj+38; 
(*f[1819])( );     /*COPV1(jvj+38,184,jvj+101,jvj+38)*/
x[RES]=67 ;z[RES]=67;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+326; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+326)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V59; pile[WZ4]=jvj+330; 
(*f[270])( );     /*QUADRI7(100,21,140,V59,jvj+330)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V71; pile[WZ4]=jvj+328; 
(*f[192])( );     /*QUADRI4(100,41,130,V71,jvj+328)*/
pile[v[22]]=jvj+326; pile[WZ1]=111; pile[WZ2]=jvj+327; 
(*f[54])( );     /*TRI1(jvj+326,111,jvj+327)*/
pile[v[22]]=jvj+327; pile[WZ1]=jvj+328; pile[WZ2]=103; pile[WZ3]=jvj+329; 
(*f[58])( );     /*TRI3(jvj+327,jvj+328,103,jvj+329)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+330; pile[WZ4]=jvj+329; pile[WZ5]=jvj+103; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+330,jvj+329,jvj+103)*/
pile[v[22]]=jvj+102; pile[WZ1]=107; pile[WZ2]=jvj+103; 
(*f[36])( );     /*PLUSC0(jvj+102,107,jvj+103)*/
pile[v[22]]=RM; pile[WZ2]=jvj+102; pile[WZ3]=jvj+101; 
(*f[1819])( );     /*COPV1(RM,107,jvj+102,jvj+101)*/
goto l38;
l16:x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[378])( );     /*CPI0(jvj+36,jvj+37)*/
pile[v[22]]=jvj+38; pile[WZ1]=107; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+38,107,jvj+37)*/
x[jvj+35]=t[x[jvj+35]];
goto l15;
l17:x[jvj+95]=x[RM] ;z[jvj+95]=z[RM];
l31:pile[v[22]]=145; pile[WZ1]=jvj+52; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(145,jvj+52,jvj+86)*/
(*f[1817])( );     /*NOUV2(V119)*/
V119=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V122)*/
V122=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V119; pile[WZ4]=jvj+122; 
(*f[270])( );     /*QUADRI7(100,21,140,V119,jvj+122)*/
pile[WZ1]=47; pile[WZ2]=436; pile[WZ3]=jvj+122; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(100,47,436,jvj+122,jvj+92)*/
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,Y,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+88; 
(*f[255])( );     /*COPEXP0(jvj+87,jvj+88)*/
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,Y,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=jvj+90; 
(*f[255])( );     /*COPEXP0(jvj+89,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=117; pile[WZ4]=jvj+264; 
(*f[181])( );     /*QUADRI2(100,20,101,117,jvj+264)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V122; pile[WZ4]=jvj+262; 
(*f[270])( );     /*QUADRI7(100,21,140,V122,jvj+262)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+86; pile[WZ4]=jvj+260; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+86,jvj+260)*/
pile[v[22]]=jvj+90; pile[WZ1]=160; pile[WZ2]=jvj+259; 
(*f[54])( );     /*TRI1(jvj+90,160,jvj+259)*/
pile[v[22]]=jvj+259; pile[WZ1]=jvj+260; pile[WZ2]=111; pile[WZ3]=jvj+261; 
(*f[58])( );     /*TRI3(jvj+259,jvj+260,111,jvj+261)*/
pile[v[22]]=jvj+261; pile[WZ1]=jvj+262; pile[WZ2]=103; pile[WZ3]=jvj+263; 
(*f[58])( );     /*TRI3(jvj+261,jvj+262,103,jvj+263)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+264; pile[WZ4]=jvj+263; pile[WZ5]=jvj+123; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+264,jvj+263,jvj+123)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=18; pile[WZ4]=jvj+271; 
(*f[181])( );     /*QUADRI2(100,20,101,18,jvj+271)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V122; pile[WZ4]=jvj+269; 
(*f[270])( );     /*QUADRI7(100,21,140,V122,jvj+269)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+265; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+265)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=84; pile[WZ4]=jvj+267; 
(*f[181])( );     /*QUADRI2(100,20,101,84,jvj+267)*/
pile[v[22]]=jvj+265; pile[WZ1]=160; pile[WZ2]=jvj+266; 
(*f[54])( );     /*TRI1(jvj+265,160,jvj+266)*/
pile[v[22]]=jvj+266; pile[WZ1]=jvj+267; pile[WZ2]=111; pile[WZ3]=jvj+268; 
(*f[58])( );     /*TRI3(jvj+266,jvj+267,111,jvj+268)*/
pile[v[22]]=jvj+268; pile[WZ1]=jvj+269; pile[WZ2]=103; pile[WZ3]=jvj+270; 
(*f[58])( );     /*TRI3(jvj+268,jvj+269,103,jvj+270)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+271; pile[WZ4]=jvj+270; pile[WZ5]=jvj+124; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+271,jvj+270,jvj+124)*/
pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(42,100,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=105; pile[WZ2]=jvj+123; 
(*f[36])( );     /*PLUSC0(jvj+45,105,jvj+123)*/
pile[WZ2]=jvj+124; 
(*f[36])( );     /*PLUSC0(jvj+45,105,jvj+124)*/
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,Y,jvj+42)*/
l18:if((x[jvj+42]>0)) goto l19;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V119; pile[WZ4]=jvj+91; 
(*f[270])( );     /*QUADRI7(100,21,140,V119,jvj+91)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+91)*/
x[RES]=67 ;z[RES]=67;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=239; pile[WZ4]=jvj+272; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+272)*/
pile[WZ3]=117; pile[WZ4]=jvj+285; 
(*f[181])( );     /*QUADRI2(100,20,101,117,jvj+285)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V141; pile[WZ4]=jvj+283; 
(*f[192])( );     /*QUADRI4(100,41,130,V141,jvj+283)*/
pile[v[22]]=jvj+283; pile[WZ1]=103; pile[WZ2]=jvj+284; 
(*f[54])( );     /*TRI1(jvj+283,103,jvj+284)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+285; pile[WZ4]=jvj+284; pile[WZ5]=jvj+281; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+285,jvj+284,jvj+281)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=18; pile[WZ4]=jvj+288; 
(*f[181])( );     /*QUADRI2(100,20,101,18,jvj+288)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+286; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+286)*/
pile[v[22]]=jvj+286; pile[WZ1]=103; pile[WZ2]=jvj+287; 
(*f[54])( );     /*TRI1(jvj+286,103,jvj+287)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+288; pile[WZ4]=jvj+287; pile[WZ5]=jvj+282; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+288,jvj+287,jvj+282)*/
pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=jvj+280; 
(*f[54])( );     /*TRI1(69,100,jvj+280)*/
pile[v[22]]=jvj+280; pile[WZ1]=108; pile[WZ2]=jvj+281; 
(*f[36])( );     /*PLUSC0(jvj+280,108,jvj+281)*/
pile[WZ2]=jvj+282; 
(*f[36])( );     /*PLUSC0(jvj+280,108,jvj+282)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+278; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+278)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V122; pile[WZ4]=jvj+276; 
(*f[270])( );     /*QUADRI7(100,21,140,V122,jvj+276)*/
pile[v[22]]=jvj+276; pile[WZ1]=436; pile[WZ2]=jvj+277; 
(*f[54])( );     /*TRI1(jvj+276,436,jvj+277)*/
pile[v[22]]=jvj+277; pile[WZ1]=jvj+278; pile[WZ2]=111; pile[WZ3]=jvj+279; 
(*f[58])( );     /*TRI3(jvj+277,jvj+278,111,jvj+279)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+280; pile[WZ4]=jvj+279; pile[WZ5]=jvj+274; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+280,jvj+279,jvj+274)*/
pile[v[22]]=jvj+272; pile[WZ1]=337; pile[WZ2]=jvj+273; 
(*f[54])( );     /*TRI1(jvj+272,337,jvj+273)*/
pile[v[22]]=jvj+274; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+275; 
(*f[298])( );     /*TRIENS1(jvj+274,(-20),jvj+273,105,jvj+275)*/
pile[v[22]]=jvj+275; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+93; 
(*f[58])( );     /*TRI3(jvj+275,42,100,jvj+93)*/
pile[v[22]]=jvj+92; pile[WZ1]=184; pile[WZ2]=jvj+93; 
(*f[36])( );     /*PLUSC0(jvj+92,184,jvj+93)*/
pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+92,184,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=229; pile[WZ4]=jvj+289; 
(*f[181])( );     /*QUADRI2(100,20,101,229,jvj+289)*/
pile[WZ3]=25; pile[WZ4]=jvj+295; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+295)*/
pile[WZ3]=18; pile[WZ4]=jvj+301; 
(*f[181])( );     /*QUADRI2(100,20,101,18,jvj+301)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V122; pile[WZ4]=jvj+299; 
(*f[270])( );     /*QUADRI7(100,21,140,V122,jvj+299)*/
pile[v[22]]=jvj+299; pile[WZ1]=103; pile[WZ2]=jvj+300; 
(*f[54])( );     /*TRI1(jvj+299,103,jvj+300)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+301; pile[WZ4]=jvj+300; pile[WZ5]=jvj+297; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+301,jvj+300,jvj+297)*/
pile[v[22]]=jvj+295; pile[WZ1]=111; pile[WZ2]=jvj+296; 
(*f[54])( );     /*TRI1(jvj+295,111,jvj+296)*/
pile[v[22]]=jvj+296; pile[WZ1]=jvj+297; pile[WZ2]=103; pile[WZ3]=jvj+298; 
(*f[58])( );     /*TRI3(jvj+296,jvj+297,103,jvj+298)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+88; pile[WZ4]=jvj+298; pile[WZ5]=jvj+291; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+88,jvj+298,jvj+291)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=117; pile[WZ4]=jvj+309; 
(*f[181])( );     /*QUADRI2(100,20,101,117,jvj+309)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V122; pile[WZ4]=jvj+307; 
(*f[270])( );     /*QUADRI7(100,21,140,V122,jvj+307)*/
pile[v[22]]=jvj+307; pile[WZ1]=103; pile[WZ2]=jvj+308; 
(*f[54])( );     /*TRI1(jvj+307,103,jvj+308)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+309; pile[WZ4]=jvj+308; pile[WZ5]=jvj+306; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+309,jvj+308,jvj+306)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+304; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+304)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V119; pile[WZ4]=jvj+302; 
(*f[270])( );     /*QUADRI7(100,21,140,V119,jvj+302)*/
pile[v[22]]=jvj+302; pile[WZ1]=436; pile[WZ2]=jvj+303; 
(*f[54])( );     /*TRI1(jvj+302,436,jvj+303)*/
pile[v[22]]=jvj+303; pile[WZ1]=jvj+304; pile[WZ2]=111; pile[WZ3]=jvj+305; 
(*f[58])( );     /*TRI3(jvj+303,jvj+304,111,jvj+305)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+306; pile[WZ4]=jvj+305; pile[WZ5]=jvj+293; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+306,jvj+305,jvj+293)*/
pile[v[22]]=jvj+289; pile[WZ1]=337; pile[WZ2]=jvj+290; 
(*f[54])( );     /*TRI1(jvj+289,337,jvj+290)*/
pile[v[22]]=jvj+291; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+292; 
(*f[298])( );     /*TRIENS1(jvj+291,(-20),jvj+290,107,jvj+292)*/
pile[v[22]]=jvj+293; pile[WZ2]=jvj+292; pile[WZ3]=105; pile[WZ4]=jvj+294; 
(*f[298])( );     /*TRIENS1(jvj+293,(-20),jvj+292,105,jvj+294)*/
pile[v[22]]=jvj+294; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+294,42,100,jvj+94)*/
pile[v[22]]=jvj+92; pile[WZ1]=184; pile[WZ2]=jvj+94; 
(*f[36])( );     /*PLUSC0(jvj+92,184,jvj+94)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=jvj+95; pile[WZ3]=jvj+92; 
(*f[1819])( );     /*COPV1(RM,107,jvj+95,jvj+92)*/
goto l38;
l19:x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[378])( );     /*CPI0(jvj+43,jvj+44)*/
pile[v[22]]=jvj+45; pile[WZ1]=107; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+45,107,jvj+44)*/
x[jvj+42]=t[x[jvj+42]];
goto l18;
l21:x[jvj+47]=s[x[jvj+53]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+53];
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[255])( );     /*COPEXP0(jvj+47,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+171; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+171)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V144; pile[WZ4]=jvj+174; 
(*f[270])( );     /*QUADRI7(100,21,140,V144,jvj+174)*/
pile[v[22]]=jvj+171; pile[WZ1]=111; pile[WZ2]=jvj+172; 
(*f[54])( );     /*TRI1(jvj+171,111,jvj+172)*/
pile[v[22]]=jvj+172; pile[WZ1]=jvj+48; pile[WZ2]=103; pile[WZ3]=jvj+173; 
(*f[58])( );     /*TRI3(jvj+172,jvj+48,103,jvj+173)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+174; pile[WZ4]=jvj+173; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+174,jvj+173,jvj+49)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[196])( );     /*PLUF0(jvj+46,jvj+49,jvj+50)*/
x[jvj+53]=t[x[jvj+53]];
l20:if((x[jvj+53]>0)) goto l21;
pile[v[22]]=jvj+50; pile[WZ1]=jvj+54; 
(*f[299])( );     /*COPEL0(jvj+50,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=267; pile[WZ4]=jvj+175; 
(*f[181])( );     /*QUADRI2(100,20,101,267,jvj+175)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V144; pile[WZ4]=jvj+178; 
(*f[270])( );     /*QUADRI7(100,21,140,V144,jvj+178)*/
pile[v[22]]=jvj+175; pile[WZ1]=111; pile[WZ2]=jvj+176; 
(*f[54])( );     /*TRI1(jvj+175,111,jvj+176)*/
pile[v[22]]=jvj+176; pile[WZ1]=jvj+54; pile[WZ2]=107; pile[WZ3]=jvj+177; 
(*f[301])( );     /*TRI11(jvj+176,jvj+54,107,jvj+177)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+178; pile[WZ4]=jvj+177; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+178,jvj+177,jvj+55)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+55; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+55)*/
goto l38;
l22:pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(107,Y,jvj+53)*/
x[RES]=67 ;z[RES]=67;
(*f[1817])( );     /*NOUV2(V144)*/
V144=pile[v[22]]; 
x[jvj+50]=0 ;z[jvj+50]=0;
x[jvj+46]=d[76];z[jvj+46]=0;
goto l20;
l24:if(x[jvj+52]!=569&&x[jvj+52]!=591) goto l25;
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,Y,jvj+60)*/
if((x[jvj+60]!=22)) goto l25;
pile[v[22]]=145; pile[WZ1]=jvj+52; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(145,jvj+52,jvj+61)*/
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,Y,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[255])( );     /*COPEXP0(jvj+62,jvj+63)*/
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,Y,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; 
(*f[255])( );     /*COPEXP0(jvj+64,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+61; pile[WZ4]=jvj+199; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+61,jvj+199)*/
pile[WZ3]=43; pile[WZ4]=jvj+208; 
(*f[181])( );     /*QUADRI2(100,20,101,43,jvj+208)*/
pile[WZ3]=100; pile[WZ4]=jvj+210; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+210)*/
pile[v[22]]=jvj+65; pile[WZ1]=103; pile[WZ2]=jvj+209; 
(*f[54])( );     /*TRI1(jvj+65,103,jvj+209)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+210; pile[WZ4]=jvj+209; pile[WZ5]=jvj+206; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+210,jvj+209,jvj+206)*/
pile[v[22]]=jvj+206; pile[WZ1]=103; pile[WZ2]=jvj+207; 
(*f[54])( );     /*TRI1(jvj+206,103,jvj+207)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+208; pile[WZ4]=jvj+207; pile[WZ5]=jvj+205; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+208,jvj+207,jvj+205)*/
pile[v[22]]=jvj+65; pile[WZ1]=103; pile[WZ2]=jvj+204; 
(*f[54])( );     /*TRI1(jvj+65,103,jvj+204)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+205; pile[WZ4]=jvj+204; pile[WZ5]=jvj+203; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+205,jvj+204,jvj+203)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=43; pile[WZ4]=jvj+215; 
(*f[181])( );     /*QUADRI2(100,20,101,43,jvj+215)*/
pile[WZ3]=100; pile[WZ4]=jvj+217; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+217)*/
pile[v[22]]=jvj+65; pile[WZ1]=103; pile[WZ2]=jvj+216; 
(*f[54])( );     /*TRI1(jvj+65,103,jvj+216)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+217; pile[WZ4]=jvj+216; pile[WZ5]=jvj+213; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+217,jvj+216,jvj+213)*/
pile[v[22]]=jvj+213; pile[WZ1]=103; pile[WZ2]=jvj+214; 
(*f[54])( );     /*TRI1(jvj+213,103,jvj+214)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+215; pile[WZ4]=jvj+214; pile[WZ5]=jvj+212; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+215,jvj+214,jvj+212)*/
pile[v[22]]=jvj+63; pile[WZ1]=103; pile[WZ2]=jvj+211; 
(*f[54])( );     /*TRI1(jvj+63,103,jvj+211)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+212; pile[WZ4]=jvj+211; pile[WZ5]=jvj+201; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+212,jvj+211,jvj+201)*/
pile[v[22]]=jvj+199; pile[WZ1]=111; pile[WZ2]=jvj+200; 
(*f[54])( );     /*TRI1(jvj+199,111,jvj+200)*/
pile[v[22]]=jvj+200; pile[WZ1]=jvj+201; pile[WZ2]=103; pile[WZ3]=jvj+202; 
(*f[58])( );     /*TRI3(jvj+200,jvj+201,103,jvj+202)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+203; pile[WZ4]=jvj+202; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+203,jvj+202,jvj+66)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+66; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+66)*/
goto l23;
l25:if(x[jvj+52]!=94&&x[jvj+52]!=98&&x[jvj+52]!=1737) goto l28;
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,Y,jvj+67)*/
if((x[jvj+67]!=22)) goto l28;
pile[v[22]]=331; pile[WZ1]=jvj+52; 
(*f[219])( );if(v[102]) goto l28;     /*FNDC2(331,jvj+52,V117)*/
V117=pile[WZ2]; 
x[jvj+68]=incon;
if((x[jvj+52]==1737)) goto l39;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-592); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+68)*/
l26:pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; 
(*f[255])( );     /*COPEXP0(jvj+68,jvj+69)*/
x[jvj+70]=incon;
if((x[jvj+52]==1737)) goto l40;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=67; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,67,jvj+70)*/
l27:pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; 
(*f[255])( );     /*COPEXP0(jvj+70,jvj+71)*/
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,Y,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; 
(*f[255])( );     /*COPEXP0(jvj+72,jvj+73)*/
(*f[1817])( );     /*NOUV2(V103)*/
V103=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10362; pile[WZ4]=jvj+115; 
(*f[181])( );     /*QUADRI2(100,20,101,10362,jvj+115)*/
pile[v[22]]=jvj+69; pile[WZ1]=103; pile[WZ2]=jvj+218; 
(*f[54])( );     /*TRI1(jvj+69,103,jvj+218)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+218; pile[WZ5]=jvj+116; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+73,jvj+218,jvj+116)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V117; pile[WZ4]=jvj+221; 
(*f[272])( );     /*QUADRI9(100,89,162,V117,jvj+221)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-612); pile[WZ4]=jvj+219; 
(*f[270])( );     /*QUADRI7(100,21,140,(-612),jvj+219)*/
pile[v[22]]=jvj+219; pile[WZ1]=103; pile[WZ2]=jvj+220; 
(*f[54])( );     /*TRI1(jvj+219,103,jvj+220)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+221; pile[WZ4]=jvj+220; pile[WZ5]=jvj+117; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+221,jvj+220,jvj+117)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+222; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+222)*/
pile[v[22]]=jvj+222; pile[WZ1]=103; pile[WZ2]=jvj+223; 
(*f[54])( );     /*TRI1(jvj+222,103,jvj+223)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+71; pile[WZ4]=jvj+223; pile[WZ5]=jvj+118; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+71,jvj+223,jvj+118)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V103; pile[WZ4]=jvj+226; 
(*f[270])( );     /*QUADRI7(100,21,140,V103,jvj+226)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+224; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+224)*/
pile[v[22]]=jvj+224; pile[WZ1]=103; pile[WZ2]=jvj+225; 
(*f[54])( );     /*TRI1(jvj+224,103,jvj+225)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+226; pile[WZ4]=jvj+225; pile[WZ5]=jvj+113; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+226,jvj+225,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+114; 
(*f[180])( );     /*TRIENS0(jvj+113,(-20),113,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+115; pile[WZ4]=jvj+114; pile[WZ5]=jvj+75; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+115,jvj+114,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=114; pile[WZ2]=jvj+116; 
(*f[36])( );     /*PLUSC0(jvj+75,114,jvj+116)*/
pile[WZ2]=jvj+117; 
(*f[36])( );     /*PLUSC0(jvj+75,114,jvj+117)*/
pile[WZ2]=jvj+118; 
(*f[36])( );     /*PLUSC0(jvj+75,114,jvj+118)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V103; pile[WZ4]=jvj+74; 
(*f[270])( );     /*QUADRI7(100,21,140,V103,jvj+74)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+74)*/
pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+75; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+75)*/
goto l23;
l28:if(x[jvj+52]!=518&&x[jvj+52]!=310) goto l30;
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,Y,jvj+76)*/
if((x[jvj+76]!=22)) goto l30;
pile[v[22]]=117; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(117,jvj+52,V56)*/
V56=pile[WZ2]; 
x[jvj+84]=incon;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,R,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+25,jvj+26)*/
pile[v[22]]=155; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(155,jvj+26,jvj+27)*/
if((x[jvj+27]!=68)) goto l11;
x[jvj+84]=x[R] ;z[jvj+84]=z[R];
goto l29;
l30:if(x[jvj+52]!=401&&x[jvj+52]!=399) goto l32;
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,Y,jvj+85)*/
if((x[jvj+85]!=22)) goto l32;
pile[v[22]]=117; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(117,jvj+52,V141)*/
V141=pile[WZ2]; 
x[jvj+95]=incon;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,R,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+39,jvj+40)*/
pile[v[22]]=155; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(155,jvj+40,jvj+41)*/
if((x[jvj+41]!=68)) goto l17;
x[jvj+95]=x[R] ;z[jvj+95]=z[R];
goto l31;
l32:if(x[jvj+52]!=532&&x[jvj+52]!=533) goto l34;
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,Y,jvj+96)*/
if((x[jvj+96]!=22)) goto l34;
x[jvj+102]=incon;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,R,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+32,jvj+33)*/
pile[v[22]]=155; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(155,jvj+33,jvj+34)*/
if((x[jvj+34]!=68)) goto l14;
x[jvj+102]=x[R] ;z[jvj+102]=z[R];
goto l33;
l34:if((x[jvj+52]==433)) goto l4;
if((x[jvj+52]!=172)) goto l37;
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(103,Y,jvj+106)*/
pile[v[22]]=101; pile[WZ1]=jvj+106; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+106,jvj+107)*/
if((x[jvj+107]==23)) goto l37;
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(102,Y,jvj+108)*/
pile[v[22]]=100; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(100,jvj+108,jvj+109)*/
if(x[jvj+109]!=96&&x[jvj+109]!=89&&x[jvj+109]!=41&&x[jvj+109]!=20&&x[jvj+109]!=128&&x[jvj+109]!=570&&x[jvj+109]!=1317) goto l37;
pile[v[22]]=10547; pile[WZ1]=109; pile[WZ2]=jvj+110; 
(*f[54])( );     /*TRI1(10547,109,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=Y; pile[WZ3]=jvj+111; 
(*f[110])( );if(v[102]) goto l37;     /*EVL2(jvj+110,Y,T,jvj+111)*/
T=pile[WZ2]; 
x[jvj+338]=T ;z[jvj+338]=(x[jvj+111]==20&&T<=sepcte) ? T : (x[jvj+111]==41) ? (-1000) : 0;
if((x[jvj+339]=w[x[jvj+111]][3])==incon) goto l37;
pile[v[22]]=jvj+111; pile[WZ1]=100; pile[WZ2]=jvj+112; 
(*f[54])( );     /*TRI1(jvj+111,100,jvj+112)*/
V408=x[jvj+338];
V409=z[jvj+338];
pile[v[22]]=jvj+112; pile[WZ1]=V408; pile[WZ2]=jvj+339; pile[WZ3]=V409; 
(*f[49])( );     /*CHP0(jvj+112,V408,jvj+339,V409)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+112; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+112)*/
goto l23;
l37:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l39:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-727); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,(-727),jvj+68)*/
goto l26;
l40:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=66; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,66,jvj+70)*/
goto l27;
l41:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+140; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+140)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+142; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+142)*/
pile[v[22]]=jvj+140; pile[WZ1]=111; pile[WZ2]=jvj+141; 
(*f[54])( );     /*TRI1(jvj+140,111,jvj+141)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+142; pile[WZ4]=jvj+141; pile[WZ5]=jvj+136; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+142,jvj+141,jvj+136)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-99999998); pile[WZ4]=jvj+147; 
(*f[192])( );     /*QUADRI4(100,41,130,(-99999998),jvj+147)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+145; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+145)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+143; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+143)*/
pile[v[22]]=jvj+143; pile[WZ1]=436; pile[WZ2]=jvj+144; 
(*f[54])( );     /*TRI1(jvj+143,436,jvj+144)*/
pile[v[22]]=jvj+144; pile[WZ1]=jvj+145; pile[WZ2]=111; pile[WZ3]=jvj+146; 
(*f[58])( );     /*TRI3(jvj+144,jvj+145,111,jvj+146)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+147; pile[WZ4]=jvj+146; pile[WZ5]=jvj+138; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+147,jvj+146,jvj+138)*/
pile[v[22]]=jvj+136; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+137; 
(*f[180])( );     /*TRIENS0(jvj+136,(-20),107,jvj+137)*/
pile[v[22]]=jvj+138; pile[WZ2]=jvj+137; pile[WZ3]=105; pile[WZ4]=jvj+139; 
(*f[298])( );     /*TRIENS1(jvj+138,(-20),jvj+137,105,jvj+139)*/
pile[v[22]]=jvj+139; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+139,42,100,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=184; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+11,184,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+148; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+148)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+152; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+152)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-99999998); pile[WZ4]=jvj+150; 
(*f[192])( );     /*QUADRI4(100,41,130,(-99999998),jvj+150)*/
pile[v[22]]=jvj+148; pile[WZ1]=111; pile[WZ2]=jvj+149; 
(*f[54])( );     /*TRI1(jvj+148,111,jvj+149)*/
pile[v[22]]=jvj+149; pile[WZ1]=jvj+150; pile[WZ2]=103; pile[WZ3]=jvj+151; 
(*f[58])( );     /*TRI3(jvj+149,jvj+150,103,jvj+151)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+152; pile[WZ4]=jvj+151; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+152,jvj+151,jvj+14)*/
pile[v[22]]=jvj+13; pile[WZ1]=107; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+14)*/
goto l8;
}
