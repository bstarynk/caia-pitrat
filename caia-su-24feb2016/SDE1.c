#include "dx.h"
void SDE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V4=0,V5=0,K=0,V7=0,V9=0,V10=0,V11=0,V12=0,V13=0;
int VIRG,X,I,PX,N;
int J;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

VIRG=pile[v[22]]; X=pile[v[22]+1]; I=pile[v[22]+2]; PX=pile[v[22]+3]; N=pile[v[22]+4]; v[22]+=6; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V13=N;
V12=I;
V11=X;
V10=VIRG;
l1:c[v[1]][V12]=V10;
V3=r[V11];
V2=(-V3);
x[jvj+1]=V2 ;z[jvj+1]=(V2<=sepcte) ? V2 : 0;
V4=s[V11];
V5=V12+1;
pile[v[22]]=V5; pile[WZ1]=PX; pile[WZ2]=V4; pile[WZ3]=jvj+1; 
(*f[238])( );     /*SDX2(V5,PX,V4,jvj+1,K)*/
K=pile[WZ4]; 
if((V13>=2000)) goto l2;
V7=t[V11];
if((V7<=0)) goto l2;
V9=V13+1;
V10=44;
V11=V7;
V12=K;
V13=V9;
goto l1;
l2:J=K;
v[0]=jvj; v[22]-=6; pile[v[22]+5]=J; return;
}
