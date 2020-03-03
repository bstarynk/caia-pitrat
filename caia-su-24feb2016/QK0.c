#include "dx.h"
void QK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,L=0;
int I;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=10289;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1961&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=I;
l1:pile[v[22]]=V1; pile[WZ2]=jvj+2; 
(*f[2074])( );     /*QKB0(V1,L,jvj+2)*/
L=pile[WZ1]; 
if((x[jvj+2]==67)) goto l2;
if((x[jvj+2]==68)) goto l4;
J=V1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=J; return;
l2:J=L;
goto l3;
l4:V1=L;
goto l1;
}
