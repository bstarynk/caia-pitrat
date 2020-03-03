#include "dx.h"
void TRVLIM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,M=0,V5=0;
int N,H,P;
int I;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; H=pile[v[22]+1]; P=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[H] ;z[jvj+1]=z[H];
V5=P;
l4:M=incon;
pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+1,V2)*/
V2=pile[WZ2]; 
V1=V5+V2;
M=V1;
if((M<N)) goto l1;
pile[v[22]]=244; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(244,jvj+1,I)*/
I=pile[WZ2]; 
v[0]=jvj; v[22]-=4; pile[v[22]+3]=I; v[102]=0;return;
l1:if(M!=incon) goto l2;
l3:v[0]=jvj; v[22]-=4; v[102]=1;return;
l2:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+1,jvj+2)*/
V5=M;
x[jvj+1]=x[jvj+2] ;z[jvj+1]=z[jvj+2];
goto l4;
}
