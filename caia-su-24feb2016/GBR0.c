#include "dx.h"
void GBR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V7=0,V8=0,Q=0,V3=0,V2=0,V5=0,V9=0,P=0,V10=0,V11=0,V12=0;
int N;

N=pile[v[22]]; v[22]+=1; 
V12=N;
l7:Q=incon;
V6=r[V12];
V7=(-20);
if((V6==V7)) goto l1;
if((V6<=0)) goto l2;
V3=V6;
if((V2=w[V3][1])==incon) goto l2;
if(V2!=20&&V2!=23) goto l2;
V5=s[V12];
Q=V5;
l2:V9=t[V12];
P=V9;
if((P==0)) goto l3;
if((P<=0)) goto l4;
V10=(-P);
t[V12]=V10;
l4:if(Q!=incon) goto l5;
l6:if((P>0)) goto l8;
v[22]-=1; return;
l1:V8=s[V12];
Q=V8;
goto l2;
l3:t[V12]=impos;
goto l4;
l5:if((Q<=sepcte)) goto l6;
V11=t[Q];
if((V11<0)) goto l6;
pile[v[22]]=Q; 
(*f[649])( );     /*GBR0(Q)*/
goto l6;
l8:V12=P;
goto l7;
}
