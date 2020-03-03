#include "dx.h"
void CPE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,X=0,V5=0,V6=0,V8=0,V2=0,V3=0,V9=0,V11=0;
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
X=V1;
if((X>0)) goto l2;
x[jvj+2]=0 ;z[jvj+2]=0;
x[R]=x[jvj+2] ;z[R]=z[jvj+2];
l4:v[0]=jvj; v[22]-=2; return;
l1:V3=s[X];
V2=V3;
l3:pile[v[22]]=V2; pile[WZ1]=V9; pile[WZ2]=R; 
(*f[213])( );     /*TRI7(V2,V9,R)*/
V11=t[X];
pile[v[22]]=V11; pile[WZ1]=R; 
(*f[614])( );     /*CPE1(V11,R)*/
goto l4;
l2:V9=r[X];
V2=incon;
V5=(-20);
if((V9!=V5)) goto l1;
V6=s[X];
if((V6<=sepcte)) goto l1;
pile[v[22]]=V6; pile[WZ1]=jvj+1; 
(*f[613])( );     /*CPI1(V6,jvj+1)*/
V8=x[jvj+1];
V2=V8;
goto l3;
}
