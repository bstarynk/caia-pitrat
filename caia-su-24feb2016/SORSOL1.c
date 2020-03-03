#include "dx.h"
void SORSOL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0,V12=0,V6=0,V7=0,V8=0,I=0,V11=0,V10=0,V13=0;
int T,J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; J=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V12=J;
V11=T;
l1:if((V11==0)) goto l3;
if((V11<=0)) goto l2;
V2=s[V11];
x[jvj+1]=V2 ;z[jvj+1]=(V2<=sepcte) ? V2 : 0;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=436; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+1,jvj+3)*/
V5=t[V11];
pile[v[22]]=V12; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V12,44,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=jvj+3; 
(*f[344])( );if(v[102]) goto l2;     /*XX1(V6,jvj+3,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V7,61,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=jvj+2; 
(*f[344])( );if(v[102]) goto l2;     /*XX1(V8,jvj+2,I)*/
I=pile[WZ2]; 
V11=V5;
V12=I;
goto l1;
l3:V10=0;
V13=V12;
if((V13<0)) goto l2;
pile[v[22]]=V13; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V13,3)*/
l2:v[0]=jvj; v[22]-=2; return;
}
