#include "dx.h"
void PRENDRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V4=0;
int N,P;
int E;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; P=pile[v[22]+1]; E=pile[v[22]+2]; v[22]+=3; 
WZ1=v[22]+1; 
x[jvj+1]=P ;z[jvj+1]=0;
x[E]=x[jvj+1] ;z[E]=z[jvj+1];
V5=N-1;
if((V5==0)) goto l1;
if((V5<=0)) goto l2;
V4=t[P];
pile[v[22]]=V5; pile[WZ1]=V4; 
(*f[4099])( );     /*PRENDRE1(V5,V4)*/
l2:v[0]=jvj; v[22]-=3; return;
l1:t[P]=0;
goto l2;
}
