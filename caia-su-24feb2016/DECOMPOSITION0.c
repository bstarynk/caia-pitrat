#include "dx.h"
void DECOMPOSITION0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,Y;
int E,RES;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=11326;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3689&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; Y=pile[v[22]+1]; E=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=0 ;z[jvj+4]=0;
x[E]=x[jvj+4] ;z[E]=z[jvj+4];
pile[v[22]]=X; pile[WZ1]=E; pile[WZ2]=36; pile[WZ3]=jvj+2; 
(*f[4022])( );     /*DEPA0(X,E,36,jvj+2)*/
if((x[jvj+2]==135)) goto l1;
l3:x[RES]=134 ;z[RES]=134;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l1:pile[v[22]]=Y; pile[WZ1]=E; pile[WZ2]=52; pile[WZ3]=jvj+3; 
(*f[4022])( );     /*DEPA0(Y,E,52,jvj+3)*/
if((x[jvj+3]==135)) goto l2;
goto l3;
l2:x[RES]=135 ;z[RES]=135;
goto l4;
}
