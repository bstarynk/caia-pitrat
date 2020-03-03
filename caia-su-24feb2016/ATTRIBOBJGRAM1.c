#include "dx.h"
void ATTRIBOBJGRAM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V4=0,V6=0;
int NN,E,F;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

NN=pile[v[22]]; E=pile[v[22]+1]; F=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V6=NN;
l1:V1=r[V6];
if((V1<=4)) goto l3;
x[jvj+3]=V1 ;z[jvj+3]=(V1<=sepcte) ? V1 : 0;
x[jvj+1]=x[jvj+3] ;z[jvj+1]=z[jvj+3];
pile[v[22]]=1640; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1640,jvj+1,jvj+2)*/
pile[v[22]]=E; 
(*f[68])( );     /*PLUE0(E,jvj+1)*/
l3:V4=t[V6];
if((V4>0)) goto l4;
v[0]=jvj; v[22]-=3; return;
l2:pile[v[22]]=F; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(F,jvj+1)*/
goto l3;
l4:V6=V4;
goto l1;
}
