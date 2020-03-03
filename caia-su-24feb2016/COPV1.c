#include "dx.h"
void COPV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0;
int RM,BT,R,X;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=10577;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1819&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RM=pile[v[22]]; BT=pile[v[22]+1]; R=pile[v[22]+2]; X=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((V4=w[x[BT]][1])==incon) goto l1;
if((V4!=23)) goto l3;
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=X; 
(*f[36])( );     /*PLUSC0(R,BT,X)*/
l1:pile[v[22]]=X; pile[WZ1]=BT; pile[WZ2]=R; pile[WZ3]=RM; 
(*f[1635])( );     /*COPT0(X,BT,R,RM)*/
l2:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l3:pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=X; 
(*f[35])( );     /*CHGC1(R,BT,X)*/
goto l1;
}
