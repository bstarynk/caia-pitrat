#include "dx.h"
void MNMXNEC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,V4=0;
int E,K;
int RES;

E=pile[v[22]]; K=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
V4=K;
l1:V1=tu[V4];
if((V1==0)) goto l3;
V2=tm[V4];
for(a=x[E];a>0;a=t[a]) if(s[a]==V2) goto l2;
l3:if((V4>0)) goto l4;
v[22]-=3; v[102]=1;return;
l2:x[RES]=135 ;z[RES]=135;
v[22]-=3; v[102]=0;return;
l4:V3=V4-1;
V4=V3;
goto l1;
}
