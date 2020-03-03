#include "dx.h"
void SLITHER2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V11=0,V10=0,I=0,V6=0,V5=0,V7=0,V8=0,V9=0,V2=0;
int N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=300;
x[jvj+1]=26253;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2982&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V4=N-1;
V11=V4*V4;
V10=V11-1;
I=0;
l1:if((I<=V10)) goto l3;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:V6=I/V4;
V5=I+V6;
V7=V5+1;
V8=V5+N;
V9=V8+1;
pile[v[22]]=I; pile[WZ1]=(-598); 
(*f[201])( );if(v[102]) goto l2;     /*FCOEFF0(I,(-598),V2)*/
V2=pile[WZ2]; 
if((V2!=3)) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+4)*/
pile[WZ3]=48; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+9)*/
pile[WZ3]=25; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+18)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+23)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+25,jvj+24,jvj+22)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+10)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+26)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+31)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+33; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+33)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+33,jvj+32,jvj+30)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+27,jvj+28,103,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+30,jvj+29,jvj+11)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+34)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+39)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+41)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+41,jvj+40,jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+35,jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+37,jvj+12)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+42)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+47)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+49,jvj+48,jvj+46)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+43,jvj+44,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+46,jvj+45,jvj+13)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+50)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+55)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+57; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+57)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+56; pile[WZ5]=jvj+54; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+57,jvj+56,jvj+54)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+52; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+51,jvj+52,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+54,jvj+53,jvj+14)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+58)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+63; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+63)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+65; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+65)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+65,jvj+64,jvj+62)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+60; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; pile[WZ2]=103; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+59,jvj+60,103,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+62,jvj+61,jvj+15)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+66)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+71; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+71)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+73; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+73)*/
pile[v[22]]=jvj+71; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,111,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=jvj+70; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+73,jvj+72,jvj+70)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+68; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+68)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; pile[WZ2]=103; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+67,jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+70,jvj+69,jvj+16)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+74)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+79)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+81; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+81)*/
pile[v[22]]=jvj+79; pile[WZ1]=111; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(jvj+79,111,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+81; pile[WZ4]=jvj+80; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+81,jvj+80,jvj+78)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+76; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+76)*/
pile[v[22]]=jvj+74; pile[WZ1]=111; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,111,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=jvj+76; pile[WZ2]=103; pile[WZ3]=jvj+77; 
(*f[58])( );     /*TRI3(jvj+75,jvj+76,103,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+78; pile[WZ4]=jvj+77; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+78,jvj+77,jvj+17)*/
pile[WZ2]=111; pile[WZ3]=jvj+9; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+9,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+10)*/
pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+11)*/
pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+12)*/
pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+15)*/
pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+16)*/
pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+82; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+82)*/
pile[WZ3]=25; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+91)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+96; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+96)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+98; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+98)*/
pile[v[22]]=jvj+96; pile[WZ1]=111; pile[WZ2]=jvj+97; 
(*f[54])( );     /*TRI1(jvj+96,111,jvj+97)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+98; pile[WZ4]=jvj+97; pile[WZ5]=jvj+95; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+98,jvj+97,jvj+95)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+93; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+93)*/
pile[v[22]]=jvj+91; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,111,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+93; pile[WZ2]=103; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+92,jvj+93,103,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+95; pile[WZ4]=jvj+94; pile[WZ5]=jvj+83; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+95,jvj+94,jvj+83)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+99)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+104; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+104)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+106; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+106)*/
pile[v[22]]=jvj+104; pile[WZ1]=111; pile[WZ2]=jvj+105; 
(*f[54])( );     /*TRI1(jvj+104,111,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+106; pile[WZ4]=jvj+105; pile[WZ5]=jvj+103; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+106,jvj+105,jvj+103)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+101; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+101)*/
pile[v[22]]=jvj+99; pile[WZ1]=111; pile[WZ2]=jvj+100; 
(*f[54])( );     /*TRI1(jvj+99,111,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=jvj+101; pile[WZ2]=103; pile[WZ3]=jvj+102; 
(*f[58])( );     /*TRI3(jvj+100,jvj+101,103,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+103; pile[WZ4]=jvj+102; pile[WZ5]=jvj+84; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+103,jvj+102,jvj+84)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+107)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+112; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+112)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+114; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+114)*/
pile[v[22]]=jvj+112; pile[WZ1]=111; pile[WZ2]=jvj+113; 
(*f[54])( );     /*TRI1(jvj+112,111,jvj+113)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+114; pile[WZ4]=jvj+113; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+114,jvj+113,jvj+111)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+109; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+109)*/
pile[v[22]]=jvj+107; pile[WZ1]=111; pile[WZ2]=jvj+108; 
(*f[54])( );     /*TRI1(jvj+107,111,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+109; pile[WZ2]=103; pile[WZ3]=jvj+110; 
(*f[58])( );     /*TRI3(jvj+108,jvj+109,103,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+111; pile[WZ4]=jvj+110; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+111,jvj+110,jvj+85)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+115; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+115)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+120; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+120)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+122; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+122)*/
pile[v[22]]=jvj+120; pile[WZ1]=111; pile[WZ2]=jvj+121; 
(*f[54])( );     /*TRI1(jvj+120,111,jvj+121)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+122; pile[WZ4]=jvj+121; pile[WZ5]=jvj+119; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+122,jvj+121,jvj+119)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+117; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+117)*/
pile[v[22]]=jvj+115; pile[WZ1]=111; pile[WZ2]=jvj+116; 
(*f[54])( );     /*TRI1(jvj+115,111,jvj+116)*/
pile[v[22]]=jvj+116; pile[WZ1]=jvj+117; pile[WZ2]=103; pile[WZ3]=jvj+118; 
(*f[58])( );     /*TRI3(jvj+116,jvj+117,103,jvj+118)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+119; pile[WZ4]=jvj+118; pile[WZ5]=jvj+86; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+119,jvj+118,jvj+86)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+123; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+123)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+128; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+128)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+130; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+130)*/
pile[v[22]]=jvj+128; pile[WZ1]=111; pile[WZ2]=jvj+129; 
(*f[54])( );     /*TRI1(jvj+128,111,jvj+129)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+130; pile[WZ4]=jvj+129; pile[WZ5]=jvj+127; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+130,jvj+129,jvj+127)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+125; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+125)*/
pile[v[22]]=jvj+123; pile[WZ1]=111; pile[WZ2]=jvj+124; 
(*f[54])( );     /*TRI1(jvj+123,111,jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=jvj+125; pile[WZ2]=103; pile[WZ3]=jvj+126; 
(*f[58])( );     /*TRI3(jvj+124,jvj+125,103,jvj+126)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+127; pile[WZ4]=jvj+126; pile[WZ5]=jvj+87; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+127,jvj+126,jvj+87)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+131; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+131)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+136; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+136)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+138; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+138)*/
pile[v[22]]=jvj+136; pile[WZ1]=111; pile[WZ2]=jvj+137; 
(*f[54])( );     /*TRI1(jvj+136,111,jvj+137)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+138; pile[WZ4]=jvj+137; pile[WZ5]=jvj+135; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+138,jvj+137,jvj+135)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+133; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+133)*/
pile[v[22]]=jvj+131; pile[WZ1]=111; pile[WZ2]=jvj+132; 
(*f[54])( );     /*TRI1(jvj+131,111,jvj+132)*/
pile[v[22]]=jvj+132; pile[WZ1]=jvj+133; pile[WZ2]=103; pile[WZ3]=jvj+134; 
(*f[58])( );     /*TRI3(jvj+132,jvj+133,103,jvj+134)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+135; pile[WZ4]=jvj+134; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+135,jvj+134,jvj+88)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+139; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+139)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+144; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+144)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+146; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+146)*/
pile[v[22]]=jvj+144; pile[WZ1]=111; pile[WZ2]=jvj+145; 
(*f[54])( );     /*TRI1(jvj+144,111,jvj+145)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+146; pile[WZ4]=jvj+145; pile[WZ5]=jvj+143; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+146,jvj+145,jvj+143)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+141; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+141)*/
pile[v[22]]=jvj+139; pile[WZ1]=111; pile[WZ2]=jvj+140; 
(*f[54])( );     /*TRI1(jvj+139,111,jvj+140)*/
pile[v[22]]=jvj+140; pile[WZ1]=jvj+141; pile[WZ2]=103; pile[WZ3]=jvj+142; 
(*f[58])( );     /*TRI3(jvj+140,jvj+141,103,jvj+142)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+143; pile[WZ4]=jvj+142; pile[WZ5]=jvj+89; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+143,jvj+142,jvj+89)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+147; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+147)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+152; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+152)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+154; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+154)*/
pile[v[22]]=jvj+152; pile[WZ1]=111; pile[WZ2]=jvj+153; 
(*f[54])( );     /*TRI1(jvj+152,111,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+154; pile[WZ4]=jvj+153; pile[WZ5]=jvj+151; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+154,jvj+153,jvj+151)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+149; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+149)*/
pile[v[22]]=jvj+147; pile[WZ1]=111; pile[WZ2]=jvj+148; 
(*f[54])( );     /*TRI1(jvj+147,111,jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=jvj+149; pile[WZ2]=103; pile[WZ3]=jvj+150; 
(*f[58])( );     /*TRI3(jvj+148,jvj+149,103,jvj+150)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+151; pile[WZ4]=jvj+150; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+151,jvj+150,jvj+90)*/
pile[WZ2]=111; pile[WZ3]=jvj+82; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+82,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+83; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+83)*/
pile[WZ2]=jvj+84; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+84)*/
pile[WZ2]=jvj+85; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+85)*/
pile[WZ2]=jvj+86; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+86)*/
pile[WZ2]=jvj+87; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+87)*/
pile[WZ2]=jvj+88; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+88)*/
pile[WZ2]=jvj+89; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+89)*/
pile[WZ2]=jvj+90; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+155; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+155)*/
pile[WZ3]=25; pile[WZ4]=jvj+164; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+164)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+169; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+169)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+171; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+171)*/
pile[v[22]]=jvj+169; pile[WZ1]=111; pile[WZ2]=jvj+170; 
(*f[54])( );     /*TRI1(jvj+169,111,jvj+170)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+171; pile[WZ4]=jvj+170; pile[WZ5]=jvj+168; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+171,jvj+170,jvj+168)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+166; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+166)*/
pile[v[22]]=jvj+164; pile[WZ1]=111; pile[WZ2]=jvj+165; 
(*f[54])( );     /*TRI1(jvj+164,111,jvj+165)*/
pile[v[22]]=jvj+165; pile[WZ1]=jvj+166; pile[WZ2]=103; pile[WZ3]=jvj+167; 
(*f[58])( );     /*TRI3(jvj+165,jvj+166,103,jvj+167)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+168; pile[WZ4]=jvj+167; pile[WZ5]=jvj+156; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+168,jvj+167,jvj+156)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+172; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+172)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+177; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+177)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+179; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+179)*/
pile[v[22]]=jvj+177; pile[WZ1]=111; pile[WZ2]=jvj+178; 
(*f[54])( );     /*TRI1(jvj+177,111,jvj+178)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+179; pile[WZ4]=jvj+178; pile[WZ5]=jvj+176; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+179,jvj+178,jvj+176)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+174; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+174)*/
pile[v[22]]=jvj+172; pile[WZ1]=111; pile[WZ2]=jvj+173; 
(*f[54])( );     /*TRI1(jvj+172,111,jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=jvj+174; pile[WZ2]=103; pile[WZ3]=jvj+175; 
(*f[58])( );     /*TRI3(jvj+173,jvj+174,103,jvj+175)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+176; pile[WZ4]=jvj+175; pile[WZ5]=jvj+157; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+176,jvj+175,jvj+157)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+180; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+180)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+185; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+185)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+187; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+187)*/
pile[v[22]]=jvj+185; pile[WZ1]=111; pile[WZ2]=jvj+186; 
(*f[54])( );     /*TRI1(jvj+185,111,jvj+186)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+187; pile[WZ4]=jvj+186; pile[WZ5]=jvj+184; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+187,jvj+186,jvj+184)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+182; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+182)*/
pile[v[22]]=jvj+180; pile[WZ1]=111; pile[WZ2]=jvj+181; 
(*f[54])( );     /*TRI1(jvj+180,111,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=jvj+182; pile[WZ2]=103; pile[WZ3]=jvj+183; 
(*f[58])( );     /*TRI3(jvj+181,jvj+182,103,jvj+183)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+184; pile[WZ4]=jvj+183; pile[WZ5]=jvj+158; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+184,jvj+183,jvj+158)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+188; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+188)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+193; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+193)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+195; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+195)*/
pile[v[22]]=jvj+193; pile[WZ1]=111; pile[WZ2]=jvj+194; 
(*f[54])( );     /*TRI1(jvj+193,111,jvj+194)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+195; pile[WZ4]=jvj+194; pile[WZ5]=jvj+192; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+195,jvj+194,jvj+192)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+190; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+190)*/
pile[v[22]]=jvj+188; pile[WZ1]=111; pile[WZ2]=jvj+189; 
(*f[54])( );     /*TRI1(jvj+188,111,jvj+189)*/
pile[v[22]]=jvj+189; pile[WZ1]=jvj+190; pile[WZ2]=103; pile[WZ3]=jvj+191; 
(*f[58])( );     /*TRI3(jvj+189,jvj+190,103,jvj+191)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+192; pile[WZ4]=jvj+191; pile[WZ5]=jvj+159; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+192,jvj+191,jvj+159)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+196; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+196)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+201; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+201)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+203; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+203)*/
pile[v[22]]=jvj+201; pile[WZ1]=111; pile[WZ2]=jvj+202; 
(*f[54])( );     /*TRI1(jvj+201,111,jvj+202)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+203; pile[WZ4]=jvj+202; pile[WZ5]=jvj+200; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+203,jvj+202,jvj+200)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+198; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+198)*/
pile[v[22]]=jvj+196; pile[WZ1]=111; pile[WZ2]=jvj+197; 
(*f[54])( );     /*TRI1(jvj+196,111,jvj+197)*/
pile[v[22]]=jvj+197; pile[WZ1]=jvj+198; pile[WZ2]=103; pile[WZ3]=jvj+199; 
(*f[58])( );     /*TRI3(jvj+197,jvj+198,103,jvj+199)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+200; pile[WZ4]=jvj+199; pile[WZ5]=jvj+160; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+200,jvj+199,jvj+160)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+204; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+204)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+209; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+209)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+211; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+211)*/
pile[v[22]]=jvj+209; pile[WZ1]=111; pile[WZ2]=jvj+210; 
(*f[54])( );     /*TRI1(jvj+209,111,jvj+210)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+211; pile[WZ4]=jvj+210; pile[WZ5]=jvj+208; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+211,jvj+210,jvj+208)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+206; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+206)*/
pile[v[22]]=jvj+204; pile[WZ1]=111; pile[WZ2]=jvj+205; 
(*f[54])( );     /*TRI1(jvj+204,111,jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=jvj+206; pile[WZ2]=103; pile[WZ3]=jvj+207; 
(*f[58])( );     /*TRI3(jvj+205,jvj+206,103,jvj+207)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+208; pile[WZ4]=jvj+207; pile[WZ5]=jvj+161; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+208,jvj+207,jvj+161)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+212; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+212)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+217; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+217)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+219; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+219)*/
pile[v[22]]=jvj+217; pile[WZ1]=111; pile[WZ2]=jvj+218; 
(*f[54])( );     /*TRI1(jvj+217,111,jvj+218)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+219; pile[WZ4]=jvj+218; pile[WZ5]=jvj+216; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+219,jvj+218,jvj+216)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+214; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+214)*/
pile[v[22]]=jvj+212; pile[WZ1]=111; pile[WZ2]=jvj+213; 
(*f[54])( );     /*TRI1(jvj+212,111,jvj+213)*/
pile[v[22]]=jvj+213; pile[WZ1]=jvj+214; pile[WZ2]=103; pile[WZ3]=jvj+215; 
(*f[58])( );     /*TRI3(jvj+213,jvj+214,103,jvj+215)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+216; pile[WZ4]=jvj+215; pile[WZ5]=jvj+162; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+216,jvj+215,jvj+162)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+220; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+220)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+225; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+225)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+227; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+227)*/
pile[v[22]]=jvj+225; pile[WZ1]=111; pile[WZ2]=jvj+226; 
(*f[54])( );     /*TRI1(jvj+225,111,jvj+226)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+227; pile[WZ4]=jvj+226; pile[WZ5]=jvj+224; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+227,jvj+226,jvj+224)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+222; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+222)*/
pile[v[22]]=jvj+220; pile[WZ1]=111; pile[WZ2]=jvj+221; 
(*f[54])( );     /*TRI1(jvj+220,111,jvj+221)*/
pile[v[22]]=jvj+221; pile[WZ1]=jvj+222; pile[WZ2]=103; pile[WZ3]=jvj+223; 
(*f[58])( );     /*TRI3(jvj+221,jvj+222,103,jvj+223)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+224; pile[WZ4]=jvj+223; pile[WZ5]=jvj+163; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+224,jvj+223,jvj+163)*/
pile[WZ2]=111; pile[WZ3]=jvj+155; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+155,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+156; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+156)*/
pile[WZ2]=jvj+157; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+157)*/
pile[WZ2]=jvj+158; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+158)*/
pile[WZ2]=jvj+159; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+159)*/
pile[WZ2]=jvj+160; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+160)*/
pile[WZ2]=jvj+161; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+161)*/
pile[WZ2]=jvj+162; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+162)*/
pile[WZ2]=jvj+163; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+163)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+228; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+228)*/
pile[WZ3]=26; pile[WZ4]=jvj+237; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+237)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+242; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+242)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+244; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+244)*/
pile[v[22]]=jvj+242; pile[WZ1]=111; pile[WZ2]=jvj+243; 
(*f[54])( );     /*TRI1(jvj+242,111,jvj+243)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+244; pile[WZ4]=jvj+243; pile[WZ5]=jvj+241; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+244,jvj+243,jvj+241)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+239; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+239)*/
pile[v[22]]=jvj+237; pile[WZ1]=111; pile[WZ2]=jvj+238; 
(*f[54])( );     /*TRI1(jvj+237,111,jvj+238)*/
pile[v[22]]=jvj+238; pile[WZ1]=jvj+239; pile[WZ2]=103; pile[WZ3]=jvj+240; 
(*f[58])( );     /*TRI3(jvj+238,jvj+239,103,jvj+240)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+241; pile[WZ4]=jvj+240; pile[WZ5]=jvj+229; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+241,jvj+240,jvj+229)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+245; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+245)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+250; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+250)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+252; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+252)*/
pile[v[22]]=jvj+250; pile[WZ1]=111; pile[WZ2]=jvj+251; 
(*f[54])( );     /*TRI1(jvj+250,111,jvj+251)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+252; pile[WZ4]=jvj+251; pile[WZ5]=jvj+249; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+252,jvj+251,jvj+249)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+247; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+247)*/
pile[v[22]]=jvj+245; pile[WZ1]=111; pile[WZ2]=jvj+246; 
(*f[54])( );     /*TRI1(jvj+245,111,jvj+246)*/
pile[v[22]]=jvj+246; pile[WZ1]=jvj+247; pile[WZ2]=103; pile[WZ3]=jvj+248; 
(*f[58])( );     /*TRI3(jvj+246,jvj+247,103,jvj+248)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+249; pile[WZ4]=jvj+248; pile[WZ5]=jvj+230; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+249,jvj+248,jvj+230)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+253; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+253)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+258; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+258)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+260; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+260)*/
pile[v[22]]=jvj+258; pile[WZ1]=111; pile[WZ2]=jvj+259; 
(*f[54])( );     /*TRI1(jvj+258,111,jvj+259)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+260; pile[WZ4]=jvj+259; pile[WZ5]=jvj+257; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+260,jvj+259,jvj+257)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+255; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+255)*/
pile[v[22]]=jvj+253; pile[WZ1]=111; pile[WZ2]=jvj+254; 
(*f[54])( );     /*TRI1(jvj+253,111,jvj+254)*/
pile[v[22]]=jvj+254; pile[WZ1]=jvj+255; pile[WZ2]=103; pile[WZ3]=jvj+256; 
(*f[58])( );     /*TRI3(jvj+254,jvj+255,103,jvj+256)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+257; pile[WZ4]=jvj+256; pile[WZ5]=jvj+231; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+257,jvj+256,jvj+231)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+261; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+261)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+266; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+266)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+268; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+268)*/
pile[v[22]]=jvj+266; pile[WZ1]=111; pile[WZ2]=jvj+267; 
(*f[54])( );     /*TRI1(jvj+266,111,jvj+267)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+268; pile[WZ4]=jvj+267; pile[WZ5]=jvj+265; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+268,jvj+267,jvj+265)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+263; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+263)*/
pile[v[22]]=jvj+261; pile[WZ1]=111; pile[WZ2]=jvj+262; 
(*f[54])( );     /*TRI1(jvj+261,111,jvj+262)*/
pile[v[22]]=jvj+262; pile[WZ1]=jvj+263; pile[WZ2]=103; pile[WZ3]=jvj+264; 
(*f[58])( );     /*TRI3(jvj+262,jvj+263,103,jvj+264)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+265; pile[WZ4]=jvj+264; pile[WZ5]=jvj+232; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+265,jvj+264,jvj+232)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+269; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+269)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+274; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+274)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+276; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+276)*/
pile[v[22]]=jvj+274; pile[WZ1]=111; pile[WZ2]=jvj+275; 
(*f[54])( );     /*TRI1(jvj+274,111,jvj+275)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+276; pile[WZ4]=jvj+275; pile[WZ5]=jvj+273; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+276,jvj+275,jvj+273)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+271; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+271)*/
pile[v[22]]=jvj+269; pile[WZ1]=111; pile[WZ2]=jvj+270; 
(*f[54])( );     /*TRI1(jvj+269,111,jvj+270)*/
pile[v[22]]=jvj+270; pile[WZ1]=jvj+271; pile[WZ2]=103; pile[WZ3]=jvj+272; 
(*f[58])( );     /*TRI3(jvj+270,jvj+271,103,jvj+272)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+273; pile[WZ4]=jvj+272; pile[WZ5]=jvj+233; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+273,jvj+272,jvj+233)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+277; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+277)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+282; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+282)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+284; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+284)*/
pile[v[22]]=jvj+282; pile[WZ1]=111; pile[WZ2]=jvj+283; 
(*f[54])( );     /*TRI1(jvj+282,111,jvj+283)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+284; pile[WZ4]=jvj+283; pile[WZ5]=jvj+281; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+284,jvj+283,jvj+281)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+279; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+279)*/
pile[v[22]]=jvj+277; pile[WZ1]=111; pile[WZ2]=jvj+278; 
(*f[54])( );     /*TRI1(jvj+277,111,jvj+278)*/
pile[v[22]]=jvj+278; pile[WZ1]=jvj+279; pile[WZ2]=103; pile[WZ3]=jvj+280; 
(*f[58])( );     /*TRI3(jvj+278,jvj+279,103,jvj+280)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+281; pile[WZ4]=jvj+280; pile[WZ5]=jvj+234; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+281,jvj+280,jvj+234)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+285; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+285)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+290; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+290)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+292; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+292)*/
pile[v[22]]=jvj+290; pile[WZ1]=111; pile[WZ2]=jvj+291; 
(*f[54])( );     /*TRI1(jvj+290,111,jvj+291)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+292; pile[WZ4]=jvj+291; pile[WZ5]=jvj+289; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+292,jvj+291,jvj+289)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+287; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+287)*/
pile[v[22]]=jvj+285; pile[WZ1]=111; pile[WZ2]=jvj+286; 
(*f[54])( );     /*TRI1(jvj+285,111,jvj+286)*/
pile[v[22]]=jvj+286; pile[WZ1]=jvj+287; pile[WZ2]=103; pile[WZ3]=jvj+288; 
(*f[58])( );     /*TRI3(jvj+286,jvj+287,103,jvj+288)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+289; pile[WZ4]=jvj+288; pile[WZ5]=jvj+235; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+289,jvj+288,jvj+235)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+293; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+293)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+298; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+298)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+300; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+300)*/
pile[v[22]]=jvj+298; pile[WZ1]=111; pile[WZ2]=jvj+299; 
(*f[54])( );     /*TRI1(jvj+298,111,jvj+299)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+300; pile[WZ4]=jvj+299; pile[WZ5]=jvj+297; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+300,jvj+299,jvj+297)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+295; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+295)*/
pile[v[22]]=jvj+293; pile[WZ1]=111; pile[WZ2]=jvj+294; 
(*f[54])( );     /*TRI1(jvj+293,111,jvj+294)*/
pile[v[22]]=jvj+294; pile[WZ1]=jvj+295; pile[WZ2]=103; pile[WZ3]=jvj+296; 
(*f[58])( );     /*TRI3(jvj+294,jvj+295,103,jvj+296)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+297; pile[WZ4]=jvj+296; pile[WZ5]=jvj+236; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+297,jvj+296,jvj+236)*/
pile[WZ2]=111; pile[WZ3]=jvj+228; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+228,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+229; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+229)*/
pile[WZ2]=jvj+230; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+230)*/
pile[WZ2]=jvj+231; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+231)*/
pile[WZ2]=jvj+232; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+232)*/
pile[WZ2]=jvj+233; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+233)*/
pile[WZ2]=jvj+234; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+234)*/
pile[WZ2]=jvj+235; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+235)*/
pile[WZ2]=jvj+236; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+236)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+4; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+4,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+5)*/
pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+6)*/
pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+7)*/
pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+8)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l2:I++;
goto l1;
}
