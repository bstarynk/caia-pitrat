#include "dx.h"
void POSNEXPR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,XX=0;
int A,BA;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; BA=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=BA; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[1492])( );     /*EXPVAUT0(BA,A,jvj+1)*/
if((x[jvj+1]==1881)) goto l1;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,A,V)*/
V=pile[WZ2]; 
pile[v[22]]=1481; pile[WZ1]=100; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1481,100,jvj+2)*/
pile[v[22]]=BA; pile[WZ1]=V; pile[WZ2]=jvj+3; 
(*f[1491])( );     /*VDSBA0(BA,V,jvj+3)*/
pile[v[22]]=1261; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1261,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1881) goto l2;
l3:v[0]=jvj; v[22]-=3; v[102]=1;return;
l1:x[RES]=68 ;z[RES]=68;
v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:if((x[jvj+2]<=0)) goto l3;
XX=s[x[jvj+2]];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==XX) goto l1;
x[jvj+2]=t[x[jvj+2]];
goto l2;
}
