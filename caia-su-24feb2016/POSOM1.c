#include "dx.h"
void POSOM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0;
int A,B;
int RT;

A=pile[v[22]]; B=pile[v[22]+1]; RT=pile[v[22]+2]; v[22]+=3; 
if((A>=0)) goto l1;
if((B>=0)) goto l2;
V2=(-A);
V3=999999999+B;
if((V2<V3)) goto l2;
l3:x[RT]=134 ;z[RT]=134;
l4:v[22]-=3; return;
l1:if((B<=0)) goto l2;
if((A<=0)) goto l2;
V1=999999999-B;
if((A<V1)) goto l2;
goto l3;
l2:x[RT]=135 ;z[RT]=135;
goto l4;
}
