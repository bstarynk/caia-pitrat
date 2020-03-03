#include "dx.h"
void LINHIBE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,V3=0;
int LL;
int EN;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

LL=pile[v[22]]; EN=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
x[EN]=x[jvj+2] ;z[EN]=z[jvj+2];
V4=bh[v[1]][LL];
if((V4!=44)) goto l1;
V5=LL+1;
pile[v[22]]=V5; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l1;     /*SMA0(V5,36,67,jvj+1)*/
(*f[107])( );     /*CRC0(V5,V3)*/
V3=pile[WZ1]; 
pile[v[22]]=EN; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(EN,jvj+1)*/
pile[v[22]]=V3; pile[WZ1]=EN; 
(*f[1177])( );     /*LINHIBE1(V3,EN)*/
l1:v[0]=jvj; v[22]-=2; return;
}
