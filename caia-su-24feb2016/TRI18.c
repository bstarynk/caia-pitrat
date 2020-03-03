#include "dx.h"
void TRI18(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,XN=0,V3=0,XX=0,V4=0,Z=0,RO=0,V5=0;
int ZO,XC,X;
int R;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

ZO=pile[v[22]]; XC=pile[v[22]+1]; X=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
if((v[3]>0)) goto l1;
(*f[234])( );     /*GARBAG0()*/
l1:V1=XC;
XN=V1;
V3=x[X];
XX=V3;
V4=x[ZO];
Z=V4;
RO=v[3];
V5=t[RO];
v[3]=V5;
x[jvj+1]=RO ;z[jvj+1]=(RO<=sepcte) ? RO : 0;
x[R]=x[jvj+1] ;z[R]=z[jvj+1];
r[RO]=XX;
s[RO]=XN;
t[RO]=Z;
v[0]=jvj; v[22]-=4; return;
}
