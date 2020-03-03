#include "dx.h"
void AJE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Y=0,V2=0,V1=0;
int EC,X,AT;
int WZ1,WZ2;

EC=pile[v[22]]; X=pile[v[22]+1]; AT=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V2=x[EC];
l1:if((V2>0)) goto l2;
v[22]-=3; return;
l2:Y=s[V2];
V1=Y;
pile[v[22]]=V1; pile[WZ1]=AT; pile[WZ2]=X; 
(*f[235])( );     /*PLUSC2(V1,AT,X)*/
V2=t[V2];
goto l1;
}
