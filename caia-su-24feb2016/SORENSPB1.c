#include "dx.h"
void SORENSPB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V12=0,V17=0,V10=0,J=0,V6=0,V13=0,K=0,V9=0,V16=0;
int EE,I,N;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

EE=pile[v[22]]; I=pile[v[22]+1]; N=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V17=I;
V16=EE;
l1:V2=s[V16];
x[jvj+4]=V2 ;z[jvj+4]=(V2<=sepcte) ? V2 : 0;
x[jvj+1]=x[jvj+4] ;z[jvj+1]=z[jvj+4];
x[jvj+3]=incon;
pile[v[22]]=109; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,jvj+1,jvj+2)*/
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
l3:V12=x[jvj+3];
pile[v[22]]=V17; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V17,40,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=V12; pile[WZ2]=20; 
(*f[179])( );     /*SDX1(V10,V12,20,J)*/
J=pile[WZ3]; 
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+1,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=J; pile[WZ1]=V6; 
(*f[37])( );     /*SRA0(J,V6,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V13,41,K)*/
K=pile[WZ2]; 
l5:V9=t[V16];
if((V9==0)) goto l6;
if((V9<=0)) goto l7;
V16=V9;
V17=K;
goto l1;
l2:pile[v[22]]=498; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(498,jvj+1,jvj+3)*/
goto l3;
l4:pile[v[22]]=J; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(J,41,K)*/
K=pile[WZ2]; 
goto l5;
l6:pile[v[22]]=K; pile[WZ1]=N; 
(*f[1175])( );     /*SLG4(K,N)*/
l7:v[0]=jvj; v[22]-=3; return;
}
