#include "dx.h"
void XU1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int C=0,V17=0,JJ=0,K=0,V4=0,L=0,V6=0,M=0,V14=0,V18=0;
int N,J,TY;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; J=pile[v[22]+1]; TY=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V17=J;
x[jvj+1]=x[N] ;z[jvj+1]=z[N];
l1:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+1,jvj+2)*/
pile[v[22]]=162; pile[WZ1]=jvj+2; 
(*f[219])( );if(v[102]) goto l2;     /*FNDC2(162,jvj+2,C)*/
C=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=C; 
(*f[38])( );     /*SPC0(V17,C,JJ)*/
JJ=pile[WZ2]; 
l3:V4=incon;
if((x[TY]==41)) goto l4;
V4=JJ;
l5:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+1,jvj+3)*/
L=V4;
x[jvj+1]=x[jvj+3] ;z[jvj+1]=z[jvj+3];
V17=L;
goto l1;
l2:pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+2,K)*/
K=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=K; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V17,K,41,JJ)*/
JJ=pile[WZ3]; 
goto l3;
l4:pile[v[22]]=JJ; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(JJ,44,V4)*/
V4=pile[WZ2]; 
goto l5;
l6:V6=incon;
if((x[TY]==41)) goto l7;
V6=JJ;
l8:M=V6;
V14=0;
V18=M;
if((V18<0)) goto l9;
pile[v[22]]=V18; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V18,3)*/
l9:v[0]=jvj; v[22]-=3; return;
l7:pile[v[22]]=JJ; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(JJ,41,V6)*/
V6=pile[WZ2]; 
goto l8;
}
