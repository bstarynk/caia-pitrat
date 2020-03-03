#include "dx.h"
void RASSEMBLEMENT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=100;
x[jvj+1]=26221;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2910&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+4)*/
pile[WZ3]=25; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+7)*/
pile[WZ3]=486; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+12)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=4; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,4,jvj+13)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+16)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+17)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-612); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(100,21,140,(-612),jvj+19)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+21,jvj+20,jvj+18)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+16; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+16,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=107; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+17)*/
pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+22)*/
pile[WZ3]=486; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+27)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+31,jvj+30,jvj+28)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+26; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+26,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=107; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+23,107,jvj+27)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+23,107,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-4); pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,(-4),jvj+24)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-612); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(100,21,140,(-612),jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+34,jvj+33,jvj+25)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+22; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+22,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=107; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+23)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+24)*/
pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+12; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+12,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=107; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+35)*/
pile[WZ3]=485; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-5); pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,(-5),jvj+39)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+43)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+42; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+43,jvj+42,jvj+40)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+38; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+38,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=107; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+36,107,jvj+39)*/
pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+36,107,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+44)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-5); pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,(-5),jvj+45)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+47)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+49,jvj+48,jvj+46)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+44; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+44,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=107; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+37,107,jvj+45)*/
pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+37,107,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+35; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+35,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=107; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+36)*/
pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+37)*/
pile[v[22]]=jvj+7; pile[WZ1]=111; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,111,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=103; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+8,jvj+9,103,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+10,jvj+5)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+50)*/
pile[WZ3]=486; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+55)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=4; pile[WZ4]=jvj+56; 
(*f[192])( );     /*QUADRI4(100,41,130,4,jvj+56)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+59)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+60; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+60)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-612); pile[WZ4]=jvj+62; 
(*f[270])( );     /*QUADRI7(100,21,140,(-612),jvj+62)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+64; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+64)*/
pile[v[22]]=jvj+62; pile[WZ1]=111; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+62,111,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; pile[WZ5]=jvj+61; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+64,jvj+63,jvj+61)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+59; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+59,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=107; pile[WZ2]=jvj+60; 
(*f[36])( );     /*PLUSC0(jvj+57,107,jvj+60)*/
pile[WZ2]=jvj+61; 
(*f[36])( );     /*PLUSC0(jvj+57,107,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+65)*/
pile[WZ3]=486; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+69)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+70; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+70)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+72)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+74; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+74)*/
pile[v[22]]=jvj+72; pile[WZ1]=111; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+72,111,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+74,jvj+73,jvj+71)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+69; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+69,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=107; pile[WZ2]=jvj+70; 
(*f[36])( );     /*PLUSC0(jvj+66,107,jvj+70)*/
pile[WZ2]=jvj+71; 
(*f[36])( );     /*PLUSC0(jvj+66,107,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-4); pile[WZ4]=jvj+67; 
(*f[192])( );     /*QUADRI4(100,41,130,(-4),jvj+67)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-612); pile[WZ4]=jvj+75; 
(*f[270])( );     /*QUADRI7(100,21,140,(-612),jvj+75)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+77; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+77)*/
pile[v[22]]=jvj+75; pile[WZ1]=111; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,111,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+77; pile[WZ4]=jvj+76; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+77,jvj+76,jvj+68)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+65; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+65,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=107; pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(jvj+58,107,jvj+66)*/
pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+58,107,jvj+67)*/
pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+58,107,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+55,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=107; pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+54,107,jvj+56)*/
pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(jvj+54,107,jvj+57)*/
pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+54,107,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+78)*/
pile[WZ3]=485; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+81)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-3); pile[WZ4]=jvj+82; 
(*f[192])( );     /*QUADRI4(100,41,130,(-3),jvj+82)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-612); pile[WZ4]=jvj+85; 
(*f[270])( );     /*QUADRI7(100,21,140,(-612),jvj+85)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+87; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+87)*/
pile[v[22]]=jvj+85; pile[WZ1]=111; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(jvj+85,111,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=jvj+83; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+87,jvj+86,jvj+83)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+88; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+88)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+90; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+90)*/
pile[v[22]]=jvj+88; pile[WZ1]=111; pile[WZ2]=jvj+89; 
(*f[54])( );     /*TRI1(jvj+88,111,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+90; pile[WZ4]=jvj+89; pile[WZ5]=jvj+84; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+90,jvj+89,jvj+84)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+81; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+81,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=107; pile[WZ2]=jvj+82; 
(*f[36])( );     /*PLUSC0(jvj+79,107,jvj+82)*/
pile[WZ2]=jvj+83; 
(*f[36])( );     /*PLUSC0(jvj+79,107,jvj+83)*/
pile[WZ2]=jvj+84; 
(*f[36])( );     /*PLUSC0(jvj+79,107,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+91)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-3); pile[WZ4]=jvj+92; 
(*f[192])( );     /*QUADRI4(100,41,130,(-3),jvj+92)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-612); pile[WZ4]=jvj+95; 
(*f[270])( );     /*QUADRI7(100,21,140,(-612),jvj+95)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+97; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+97)*/
pile[v[22]]=jvj+95; pile[WZ1]=111; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,111,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+97; pile[WZ4]=jvj+96; pile[WZ5]=jvj+93; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+97,jvj+96,jvj+93)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+98; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+98)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+100; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+100)*/
pile[v[22]]=jvj+98; pile[WZ1]=111; pile[WZ2]=jvj+99; 
(*f[54])( );     /*TRI1(jvj+98,111,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+100; pile[WZ4]=jvj+99; pile[WZ5]=jvj+94; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+100,jvj+99,jvj+94)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+91; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+91,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=107; pile[WZ2]=jvj+92; 
(*f[36])( );     /*PLUSC0(jvj+80,107,jvj+92)*/
pile[WZ2]=jvj+93; 
(*f[36])( );     /*PLUSC0(jvj+80,107,jvj+93)*/
pile[WZ2]=jvj+94; 
(*f[36])( );     /*PLUSC0(jvj+80,107,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+78; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+78,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=107; pile[WZ2]=jvj+79; 
(*f[36])( );     /*PLUSC0(jvj+52,107,jvj+79)*/
pile[WZ2]=jvj+80; 
(*f[36])( );     /*PLUSC0(jvj+52,107,jvj+80)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+51,jvj+52,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+54,jvj+53,jvj+6)*/
pile[WZ2]=111; pile[WZ3]=jvj+4; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+4,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+5)*/
pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+6)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
