#include "dx.h"
void CMLPOS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,V1=0;
int X,A,E;
int RT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; A=pile[v[22]+1]; E=pile[v[22]+2]; RT=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
l2:x[jvj+4]=x[A] ;z[jvj+4]=z[A];
l1:if((x[jvj+4]<=0)) goto l5;
x[jvj+3]=s[x[jvj+4]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+4];
for(a=x[E];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l3;
x[jvj+1]=x[jvj+3] ;z[jvj+1]=z[jvj+3];
pile[v[22]]=117; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,X,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+1,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=V5; pile[WZ2]=jvj+2; 
(*f[2022])( );     /*POSOM1(V4,V5,jvj+2)*/
if((x[jvj+2]==135)) goto l4;
if((x[jvj+2]!=134)) goto l5;
x[RT]=134 ;z[RT]=134;
l6:v[0]=jvj; v[22]-=4; return;
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
l4:pile[v[22]]=V5; pile[WZ1]=V4; 
(*f[1025])( );if(v[102]) goto l5;     /*POSOM0(V5,V4,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=E; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(E,jvj+1)*/
pile[v[22]]=X; pile[WZ1]=117; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(X,117,V1)*/
goto l2;
l5:x[RT]=135 ;z[RT]=135;
goto l6;
}
