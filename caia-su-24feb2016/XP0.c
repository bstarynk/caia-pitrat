#include "dx.h"
void XP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,T=0,L=0,V3=0,V2=0,V5=0,K=0,V11=0,V10=0;
int I,X,C;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[X];
T=V1;
if((T<=0)) goto l5;
V5=s[T];
x[jvj+1]=V5 ;z[jvj+1]=(V5<=sepcte) ? V5 : 0;
pile[v[22]]=109; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+1,jvj+2)*/
pile[v[22]]=135; pile[WZ1]=I; 
(*f[42])( );     /*SRA1(135,I,jvj+2,V3)*/
V3=pile[WZ3]; 
V2=incon;
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,jvj+1,L)*/
L=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=L; 
(*f[37])( );     /*SRA0(V3,L,V2)*/
V2=pile[WZ2]; 
l2:K=V2;
V11=t[T];
if((V11==0)) goto l3;
if((V11<=0)) goto l5;
if((C!=10)) goto l4;
pile[v[22]]=K; 
(*f[40])( );     /*SLG0(K)*/
pile[v[22]]=V11; pile[WZ1]=C; pile[WZ2]=0; 
(*f[795])( );     /*XP1(V11,C,0,J)*/
J=pile[WZ3]; 
l6:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l1:V2=V3;
goto l2;
l3:J=K;
goto l6;
l4:V10=K+1;
c[v[1]][K]=C;
pile[v[22]]=V11; pile[WZ1]=C; pile[WZ2]=V10; 
(*f[795])( );     /*XP1(V11,C,V10,J)*/
J=pile[WZ3]; 
goto l6;
l5:J=I;
goto l6;
}
