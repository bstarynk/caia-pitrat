#include "dx.h"
void DERNIERBLOC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V4=0,V6=0,V1=0,V8=0,V9=0,V11=0,V12=0,V14=0,V2=0,V3=0,V10=0,V16=0;
int K,I;
int WZ1,WZ2,WZ3;

K=pile[v[22]]; I=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V16=I;
l2:V2=z[V16];
if((V2!=(-100))) goto l4;
V3=x[V16];
if((V3<=sepbase)) goto l4;
if((V3==K)) goto l4;
V1=incon;
V5=V16+1;
V4=z[V5];
if((V4==(-101))) goto l1;
V1=0;
l3:vv[25]=V3;
vv[27]=V1;
V8=vv[27];
V9=vv[25];
pile[v[22]]=20; pile[WZ1]=10739; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10739,0,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V9; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(41,V9,V11,V12)*/
V12=pile[WZ3]; 
pile[WZ1]=V8; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(41,V8,V12,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; 
(*f[40])( );     /*SLG0(V14)*/
l5:v[22]-=2; return;
l1:V6=x[V5];
V1=V6;
goto l3;
l4:if((V16<=fintravail)) goto l5;
V10=V16-1;
V16=V10;
goto l2;
}
