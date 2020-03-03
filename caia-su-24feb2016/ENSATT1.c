#include "dx.h"
void ENSATT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0,V5=0;
int ZZ,E;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

ZZ=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ1=v[22]+1; 
V5=ZZ;
l1:V2=r[V5];
x[jvj+1]=V2 ;z[jvj+1]=(V2<=sepcte) ? V2 : 0;
pile[v[22]]=E; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(E,jvj+1)*/
V3=t[V5];
if((V3>0)) goto l2;
v[0]=jvj; v[22]-=2; return;
l2:V5=V3;
goto l1;
}
