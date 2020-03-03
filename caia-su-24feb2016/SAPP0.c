#include "dx.h"
void SAPP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V5=0,V12=0,V2=0,V3=0,L=0,V10=0,N=0,V11=0;
int V,T,I,RL,SS;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

V=pile[v[22]]; T=pile[v[22]+1]; I=pile[v[22]+2]; RL=pile[v[22]+3]; SS=pile[v[22]+4]; v[22]+=6; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V12=I;
V11=T;
l1:pile[v[22]]=241; pile[WZ1]=RL; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,RL,V6)*/
V6=pile[WZ2]; 
V5=s[V11];
x[jvj+1]=V5 ;z[jvj+1]=(V5<=sepcte) ? V5 : 0;
pile[v[22]]=V; pile[WZ1]=V12; 
(*f[2077])( );     /*SPR0(V,V12,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=V2; 
(*f[64])( );     /*SRA2(V6,V2,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=V3; 
(*f[2077])( );     /*SPR0(jvj+1,V3,L)*/
L=pile[WZ2]; 
V10=t[V11];
if((V10==0)) goto l2;
if((V10<=0)) goto l3;
pile[v[22]]=SS; pile[WZ1]=L; 
(*f[64])( );     /*SRA2(SS,L,N)*/
N=pile[WZ2]; 
V11=V10;
V12=N;
goto l1;
l2:J=L;
v[0]=jvj; v[22]-=6; pile[v[22]+5]=J; v[102]=0;return;
l3:v[0]=jvj; v[22]-=6; v[102]=1;return;
}
