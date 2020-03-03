#include "dx.h"
void Z248Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int SUJ;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=275; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(275,SUJ,jvj+1)*/
pile[v[22]]=jvj+1; 
(*f[4046])( );     /*Z254Z0(jvj+1)*/
l1:pile[v[22]]=128; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(128,SUJ,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
v[0]=jvj; v[22]-=1; return;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; 
(*f[4045])( );     /*Z250Z0(jvj+3)*/
x[jvj+2]=t[x[jvj+2]];
goto l2;
}
