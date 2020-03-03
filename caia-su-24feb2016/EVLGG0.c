#include "dx.h"
void EVLGG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,M=0,V8=0,N=0,V2=0,V1=0,I=0,V3=0,V5=0,V4=0,V7=0,V12=0,V11=0,V10=0,V13=0,V15=0,V14=0;
int Q,NV;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

Q=pile[v[22]]; NV=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
M=v[22];
V8=M+20;
N=V8;
v[22]=N;
V2=knr[Q];
V1=V2-1;
I=0;
l1:if((I<=V1)) goto l2;
if((Q<0)) goto l3;
if((Q>=10000)) goto l3;
V6=pres[Q];
if((V6!=0)) goto l3;
l4:(*f[Q])( );if(v[102]&&sansechec[Q]) x[jvj+1]=z[jvj+1]=135; else x[jvj+1]=z[jvj+1]=134;
x[RES]=x[jvj+1] ;z[RES]=z[jvj+1];
V12=knr[Q];
V11=V12-1;
V10=0;
l5:if((V10<=V11)) goto l6;
v[22]=M;
v[0]=jvj; v[22]-=3; return;
l2:V3=N+I;
V5=I+NV;
V4=prov[V5];
pile[V3]=V4;
I++;
goto l1;
l3:pile[v[22]]=117; pile[WZ1]=1438; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,1438,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; 
(*f[611])( );     /*ERRINCIDENT0(V7)*/
goto l4;
l6:V13=V10+NV;
V15=N+V10;
V14=pile[V15];
prov[V13]=V14;
V10++;
goto l5;
}
