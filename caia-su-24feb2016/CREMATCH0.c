#include "dx.h"
void CREMATCH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,IY=0,V5=0,V3=0,V8=0,V7=0,IX=0,V6=0;
int I;
int NNNE;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26113;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2434&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V4=I%4;
IY=0;
l2:V5=IY*4;
V3=V4+V5;
if((V3==I)) goto l1;
pile[v[22]]=jvj+2; pile[WZ1]=V3; 
(*f[207])( );     /*PLUE2(jvj+2,V3)*/
l1:IY++;
if((IY<=3)) goto l2;
V8=I/4;
V7=V8*4;
IX=0;
l4:V6=IX+V7;
if((V6==I)) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=V6; 
(*f[207])( );     /*PLUE2(jvj+2,V6)*/
l3:IX++;
if((IX<=3)) goto l4;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
