#include "dx.h"
void CROISSANT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,T=0,V2=0,V3=0,ST=0,TT=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[A];
T=V1;
if((T<=0)) goto l1;
V2=s[T];
V3=t[T];
ST=V2;
pile[v[22]]=ST; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(ST,117,jvj+2)*/
TT=V3;
x[jvj+1]=x[jvj+2] ;z[jvj+1]=z[jvj+2];
pile[v[22]]=TT; pile[WZ1]=jvj+1; pile[WZ2]=R; 
(*f[4021])( );if(v[102]) goto l1;     /*CROISSANT1(TT,jvj+1,R)*/
v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
