#include "dx.h"
void BERLOU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0;
int N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=74;
x[jvj+1]=26079;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2317&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V3=N-1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+4)*/
pile[WZ3]=25; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+7)*/
pile[WZ3]=485; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+12)*/
pile[WZ3]=486; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+17)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1001; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,1001,jvj+18)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+22,jvj+21,jvj+19)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+17; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+17,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=107; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+18)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+23)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=101; pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,101,jvj+24)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+28,jvj+27,jvj+25)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+23; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+23,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=107; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+24)*/
pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=11; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,11,jvj+30)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=3; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,3,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+34,jvj+33,jvj+31)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+29; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+29,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=107; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+30)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+35)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+36)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=4; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,4,jvj+40)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+39; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+40,jvj+39,jvj+37)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+35; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+35,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=107; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+36)*/
pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+12; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+12,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=107; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+15)*/
pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=N; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(100,41,130,N,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=111; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,111,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=103; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+8,jvj+9,103,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+10,jvj+5)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+41)*/
pile[WZ3]=485; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+46)*/
pile[WZ3]=486; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+51)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1001; pile[WZ4]=jvj+52; 
(*f[192])( );     /*QUADRI4(100,41,130,1001,jvj+52)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+54; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+54)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+56; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+56)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+56; pile[WZ4]=jvj+55; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+56,jvj+55,jvj+53)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+51; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+51,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=107; pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+47,107,jvj+52)*/
pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+47,107,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+57)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=101; pile[WZ4]=jvj+58; 
(*f[192])( );     /*QUADRI4(100,41,130,101,jvj+58)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+60; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+60)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+62; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+62)*/
pile[v[22]]=jvj+60; pile[WZ1]=111; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,111,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+62,jvj+61,jvj+59)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+57; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+57,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=107; pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+48,107,jvj+58)*/
pile[WZ2]=jvj+59; 
(*f[36])( );     /*PLUSC0(jvj+48,107,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+63)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=11; pile[WZ4]=jvj+64; 
(*f[192])( );     /*QUADRI4(100,41,130,11,jvj+64)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+66)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=3; pile[WZ4]=jvj+68; 
(*f[192])( );     /*QUADRI4(100,41,130,3,jvj+68)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+68; pile[WZ4]=jvj+67; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+68,jvj+67,jvj+65)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+63; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+63,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=107; pile[WZ2]=jvj+64; 
(*f[36])( );     /*PLUSC0(jvj+49,107,jvj+64)*/
pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+49,107,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+69)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+70; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+70)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+72)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=4; pile[WZ4]=jvj+74; 
(*f[192])( );     /*QUADRI4(100,41,130,4,jvj+74)*/
pile[v[22]]=jvj+72; pile[WZ1]=111; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+72,111,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+74,jvj+73,jvj+71)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+69; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+69,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=107; pile[WZ2]=jvj+70; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+70)*/
pile[WZ2]=jvj+71; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+46,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=107; pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(jvj+45,107,jvj+47)*/
pile[WZ2]=jvj+48; 
(*f[36])( );     /*PLUSC0(jvj+45,107,jvj+48)*/
pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+45,107,jvj+49)*/
pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+45,107,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+43)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; pile[WZ2]=103; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+42,jvj+43,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+44,jvj+6)*/
pile[WZ2]=111; pile[WZ3]=jvj+4; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+4,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+5)*/
pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+6)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
