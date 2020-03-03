#include "dx.h"
void PUIDANS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S=0,V1=0,V2=0,V3=0;
int B,A;
int R;
int WZ1,WZ2,WZ3;

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
S=0;
V1=A%B;
if((V1==0)) goto l1;
R=S;
l2:v[22]-=3; pile[v[22]+2]=R; return;
l1:V2=A/B;
V3=S+1;
pile[v[22]]=V2; pile[WZ1]=B; pile[WZ2]=V3; 
(*f[1360])( );     /*PUIDANS1(V2,B,V3,R)*/
R=pile[WZ3]; 
goto l2;
}
