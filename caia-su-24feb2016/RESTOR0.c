#include "dx.h"
void RESTOR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V23=0,V13=0,V20=0,V21=0,V22=0,V15=0,V14=0,V18=0,V17=0;
int L;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10143;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==375&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; v[22]+=1; 
N=v[14];
if((L>=N)) goto l1;
v[14]=L;
V23=N;
l2:V13=pl[V23];
if((V13>0)) goto l5;
if((V13==0)) goto l6;
if((V13>=0)) goto l3;
V20=ou[V23];
V21=av[V23];
r[V20]=V21;
l3:V22=V23-1;
if((V22>L)) goto l4;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:V23=V22;
goto l2;
l5:V14=ou[V23];
V15=av[V23];
t[V14]=V15;
goto l3;
l6:V17=ou[V23];
V18=av[V23];
s[V17]=V18;
goto l3;
}
