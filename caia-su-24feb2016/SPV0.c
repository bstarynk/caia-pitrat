#include "dx.h"
void SPV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,K=0;
int I,X;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(216,158,jvj+1)*/
pile[v[22]]=128; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(128,jvj+1,jvj+2)*/
x[jvj+4]=x[X] ;z[jvj+4]=z[X];
l1:if((x[jvj+4]>0)) goto l2;
J=I;
l4:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l2:x[jvj+3]=s[x[jvj+4]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+4];
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l3;
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(jvj+3,I,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V2,61,K)*/
K=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=X; pile[WZ2]=K; 
(*f[2221])( );     /*SPV1(jvj+1,X,K,J)*/
J=pile[WZ3]; 
goto l4;
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
}
