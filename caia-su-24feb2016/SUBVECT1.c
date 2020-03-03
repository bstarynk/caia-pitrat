#include "dx.h"
void SUBVECT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V45=0,V24=0,V36=0,V57=0,V87=0,V86=0;
int M,S,BT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=56;
if(v[0]>99700) (*f[6])( );

M=pile[v[22]]; S=pile[v[22]+1]; BT=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=M; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,M,jvj+1)*/
if((x[jvj+1]==484)) goto l1;
if((x[jvj+1]==531)) goto l2;
if((x[jvj+1]==453)) goto l3;
if((x[jvj+1]==979)) goto l4;
if((x[jvj+1]!=1027)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,M,jvj+18)*/
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+18,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=M; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,M,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
pile[v[22]]=103; pile[WZ1]=M; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,M,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=419; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,419,jvj+50)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V57; pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(100,96,163,V57,jvj+53)*/
pile[v[22]]=jvj+22; pile[WZ1]=160; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+22,160,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; pile[WZ2]=111; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+49,jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+51,jvj+20,103,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+52; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+53,jvj+52,jvj+23)*/
l5:pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[1080])( );     /*SUBVECT0(jvj+23,jvj+24)*/
if((V87=w[x[BT]][1])==incon) goto l6;
if((V87!=23)) goto l14;
V86=x[M];
pile[v[22]]=BT; pile[WZ1]=S; pile[WZ2]=V86; 
(*f[134])( );     /*OTA0(BT,S,V86)*/
pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(S,BT,jvj+24)*/
l6:pile[v[22]]=100; pile[WZ1]=M; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,M,jvj+25)*/
if(x[jvj+25]==484||x[jvj+25]==453||x[jvj+25]==531||x[jvj+25]==979||x[jvj+25]==1027) goto l9;
x[jvj+54]=w[x[jvj+25]][9];
l7:if((x[jvj+54]<=0)) goto l9;
x[jvj+26]=s[x[jvj+54]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+54];
pile[v[22]]=jvj+26; pile[WZ1]=M; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+26,M,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ2]=jvj+26; 
(*f[1393])( );     /*SUBVECT1(jvj+27,M,jvj+26)*/
l8:x[jvj+54]=t[x[jvj+54]];
goto l7;
l1:pile[v[22]]=111; pile[WZ1]=M; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,M,jvj+2)*/
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+2,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=M; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,M,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=540; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,540,jvj+31)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V14; pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,96,163,V14,jvj+34)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+4; pile[WZ2]=103; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+32,jvj+4,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+33,jvj+23)*/
goto l5;
l2:pile[v[22]]=111; pile[WZ1]=M; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,M,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+5,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=M; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,M,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=542; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,542,jvj+35)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V45; pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(100,96,163,V45,jvj+38)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+7; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+36,jvj+7,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+37,jvj+23)*/
goto l5;
l3:pile[v[22]]=111; pile[WZ1]=M; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,M,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+8,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=M; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,M,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=102; pile[WZ1]=M; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,M,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=419; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,419,jvj+40)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V24; pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(100,96,163,V24,jvj+43)*/
pile[v[22]]=jvj+10; pile[WZ1]=160; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+10,160,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=111; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+41,jvj+12,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+42; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+43,jvj+42,jvj+23)*/
goto l5;
l4:pile[v[22]]=111; pile[WZ1]=M; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,M,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+13,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=M; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,M,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=103; pile[WZ1]=M; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,M,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=980; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,980,jvj+45)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V36; pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(100,96,163,V36,jvj+48)*/
pile[v[22]]=jvj+17; pile[WZ1]=160; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+17,160,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=111; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+44,jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+46,jvj+15,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+48,jvj+47,jvj+23)*/
goto l5;
l9:x[jvj+55]=w[x[jvj+25]][8];
l10:if((x[jvj+55]<=0)) goto l13;
x[jvj+28]=s[x[jvj+55]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+55];
pile[v[22]]=jvj+28; pile[WZ1]=M; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(jvj+28,M,jvj+29)*/
x[jvj+56]=x[jvj+29] ;z[jvj+56]=z[jvj+29];
l11:if((x[jvj+56]>0)) goto l12;
x[jvj+55]=t[x[jvj+55]];
goto l10;
l12:x[jvj+30]=s[x[jvj+56]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+56];
pile[v[22]]=jvj+30; pile[WZ1]=M; pile[WZ2]=jvj+28; 
(*f[1393])( );     /*SUBVECT1(jvj+30,M,jvj+28)*/
x[jvj+56]=t[x[jvj+56]];
goto l11;
l13:v[0]=jvj; v[22]-=3; return;
l14:pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+24; 
(*f[35])( );     /*CHGC1(S,BT,jvj+24)*/
goto l6;
}
