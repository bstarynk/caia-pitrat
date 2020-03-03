#include "dx.h"
void OUTER1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,XN=0,V2=0,EE=0,V3=0,V4=0,RE=0,V6=0,V5=0,V8=0,V14=0,V13=0,V9=0,V10=0,V12=0;
int E,XS;

E=pile[v[22]]; XS=pile[v[22]+1]; v[22]+=2; 
V1=XS;
XN=V1;
V2=x[E];
EE=V2;
V3=s[EE];
if((V3!=XN)) goto l1;
if((EE<=0)) goto l1;
V4=t[EE];
RE=V4;
l2:V6=t[EE];
if((V6<=0)) goto l3;
V5=s[EE];
if((V5==XN)) goto l3;
V14=V6;
V13=EE;
l4:V9=s[V14];
if((V9!=XN)) goto l5;
V10=t[V14];
t[V13]=V10;
l5:V12=t[V14];
if((V12<=0)) goto l3;
if((V9==XN)) goto l3;
V13=V14;
V14=V12;
goto l4;
l1:RE=EE;
if((EE>0)) goto l2;
l3:V8=RE;
x[E]=V8;z[E]=0;
v[22]-=2; return;
}
