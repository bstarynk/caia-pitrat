#include "dx.h"
void OUTER2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,EE=0,V2=0,V3=0,RE=0,V5=0,V4=0,V7=0,V13=0,V12=0,V8=0,V9=0,V11=0;
int E,XN;

E=pile[v[22]]; XN=pile[v[22]+1]; v[22]+=2; 
V1=x[E];
EE=V1;
V2=s[EE];
if((V2!=XN)) goto l1;
if((EE<=0)) goto l1;
V3=t[EE];
RE=V3;
l2:V5=t[EE];
if((V5<=0)) goto l3;
V4=s[EE];
if((V4==XN)) goto l3;
V13=V5;
V12=EE;
l4:V8=s[V13];
if((V8!=XN)) goto l5;
V9=t[V13];
t[V12]=V9;
l5:V11=t[V13];
if((V11<=0)) goto l3;
if((V8==XN)) goto l3;
V12=V13;
V13=V11;
goto l4;
l1:RE=EE;
if((EE>0)) goto l2;
l3:V7=RE;
x[E]=V7;z[E]=0;
v[22]-=2; return;
}
