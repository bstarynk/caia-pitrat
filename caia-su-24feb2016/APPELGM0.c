#include "dx.h"
void APPELGM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=10524;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==483&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1053; pile[WZ1]=158; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(1053,158,jvj+2)*/
pile[v[22]]=jvj+2; 
(*f[191])( );     /*MANAGER0(jvj+2)*/
l1:x[jvj+1]=incon; v[0]=jvj; return;
}
