#include "dx.h"
void SMD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,HA=0,V1=0,V2=0;
int ZZ,DD,HH,ZA;
int WZ1,WZ2,WZ3;

ZZ=pile[v[22]]; DD=pile[v[22]+1]; HH=pile[v[22]+2]; ZA=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V3=HH;
HA=V3;
V1=DD-1;
pile[v[22]]=ZZ; pile[WZ1]=130; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(ZZ,130,V1)*/
pile[WZ1]=163; pile[WZ2]=HA; 
(*f[177])( );     /*CHGC4(ZZ,163,HA)*/
V2=(-HH);
pile[v[22]]=ZA; pile[WZ1]=ZZ; pile[WZ2]=8192; pile[WZ3]=V2; 
(*f[722])( );     /*SMX0(ZA,ZZ,8192,V2)*/
v[22]-=4; return;
}
