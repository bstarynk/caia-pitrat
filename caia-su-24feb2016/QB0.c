#include "dx.h"
void QB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V4=0;
int X,Z;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=10458;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2132&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; Z=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=235; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(235,jvj+2,jvj+3)*/
x[jvj+4]=vo[15];z[jvj+4]=vz[15];
pile[v[22]]=1; pile[WZ1]=jvj+4; pile[WZ2]=323; 
(*f[1113])( );     /*INCM0(1,jvj+4,323,V1)*/
V1=pile[WZ3]; 
V4=V1;
pile[v[22]]=Z; pile[WZ1]=447; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(Z,447,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+3; pile[WZ2]=235; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+6,jvj+3,235,jvj+7)*/
pile[v[22]]=193; pile[WZ1]=V4; pile[WZ2]=218; pile[WZ3]=X; pile[WZ4]=jvj+7; pile[WZ5]=jvj+5; 
(*f[48])( );     /*QUADRI1(193,V4,218,X,jvj+7,jvj+5)*/
pile[v[22]]=jvj+2; pile[WZ1]=235; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(jvj+2,235,jvj+5)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
