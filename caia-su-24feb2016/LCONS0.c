#include "dx.h"
void LCONS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V4=0,V5=0,DY=0,V3=0;
int DT,R;
int DF;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

DT=pile[v[22]]; R=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=105 ;z[jvj+2]=105;
pile[v[22]]=DT; pile[WZ1]=jvj+1; 
(*f[726])( );     /*LCONT0(DT,jvj+1,DY)*/
DY=pile[WZ2]; 
V1=bh[v[1]][DY];
if(V1==32||V1==93||V1==44||V1==59) goto l1;
pile[v[22]]=20; pile[WZ1]=10334; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10334,0,V4)*/
V4=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(41,1,V4,V5)*/
V5=pile[WZ3]; 
pile[v[22]]=V5; 
(*f[40])( );     /*SLG0(V5)*/
l1:pile[v[22]]=R; pile[WZ1]=jvj+2; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(R,jvj+2,jvj+1)*/
V3=bh[v[1]][DY];
if((V3==44)) goto l2;
DF=DY;
l3:v[0]=jvj; v[22]-=3; pile[v[22]+2]=DF; return;
l2:pile[v[22]]=R; pile[WZ1]=DY; pile[WZ2]=jvj+2; 
(*f[1106])( );     /*LCONS1(R,DY,jvj+2,DF)*/
DF=pile[WZ3]; 
goto l3;
}
