#include "dx.h"
void SUPBOULN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int BL,X;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=11273;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==428&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=x[X] ;z[jvj+6]=z[X];
l2:x[jvj+2]=x[jvj+6] ;z[jvj+2]=z[jvj+6];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=x[BL])) goto l1;
pile[v[22]]=246; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(246,jvj+2)*/
l1:pile[v[22]]=366; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(366,jvj+2,jvj+5)*/
pile[v[22]]=BL; pile[WZ1]=jvj+5; 
(*f[428])( );     /*SUPBOULN0(BL,jvj+5)*/
l3:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+2,jvj+6)*/
goto l2;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
