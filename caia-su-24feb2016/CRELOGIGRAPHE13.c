#include "dx.h"
void CRELOGIGRAPHE13(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V2=0,Z=0;
int I,J,W;
int NNNX;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26167;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2720&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; J=pile[v[22]+1]; W=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V3=J-1;
V4=I*W;
V2=V3+V4;
pile[v[22]]=V2; pile[WZ1]=(-662); 
(*f[1010])( );if(v[102]) goto l1;     /*FVECT0(V2,(-662),Z)*/
Z=pile[WZ2]; 
if((Z<=0)) goto l1;
NNNX=Z;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=NNNX; v[102]=0;return;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
