#include "dx.h"
void FOBJ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V6=0,V2=0,II=0,JA=0,JJ=0,V3=0,V4=0,V14=0,V8=0,V9=0,V11=0,V13=0,V20=0,V15=0,V16=0,V17=0,V19=0;
int I,S;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; S=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((v[232]<=0)) goto l1;
pile[v[22]]=20; pile[WZ1]=11646; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11646,0,V5)*/
V5=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=V5; 
(*f[39])( );     /*SDX0(41,I,V5,V6)*/
V6=pile[WZ3]; 
pile[v[22]]=V6; 
(*f[40])( );     /*SLG0(V6)*/
l1:V2=I-1;
II=V2;
pile[v[22]]=II; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l3;     /*SMA0(II,64,67,jvj+1)*/
(*f[107])( );     /*CRC0(II,JA)*/
JA=pile[WZ1]; 
if((x[S]!=x[jvj+1])) goto l3;
JJ=JA;
V3=bh[v[1]][JJ];
if((V3!=32)) goto l3;
V4=JJ+1;
J=V4;
if((v[232]<=0)) goto l2;
V14=x[jvj+1];
pile[v[22]]=20; pile[WZ1]=11646; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11646,0,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=V8; 
(*f[39])( );     /*SDX0(41,I,V8,V9)*/
V9=pile[WZ3]; 
pile[WZ1]=J; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(41,J,V9,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V14; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(20,V14,V11,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
l2:if((v[232]<=9)) goto l4;
V20=x[jvj+1];
pile[v[22]]=20; pile[WZ1]=11646; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11646,0,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V15; pile[WZ2]=80; 
(*f[42])( );     /*SRA1(135,V15,80,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=J; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(41,J,V16,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V20; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,V20,V17,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; 
(*f[40])( );     /*SLG0(V19)*/
l4:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l3:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
