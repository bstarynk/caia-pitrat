#include "dx.h"
void MODPUIPOS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,V4=0,V2=0,V6=0,V5=0;
int C,B,A;
int R;
int WZ1,WZ2,WZ3;

C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((B==0)) goto l1;
if((B==1)) goto l2;
if((A==0)) goto l3;
if((B<=1)) goto l4;
V3=A%C;
V4=B-1;
pile[v[22]]=C; pile[WZ1]=V4; pile[WZ2]=V3; 
(*f[1043])( );if(v[102]) goto l4;     /*MODPUIPOS0(C,V4,V3,V2)*/
V2=pile[WZ3]; 
V6=V3*V2;
V5=V6%C;
R=V5;
l5:v[22]-=4; pile[v[22]+3]=R; v[102]=0;return;
l1:if((A==0)) goto l4;
R=1;
goto l5;
l2:V1=A%C;
R=V1;
goto l5;
l3:if((B<=0)) goto l4;
R=0;
goto l5;
l4:v[22]-=4; v[102]=1;return;
}
