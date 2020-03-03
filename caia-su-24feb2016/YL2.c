#include "dx.h"
void YL2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0;
int N;
int WZ1,WZ2,WZ3;

N=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((v[19]<=0)) goto l1;
pile[v[22]]=20; pile[WZ1]=10027; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10027,0,V1)*/
V1=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V1; 
(*f[39])( );     /*SDX0(41,N,V1,V2)*/
V2=pile[WZ3]; 
pile[v[22]]=V2; 
(*f[40])( );     /*SLG0(V2)*/
l1:if((N>=0)) goto l2;
if((v[19]<=0)) goto l2;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l2:v[22]-=1; return;
}
