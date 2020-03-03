#include "dx.h"
void APLIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int XX=0,V2=0;
int E;
int L;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; L=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+1]=x[jvj+3] ;z[jvj+1]=z[jvj+3];
V2=x[E];
l1:if((V2>0)) goto l2;
v[0]=jvj; v[22]-=2; v[102]=1;return;
l2:XX=s[V2];
for(a=x[jvj+1];a>0;a=t[a]) if(s[a]==XX) goto l3;
pile[v[22]]=XX; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(XX,117,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=XX; 
(*f[207])( );     /*PLUE2(jvj+1,XX)*/
pile[v[22]]=E; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; pile[WZ3]=L; 
(*f[4074])( );if(v[102]) goto l4;     /*APLIS1(E,jvj+1,jvj+2,L)*/
l5:v[0]=jvj; v[22]-=2; v[102]=0;return;
l3:V2=t[V2];
goto l1;
l4:x[L]=x[jvj+2] ;z[L]=z[jvj+2];
goto l5;
}
