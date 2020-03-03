#include "dx.h"
void SDA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,V3=0,V12=0,V4=0,V6=0,V5=0,K=0,V8=0,S=0,V10=0,V11=0;
int L,VIRG,X,E,PX;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

L=pile[v[22]]; VIRG=pile[v[22]+1]; X=pile[v[22]+2]; E=pile[v[22]+3]; PX=pile[v[22]+4]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
J=0;
if((X<=0)) goto l2;
V3=r[X];
x[jvj+1]=V3 ;z[jvj+1]=(V3<=sepcte) ? V3 : 0;
for(a=x[E];a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l2;
pile[v[22]]=127; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(127,jvj+1,jvj+2)*/
if((x[jvj+2]==68)) goto l2;
l1:x[jvj+3]=X ;z[jvj+3]=(X<=sepcte) ? X : 0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+1; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+3,jvj+1,V12,jvj+4)*/
V12=pile[WZ2]; 
V4=L+1;
V6=V12;
V5=V6;
pile[v[22]]=135; pile[WZ1]=V4; pile[WZ2]=jvj+1; 
(*f[98])( );     /*SRA3(135,V4,jvj+1,K)*/
K=pile[WZ3]; 
V8=K+1;
c[v[1]][K]=58;
c[v[1]][L]=VIRG;
pile[v[22]]=jvj+1; pile[WZ1]=V5; pile[WZ2]=V8; pile[WZ3]=PX; 
(*f[645])( );     /*SDX4(jvj+1,V5,V8,PX,S)*/
S=pile[WZ4]; 
l3:V10=t[X];
V11=J+1;
pile[v[22]]=V10; pile[WZ1]=44; pile[WZ2]=S; pile[WZ3]=E; pile[WZ4]=PX; pile[WZ5]=V11; 
(*f[646])( );     /*SDA1(V10,44,S,E,PX,V11,N)*/
N=pile[v[22]+6]; 
l4:v[0]=jvj; v[22]-=6; pile[v[22]+5]=N; return;
l2:S=L;
if((X>0)) goto l3;
N=L;
goto l4;
}
