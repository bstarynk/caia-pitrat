#include "dx.h"
void EVLZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0;
int Y;
int Z;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

Y=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[Y]==65)) goto l1;
pile[v[22]]=11; pile[WZ1]=Y; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(11,Y,jvj+1)*/
if((x[jvj+1]!=135)) goto l2;
Z=134;
l3:v[0]=jvj; v[22]-=2; pile[v[22]+1]=Z; v[102]=0;return;
l1:V2=getchar();
V1=V2;
Z=V1;
goto l3;
l2:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
