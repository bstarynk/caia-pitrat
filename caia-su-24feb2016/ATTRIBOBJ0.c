#include "dx.h"
void ATTRIBOBJ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0,NN=0,V5=0,V9=0,V10=0,V11=0;
int N;
int E,F;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; E=pile[v[22]+1]; F=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[N];
if((V1>sepcte)) goto l1;
V2=s[x[N]];
if((V2!=66)) goto l1;
pile[v[22]]=N; 
(*f[59])( );     /*LECT0(N)*/
l1:x[jvj+2]=0 ;z[jvj+2]=0;
x[E]=x[jvj+2] ;z[E]=z[jvj+2];
x[F]=x[jvj+2] ;z[F]=z[jvj+2];
V3=x[N];
NN=V3;
V5=r[NN];
if((V5<=4)) goto l3;
x[jvj+3]=V5 ;z[jvj+3]=(V5<=sepcte) ? V5 : 0;
x[jvj+1]=x[jvj+3] ;z[jvj+1]=z[jvj+3];
if((V9=w[x[jvj+1]][1])==incon) goto l2;
if(V9!=20&&V9!=23) goto l2;
V10=s[NN];
if((V10<=sepcte)) goto l2;
pile[v[22]]=E; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(E,jvj+1)*/
l3:V11=t[NN];
if((V11<=0)) goto l4;
pile[v[22]]=V11; pile[WZ1]=E; pile[WZ2]=F; 
(*f[1538])( );     /*ATTRIBOBJ1(V11,E,F)*/
l4:v[0]=jvj; v[22]-=3; return;
l2:pile[v[22]]=F; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(F,jvj+1)*/
goto l3;
}
