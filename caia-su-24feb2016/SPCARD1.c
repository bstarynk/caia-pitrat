#include "dx.h"
void SPCARD1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V5=0,V13=0,V2=0,V3=0,L=0,V11=0,V10=0,N=0,V12=0;
int T,I,Y;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; I=pile[v[22]+1]; Y=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V13=I;
V12=T;
l1:pile[v[22]]=241; pile[WZ1]=26; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,26,V6)*/
V6=pile[WZ2]; 
V5=s[V12];
x[jvj+1]=V5 ;z[jvj+1]=(V5<=sepcte) ? V5 : 0;
pile[v[22]]=Y; pile[WZ1]=V13; 
(*f[2077])( );     /*SPR0(Y,V13,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=V2; 
(*f[64])( );     /*SRA2(V6,V2,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=V3; 
(*f[2077])( );     /*SPR0(jvj+1,V3,L)*/
L=pile[WZ2]; 
V11=t[V12];
if((V11==0)) goto l2;
if((V11<=0)) goto l3;
pile[v[22]]=241; pile[WZ1]=143; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,143,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=L; 
(*f[64])( );     /*SRA2(V10,L,N)*/
N=pile[WZ2]; 
V12=V11;
V13=N;
goto l1;
l2:J=L;
v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; v[102]=0;return;
l3:v[0]=jvj; v[22]-=4; v[102]=1;return;
}
