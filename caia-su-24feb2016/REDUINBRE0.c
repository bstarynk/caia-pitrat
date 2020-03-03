#include "dx.h"
void REDUINBRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,AA=0,S=0,V5=0,V4=0,V3=0,V2=0,V9=0,V8=0,V7=0,V6=0,V13=0,V12=0,V11=0,V10=0,V17=0,V16=0,V15=0,V14=0,V21=0,V20=0,V19=0,V18=0,V22=0;
int A;
int R;

A=pile[v[22]]; v[22]+=2; 
R=incon;
if((A!=(-8888888))) goto l1;
R=(-8888888);
l1:V1=abs(A);
AA=V1;
if(R==incon) goto l2;
l3:if((A<0)) goto l4;
S=1;
l5:if(R==incon) goto l6;
l12:v[22]-=2; pile[v[22]+1]=R; return;
l2:if((AA>10)) goto l3;
R=A;
goto l3;
l4:S=(-1);
goto l5;
l6:if((AA<=10)) goto l11;
if((AA<=50)) goto l7;
if((AA<=100)) goto l8;
if((AA<=200)) goto l9;
if((AA<=1000)) goto l10;
if((AA>10000)) goto l11;
V21=AA/500;
V20=500*V21;
V19=V20+250;
V18=S*V19;
R=V18;
goto l12;
l7:V5=AA/5;
V4=5*V5;
V3=V4+3;
V2=S*V3;
R=V2;
goto l12;
l8:V9=AA/10;
V8=10*V9;
V7=V8+5;
V6=S*V7;
R=V6;
goto l12;
l9:V13=AA/20;
V12=20*V13;
V11=V12+10;
V10=S*V11;
R=V10;
goto l12;
l10:V17=AA/50;
V16=50*V17;
V15=V16+25;
V14=S*V15;
R=V14;
goto l12;
l11:V22=S*99999;
R=V22;
goto l12;
}
