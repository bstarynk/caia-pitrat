#include "dx.h"
void SLITHER1(void )
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
v[0]+=76;
x[jvj+1]=26253;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2981&&v[97]==0) {
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
if((V2!=0)) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+4)*/
pile[WZ3]=26; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+13)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+20,jvj+19,jvj+17)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+15)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+14,jvj+15,103,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+16,jvj+5)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+21)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+28,jvj+27,jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+24,jvj+6)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+29)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+36,jvj+35,jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+7)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+37)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+42)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+44,jvj+43,jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+39)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+41,jvj+40,jvj+8)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+45)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+50; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+50)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+52; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+52,jvj+51,jvj+49)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=103; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+46,jvj+47,103,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+49,jvj+48,jvj+9)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+53)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+58)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+60; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+60; pile[WZ4]=jvj+59; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+60,jvj+59,jvj+57)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+55; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+55)*/
pile[v[22]]=jvj+53; pile[WZ1]=111; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,111,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=103; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+54,jvj+55,103,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+56; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+57,jvj+56,jvj+10)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+61)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+66)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+68; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+68)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+68; pile[WZ4]=jvj+67; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+68,jvj+67,jvj+65)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+63; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+63)*/
pile[v[22]]=jvj+61; pile[WZ1]=111; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,111,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; pile[WZ2]=103; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+62,jvj+63,103,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+65,jvj+64,jvj+11)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+69)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+74; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+74)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+76; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+76)*/
pile[v[22]]=jvj+74; pile[WZ1]=111; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,111,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+76; pile[WZ4]=jvj+75; pile[WZ5]=jvj+73; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+76,jvj+75,jvj+73)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+71; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+71)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; pile[WZ2]=103; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+70,jvj+71,103,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+73,jvj+72,jvj+12)*/
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
pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+10)*/
pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+11)*/
pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+12)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l2:I++;
goto l1;
}
