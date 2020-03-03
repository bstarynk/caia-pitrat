#include "dx.h"
void SPCARD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,T=0,V6=0,V5=0,V2=0,V3=0,L=0,V8=0,V10=0,N=0,V11=0;
int X,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,X,jvj+1)*/
pile[v[22]]=107; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(107,X,jvj+2)*/
V13=x[jvj+2];
T=V13;
pile[v[22]]=241; pile[WZ1]=26; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(241,26,V6)*/
V6=pile[WZ2]; 
V5=s[T];
x[jvj+3]=V5 ;z[jvj+3]=(V5<=sepcte) ? V5 : 0;
pile[v[22]]=jvj+1; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(jvj+1,I,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=V2; 
(*f[64])( );     /*SRA2(V6,V2,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V3; 
(*f[2077])( );     /*SPR0(jvj+3,V3,L)*/
L=pile[WZ2]; 
V8=t[T];
if((V8<=0)) goto l1;
pile[v[22]]=241; pile[WZ1]=143; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(241,143,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=L; 
(*f[64])( );     /*SRA2(V10,L,N)*/
N=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=N; pile[WZ2]=jvj+1; 
(*f[2219])( );if(v[102]) goto l1;     /*SPCARD1(V8,N,jvj+1,J)*/
J=pile[WZ3]; 
l3:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:V11=t[T];
if((V11!=0)) goto l2;
J=L;
goto l3;
l2:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
