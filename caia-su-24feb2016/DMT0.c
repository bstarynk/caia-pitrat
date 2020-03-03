#include "dx.h"
void DMT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Y,BT,X,R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10006;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1647&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Y=pile[v[22]]; BT=pile[v[22]+1]; X=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=123; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(123,X,jvj+2)*/
pile[v[22]]=Y; pile[WZ1]=123; 
(*f[35])( );     /*CHGC1(Y,123,jvj+2)*/
l1:pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=Y; 
(*f[1818])( );     /*COPV0(R,BT,X,R,Y)*/
pile[v[22]]=Y; 
(*f[1424])( );     /*VZ0(Y)*/
pile[v[22]]=R; pile[WZ1]=67; pile[WZ2]=Y; 
(*f[1638])( );     /*DEKB0(R,67,Y)*/
x[jvj+3]=vo[15];z[jvj+3]=vz[15];
pile[WZ1]=Y; 
(*f[1600])( );     /*DVA0(R,Y)*/
pile[v[22]]=Y; pile[WZ1]=R; pile[WZ2]=jvj+3; pile[WZ3]=BT; pile[WZ4]=Y; 
(*f[1426])( );     /*DMP0(Y,R,jvj+3,BT,Y)*/
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
}
