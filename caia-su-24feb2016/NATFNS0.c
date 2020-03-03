#include "dx.h"
void NATFNS0(void )
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
x[jvj+6]=incon;
if((x[K]==250)) goto l1;
x[jvj+6]=x[K] ;z[jvj+6]=z[K];
l1:pile[v[22]]=1260; pile[WZ1]=BA; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1260,BA,jvj+1)*/
l2:if((x[jvj+1]>0)) goto l3;
pile[v[22]]=V; pile[WZ1]=110; pile[WZ2]=jvj+3; 
(*f[329])( );     /*TRI13(V,110,jvj+3)*/
pile[v[22]]=BA; pile[WZ1]=1260; 
(*f[36])( );     /*PLUSC0(BA,1260,jvj+3)*/
l6:if(x[jvj+6]!=incon) goto l7;
l9:v[0]=jvj; v[22]-=3; return;
l3:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(110,jvj+2,V2)*/
V2=pile[WZ2]; 
if((V2!=V)) goto l4;
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
goto l6;
l4:x[jvj+1]=t[x[jvj+1]];
goto l2;
l7:pile[v[22]]=1261; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1261,jvj+3,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l9;
pile[v[22]]=1755; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1755,jvj+6,jvj+7)*/
pile[v[22]]=jvj+3; pile[WZ1]=1261; 
(*f[36])( );     /*PLUSC0(jvj+3,1261,jvj+7)*/
l8:pile[v[22]]=jvj+3; pile[WZ1]=1261; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+3,1261,jvj+6)*/
pile[v[22]]=1752; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1752,jvj+3,jvj+4)*/
l5:if((x[jvj+4]<=0)) goto l9;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; 
(*f[1713])( );     /*MEMEXPR1(jvj+3,jvj+5)*/
x[jvj+4]=t[x[jvj+4]];
goto l5;
}
