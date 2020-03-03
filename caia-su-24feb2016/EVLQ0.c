#include "dx.h"
void EVLQ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S=0;
int Z,INT;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10183;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==31&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Z=pile[v[22]]; INT=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
v[82]=0;
S=v[1];
v[1]=1;
pile[v[22]]=Z; pile[WZ1]=INT; pile[WZ2]=RES; 
(*f[208])( );     /*EVLX0(Z,INT,RES)*/
v[1]=S;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
