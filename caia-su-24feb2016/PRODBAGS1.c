#include "dx.h"
void PRODBAGS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0,V1=0,V4=0,V5=0,V8=0,V9=0;
int EE,GG,S;
int WZ1,WZ2;

EE=pile[v[22]]; GG=pile[v[22]+1]; S=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V9=GG;
V8=EE;
l1:V2=s[V8];
V3=s[V9];
V1=V2*V3;
pile[v[22]]=S; pile[WZ1]=117; pile[WZ2]=V1; 
(*f[186])( );     /*BTC0(S,117,V1)*/
V4=t[V8];
if((V4<=0)) goto l2;
V5=t[V9];
if((V5<=0)) goto l2;
V8=V4;
V9=V5;
goto l1;
l2:v[22]-=3; return;
}
