#include "dx.h"
void EVLZVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Y,E;
int Z;
int WZ1;

Y=pile[v[22]]; E=pile[v[22]+1]; v[22]+=3; 
WZ1=v[22]+1; 
if((x[Y]!=595)) goto l1;
pile[v[22]]=E; 
(*f[622])( );if(v[102]) goto l1;     /*PGCDE0(E,Z)*/
Z=pile[WZ1]; 
v[22]-=3; pile[v[22]+2]=Z; v[102]=0;return;
l1:v[22]-=3; v[102]=1;return;
}
