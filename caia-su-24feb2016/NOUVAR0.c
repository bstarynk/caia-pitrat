#include "dx.h"
void NOUVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0;
int T;
int V;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=498; pile[WZ1]=T; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(498,T,jvj+1)*/
x[jvj+2]=x[jvj+1] ;z[jvj+2]=z[jvj+1];
l2:pile[v[22]]=273; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(273,jvj+2,jvj+3)*/
pile[v[22]]=214; pile[WZ1]=21; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(214,21,jvj+4)*/
l3:if((x[jvj+4]>0)) goto l4;
v[0]=jvj; v[22]-=2; v[102]=1;return;
l1:x[jvj+2]=x[T] ;z[jvj+2]=z[T];
goto l2;
l4:VV=s[x[jvj+4]];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==VV) goto l5;
V=VV;
pile[v[22]]=jvj+2; pile[WZ1]=273; pile[WZ2]=VV; 
(*f[735])( );     /*PLUSC4(jvj+2,273,VV)*/
v[0]=jvj; v[22]-=2; pile[v[22]+1]=V; v[102]=0;return;
l5:x[jvj+4]=t[x[jvj+4]];
goto l3;
}
