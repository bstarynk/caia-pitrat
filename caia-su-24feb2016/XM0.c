#include "dx.h"
void XM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,T=0,HH=0,IL=0,CC=0,V6=0,V8=0,V13=0,N=0,V14=0,K=0,V5=0;
int I,X,C;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[X];
T=V1;
if((T<=0)) goto l1;
pile[v[22]]=1727; pile[WZ1]=C; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1727,C,jvj+1)*/
if((x[jvj+1]!=366)) goto l1;
pile[v[22]]=I; 
(*f[343])( );if(v[102]) goto l1;     /*SLGG0(I,HH)*/
HH=pile[WZ1]; 
pile[v[22]]=HH; 
(*f[40])( );     /*SLG0(HH)*/
IL=0;
l2:V6=incon;
pile[v[22]]=331; pile[WZ1]=C; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(331,C,CC)*/
CC=pile[WZ2]; 
if((CC==32)) goto l3;
pile[v[22]]=IL; pile[WZ1]=CC; 
(*f[38])( );     /*SPC0(IL,CC,V6)*/
V6=pile[WZ2]; 
l4:V8=incon;
pile[v[22]]=287; pile[WZ1]=C; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(287,C,jvj+2)*/
if((x[jvj+2]!=67)) goto l5;
V8=V6;
l6:V13=s[T];
x[jvj+3]=V13 ;z[jvj+3]=(V13<=sepcte) ? V13 : 0;
pile[v[22]]=V8; pile[WZ1]=jvj+3; 
(*f[344])( );if(v[102]) goto l11;     /*XX1(V8,jvj+3,N)*/
N=pile[WZ2]; 
V14=t[T];
if((V14==0)) goto l8;
if((V14<=0)) goto l11;
pile[v[22]]=1655; pile[WZ1]=C; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1655,C,jvj+4)*/
if((x[jvj+4]==67)) goto l8;
l7:pile[v[22]]=1655; pile[WZ1]=C; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1655,C,jvj+5)*/
pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1655,C,jvj+6)*/
if((x[jvj+6]==67)) goto l11;
pile[v[22]]=135; pile[WZ1]=N; 
(*f[42])( );     /*SRA1(135,N,jvj+6,K)*/
K=pile[WZ3]; 
l9:V5=t[T];
if((V5==0)) goto l10;
if((V5<=0)) goto l11;
pile[v[22]]=V5; pile[WZ1]=K; pile[WZ2]=C; 
(*f[1053])( );     /*XM1(V5,K,C,J)*/
J=pile[WZ3]; 
l12:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l1:IL=I;
if((T>0)) goto l2;
l11:J=I;
goto l12;
l3:V6=IL;
goto l4;
l5:pile[v[22]]=135; pile[WZ1]=V6; pile[WZ2]=C; 
(*f[42])( );     /*SRA1(135,V6,C,V8)*/
V8=pile[WZ3]; 
goto l6;
l8:K=N;
goto l9;
l10:J=K;
goto l12;
}
