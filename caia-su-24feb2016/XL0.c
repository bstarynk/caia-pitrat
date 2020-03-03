#include "dx.h"
void XL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,T=0,V3=0,K=0,V7=0,V6=0;
int I,X,C;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[X];
T=V1;
if((T<=0)) goto l3;
V3=s[T];
x[jvj+1]=V3 ;z[jvj+1]=(V3<=sepcte) ? V3 : 0;
pile[v[22]]=I; pile[WZ1]=jvj+1; 
(*f[223])( );if(v[102]) goto l3;     /*XX0(I,jvj+1,K)*/
K=pile[WZ2]; 
V7=t[T];
if((V7==0)) goto l1;
if((V7<=0)) goto l3;
if((C!=10)) goto l2;
pile[v[22]]=K; 
(*f[40])( );     /*SLG0(K)*/
pile[v[22]]=V7; pile[WZ1]=C; pile[WZ2]=0; 
(*f[1052])( );     /*XL1(V7,C,0,J)*/
J=pile[WZ3]; 
l4:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l1:J=K;
goto l4;
l2:V6=K+1;
c[v[1]][K]=C;
pile[v[22]]=V7; pile[WZ1]=C; pile[WZ2]=V6; 
(*f[1052])( );     /*XL1(V7,C,V6,J)*/
J=pile[WZ3]; 
goto l4;
l3:J=I;
goto l4;
}
