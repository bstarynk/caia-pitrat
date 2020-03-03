#include "dx.h"
void CMLPOS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V6=0,V1=0;
int A;
int R,RT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; RT=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+1; 
(*f[46])( );     /*TRI0(0,117,jvj+1)*/
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+4]=x[jvj+5] ;z[jvj+4]=z[jvj+5];
x[jvj+7]=x[A] ;z[jvj+7]=z[A];
l1:if((x[jvj+7]<=0)) goto l4;
x[jvj+6]=s[x[jvj+7]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+7];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l2;
x[jvj+2]=x[jvj+6] ;z[jvj+2]=z[jvj+6];
pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+1,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+2,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=V6; pile[WZ2]=jvj+3; 
(*f[2022])( );     /*POSOM1(V5,V6,jvj+3)*/
if((x[jvj+3]==135)) goto l3;
if((x[jvj+3]!=134)) goto l4;
x[RT]=134 ;z[RT]=134;
l5:pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+1,R)*/
R=pile[WZ2]; 
v[0]=jvj; v[22]-=3; pile[v[22]+1]=R; v[102]=0;return;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:pile[v[22]]=V6; pile[WZ1]=V5; 
(*f[1025])( );if(v[102]) goto l4;     /*POSOM0(V6,V5,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=117; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(jvj+1,117,V1)*/
pile[WZ1]=A; pile[WZ2]=jvj+4; pile[WZ3]=RT; 
(*f[2114])( );     /*CMLPOS1(jvj+1,A,jvj+4,RT)*/
goto l5;
l4:x[RT]=135 ;z[RT]=135;
goto l5;
l6:R=x[RT]=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
}
