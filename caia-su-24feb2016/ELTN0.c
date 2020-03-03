#include "dx.h"
void ELTN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V4=0,V7=0,V6=0,V8=0,V9=0;
int B,A;
int R;

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
V9=A;
V8=x[B];
l1:if((V9==1)) goto l2;
if((V9<=1)) goto l3;
V4=0;
if((V8==V4)) goto l3;
V7=V9-1;
V6=t[V8];
V8=V6;
V9=V7;
goto l1;
l2:V1=0;
if((V8==V1)) goto l3;
V2=s[V8];
R=V2;
v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
l3:v[22]-=3; v[102]=1;return;
}
