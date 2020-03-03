#include "dx.h"
void SLITHER3(void )
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
v[0]+=448;
x[jvj+1]=26253;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2983&&v[97]==0) {
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
if((V2!=2)) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+4)*/
pile[WZ3]=48; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+11)*/
pile[WZ3]=25; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+20)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+27,jvj+26,jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+21,jvj+22,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+23,jvj+12)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+28)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+35)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+35,jvj+34,jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+32,jvj+31,jvj+13)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+36)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+43)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+42; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+43,jvj+42,jvj+40)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=103; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+37,jvj+38,103,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+39; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+40,jvj+39,jvj+14)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+44)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+49; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+49)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+51; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+51)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+51; pile[WZ4]=jvj+50; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+51,jvj+50,jvj+48)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+46; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+46)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; pile[WZ2]=103; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+45,jvj+46,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+48,jvj+47,jvj+15)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+52)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+57)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+59; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+59)*/
pile[v[22]]=jvj+57; pile[WZ1]=111; pile[WZ2]=jvj+58; 
(*f[54])( );     /*TRI1(jvj+57,111,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+59; pile[WZ4]=jvj+58; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+59,jvj+58,jvj+56)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+54; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+54)*/
pile[v[22]]=jvj+52; pile[WZ1]=111; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,111,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; pile[WZ2]=103; pile[WZ3]=jvj+55; 
(*f[58])( );     /*TRI3(jvj+53,jvj+54,103,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+56; pile[WZ4]=jvj+55; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+56,jvj+55,jvj+16)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+60)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+65; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+65)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+67; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+67)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+66; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+67,jvj+66,jvj+64)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+62; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+62)*/
pile[v[22]]=jvj+60; pile[WZ1]=111; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,111,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ2]=103; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+61,jvj+62,103,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+64,jvj+63,jvj+17)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+68)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+73; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+73)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+75; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+75)*/
pile[v[22]]=jvj+73; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,111,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+75; pile[WZ4]=jvj+74; pile[WZ5]=jvj+72; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+75,jvj+74,jvj+72)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+70; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+70)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+70; pile[WZ2]=103; pile[WZ3]=jvj+71; 
(*f[58])( );     /*TRI3(jvj+69,jvj+70,103,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+71; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+72,jvj+71,jvj+18)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+76)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+81; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+81)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+83; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+83)*/
pile[v[22]]=jvj+81; pile[WZ1]=111; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+81,111,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+83; pile[WZ4]=jvj+82; pile[WZ5]=jvj+80; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+83,jvj+82,jvj+80)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+78; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+78)*/
pile[v[22]]=jvj+76; pile[WZ1]=111; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,111,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; pile[WZ2]=103; pile[WZ3]=jvj+79; 
(*f[58])( );     /*TRI3(jvj+77,jvj+78,103,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+80; pile[WZ4]=jvj+79; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+80,jvj+79,jvj+19)*/
pile[WZ2]=111; pile[WZ3]=jvj+11; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+11,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=107; pile[WZ2]=jvj+12; 
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
pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+18)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+84)*/
pile[WZ3]=25; pile[WZ4]=jvj+93; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+93)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+98; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+98)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+100; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+100)*/
pile[v[22]]=jvj+98; pile[WZ1]=111; pile[WZ2]=jvj+99; 
(*f[54])( );     /*TRI1(jvj+98,111,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+100; pile[WZ4]=jvj+99; pile[WZ5]=jvj+97; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+100,jvj+99,jvj+97)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+95; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+95)*/
pile[v[22]]=jvj+93; pile[WZ1]=111; pile[WZ2]=jvj+94; 
(*f[54])( );     /*TRI1(jvj+93,111,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=jvj+95; pile[WZ2]=103; pile[WZ3]=jvj+96; 
(*f[58])( );     /*TRI3(jvj+94,jvj+95,103,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+97; pile[WZ4]=jvj+96; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+97,jvj+96,jvj+85)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+101)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+106; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+106)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+108; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+108)*/
pile[v[22]]=jvj+106; pile[WZ1]=111; pile[WZ2]=jvj+107; 
(*f[54])( );     /*TRI1(jvj+106,111,jvj+107)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+108; pile[WZ4]=jvj+107; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+108,jvj+107,jvj+105)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+103; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+103)*/
pile[v[22]]=jvj+101; pile[WZ1]=111; pile[WZ2]=jvj+102; 
(*f[54])( );     /*TRI1(jvj+101,111,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=jvj+103; pile[WZ2]=103; pile[WZ3]=jvj+104; 
(*f[58])( );     /*TRI3(jvj+102,jvj+103,103,jvj+104)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+105; pile[WZ4]=jvj+104; pile[WZ5]=jvj+86; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+105,jvj+104,jvj+86)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+109; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+109)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+114; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+114)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+116; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+116)*/
pile[v[22]]=jvj+114; pile[WZ1]=111; pile[WZ2]=jvj+115; 
(*f[54])( );     /*TRI1(jvj+114,111,jvj+115)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+116; pile[WZ4]=jvj+115; pile[WZ5]=jvj+113; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+116,jvj+115,jvj+113)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+111; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+111)*/
pile[v[22]]=jvj+109; pile[WZ1]=111; pile[WZ2]=jvj+110; 
(*f[54])( );     /*TRI1(jvj+109,111,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=jvj+111; pile[WZ2]=103; pile[WZ3]=jvj+112; 
(*f[58])( );     /*TRI3(jvj+110,jvj+111,103,jvj+112)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+113; pile[WZ4]=jvj+112; pile[WZ5]=jvj+87; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+113,jvj+112,jvj+87)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+117; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+117)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+122; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+122)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+124; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+124)*/
pile[v[22]]=jvj+122; pile[WZ1]=111; pile[WZ2]=jvj+123; 
(*f[54])( );     /*TRI1(jvj+122,111,jvj+123)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+124; pile[WZ4]=jvj+123; pile[WZ5]=jvj+121; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+124,jvj+123,jvj+121)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+119; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+119)*/
pile[v[22]]=jvj+117; pile[WZ1]=111; pile[WZ2]=jvj+118; 
(*f[54])( );     /*TRI1(jvj+117,111,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=jvj+119; pile[WZ2]=103; pile[WZ3]=jvj+120; 
(*f[58])( );     /*TRI3(jvj+118,jvj+119,103,jvj+120)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+121; pile[WZ4]=jvj+120; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+121,jvj+120,jvj+88)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+125; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+125)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+130; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+130)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+132; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+132)*/
pile[v[22]]=jvj+130; pile[WZ1]=111; pile[WZ2]=jvj+131; 
(*f[54])( );     /*TRI1(jvj+130,111,jvj+131)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+132; pile[WZ4]=jvj+131; pile[WZ5]=jvj+129; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+132,jvj+131,jvj+129)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+127; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+127)*/
pile[v[22]]=jvj+125; pile[WZ1]=111; pile[WZ2]=jvj+126; 
(*f[54])( );     /*TRI1(jvj+125,111,jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+127; pile[WZ2]=103; pile[WZ3]=jvj+128; 
(*f[58])( );     /*TRI3(jvj+126,jvj+127,103,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+129; pile[WZ4]=jvj+128; pile[WZ5]=jvj+89; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+129,jvj+128,jvj+89)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+133; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+133)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+138; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+138)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+140; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+140)*/
pile[v[22]]=jvj+138; pile[WZ1]=111; pile[WZ2]=jvj+139; 
(*f[54])( );     /*TRI1(jvj+138,111,jvj+139)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+140; pile[WZ4]=jvj+139; pile[WZ5]=jvj+137; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+140,jvj+139,jvj+137)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+135; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+135)*/
pile[v[22]]=jvj+133; pile[WZ1]=111; pile[WZ2]=jvj+134; 
(*f[54])( );     /*TRI1(jvj+133,111,jvj+134)*/
pile[v[22]]=jvj+134; pile[WZ1]=jvj+135; pile[WZ2]=103; pile[WZ3]=jvj+136; 
(*f[58])( );     /*TRI3(jvj+134,jvj+135,103,jvj+136)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+137; pile[WZ4]=jvj+136; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+137,jvj+136,jvj+90)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+141; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+141)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+146; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+146)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+148; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+148)*/
pile[v[22]]=jvj+146; pile[WZ1]=111; pile[WZ2]=jvj+147; 
(*f[54])( );     /*TRI1(jvj+146,111,jvj+147)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+148; pile[WZ4]=jvj+147; pile[WZ5]=jvj+145; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+148,jvj+147,jvj+145)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+143; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+143)*/
pile[v[22]]=jvj+141; pile[WZ1]=111; pile[WZ2]=jvj+142; 
(*f[54])( );     /*TRI1(jvj+141,111,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=jvj+143; pile[WZ2]=103; pile[WZ3]=jvj+144; 
(*f[58])( );     /*TRI3(jvj+142,jvj+143,103,jvj+144)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+145; pile[WZ4]=jvj+144; pile[WZ5]=jvj+91; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+145,jvj+144,jvj+91)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+149; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+149)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+154; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+154)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+156; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+156)*/
pile[v[22]]=jvj+154; pile[WZ1]=111; pile[WZ2]=jvj+155; 
(*f[54])( );     /*TRI1(jvj+154,111,jvj+155)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+156; pile[WZ4]=jvj+155; pile[WZ5]=jvj+153; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+156,jvj+155,jvj+153)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+151; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+151)*/
pile[v[22]]=jvj+149; pile[WZ1]=111; pile[WZ2]=jvj+150; 
(*f[54])( );     /*TRI1(jvj+149,111,jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=jvj+151; pile[WZ2]=103; pile[WZ3]=jvj+152; 
(*f[58])( );     /*TRI3(jvj+150,jvj+151,103,jvj+152)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+153; pile[WZ4]=jvj+152; pile[WZ5]=jvj+92; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+153,jvj+152,jvj+92)*/
pile[WZ2]=111; pile[WZ3]=jvj+84; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+84,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+85; 
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
pile[WZ2]=jvj+91; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+91)*/
pile[WZ2]=jvj+92; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+157; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+157)*/
pile[WZ3]=25; pile[WZ4]=jvj+166; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+166)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+171; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+171)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+173; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+173)*/
pile[v[22]]=jvj+171; pile[WZ1]=111; pile[WZ2]=jvj+172; 
(*f[54])( );     /*TRI1(jvj+171,111,jvj+172)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+173; pile[WZ4]=jvj+172; pile[WZ5]=jvj+170; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+173,jvj+172,jvj+170)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+168; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+168)*/
pile[v[22]]=jvj+166; pile[WZ1]=111; pile[WZ2]=jvj+167; 
(*f[54])( );     /*TRI1(jvj+166,111,jvj+167)*/
pile[v[22]]=jvj+167; pile[WZ1]=jvj+168; pile[WZ2]=103; pile[WZ3]=jvj+169; 
(*f[58])( );     /*TRI3(jvj+167,jvj+168,103,jvj+169)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+170; pile[WZ4]=jvj+169; pile[WZ5]=jvj+158; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+170,jvj+169,jvj+158)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+174; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+174)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+179; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+179)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+181; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+181)*/
pile[v[22]]=jvj+179; pile[WZ1]=111; pile[WZ2]=jvj+180; 
(*f[54])( );     /*TRI1(jvj+179,111,jvj+180)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+181; pile[WZ4]=jvj+180; pile[WZ5]=jvj+178; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+181,jvj+180,jvj+178)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+176; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+176)*/
pile[v[22]]=jvj+174; pile[WZ1]=111; pile[WZ2]=jvj+175; 
(*f[54])( );     /*TRI1(jvj+174,111,jvj+175)*/
pile[v[22]]=jvj+175; pile[WZ1]=jvj+176; pile[WZ2]=103; pile[WZ3]=jvj+177; 
(*f[58])( );     /*TRI3(jvj+175,jvj+176,103,jvj+177)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+178; pile[WZ4]=jvj+177; pile[WZ5]=jvj+159; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+178,jvj+177,jvj+159)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+182; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+182)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+187; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+187)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+189; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+189)*/
pile[v[22]]=jvj+187; pile[WZ1]=111; pile[WZ2]=jvj+188; 
(*f[54])( );     /*TRI1(jvj+187,111,jvj+188)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+189; pile[WZ4]=jvj+188; pile[WZ5]=jvj+186; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+189,jvj+188,jvj+186)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+184; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+184)*/
pile[v[22]]=jvj+182; pile[WZ1]=111; pile[WZ2]=jvj+183; 
(*f[54])( );     /*TRI1(jvj+182,111,jvj+183)*/
pile[v[22]]=jvj+183; pile[WZ1]=jvj+184; pile[WZ2]=103; pile[WZ3]=jvj+185; 
(*f[58])( );     /*TRI3(jvj+183,jvj+184,103,jvj+185)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+186; pile[WZ4]=jvj+185; pile[WZ5]=jvj+160; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+186,jvj+185,jvj+160)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+190; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+190)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+195; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+195)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+197; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+197)*/
pile[v[22]]=jvj+195; pile[WZ1]=111; pile[WZ2]=jvj+196; 
(*f[54])( );     /*TRI1(jvj+195,111,jvj+196)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+197; pile[WZ4]=jvj+196; pile[WZ5]=jvj+194; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+197,jvj+196,jvj+194)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+192; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+192)*/
pile[v[22]]=jvj+190; pile[WZ1]=111; pile[WZ2]=jvj+191; 
(*f[54])( );     /*TRI1(jvj+190,111,jvj+191)*/
pile[v[22]]=jvj+191; pile[WZ1]=jvj+192; pile[WZ2]=103; pile[WZ3]=jvj+193; 
(*f[58])( );     /*TRI3(jvj+191,jvj+192,103,jvj+193)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+194; pile[WZ4]=jvj+193; pile[WZ5]=jvj+161; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+194,jvj+193,jvj+161)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+198; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+198)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+203; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+203)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+205; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+205)*/
pile[v[22]]=jvj+203; pile[WZ1]=111; pile[WZ2]=jvj+204; 
(*f[54])( );     /*TRI1(jvj+203,111,jvj+204)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+205; pile[WZ4]=jvj+204; pile[WZ5]=jvj+202; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+205,jvj+204,jvj+202)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+200; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+200)*/
pile[v[22]]=jvj+198; pile[WZ1]=111; pile[WZ2]=jvj+199; 
(*f[54])( );     /*TRI1(jvj+198,111,jvj+199)*/
pile[v[22]]=jvj+199; pile[WZ1]=jvj+200; pile[WZ2]=103; pile[WZ3]=jvj+201; 
(*f[58])( );     /*TRI3(jvj+199,jvj+200,103,jvj+201)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+202; pile[WZ4]=jvj+201; pile[WZ5]=jvj+162; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+202,jvj+201,jvj+162)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+206; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+206)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+211; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+211)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+213; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+213)*/
pile[v[22]]=jvj+211; pile[WZ1]=111; pile[WZ2]=jvj+212; 
(*f[54])( );     /*TRI1(jvj+211,111,jvj+212)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+213; pile[WZ4]=jvj+212; pile[WZ5]=jvj+210; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+213,jvj+212,jvj+210)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+208; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+208)*/
pile[v[22]]=jvj+206; pile[WZ1]=111; pile[WZ2]=jvj+207; 
(*f[54])( );     /*TRI1(jvj+206,111,jvj+207)*/
pile[v[22]]=jvj+207; pile[WZ1]=jvj+208; pile[WZ2]=103; pile[WZ3]=jvj+209; 
(*f[58])( );     /*TRI3(jvj+207,jvj+208,103,jvj+209)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+210; pile[WZ4]=jvj+209; pile[WZ5]=jvj+163; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+210,jvj+209,jvj+163)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+214; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+214)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+219; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+219)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+221; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+221)*/
pile[v[22]]=jvj+219; pile[WZ1]=111; pile[WZ2]=jvj+220; 
(*f[54])( );     /*TRI1(jvj+219,111,jvj+220)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+221; pile[WZ4]=jvj+220; pile[WZ5]=jvj+218; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+221,jvj+220,jvj+218)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+216; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+216)*/
pile[v[22]]=jvj+214; pile[WZ1]=111; pile[WZ2]=jvj+215; 
(*f[54])( );     /*TRI1(jvj+214,111,jvj+215)*/
pile[v[22]]=jvj+215; pile[WZ1]=jvj+216; pile[WZ2]=103; pile[WZ3]=jvj+217; 
(*f[58])( );     /*TRI3(jvj+215,jvj+216,103,jvj+217)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+218; pile[WZ4]=jvj+217; pile[WZ5]=jvj+164; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+218,jvj+217,jvj+164)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+222; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+222)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+227; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+227)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+229; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+229)*/
pile[v[22]]=jvj+227; pile[WZ1]=111; pile[WZ2]=jvj+228; 
(*f[54])( );     /*TRI1(jvj+227,111,jvj+228)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+229; pile[WZ4]=jvj+228; pile[WZ5]=jvj+226; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+229,jvj+228,jvj+226)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+224; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+224)*/
pile[v[22]]=jvj+222; pile[WZ1]=111; pile[WZ2]=jvj+223; 
(*f[54])( );     /*TRI1(jvj+222,111,jvj+223)*/
pile[v[22]]=jvj+223; pile[WZ1]=jvj+224; pile[WZ2]=103; pile[WZ3]=jvj+225; 
(*f[58])( );     /*TRI3(jvj+223,jvj+224,103,jvj+225)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+226; pile[WZ4]=jvj+225; pile[WZ5]=jvj+165; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+226,jvj+225,jvj+165)*/
pile[WZ2]=111; pile[WZ3]=jvj+157; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+157,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+158; 
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
pile[WZ2]=jvj+164; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+164)*/
pile[WZ2]=jvj+165; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+165)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+230)*/
pile[WZ3]=26; pile[WZ4]=jvj+239; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+239)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+244; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+244)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+246; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+246)*/
pile[v[22]]=jvj+244; pile[WZ1]=111; pile[WZ2]=jvj+245; 
(*f[54])( );     /*TRI1(jvj+244,111,jvj+245)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+246; pile[WZ4]=jvj+245; pile[WZ5]=jvj+243; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+246,jvj+245,jvj+243)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+241; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+241)*/
pile[v[22]]=jvj+239; pile[WZ1]=111; pile[WZ2]=jvj+240; 
(*f[54])( );     /*TRI1(jvj+239,111,jvj+240)*/
pile[v[22]]=jvj+240; pile[WZ1]=jvj+241; pile[WZ2]=103; pile[WZ3]=jvj+242; 
(*f[58])( );     /*TRI3(jvj+240,jvj+241,103,jvj+242)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+243; pile[WZ4]=jvj+242; pile[WZ5]=jvj+231; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+243,jvj+242,jvj+231)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+247; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+247)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+252; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+252)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+254; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+254)*/
pile[v[22]]=jvj+252; pile[WZ1]=111; pile[WZ2]=jvj+253; 
(*f[54])( );     /*TRI1(jvj+252,111,jvj+253)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+254; pile[WZ4]=jvj+253; pile[WZ5]=jvj+251; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+254,jvj+253,jvj+251)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+249; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+249)*/
pile[v[22]]=jvj+247; pile[WZ1]=111; pile[WZ2]=jvj+248; 
(*f[54])( );     /*TRI1(jvj+247,111,jvj+248)*/
pile[v[22]]=jvj+248; pile[WZ1]=jvj+249; pile[WZ2]=103; pile[WZ3]=jvj+250; 
(*f[58])( );     /*TRI3(jvj+248,jvj+249,103,jvj+250)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+251; pile[WZ4]=jvj+250; pile[WZ5]=jvj+232; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+251,jvj+250,jvj+232)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+255; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+255)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+260; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+260)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+262; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+262)*/
pile[v[22]]=jvj+260; pile[WZ1]=111; pile[WZ2]=jvj+261; 
(*f[54])( );     /*TRI1(jvj+260,111,jvj+261)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+262; pile[WZ4]=jvj+261; pile[WZ5]=jvj+259; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+262,jvj+261,jvj+259)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+257; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+257)*/
pile[v[22]]=jvj+255; pile[WZ1]=111; pile[WZ2]=jvj+256; 
(*f[54])( );     /*TRI1(jvj+255,111,jvj+256)*/
pile[v[22]]=jvj+256; pile[WZ1]=jvj+257; pile[WZ2]=103; pile[WZ3]=jvj+258; 
(*f[58])( );     /*TRI3(jvj+256,jvj+257,103,jvj+258)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+259; pile[WZ4]=jvj+258; pile[WZ5]=jvj+233; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+259,jvj+258,jvj+233)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+263; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+263)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+268; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+268)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+270; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+270)*/
pile[v[22]]=jvj+268; pile[WZ1]=111; pile[WZ2]=jvj+269; 
(*f[54])( );     /*TRI1(jvj+268,111,jvj+269)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+270; pile[WZ4]=jvj+269; pile[WZ5]=jvj+267; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+270,jvj+269,jvj+267)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+265; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+265)*/
pile[v[22]]=jvj+263; pile[WZ1]=111; pile[WZ2]=jvj+264; 
(*f[54])( );     /*TRI1(jvj+263,111,jvj+264)*/
pile[v[22]]=jvj+264; pile[WZ1]=jvj+265; pile[WZ2]=103; pile[WZ3]=jvj+266; 
(*f[58])( );     /*TRI3(jvj+264,jvj+265,103,jvj+266)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+267; pile[WZ4]=jvj+266; pile[WZ5]=jvj+234; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+267,jvj+266,jvj+234)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+271; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+271)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+276; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+276)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+278; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+278)*/
pile[v[22]]=jvj+276; pile[WZ1]=111; pile[WZ2]=jvj+277; 
(*f[54])( );     /*TRI1(jvj+276,111,jvj+277)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+278; pile[WZ4]=jvj+277; pile[WZ5]=jvj+275; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+278,jvj+277,jvj+275)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+273; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+273)*/
pile[v[22]]=jvj+271; pile[WZ1]=111; pile[WZ2]=jvj+272; 
(*f[54])( );     /*TRI1(jvj+271,111,jvj+272)*/
pile[v[22]]=jvj+272; pile[WZ1]=jvj+273; pile[WZ2]=103; pile[WZ3]=jvj+274; 
(*f[58])( );     /*TRI3(jvj+272,jvj+273,103,jvj+274)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+275; pile[WZ4]=jvj+274; pile[WZ5]=jvj+235; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+275,jvj+274,jvj+235)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+279; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+279)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+284; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+284)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+286; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+286)*/
pile[v[22]]=jvj+284; pile[WZ1]=111; pile[WZ2]=jvj+285; 
(*f[54])( );     /*TRI1(jvj+284,111,jvj+285)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+286; pile[WZ4]=jvj+285; pile[WZ5]=jvj+283; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+286,jvj+285,jvj+283)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+281; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+281)*/
pile[v[22]]=jvj+279; pile[WZ1]=111; pile[WZ2]=jvj+280; 
(*f[54])( );     /*TRI1(jvj+279,111,jvj+280)*/
pile[v[22]]=jvj+280; pile[WZ1]=jvj+281; pile[WZ2]=103; pile[WZ3]=jvj+282; 
(*f[58])( );     /*TRI3(jvj+280,jvj+281,103,jvj+282)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+283; pile[WZ4]=jvj+282; pile[WZ5]=jvj+236; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+283,jvj+282,jvj+236)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+287; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+287)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+292; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+292)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+294; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+294)*/
pile[v[22]]=jvj+292; pile[WZ1]=111; pile[WZ2]=jvj+293; 
(*f[54])( );     /*TRI1(jvj+292,111,jvj+293)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+294; pile[WZ4]=jvj+293; pile[WZ5]=jvj+291; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+294,jvj+293,jvj+291)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+289; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+289)*/
pile[v[22]]=jvj+287; pile[WZ1]=111; pile[WZ2]=jvj+288; 
(*f[54])( );     /*TRI1(jvj+287,111,jvj+288)*/
pile[v[22]]=jvj+288; pile[WZ1]=jvj+289; pile[WZ2]=103; pile[WZ3]=jvj+290; 
(*f[58])( );     /*TRI3(jvj+288,jvj+289,103,jvj+290)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+291; pile[WZ4]=jvj+290; pile[WZ5]=jvj+237; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+291,jvj+290,jvj+237)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+295; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+295)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+300; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+300)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+302; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+302)*/
pile[v[22]]=jvj+300; pile[WZ1]=111; pile[WZ2]=jvj+301; 
(*f[54])( );     /*TRI1(jvj+300,111,jvj+301)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+302; pile[WZ4]=jvj+301; pile[WZ5]=jvj+299; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+302,jvj+301,jvj+299)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+297; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+297)*/
pile[v[22]]=jvj+295; pile[WZ1]=111; pile[WZ2]=jvj+296; 
(*f[54])( );     /*TRI1(jvj+295,111,jvj+296)*/
pile[v[22]]=jvj+296; pile[WZ1]=jvj+297; pile[WZ2]=103; pile[WZ3]=jvj+298; 
(*f[58])( );     /*TRI3(jvj+296,jvj+297,103,jvj+298)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+299; pile[WZ4]=jvj+298; pile[WZ5]=jvj+238; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+299,jvj+298,jvj+238)*/
pile[WZ2]=111; pile[WZ3]=jvj+230; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+230,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+231; 
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
pile[WZ2]=jvj+237; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+237)*/
pile[WZ2]=jvj+238; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+238)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+303; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+303)*/
pile[WZ3]=26; pile[WZ4]=jvj+312; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+312)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+317; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+317)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+319; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+319)*/
pile[v[22]]=jvj+317; pile[WZ1]=111; pile[WZ2]=jvj+318; 
(*f[54])( );     /*TRI1(jvj+317,111,jvj+318)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+319; pile[WZ4]=jvj+318; pile[WZ5]=jvj+316; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+319,jvj+318,jvj+316)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+314; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+314)*/
pile[v[22]]=jvj+312; pile[WZ1]=111; pile[WZ2]=jvj+313; 
(*f[54])( );     /*TRI1(jvj+312,111,jvj+313)*/
pile[v[22]]=jvj+313; pile[WZ1]=jvj+314; pile[WZ2]=103; pile[WZ3]=jvj+315; 
(*f[58])( );     /*TRI3(jvj+313,jvj+314,103,jvj+315)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+316; pile[WZ4]=jvj+315; pile[WZ5]=jvj+304; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+316,jvj+315,jvj+304)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+320; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+320)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+325; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+325)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+327; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+327)*/
pile[v[22]]=jvj+325; pile[WZ1]=111; pile[WZ2]=jvj+326; 
(*f[54])( );     /*TRI1(jvj+325,111,jvj+326)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+327; pile[WZ4]=jvj+326; pile[WZ5]=jvj+324; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+327,jvj+326,jvj+324)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+322; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+322)*/
pile[v[22]]=jvj+320; pile[WZ1]=111; pile[WZ2]=jvj+321; 
(*f[54])( );     /*TRI1(jvj+320,111,jvj+321)*/
pile[v[22]]=jvj+321; pile[WZ1]=jvj+322; pile[WZ2]=103; pile[WZ3]=jvj+323; 
(*f[58])( );     /*TRI3(jvj+321,jvj+322,103,jvj+323)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+324; pile[WZ4]=jvj+323; pile[WZ5]=jvj+305; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+324,jvj+323,jvj+305)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+328; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+328)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+333; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+333)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+335; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+335)*/
pile[v[22]]=jvj+333; pile[WZ1]=111; pile[WZ2]=jvj+334; 
(*f[54])( );     /*TRI1(jvj+333,111,jvj+334)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+335; pile[WZ4]=jvj+334; pile[WZ5]=jvj+332; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+335,jvj+334,jvj+332)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+330; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+330)*/
pile[v[22]]=jvj+328; pile[WZ1]=111; pile[WZ2]=jvj+329; 
(*f[54])( );     /*TRI1(jvj+328,111,jvj+329)*/
pile[v[22]]=jvj+329; pile[WZ1]=jvj+330; pile[WZ2]=103; pile[WZ3]=jvj+331; 
(*f[58])( );     /*TRI3(jvj+329,jvj+330,103,jvj+331)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+332; pile[WZ4]=jvj+331; pile[WZ5]=jvj+306; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+332,jvj+331,jvj+306)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+336; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+336)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+341; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+341)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+343; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+343)*/
pile[v[22]]=jvj+341; pile[WZ1]=111; pile[WZ2]=jvj+342; 
(*f[54])( );     /*TRI1(jvj+341,111,jvj+342)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+343; pile[WZ4]=jvj+342; pile[WZ5]=jvj+340; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+343,jvj+342,jvj+340)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+338; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+338)*/
pile[v[22]]=jvj+336; pile[WZ1]=111; pile[WZ2]=jvj+337; 
(*f[54])( );     /*TRI1(jvj+336,111,jvj+337)*/
pile[v[22]]=jvj+337; pile[WZ1]=jvj+338; pile[WZ2]=103; pile[WZ3]=jvj+339; 
(*f[58])( );     /*TRI3(jvj+337,jvj+338,103,jvj+339)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+340; pile[WZ4]=jvj+339; pile[WZ5]=jvj+307; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+340,jvj+339,jvj+307)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+344; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+344)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+349; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+349)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+351; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+351)*/
pile[v[22]]=jvj+349; pile[WZ1]=111; pile[WZ2]=jvj+350; 
(*f[54])( );     /*TRI1(jvj+349,111,jvj+350)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+351; pile[WZ4]=jvj+350; pile[WZ5]=jvj+348; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+351,jvj+350,jvj+348)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+346; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+346)*/
pile[v[22]]=jvj+344; pile[WZ1]=111; pile[WZ2]=jvj+345; 
(*f[54])( );     /*TRI1(jvj+344,111,jvj+345)*/
pile[v[22]]=jvj+345; pile[WZ1]=jvj+346; pile[WZ2]=103; pile[WZ3]=jvj+347; 
(*f[58])( );     /*TRI3(jvj+345,jvj+346,103,jvj+347)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+348; pile[WZ4]=jvj+347; pile[WZ5]=jvj+308; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+348,jvj+347,jvj+308)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+352; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+352)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+357; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+357)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+359; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+359)*/
pile[v[22]]=jvj+357; pile[WZ1]=111; pile[WZ2]=jvj+358; 
(*f[54])( );     /*TRI1(jvj+357,111,jvj+358)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+359; pile[WZ4]=jvj+358; pile[WZ5]=jvj+356; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+359,jvj+358,jvj+356)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+354; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+354)*/
pile[v[22]]=jvj+352; pile[WZ1]=111; pile[WZ2]=jvj+353; 
(*f[54])( );     /*TRI1(jvj+352,111,jvj+353)*/
pile[v[22]]=jvj+353; pile[WZ1]=jvj+354; pile[WZ2]=103; pile[WZ3]=jvj+355; 
(*f[58])( );     /*TRI3(jvj+353,jvj+354,103,jvj+355)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+356; pile[WZ4]=jvj+355; pile[WZ5]=jvj+309; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+356,jvj+355,jvj+309)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+360; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+360)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+365; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+365)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+367; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+367)*/
pile[v[22]]=jvj+365; pile[WZ1]=111; pile[WZ2]=jvj+366; 
(*f[54])( );     /*TRI1(jvj+365,111,jvj+366)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+367; pile[WZ4]=jvj+366; pile[WZ5]=jvj+364; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+367,jvj+366,jvj+364)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+362; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+362)*/
pile[v[22]]=jvj+360; pile[WZ1]=111; pile[WZ2]=jvj+361; 
(*f[54])( );     /*TRI1(jvj+360,111,jvj+361)*/
pile[v[22]]=jvj+361; pile[WZ1]=jvj+362; pile[WZ2]=103; pile[WZ3]=jvj+363; 
(*f[58])( );     /*TRI3(jvj+361,jvj+362,103,jvj+363)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+364; pile[WZ4]=jvj+363; pile[WZ5]=jvj+310; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+364,jvj+363,jvj+310)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+368; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+368)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+373; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+373)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+375; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+375)*/
pile[v[22]]=jvj+373; pile[WZ1]=111; pile[WZ2]=jvj+374; 
(*f[54])( );     /*TRI1(jvj+373,111,jvj+374)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+375; pile[WZ4]=jvj+374; pile[WZ5]=jvj+372; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+375,jvj+374,jvj+372)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+370; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+370)*/
pile[v[22]]=jvj+368; pile[WZ1]=111; pile[WZ2]=jvj+369; 
(*f[54])( );     /*TRI1(jvj+368,111,jvj+369)*/
pile[v[22]]=jvj+369; pile[WZ1]=jvj+370; pile[WZ2]=103; pile[WZ3]=jvj+371; 
(*f[58])( );     /*TRI3(jvj+369,jvj+370,103,jvj+371)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+372; pile[WZ4]=jvj+371; pile[WZ5]=jvj+311; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+372,jvj+371,jvj+311)*/
pile[WZ2]=111; pile[WZ3]=jvj+303; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+303,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=107; pile[WZ2]=jvj+304; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+304)*/
pile[WZ2]=jvj+305; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+305)*/
pile[WZ2]=jvj+306; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+306)*/
pile[WZ2]=jvj+307; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+307)*/
pile[WZ2]=jvj+308; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+308)*/
pile[WZ2]=jvj+309; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+309)*/
pile[WZ2]=jvj+310; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+310)*/
pile[WZ2]=jvj+311; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+311)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+376; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+376)*/
pile[WZ3]=26; pile[WZ4]=jvj+385; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+385)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+390; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+390)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+392; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+392)*/
pile[v[22]]=jvj+390; pile[WZ1]=111; pile[WZ2]=jvj+391; 
(*f[54])( );     /*TRI1(jvj+390,111,jvj+391)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+392; pile[WZ4]=jvj+391; pile[WZ5]=jvj+389; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+392,jvj+391,jvj+389)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+387; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+387)*/
pile[v[22]]=jvj+385; pile[WZ1]=111; pile[WZ2]=jvj+386; 
(*f[54])( );     /*TRI1(jvj+385,111,jvj+386)*/
pile[v[22]]=jvj+386; pile[WZ1]=jvj+387; pile[WZ2]=103; pile[WZ3]=jvj+388; 
(*f[58])( );     /*TRI3(jvj+386,jvj+387,103,jvj+388)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+389; pile[WZ4]=jvj+388; pile[WZ5]=jvj+377; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+389,jvj+388,jvj+377)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+393; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+393)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+398; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+398)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+400; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+400)*/
pile[v[22]]=jvj+398; pile[WZ1]=111; pile[WZ2]=jvj+399; 
(*f[54])( );     /*TRI1(jvj+398,111,jvj+399)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+400; pile[WZ4]=jvj+399; pile[WZ5]=jvj+397; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+400,jvj+399,jvj+397)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+395; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+395)*/
pile[v[22]]=jvj+393; pile[WZ1]=111; pile[WZ2]=jvj+394; 
(*f[54])( );     /*TRI1(jvj+393,111,jvj+394)*/
pile[v[22]]=jvj+394; pile[WZ1]=jvj+395; pile[WZ2]=103; pile[WZ3]=jvj+396; 
(*f[58])( );     /*TRI3(jvj+394,jvj+395,103,jvj+396)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+397; pile[WZ4]=jvj+396; pile[WZ5]=jvj+378; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+397,jvj+396,jvj+378)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+401; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+401)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+406; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+406)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+408; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+408)*/
pile[v[22]]=jvj+406; pile[WZ1]=111; pile[WZ2]=jvj+407; 
(*f[54])( );     /*TRI1(jvj+406,111,jvj+407)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+408; pile[WZ4]=jvj+407; pile[WZ5]=jvj+405; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+408,jvj+407,jvj+405)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+403; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+403)*/
pile[v[22]]=jvj+401; pile[WZ1]=111; pile[WZ2]=jvj+402; 
(*f[54])( );     /*TRI1(jvj+401,111,jvj+402)*/
pile[v[22]]=jvj+402; pile[WZ1]=jvj+403; pile[WZ2]=103; pile[WZ3]=jvj+404; 
(*f[58])( );     /*TRI3(jvj+402,jvj+403,103,jvj+404)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+405; pile[WZ4]=jvj+404; pile[WZ5]=jvj+379; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+405,jvj+404,jvj+379)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+409; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+409)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+414; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+414)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+416; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+416)*/
pile[v[22]]=jvj+414; pile[WZ1]=111; pile[WZ2]=jvj+415; 
(*f[54])( );     /*TRI1(jvj+414,111,jvj+415)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+416; pile[WZ4]=jvj+415; pile[WZ5]=jvj+413; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+416,jvj+415,jvj+413)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+411; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+411)*/
pile[v[22]]=jvj+409; pile[WZ1]=111; pile[WZ2]=jvj+410; 
(*f[54])( );     /*TRI1(jvj+409,111,jvj+410)*/
pile[v[22]]=jvj+410; pile[WZ1]=jvj+411; pile[WZ2]=103; pile[WZ3]=jvj+412; 
(*f[58])( );     /*TRI3(jvj+410,jvj+411,103,jvj+412)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+413; pile[WZ4]=jvj+412; pile[WZ5]=jvj+380; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+413,jvj+412,jvj+380)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+417; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+417)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+422; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+422)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+424; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+424)*/
pile[v[22]]=jvj+422; pile[WZ1]=111; pile[WZ2]=jvj+423; 
(*f[54])( );     /*TRI1(jvj+422,111,jvj+423)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+424; pile[WZ4]=jvj+423; pile[WZ5]=jvj+421; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+424,jvj+423,jvj+421)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+419; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+419)*/
pile[v[22]]=jvj+417; pile[WZ1]=111; pile[WZ2]=jvj+418; 
(*f[54])( );     /*TRI1(jvj+417,111,jvj+418)*/
pile[v[22]]=jvj+418; pile[WZ1]=jvj+419; pile[WZ2]=103; pile[WZ3]=jvj+420; 
(*f[58])( );     /*TRI3(jvj+418,jvj+419,103,jvj+420)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+421; pile[WZ4]=jvj+420; pile[WZ5]=jvj+381; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+421,jvj+420,jvj+381)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+425; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+425)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+430; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+430)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+432; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+432)*/
pile[v[22]]=jvj+430; pile[WZ1]=111; pile[WZ2]=jvj+431; 
(*f[54])( );     /*TRI1(jvj+430,111,jvj+431)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+432; pile[WZ4]=jvj+431; pile[WZ5]=jvj+429; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+432,jvj+431,jvj+429)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+427; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+427)*/
pile[v[22]]=jvj+425; pile[WZ1]=111; pile[WZ2]=jvj+426; 
(*f[54])( );     /*TRI1(jvj+425,111,jvj+426)*/
pile[v[22]]=jvj+426; pile[WZ1]=jvj+427; pile[WZ2]=103; pile[WZ3]=jvj+428; 
(*f[58])( );     /*TRI3(jvj+426,jvj+427,103,jvj+428)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+429; pile[WZ4]=jvj+428; pile[WZ5]=jvj+382; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+429,jvj+428,jvj+382)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+433; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+433)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+438; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+438)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+440; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+440)*/
pile[v[22]]=jvj+438; pile[WZ1]=111; pile[WZ2]=jvj+439; 
(*f[54])( );     /*TRI1(jvj+438,111,jvj+439)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+440; pile[WZ4]=jvj+439; pile[WZ5]=jvj+437; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+440,jvj+439,jvj+437)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+435; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+435)*/
pile[v[22]]=jvj+433; pile[WZ1]=111; pile[WZ2]=jvj+434; 
(*f[54])( );     /*TRI1(jvj+433,111,jvj+434)*/
pile[v[22]]=jvj+434; pile[WZ1]=jvj+435; pile[WZ2]=103; pile[WZ3]=jvj+436; 
(*f[58])( );     /*TRI3(jvj+434,jvj+435,103,jvj+436)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+437; pile[WZ4]=jvj+436; pile[WZ5]=jvj+383; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+437,jvj+436,jvj+383)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+441; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+441)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+446; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+446)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+448; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+448)*/
pile[v[22]]=jvj+446; pile[WZ1]=111; pile[WZ2]=jvj+447; 
(*f[54])( );     /*TRI1(jvj+446,111,jvj+447)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+448; pile[WZ4]=jvj+447; pile[WZ5]=jvj+445; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+448,jvj+447,jvj+445)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+443; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+443)*/
pile[v[22]]=jvj+441; pile[WZ1]=111; pile[WZ2]=jvj+442; 
(*f[54])( );     /*TRI1(jvj+441,111,jvj+442)*/
pile[v[22]]=jvj+442; pile[WZ1]=jvj+443; pile[WZ2]=103; pile[WZ3]=jvj+444; 
(*f[58])( );     /*TRI3(jvj+442,jvj+443,103,jvj+444)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+445; pile[WZ4]=jvj+444; pile[WZ5]=jvj+384; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+445,jvj+444,jvj+384)*/
pile[WZ2]=111; pile[WZ3]=jvj+376; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+376,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=107; pile[WZ2]=jvj+377; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+377)*/
pile[WZ2]=jvj+378; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+378)*/
pile[WZ2]=jvj+379; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+379)*/
pile[WZ2]=jvj+380; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+380)*/
pile[WZ2]=jvj+381; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+381)*/
pile[WZ2]=jvj+382; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+382)*/
pile[WZ2]=jvj+383; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+383)*/
pile[WZ2]=jvj+384; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+384)*/
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
pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+9)*/
pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+10)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l2:I++;
goto l1;
}
