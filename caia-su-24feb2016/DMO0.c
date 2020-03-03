#include "dx.h"
void DMO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V19=0,V22=0,W=0,VV=0;
int ATT,A,V,R,X,BT;
int Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=68;
if(v[0]>99700) (*f[6])( );

ATT=pile[v[22]]; A=pile[v[22]+1]; V=pile[v[22]+2]; R=pile[v[22]+3]; X=pile[v[22]+4]; BT=pile[v[22]+5]; Y=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[Y]=incon;
pile[v[22]]=101; pile[WZ1]=ATT; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,ATT,jvj+1)*/
x[jvj+7]=x[jvj+1] ;z[jvj+7]=z[jvj+1];
pile[v[22]]=479; pile[WZ1]=240; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(479,240,jvj+4)*/
pile[v[22]]=A; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(A,jvj+5)*/
l2:if((x[jvj+4]<=0)) goto l4;
x[jvj+2]=s[x[jvj+4]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+4];
pile[v[22]]=122; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(122,jvj+2,jvj+6)*/
if((x[jvj+6]!=x[jvj+7])) goto l3;
pile[v[22]]=466; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(466,jvj+2,V9)*/
V9=pile[WZ2]; 
x[jvj+41]=incon;
pile[v[22]]=158; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(158,jvj+2,jvj+3)*/
if((x[jvj+3]!=23)) goto l1;
x[jvj+41]=179 ;z[jvj+41]=179;
l12:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=465; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,465,jvj+37)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+39)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+40; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+40,jvj+26)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+41; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+41,jvj+24)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=436; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,436,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=111; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+23,jvj+24,111,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+25; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+26,jvj+25,Y)*/
l4:pile[v[22]]=447; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(447,jvj+7,jvj+8)*/
if((x[jvj+8]!=482)) goto l5;
x[jvj+9]=vo[20];z[jvj+9]=vz[20];
pile[v[22]]=1270; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1270,jvj+9,jvj+10)*/
if((x[jvj+10]!=68)) goto l5;
x[jvj+17]=1270 ;z[jvj+17]=1270;
l6:if(x[Y]==incon) goto l7;
l11:v[0]=jvj; v[22]-=7; return;
l1:x[jvj+41]=500 ;z[jvj+41]=500;
goto l12;
l3:x[jvj+4]=t[x[jvj+4]];
goto l2;
l5:x[jvj+17]=245 ;z[jvj+17]=245;
goto l6;
l7:x[jvj+11]=vo[15];z[jvj+11]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(283,jvj+11,jvj+12)*/
pile[v[22]]=ATT; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(ATT,jvj+13)*/
pile[v[22]]=A; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(A,jvj+14)*/
l8:if((x[jvj+12]>0)) goto l9;
pile[v[22]]=A; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(A,jvj+19)*/
pile[v[22]]=ATT; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(ATT,jvj+20)*/
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(VV)*/
VV=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10226; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,10226,jvj+32)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+49; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=103; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+50; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+19,jvj+50,jvj+33)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-602); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(100,21,140,(-602),jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=103; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,103,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+52; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+20,jvj+52,jvj+34)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+55)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=103; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+55,jvj+54,jvj+35)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+58)*/
pile[WZ3]=(-619); pile[WZ4]=jvj+56; 
(*f[270])( );     /*QUADRI7(100,21,140,(-619),jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=103; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+56,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+58,jvj+57,jvj+36)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+32; pile[WZ4]=Y; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+32,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+33)*/
pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+34)*/
pile[WZ1]=113; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(Y,113,jvj+35)*/
pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(Y,113,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+64)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+68)*/
pile[WZ3]=VV; pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+66)*/
pile[v[22]]=jvj+64; pile[WZ1]=111; pile[WZ2]=jvj+65; 
(*f[54])( );     /*TRI1(jvj+64,111,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; pile[WZ2]=103; pile[WZ3]=jvj+67; 
(*f[58])( );     /*TRI3(jvj+65,jvj+66,103,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+68; pile[WZ4]=jvj+67; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+68,jvj+67,jvj+63)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+61)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+59; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=436; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,436,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=111; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+60,jvj+61,111,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+62; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+63,jvj+62,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; 
(*f[1647])( );     /*DMT0(jvj+21,BT,X,R)*/
goto l11;
l9:x[jvj+15]=s[x[jvj+12]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+12];
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+15,V19)*/
V19=pile[WZ2]; 
if((V19!=V)) goto l10;
pile[v[22]]=158; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(158,jvj+15,jvj+16)*/
pile[v[22]]=110; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(110,jvj+16,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+17,jvj+16,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+18; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+18,jvj+29)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-602); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(100,21,140,(-602),jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=103; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+43; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+13,jvj+43,jvj+30)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=103; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+45; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+14,jvj+45,jvj+31)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+48)*/
pile[WZ3]=V22; pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(100,21,140,V22,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=103; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+48,jvj+47,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+28; 
(*f[180])( );     /*TRIENS0(jvj+27,(-20),113,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=Y; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+29,jvj+28,Y)*/
pile[v[22]]=Y; pile[WZ1]=114; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+30)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(Y,114,jvj+31)*/
goto l11;
l10:x[jvj+12]=t[x[jvj+12]];
goto l8;
}
