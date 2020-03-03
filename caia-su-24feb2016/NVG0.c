#include "dx.h"
void NVG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,V2=0,TY=0,V6=0,V7=0,Q=0,V8=0,P=0,V11=0,V10=0,V12=0,V14=0,V15=0;
int N;

N=pile[v[22]]; v[22]+=1; 
V15=N;
l11:Q=TY=incon;
V1=r[V15];
if((V1<=0)) goto l1;
V3=V1;
if((V2=w[V3][1])==incon) goto l1;
TY=V2;
l1:V6=(-20);
if((V1!=V6)) goto l2;
V7=s[V15];
Q=V7;
l2:V8=t[V15];
P=V8;
if(Q==incon) goto l3;
l5:if((P!=impos)) goto l6;
t[V15]=0;
l6:if((P>=0)) goto l7;
if((P==impos)) goto l7;
V10=(-P);
t[V15]=V10;
l7:if(Q!=incon) goto l8;
l9:if((P>=0)) goto l10;
if((P==impos)) goto l10;
V14=(-P);
V15=V14;
goto l11;
l3:if(TY!=incon) goto l4;
goto l5;
l4:if(TY!=20&&TY!=23) goto l5;
V11=s[V15];
Q=V11;
goto l5;
l8:if((Q<=sepcte)) goto l9;
V12=t[Q];
if((V12>=0)) goto l9;
pile[v[22]]=Q; 
(*f[680])( );     /*NVG0(Q)*/
goto l9;
l10:v[22]-=1; return;
}
