#include "dx.h"
void PRENDRE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V3=0,V5=0,V6=0;
int N,P;

N=pile[v[22]]; P=pile[v[22]+1]; v[22]+=2; 
V6=P;
V5=N;
l1:V4=V5-1;
if((V4==0)) goto l2;
if((V4<=0)) goto l3;
V3=t[V6];
V5=V4;
V6=V3;
goto l1;
l2:t[V6]=0;
l3:v[22]-=2; return;
}
