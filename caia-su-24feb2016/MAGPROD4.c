#include "dx.h"
void MAGPROD4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V6=0,V4=0;
int N;
int NNNE;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26094;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2372&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V3=N-1;
pile[v[22]]=V3; pile[WZ1]=6; 
(*f[1006])( );if(v[102]) goto l1;     /*POWER0(V3,6,V2)*/
V2=pile[WZ2]; 
V6=abs(V2);
V4=V6;
pile[v[22]]=V4; pile[WZ1]=NNNE; 
(*f[991])( );if(v[102]) goto l1;     /*ENSFACT0(V4,NNNE)*/
pile[v[22]]=NNNE; pile[WZ1]=V4; 
(*f[207])( );     /*PLUE2(NNNE,V4)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(NNNE,1)*/
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}
