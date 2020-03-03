#include "dx.h"
void LOGIGRAPH13(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V4=0,I=0,V3=0,V2=0;
int V;
int NNNX;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26166;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2706&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=(-999999);
V4=V-1;
I=0;
l1:if((I<=V4)) goto l3;
if((V1!=(-999999))) goto l4;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l3:pile[v[22]]=I; pile[WZ1]=(-1859); 
(*f[3979])( );if(v[102]) goto l2;     /*LONGUEUR0(I,(-1859),V3)*/
V3=pile[WZ2]; 
V2=V3;
if(V2>V1) V1=V2;
l2:I++;
goto l1;
l4:NNNX=V1;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=NNNX; v[102]=0;return;
}
