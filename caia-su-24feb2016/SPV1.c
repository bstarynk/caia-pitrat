#include "dx.h"
void SPV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V2=0,K=0;
int Y,X,I;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

Y=pile[v[22]]; X=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V5=I;
l1:pile[v[22]]=128; pile[WZ1]=Y; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(128,Y,jvj+1)*/
x[jvj+3]=x[X] ;z[jvj+3]=z[X];
l2:if((x[jvj+3]>0)) goto l3;
J=V5;
v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l3:x[jvj+2]=s[x[jvj+3]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+3];
for(a=x[jvj+1];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l4;
pile[v[22]]=Y; pile[WZ1]=128; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(Y,128,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=V5; 
(*f[2077])( );     /*SPR0(jvj+2,V5,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V2,61,K)*/
K=pile[WZ2]; 
V5=K;
goto l1;
l4:x[jvj+3]=t[x[jvj+3]];
goto l2;
}
