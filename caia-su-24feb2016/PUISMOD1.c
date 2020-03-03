#include "dx.h"
void PUISMOD1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,RT=0,V3=0,V2=0;
int AA,B,C;
int RR;
int WZ1,WZ2,WZ3;

AA=pile[v[22]]; B=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((B==1)) goto l1;
if((B<=1)) goto l2;
V1=B-1;
pile[v[22]]=AA; pile[WZ1]=V1; pile[WZ2]=C; 
(*f[1364])( );if(v[102]) goto l2;     /*PUISMOD1(AA,V1,C,RT)*/
RT=pile[WZ3]; 
V3=RT*AA;
V2=V3%C;
RR=V2;
l3:v[22]-=4; pile[v[22]+3]=RR; v[102]=0;return;
l1:RR=AA;
goto l3;
l2:v[22]-=4; v[102]=1;return;
}
