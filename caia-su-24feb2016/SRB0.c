#include "dx.h"
void SRB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,II=0,V1=0,V2=0;
int N,I,C;
int J;
int WZ1,WZ2,WZ3;

N=pile[v[22]]; I=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((I>0)) goto l1;
II=0;
l2:if((N>0)) goto l3;
J=II;
l4:v[22]-=4; pile[v[22]+3]=J; return;
l1:V3=I+1;
II=V3;
c[v[1]][I]=32;
goto l2;
l3:V1=N-1;
V2=II+1;
c[v[1]][II]=C;
pile[v[22]]=V1; pile[WZ1]=V2; pile[WZ2]=C; 
(*f[231])( );     /*SRB1(V1,V2,C,J)*/
J=pile[WZ3]; 
goto l4;
}
