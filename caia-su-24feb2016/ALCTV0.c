#include "dx.h"
void ALCTV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DX=0,V5=0,V4=0,R=0,V3=0,DFF=0;
int DP,AL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=10127;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==394&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
DP=pile[v[22]]; AL=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=DP; pile[WZ1]=jvj+2; 
(*f[335])( );if(v[102]) goto l1;     /*LANT0(DP,jvj+2,DX)*/
DX=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=455; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,455,102,jvj+3,jvj+4)*/
pile[v[22]]=AL; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(AL,455,jvj+4)*/
V5=DX+1;
V4=bh[v[1]][V5];
if((V4==32)) goto l1;
pile[v[22]]=DX; 
(*f[131])( );     /*SMV0(DX,R,V3)*/
R=pile[WZ1]; V3=pile[WZ2]; 
if((R!=(-9543))) goto l1;
pile[v[22]]=V3; pile[WZ1]=jvj+4; 
(*f[321])( );if(v[102]) goto l1;     /*LCANT0(V3,jvj+4,DFF)*/
DFF=pile[WZ2]; 
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
