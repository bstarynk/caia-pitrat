#include "dx.h"
void ENSINTERV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=0 ;z[jvj+1]=0;
x[R]=x[jvj+1] ;z[R]=z[jvj+1];
if((A>B)) goto l1;
pile[v[22]]=R; pile[WZ1]=A; 
(*f[207])( );     /*PLUE2(R,A)*/
l1:if((A>=B)) goto l2;
V2=A+1;
pile[v[22]]=V2; pile[WZ1]=B; pile[WZ2]=R; 
(*f[4033])( );     /*ENSINTERV1(V2,B,R)*/
l2:v[0]=jvj; v[22]-=3; return;
}
