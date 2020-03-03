#include "dx.h"
void ORU1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R,H;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10683;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2167&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; H=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=H; 
(*f[36])( );     /*PLUSC0(R,107,H)*/
pile[v[22]]=H; pile[WZ1]=jvj+3; 
(*f[938])( );     /*USE0(H,jvj+3)*/
pile[WZ1]=253; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(H,253,jvj+3)*/
pile[WZ1]=R; pile[WZ2]=H; 
(*f[2208])( );     /*ORA1(H,R,H)*/
l1:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
