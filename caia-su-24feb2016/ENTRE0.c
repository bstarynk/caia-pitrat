#include "dx.h"
void ENTRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,P=0,V2=0;
int A,B;
int N,AT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; AT=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,A,V3)*/
V3=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,B,V4)*/
V4=pile[WZ2]; 
if((V3<=V4)) goto l1;
x[AT]=242 ;z[AT]=242;
l2:P=0;
if((x[A]==x[B])) goto l3;
pile[v[22]]=AT; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(AT,A,jvj+1)*/
V2=P+1;
pile[v[22]]=jvj+1; pile[WZ1]=B; pile[WZ2]=V2; pile[WZ3]=AT; 
(*f[1613])( );if(v[102]) goto l4;     /*ENTRE1(jvj+1,B,V2,AT,N)*/
N=pile[WZ4]; 
l5:v[0]=jvj; v[22]-=4; pile[v[22]+2]=N; v[102]=0;return;
l1:x[AT]=196 ;z[AT]=196;
goto l2;
l3:N=P;
goto l5;
l4:N=x[AT]=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
}
