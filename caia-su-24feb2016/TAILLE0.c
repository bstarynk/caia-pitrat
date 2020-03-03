#include "dx.h"
void TAILLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V5=0,V4=0,V3=0,V2=0,V8=0,V9=0;
int I,N,E;
int J;

I=pile[v[22]]; N=pile[v[22]+1]; E=pile[v[22]+2]; v[22]+=4; 
V9=E;
V8=I;
l1:V7=t[V9];
if((V7==0)) goto l2;
if((V7<=0)) goto l3;
V5=s[V9];
V4=V5;
for(i=V4,V3=0;i>0;i=t[i],V3++)  ;
V2=V8*V3;
if((V2>=N)) goto l3;
V8=V2;
V9=V7;
goto l1;
l2:J=V8;
v[22]-=4; pile[v[22]+3]=J; v[102]=0;return;
l3:v[22]-=4; v[102]=1;return;
}
