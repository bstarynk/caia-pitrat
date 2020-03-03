#include "dx.h"
void INTERP4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int ZZG,ZZBL,ZZN;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

ZZG=pile[v[22]]; ZZBL=pile[v[22]+1]; ZZN=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(216,158,jvj+4)*/
V1=vg[ZZG];
if((V1<=0)) goto l1;
x[jvj+1]=V1 ;z[jvj+1]=(V1<=sepcte) ? V1 : 0;
pile[v[22]]=135; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(135,jvj+1,jvj+2)*/
x[jvj+3]=vo[20];z[jvj+3]=vz[20];
pile[v[22]]=jvj+3; pile[WZ1]=558; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+3,558,jvj+4)*/
pile[v[22]]=jvj+2; pile[WZ1]=RES; 
(*f[598])( );     /*EVLQ2(jvj+2,RES)*/
l2:v[0]=jvj; v[22]-=4; return;
l1:x[RES]=135 ;z[RES]=135;
goto l2;
}
