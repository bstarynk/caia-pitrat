#include "dx.h"
void INC1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V4=0;
int X;
int K;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=vo[20];z[jvj+1]=vz[20];
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+1,L)*/
L=pile[WZ2]; 
K=L;
l2:x[jvj+2]=vo[20];z[jvj+2]=vz[20];
V4=K+1;
pile[v[22]]=jvj+2; pile[WZ1]=130; pile[WZ2]=V4; 
(*f[43])( );     /*CHGC2(jvj+2,130,V4)*/
pile[v[22]]=X; pile[WZ1]=220; pile[WZ2]=K; 
(*f[43])( );     /*CHGC2(X,220,K)*/
v[0]=jvj; v[22]-=2; pile[v[22]+1]=K; return;
l1:K=0;
goto l2;
}
