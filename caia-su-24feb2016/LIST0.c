#include "dx.h"
void LIST0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V1=0,V4=0,V7=0;
int E,AT,Q;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; AT=pile[v[22]+1]; Q=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[AT] ;z[jvj+3]=z[AT];
x[jvj+2]=x[Q] ;z[jvj+2]=z[Q];
V7=E;
l1:V3=s[V7];
x[jvj+1]=V3 ;z[jvj+1]=(V3<=sepcte) ? V3 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(642,jvj+1,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V1; pile[WZ4]=jvj+5; 
(*f[192])( );     /*QUADRI4(100,41,130,V1,jvj+5)*/
pile[WZ1]=120; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,120,102,jvj+5,jvj+4)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+2,jvj+3,jvj+4)*/
V4=t[V7];
if((V4<=0)) goto l2;
V7=V4;
x[jvj+2]=x[jvj+4] ;z[jvj+2]=z[jvj+4];
x[jvj+3]=120 ;z[jvj+3]=120;
goto l1;
l2:v[0]=jvj; v[22]-=3; return;
}
