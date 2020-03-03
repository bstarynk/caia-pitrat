#include "dx.h"
void LIRN1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,NN=0,V1=0,V=0,W=0,V2=0,V3=0,V4=0,V5=0,V7=0,V8=0,V9=0;
int C,P,MR,N;
int Q;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

C=pile[v[22]]; P=pile[v[22]+1]; MR=pile[v[22]+2]; N=pile[v[22]+3]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V9=C;
V8=P;
V7=N;
l1:if((V7<0)) goto l2;
NN=V7;
l3:if((NN==0)) goto l4;
if((NN>0)) goto l5;
v[0]=jvj; v[22]-=5; v[102]=1;return;
l2:V6=65536+V7;
NN=V6;
goto l3;
l4:Q=V8;
v[0]=jvj; v[22]-=5; pile[v[22]+4]=Q; v[102]=0;return;
l5:V1=(sw[V8]<<8)|(sw[V8+1]&0xff);
V=V1;
if((MR!=20)) goto l6;
if((V>=0)) goto l6;
pile[v[22]]=V; 
(*f[653])( );if(v[102]) goto l6;     /*LIRX0(V,W)*/
W=pile[WZ1]; 
l7:V2=(-MR);
pile[v[22]]=W; pile[WZ1]=V2; pile[WZ2]=jvj+1; 
(*f[213])( );     /*TRI7(W,V2,jvj+1)*/
V3=x[jvj+1];
V4=NN-1;
V5=V8+2;
t[V9]=V3;
V7=V4;
V8=V5;
V9=V3;
goto l1;
l6:W=V;
goto l7;
}
