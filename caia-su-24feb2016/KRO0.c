#include "dx.h"
void KRO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V9=0,V4=0,V1=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=98;
x[jvj+1]=10117;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==296&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=269; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(269,N,jvj+2)*/
if((x[jvj+2]==41)) goto l8;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+19)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+23)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+20,jvj+21,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+23,jvj+22,jvj+6)*/
l1:pile[v[22]]=270; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(270,N,jvj+3)*/
if((x[jvj+3]==41)) goto l9;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+24)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+28)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+3; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+3,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+27,jvj+8)*/
l2:pile[v[22]]=271; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(271,N,jvj+4)*/
if((x[jvj+4]==41)) goto l10;
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
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+10)*/
l3:if((x[N]==16)) goto l11;
pile[v[22]]=117; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,N,V16)*/
V16=pile[WZ2]; 
if((V16!=3)) goto l4;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+57)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+61; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+61)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+59)*/
pile[v[22]]=jvj+57; pile[WZ1]=111; pile[WZ2]=jvj+58; 
(*f[54])( );     /*TRI1(jvj+57,111,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+59; pile[WZ2]=103; pile[WZ3]=jvj+60; 
(*f[58])( );     /*TRI3(jvj+58,jvj+59,103,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+61; pile[WZ4]=jvj+60; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+61,jvj+60,jvj+53)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+63)*/
pile[v[22]]=jvj+11; pile[WZ1]=160; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+11,160,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; pile[WZ2]=111; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+62,jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+9; pile[WZ2]=103; pile[WZ3]=jvj+65; 
(*f[58])( );     /*TRI3(jvj+64,jvj+9,103,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+65; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+7,jvj+65,jvj+55)*/
pile[v[22]]=jvj+53; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+54; 
(*f[180])( );     /*TRIENS0(jvj+53,(-20),107,jvj+54)*/
pile[v[22]]=jvj+55; pile[WZ2]=jvj+54; pile[WZ3]=105; pile[WZ4]=jvj+56; 
(*f[298])( );     /*TRIENS1(jvj+55,(-20),jvj+54,105,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+56,42,100,jvj+12)*/
pile[v[22]]=10514; pile[WZ1]=184; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(10514,184,jvj+12)*/
l4:pile[v[22]]=117; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,N,V9)*/
V9=pile[WZ2]; 
if((V9!=2)) goto l5;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+13)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+70)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+74; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+74)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+72; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+72)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+72; pile[WZ2]=103; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+71,jvj+72,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+74,jvj+73,jvj+66)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=111; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,111,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+14; pile[WZ2]=103; pile[WZ3]=jvj+77; 
(*f[58])( );     /*TRI3(jvj+76,jvj+14,103,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+77; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+13,jvj+77,jvj+68)*/
pile[v[22]]=jvj+66; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+67; 
(*f[180])( );     /*TRIENS0(jvj+66,(-20),107,jvj+67)*/
pile[v[22]]=jvj+68; pile[WZ2]=jvj+67; pile[WZ3]=105; pile[WZ4]=jvj+69; 
(*f[298])( );     /*TRIENS1(jvj+68,(-20),jvj+67,105,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+69,42,100,jvj+15)*/
pile[v[22]]=10514; pile[WZ1]=184; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(10514,184,jvj+15)*/
l5:pile[v[22]]=117; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,N,V4)*/
V4=pile[WZ2]; 
if((V4!=1)) goto l6;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+82; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+82)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+86; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+86)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+84)*/
pile[v[22]]=jvj+82; pile[WZ1]=111; pile[WZ2]=jvj+83; 
(*f[54])( );     /*TRI1(jvj+82,111,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=jvj+84; pile[WZ2]=103; pile[WZ3]=jvj+85; 
(*f[58])( );     /*TRI3(jvj+83,jvj+84,103,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+86; pile[WZ4]=jvj+85; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+86,jvj+85,jvj+78)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=111; pile[WZ2]=jvj+88; 
(*f[54])( );     /*TRI1(jvj+87,111,jvj+88)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+88; pile[WZ5]=jvj+80; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+16,jvj+88,jvj+80)*/
pile[v[22]]=jvj+78; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+79; 
(*f[180])( );     /*TRIENS0(jvj+78,(-20),107,jvj+79)*/
pile[v[22]]=jvj+80; pile[WZ2]=jvj+79; pile[WZ3]=105; pile[WZ4]=jvj+81; 
(*f[298])( );     /*TRIENS1(jvj+80,(-20),jvj+79,105,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+81,42,100,jvj+17)*/
pile[v[22]]=10514; pile[WZ1]=184; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(10514,184,jvj+17)*/
l6:pile[v[22]]=117; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,N,V1)*/
V1=pile[WZ2]; 
if((V1!=0)) goto l7;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+93; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+93)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+97; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+97)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+95)*/
pile[v[22]]=jvj+93; pile[WZ1]=111; pile[WZ2]=jvj+94; 
(*f[54])( );     /*TRI1(jvj+93,111,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=jvj+95; pile[WZ2]=103; pile[WZ3]=jvj+96; 
(*f[58])( );     /*TRI3(jvj+94,jvj+95,103,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+97; pile[WZ4]=jvj+96; pile[WZ5]=jvj+89; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+97,jvj+96,jvj+89)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+98; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+98)*/
pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+98; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,73,111,jvj+98,jvj+91)*/
pile[v[22]]=jvj+89; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+90; 
(*f[180])( );     /*TRIENS0(jvj+89,(-20),107,jvj+90)*/
pile[v[22]]=jvj+91; pile[WZ2]=jvj+90; pile[WZ3]=105; pile[WZ4]=jvj+92; 
(*f[298])( );     /*TRIENS1(jvj+91,(-20),jvj+90,105,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+92,42,100,jvj+18)*/
pile[v[22]]=10514; pile[WZ1]=184; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(10514,184,jvj+18)*/
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l8:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+6; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+6)*/
goto l1;
l9:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+8)*/
goto l2;
l10:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+10; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+10)*/
goto l3;
l11:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+38)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+42)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=16; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,16,jvj+40)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=103; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,103,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+42; pile[WZ4]=jvj+41; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+42,jvj+41,jvj+34)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10098; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,10098,jvj+43)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-600); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(100,21,140,(-600),jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=103; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,103,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+48; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+10,jvj+48,jvj+44)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+49; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=103; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+50; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+8,jvj+50,jvj+45)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-657); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(100,21,140,(-657),jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=103; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,103,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+52; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+6,jvj+52,jvj+46)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+43; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+43,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=114; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+36,114,jvj+44)*/
pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+36,114,jvj+45)*/
pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+36,114,jvj+46)*/
pile[v[22]]=jvj+34; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+35; 
(*f[180])( );     /*TRIENS0(jvj+34,(-20),107,jvj+35)*/
pile[v[22]]=jvj+36; pile[WZ2]=jvj+35; pile[WZ3]=105; pile[WZ4]=jvj+37; 
(*f[298])( );     /*TRIENS1(jvj+36,(-20),jvj+35,105,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+5; 
(*f[58])( );     /*TRI3(jvj+37,42,100,jvj+5)*/
pile[v[22]]=10514; pile[WZ1]=184; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(10514,184,jvj+5)*/
goto l4;
}
