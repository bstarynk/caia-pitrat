#include "dx.h"
void ALCTU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DZ=0,DXX=0;
int I,AL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=10191;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==400&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; AL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=I; pile[WZ1]=jvj+2; 
(*f[79])( );if(v[102]) goto l1;     /*LEXP0(I,jvj+2,DZ)*/
DZ=pile[WZ2]; 
pile[v[22]]=DZ; pile[WZ1]=jvj+3; 
(*f[79])( );if(v[102]) goto l1;     /*LEXP0(DZ,jvj+3,DXX)*/
DXX=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=111; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(jvj+5,111,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=284; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+7; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,284,102,jvj+4,jvj+7,jvj+6)*/
pile[v[22]]=AL; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(AL,284,jvj+6)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
