#include "dx.h"
void NUMEROTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V2=0;
int L;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

L=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
N=1;
pile[v[22]]=L; pile[WZ1]=1110; pile[WZ2]=N; 
(*f[43])( );     /*CHGC2(L,1110,N)*/
pile[v[22]]=120; pile[WZ1]=L; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,L,jvj+1)*/
V2=N+1;
pile[v[22]]=jvj+1; pile[WZ1]=V2; 
(*f[1720])( );     /*NUMEROTE1(jvj+1,V2)*/
l1:v[0]=jvj; v[22]-=1; return;
}
