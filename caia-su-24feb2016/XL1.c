#include "dx.h"
void XL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V11=0,K=0,V6=0,V5=0,V10=0;
int T,C,I;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; C=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V11=I;
V10=T;
l1:if((V10<=0)) goto l4;
V2=s[V10];
x[jvj+1]=V2 ;z[jvj+1]=(V2<=sepcte) ? V2 : 0;
pile[v[22]]=V11; pile[WZ1]=jvj+1; 
(*f[223])( );if(v[102]) goto l4;     /*XX0(V11,jvj+1,K)*/
K=pile[WZ2]; 
V6=t[V10];
if((V6==0)) goto l2;
if((V6<=0)) goto l4;
if((C!=10)) goto l3;
pile[v[22]]=K; 
(*f[40])( );     /*SLG0(K)*/
V10=V6;
V11=0;
goto l1;
l2:J=K;
l5:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l3:V5=K+1;
c[v[1]][K]=C;
V10=V6;
V11=V5;
goto l1;
l4:J=V11;
goto l5;
}
