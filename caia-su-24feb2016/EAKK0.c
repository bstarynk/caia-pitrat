#include "dx.h"
void EAKK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10793;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==114&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=494; pile[WZ1]=240; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(494,240,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
l3:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
V2=x[jvj+3];
pile[v[22]]=jvj+3; 
(*f[340])( );     /*EACB0(jvj+3)*/
pile[v[22]]=494; pile[WZ1]=240; pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(494,240,V2)*/
x[jvj+2]=t[x[jvj+2]];
goto l1;
}
