#include "dx.h"
void SPLO1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0;
int I,X;
int J;
int WZ1;

I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ1=v[22]+1; 
J=0;
if((I<=0)) goto l3;
pile[v[22]]=I; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(I,3)*/
l3:L=1;
l2:if((L<=X)) goto l1;
v[22]-=3; pile[v[22]+2]=J; return;
l1:c[v[1]][0]=32;
pile[v[22]]=1; 
(*f[40])( );     /*SLG0(1)*/
L++;
goto l2;
}
