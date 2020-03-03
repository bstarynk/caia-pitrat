#include "dx.h"
void INU1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V2=0,N=0,V1=0,V5=0;
int Z,C;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10647;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==712&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
Z=pile[v[22]]; C=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((C==82)) goto l2;
if((C==77)) goto l3;
if((C==69)) goto l4;
if((C==84)) goto l5;
if((C!=88)) goto l7;
N=4;
l6:pile[v[22]]=510; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(510,Z,V1)*/
V1=pile[WZ2]; 
g[V1]=N;
l7:pile[v[22]]=510; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(510,Z,V5)*/
V5=pile[WZ2]; 
V2=incon;
pile[v[22]]=107; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,Z,jvj+3)*/
if((x[jvj+3]!=0)) goto l1;
V2=0;
l8:vg[V5]=V2;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l1:V4=x[Z];
V2=V4;
goto l8;
l2:N=0;
goto l6;
l3:N=1;
goto l6;
l4:N=2;
goto l6;
l5:N=3;
goto l6;
}
