#include "dx.h"
void SDE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V3=0,V2=0,V4=0,V5=0,K=0,V7=0,V9=0;
int VIRG,X,I,PX;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

VIRG=pile[v[22]]; X=pile[v[22]+1]; I=pile[v[22]+2]; PX=pile[v[22]+3]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
N=0;
c[v[1]][I]=VIRG;
V3=r[X];
V2=(-V3);
x[jvj+1]=V2 ;z[jvj+1]=(V2<=sepcte) ? V2 : 0;
V4=s[X];
V5=I+1;
pile[v[22]]=V5; pile[WZ1]=PX; pile[WZ2]=V4; pile[WZ3]=jvj+1; 
(*f[238])( );     /*SDX2(V5,PX,V4,jvj+1,K)*/
K=pile[WZ4]; 
V7=t[X];
if((V7>0)) goto l1;
J=K;
l2:v[0]=jvj; v[22]-=5; pile[v[22]+4]=J; return;
l1:V9=N+1;
pile[v[22]]=44; pile[WZ1]=V7; pile[WZ2]=K; pile[WZ3]=PX; pile[WZ4]=V9; 
(*f[634])( );     /*SDE1(44,V7,K,PX,V9,J)*/
J=pile[WZ5]; 
goto l2;
}
