#include "dx.h"
void SORENSNOMPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,E=0,V11=0,I=0,V=0,V3=0,V12=0,V13=0,V2=0,V5=0,V15=0,L=0,V8=0;
int II,X;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

II=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[X];
E=V1;
if((II>0)) goto l1;
I=0;
l3:if((E<=0)) goto l6;
V5=s[E];
x[jvj+1]=V5 ;z[jvj+1]=(V5<=sepcte) ? V5 : 0;
pile[v[22]]=109; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+1,jvj+2)*/
V15=x[jvj+2];
pile[v[22]]=I; pile[WZ1]=V15; pile[WZ2]=20; 
(*f[179])( );     /*SDX1(I,V15,20,V3)*/
V3=pile[WZ3]; 
V2=incon;
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,jvj+1,V)*/
V=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V3,40,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=V12; 
(*f[64])( );     /*SRA2(V,V12,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V13,41,V2)*/
V2=pile[WZ2]; 
l4:pile[v[22]]=V2; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V2,59,L)*/
L=pile[WZ2]; 
V8=t[E];
if((V8<=0)) goto l5;
x[jvj+3]=V8 ;z[jvj+3]=0;
pile[v[22]]=L; pile[WZ1]=jvj+3; 
(*f[789])( );if(v[102]) goto l5;     /*SORENSNOMPB0(L,jvj+3,J)*/
J=pile[WZ2]; 
l7:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:V11=II+1;
I=V11;
c[v[1]][II]=32;
goto l3;
l2:V2=V3;
goto l4;
l5:J=L;
goto l7;
l6:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
