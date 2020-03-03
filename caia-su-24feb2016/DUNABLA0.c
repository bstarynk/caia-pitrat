#include "dx.h"
void DUNABLA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=74;
x[jvj+1]=26238;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2942&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+4)*/
pile[WZ3]=486; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+9)*/
pile[WZ3]=485; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+12)*/
pile[WZ3]=486; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=10; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,10,jvj+16)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+20,jvj+19,jvj+17)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+15; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+15,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=107; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+16)*/
pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6671); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6671),jvj+21)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+23,jvj+22,jvj+14)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+12; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+12,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=107; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+24)*/
pile[WZ3]=486; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+27)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=10; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,10,jvj+28)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+30)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+32)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+32,jvj+31,jvj+29)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+27; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+27,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=107; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+28)*/
pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6671); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6671),jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+35)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+35,jvj+34,jvj+26)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+24; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+24,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+9,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+10)*/
pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+36)*/
pile[WZ3]=486; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+39)*/
pile[WZ3]=485; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+42)*/
pile[WZ3]=486; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=10; pile[WZ4]=jvj+46; 
(*f[192])( );     /*QUADRI4(100,41,130,10,jvj+46)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6671); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6671),jvj+48)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+50; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+50)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; pile[WZ5]=jvj+47; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+50,jvj+49,jvj+47)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+45; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+45,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=107; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+46)*/
pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+51)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+53; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+52; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+53,jvj+52,jvj+44)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+42; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+42,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=107; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+43)*/
pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+54)*/
pile[WZ3]=486; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+57)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=10; pile[WZ4]=jvj+58; 
(*f[192])( );     /*QUADRI4(100,41,130,10,jvj+58)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6671); pile[WZ4]=jvj+60; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6671),jvj+60)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+62; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+62)*/
pile[v[22]]=jvj+60; pile[WZ1]=111; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,111,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+62,jvj+61,jvj+59)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+57; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+57,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=107; pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+55,107,jvj+58)*/
pile[WZ2]=jvj+59; 
(*f[36])( );     /*PLUSC0(jvj+55,107,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+63; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+63)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+65; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+65)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+65,jvj+64,jvj+56)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+54; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+54,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=107; pile[WZ2]=jvj+55; 
(*f[36])( );     /*PLUSC0(jvj+41,107,jvj+55)*/
pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+41,107,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+39; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+39,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=107; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+37,107,jvj+40)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+37,107,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+66)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+69; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+69)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+71; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+71)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+71; pile[WZ4]=jvj+70; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+71,jvj+70,jvj+67)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+72)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+74; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+74)*/
pile[v[22]]=jvj+72; pile[WZ1]=111; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+72,111,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+74,jvj+73,jvj+68)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+66; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+66,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=107; pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+38,107,jvj+67)*/
pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+38,107,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+36; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+36,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+37)*/
pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+38)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
