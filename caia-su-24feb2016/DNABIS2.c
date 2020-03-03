#include "dx.h"
void DNABIS2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V3=0;
int N,P;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=129;
x[jvj+1]=26169;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2729&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; P=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
I=1;
l2:if((I<=N)) goto l3;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:if((I>P)) goto l7;
if((V3>P)) goto l7;
l5:V3++;
l4:if((V3<=N)) goto l1;
I++;
goto l2;
l3:V3=I+1;
goto l4;
l7:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+4)*/
pile[WZ3]=1215; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+9)*/
pile[WZ3]=25; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+18)*/
pile[WZ3]=485; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+23)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+28,jvj+27,jvj+24)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-630); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(100,21,140,(-630),jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+31,jvj+30,jvj+25)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+23,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=107; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+24)*/
pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+10)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+32)*/
pile[WZ3]=485; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+37)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+40)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+42)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+42; pile[WZ4]=jvj+41; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+42,jvj+41,jvj+38)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+45,jvj+44,jvj+39)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+37; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+37,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=107; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+36,107,jvj+38)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+36,107,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+35,jvj+11)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+46)*/
pile[WZ3]=485; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+51)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+54; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+54)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+56; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+56)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+56; pile[WZ4]=jvj+55; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+56,jvj+55,jvj+52)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+57)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+59; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+59)*/
pile[v[22]]=jvj+57; pile[WZ1]=111; pile[WZ2]=jvj+58; 
(*f[54])( );     /*TRI1(jvj+57,111,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+59; pile[WZ4]=jvj+58; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+59,jvj+58,jvj+53)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+51; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+51,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=107; pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+52)*/
pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+48; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+48)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=103; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+47,jvj+48,103,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+50,jvj+49,jvj+12)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+60)*/
pile[WZ3]=485; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+65)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+68)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+70; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+70)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+70,jvj+69,jvj+66)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-697); pile[WZ4]=jvj+71; 
(*f[270])( );     /*QUADRI7(100,21,140,(-697),jvj+71)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+73; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+73)*/
pile[v[22]]=jvj+71; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,111,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+73,jvj+72,jvj+67)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+65,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=107; pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(jvj+64,107,jvj+66)*/
pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+64,107,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+62; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+62)*/
pile[v[22]]=jvj+60; pile[WZ1]=111; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,111,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ2]=103; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+61,jvj+62,103,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+64,jvj+63,jvj+13)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+74)*/
pile[WZ3]=485; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+79)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-697); pile[WZ4]=jvj+82; 
(*f[270])( );     /*QUADRI7(100,21,140,(-697),jvj+82)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+84; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+84)*/
pile[v[22]]=jvj+82; pile[WZ1]=111; pile[WZ2]=jvj+83; 
(*f[54])( );     /*TRI1(jvj+82,111,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=jvj+80; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+84,jvj+83,jvj+80)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-656); pile[WZ4]=jvj+85; 
(*f[270])( );     /*QUADRI7(100,21,140,(-656),jvj+85)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+87; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+87)*/
pile[v[22]]=jvj+85; pile[WZ1]=111; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(jvj+85,111,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=jvj+81; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+87,jvj+86,jvj+81)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+79; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+79,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=107; pile[WZ2]=jvj+80; 
(*f[36])( );     /*PLUSC0(jvj+78,107,jvj+80)*/
pile[WZ2]=jvj+81; 
(*f[36])( );     /*PLUSC0(jvj+78,107,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+76; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+76)*/
pile[v[22]]=jvj+74; pile[WZ1]=111; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,111,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=jvj+76; pile[WZ2]=103; pile[WZ3]=jvj+77; 
(*f[58])( );     /*TRI3(jvj+75,jvj+76,103,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+78; pile[WZ4]=jvj+77; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+78,jvj+77,jvj+14)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+88; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+88)*/
pile[WZ3]=485; pile[WZ4]=jvj+93; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+93)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+96; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+96)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+98; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+98)*/
pile[v[22]]=jvj+96; pile[WZ1]=111; pile[WZ2]=jvj+97; 
(*f[54])( );     /*TRI1(jvj+96,111,jvj+97)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+98; pile[WZ4]=jvj+97; pile[WZ5]=jvj+94; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+98,jvj+97,jvj+94)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+99; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+99)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+101; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+101)*/
pile[v[22]]=jvj+99; pile[WZ1]=111; pile[WZ2]=jvj+100; 
(*f[54])( );     /*TRI1(jvj+99,111,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+101; pile[WZ4]=jvj+100; pile[WZ5]=jvj+95; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+101,jvj+100,jvj+95)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+93; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+93,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=107; pile[WZ2]=jvj+94; 
(*f[36])( );     /*PLUSC0(jvj+92,107,jvj+94)*/
pile[WZ2]=jvj+95; 
(*f[36])( );     /*PLUSC0(jvj+92,107,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+90; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+90)*/
pile[v[22]]=jvj+88; pile[WZ1]=111; pile[WZ2]=jvj+89; 
(*f[54])( );     /*TRI1(jvj+88,111,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=jvj+90; pile[WZ2]=103; pile[WZ3]=jvj+91; 
(*f[58])( );     /*TRI3(jvj+89,jvj+90,103,jvj+91)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+92; pile[WZ4]=jvj+91; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+92,jvj+91,jvj+15)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+102; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+102)*/
pile[WZ3]=485; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+107)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+110; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+110)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+112; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+112)*/
pile[v[22]]=jvj+110; pile[WZ1]=111; pile[WZ2]=jvj+111; 
(*f[54])( );     /*TRI1(jvj+110,111,jvj+111)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+112; pile[WZ4]=jvj+111; pile[WZ5]=jvj+108; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+112,jvj+111,jvj+108)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+113; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+113)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+115; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+115)*/
pile[v[22]]=jvj+113; pile[WZ1]=111; pile[WZ2]=jvj+114; 
(*f[54])( );     /*TRI1(jvj+113,111,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+115; pile[WZ4]=jvj+114; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+115,jvj+114,jvj+109)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+107; pile[WZ4]=jvj+106; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+107,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=107; pile[WZ2]=jvj+108; 
(*f[36])( );     /*PLUSC0(jvj+106,107,jvj+108)*/
pile[WZ2]=jvj+109; 
(*f[36])( );     /*PLUSC0(jvj+106,107,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+104; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+104)*/
pile[v[22]]=jvj+102; pile[WZ1]=111; pile[WZ2]=jvj+103; 
(*f[54])( );     /*TRI1(jvj+102,111,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=jvj+104; pile[WZ2]=103; pile[WZ3]=jvj+105; 
(*f[58])( );     /*TRI3(jvj+103,jvj+104,103,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+106; pile[WZ4]=jvj+105; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+106,jvj+105,jvj+16)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+116; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+116)*/
pile[WZ3]=485; pile[WZ4]=jvj+121; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+121)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-630); pile[WZ4]=jvj+124; 
(*f[270])( );     /*QUADRI7(100,21,140,(-630),jvj+124)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+126; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+126)*/
pile[v[22]]=jvj+124; pile[WZ1]=111; pile[WZ2]=jvj+125; 
(*f[54])( );     /*TRI1(jvj+124,111,jvj+125)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+126; pile[WZ4]=jvj+125; pile[WZ5]=jvj+122; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+126,jvj+125,jvj+122)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+127; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+127)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+129; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+129)*/
pile[v[22]]=jvj+127; pile[WZ1]=111; pile[WZ2]=jvj+128; 
(*f[54])( );     /*TRI1(jvj+127,111,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+129; pile[WZ4]=jvj+128; pile[WZ5]=jvj+123; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+129,jvj+128,jvj+123)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+121; pile[WZ4]=jvj+120; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+121,jvj+120)*/
pile[v[22]]=jvj+120; pile[WZ1]=107; pile[WZ2]=jvj+122; 
(*f[36])( );     /*PLUSC0(jvj+120,107,jvj+122)*/
pile[WZ2]=jvj+123; 
(*f[36])( );     /*PLUSC0(jvj+120,107,jvj+123)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+118; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+118)*/
pile[v[22]]=jvj+116; pile[WZ1]=111; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+116,111,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; pile[WZ2]=103; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+117,jvj+118,103,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+120; pile[WZ4]=jvj+119; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+120,jvj+119,jvj+17)*/
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
goto l5;
}
