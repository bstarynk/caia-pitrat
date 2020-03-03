#include "dx.h"
void SPSK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,KK=0,V4=0,K=0,V5=0,L=0,V7=0,V8=0;
int I,A;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=498; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(498,A,jvj+1)*/
pile[v[22]]=436; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,jvj+1,jvj+2)*/
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+2,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=V1; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V1,I,KK)*/
KK=pile[WZ2]; 
V4=KK+1;
c[v[1]][KK]=123;
K=V4;
pile[v[22]]=162; pile[WZ1]=A; 
(*f[219])( );if(v[102]) goto l1;     /*FNDC2(162,A,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V5; 
(*f[38])( );     /*SPC0(K,V5,L)*/
L=pile[WZ2]; 
l2:V8=L+1;
c[v[1]][L]=125;
J=V8;
v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,A,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=K; 
(*f[99])( );     /*SPM0(V7,K,L)*/
L=pile[WZ2]; 
goto l2;
l3:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
