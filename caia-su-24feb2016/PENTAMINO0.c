#include "dx.h"
void PENTAMINO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V28=0,V27=0,V30=0,V29=0,V32=0,V31=0,V34=0,V33=0,V26=0,V25=0,K=0,V15=0,V16=0,I=0,V4=0,V17=0,V5=0,V18=0,V6=0,V19=0,V7=0,V20=0,V8=0,V21=0,V9=0,V22=0,V10=0,V23=0,V11=0,V24=0,V3=0,Z=0;
int M,N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=70;
x[jvj+1]=26179;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2766&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; N=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=0 ;z[jvj+4]=0;
V26=M*N;
V25=V26-1;
K=0;
l1:if((K<=V25)) goto l2;
x[NNNE]=x[jvj+4] ;z[NNNE]=z[jvj+4];
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:V15=K%M;
V16=K/M;
I=1;
l4:pile[v[22]]=1; pile[WZ1]=I; pile[WZ2]=(-2060); 
(*f[203])( );if(v[102]) goto l3;     /*FTAB0(1,I,(-2060),V4)*/
V4=pile[WZ3]; 
V17=V15+V4;
pile[v[22]]=2; 
(*f[203])( );if(v[102]) goto l3;     /*FTAB0(2,I,(-2060),V5)*/
V5=pile[WZ3]; 
V18=V15+V5;
pile[v[22]]=3; 
(*f[203])( );if(v[102]) goto l3;     /*FTAB0(3,I,(-2060),V6)*/
V6=pile[WZ3]; 
V19=V15+V6;
pile[v[22]]=4; 
(*f[203])( );if(v[102]) goto l3;     /*FTAB0(4,I,(-2060),V7)*/
V7=pile[WZ3]; 
V20=V15+V7;
pile[v[22]]=1; pile[WZ2]=(-7050); 
(*f[203])( );if(v[102]) goto l3;     /*FTAB0(1,I,(-7050),V8)*/
V8=pile[WZ3]; 
V21=V16+V8;
pile[v[22]]=2; 
(*f[203])( );if(v[102]) goto l3;     /*FTAB0(2,I,(-7050),V9)*/
V9=pile[WZ3]; 
V22=V16+V9;
pile[v[22]]=3; 
(*f[203])( );if(v[102]) goto l3;     /*FTAB0(3,I,(-7050),V10)*/
V10=pile[WZ3]; 
V23=V16+V10;
pile[v[22]]=4; 
(*f[203])( );if(v[102]) goto l3;     /*FTAB0(4,I,(-7050),V11)*/
V11=pile[WZ3]; 
V24=V16+V11;
pile[v[22]]=I; pile[WZ1]=(-657); 
(*f[201])( );if(v[102]) goto l3;     /*FCOEFF0(I,(-657),V3)*/
V3=pile[WZ2]; 
x[jvj+2]=incon;
if((V17<0)) goto l7;
if((V18<0)) goto l7;
if((V19<0)) goto l7;
if((V20<0)) goto l7;
if((V21<0)) goto l7;
if((V22<0)) goto l7;
if((V23<0)) goto l7;
if((V24<0)) goto l7;
if((V17>=M)) goto l7;
if((V18>=M)) goto l7;
if((V19>=M)) goto l7;
if((V20>=M)) goto l7;
if((V21>=N)) goto l7;
if((V22>=N)) goto l7;
if((V23>=N)) goto l7;
if((V24>=N)) goto l7;
V28=M*V21;
V27=V17+V28;
V30=M*V22;
V29=V18+V30;
V32=M*V23;
V31=V19+V32;
V34=M*V24;
V33=V20+V34;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+6)*/
pile[WZ3]=25; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+12)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+17)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+19; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+19)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+19,jvj+18,jvj+16)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=111; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,111,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=103; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+13,jvj+14,103,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+15,jvj+7)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+20)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V27; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,V27,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+27,jvj+26,jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+21,jvj+22,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+23,jvj+8)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+28)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V29; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,V29,jvj+35)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+35,jvj+34,jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+32,jvj+31,jvj+9)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+36)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V31; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,V31,jvj+43)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+42; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+43,jvj+42,jvj+40)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=103; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+37,jvj+38,103,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+39; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+40,jvj+39,jvj+10)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+44)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+49; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+49)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V33; pile[WZ4]=jvj+51; 
(*f[192])( );     /*QUADRI4(100,41,130,V33,jvj+51)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+51; pile[WZ4]=jvj+50; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+51,jvj+50,jvj+48)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+46; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+46)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; pile[WZ2]=103; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+45,jvj+46,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+48,jvj+47,jvj+11)*/
pile[WZ2]=111; pile[WZ3]=jvj+6; pile[WZ4]=jvj+2; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+6,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=107; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+7)*/
pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+8)*/
pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+9)*/
pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+10)*/
pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+11)*/
l5:pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
Z=V3;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+52)*/
pile[WZ3]=26; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+55)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+60; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+60)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Z; pile[WZ4]=jvj+62; 
(*f[192])( );     /*QUADRI4(100,41,130,Z,jvj+62)*/
pile[v[22]]=jvj+60; pile[WZ1]=111; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,111,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+62,jvj+61,jvj+59)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+57; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+57)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=103; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+56,jvj+57,103,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+59; pile[WZ4]=jvj+58; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+59,jvj+58,jvj+53)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-630); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,(-630),jvj+68)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Z; pile[WZ4]=jvj+70; 
(*f[192])( );     /*QUADRI4(100,41,130,Z,jvj+70)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+70,jvj+69,jvj+67)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+65; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+65)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; pile[WZ2]=103; pile[WZ3]=jvj+66; 
(*f[58])( );     /*TRI3(jvj+64,jvj+65,103,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+66; pile[WZ5]=jvj+54; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+67,jvj+66,jvj+54)*/
pile[WZ2]=111; pile[WZ3]=jvj+52; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+52,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=107; pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+53)*/
pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+54)*/
pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
l3:I++;
if((I<=63)) goto l4;
K++;
goto l1;
l7:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+2; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+2)*/
goto l5;
}
