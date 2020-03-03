#include "dx.h"
void LIRN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,NN=0,V1=0,V=0,W=0,V2=0,V3=0,V4=0;
int N,MR,P,A;
int Q;
int WZ1,WZ2,WZ3,WZ4;

N=pile[v[22]]; MR=pile[v[22]+1]; P=pile[v[22]+2]; A=pile[v[22]+3]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((N<0)) goto l1;
NN=N;
l2:if((NN==0)) goto l3;
if((NN<=0)) goto l6;
V1=(sw[P]<<8)|(sw[P+1]&0xff);
V=V1;
if((MR!=20)) goto l4;
if((V>=0)) goto l4;
pile[v[22]]=V; 
(*f[653])( );if(v[102]) goto l4;     /*LIRX0(V,W)*/
W=pile[WZ1]; 
l5:V2=(-MR);
V3=P+2;
V4=NN-1;
r[A]=V2;
s[A]=W;
pile[v[22]]=A; pile[WZ1]=V3; pile[WZ2]=MR; pile[WZ3]=V4; 
(*f[655])( );if(v[102]) goto l6;     /*LIRN1(A,V3,MR,V4,Q)*/
Q=pile[WZ4]; 
l7:v[22]-=5; pile[v[22]+4]=Q; v[102]=0;return;
l1:V5=65536+N;
NN=V5;
goto l2;
l3:Q=P;
goto l7;
l4:W=V;
goto l5;
l6:v[22]-=5; v[102]=1;return;
}
