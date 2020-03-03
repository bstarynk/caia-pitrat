#include "dx.h"
void SPM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0;
int X,I;
int J;
int WZ1,WZ2;

X=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((X>=0)) goto l1;
V2=I+1;
pile[v[22]]=X; pile[WZ1]=V2; 
(*f[221])( );     /*SRN0(X,V2,V1)*/
V1=pile[WZ2]; 
V3=V1+1;
J=V3;
c[v[1]][I]=40;
c[v[1]][V1]=41;
l2:v[22]-=3; pile[v[22]+2]=J; return;
l1:pile[v[22]]=X; pile[WZ1]=I; 
(*f[221])( );     /*SRN0(X,I,J)*/
J=pile[WZ2]; 
goto l2;
}
