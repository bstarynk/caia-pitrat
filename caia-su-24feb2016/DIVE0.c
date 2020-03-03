#include "dx.h"
void DIVE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0;
int X,T2,T1;
int Z;
int WZ1,WZ2;

X=pile[v[22]]; T2=pile[v[22]+1]; T1=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=T1%T2;
if((V1!=0)) goto l1;
if((T2==0)) goto l1;
V2=T1/T2;
Z=V2;
l3:v[22]-=4; pile[v[22]+3]=Z; v[102]=0;return;
l1:if((T1!=0)) goto l2;
if((T2!=0)) goto l2;
Z=0;
pile[v[22]]=X; pile[WZ1]=447; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(X,447,68)*/
goto l3;
l2:v[22]-=4; v[102]=1;return;
}
