#include "dx.h"
void QUADRI5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V5=0,Z=0,P=0,V2=0,Q=0,V3=0;
int A,XN,C,RS,ZO;
int R;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; XN=pile[v[22]+1]; C=pile[v[22]+2]; RS=pile[v[22]+3]; ZO=pile[v[22]+4]; R=pile[v[22]+5]; v[22]+=6; 
if((v[3]<=0)) goto l1;
V1=t[v[3]];
if((V1<=0)) goto l1;
l2:V5=x[ZO];
Z=V5;
P=v[3];
V2=t[P];
Q=V2;
V3=t[Q];
v[3]=V3;
x[jvj+1]=P ;z[jvj+1]=(P<=sepcte) ? P : 0;
r[P]=x[A];
r[Q]=x[C];
t[Q]=Z;
x[R]=x[jvj+1] ;z[R]=z[jvj+1];
s[P]=XN;
s[Q]=RS;
v[0]=jvj; v[22]-=6; return;
l1:
(*f[234])( );     /*GARBAG0()*/
goto l2;
}
