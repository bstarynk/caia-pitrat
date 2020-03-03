#include "dx.h"
void AJNUM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,NN=0;
int P,N;
int WZ1,WZ2;

P=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=117; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,N,V2)*/
V2=pile[WZ2]; 
V1=V2+1;
NN=V1;
pile[v[22]]=P; pile[WZ1]=117; pile[WZ2]=NN; 
(*f[43])( );     /*CHGC2(P,117,NN)*/
pile[v[22]]=N; 
(*f[43])( );     /*CHGC2(N,117,NN)*/
l1:v[22]-=2; return;
}
