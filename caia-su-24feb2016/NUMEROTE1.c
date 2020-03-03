#include "dx.h"
void NUMEROTE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V2=0;
int L,N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

L=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V4=N;
x[jvj+1]=x[L] ;z[jvj+1]=z[L];
l1:pile[v[22]]=jvj+1; pile[WZ1]=1110; pile[WZ2]=V4; 
(*f[43])( );     /*CHGC2(jvj+1,1110,V4)*/
pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,jvj+1,jvj+2)*/
V2=V4+1;
x[jvj+1]=x[jvj+2] ;z[jvj+1]=z[jvj+2];
V4=V2;
goto l1;
l2:v[0]=jvj; v[22]-=2; return;
}
