#include "dx.h"
void PLUB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,XN=0,XX=0;
int E,XS;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; XS=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=XS;
V2=(-96);
XN=V1;
XX=V2;
pile[v[22]]=XX; pile[WZ1]=XN; pile[WZ2]=E; pile[WZ3]=jvj+1; 
(*f[822])( );     /*TRI19(XX,XN,E,jvj+1)*/
x[E]=x[jvj+1];z[E]=0;
v[0]=jvj; v[22]-=2; return;
}
