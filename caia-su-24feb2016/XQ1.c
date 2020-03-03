#include "dx.h"
void XQ1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0,V3=0,V7=0,L=0,V6=0,LL=0,V8=0,V9=0,V11=0,V12=0,V14=0,V13=0,LT=0;
int T,C,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; C=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V9=I;
V8=T;
l1:if((V8<=0)) goto l2;
V2=s[V8];
x[jvj+1]=V2 ;z[jvj+1]=(V2<=sepcte) ? V2 : 0;
pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+1,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+1,jvj+2)*/
V3=V9+1;
V7=t[V8];
c[v[1]][V9]=C;
pile[v[22]]=135; pile[WZ1]=V3; 
(*f[98])( );     /*SRA3(135,V3,jvj+2,L)*/
L=pile[WZ3]; 
V6=L+1;
c[v[1]][L]=58;
pile[v[22]]=V6; pile[WZ1]=V5; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V6,V5,41,LL)*/
LL=pile[WZ3]; 
pile[v[22]]=405; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(405,jvj+1,V11)*/
V11=pile[WZ2]; 
V12=LL+1;
c[v[1]][LL]=40;
pile[v[22]]=V12; pile[WZ1]=V11; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V12,V11,41,V14)*/
V14=pile[WZ3]; 
V13=V14+1;
c[v[1]][V14]=41;
LT=V13;
l3:V8=V7;
V9=LT;
goto l1;
l2:J=V9;
v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l4:LT=LL;
goto l3;
}
