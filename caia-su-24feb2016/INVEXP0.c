#include "dx.h"
void INVEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V4=0,V7=0;
int A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=277; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(277,A,jvj+1)*/
if((x[jvj+1]!=481)) goto l1;
pile[v[22]]=100; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,A,jvj+2)*/
if((x[jvj+3]=w[x[jvj+2]][3])==incon) goto l1;
pile[v[22]]=A; pile[WZ1]=jvj+3; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l1;     /*FNDZ0(A,jvj+3,V5,jvj+4)*/
V5=pile[WZ2]; 
V4=V5;
V7=V4;
pile[v[22]]=jvj+2; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+2,100,R)*/
pile[v[22]]=R; pile[WZ1]=jvj+3; pile[WZ2]=V7; 
(*f[43])( );     /*CHGC2(R,jvj+3,V7)*/
v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
