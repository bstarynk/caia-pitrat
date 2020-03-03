#include "dx.h"
void FNDE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0,V4=0,V6=0,V13=0,V8=0,V11=0,V9=0,R=0;
int ATT,X;
int RE;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

ATT=pile[v[22]]; X=pile[v[22]+1]; RE=pile[v[22]+2]; v[22]+=3; 
V1=x[X];
if((V1>sepcte)) goto l1;
V2=s[x[X]];
if((V2!=66)) goto l1;
pile[v[22]]=X; 
(*f[59])( );     /*LECT0(X)*/
l1:V3=x[ATT];
V4=x[X];
V13=V4;
l4:V8=r[V13];
if((V8==V3)) goto l5;
if((V8>=V3)) goto l2;
V11=t[V13];
if((V11<=0)) goto l2;
V13=V11;
goto l4;
l2:x[jvj+2]=0 ;z[jvj+2]=0;
x[RE]=x[jvj+2] ;z[RE]=z[jvj+2];
l3:v[0]=jvj; v[22]-=3; return;
l5:V9=s[V13];
R=V9;
V6=z[X];
x[jvj+1]=R;z[jvj+1]=V6;
x[RE]=x[jvj+1] ;z[RE]=z[jvj+1];
goto l3;
}
