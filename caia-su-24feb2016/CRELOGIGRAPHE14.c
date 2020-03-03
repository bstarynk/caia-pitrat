#include "dx.h"
void CRELOGIGRAPHE14(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int I,J,H,W;
int NNNX;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26167;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2721&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; J=pile[v[22]+1]; H=pile[v[22]+2]; W=pile[v[22]+3]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((H<=0)) goto l1;
if((W<=0)) goto l1;
V1=J-1;
pile[v[22]]=V1; pile[WZ1]=I; pile[WZ2]=W; pile[WZ3]=H; 
(*f[3980])( );if(v[102]) goto l1;     /*CALTVF0(V1,I,W,H,NNNX)*/
NNNX=pile[WZ4]; 
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+4]=NNNX; v[102]=0;return;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
}
