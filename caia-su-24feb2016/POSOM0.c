#include "dx.h"
void POSOM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,V4=0;
int B,A;
int R;

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
if((A>=0)) goto l1;
if((B>=0)) goto l2;
V2=(-A);
V3=999999999+B;
if((V2<V3)) goto l2;
l3:v[22]-=3; v[102]=1;return;
l1:if((B<=0)) goto l2;
if((A<=0)) goto l2;
V1=999999999-B;
if((A<V1)) goto l2;
goto l3;
l2:V4=A+B;
R=V4;
v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
}
