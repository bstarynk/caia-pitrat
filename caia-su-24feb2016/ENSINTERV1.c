#include "dx.h"
void ENSINTERV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0;
int A,B,R;
int WZ1;

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ1=v[22]+1; 
V2=A;
l1:if((V2>B)) goto l2;
pile[v[22]]=R; pile[WZ1]=V2; 
(*f[207])( );     /*PLUE2(R,V2)*/
l2:if((V2<B)) goto l3;
v[22]-=3; return;
l3:V1=V2+1;
V2=V1;
goto l1;
}
