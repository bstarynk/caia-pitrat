#include "dx.h"
void ALCTH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,VV=0,DYY=0,V=0,DY=0,DXX=0,V7=0,DZ=0;
int I,AL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=10122;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==395&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; AL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=I; 
(*f[107])( );     /*CRC0(I,V1)*/
V1=pile[WZ1]; 
pile[v[22]]=V1; 
(*f[131])( );     /*SMV0(V1,VV,DYY)*/
VV=pile[WZ1]; DYY=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l1;     /*SMA0(I,64,67,jvj+2)*/
V=VV;
DY=DYY;
x[jvj+13]=x[jvj+2] ;z[jvj+13]=z[jvj+2];
if(x[jvj+13]!=464&&x[jvj+13]!=766&&x[jvj+13]!=923) goto l1;
pile[v[22]]=DY; pile[WZ1]=jvj+3; 
(*f[79])( );if(v[102]) goto l1;     /*LEXP0(DY,jvj+3,DXX)*/
DXX=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
V7=DXX+1;
pile[v[22]]=V7; pile[WZ1]=jvj+5; 
(*f[79])( );if(v[102]) goto l1;     /*LEXP0(V7,jvj+5,DZ)*/
DZ=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+13; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+13,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=436; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+8,436,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=111; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+9,jvj+10,111,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+4; pile[WZ2]=103; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+11,jvj+4,103,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=477; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+12; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,477,102,jvj+6,jvj+12,jvj+7)*/
pile[v[22]]=AL; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(AL,477,jvj+7)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
