#include "dx.h"
void DEMOISELLES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,I=0,V4=0;
int N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=93;
x[jvj+1]=26189;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2800&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V3=N-1;
I=0;
l1:if((I<=V3)) goto l2;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:V4=I+1;
l3:if((V4<=V3)) goto l5;
I++;
goto l1;
l5:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+4)*/
pile[WZ3]=1215; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+9)*/
pile[WZ3]=25; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+17)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8863); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8863),jvj+22)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+24)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+24,jvj+23,jvj+21)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8863); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8863),jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V4; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,V4,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+27,jvj+26,jvj+19)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+18,jvj+19,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+21,jvj+20,jvj+10)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+28)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8864); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8864),jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+35)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+35,jvj+34,jvj+32)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8864); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8864),jvj+36)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V4; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,V4,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+38,jvj+37,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+32,jvj+31,jvj+11)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+39)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8865); pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8865),jvj+44)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+46; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+46)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+46,jvj+45,jvj+43)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8865); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8865),jvj+47)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V4; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,V4,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+49,jvj+48,jvj+41)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+42; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+43,jvj+42,jvj+12)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+50)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8866); pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8866),jvj+55)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+57; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+57)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+56; pile[WZ5]=jvj+54; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+57,jvj+56,jvj+54)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8866); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8866),jvj+58)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V4; pile[WZ4]=jvj+60; 
(*f[192])( );     /*QUADRI4(100,41,130,V4,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+60; pile[WZ4]=jvj+59; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+60,jvj+59,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+51,jvj+52,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+54,jvj+53,jvj+13)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+61)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8867); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8867),jvj+66)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+68; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+68)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+68; pile[WZ4]=jvj+67; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+68,jvj+67,jvj+65)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8867); pile[WZ4]=jvj+69; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8867),jvj+69)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V4; pile[WZ4]=jvj+71; 
(*f[192])( );     /*QUADRI4(100,41,130,V4,jvj+71)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+71; pile[WZ4]=jvj+70; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+71,jvj+70,jvj+63)*/
pile[v[22]]=jvj+61; pile[WZ1]=111; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,111,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; pile[WZ2]=103; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+62,jvj+63,103,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+65,jvj+64,jvj+14)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+72; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+72)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8868); pile[WZ4]=jvj+77; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8868),jvj+77)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+79; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+79)*/
pile[v[22]]=jvj+77; pile[WZ1]=111; pile[WZ2]=jvj+78; 
(*f[54])( );     /*TRI1(jvj+77,111,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+79; pile[WZ4]=jvj+78; pile[WZ5]=jvj+76; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+79,jvj+78,jvj+76)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8868); pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8868),jvj+80)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V4; pile[WZ4]=jvj+82; 
(*f[192])( );     /*QUADRI4(100,41,130,V4,jvj+82)*/
pile[v[22]]=jvj+80; pile[WZ1]=111; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,111,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+82; pile[WZ4]=jvj+81; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+82,jvj+81,jvj+74)*/
pile[v[22]]=jvj+72; pile[WZ1]=111; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+72,111,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+74; pile[WZ2]=103; pile[WZ3]=jvj+75; 
(*f[58])( );     /*TRI3(jvj+73,jvj+74,103,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+76; pile[WZ4]=jvj+75; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+76,jvj+75,jvj+15)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+83; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+83)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8869); pile[WZ4]=jvj+88; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8869),jvj+88)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+90; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+90)*/
pile[v[22]]=jvj+88; pile[WZ1]=111; pile[WZ2]=jvj+89; 
(*f[54])( );     /*TRI1(jvj+88,111,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+90; pile[WZ4]=jvj+89; pile[WZ5]=jvj+87; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+90,jvj+89,jvj+87)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8869); pile[WZ4]=jvj+91; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8869),jvj+91)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V4; pile[WZ4]=jvj+93; 
(*f[192])( );     /*QUADRI4(100,41,130,V4,jvj+93)*/
pile[v[22]]=jvj+91; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,111,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+93; pile[WZ4]=jvj+92; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+93,jvj+92,jvj+85)*/
pile[v[22]]=jvj+83; pile[WZ1]=111; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,111,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; pile[WZ2]=103; pile[WZ3]=jvj+86; 
(*f[58])( );     /*TRI3(jvj+84,jvj+85,103,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+87,jvj+86,jvj+16)*/
pile[WZ2]=111; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; 
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
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+6; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
V4++;
goto l3;
}
