#include "dx.h"
void CPE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,V7=0,V1=0,V2=0,V8=0,V10=0,V11=0,V12=0;
int X,Q;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Q=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V12=x[Q];
V11=X;
l2:if((V11>0)) goto l3;
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+2]=x[jvj+3] ;z[jvj+2]=z[jvj+3];
l5:t[V12]=x[jvj+2];
if((V11>0)) goto l6;
v[0]=jvj; v[22]-=2; return;
l1:V2=s[V11];
V1=V2;
l4:pile[v[22]]=V1; pile[WZ1]=V8; pile[WZ2]=jvj+2; 
(*f[213])( );     /*TRI7(V1,V8,jvj+2)*/
goto l5;
l3:V8=r[V11];
V1=incon;
V4=(-20);
if((V8!=V4)) goto l1;
V5=s[V11];
if((V5<=sepcte)) goto l1;
pile[v[22]]=V5; pile[WZ1]=jvj+1; 
(*f[613])( );     /*CPI1(V5,jvj+1)*/
V7=x[jvj+1];
V1=V7;
goto l4;
l6:V10=t[V11];
V11=V10;
V12=x[jvj+2];
goto l2;
}
