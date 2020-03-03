#include "dx.h"
void LIREL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V15=0,V14=0,DT=0,NR=0,V9=0,V5=0,V11=0,V32=0,V30=0,V43=0,V38=0,V60=0,V52=0,V54=0,V68=0,V73=0,V74=0,V69=0,V79=0,V76=0,V83=0,V1=0,V71=0,V101=0,V28=0;
int DP;
int DX,EX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
if(v[0]>99700) (*f[6])( );

DP=pile[v[22]]; EX=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V15=DP+1;
V14=bh[v[1]][V15];
if((V14!=64)) goto l16;
pile[v[22]]=V15; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l16;     /*SMA0(V15,64,67,jvj+2)*/
(*f[107])( );     /*CRC0(V15,DT)*/
DT=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+15)*/
l10:V68=bh[v[1]][DT];
if((V68!=69)) goto l11;
V73=DT+1;
V74=bh[v[1]][V73];
if((V74<48)) goto l18;
if((V74>57)) goto l18;
V71=135;
l12:if((V71==135)) goto l13;
if((V74!=45)) goto l14;
V79=V73+1;
pile[v[22]]=V79; 
(*f[126])( );     /*LND2(V79,V76,DX)*/
V76=pile[WZ1]; DX=pile[WZ2]; 
V83=(-V76);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V83; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,V83,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=103; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=570; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+30; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,570,102,jvj+15,jvj+30,EX)*/
l15:v[0]=jvj; v[22]-=3; pile[v[22]+1]=DX; v[102]=0;return;
l1:pile[v[22]]=118; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(118,jvj+1,V20)*/
V20=pile[WZ2]; 
l14:DX=x[EX]=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l3:pile[v[22]]=V15; 
(*f[126])( );     /*LND2(V15,NR,DT)*/
NR=pile[WZ1]; DT=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NR; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,NR,jvj+15)*/
goto l10;
l4:V9=V15+1;
pile[v[22]]=V9; 
(*f[126])( );     /*LND2(V9,V5,DT)*/
V5=pile[WZ1]; DT=pile[WZ2]; 
V11=(-V5);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V11; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,V11,jvj+15)*/
goto l10;
l6:pile[v[22]]=DP; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l14;     /*SMA0(DP,64,67,jvj+1)*/
pile[v[22]]=118; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(118,jvj+1,V32)*/
V32=pile[WZ2]; 
if((V32==1)) goto l7;
if((V32==2)) goto l8;
if((V32!=3)) goto l1;
pile[v[22]]=V15; 
(*f[107])( );     /*CRC0(V15,V60)*/
V60=pile[WZ1]; 
pile[v[22]]=V60; pile[WZ2]=jvj+9; 
(*f[263])( );if(v[102]) goto l1;     /*LIREL0(V60,V52,jvj+9)*/
V52=pile[WZ1]; 
pile[v[22]]=V52; pile[WZ2]=jvj+10; 
(*f[263])( );if(v[102]) goto l1;     /*LIREL0(V52,V54,jvj+10)*/
V54=pile[WZ1]; 
pile[v[22]]=V54; pile[WZ2]=jvj+11; 
(*f[263])( );if(v[102]) goto l1;     /*LIREL0(V54,DT,jvj+11)*/
DT=pile[WZ1]; 
pile[v[22]]=jvj+9; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+22)*/
pile[v[22]]=jvj+14; pile[WZ1]=160; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+14,160,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=111; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+21,jvj+22,111,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+23,jvj+13,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+24; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+24,jvj+15)*/
goto l10;
l7:pile[v[22]]=V15; 
(*f[107])( );     /*CRC0(V15,V30)*/
V30=pile[WZ1]; 
pile[v[22]]=V30; pile[WZ2]=jvj+3; 
(*f[263])( );if(v[102]) goto l1;     /*LIREL0(V30,DT,jvj+3)*/
DT=pile[WZ1]; 
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+17; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+4,jvj+17,jvj+15)*/
goto l10;
l8:pile[v[22]]=V15; 
(*f[107])( );     /*CRC0(V15,V43)*/
V43=pile[WZ1]; 
pile[v[22]]=V43; pile[WZ2]=jvj+5; 
(*f[263])( );if(v[102]) goto l1;     /*LIREL0(V43,V38,jvj+5)*/
V38=pile[WZ1]; 
pile[v[22]]=V38; pile[WZ2]=jvj+6; 
(*f[263])( );if(v[102]) goto l1;     /*LIREL0(V38,DT,jvj+6)*/
DT=pile[WZ1]; 
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+8; pile[WZ2]=103; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,jvj+8,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+20; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+7,jvj+20,jvj+15)*/
goto l10;
l9:pile[v[22]]=V15; 
(*f[107])( );     /*CRC0(V15,DT)*/
DT=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+15)*/
goto l10;
l11:DX=DT;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=103; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=570; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+26; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,570,102,jvj+15,jvj+26,EX)*/
goto l15;
l13:pile[v[22]]=V73; 
(*f[126])( );     /*LND2(V73,V69,DX)*/
V69=pile[WZ1]; DX=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V69; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,V69,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=103; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=570; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+28; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,570,102,jvj+15,jvj+28,EX)*/
goto l15;
l16:if((V14<48)) goto l17;
if((V14>57)) goto l17;
V1=135;
l2:if((V1==135)) goto l3;
if((V14==45)) goto l4;
V101=V14;
if((V101>=97)) goto l21;
if((V101<65)) goto l19;
if((V101<=90)) goto l20;
l19:V28=134;
l5:if((V28==135)) goto l6;
goto l14;
l17:V1=134;
goto l2;
l18:V71=134;
goto l12;
l20:V28=135;
goto l5;
l21:if((V101<=122)) goto l20;
goto l19;
}
