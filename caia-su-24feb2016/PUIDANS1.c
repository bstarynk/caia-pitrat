#include "dx.h"
void PUIDANS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,V4=0,V5=0;
int A,B,S;
int R;

A=pile[v[22]]; B=pile[v[22]+1]; S=pile[v[22]+2]; v[22]+=4; 
V5=S;
V4=A;
l1:V1=V4%B;
if((V1==0)) goto l2;
R=V5;
v[22]-=4; pile[v[22]+3]=R; return;
l2:V2=V4/B;
V3=V5+1;
V4=V2;
V5=V3;
goto l1;
}
