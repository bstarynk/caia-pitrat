#include "dx.h"
void XM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,HH=0,IL=0,CC=0,V5=0,V7=0,V12=0,N=0,V13=0,K=0,V4=0,V24=0;
int T,I,C;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; I=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V25=I;
V24=T;
l1:if((V24<=0)) goto l2;
pile[v[22]]=1727; pile[WZ1]=C; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1727,C,jvj+1)*/
if((x[jvj+1]!=366)) goto l2;
pile[v[22]]=V25; 
(*f[343])( );if(v[102]) goto l2;     /*SLGG0(V25,HH)*/
HH=pile[WZ1]; 
pile[v[22]]=HH; 
(*f[40])( );     /*SLG0(HH)*/
IL=0;
l3:V5=incon;
pile[v[22]]=331; pile[WZ1]=C; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(331,C,CC)*/
CC=pile[WZ2]; 
if((CC==32)) goto l4;
pile[v[22]]=IL; pile[WZ1]=CC; 
(*f[38])( );     /*SPC0(IL,CC,V5)*/
V5=pile[WZ2]; 
l5:V7=incon;
pile[v[22]]=287; pile[WZ1]=C; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(287,C,jvj+2)*/
if((x[jvj+2]!=67)) goto l6;
V7=V5;
l7:V12=s[V24];
x[jvj+3]=V12 ;z[jvj+3]=(V12<=sepcte) ? V12 : 0;
pile[v[22]]=V7; pile[WZ1]=jvj+3; 
(*f[344])( );if(v[102]) goto l12;     /*XX1(V7,jvj+3,N)*/
N=pile[WZ2]; 
V13=t[V24];
if((V13==0)) goto l9;
if((V13<=0)) goto l12;
pile[v[22]]=1655; pile[WZ1]=C; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1655,C,jvj+4)*/
if((x[jvj+4]==67)) goto l9;
l8:pile[v[22]]=1655; pile[WZ1]=C; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1655,C,jvj+5)*/
pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1655,C,jvj+6)*/
if((x[jvj+6]==67)) goto l12;
pile[v[22]]=135; pile[WZ1]=N; 
(*f[42])( );     /*SRA1(135,N,jvj+6,K)*/
K=pile[WZ3]; 
l10:V4=t[V24];
if((V4==0)) goto l11;
if((V4<=0)) goto l12;
V24=V4;
V25=K;
goto l1;
l2:IL=V25;
if((V24>0)) goto l3;
l12:J=V25;
l13:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l4:V5=IL;
goto l5;
l6:pile[v[22]]=135; pile[WZ1]=V5; pile[WZ2]=C; 
(*f[42])( );     /*SRA1(135,V5,C,V7)*/
V7=pile[WZ3]; 
goto l7;
l9:K=N;
goto l10;
l11:J=K;
goto l13;
}
