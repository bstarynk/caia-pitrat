#include "dx.h"
void DOUBX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R,P;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; P=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=107; pile[WZ1]=P; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(107,P,jvj+1)*/
for(a=x[jvj+1];a>0;a=t[a]) if(s[a]==x[R]) goto l1;
l2:if((x[jvj+1]>0)) goto l3;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l1:x[RES]=135 ;z[RES]=135;
v[0]=jvj; v[22]-=3; v[102]=0;return;
l3:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=R; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1989])( );if(v[102]) goto l4;     /*DOUBX0(R,jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l1;
l4:x[jvj+1]=t[x[jvj+1]];
goto l2;
}
