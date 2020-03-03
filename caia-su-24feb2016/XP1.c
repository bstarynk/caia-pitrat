#include "dx.h"
void XP1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V2=0,V1=0,V4=0,V16=0,K=0,V10=0,V9=0,V15=0;
int T,C,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; C=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V16=I;
V15=T;
l2:if((V15<=0)) goto l6;
V4=s[V15];
x[jvj+1]=V4 ;z[jvj+1]=(V4<=sepcte) ? V4 : 0;
pile[v[22]]=109; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+1,jvj+2)*/
pile[v[22]]=135; pile[WZ1]=V16; 
(*f[42])( );     /*SRA1(135,V16,jvj+2,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,jvj+1,L)*/
L=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=L; 
(*f[37])( );     /*SRA0(V2,L,V1)*/
V1=pile[WZ2]; 
l3:K=V1;
V10=t[V15];
if((V10==0)) goto l4;
if((V10<=0)) goto l6;
if((C!=10)) goto l5;
pile[v[22]]=K; 
(*f[40])( );     /*SLG0(K)*/
V15=V10;
V16=0;
goto l2;
l1:V1=V2;
goto l3;
l4:J=K;
l7:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l5:V9=K+1;
c[v[1]][K]=C;
V15=V10;
V16=V9;
goto l2;
l6:J=V16;
goto l7;
}
