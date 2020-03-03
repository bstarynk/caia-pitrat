#include "dx.h"
void ISSM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(135,X,jvj+1)*/
pile[v[22]]=134; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(134,X,jvj+2)*/
x[jvj+3]=x[jvj+1] ;z[jvj+3]=z[jvj+1];
pile[v[22]]=135; 
(*f[1380])( );     /*RECZ0(135,X,jvj+2)*/
pile[v[22]]=134; pile[WZ2]=jvj+3; 
(*f[1380])( );     /*RECZ0(134,X,jvj+3)*/
l1:v[0]=jvj; v[22]-=1; return;
}
