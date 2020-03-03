#include "dx.h"
void ENTRE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V4=0;
int A,B,P,AT;
int N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; P=pile[v[22]+2]; AT=pile[v[22]+3]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V4=P;
x[jvj+1]=x[A] ;z[jvj+1]=z[A];
l1:if((x[jvj+1]==x[B])) goto l2;
pile[v[22]]=AT; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(AT,jvj+1,jvj+2)*/
V2=V4+1;
x[jvj+1]=x[jvj+2] ;z[jvj+1]=z[jvj+2];
V4=V2;
goto l1;
l2:N=V4;
v[0]=jvj; v[22]-=5; pile[v[22]+4]=N; v[102]=0;return;
l3:v[0]=jvj; v[22]-=5; v[102]=1;return;
}
