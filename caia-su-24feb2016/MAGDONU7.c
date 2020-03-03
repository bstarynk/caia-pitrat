#include "dx.h"
void MAGDONU7(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V3=0,V6=0,V7=0,V11=0,V13=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=98;
x[jvj+1]=26082;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2325&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
I=1;
l1:V3=I+1;
x[jvj+28]=((I<=15)) ? 135 : 134;
V6=I%4;
x[jvj+29]=((V6!=0)) ? 135 : 134;
V7=I-1;
x[jvj+48]=((I>=2)) ? 135 : 134;
x[jvj+49]=((V6!=1)) ? 135 : 134;
V11=I+4;
x[jvj+67]=((I<=12)) ? 135 : 134;
V13=I-4;
x[jvj+85]=((I>=5)) ? 135 : 134;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+4)*/
pile[WZ3]=48; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+10)*/
pile[WZ3]=25; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+14)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+19)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+21,jvj+20,jvj+18)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=88; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,88,jvj+22)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+27,jvj+26,jvj+24)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+23,jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=111; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,111,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=103; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+15,jvj+16,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+17,jvj+11)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+28; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+28,jvj+12)*/
pile[WZ3]=jvj+29; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+29,jvj+13)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+10; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+10,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=107; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+11)*/
pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+12)*/
pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+30)*/
pile[WZ3]=25; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+34)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+39)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+41)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+41,jvj+40,jvj+38)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=88; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,88,jvj+42)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+47,jvj+46,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+43,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+35,jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+37,jvj+31)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+48; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+48,jvj+32)*/
pile[WZ3]=jvj+49; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+49,jvj+33)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+30; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+30,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+31)*/
pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+32)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+50)*/
pile[WZ3]=25; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+53)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+58)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V11; pile[WZ4]=jvj+60; 
(*f[192])( );     /*QUADRI4(100,41,130,V11,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+60; pile[WZ4]=jvj+59; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+60,jvj+59,jvj+57)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=88; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,88,jvj+61)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+64; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+64)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+66; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+66)*/
pile[v[22]]=jvj+64; pile[WZ1]=111; pile[WZ2]=jvj+65; 
(*f[54])( );     /*TRI1(jvj+64,111,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+65; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+66,jvj+65,jvj+63)*/
pile[v[22]]=jvj+61; pile[WZ1]=111; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,111,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+62; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+63,jvj+62,jvj+55)*/
pile[v[22]]=jvj+53; pile[WZ1]=111; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,111,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=103; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+54,jvj+55,103,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+56; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+57,jvj+56,jvj+51)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+67; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+67,jvj+52)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+50; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+50,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+51)*/
pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+68)*/
pile[WZ3]=25; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+71)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+76; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+76)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+78; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+78)*/
pile[v[22]]=jvj+76; pile[WZ1]=111; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,111,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+78; pile[WZ4]=jvj+77; pile[WZ5]=jvj+75; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+78,jvj+77,jvj+75)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=88; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,20,101,88,jvj+79)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+82; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+82)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+84; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+84)*/
pile[v[22]]=jvj+82; pile[WZ1]=111; pile[WZ2]=jvj+83; 
(*f[54])( );     /*TRI1(jvj+82,111,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=jvj+81; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+84,jvj+83,jvj+81)*/
pile[v[22]]=jvj+79; pile[WZ1]=111; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(jvj+79,111,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+81; pile[WZ4]=jvj+80; pile[WZ5]=jvj+73; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+81,jvj+80,jvj+73)*/
pile[v[22]]=jvj+71; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,111,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; pile[WZ2]=103; pile[WZ3]=jvj+74; 
(*f[58])( );     /*TRI3(jvj+72,jvj+73,103,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+75; pile[WZ4]=jvj+74; pile[WZ5]=jvj+69; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+75,jvj+74,jvj+69)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+85; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+85,jvj+70)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+68; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+68,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+69; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+69)*/
pile[WZ2]=jvj+70; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+86)*/
pile[WZ3]=326; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+91)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+96; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+96)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+98; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+98)*/
pile[v[22]]=jvj+96; pile[WZ1]=111; pile[WZ2]=jvj+97; 
(*f[54])( );     /*TRI1(jvj+96,111,jvj+97)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+98; pile[WZ4]=jvj+97; pile[WZ5]=jvj+95; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+98,jvj+97,jvj+95)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+93; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+93)*/
pile[v[22]]=jvj+91; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,111,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+93; pile[WZ2]=103; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+92,jvj+93,103,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+95; pile[WZ4]=jvj+94; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+95,jvj+94,jvj+90)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+88; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+88)*/
pile[v[22]]=jvj+86; pile[WZ1]=111; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+86,111,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+88; pile[WZ2]=103; pile[WZ3]=jvj+89; 
(*f[58])( );     /*TRI3(jvj+87,jvj+88,103,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+90; pile[WZ4]=jvj+89; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+90,jvj+89,jvj+9)*/
pile[WZ2]=111; pile[WZ3]=jvj+4; pile[WZ4]=jvj+3; 
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
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
I++;
if((I<=16)) goto l1;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
