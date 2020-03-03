#include "dx.h"
void LNB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V37=0,V50=0,V51=0,V4=0,V3=0,V1=0,V7=0,V41=0,ZZ=0,V44=0,V9=0,V15=0,V18=0,NR=0,V20=0,V31=0,V30=0,V29=0,V34=0,V33=0,V48=0,V23=0,V53=0,V8=0;
int I;
int Z,K,TY;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; TY=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V4=I+1;
V3=bh[v[1]][V4];
if((V3==64)) goto l3;
if((V3!=96)) goto l1;
pile[v[22]]=I; 
(*f[257])( );if(v[102]) goto l1;     /*SRS0(I,V41)*/
V41=pile[WZ1]; 
(*f[256])( );if(v[102]) goto l1;     /*SY0(I,ZZ)*/
ZZ=pile[WZ1]; 
V44=ZZ;
K=V41;
x[TY]=96 ;z[TY]=96;
Z=V44;
l12:v[0]=jvj; v[22]-=4; pile[v[22]+1]=Z; pile[v[22]+2]=K; v[102]=0;return;
l1:if(V3==36||V3==34||V3==124||V3==38||V3==(-80)||V3==35) goto l4;
V53=V3;
if((V53>=97)) goto l16;
if((V53<65)) goto l14;
if((V53<=90)) goto l15;
l14:V8=134;
l2:if((V8==135)) goto l4;
l5:if((V3==45)) goto l6;
if((V3<48)) goto l13;
if((V3>57)) goto l13;
V23=135;
l8:if((V23==135)) goto l9;
if((V3==39)) goto l10;
if((V3!=40)) goto l11;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(250,158,jvj+1)*/
V48=x[jvj+1];
pile[v[22]]=jvj+1; pile[WZ1]=V4; 
(*f[333])( );if(v[102]) goto l11;     /*LNT1(jvj+1,V4,K)*/
K=pile[WZ2]; 
x[TY]=20 ;z[TY]=20;
Z=V48;
pile[v[22]]=158; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(158,jvj+1,jvj+2)*/
if((x[jvj+2]!=250)) goto l12;
(*f[71])( );     /*ENLV0(158,jvj+1)*/
goto l12;
l3:pile[v[22]]=V4; 
(*f[107])( );     /*CRC0(V4,V1)*/
V1=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l1;     /*SMA0(V4,64,67,jvj+3)*/
V7=x[jvj+3];
K=V1;
x[TY]=20 ;z[TY]=20;
Z=V7;
goto l12;
l4:pile[v[22]]=I; 
(*f[107])( );     /*CRC0(I,V9)*/
V9=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+4; 
(*f[78])( );if(v[102]) goto l5;     /*SMA0(I,64,67,jvj+4)*/
V15=x[jvj+4];
K=V9;
x[TY]=20 ;z[TY]=20;
Z=V15;
goto l12;
l6:V18=V4+1;
pile[v[22]]=V18; 
(*f[126])( );     /*LND2(V18,NR,K)*/
NR=pile[WZ1]; K=pile[WZ2]; 
V20=(-NR);
Z=V20;
l7:x[TY]=41 ;z[TY]=41;
goto l12;
l9:pile[v[22]]=V4; 
(*f[126])( );     /*LND2(V4,Z,K)*/
Z=pile[WZ1]; K=pile[WZ2]; 
goto l7;
l10:V31=V4+1;
V30=V31+1;
V29=V30+1;
V34=bh[v[1]][V31];
V33=V34;
K=V29;
x[TY]=89 ;z[TY]=89;
Z=V33;
V37=bh[v[1]][V30];
if(V37==39) goto l12;
pile[v[22]]=20; pile[WZ1]=10446; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10446,0,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(41,1,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
goto l12;
l11:Z=K=x[TY]=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l13:V23=134;
goto l8;
l15:V8=135;
goto l2;
l16:if((V53<=122)) goto l15;
goto l14;
}
