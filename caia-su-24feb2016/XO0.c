#include "dx.h"
void XO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,K=0,V6=0;
int C,X,I;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

C=pile[v[22]]; X=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[X] ;z[jvj+1]=z[X];
V6=I;
l1:if((C!=10)) goto l2;
pile[v[22]]=V6; 
(*f[40])( );     /*SLG0(V6)*/
pile[v[22]]=0; pile[WZ1]=jvj+1; 
(*f[223])( );if(v[102]) goto l5;     /*XX0(0,jvj+1,K)*/
K=pile[WZ2]; 
if((K<=0)) goto l4;
pile[v[22]]=120; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+1,jvj+2)*/
l4:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+1,jvj+3)*/
V6=K;
x[jvj+1]=x[jvj+3] ;z[jvj+1]=z[jvj+3];
goto l1;
l2:V1=V6+1;
c[v[1]][V6]=C;
pile[v[22]]=V1; pile[WZ1]=jvj+1; 
(*f[223])( );if(v[102]) goto l5;     /*XX0(V1,jvj+1,K)*/
K=pile[WZ2]; 
goto l4;
l3:J=0;
pile[v[22]]=K; 
(*f[40])( );     /*SLG0(K)*/
l6:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l5:J=V6;
goto l6;
}
