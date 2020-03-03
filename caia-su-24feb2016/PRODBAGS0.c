#include "dx.h"
void PRODBAGS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V9=0,EE=0,GG=0,V2=0,V3=0,V1=0,V4=0,V5=0;
int E,G;
int RS;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; G=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+1; 
(*f[46])( );     /*TRI0(0,117,jvj+1)*/
V8=x[E];
V9=x[G];
EE=V8;
GG=V9;
V2=s[EE];
V3=s[GG];
V1=V2*V3;
pile[v[22]]=jvj+1; pile[WZ2]=V1; 
(*f[186])( );     /*BTC0(jvj+1,117,V1)*/
V4=t[EE];
if((V4<=0)) goto l1;
V5=t[GG];
if((V5<=0)) goto l1;
pile[v[22]]=V4; pile[WZ1]=V5; pile[WZ2]=jvj+1; 
(*f[4067])( );     /*PRODBAGS1(V4,V5,jvj+1)*/
l1:pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+1,RS)*/
RS=pile[WZ2]; 
v[0]=jvj; v[22]-=3; pile[v[22]+2]=RS; v[102]=0;return;
l2:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
