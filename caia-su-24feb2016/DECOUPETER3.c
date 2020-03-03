#include "dx.h"
void DECOUPETER3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V2=0,V3=0,V17=0,V28=0,V27=0,V4=0,V5=0,J=0,V8=0,V9=0,A=0,V13=0,V16=0,V18=0,V22=0,V26=0,V15=0,V14=0,V21=0,V20=0,V19=0,V25=0,V24=0,V23=0;
int N,M,P;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=149;
x[jvj+1]=26190;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2805&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; M=pile[v[22]+1]; P=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V17=M*N;
V28=2*V17;
V27=V28-1;
I=1;
l1:if((I<=P)) goto l3;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:I++;
goto l1;
l3:pile[v[22]]=I; pile[WZ1]=(-596); 
(*f[201])( );if(v[102]) goto l2;     /*FCOEFF0(I,(-596),V4)*/
V4=pile[WZ2]; 
pile[WZ1]=(-606); 
(*f[201])( );if(v[102]) goto l2;     /*FCOEFF0(I,(-606),V5)*/
V5=pile[WZ2]; 
J=1;
l4:if((J>P)) goto l2;
if((I==J)) goto l5;
pile[v[22]]=J; pile[WZ1]=(-596); 
(*f[201])( );if(v[102]) goto l5;     /*FCOEFF0(J,(-596),V8)*/
V8=pile[WZ2]; 
pile[WZ1]=(-606); 
(*f[201])( );if(v[102]) goto l5;     /*FCOEFF0(J,(-606),V9)*/
V9=pile[WZ2]; 
A=0;
l6:if((A>V27)) goto l5;
V13=A%N;
V16=A/V17;
V18=1-V16;
V22=V16*V5;
V26=V16*V4;
V15=A/N;
V14=V15%M;
V21=V18*V4;
V20=V21+V22;
V19=V13+V20;
if((V19>=N)) goto l7;
V25=V18*V5;
V24=V25+V26;
V23=V14+V24;
if((V23>=M)) goto l7;
if((V16!=1)) goto l9;
pile[v[22]]=I; pile[WZ1]=(-596); 
(*f[201])( );if(v[102]) goto l9;     /*FCOEFF0(I,(-596),V2)*/
V2=pile[WZ2]; 
pile[WZ1]=(-606); 
(*f[201])( );if(v[102]) goto l9;     /*FCOEFF0(I,(-606),V3)*/
V3=pile[WZ2]; 
if((V2==V3)) goto l7;
l9:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+4)*/
pile[WZ3]=26; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+17,jvj+16,jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=A; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,A,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+11,jvj+12,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+13,jvj+5)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=27; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+18)*/
pile[WZ3]=326; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+23)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+28)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+30,jvj+29,jvj+27)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=N; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,N,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+24,jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+26,jvj+22)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V19; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,V19,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+6)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=27; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+31)*/
pile[WZ3]=326; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+36)*/
pile[WZ3]=63; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+41)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+46)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+48; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+48)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+48,jvj+47,jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=N; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,N,jvj+43)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; pile[WZ2]=103; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+42,jvj+43,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+44,jvj+40)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=M; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,M,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=103; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+37,jvj+38,103,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+39; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+40,jvj+39,jvj+35)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V23; pile[WZ4]=jvj+33; 
(*f[192])( );     /*QUADRI4(100,41,130,V23,jvj+33)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; pile[WZ2]=103; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+32,jvj+33,103,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+35,jvj+34,jvj+7)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+49)*/
pile[WZ3]=485; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+54)*/
pile[WZ3]=326; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+58)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+63; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+63)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+65; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+65)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+65,jvj+64,jvj+62)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=N; pile[WZ4]=jvj+60; 
(*f[192])( );     /*QUADRI4(100,41,130,N,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; pile[WZ2]=103; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+59,jvj+60,103,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+62,jvj+61,jvj+55)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+66)*/
pile[WZ3]=326; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+69)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+74; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+74)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+76; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+76)*/
pile[v[22]]=jvj+74; pile[WZ1]=111; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,111,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+76; pile[WZ4]=jvj+75; pile[WZ5]=jvj+73; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+76,jvj+75,jvj+73)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=jvj+71; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+71)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; pile[WZ2]=103; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+70,jvj+71,103,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+73,jvj+72,jvj+67)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+68; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+68)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+66; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+66,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=107; pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+56,107,jvj+67)*/
pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+56,107,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+77; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+77)*/
pile[WZ3]=64; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,64,jvj+81)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+85; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+85)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+86)*/
pile[WZ3]=326; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+89)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+94; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+94)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+96; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+96)*/
pile[v[22]]=jvj+94; pile[WZ1]=111; pile[WZ2]=jvj+95; 
(*f[54])( );     /*TRI1(jvj+94,111,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+96; pile[WZ4]=jvj+95; pile[WZ5]=jvj+93; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+96,jvj+95,jvj+93)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=jvj+91; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+91)*/
pile[v[22]]=jvj+89; pile[WZ1]=111; pile[WZ2]=jvj+90; 
(*f[54])( );     /*TRI1(jvj+89,111,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=jvj+91; pile[WZ2]=103; pile[WZ3]=jvj+92; 
(*f[58])( );     /*TRI3(jvj+90,jvj+91,103,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+93; pile[WZ4]=jvj+92; pile[WZ5]=jvj+87; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+93,jvj+92,jvj+87)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+88; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+88)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+86; pile[WZ4]=jvj+83; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+86,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=107; pile[WZ2]=jvj+87; 
(*f[36])( );     /*PLUSC0(jvj+83,107,jvj+87)*/
pile[WZ2]=jvj+88; 
(*f[36])( );     /*PLUSC0(jvj+83,107,jvj+88)*/
pile[v[22]]=jvj+81; pile[WZ1]=111; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+81,111,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=jvj+83; pile[WZ2]=103; pile[WZ3]=jvj+84; 
(*f[58])( );     /*TRI3(jvj+82,jvj+83,103,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+85; pile[WZ4]=jvj+84; pile[WZ5]=jvj+79; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+85,jvj+84,jvj+79)*/
pile[v[22]]=jvj+77; pile[WZ1]=111; pile[WZ2]=jvj+78; 
(*f[54])( );     /*TRI1(jvj+77,111,jvj+78)*/
pile[v[22]]=jvj+79; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+80; 
(*f[298])( );     /*TRIENS1(jvj+79,(-20),jvj+78,107,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+80,22,100,jvj+57)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+54,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=107; pile[WZ2]=jvj+55; 
(*f[36])( );     /*PLUSC0(jvj+53,107,jvj+55)*/
pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+53,107,jvj+56)*/
pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(jvj+53,107,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+51; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+51)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; pile[WZ2]=103; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+50,jvj+51,103,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+52; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+53,jvj+52,jvj+8)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+97; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+97)*/
pile[WZ3]=485; pile[WZ4]=jvj+102; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+102)*/
pile[WZ3]=326; pile[WZ4]=jvj+106; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+106)*/
pile[WZ3]=63; pile[WZ4]=jvj+111; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+111)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+116; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+116)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+118; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+118)*/
pile[v[22]]=jvj+116; pile[WZ1]=111; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+116,111,jvj+117)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+118; pile[WZ4]=jvj+117; pile[WZ5]=jvj+115; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+118,jvj+117,jvj+115)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=N; pile[WZ4]=jvj+113; 
(*f[192])( );     /*QUADRI4(100,41,130,N,jvj+113)*/
pile[v[22]]=jvj+111; pile[WZ1]=111; pile[WZ2]=jvj+112; 
(*f[54])( );     /*TRI1(jvj+111,111,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+113; pile[WZ2]=103; pile[WZ3]=jvj+114; 
(*f[58])( );     /*TRI3(jvj+112,jvj+113,103,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+115; pile[WZ4]=jvj+114; pile[WZ5]=jvj+110; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+115,jvj+114,jvj+110)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=M; pile[WZ4]=jvj+108; 
(*f[192])( );     /*QUADRI4(100,41,130,M,jvj+108)*/
pile[v[22]]=jvj+106; pile[WZ1]=111; pile[WZ2]=jvj+107; 
(*f[54])( );     /*TRI1(jvj+106,111,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+108; pile[WZ2]=103; pile[WZ3]=jvj+109; 
(*f[58])( );     /*TRI3(jvj+107,jvj+108,103,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+110; pile[WZ4]=jvj+109; pile[WZ5]=jvj+103; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+110,jvj+109,jvj+103)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+119; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+119)*/
pile[WZ3]=326; pile[WZ4]=jvj+122; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+122)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+127; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+127)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+129; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+129)*/
pile[v[22]]=jvj+127; pile[WZ1]=111; pile[WZ2]=jvj+128; 
(*f[54])( );     /*TRI1(jvj+127,111,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+129; pile[WZ4]=jvj+128; pile[WZ5]=jvj+126; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+129,jvj+128,jvj+126)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=jvj+124; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+124)*/
pile[v[22]]=jvj+122; pile[WZ1]=111; pile[WZ2]=jvj+123; 
(*f[54])( );     /*TRI1(jvj+122,111,jvj+123)*/
pile[v[22]]=jvj+123; pile[WZ1]=jvj+124; pile[WZ2]=103; pile[WZ3]=jvj+125; 
(*f[58])( );     /*TRI3(jvj+123,jvj+124,103,jvj+125)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+126; pile[WZ4]=jvj+125; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+126,jvj+125,jvj+120)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+121; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+121)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+119; pile[WZ4]=jvj+104; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+119,jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=107; pile[WZ2]=jvj+120; 
(*f[36])( );     /*PLUSC0(jvj+104,107,jvj+120)*/
pile[WZ2]=jvj+121; 
(*f[36])( );     /*PLUSC0(jvj+104,107,jvj+121)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+130; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+130)*/
pile[WZ3]=64; pile[WZ4]=jvj+134; 
(*f[181])( );     /*QUADRI2(100,20,101,64,jvj+134)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+138; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+138)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+139; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+139)*/
pile[WZ3]=326; pile[WZ4]=jvj+142; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+142)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+147; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+147)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+149; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+149)*/
pile[v[22]]=jvj+147; pile[WZ1]=111; pile[WZ2]=jvj+148; 
(*f[54])( );     /*TRI1(jvj+147,111,jvj+148)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+149; pile[WZ4]=jvj+148; pile[WZ5]=jvj+146; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+149,jvj+148,jvj+146)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=jvj+144; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+144)*/
pile[v[22]]=jvj+142; pile[WZ1]=111; pile[WZ2]=jvj+143; 
(*f[54])( );     /*TRI1(jvj+142,111,jvj+143)*/
pile[v[22]]=jvj+143; pile[WZ1]=jvj+144; pile[WZ2]=103; pile[WZ3]=jvj+145; 
(*f[58])( );     /*TRI3(jvj+143,jvj+144,103,jvj+145)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+146; pile[WZ4]=jvj+145; pile[WZ5]=jvj+140; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+146,jvj+145,jvj+140)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+141; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+141)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+139; pile[WZ4]=jvj+136; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+139,jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=107; pile[WZ2]=jvj+140; 
(*f[36])( );     /*PLUSC0(jvj+136,107,jvj+140)*/
pile[WZ2]=jvj+141; 
(*f[36])( );     /*PLUSC0(jvj+136,107,jvj+141)*/
pile[v[22]]=jvj+134; pile[WZ1]=111; pile[WZ2]=jvj+135; 
(*f[54])( );     /*TRI1(jvj+134,111,jvj+135)*/
pile[v[22]]=jvj+135; pile[WZ1]=jvj+136; pile[WZ2]=103; pile[WZ3]=jvj+137; 
(*f[58])( );     /*TRI3(jvj+135,jvj+136,103,jvj+137)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+138; pile[WZ4]=jvj+137; pile[WZ5]=jvj+132; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+138,jvj+137,jvj+132)*/
pile[v[22]]=jvj+130; pile[WZ1]=111; pile[WZ2]=jvj+131; 
(*f[54])( );     /*TRI1(jvj+130,111,jvj+131)*/
pile[v[22]]=jvj+132; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+133; 
(*f[298])( );     /*TRIENS1(jvj+132,(-20),jvj+131,107,jvj+133)*/
pile[v[22]]=jvj+133; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+105; 
(*f[58])( );     /*TRI3(jvj+133,22,100,jvj+105)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+102; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+102,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=107; pile[WZ2]=jvj+103; 
(*f[36])( );     /*PLUSC0(jvj+101,107,jvj+103)*/
pile[WZ2]=jvj+104; 
(*f[36])( );     /*PLUSC0(jvj+101,107,jvj+104)*/
pile[WZ2]=jvj+105; 
(*f[36])( );     /*PLUSC0(jvj+101,107,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V14; pile[WZ4]=jvj+99; 
(*f[192])( );     /*QUADRI4(100,41,130,V14,jvj+99)*/
pile[v[22]]=jvj+97; pile[WZ1]=111; pile[WZ2]=jvj+98; 
(*f[54])( );     /*TRI1(jvj+97,111,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+99; pile[WZ2]=103; pile[WZ3]=jvj+100; 
(*f[58])( );     /*TRI3(jvj+98,jvj+99,103,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+101; pile[WZ4]=jvj+100; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+101,jvj+100,jvj+9)*/
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
l7:A++;
goto l6;
l5:J++;
goto l4;
}
