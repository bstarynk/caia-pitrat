#include "dx.h"
void CORVA2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V10=0,V9=0,T=0,V11=0,V12=0,V15=0,V14=0,V17=0,V16=0,V19=0;
int A;
int B;
int WZ1,WZ2,WZ3;

A=pile[v[22]]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
N=0;
if((A>0)) goto l1;
B=0;
l6:v[22]-=2; pile[v[22]+1]=B; return;
l1:V10=A*127;
V9=V10&32767;
T=V9;
V11=cpb[T];
if((V11==A)) goto l2;
if((V11<=0)) goto l3;
V16=incon;
V17=T+1;
if((V17<=32767)) goto l4;
V16=0;
l5:V19=N+1;
pile[v[22]]=A; pile[WZ1]=V19; pile[WZ2]=V16; 
(*f[1065])( );     /*CORVA1(A,V19,V16,B)*/
B=pile[WZ3]; 
goto l6;
l2:V12=cpa[T];
B=V12;
goto l6;
l3:V15=v[8]+1;
V14=(-V15);
cpa[T]=V14;
cpb[T]=A;
phb[V15]=A;
v[8]=V15;
B=V14;
goto l6;
l4:V16=V17;
goto l5;
}
