#include "dx.h"
void DMS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int E,VS,VA,A,X,K,XX,R;
int Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=252;
x[jvj+1]=10494;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1831&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; VS=pile[v[22]+1]; VA=pile[v[22]+2]; A=pile[v[22]+3]; X=pile[v[22]+4]; K=pile[v[22]+5]; XX=pile[v[22]+6]; R=pile[v[22]+7]; Y=pile[v[22]+8]; v[22]+=9; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[Y]=incon;
if((K==46)) goto l39;
if((K!=43)) goto l35;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-592); pile[WZ4]=jvj+10; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+10)*/
l21:if((E==81)) goto l22;
if((E==111)) goto l23;
if((E==85)) goto l24;
if((E==78)) goto l25;
if((E==90)) goto l26;
if((E==75)) goto l27;
if((E==65)) goto l28;
if(E==77||E==76) goto l3;
if((E!=87)) goto l30;
pile[v[22]]=A; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(A,jvj+31)*/
pile[v[22]]=VA; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(VA,jvj+32)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+33)*/
pile[v[22]]=VS; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(VS,jvj+34)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10367; pile[WZ4]=jvj+103; 
(*f[181])( );     /*QUADRI2(100,20,101,10367,jvj+103)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-619); pile[WZ4]=jvj+207; 
(*f[270])( );     /*QUADRI7(100,21,140,(-619),jvj+207)*/
pile[v[22]]=jvj+207; pile[WZ1]=103; pile[WZ2]=jvj+208; 
(*f[54])( );     /*TRI1(jvj+207,103,jvj+208)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+208; pile[WZ5]=jvj+104; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+36,jvj+208,jvj+104)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+212; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+212)*/
pile[WZ3]=41; pile[WZ4]=jvj+214; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+214)*/
pile[v[22]]=jvj+212; pile[WZ1]=111; pile[WZ2]=jvj+213; 
(*f[54])( );     /*TRI1(jvj+212,111,jvj+213)*/
pile[v[22]]=jvj+213; pile[WZ1]=jvj+214; pile[WZ2]=103; pile[WZ3]=jvj+215; 
(*f[58])( );     /*TRI3(jvj+213,jvj+214,103,jvj+215)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+215; pile[WZ5]=jvj+211; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+215,jvj+211)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+209; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+209)*/
pile[v[22]]=jvj+209; pile[WZ1]=103; pile[WZ2]=jvj+210; 
(*f[54])( );     /*TRI1(jvj+209,103,jvj+210)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+211; pile[WZ4]=jvj+210; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+211,jvj+210,jvj+105)*/
pile[v[22]]=jvj+33; pile[WZ1]=103; pile[WZ2]=jvj+216; 
(*f[54])( );     /*TRI1(jvj+33,103,jvj+216)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+216; pile[WZ5]=jvj+106; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+32,jvj+216,jvj+106)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-595); pile[WZ4]=jvj+217; 
(*f[270])( );     /*QUADRI7(100,21,140,(-595),jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=103; pile[WZ2]=jvj+218; 
(*f[54])( );     /*TRI1(jvj+217,103,jvj+218)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+218; pile[WZ5]=jvj+101; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+34,jvj+218,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+102; 
(*f[180])( );     /*TRIENS0(jvj+101,(-20),113,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+103; pile[WZ4]=jvj+102; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+103,jvj+102,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+104; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+104)*/
pile[WZ2]=jvj+105; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+105)*/
pile[WZ2]=jvj+106; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+106)*/
l35:pile[v[22]]=A; pile[WZ1]=jvj+47; 
(*f[255])( );     /*COPEXP0(A,jvj+47)*/
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,X,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[255])( );     /*COPEXP0(jvj+48,jvj+49)*/
pile[v[22]]=613; pile[WZ1]=X; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(613,X,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[255])( );     /*COPEXP0(jvj+50,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=38; pile[WZ4]=jvj+250; 
(*f[181])( );     /*QUADRI2(100,20,101,38,jvj+250)*/
pile[v[22]]=jvj+47; pile[WZ1]=160; pile[WZ2]=jvj+249; 
(*f[54])( );     /*TRI1(jvj+47,160,jvj+249)*/
pile[v[22]]=jvj+249; pile[WZ1]=jvj+250; pile[WZ2]=111; pile[WZ3]=jvj+251; 
(*f[58])( );     /*TRI3(jvj+249,jvj+250,111,jvj+251)*/
pile[v[22]]=jvj+251; pile[WZ1]=jvj+51; pile[WZ2]=103; pile[WZ3]=jvj+252; 
(*f[58])( );     /*TRI3(jvj+251,jvj+51,103,jvj+252)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+252; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+49,jvj+252,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=105; pile[WZ2]=XX; pile[WZ3]=R; 
(*f[1647])( );     /*DMT0(jvj+52,105,XX,R)*/
l37:if(x[Y]!=incon) goto l38;
l36:x[jvj+1]=incon; v[0]=jvj; v[22]-=9; v[102]=1;return;
l1:x[jvj+246]=20 ;z[jvj+246]=20;
l34:pile[v[22]]=VA; pile[WZ1]=jvj+43; 
(*f[255])( );     /*COPEXP0(VA,jvj+43)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+44)*/
pile[v[22]]=A; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(A,jvj+45)*/
pile[v[22]]=VS; pile[WZ1]=jvj+46; 
(*f[255])( );     /*COPEXP0(VS,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10367; pile[WZ4]=jvj+120; 
(*f[181])( );     /*QUADRI2(100,20,101,10367,jvj+120)*/
pile[v[22]]=jvj+44; pile[WZ1]=103; pile[WZ2]=jvj+235; 
(*f[54])( );     /*TRI1(jvj+44,103,jvj+235)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+235; pile[WZ5]=jvj+121; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+43,jvj+235,jvj+121)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+239; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+239)*/
pile[WZ3]=41; pile[WZ4]=jvj+241; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+241)*/
pile[v[22]]=jvj+239; pile[WZ1]=111; pile[WZ2]=jvj+240; 
(*f[54])( );     /*TRI1(jvj+239,111,jvj+240)*/
pile[v[22]]=jvj+240; pile[WZ1]=jvj+241; pile[WZ2]=103; pile[WZ3]=jvj+242; 
(*f[58])( );     /*TRI3(jvj+240,jvj+241,103,jvj+242)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+242; pile[WZ5]=jvj+238; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+242,jvj+238)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+236; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+236)*/
pile[v[22]]=jvj+236; pile[WZ1]=103; pile[WZ2]=jvj+237; 
(*f[54])( );     /*TRI1(jvj+236,103,jvj+237)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+238; pile[WZ4]=jvj+237; pile[WZ5]=jvj+122; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+238,jvj+237,jvj+122)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+246; pile[WZ4]=jvj+245; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+246,jvj+245)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-619); pile[WZ4]=jvj+243; 
(*f[270])( );     /*QUADRI7(100,21,140,(-619),jvj+243)*/
pile[v[22]]=jvj+243; pile[WZ1]=103; pile[WZ2]=jvj+244; 
(*f[54])( );     /*TRI1(jvj+243,103,jvj+244)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+245; pile[WZ4]=jvj+244; pile[WZ5]=jvj+123; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+245,jvj+244,jvj+123)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-595); pile[WZ4]=jvj+247; 
(*f[270])( );     /*QUADRI7(100,21,140,(-595),jvj+247)*/
pile[v[22]]=jvj+247; pile[WZ1]=103; pile[WZ2]=jvj+248; 
(*f[54])( );     /*TRI1(jvj+247,103,jvj+248)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+248; pile[WZ5]=jvj+118; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+46,jvj+248,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+119; 
(*f[180])( );     /*TRIENS0(jvj+118,(-20),113,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+120; pile[WZ4]=jvj+119; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+120,jvj+119,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+121; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+121)*/
pile[WZ2]=jvj+122; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+122)*/
pile[WZ2]=jvj+123; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+123)*/
goto l35;
l2:x[jvj+246]=23 ;z[jvj+246]=23;
goto l34;
l3:x[jvj+203]=incon;
if((E==77)) goto l4;
x[jvj+203]=10427 ;z[jvj+203]=10427;
l29:pile[v[22]]=VA; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(VA,jvj+29)*/
pile[v[22]]=VS; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(VS,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+203; pile[WZ4]=jvj+100; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+203,jvj+100)*/
pile[v[22]]=jvj+10; pile[WZ1]=103; pile[WZ2]=jvj+204; 
(*f[54])( );     /*TRI1(jvj+10,103,jvj+204)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+204; pile[WZ5]=jvj+96; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+29,jvj+204,jvj+96)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-593); pile[WZ4]=jvj+205; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=103; pile[WZ2]=jvj+206; 
(*f[54])( );     /*TRI1(jvj+205,103,jvj+206)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+206; pile[WZ5]=jvj+98; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+30,jvj+206,jvj+98)*/
pile[v[22]]=jvj+96; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+97; 
(*f[180])( );     /*TRIENS0(jvj+96,(-20),114,jvj+97)*/
pile[v[22]]=jvj+98; pile[WZ2]=jvj+97; pile[WZ3]=113; pile[WZ4]=jvj+99; 
(*f[298])( );     /*TRIENS1(jvj+98,(-20),jvj+97,113,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+100; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+100,jvj+99,Y)*/
goto l35;
l4:x[jvj+203]=10564 ;z[jvj+203]=10564;
goto l29;
l6:x[jvj+219]=10578 ;z[jvj+219]=10578;
l31:pile[v[22]]=A; pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(A,jvj+37)*/
pile[v[22]]=VA; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(VA,jvj+38)*/
pile[v[22]]=VS; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(VS,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+219; pile[WZ4]=jvj+109; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+219,jvj+109)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+220; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+220)*/
pile[v[22]]=jvj+220; pile[WZ1]=103; pile[WZ2]=jvj+221; 
(*f[54])( );     /*TRI1(jvj+220,103,jvj+221)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+221; pile[WZ5]=jvj+110; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+37,jvj+221,jvj+110)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+225; pile[WZ4]=jvj+224; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+225,jvj+224)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+222; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+222)*/
pile[v[22]]=jvj+222; pile[WZ1]=103; pile[WZ2]=jvj+223; 
(*f[54])( );     /*TRI1(jvj+222,103,jvj+223)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+224; pile[WZ4]=jvj+223; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+224,jvj+223,jvj+111)*/
pile[v[22]]=jvj+10; pile[WZ1]=103; pile[WZ2]=jvj+226; 
(*f[54])( );     /*TRI1(jvj+10,103,jvj+226)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+226; pile[WZ5]=jvj+112; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+38,jvj+226,jvj+112)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-593); pile[WZ4]=jvj+227; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+227)*/
pile[v[22]]=jvj+227; pile[WZ1]=103; pile[WZ2]=jvj+228; 
(*f[54])( );     /*TRI1(jvj+227,103,jvj+228)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+228; pile[WZ5]=jvj+107; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+39,jvj+228,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+108; 
(*f[180])( );     /*TRIENS0(jvj+107,(-20),113,jvj+108)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+109; pile[WZ4]=jvj+108; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+109,jvj+108,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+110; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+110)*/
pile[WZ2]=jvj+111; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+111)*/
pile[WZ2]=jvj+112; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+112)*/
goto l35;
l7:x[jvj+219]=10434 ;z[jvj+219]=10434;
goto l31;
l8:x[jvj+225]=incon;
if((E==72)) goto l9;
x[jvj+225]=1325 ;z[jvj+225]=1325;
l5:x[jvj+219]=incon;
if((E==70)) goto l6;
if((E==72)) goto l7;
x[jvj+219]=10115 ;z[jvj+219]=10115;
goto l31;
l9:x[jvj+225]=337 ;z[jvj+225]=337;
goto l5;
l10:x[jvj+229]=10525 ;z[jvj+229]=10525;
l32:pile[v[22]]=VA; pile[WZ1]=jvj+40; 
(*f[255])( );     /*COPEXP0(VA,jvj+40)*/
pile[v[22]]=A; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(A,jvj+41)*/
pile[v[22]]=VS; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(VS,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+229; pile[WZ4]=jvj+115; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+229,jvj+115)*/
pile[v[22]]=jvj+10; pile[WZ1]=103; pile[WZ2]=jvj+230; 
(*f[54])( );     /*TRI1(jvj+10,103,jvj+230)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+230; pile[WZ5]=jvj+116; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+40,jvj+230,jvj+116)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+231; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+231)*/
pile[v[22]]=jvj+231; pile[WZ1]=103; pile[WZ2]=jvj+232; 
(*f[54])( );     /*TRI1(jvj+231,103,jvj+232)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+232; pile[WZ5]=jvj+117; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+41,jvj+232,jvj+117)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-593); pile[WZ4]=jvj+233; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+233)*/
pile[v[22]]=jvj+233; pile[WZ1]=103; pile[WZ2]=jvj+234; 
(*f[54])( );     /*TRI1(jvj+233,103,jvj+234)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+42; pile[WZ4]=jvj+234; pile[WZ5]=jvj+113; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+42,jvj+234,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+114; 
(*f[180])( );     /*TRIENS0(jvj+113,(-20),113,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+115; pile[WZ4]=jvj+114; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+115,jvj+114,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+116; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+116)*/
pile[WZ2]=jvj+117; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+117)*/
goto l35;
l11:x[jvj+229]=10008 ;z[jvj+229]=10008;
goto l32;
l12:x[jvj+229]=10426 ;z[jvj+229]=10426;
goto l32;
l13:x[jvj+229]=10429 ;z[jvj+229]=10429;
goto l32;
l14:x[jvj+229]=10737 ;z[jvj+229]=10737;
goto l32;
l15:x[jvj+229]=10388 ;z[jvj+229]=10388;
goto l32;
l16:x[jvj+229]=10391 ;z[jvj+229]=10391;
goto l32;
l17:x[jvj+229]=10177 ;z[jvj+229]=10177;
goto l32;
l18:x[jvj+229]=10479 ;z[jvj+229]=10479;
goto l32;
l19:x[jvj+229]=11145 ;z[jvj+229]=11145;
goto l32;
l20:x[jvj+229]=11460 ;z[jvj+229]=11460;
goto l32;
l22:pile[v[22]]=VA; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(VA,jvj+2)*/
pile[v[22]]=A; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(A,jvj+3)*/
pile[v[22]]=VS; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(VS,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10571; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,10571,jvj+55)*/
pile[WZ3]=3; pile[WZ4]=jvj+126; 
(*f[181])( );     /*QUADRI2(100,20,101,3,jvj+126)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+124; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=103; pile[WZ2]=jvj+125; 
(*f[54])( );     /*TRI1(jvj+124,103,jvj+125)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+126; pile[WZ4]=jvj+125; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+126,jvj+125,jvj+56)*/
pile[v[22]]=jvj+10; pile[WZ1]=103; pile[WZ2]=jvj+127; 
(*f[54])( );     /*TRI1(jvj+10,103,jvj+127)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+2; pile[WZ4]=jvj+127; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+2,jvj+127,jvj+57)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+128; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+128)*/
pile[v[22]]=jvj+128; pile[WZ1]=103; pile[WZ2]=jvj+129; 
(*f[54])( );     /*TRI1(jvj+128,103,jvj+129)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+129; pile[WZ5]=jvj+58; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+3,jvj+129,jvj+58)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-593); pile[WZ4]=jvj+130; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=103; pile[WZ2]=jvj+131; 
(*f[54])( );     /*TRI1(jvj+130,103,jvj+131)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+131; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+4,jvj+131,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+54; 
(*f[180])( );     /*TRIENS0(jvj+53,(-20),113,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+55,jvj+54,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+56)*/
pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+57)*/
pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+58)*/
goto l35;
l23:pile[v[22]]=A; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(A,jvj+5)*/
pile[v[22]]=VA; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(VA,jvj+6)*/
pile[v[22]]=VS; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(VS,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10367; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,10367,jvj+61)*/
pile[WZ3]=20; pile[WZ4]=jvj+134; 
(*f[181])( );     /*QUADRI2(100,20,101,20,jvj+134)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-619); pile[WZ4]=jvj+132; 
(*f[270])( );     /*QUADRI7(100,21,140,(-619),jvj+132)*/
pile[v[22]]=jvj+132; pile[WZ1]=103; pile[WZ2]=jvj+133; 
(*f[54])( );     /*TRI1(jvj+132,103,jvj+133)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+134; pile[WZ4]=jvj+133; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+134,jvj+133,jvj+62)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+138; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+138)*/
pile[WZ3]=41; pile[WZ4]=jvj+140; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+140)*/
pile[v[22]]=jvj+138; pile[WZ1]=111; pile[WZ2]=jvj+139; 
(*f[54])( );     /*TRI1(jvj+138,111,jvj+139)*/
pile[v[22]]=jvj+139; pile[WZ1]=jvj+140; pile[WZ2]=103; pile[WZ3]=jvj+141; 
(*f[58])( );     /*TRI3(jvj+139,jvj+140,103,jvj+141)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+141; pile[WZ5]=jvj+137; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+141,jvj+137)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+135; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+135)*/
pile[v[22]]=jvj+135; pile[WZ1]=103; pile[WZ2]=jvj+136; 
(*f[54])( );     /*TRI1(jvj+135,103,jvj+136)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+137; pile[WZ4]=jvj+136; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+137,jvj+136,jvj+63)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=68; pile[WZ4]=jvj+144; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+144)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-645); pile[WZ4]=jvj+142; 
(*f[270])( );     /*QUADRI7(100,21,140,(-645),jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=103; pile[WZ2]=jvj+143; 
(*f[54])( );     /*TRI1(jvj+142,103,jvj+143)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+144; pile[WZ4]=jvj+143; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+144,jvj+143,jvj+64)*/
pile[v[22]]=jvj+10; pile[WZ1]=103; pile[WZ2]=jvj+145; 
(*f[54])( );     /*TRI1(jvj+10,103,jvj+145)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+145; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+6,jvj+145,jvj+65)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-595); pile[WZ4]=jvj+146; 
(*f[270])( );     /*QUADRI7(100,21,140,(-595),jvj+146)*/
pile[v[22]]=jvj+146; pile[WZ1]=103; pile[WZ2]=jvj+147; 
(*f[54])( );     /*TRI1(jvj+146,103,jvj+147)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+147; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+7,jvj+147,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+60; 
(*f[180])( );     /*TRIENS0(jvj+59,(-20),113,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+61; pile[WZ4]=jvj+60; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+61,jvj+60,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+62; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+62)*/
pile[WZ2]=jvj+63; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+63)*/
pile[WZ2]=jvj+64; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+64)*/
pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+65)*/
goto l35;
l24:pile[v[22]]=A; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(A,jvj+8)*/
pile[v[22]]=VA; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(VA,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=VS; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(VS,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10367; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,10367,jvj+68)*/
pile[WZ3]=20; pile[WZ4]=jvj+150; 
(*f[181])( );     /*QUADRI2(100,20,101,20,jvj+150)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-619); pile[WZ4]=jvj+148; 
(*f[270])( );     /*QUADRI7(100,21,140,(-619),jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=103; pile[WZ2]=jvj+149; 
(*f[54])( );     /*TRI1(jvj+148,103,jvj+149)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+150; pile[WZ4]=jvj+149; pile[WZ5]=jvj+69; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+150,jvj+149,jvj+69)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+154; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+154)*/
pile[WZ3]=41; pile[WZ4]=jvj+156; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+156)*/
pile[v[22]]=jvj+154; pile[WZ1]=111; pile[WZ2]=jvj+155; 
(*f[54])( );     /*TRI1(jvj+154,111,jvj+155)*/
pile[v[22]]=jvj+155; pile[WZ1]=jvj+156; pile[WZ2]=103; pile[WZ3]=jvj+157; 
(*f[58])( );     /*TRI3(jvj+155,jvj+156,103,jvj+157)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+157; pile[WZ5]=jvj+153; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+157,jvj+153)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+151; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+151)*/
pile[v[22]]=jvj+151; pile[WZ1]=103; pile[WZ2]=jvj+152; 
(*f[54])( );     /*TRI1(jvj+151,103,jvj+152)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+153; pile[WZ4]=jvj+152; pile[WZ5]=jvj+70; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+153,jvj+152,jvj+70)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=257; pile[WZ4]=jvj+160; 
(*f[181])( );     /*QUADRI2(100,20,101,257,jvj+160)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-645); pile[WZ4]=jvj+158; 
(*f[270])( );     /*QUADRI7(100,21,140,(-645),jvj+158)*/
pile[v[22]]=jvj+158; pile[WZ1]=103; pile[WZ2]=jvj+159; 
(*f[54])( );     /*TRI1(jvj+158,103,jvj+159)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+160; pile[WZ4]=jvj+159; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+160,jvj+159,jvj+71)*/
pile[v[22]]=jvj+11; pile[WZ1]=103; pile[WZ2]=jvj+161; 
(*f[54])( );     /*TRI1(jvj+11,103,jvj+161)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+161; pile[WZ5]=jvj+72; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+9,jvj+161,jvj+72)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-595); pile[WZ4]=jvj+162; 
(*f[270])( );     /*QUADRI7(100,21,140,(-595),jvj+162)*/
pile[v[22]]=jvj+162; pile[WZ1]=103; pile[WZ2]=jvj+163; 
(*f[54])( );     /*TRI1(jvj+162,103,jvj+163)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+163; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+12,jvj+163,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+67; 
(*f[180])( );     /*TRIENS0(jvj+66,(-20),113,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+68; pile[WZ4]=jvj+67; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+68,jvj+67,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+69; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+69)*/
pile[WZ2]=jvj+70; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+70)*/
pile[WZ2]=jvj+71; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+71)*/
pile[WZ2]=jvj+72; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+72)*/
goto l35;
l25:pile[v[22]]=A; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(A,jvj+13)*/
pile[v[22]]=VA; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(VA,jvj+14)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+15)*/
pile[v[22]]=VS; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(VS,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10182; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,10182,jvj+75)*/
pile[WZ3]=172; pile[WZ4]=jvj+167; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+167)*/
pile[WZ3]=41; pile[WZ4]=jvj+169; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+169)*/
pile[v[22]]=jvj+167; pile[WZ1]=111; pile[WZ2]=jvj+168; 
(*f[54])( );     /*TRI1(jvj+167,111,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=jvj+169; pile[WZ2]=103; pile[WZ3]=jvj+170; 
(*f[58])( );     /*TRI3(jvj+168,jvj+169,103,jvj+170)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+170; pile[WZ5]=jvj+166; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+170,jvj+166)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+164; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+164)*/
pile[v[22]]=jvj+164; pile[WZ1]=103; pile[WZ2]=jvj+165; 
(*f[54])( );     /*TRI1(jvj+164,103,jvj+165)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+166; pile[WZ4]=jvj+165; pile[WZ5]=jvj+76; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+166,jvj+165,jvj+76)*/
pile[v[22]]=jvj+15; pile[WZ1]=103; pile[WZ2]=jvj+171; 
(*f[54])( );     /*TRI1(jvj+15,103,jvj+171)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+171; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+14,jvj+171,jvj+77)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-595); pile[WZ4]=jvj+172; 
(*f[270])( );     /*QUADRI7(100,21,140,(-595),jvj+172)*/
pile[v[22]]=jvj+172; pile[WZ1]=103; pile[WZ2]=jvj+173; 
(*f[54])( );     /*TRI1(jvj+172,103,jvj+173)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+173; pile[WZ5]=jvj+73; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+16,jvj+173,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+74; 
(*f[180])( );     /*TRIENS0(jvj+73,(-20),113,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+75; pile[WZ4]=jvj+74; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+75,jvj+74,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+76; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+76)*/
pile[WZ2]=jvj+77; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+77)*/
goto l35;
l26:pile[v[22]]=A; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(A,jvj+17)*/
pile[v[22]]=VA; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(VA,jvj+18)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+19)*/
pile[v[22]]=VS; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(VS,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10367; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,20,101,10367,jvj+80)*/
pile[WZ3]=23; pile[WZ4]=jvj+176; 
(*f[181])( );     /*QUADRI2(100,20,101,23,jvj+176)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-619); pile[WZ4]=jvj+174; 
(*f[270])( );     /*QUADRI7(100,21,140,(-619),jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=103; pile[WZ2]=jvj+175; 
(*f[54])( );     /*TRI1(jvj+174,103,jvj+175)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+176; pile[WZ4]=jvj+175; pile[WZ5]=jvj+81; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+176,jvj+175,jvj+81)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+180; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+180)*/
pile[WZ3]=41; pile[WZ4]=jvj+182; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+182)*/
pile[v[22]]=jvj+180; pile[WZ1]=111; pile[WZ2]=jvj+181; 
(*f[54])( );     /*TRI1(jvj+180,111,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=jvj+182; pile[WZ2]=103; pile[WZ3]=jvj+183; 
(*f[58])( );     /*TRI3(jvj+181,jvj+182,103,jvj+183)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+183; pile[WZ5]=jvj+179; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+183,jvj+179)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+177; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+177)*/
pile[v[22]]=jvj+177; pile[WZ1]=103; pile[WZ2]=jvj+178; 
(*f[54])( );     /*TRI1(jvj+177,103,jvj+178)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+179; pile[WZ4]=jvj+178; pile[WZ5]=jvj+82; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+179,jvj+178,jvj+82)*/
pile[v[22]]=jvj+19; pile[WZ1]=103; pile[WZ2]=jvj+184; 
(*f[54])( );     /*TRI1(jvj+19,103,jvj+184)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+184; pile[WZ5]=jvj+83; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+18,jvj+184,jvj+83)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=41; pile[WZ4]=jvj+187; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+187)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-645); pile[WZ4]=jvj+185; 
(*f[270])( );     /*QUADRI7(100,21,140,(-645),jvj+185)*/
pile[v[22]]=jvj+185; pile[WZ1]=103; pile[WZ2]=jvj+186; 
(*f[54])( );     /*TRI1(jvj+185,103,jvj+186)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+187; pile[WZ4]=jvj+186; pile[WZ5]=jvj+84; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+187,jvj+186,jvj+84)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-595); pile[WZ4]=jvj+188; 
(*f[270])( );     /*QUADRI7(100,21,140,(-595),jvj+188)*/
pile[v[22]]=jvj+188; pile[WZ1]=103; pile[WZ2]=jvj+189; 
(*f[54])( );     /*TRI1(jvj+188,103,jvj+189)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+189; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+20,jvj+189,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+79; 
(*f[180])( );     /*TRIENS0(jvj+78,(-20),113,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+80; pile[WZ4]=jvj+79; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+80,jvj+79,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+81; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+81)*/
pile[WZ2]=jvj+82; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+82)*/
pile[WZ2]=jvj+83; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+83)*/
pile[WZ2]=jvj+84; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+84)*/
goto l35;
l27:pile[v[22]]=VA; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(VA,jvj+21)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+22)*/
pile[v[22]]=A; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(A,jvj+23)*/
pile[v[22]]=VS; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(VS,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+87)*/
pile[WZ3]=135; pile[WZ4]=jvj+192; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+192)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-629); pile[WZ4]=jvj+190; 
(*f[270])( );     /*QUADRI7(100,21,140,(-629),jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=103; pile[WZ2]=jvj+191; 
(*f[54])( );     /*TRI1(jvj+190,103,jvj+191)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+192; pile[WZ4]=jvj+191; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+192,jvj+191,jvj+88)*/
pile[v[22]]=jvj+22; pile[WZ1]=103; pile[WZ2]=jvj+193; 
(*f[54])( );     /*TRI1(jvj+22,103,jvj+193)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+193; pile[WZ5]=jvj+89; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+21,jvj+193,jvj+89)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-664); pile[WZ4]=jvj+194; 
(*f[270])( );     /*QUADRI7(100,21,140,(-664),jvj+194)*/
pile[v[22]]=jvj+194; pile[WZ1]=103; pile[WZ2]=jvj+195; 
(*f[54])( );     /*TRI1(jvj+194,103,jvj+195)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+195; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+23,jvj+195,jvj+90)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-593); pile[WZ4]=jvj+196; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=103; pile[WZ2]=jvj+197; 
(*f[54])( );     /*TRI1(jvj+196,103,jvj+197)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+197; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+24,jvj+197,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+86; 
(*f[180])( );     /*TRIENS0(jvj+85,(-20),113,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+87,jvj+86,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+88; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+88)*/
pile[WZ2]=jvj+89; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+89)*/
pile[WZ2]=jvj+90; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+90)*/
goto l35;
l28:pile[v[22]]=A; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(A,jvj+25)*/
pile[v[22]]=VA; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(VA,jvj+26)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+27)*/
pile[v[22]]=VS; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(VS,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10388; pile[WZ4]=jvj+93; 
(*f[181])( );     /*QUADRI2(100,20,101,10388,jvj+93)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+198; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+198)*/
pile[v[22]]=jvj+198; pile[WZ1]=103; pile[WZ2]=jvj+199; 
(*f[54])( );     /*TRI1(jvj+198,103,jvj+199)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+199; pile[WZ5]=jvj+94; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+25,jvj+199,jvj+94)*/
pile[v[22]]=jvj+27; pile[WZ1]=103; pile[WZ2]=jvj+200; 
(*f[54])( );     /*TRI1(jvj+27,103,jvj+200)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+200; pile[WZ5]=jvj+95; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+26,jvj+200,jvj+95)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-593); pile[WZ4]=jvj+201; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+201)*/
pile[v[22]]=jvj+201; pile[WZ1]=103; pile[WZ2]=jvj+202; 
(*f[54])( );     /*TRI1(jvj+201,103,jvj+202)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+202; pile[WZ5]=jvj+91; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+28,jvj+202,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+92; 
(*f[180])( );     /*TRIENS0(jvj+91,(-20),113,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+93; pile[WZ4]=jvj+92; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+93,jvj+92,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+94; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+94)*/
pile[WZ2]=jvj+95; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+95)*/
goto l35;
l30:if(E==70||E==71||E==72) goto l8;
if(E!=88&&E!=89&&E!=83&&E!=67&&E!=82&&E!=86&&E!=80&&E!=66&&E!=104&&E!=112&&E!=122&&E!=74&&E!=84) goto l33;
x[jvj+229]=incon;
if((E==89)) goto l10;
if((E==83)) goto l11;
if((E==67)) goto l12;
if((E==82)) goto l13;
if((E==86)) goto l11;
if((E==66)) goto l14;
if((E==80)) goto l15;
if((E==104)) goto l16;
if((E==112)) goto l17;
if((E==88)) goto l18;
if((E==122)) goto l19;
if((E==74)) goto l20;
if((E!=84)) goto l33;
x[jvj+229]=11383 ;z[jvj+229]=11383;
goto l32;
l33:if(E!=79&&E!=69&&E!=73&&E!=68) goto l35;
x[jvj+246]=incon;
if((E==79)) goto l1;
if((E==69)) goto l2;
x[jvj+246]=41 ;z[jvj+246]=41;
goto l34;
l38:x[jvj+1]=incon; v[0]=jvj; v[22]-=9; v[102]=0;return;
l39:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-727); pile[WZ4]=jvj+10; 
(*f[270])( );     /*QUADRI7(100,21,140,(-727),jvj+10)*/
goto l21;
}
