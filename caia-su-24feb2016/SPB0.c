#include "dx.h"
void SPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,JJ=0,V2=0;
int X,I;
int J;
int WZ1,WZ2;

X=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=193; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(193,X,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=V1; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V1,I,JJ)*/
JJ=pile[WZ2]; 
V2=JJ+1;
c[v[1]][JJ]=58;
J=V2;
l2:v[22]-=3; pile[v[22]+2]=J; return;
l1:J=I;
goto l2;
}
