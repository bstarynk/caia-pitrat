#include "dx.h"
void SD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,X=0,V2=0,V4=0,I=0,V3=0,L=0,J=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[N];
X=V1;
if((X>sepcte)) goto l1;
if((X<=0)) goto l1;
V2=s[x[N]];
if((V2!=66)) goto l1;
pile[v[22]]=N; 
(*f[59])( );     /*LECT0(N)*/
l1:V4=x[N];
pile[v[22]]=373; pile[WZ1]=N; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(373,N,jvj+1)*/
pile[v[22]]=X; pile[WZ1]=0; 
(*f[221])( );     /*SRN0(X,0,I)*/
I=pile[WZ2]; 
V3=I+1;
c[v[1]][I]=44;
pile[v[22]]=N; pile[WZ1]=V3; 
(*f[220])( );     /*SRA4(N,V3,L)*/
L=pile[WZ2]; 
pile[v[22]]=L; pile[WZ1]=44; pile[WZ2]=V4; pile[WZ3]=jvj+1; pile[WZ4]=68; 
(*f[224])( );     /*SDA0(L,44,V4,jvj+1,68,J)*/
J=pile[WZ5]; 
pile[v[22]]=J; 
(*f[40])( );     /*SLG0(J)*/
v[0]=jvj; v[22]-=1; return;
}
