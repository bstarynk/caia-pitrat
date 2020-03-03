#include "dx.h"
void KRD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V16=0,V15=0;
int N,BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=159;
x[jvj+1]=10112;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==295&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; BL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+12]=incon;
pile[v[22]]=269; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(269,N,jvj+2)*/
if((x[jvj+2]==41)) goto l15;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+17)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+21)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+19)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+18,jvj+19,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+21,jvj+20,jvj+22)*/
l1:pile[v[22]]=270; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(270,N,jvj+3)*/
if((x[jvj+3]==41)) goto l16;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+23)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+27)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+3; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+3,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+24,jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+26,jvj+28)*/
l2:pile[v[22]]=271; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(271,N,jvj+4)*/
if((x[jvj+4]==41)) goto l17;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+29)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+33)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+4; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+4,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+34)*/
l3:pile[v[22]]=118; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(118,N,V5)*/
V5=pile[WZ2]; 
if((V5==2)) goto l18;
if((V5!=3)) goto l4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+40)*/
pile[v[22]]=jvj+34; pile[WZ1]=160; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+34,160,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=111; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+41,jvj+28,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+42; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+42,jvj+38)*/
l6:pile[v[22]]=146; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(146,N,jvj+5)*/
if((x[jvj+5]==41)) goto l8;
l7:pile[v[22]]=11; pile[WZ1]=N; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(11,N,jvj+6)*/
if((x[jvj+6]==135)) goto l8;
l19:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+46)*/
pile[WZ3]=41; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+48)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=103; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+47,jvj+48,103,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+49; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+49,jvj+12)*/
l9:if((x[N]==285)) goto l20;
if((x[N]==469)) goto l21;
if((x[N]!=1326)) goto l10;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+109; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+109)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+113; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+113)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1326; pile[WZ4]=jvj+111; 
(*f[181])( );     /*QUADRI2(100,20,101,1326,jvj+111)*/
pile[v[22]]=jvj+109; pile[WZ1]=111; pile[WZ2]=jvj+110; 
(*f[54])( );     /*TRI1(jvj+109,111,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=jvj+111; pile[WZ2]=103; pile[WZ3]=jvj+112; 
(*f[58])( );     /*TRI3(jvj+110,jvj+111,103,jvj+112)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+113; pile[WZ4]=jvj+112; pile[WZ5]=jvj+107; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+113,jvj+112,jvj+107)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=11299; pile[WZ4]=jvj+118; 
(*f[181])( );     /*QUADRI2(100,20,101,11299,jvj+118)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+119; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=103; pile[WZ2]=jvj+120; 
(*f[54])( );     /*TRI1(jvj+119,103,jvj+120)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+120; pile[WZ5]=jvj+114; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+22,jvj+120,jvj+114)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-660); pile[WZ4]=jvj+123; 
(*f[270])( );     /*QUADRI7(100,21,140,(-660),jvj+123)*/
pile[WZ3]=(-608); pile[WZ4]=jvj+121; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=103; pile[WZ2]=jvj+122; 
(*f[54])( );     /*TRI1(jvj+121,103,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+123; pile[WZ4]=jvj+122; pile[WZ5]=jvj+116; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+123,jvj+122,jvj+116)*/
pile[v[22]]=jvj+114; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+115; 
(*f[180])( );     /*TRIENS0(jvj+114,(-20),114,jvj+115)*/
pile[v[22]]=jvj+116; pile[WZ2]=jvj+115; pile[WZ3]=113; pile[WZ4]=jvj+117; 
(*f[298])( );     /*TRIENS1(jvj+116,(-20),jvj+115,113,jvj+117)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+118; pile[WZ5]=jvj+108; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+118,jvj+117,jvj+108)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-660); pile[WZ4]=jvj+128; 
(*f[270])( );     /*QUADRI7(100,21,140,(-660),jvj+128)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+126; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+126)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+124; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=436; pile[WZ2]=jvj+125; 
(*f[54])( );     /*TRI1(jvj+124,436,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+126; pile[WZ2]=111; pile[WZ3]=jvj+127; 
(*f[58])( );     /*TRI3(jvj+125,jvj+126,111,jvj+127)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+128; pile[WZ4]=jvj+127; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+128,jvj+127,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+106; 
(*f[180])( );     /*TRIENS0(jvj+105,(-20),105,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+106,42,100,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=107; pile[WZ2]=jvj+107; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+107)*/
pile[WZ2]=jvj+108; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+108)*/
pile[v[22]]=BL; pile[WZ1]=184; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(BL,184,jvj+10)*/
l10:if(x[jvj+12]!=incon) goto l11;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l4:pile[v[22]]=118; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(118,N,V16)*/
V16=pile[WZ2]; 
if((V16!=1)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+44; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+44,jvj+38)*/
goto l6;
l5:pile[v[22]]=118; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(118,N,V15)*/
V15=pile[WZ2]; 
if((V15!=0)) goto l9;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+45)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+45; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+45,jvj+38)*/
goto l6;
l8:x[jvj+12]=x[jvj+38] ;z[jvj+12]=z[jvj+38];
goto l9;
l11:pile[v[22]]=11; pile[WZ1]=N; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(11,N,jvj+11)*/
if((x[jvj+11]!=135)) goto l12;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+132; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+132)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+136; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+136)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+134; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+134)*/
pile[v[22]]=jvj+132; pile[WZ1]=111; pile[WZ2]=jvj+133; 
(*f[54])( );     /*TRI1(jvj+132,111,jvj+133)*/
pile[v[22]]=jvj+133; pile[WZ1]=jvj+134; pile[WZ2]=103; pile[WZ3]=jvj+135; 
(*f[58])( );     /*TRI3(jvj+133,jvj+134,103,jvj+135)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+136; pile[WZ4]=jvj+135; pile[WZ5]=jvj+131; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+136,jvj+135,jvj+131)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+142; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+142)*/
pile[WZ3]=135; pile[WZ4]=jvj+146; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+146)*/
pile[WZ3]=41; pile[WZ4]=jvj+144; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+144)*/
pile[v[22]]=jvj+142; pile[WZ1]=111; pile[WZ2]=jvj+143; 
(*f[54])( );     /*TRI1(jvj+142,111,jvj+143)*/
pile[v[22]]=jvj+143; pile[WZ1]=jvj+144; pile[WZ2]=103; pile[WZ3]=jvj+145; 
(*f[58])( );     /*TRI3(jvj+143,jvj+144,103,jvj+145)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+146; pile[WZ4]=jvj+145; pile[WZ5]=jvj+141; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+146,jvj+145,jvj+141)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+139; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+139)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+137; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+137)*/
pile[v[22]]=jvj+137; pile[WZ1]=436; pile[WZ2]=jvj+138; 
(*f[54])( );     /*TRI1(jvj+137,436,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=jvj+139; pile[WZ2]=111; pile[WZ3]=jvj+140; 
(*f[58])( );     /*TRI3(jvj+138,jvj+139,111,jvj+140)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+141; pile[WZ4]=jvj+140; pile[WZ5]=jvj+129; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+141,jvj+140,jvj+129)*/
pile[v[22]]=jvj+129; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+130; 
(*f[180])( );     /*TRIENS0(jvj+129,(-20),105,jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+130,42,100,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=107; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+13)*/
pile[WZ2]=jvj+131; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+131)*/
pile[v[22]]=BL; pile[WZ1]=184; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(BL,184,jvj+14)*/
l12:if(x[N]==285||x[N]==1326||x[N]==469) goto l14;
pile[v[22]]=11; pile[WZ1]=N; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(11,N,jvj+7)*/
if((x[jvj+7]==135)) goto l14;
l13:pile[v[22]]=jvj+12; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+151; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+151)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+155; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+155)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+153; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+153)*/
pile[v[22]]=jvj+151; pile[WZ1]=111; pile[WZ2]=jvj+152; 
(*f[54])( );     /*TRI1(jvj+151,111,jvj+152)*/
pile[v[22]]=jvj+152; pile[WZ1]=jvj+153; pile[WZ2]=103; pile[WZ3]=jvj+154; 
(*f[58])( );     /*TRI3(jvj+152,jvj+153,103,jvj+154)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+155; pile[WZ4]=jvj+154; pile[WZ5]=jvj+147; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+155,jvj+154,jvj+147)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+158; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+158)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+156; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+156)*/
pile[v[22]]=jvj+156; pile[WZ1]=436; pile[WZ2]=jvj+157; 
(*f[54])( );     /*TRI1(jvj+156,436,jvj+157)*/
pile[v[22]]=jvj+157; pile[WZ1]=jvj+158; pile[WZ2]=111; pile[WZ3]=jvj+159; 
(*f[58])( );     /*TRI3(jvj+157,jvj+158,111,jvj+159)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+159; pile[WZ5]=jvj+149; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+15,jvj+159,jvj+149)*/
pile[v[22]]=jvj+147; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+148; 
(*f[180])( );     /*TRIENS0(jvj+147,(-20),107,jvj+148)*/
pile[v[22]]=jvj+149; pile[WZ2]=jvj+148; pile[WZ3]=105; pile[WZ4]=jvj+150; 
(*f[298])( );     /*TRIENS1(jvj+149,(-20),jvj+148,105,jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+150,42,100,jvj+16)*/
pile[v[22]]=BL; pile[WZ1]=184; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(BL,184,jvj+16)*/
goto l14;
l15:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+22)*/
goto l1;
l16:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+28)*/
goto l2;
l17:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+34)*/
goto l3;
l18:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+36,jvj+28,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+37; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+37,jvj+38)*/
goto l6;
l20:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+54)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+58)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=285; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,285,jvj+56)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=103; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+55,jvj+56,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+57,jvj+52)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10591; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,10591,jvj+61)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+64; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=103; pile[WZ2]=jvj+65; 
(*f[54])( );     /*TRI1(jvj+64,103,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+65; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+28,jvj+65,jvj+62)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=103; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,103,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+67; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+22,jvj+67,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-660); pile[WZ4]=jvj+70; 
(*f[270])( );     /*QUADRI7(100,21,140,(-660),jvj+70)*/
pile[WZ3]=(-608); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=103; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+70,jvj+69,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+60; 
(*f[180])( );     /*TRIENS0(jvj+59,(-20),113,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+61; pile[WZ4]=jvj+60; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+61,jvj+60,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=114; pile[WZ2]=jvj+62; 
(*f[36])( );     /*PLUSC0(jvj+53,114,jvj+62)*/
pile[WZ2]=jvj+63; 
(*f[36])( );     /*PLUSC0(jvj+53,114,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-660); pile[WZ4]=jvj+75; 
(*f[270])( );     /*QUADRI7(100,21,140,(-660),jvj+75)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+73)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+71; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=436; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,436,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; pile[WZ2]=111; pile[WZ3]=jvj+74; 
(*f[58])( );     /*TRI3(jvj+72,jvj+73,111,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+75; pile[WZ4]=jvj+74; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+75,jvj+74,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+51; 
(*f[180])( );     /*TRIENS0(jvj+50,(-20),105,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+51,42,100,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+52)*/
pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+53)*/
pile[v[22]]=BL; pile[WZ1]=184; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(BL,184,jvj+8)*/
goto l10;
l21:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+80)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+84; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+84)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=469; pile[WZ4]=jvj+82; 
(*f[181])( );     /*QUADRI2(100,20,101,469,jvj+82)*/
pile[v[22]]=jvj+80; pile[WZ1]=111; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,111,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; pile[WZ2]=103; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+81,jvj+82,103,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+84,jvj+83,jvj+78)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10174; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,10174,jvj+87)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+91; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=103; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,103,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+92; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+28,jvj+92,jvj+88)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+93; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=103; pile[WZ2]=jvj+94; 
(*f[54])( );     /*TRI1(jvj+93,103,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+94; pile[WZ5]=jvj+89; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+22,jvj+94,jvj+89)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+95; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=103; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,103,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+96; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+34,jvj+96,jvj+90)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-660); pile[WZ4]=jvj+99; 
(*f[270])( );     /*QUADRI7(100,21,140,(-660),jvj+99)*/
pile[WZ3]=(-608); pile[WZ4]=jvj+97; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=103; pile[WZ2]=jvj+98; 
(*f[54])( );     /*TRI1(jvj+97,103,jvj+98)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+99; pile[WZ4]=jvj+98; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+99,jvj+98,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+86; 
(*f[180])( );     /*TRIENS0(jvj+85,(-20),113,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=jvj+79; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+87,jvj+86,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=114; pile[WZ2]=jvj+88; 
(*f[36])( );     /*PLUSC0(jvj+79,114,jvj+88)*/
pile[WZ2]=jvj+89; 
(*f[36])( );     /*PLUSC0(jvj+79,114,jvj+89)*/
pile[WZ2]=jvj+90; 
(*f[36])( );     /*PLUSC0(jvj+79,114,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-660); pile[WZ4]=jvj+104; 
(*f[270])( );     /*QUADRI7(100,21,140,(-660),jvj+104)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+102; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+102)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+100; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=436; pile[WZ2]=jvj+101; 
(*f[54])( );     /*TRI1(jvj+100,436,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=jvj+102; pile[WZ2]=111; pile[WZ3]=jvj+103; 
(*f[58])( );     /*TRI3(jvj+101,jvj+102,111,jvj+103)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+104; pile[WZ4]=jvj+103; pile[WZ5]=jvj+76; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+104,jvj+103,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+77; 
(*f[180])( );     /*TRIENS0(jvj+76,(-20),105,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+77,42,100,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=107; pile[WZ2]=jvj+78; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+78)*/
pile[WZ2]=jvj+79; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+79)*/
pile[v[22]]=BL; pile[WZ1]=184; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(BL,184,jvj+9)*/
goto l10;
}
