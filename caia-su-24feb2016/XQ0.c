#include "dx.h"
void XQ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,T=0,V3=0,V6=0,V4=0,V8=0,L=0,V7=0,LL=0,LT=0,V10=0,V11=0,V13=0,V12=0;
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
if((T<=0)) goto l2;
V3=s[T];
x[jvj+1]=V3 ;z[jvj+1]=(V3<=sepcte) ? V3 : 0;
pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+1,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+1,jvj+2)*/
V4=I+1;
V8=t[T];
c[v[1]][I]=C;
pile[v[22]]=135; pile[WZ1]=V4; 
(*f[98])( );     /*SRA3(135,V4,jvj+2,L)*/
L=pile[WZ3]; 
V7=L+1;
c[v[1]][L]=58;
pile[v[22]]=V7; pile[WZ1]=V6; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V7,V6,41,LL)*/
LL=pile[WZ3]; 
pile[v[22]]=405; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(405,jvj+1,V10)*/
V10=pile[WZ2]; 
V11=LL+1;
c[v[1]][LL]=40;
pile[v[22]]=V11; pile[WZ1]=V10; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V11,V10,41,V13)*/
V13=pile[WZ3]; 
V12=V13+1;
c[v[1]][V13]=41;
LT=V12;
l1:pile[v[22]]=V8; pile[WZ1]=C; pile[WZ2]=LT; 
(*f[928])( );     /*XQ1(V8,C,LT,J)*/
J=pile[WZ3]; 
l3:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l2:J=I;
goto l3;
l4:LT=LL;
goto l1;
}
