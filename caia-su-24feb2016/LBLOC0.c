#include "dx.h"
void LBLOC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int DP;
int EX,DX;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

DP=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=DP; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l1;     /*SMA0(DP,36,67,jvj+1)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ4]=jvj+2; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+2)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+2; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+2,EX)*/
pile[v[22]]=DP; 
(*f[107])( );     /*CRC0(DP,V2)*/
V2=pile[WZ1]; 
pile[v[22]]=V2; pile[WZ1]=EX; 
(*f[1097])( );if(v[102]) goto l1;     /*LBAR1(V2,EX,DX)*/
DX=pile[WZ2]; 
v[0]=jvj; v[22]-=3; pile[v[22]+2]=DX; v[102]=0;return;
l1:x[EX]=DX=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
}
