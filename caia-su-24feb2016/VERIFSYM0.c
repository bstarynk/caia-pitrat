#include "dx.h"
void VERIFSYM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K,A;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11106;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1328&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; A=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=x[A] ;z[jvj+7]=z[A];
l3:if((x[jvj+7]>0)) goto l4;
x[RES]=135 ;z[RES]=135;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[760])( );     /*MEMEX0(jvj+2,jvj+3,jvj+4)*/
if((x[jvj+4]==135)) goto l5;
x[jvj+6]=t[x[jvj+6]];
l1:if((x[jvj+6]>0)) goto l2;
x[RES]=134 ;z[RES]=134;
goto l6;
l4:x[jvj+5]=s[x[jvj+7]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+7];
pile[v[22]]=jvj+5; pile[WZ1]=K; pile[WZ2]=jvj+3; 
(*f[1578])( );if(v[102]) goto l5;     /*SUBSTSYM0(jvj+5,K,jvj+3)*/
x[jvj+6]=x[A] ;z[jvj+6]=z[A];
goto l1;
l5:x[jvj+7]=t[x[jvj+7]];
goto l3;
}
