#include "dx.h"
void FNDC1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0,V1=0,V4=0,V5=0,V6=0,V12=0,V7=0,V10=0,V8=0,RN=0;
int ATT,X;
int RS;

ATT=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
V1=x[X];
if((V1>sepcte)) goto l1;
V2=s[x[X]];
if((V2!=66)) goto l1;
V3=x[ATT];
if((V3<=4)) goto l1;
pile[v[22]]=X; 
(*f[59])( );     /*LECT0(X)*/
l1:V4=x[X];
V5=x[ATT];
V12=V4;
l3:V7=r[V12];
if((V7==V5)) goto l4;
if((V7>=V5)) goto l2;
V10=t[V12];
if((V10<=0)) goto l2;
V12=V10;
goto l3;
l2:v[22]-=3; v[102]=1;return;
l4:V8=s[V12];
RN=V8;
V6=RN;
RS=V6;
v[22]-=3; pile[v[22]+2]=RS; v[102]=0;return;
}
