#include "dx.h"
void CRELOGIQUE13(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,V2=0;
int H,Q,S,Z;
int NNNX;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26136;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2576&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; Q=pile[v[22]+1]; S=pile[v[22]+2]; Z=pile[v[22]+3]; v[22]+=5; 
if((H<1)) goto l3;
if((H<=20)) goto l1;
if((H<=70)) goto l2;
if((H>73)) goto l3;
V3=S-Z;
V2=V3/3;
NNNX=V2;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+4]=NNNX; return;
l1:V1=S/3;
NNNX=V1;
goto l4;
l2:NNNX=Q;
goto l4;
l3:NNNX=0;
goto l4;
}
