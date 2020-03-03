#include "dx.h"
void CREGLISSER4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=162;
x[jvj+1]=26119;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2465&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
I=0;
l2:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+4)*/
pile[WZ3]=48; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+8)*/
pile[WZ3]=25; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+11)*/
pile[WZ3]=326; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+16)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+21)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+23,jvj+22,jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+17,jvj+18,103,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+19,jvj+15)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=326; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+24)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+31,jvj+30,jvj+28)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+27,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+12,jvj+13,103,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+14,jvj+9)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+32)*/
pile[WZ3]=1307; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,1307,jvj+37)*/
pile[WZ3]=63; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+42)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+47)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+49,jvj+48,jvj+46)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+43,jvj+44,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+46,jvj+45,jvj+41)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+50)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+55)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+57; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+57)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+56; pile[WZ5]=jvj+54; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+57,jvj+56,jvj+54)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+52; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+51,jvj+52,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+54,jvj+53,jvj+39)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+41,jvj+40,jvj+36)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+35,jvj+10)*/
pile[WZ2]=111; pile[WZ3]=jvj+8; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+8,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=107; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+9)*/
pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+58)*/
pile[WZ3]=25; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+61)*/
pile[WZ3]=63; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+66)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+71; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+71)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+73; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+73)*/
pile[v[22]]=jvj+71; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,111,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=jvj+70; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+73,jvj+72,jvj+70)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+68; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+68)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; pile[WZ2]=103; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+67,jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+70,jvj+69,jvj+65)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+74)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+79)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+81; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+81)*/
pile[v[22]]=jvj+79; pile[WZ1]=111; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(jvj+79,111,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+81; pile[WZ4]=jvj+80; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+81,jvj+80,jvj+78)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+76; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+76)*/
pile[v[22]]=jvj+74; pile[WZ1]=111; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,111,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=jvj+76; pile[WZ2]=103; pile[WZ3]=jvj+77; 
(*f[58])( );     /*TRI3(jvj+75,jvj+76,103,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+78; pile[WZ4]=jvj+77; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+78,jvj+77,jvj+63)*/
pile[v[22]]=jvj+61; pile[WZ1]=111; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,111,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; pile[WZ2]=103; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+62,jvj+63,103,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+65,jvj+64,jvj+59)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+82; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+82)*/
pile[WZ3]=1307; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,1307,jvj+87)*/
pile[WZ3]=326; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+92)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+97; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+97)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+99; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+99)*/
pile[v[22]]=jvj+97; pile[WZ1]=111; pile[WZ2]=jvj+98; 
(*f[54])( );     /*TRI1(jvj+97,111,jvj+98)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+99; pile[WZ4]=jvj+98; pile[WZ5]=jvj+96; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+99,jvj+98,jvj+96)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+94; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+94)*/
pile[v[22]]=jvj+92; pile[WZ1]=111; pile[WZ2]=jvj+93; 
(*f[54])( );     /*TRI1(jvj+92,111,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+94; pile[WZ2]=103; pile[WZ3]=jvj+95; 
(*f[58])( );     /*TRI3(jvj+93,jvj+94,103,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+96; pile[WZ4]=jvj+95; pile[WZ5]=jvj+91; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+96,jvj+95,jvj+91)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=326; pile[WZ4]=jvj+100; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+100)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+105; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+105)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+107; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+107)*/
pile[v[22]]=jvj+105; pile[WZ1]=111; pile[WZ2]=jvj+106; 
(*f[54])( );     /*TRI1(jvj+105,111,jvj+106)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+107; pile[WZ4]=jvj+106; pile[WZ5]=jvj+104; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+107,jvj+106,jvj+104)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+102; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+102)*/
pile[v[22]]=jvj+100; pile[WZ1]=111; pile[WZ2]=jvj+101; 
(*f[54])( );     /*TRI1(jvj+100,111,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=jvj+102; pile[WZ2]=103; pile[WZ3]=jvj+103; 
(*f[58])( );     /*TRI3(jvj+101,jvj+102,103,jvj+103)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+104; pile[WZ4]=jvj+103; pile[WZ5]=jvj+89; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+104,jvj+103,jvj+89)*/
pile[v[22]]=jvj+87; pile[WZ1]=111; pile[WZ2]=jvj+88; 
(*f[54])( );     /*TRI1(jvj+87,111,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+89; pile[WZ2]=103; pile[WZ3]=jvj+90; 
(*f[58])( );     /*TRI3(jvj+88,jvj+89,103,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+91; pile[WZ4]=jvj+90; pile[WZ5]=jvj+86; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+91,jvj+90,jvj+86)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+84; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+84)*/
pile[v[22]]=jvj+82; pile[WZ1]=111; pile[WZ2]=jvj+83; 
(*f[54])( );     /*TRI1(jvj+82,111,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=jvj+84; pile[WZ2]=103; pile[WZ3]=jvj+85; 
(*f[58])( );     /*TRI3(jvj+83,jvj+84,103,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+86; pile[WZ4]=jvj+85; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+86,jvj+85,jvj+60)*/
pile[WZ2]=111; pile[WZ3]=jvj+58; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+58,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+59; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+59)*/
pile[WZ2]=jvj+60; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+108; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+108)*/
pile[WZ3]=25; pile[WZ4]=jvj+111; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+111)*/
pile[WZ3]=1307; pile[WZ4]=jvj+116; 
(*f[181])( );     /*QUADRI2(100,20,101,1307,jvj+116)*/
pile[WZ3]=63; pile[WZ4]=jvj+121; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+121)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+126; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+126)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+128; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+128)*/
pile[v[22]]=jvj+126; pile[WZ1]=111; pile[WZ2]=jvj+127; 
(*f[54])( );     /*TRI1(jvj+126,111,jvj+127)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+128; pile[WZ4]=jvj+127; pile[WZ5]=jvj+125; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+128,jvj+127,jvj+125)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+123; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+123)*/
pile[v[22]]=jvj+121; pile[WZ1]=111; pile[WZ2]=jvj+122; 
(*f[54])( );     /*TRI1(jvj+121,111,jvj+122)*/
pile[v[22]]=jvj+122; pile[WZ1]=jvj+123; pile[WZ2]=103; pile[WZ3]=jvj+124; 
(*f[58])( );     /*TRI3(jvj+122,jvj+123,103,jvj+124)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+125; pile[WZ4]=jvj+124; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+125,jvj+124,jvj+120)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+129; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+129)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+134; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+134)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+136; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+136)*/
pile[v[22]]=jvj+134; pile[WZ1]=111; pile[WZ2]=jvj+135; 
(*f[54])( );     /*TRI1(jvj+134,111,jvj+135)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+136; pile[WZ4]=jvj+135; pile[WZ5]=jvj+133; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+136,jvj+135,jvj+133)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+131; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+131)*/
pile[v[22]]=jvj+129; pile[WZ1]=111; pile[WZ2]=jvj+130; 
(*f[54])( );     /*TRI1(jvj+129,111,jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=jvj+131; pile[WZ2]=103; pile[WZ3]=jvj+132; 
(*f[58])( );     /*TRI3(jvj+130,jvj+131,103,jvj+132)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+133; pile[WZ4]=jvj+132; pile[WZ5]=jvj+118; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+133,jvj+132,jvj+118)*/
pile[v[22]]=jvj+116; pile[WZ1]=111; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+116,111,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; pile[WZ2]=103; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+117,jvj+118,103,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+120; pile[WZ4]=jvj+119; pile[WZ5]=jvj+115; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+120,jvj+119,jvj+115)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+113; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+113)*/
pile[v[22]]=jvj+111; pile[WZ1]=111; pile[WZ2]=jvj+112; 
(*f[54])( );     /*TRI1(jvj+111,111,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+113; pile[WZ2]=103; pile[WZ3]=jvj+114; 
(*f[58])( );     /*TRI3(jvj+112,jvj+113,103,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+115; pile[WZ4]=jvj+114; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+115,jvj+114,jvj+109)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+137; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+137)*/
pile[WZ3]=1307; pile[WZ4]=jvj+142; 
(*f[181])( );     /*QUADRI2(100,20,101,1307,jvj+142)*/
pile[WZ3]=326; pile[WZ4]=jvj+147; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+147)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+152; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+152)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+154; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+154)*/
pile[v[22]]=jvj+152; pile[WZ1]=111; pile[WZ2]=jvj+153; 
(*f[54])( );     /*TRI1(jvj+152,111,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+154; pile[WZ4]=jvj+153; pile[WZ5]=jvj+151; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+154,jvj+153,jvj+151)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+149; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+149)*/
pile[v[22]]=jvj+147; pile[WZ1]=111; pile[WZ2]=jvj+148; 
(*f[54])( );     /*TRI1(jvj+147,111,jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=jvj+149; pile[WZ2]=103; pile[WZ3]=jvj+150; 
(*f[58])( );     /*TRI3(jvj+148,jvj+149,103,jvj+150)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+151; pile[WZ4]=jvj+150; pile[WZ5]=jvj+146; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+151,jvj+150,jvj+146)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=326; pile[WZ4]=jvj+155; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+155)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+160; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+160)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+162; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+162)*/
pile[v[22]]=jvj+160; pile[WZ1]=111; pile[WZ2]=jvj+161; 
(*f[54])( );     /*TRI1(jvj+160,111,jvj+161)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+162; pile[WZ4]=jvj+161; pile[WZ5]=jvj+159; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+162,jvj+161,jvj+159)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+157; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+157)*/
pile[v[22]]=jvj+155; pile[WZ1]=111; pile[WZ2]=jvj+156; 
(*f[54])( );     /*TRI1(jvj+155,111,jvj+156)*/
pile[v[22]]=jvj+156; pile[WZ1]=jvj+157; pile[WZ2]=103; pile[WZ3]=jvj+158; 
(*f[58])( );     /*TRI3(jvj+156,jvj+157,103,jvj+158)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+159; pile[WZ4]=jvj+158; pile[WZ5]=jvj+144; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+159,jvj+158,jvj+144)*/
pile[v[22]]=jvj+142; pile[WZ1]=111; pile[WZ2]=jvj+143; 
(*f[54])( );     /*TRI1(jvj+142,111,jvj+143)*/
pile[v[22]]=jvj+143; pile[WZ1]=jvj+144; pile[WZ2]=103; pile[WZ3]=jvj+145; 
(*f[58])( );     /*TRI3(jvj+143,jvj+144,103,jvj+145)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+146; pile[WZ4]=jvj+145; pile[WZ5]=jvj+141; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+146,jvj+145,jvj+141)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+139; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+139)*/
pile[v[22]]=jvj+137; pile[WZ1]=111; pile[WZ2]=jvj+138; 
(*f[54])( );     /*TRI1(jvj+137,111,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=jvj+139; pile[WZ2]=103; pile[WZ3]=jvj+140; 
(*f[58])( );     /*TRI3(jvj+138,jvj+139,103,jvj+140)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+141; pile[WZ4]=jvj+140; pile[WZ5]=jvj+110; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+141,jvj+140,jvj+110)*/
pile[WZ2]=111; pile[WZ3]=jvj+108; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+108,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+109; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+109)*/
pile[WZ2]=jvj+110; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+4; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+4,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+5)*/
pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+6)*/
pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+7)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
I++;
if((I<=2)) goto l2;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
