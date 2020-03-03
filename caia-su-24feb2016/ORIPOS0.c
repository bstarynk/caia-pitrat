#include "dx.h"
void ORIPOS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int A;
int R;
int WZ1,WZ2;

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[A];
if((V1<=sepfacts)) goto l1;
if((V1>sephist)) goto l1;
pile[v[22]]=345; pile[WZ1]=A; pile[WZ2]=R; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(345,A,R)*/
l2:v[22]-=2; return;
l1:x[R]=x[A] ;z[R]=z[A];
goto l2;
}
