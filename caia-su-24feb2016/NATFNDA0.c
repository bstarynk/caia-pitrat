#include "dx.h"
void NATFNDA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int V,K,BA;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

V=pile[v[22]]; K=pile[v[22]+1]; BA=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1775; pile[WZ1]=K; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1775,K,jvj+1)*/
x[jvj+8]=x[jvj+1] ;z[jvj+8]=z[jvj+1];
l2:pile[v[22]]=1260; pile[WZ1]=BA; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1260,BA,jvj+2)*/
l3:if((x[jvj+2]>0)) goto l4;
pile[v[22]]=V; pile[WZ1]=110; pile[WZ2]=jvj+4; 
(*f[329])( );     /*TRI13(V,110,jvj+4)*/
pile[v[22]]=BA; pile[WZ1]=1260; 
(*f[36])( );     /*PLUSC0(BA,1260,jvj+4)*/
l7:pile[v[22]]=1261; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1261,jvj+4,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l8;
pile[v[22]]=jvj+4; pile[WZ1]=1261; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+4,1261,jvj+8)*/
pile[v[22]]=1752; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1752,jvj+4,jvj+5)*/
l6:if((x[jvj+5]<=0)) goto l8;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+6; 
(*f[1713])( );     /*MEMEXPR1(jvj+4,jvj+6)*/
x[jvj+5]=t[x[jvj+5]];
goto l6;
l1:x[jvj+8]=x[K] ;z[jvj+8]=z[K];
goto l2;
l4:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=110; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(110,jvj+3,V2)*/
V2=pile[WZ2]; 
if((V2!=V)) goto l5;
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
goto l7;
l5:x[jvj+2]=t[x[jvj+2]];
goto l3;
l8:v[0]=jvj; v[22]-=3; return;
}
