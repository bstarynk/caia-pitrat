#include "dx.h"
void CRELOGIQUE16(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0;
int NE,ND,NV;
int NNNX;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26136;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2579&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NE=pile[v[22]]; ND=pile[v[22]+1]; NV=pile[v[22]+2]; v[22]+=4; 
V1=ND+NV;
V2=NE+V1;
NNNX=V2;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=NNNX; return;
}
