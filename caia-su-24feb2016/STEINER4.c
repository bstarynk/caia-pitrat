#include "dx.h"
void STEINER4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,I=0,V5=0;
int P,T;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=94;
x[jvj+1]=26146;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2618&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; T=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
x[jvj+9]=incon;
if((T==0)) goto l1;
x[jvj+9]=25 ;z[jvj+9]=25;
l2:V4=P-1;
I=1;
l3:if((I<=V4)) goto l4;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[jvj+9]=30 ;z[jvj+9]=30;
goto l2;
l4:V5=I+1;
l5:if((V5<=P)) goto l7;
I++;
goto l3;
l7:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+9; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+9,jvj+4)*/
pile[WZ3]=1215; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+10)*/
pile[WZ3]=25; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+18)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+23)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+25,jvj+24,jvj+22)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+28,jvj+27,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+11)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+29)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+36,jvj+35,jvj+33)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+37)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+39)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+38; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+39,jvj+38,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+12)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+40)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-630); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,(-630),jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+47,jvj+46,jvj+44)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-630); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(100,21,140,(-630),jvj+48)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+50; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+50)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+50,jvj+49,jvj+42)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+43,jvj+13)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+51)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+56; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+56)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+58; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+58)*/
pile[v[22]]=jvj+56; pile[WZ1]=111; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+56,111,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+58,jvj+57,jvj+55)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+59; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+59)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+61; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+61)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+61; pile[WZ4]=jvj+60; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+61,jvj+60,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+54,jvj+14)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+62)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-630); pile[WZ4]=jvj+67; 
(*f[270])( );     /*QUADRI7(100,21,140,(-630),jvj+67)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+69; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+69)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+69; pile[WZ4]=jvj+68; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+69,jvj+68,jvj+66)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+70; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+70)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+72; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+72)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+71; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+72,jvj+71,jvj+64)*/
pile[v[22]]=jvj+62; pile[WZ1]=111; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+62,111,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; pile[WZ2]=103; pile[WZ3]=jvj+65; 
(*f[58])( );     /*TRI3(jvj+63,jvj+64,103,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+65; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+66,jvj+65,jvj+15)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+73)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-630); pile[WZ4]=jvj+78; 
(*f[270])( );     /*QUADRI7(100,21,140,(-630),jvj+78)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+80; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+80)*/
pile[v[22]]=jvj+78; pile[WZ1]=111; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+78,111,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+80; pile[WZ4]=jvj+79; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+80,jvj+79,jvj+77)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+81; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+81)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+83; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+83)*/
pile[v[22]]=jvj+81; pile[WZ1]=111; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+81,111,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+83; pile[WZ4]=jvj+82; pile[WZ5]=jvj+75; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+83,jvj+82,jvj+75)*/
pile[v[22]]=jvj+73; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,111,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; pile[WZ2]=103; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+74,jvj+75,103,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+77; pile[WZ4]=jvj+76; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+77,jvj+76,jvj+16)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+84)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+89; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+89)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+91; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+91)*/
pile[v[22]]=jvj+89; pile[WZ1]=111; pile[WZ2]=jvj+90; 
(*f[54])( );     /*TRI1(jvj+89,111,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+91; pile[WZ4]=jvj+90; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+91,jvj+90,jvj+88)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-630); pile[WZ4]=jvj+92; 
(*f[270])( );     /*QUADRI7(100,21,140,(-630),jvj+92)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+94; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+94)*/
pile[v[22]]=jvj+92; pile[WZ1]=111; pile[WZ2]=jvj+93; 
(*f[54])( );     /*TRI1(jvj+92,111,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+93; pile[WZ5]=jvj+86; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+94,jvj+93,jvj+86)*/
pile[v[22]]=jvj+84; pile[WZ1]=111; pile[WZ2]=jvj+85; 
(*f[54])( );     /*TRI1(jvj+84,111,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+86; pile[WZ2]=103; pile[WZ3]=jvj+87; 
(*f[58])( );     /*TRI3(jvj+85,jvj+86,103,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+88; pile[WZ4]=jvj+87; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+88,jvj+87,jvj+17)*/
pile[WZ2]=111; pile[WZ3]=jvj+10; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+10,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+11; 
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
V5++;
goto l5;
}
