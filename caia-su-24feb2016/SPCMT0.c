#include "dx.h"
void SPCMT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V2=0,V1=0,M=0,P=0,V9=0,V10=0,L=0,V3=0,V4=0,V5=0;
int X,I;
int J;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
K=0;
V2=X;
V1=cmt[V2][K];
M=V1;
x[jvj+1]=vo[20];z[jvj+1]=vz[20];
pile[v[22]]=1394; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1394,jvj+1,jvj+2)*/
P=x[jvj+2];
if((P!=68)) goto l1;
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=X; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V9,X,41,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=V10; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V10,41,L)*/
L=pile[WZ2]; 
l2:if((M==0)) goto l3;
V3=M;
V4=L+1;
V5=K+1;
c[v[1]][L]=V3;
pile[v[22]]=X; pile[WZ1]=V4; pile[WZ2]=V5; pile[WZ3]=67; 
(*f[647])( );     /*SPCMT2(X,V4,V5,67,J)*/
J=pile[WZ4]; 
l4:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l1:L=I;
goto l2;
l3:J=L;
goto l4;
}
