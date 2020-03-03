#include "dx.h"
void XG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V1=0,V4=0;
int I,C,X;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; C=pile[v[22]+1]; X=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,X,jvj+2)*/
if((x[jvj+2]!=120)) goto l3;
pile[v[22]]=102; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,X,jvj+3)*/
pile[v[22]]=I; pile[WZ1]=C; 
(*f[38])( );     /*SPC0(I,C,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=jvj+3; 
(*f[223])( );if(v[102]) goto l3;     /*XX0(V4,jvj+3,K)*/
K=pile[WZ2]; 
V1=incon;
pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,X,jvj+1)*/
pile[v[22]]=K; pile[WZ1]=44; 
(*f[1368])( );     /*XG0(K,44,jvj+1,V1)*/
V1=pile[WZ3]; 
l2:J=V1;
l4:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l1:V1=K;
goto l2;
l3:J=I;
goto l4;
}
