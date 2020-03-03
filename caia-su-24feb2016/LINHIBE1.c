#include "dx.h"
void LINHIBE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V2=0,V6=0;
int LL,EN;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

LL=pile[v[22]]; EN=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V6=LL;
l1:V3=bh[v[1]][V6];
if((V3!=44)) goto l2;
V4=V6+1;
pile[v[22]]=V4; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l2;     /*SMA0(V4,36,67,jvj+1)*/
(*f[107])( );     /*CRC0(V4,V2)*/
V2=pile[WZ1]; 
pile[v[22]]=EN; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(EN,jvj+1)*/
V6=V2;
goto l1;
l2:v[0]=jvj; v[22]-=2; return;
}
