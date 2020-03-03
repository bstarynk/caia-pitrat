#include "dx.h"
void ATR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V4=0,V6=0;
int X,E1,E2;
int AT;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; E1=pile[v[22]+1]; E2=pile[v[22]+2]; AT=pile[v[22]+3]; v[22]+=4; 
V6=X;
l1:V2=r[V6];
x[jvj+1]=V2 ;z[jvj+1]=(V2<=sepcte) ? V2 : 0;
if(x[jvj+1]==100||x[jvj+1]==1428) goto l2;
for(a=x[E1];a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l2;
for(a=x[E2];a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l2;
x[AT]=x[jvj+1] ;z[AT]=z[jvj+1];
v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:V4=t[V6];
if((V4>0)) goto l3;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l3:V6=V4;
goto l1;
}
