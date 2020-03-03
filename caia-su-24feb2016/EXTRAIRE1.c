#include "dx.h"
void EXTRAIRE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,V4=0;
int R,A,B,S;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; S=pile[v[22]+3]; v[22]+=4; 
WZ1=v[22]+1; 
V4=x[S];
V3=A;
l2:x[jvj+2]=x[B] ;z[jvj+2]=z[B];
l1:if((x[jvj+2]<=0)) goto l4;
x[jvj+1]=s[x[jvj+2]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+2];
for(a=x[R];a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l3;
pile[v[22]]=R; pile[WZ1]=jvj+1; 
(*f[522])( );     /*PLUB2(R,jvj+1)*/
l4:V1=V3-1;
if((V1>0)) goto l5;
v[0]=jvj; v[22]-=4; return;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:V3=V1;
V4=68;
goto l2;
}
