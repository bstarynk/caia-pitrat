#include "dx.h"
void PRP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0,V7=0,V1=0,V3=0,V4=0,V6=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10219;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==101&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
v[76]=1000;
(*f[174])( );     /*COMB0()*/
V2=v[71];
V5=v[78];
V7=v[77];
pile[v[22]]=41; pile[WZ1]=V2; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V2,0,V1)*/
V1=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V1; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V1,493,V3)*/
V3=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V5; pile[WZ2]=V3; 
(*f[39])( );     /*SDX0(41,V5,V3,V4)*/
V4=pile[WZ3]; 
pile[WZ1]=V7; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(41,V7,V4,V6)*/
V6=pile[WZ3]; 
pile[v[22]]=V6; 
(*f[40])( );     /*SLG0(V6)*/
l1:x[jvj+1]=incon; v[0]=jvj; return;
}
