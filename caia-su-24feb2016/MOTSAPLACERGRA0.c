#include "dx.h"
void MOTSAPLACERGRA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,NN=0,V3=0;
int I,N;
int NNNE;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26093;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2364&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; N=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=I; pile[WZ1]=(-7296); 
(*f[201])( );if(v[102]) goto l3;     /*FCOEFF0(I,(-7296),V2)*/
V2=pile[WZ2]; 
NN=1;
l1:if((NN>N)) goto l3;
pile[v[22]]=NN; pile[WZ1]=(-7297); 
(*f[201])( );if(v[102]) goto l2;     /*FCOEFF0(NN,(-7297),V3)*/
V3=pile[WZ2]; 
if((V2!=V3)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=NN; 
(*f[207])( );     /*PLUE2(jvj+2,NN)*/
l2:NN++;
goto l1;
l3:x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
