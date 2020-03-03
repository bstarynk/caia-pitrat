#include "dx.h"
void NEGEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V23=0,V22=0,V21=0,J=0,V18=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=65;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,A,jvj+14)*/
if((x[jvj+14]==484)) goto l7;
if((x[jvj+14]!=22)) goto l10;
pile[v[22]]=111; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,A,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+16,jvj+17)*/
if(x[jvj+17]!=25&&x[jvj+17]!=26&&x[jvj+17]!=27&&x[jvj+17]!=28&&x[jvj+17]!=29&&x[jvj+17]!=30) goto l8;
pile[v[22]]=268; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+17,jvj+18)*/
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,A,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,A,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+18; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+18,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+49,jvj+22,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+50; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+50,R)*/
l13:v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
V24=V18+1;
V23=(-V24);
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1280; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,1280,jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V23; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,V23,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=160; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,160,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=111; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+4; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,jvj+4,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+2; pile[WZ4]=jvj+43; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+2,jvj+43,jvj+10)*/
l3:pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+10)*/
pile[WZ1]=jvj+38; 
(*f[299])( );     /*COPEL0(jvj+9,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+38; pile[WZ2]=107; pile[WZ3]=jvj+60; 
(*f[301])( );     /*TRI11(jvj+59,jvj+38,107,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+60,22,100,R)*/
goto l13;
l5:x[jvj+11]=s[x[jvj+31]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+31];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[987])( );if(v[102]) goto l6;     /*NEGEXP0(jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+12)*/
l6:x[jvj+31]=t[x[jvj+31]];
l4:if((x[jvj+31]>0)) goto l5;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+32; 
(*f[299])( );     /*COPEL0(jvj+13,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+30; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+30,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+32; pile[WZ2]=107; pile[WZ3]=jvj+57; 
(*f[301])( );     /*TRI11(jvj+56,jvj+32,107,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+57,22,100,R)*/
goto l13;
l7:pile[v[22]]=A; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(A,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+44)*/
pile[WZ3]=134; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+46)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; pile[WZ2]=103; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+45,jvj+46,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+47; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+47,R)*/
goto l13;
l8:if(x[jvj+17]!=625&&x[jvj+17]!=568) goto l9;
pile[v[22]]=268; pile[WZ1]=jvj+17; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+17,jvj+23)*/
pile[v[22]]=160; pile[WZ1]=A; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(160,A,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,A,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+27)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,A,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+23; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+23,jvj+52)*/
pile[v[22]]=jvj+25; pile[WZ1]=160; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+25,160,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=111; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+51,jvj+52,111,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+29; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+53,jvj+29,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+54; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+54,R)*/
goto l13;
l9:if(x[jvj+17]!=55&&x[jvj+17]!=48) goto l10;
pile[v[22]]=268; pile[WZ1]=jvj+17; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+17,jvj+30)*/
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(107,A,jvj+31)*/
x[jvj+13]=0 ;z[jvj+13]=0;
goto l4;
l10:pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,A,jvj+33)*/
if(x[jvj+33]!=135&&x[jvj+33]!=134) goto l11;
pile[v[22]]=201; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(201,jvj+33,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+34; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+34,R)*/
goto l13;
l11:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,A,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=1280)) goto l12;
pile[v[22]]=160; pile[WZ1]=A; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(160,A,jvj+37)*/
pile[v[22]]=130; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+37,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,A,jvj+1)*/
pile[v[22]]=103; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,A,jvj+3)*/
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+5)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+6)*/
V22=abs(V18);
V21=V22-1;
x[jvj+7]=d[119];z[jvj+7]=0;
J=0;
l2:if((J<=V21)) goto l14;
x[jvj+10]=incon;
if((V18>=0)) goto l1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+10)*/
goto l3;
l12:v[0]=jvj; v[22]-=2; v[102]=1;return;
l14:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1280; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,1280,jvj+63)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+61; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=160; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,160,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; pile[WZ2]=111; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+62,jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+65; 
(*f[58])( );     /*TRI3(jvj+64,jvj+6,103,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+65; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+65,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[196])( );     /*PLUF0(jvj+7,jvj+8,jvj+9)*/
J++;
goto l2;
}
