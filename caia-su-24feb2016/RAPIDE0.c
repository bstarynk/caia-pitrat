#include "dx.h"
void RAPIDE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=184; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(184,A,jvj+1)*/
if((x[jvj+1]<=0)) goto l3;
x[jvj+3]=s[x[jvj+1]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+1];
x[jvj+2]=x[jvj+3] ;z[jvj+2]=z[jvj+3];
pile[v[22]]=jvj+2; 
(*f[1162])( );if(v[102]) goto l2;     /*Z229Z0(jvj+2,V2)*/
V2=pile[WZ1]; 
if((V2>0)) goto l1;
l2:pile[v[22]]=jvj+2; 
(*f[1172])( );if(v[102]) goto l3;     /*Z232Z0(jvj+2,V3)*/
V3=pile[WZ1]; 
if((V3>0)) goto l1;
l3:x[R]=135 ;z[R]=135;
l4:v[0]=jvj; v[22]-=2; return;
l1:x[R]=134 ;z[R]=134;
goto l4;
}
