#include "dx.h"
void SPCMT2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,M=0,V11=0,V7=0,V8=0,L=0,V3=0,V4=0,V5=0,V12=0,V13=0;
int X,I,K,P;
int J;
int WZ1,WZ2,WZ3;

X=pile[v[22]]; I=pile[v[22]+1]; K=pile[v[22]+2]; P=pile[v[22]+3]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V13=x[P];
V12=K;
V11=I;
l1:V2=X;
V1=cmt[V2][V12];
M=V1;
if((V13==68)) goto l2;
L=V11;
l3:if((M==0)) goto l4;
V3=M;
V4=L+1;
V5=V12+1;
c[v[1]][L]=V3;
V11=V4;
V12=V5;
V13=67;
goto l1;
l2:pile[v[22]]=V11; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V11,40,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=V2; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V7,V2,41,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=V8; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V8,41,L)*/
L=pile[WZ2]; 
goto l3;
l4:J=L;
v[22]-=5; pile[v[22]+4]=J; return;
}
