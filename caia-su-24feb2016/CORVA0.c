#include "dx.h"
void CORVA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V10=0,V9=0,T=0,V11=0,V13=0,V12=0,V15=0,V14=0,V17=0,BB=0;
int A;
int WZ1,WZ2,WZ3;

A=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
N=0;
if((A<=0)) goto l4;
V10=A*127;
V9=V10&32767;
T=V9;
V11=cpb[T];
if((V11<=0)) goto l1;
V14=incon;
V15=T+1;
if((V15<=32767)) goto l2;
V14=0;
l3:V17=N+1;
pile[v[22]]=A; pile[WZ1]=V17; pile[WZ2]=V14; 
(*f[1065])( );     /*CORVA1(A,V17,V14,BB)*/
BB=pile[WZ3]; 
l4:v[22]-=1; return;
l1:V13=v[8]+1;
V12=(-V13);
cpa[T]=V12;
cpb[T]=A;
phb[V13]=A;
v[8]=V13;
goto l4;
l2:V14=V15;
goto l3;
}
