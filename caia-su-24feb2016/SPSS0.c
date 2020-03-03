#include "dx.h"
void SPSS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,K=0,V11=0,V8=0,V9=0,V10=0,V1=0,V3=0;
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
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+2,V)*/
V=pile[WZ2]; 
if((V!=(-8106))) goto l1;
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,A,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=(-8107); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-8107),I,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V8,91,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=V9; 
(*f[99])( );     /*SPM0(V11,V9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V10,93,J)*/
J=pile[WZ2]; 
l4:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:pile[v[22]]=V; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V,I,K)*/
K=pile[WZ2]; 
pile[v[22]]=162; pile[WZ1]=A; 
(*f[219])( );if(v[102]) goto l2;     /*FNDC2(162,A,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V1; 
(*f[38])( );     /*SPC0(K,V1,J)*/
J=pile[WZ2]; 
goto l4;
l2:pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,A,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=K; 
(*f[99])( );     /*SPM0(V3,K,J)*/
J=pile[WZ2]; 
goto l4;
l3:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
