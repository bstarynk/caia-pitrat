#include "dx.h"
void APLIS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int XX=0,V1=0;
int E,F,M;
int L;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; F=pile[v[22]+1]; M=pile[v[22]+2]; L=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[E];
l1:if((V1>0)) goto l2;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l2:XX=s[V1];
for(a=x[F];a>0;a=t[a]) if(s[a]==XX) goto l3;
pile[v[22]]=XX; pile[WZ1]=117; pile[WZ2]=jvj+1; 
(*f[46])( );     /*TRI0(XX,117,jvj+1)*/
pile[v[22]]=F; pile[WZ1]=XX; 
(*f[207])( );     /*PLUE2(F,XX)*/
pile[v[22]]=jvj+1; pile[WZ1]=120; pile[WZ2]=M; 
(*f[35])( );     /*CHGC1(jvj+1,120,M)*/
pile[v[22]]=E; pile[WZ1]=F; pile[WZ2]=jvj+1; pile[WZ3]=L; 
(*f[4074])( );if(v[102]) goto l4;     /*APLIS1(E,F,jvj+1,L)*/
l5:v[0]=jvj; v[22]-=4; v[102]=0;return;
l3:V1=t[V1];
goto l1;
l4:x[L]=x[jvj+1] ;z[L]=z[jvj+1];
goto l5;
}
