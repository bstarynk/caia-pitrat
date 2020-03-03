#include "dx.h"
void SRB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,V4=0;
int N,II,C;
int J;

N=pile[v[22]]; II=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=4; 
V4=II;
V3=N;
l1:if((V3>0)) goto l2;
J=V4;
v[22]-=4; pile[v[22]+3]=J; return;
l2:V1=V3-1;
V2=V4+1;
c[v[1]][V4]=C;
V3=V1;
V4=V2;
goto l1;
}
