#include "dx.h"
void DNA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0;
int N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=169;
x[jvj+1]=26147;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2619&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
I=1;
l1:if((I<=N)) goto l3;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+4)*/
pile[WZ3]=1215; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+9)*/
pile[WZ3]=55; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+18)*/
pile[WZ3]=25; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+21)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+28,jvj+27,jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+24,jvj+19)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+29)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+36,jvj+35,jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+20)*/
pile[WZ2]=111; pile[WZ3]=jvj+18; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+18,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=107; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+37)*/
pile[WZ3]=25; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+40)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+47,jvj+46,jvj+44)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+42)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+43,jvj+38)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+48)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+53)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+55; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+55)*/
pile[v[22]]=jvj+53; pile[WZ1]=111; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,111,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+55,jvj+54,jvj+52)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+50; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+50)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; pile[WZ2]=103; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+49,jvj+50,103,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+52,jvj+51,jvj+39)*/
pile[WZ2]=111; pile[WZ3]=jvj+37; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+37,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=107; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+38)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+56)*/
pile[WZ3]=25; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+59)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+64; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+64)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+66; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+66)*/
pile[v[22]]=jvj+64; pile[WZ1]=111; pile[WZ2]=jvj+65; 
(*f[54])( );     /*TRI1(jvj+64,111,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+65; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+66,jvj+65,jvj+63)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+61; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+61)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=103; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+60,jvj+61,103,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+62; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+63,jvj+62,jvj+57)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+67)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+72)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+74; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+74)*/
pile[v[22]]=jvj+72; pile[WZ1]=111; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+72,111,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+74,jvj+73,jvj+71)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+69; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+69)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; pile[WZ2]=103; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+68,jvj+69,103,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+71; pile[WZ4]=jvj+70; pile[WZ5]=jvj+58; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+71,jvj+70,jvj+58)*/
pile[WZ2]=111; pile[WZ3]=jvj+56; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+56,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=107; pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+57)*/
pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+75)*/
pile[WZ3]=25; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+78)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+83; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+83)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+85; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+85)*/
pile[v[22]]=jvj+83; pile[WZ1]=111; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,111,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+85; pile[WZ4]=jvj+84; pile[WZ5]=jvj+82; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+85,jvj+84,jvj+82)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+80; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+80)*/
pile[v[22]]=jvj+78; pile[WZ1]=111; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+78,111,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; pile[WZ2]=103; pile[WZ3]=jvj+81; 
(*f[58])( );     /*TRI3(jvj+79,jvj+80,103,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+82; pile[WZ4]=jvj+81; pile[WZ5]=jvj+76; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+82,jvj+81,jvj+76)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+86)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+91; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+91)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+93; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+93)*/
pile[v[22]]=jvj+91; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,111,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+93; pile[WZ4]=jvj+92; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+93,jvj+92,jvj+90)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+88; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+88)*/
pile[v[22]]=jvj+86; pile[WZ1]=111; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+86,111,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+88; pile[WZ2]=103; pile[WZ3]=jvj+89; 
(*f[58])( );     /*TRI3(jvj+87,jvj+88,103,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+90; pile[WZ4]=jvj+89; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+90,jvj+89,jvj+77)*/
pile[WZ2]=111; pile[WZ3]=jvj+75; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+75,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=107; pile[WZ2]=jvj+76; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+76)*/
pile[WZ2]=jvj+77; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+94; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+94)*/
pile[WZ3]=25; pile[WZ4]=jvj+97; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+97)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-697); pile[WZ4]=jvj+102; 
(*f[270])( );     /*QUADRI7(100,21,140,(-697),jvj+102)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+104; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+104)*/
pile[v[22]]=jvj+102; pile[WZ1]=111; pile[WZ2]=jvj+103; 
(*f[54])( );     /*TRI1(jvj+102,111,jvj+103)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+104; pile[WZ4]=jvj+103; pile[WZ5]=jvj+101; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+104,jvj+103,jvj+101)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+99; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+99)*/
pile[v[22]]=jvj+97; pile[WZ1]=111; pile[WZ2]=jvj+98; 
(*f[54])( );     /*TRI1(jvj+97,111,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+99; pile[WZ2]=103; pile[WZ3]=jvj+100; 
(*f[58])( );     /*TRI3(jvj+98,jvj+99,103,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+101; pile[WZ4]=jvj+100; pile[WZ5]=jvj+95; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+101,jvj+100,jvj+95)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+105)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-697); pile[WZ4]=jvj+110; 
(*f[270])( );     /*QUADRI7(100,21,140,(-697),jvj+110)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+112; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+112)*/
pile[v[22]]=jvj+110; pile[WZ1]=111; pile[WZ2]=jvj+111; 
(*f[54])( );     /*TRI1(jvj+110,111,jvj+111)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+112; pile[WZ4]=jvj+111; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+112,jvj+111,jvj+109)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+107; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+107)*/
pile[v[22]]=jvj+105; pile[WZ1]=111; pile[WZ2]=jvj+106; 
(*f[54])( );     /*TRI1(jvj+105,111,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=jvj+107; pile[WZ2]=103; pile[WZ3]=jvj+108; 
(*f[58])( );     /*TRI3(jvj+106,jvj+107,103,jvj+108)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+109; pile[WZ4]=jvj+108; pile[WZ5]=jvj+96; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+109,jvj+108,jvj+96)*/
pile[WZ2]=111; pile[WZ3]=jvj+94; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+94,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=107; pile[WZ2]=jvj+95; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+95)*/
pile[WZ2]=jvj+96; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+113; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+113)*/
pile[WZ3]=25; pile[WZ4]=jvj+116; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+116)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+121; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+121)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+123; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+123)*/
pile[v[22]]=jvj+121; pile[WZ1]=111; pile[WZ2]=jvj+122; 
(*f[54])( );     /*TRI1(jvj+121,111,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+123; pile[WZ4]=jvj+122; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+123,jvj+122,jvj+120)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+118; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+118)*/
pile[v[22]]=jvj+116; pile[WZ1]=111; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+116,111,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; pile[WZ2]=103; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+117,jvj+118,103,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+120; pile[WZ4]=jvj+119; pile[WZ5]=jvj+114; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+120,jvj+119,jvj+114)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+124; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+124)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+129; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+129)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+131; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+131)*/
pile[v[22]]=jvj+129; pile[WZ1]=111; pile[WZ2]=jvj+130; 
(*f[54])( );     /*TRI1(jvj+129,111,jvj+130)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+131; pile[WZ4]=jvj+130; pile[WZ5]=jvj+128; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+131,jvj+130,jvj+128)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+126; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+126)*/
pile[v[22]]=jvj+124; pile[WZ1]=111; pile[WZ2]=jvj+125; 
(*f[54])( );     /*TRI1(jvj+124,111,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+126; pile[WZ2]=103; pile[WZ3]=jvj+127; 
(*f[58])( );     /*TRI3(jvj+125,jvj+126,103,jvj+127)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+128; pile[WZ4]=jvj+127; pile[WZ5]=jvj+115; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+128,jvj+127,jvj+115)*/
pile[WZ2]=111; pile[WZ3]=jvj+113; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+113,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=107; pile[WZ2]=jvj+114; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+114)*/
pile[WZ2]=jvj+115; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+115)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+132; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+132)*/
pile[WZ3]=25; pile[WZ4]=jvj+135; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+135)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+140; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+140)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+142; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+142)*/
pile[v[22]]=jvj+140; pile[WZ1]=111; pile[WZ2]=jvj+141; 
(*f[54])( );     /*TRI1(jvj+140,111,jvj+141)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+142; pile[WZ4]=jvj+141; pile[WZ5]=jvj+139; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+142,jvj+141,jvj+139)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+137; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+137)*/
pile[v[22]]=jvj+135; pile[WZ1]=111; pile[WZ2]=jvj+136; 
(*f[54])( );     /*TRI1(jvj+135,111,jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=jvj+137; pile[WZ2]=103; pile[WZ3]=jvj+138; 
(*f[58])( );     /*TRI3(jvj+136,jvj+137,103,jvj+138)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+139; pile[WZ4]=jvj+138; pile[WZ5]=jvj+133; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+139,jvj+138,jvj+133)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+143; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+143)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+148; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+148)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+150; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+150)*/
pile[v[22]]=jvj+148; pile[WZ1]=111; pile[WZ2]=jvj+149; 
(*f[54])( );     /*TRI1(jvj+148,111,jvj+149)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+150; pile[WZ4]=jvj+149; pile[WZ5]=jvj+147; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+150,jvj+149,jvj+147)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+145; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+145)*/
pile[v[22]]=jvj+143; pile[WZ1]=111; pile[WZ2]=jvj+144; 
(*f[54])( );     /*TRI1(jvj+143,111,jvj+144)*/
pile[v[22]]=jvj+144; pile[WZ1]=jvj+145; pile[WZ2]=103; pile[WZ3]=jvj+146; 
(*f[58])( );     /*TRI3(jvj+144,jvj+145,103,jvj+146)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+147; pile[WZ4]=jvj+146; pile[WZ5]=jvj+134; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+147,jvj+146,jvj+134)*/
pile[WZ2]=111; pile[WZ3]=jvj+132; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+132,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=107; pile[WZ2]=jvj+133; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+133)*/
pile[WZ2]=jvj+134; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+134)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+151; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+151)*/
pile[WZ3]=25; pile[WZ4]=jvj+154; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+154)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-630); pile[WZ4]=jvj+159; 
(*f[270])( );     /*QUADRI7(100,21,140,(-630),jvj+159)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+161; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+161)*/
pile[v[22]]=jvj+159; pile[WZ1]=111; pile[WZ2]=jvj+160; 
(*f[54])( );     /*TRI1(jvj+159,111,jvj+160)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+161; pile[WZ4]=jvj+160; pile[WZ5]=jvj+158; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+161,jvj+160,jvj+158)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+156; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+156)*/
pile[v[22]]=jvj+154; pile[WZ1]=111; pile[WZ2]=jvj+155; 
(*f[54])( );     /*TRI1(jvj+154,111,jvj+155)*/
pile[v[22]]=jvj+155; pile[WZ1]=jvj+156; pile[WZ2]=103; pile[WZ3]=jvj+157; 
(*f[58])( );     /*TRI3(jvj+155,jvj+156,103,jvj+157)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+158; pile[WZ4]=jvj+157; pile[WZ5]=jvj+152; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+158,jvj+157,jvj+152)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+162; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+162)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-630); pile[WZ4]=jvj+167; 
(*f[270])( );     /*QUADRI7(100,21,140,(-630),jvj+167)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+169; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+169)*/
pile[v[22]]=jvj+167; pile[WZ1]=111; pile[WZ2]=jvj+168; 
(*f[54])( );     /*TRI1(jvj+167,111,jvj+168)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+169; pile[WZ4]=jvj+168; pile[WZ5]=jvj+166; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+169,jvj+168,jvj+166)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+164; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+164)*/
pile[v[22]]=jvj+162; pile[WZ1]=111; pile[WZ2]=jvj+163; 
(*f[54])( );     /*TRI1(jvj+162,111,jvj+163)*/
pile[v[22]]=jvj+163; pile[WZ1]=jvj+164; pile[WZ2]=103; pile[WZ3]=jvj+165; 
(*f[58])( );     /*TRI3(jvj+163,jvj+164,103,jvj+165)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+166; pile[WZ4]=jvj+165; pile[WZ5]=jvj+153; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+166,jvj+165,jvj+153)*/
pile[WZ2]=111; pile[WZ3]=jvj+151; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+151,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=107; pile[WZ2]=jvj+152; 
(*f[36])( );     /*PLUSC0(jvj+17,107,jvj+152)*/
pile[WZ2]=jvj+153; 
(*f[36])( );     /*PLUSC0(jvj+17,107,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+9,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+10)*/
pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+11)*/
pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+12)*/
pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+15)*/
pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+16)*/
pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=4; pile[WZ4]=jvj+6; 
(*f[192])( );     /*QUADRI4(100,41,130,4,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
I++;
goto l1;
}
