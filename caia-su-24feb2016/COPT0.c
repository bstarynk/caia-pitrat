#include "dx.h"
void COPT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,BT,R,RM;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10243;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1635&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; BT=pile[v[22]+1]; R=pile[v[22]+2]; RM=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=X; pile[WZ1]=BT; pile[WZ2]=R; pile[WZ3]=RM; 
(*f[1826])( );     /*COPTX0(X,BT,R,RM)*/
(*f[1827])( );     /*COPTF0(X)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
}
