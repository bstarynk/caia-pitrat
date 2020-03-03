#include "dx.h"
void XU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,C=0,JJ=0,K=0,V4=0,L=0,V6=0,M=0,V15=0,V17=0;
int N,TY,I;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; TY=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[TY]==89)) goto l1;
if((x[TY]!=41)) goto l10;
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,J)*/
J=pile[WZ2]; 
l2:pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,N,jvj+1)*/
pile[v[22]]=162; pile[WZ1]=jvj+1; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(162,jvj+1,C)*/
C=pile[WZ2]; 
pile[v[22]]=J; pile[WZ1]=C; 
(*f[38])( );     /*SPC0(J,C,JJ)*/
JJ=pile[WZ2]; 
l4:V4=incon;
if((x[TY]==41)) goto l5;
V4=JJ;
l6:pile[v[22]]=120; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,N,jvj+2)*/
L=V4;
pile[v[22]]=jvj+2; pile[WZ1]=L; pile[WZ2]=TY; 
(*f[1119])( );     /*XU1(jvj+2,L,TY)*/
l10:v[0]=jvj; v[22]-=3; return;
l1:J=I;
goto l2;
l3:pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+1,K)*/
K=pile[WZ2]; 
pile[v[22]]=J; pile[WZ1]=K; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(J,K,41,JJ)*/
JJ=pile[WZ3]; 
goto l4;
l5:pile[v[22]]=JJ; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(JJ,44,V4)*/
V4=pile[WZ2]; 
goto l6;
l7:V6=incon;
if((x[TY]==41)) goto l8;
V6=JJ;
l9:M=V6;
V15=0;
V17=M;
if((V17<0)) goto l10;
pile[v[22]]=V17; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V17,3)*/
goto l10;
l8:pile[v[22]]=JJ; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(JJ,41,V6)*/
V6=pile[WZ2]; 
goto l9;
}
