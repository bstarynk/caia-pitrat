#include "dx.h"
void ISI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,Y;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Y=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[X]==x[Y])) goto l1;
pile[v[22]]=134; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(134,X,jvj+1)*/
l3:v[0]=jvj; v[22]-=3; v[102]=1;return;
l1:x[RES]=135 ;z[RES]=135;
v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(135,X,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=Y; pile[WZ2]=jvj+3; 
(*f[2008])( );if(v[102]) goto l3;     /*ISI0(jvj+2,Y,jvj+3)*/
if((x[jvj+3]==135)) goto l1;
goto l3;
}
