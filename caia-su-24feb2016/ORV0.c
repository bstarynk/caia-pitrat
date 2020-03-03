#include "dx.h"
void ORV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int X,R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10686;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2170&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=248; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(248,X,jvj+5)*/
l3:if((x[jvj+5]>0)) goto l4;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
pile[v[22]]=204; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(204,jvj+2,V1)*/
V1=pile[WZ2]; 
x[jvj+6]=t[x[jvj+6]];
l1:if((x[jvj+6]>0)) goto l2;
pile[v[22]]=jvj+3; pile[WZ1]=R; 
(*f[2209])( );     /*ORY0(jvj+3,R)*/
(*f[2170])( );     /*ORV0(jvj+3,R)*/
l5:x[jvj+5]=t[x[jvj+5]];
goto l3;
l4:x[jvj+3]=s[x[jvj+5]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+5];
pile[v[22]]=226; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+4)*/
x[jvj+6]=x[jvj+4] ;z[jvj+6]=z[jvj+4];
goto l1;
}
