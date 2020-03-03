#include "dx.h"
void DECEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0;
int A;
int R;
int WZ1;

A=pile[v[22]]; v[22]+=2; 
WZ1=v[22]+1; 
if((A>=10)) goto l1;
R=1;
l2:v[22]-=2; pile[v[22]+1]=R; return;
l1:V2=A/10;
pile[v[22]]=V2; 
(*f[984])( );     /*DECEXP0(V2,V1)*/
V1=pile[WZ1]; 
V3=V1+1;
R=V3;
goto l2;
}
