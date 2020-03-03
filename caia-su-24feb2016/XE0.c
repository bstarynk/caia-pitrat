#include "dx.h"
void XE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P=0,V15=0,V6=0,L=0,V8=0,V11=0,K=0;
int X,N,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; N=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[N]!=1325)) goto l1;
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,P)*/
P=pile[WZ2]; 
l2:pile[v[22]]=120; pile[WZ1]=N; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,N,jvj+1)*/
pile[v[22]]=X; pile[WZ1]=jvj+1; pile[WZ3]=jvj+2; 
(*f[45])( );if(v[102]) goto l3;     /*FNDZ0(X,jvj+1,V15,jvj+2)*/
V15=pile[WZ2]; 
pile[WZ3]=jvj+3; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(X,jvj+1,V8,jvj+3)*/
V8=pile[WZ2]; 
x[jvj+4]=V8 ;z[jvj+4]=(x[jvj+3]==20&&V8<=sepcte) ? V8 : (x[jvj+3]==41) ? (-1000) : 0;
pile[v[22]]=P; pile[WZ1]=jvj+4; 
(*f[223])( );if(v[102]) goto l6;     /*XX0(P,jvj+4,L)*/
L=pile[WZ2]; 
l4:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+1,jvj+5)*/
pile[v[22]]=X; pile[WZ1]=jvj+5; pile[WZ3]=jvj+6; 
(*f[45])( );if(v[102]) goto l5;     /*FNDZ0(X,jvj+5,V11,jvj+6)*/
V11=pile[WZ2]; 
pile[v[22]]=L; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(L,44,K)*/
K=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=jvj+1; pile[WZ2]=K; 
(*f[1050])( );if(v[102]) goto l5;     /*XE0(X,jvj+1,K,J)*/
J=pile[WZ3]; 
l7:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; v[102]=0;return;
l1:P=I;
goto l2;
l3:V6=I+1;
L=V6;
goto l4;
l5:pile[v[22]]=L; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(L,41,J)*/
J=pile[WZ2]; 
goto l7;
l6:v[0]=jvj; v[22]-=4; v[102]=1;return;
}
