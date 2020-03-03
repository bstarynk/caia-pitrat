#include "dx.h"
void JETONS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V4=0,V7=0,V6=0,V3=0,V11=0,V8=0,V15=0,V14=0,V13=0,V16=0,V12=0;
int I;
int NNNE;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26161;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2655&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V5=I/100;
V4=10*V5;
V7=I/10;
V6=V7%10;
V3=V4+V6;
pile[v[22]]=jvj+2; pile[WZ1]=V3; 
(*f[207])( );     /*PLUE2(jvj+2,V3)*/
V11=I%10;
V8=V4+V11;
pile[WZ1]=V8; 
(*f[207])( );     /*PLUE2(jvj+2,V8)*/
V15=I/10;
V14=V15%10;
V13=10*V14;
V16=I%10;
V12=V13+V16;
pile[WZ1]=V12; 
(*f[207])( );     /*PLUE2(jvj+2,V12)*/
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
