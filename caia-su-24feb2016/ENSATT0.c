#include "dx.h"
void ENSATT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,ZZ=0,V2=0,V5=0,V6=0;
int Z;
int E;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ1=v[22]+1; 
V1=x[Z];
ZZ=V1;
V2=s[x[Z]];
if((V2!=66)) goto l1;
if((ZZ>sepcte)) goto l1;
pile[v[22]]=Z; 
(*f[59])( );     /*LECT0(Z)*/
l1:x[jvj+2]=0 ;z[jvj+2]=0;
x[E]=x[jvj+2] ;z[E]=z[jvj+2];
V5=r[ZZ];
x[jvj+1]=V5 ;z[jvj+1]=(V5<=sepcte) ? V5 : 0;
pile[v[22]]=E; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(E,jvj+1)*/
V6=t[ZZ];
if((V6<=0)) goto l2;
pile[v[22]]=V6; pile[WZ1]=E; 
(*f[4102])( );     /*ENSATT1(V6,E)*/
l2:v[0]=jvj; v[22]-=2; return;
}
