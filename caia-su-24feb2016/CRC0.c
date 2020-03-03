#include "dx.h"
void CRC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V3=0,V9=0,V2=0,V12=0,V1=0,V19=0,V14=0,V16=0,V21=0,V15=0,V17=0;
int A;
int R;

A=pile[v[22]]; v[22]+=2; 
V10=A+1;
V3=bh[v[1]][V10];
if(V3==64||V3==36||V3==38||V3==124||V3==34||V3==(-80)||V3==(-75)||V3==126||V3==58||V3==35) goto l3;
if((V3<48)) goto l5;
if((V3>57)) goto l5;
V2=135;
l2:if((V2==135)) goto l3;
V12=V3;
if((V12>=97)) goto l8;
if((V12<65)) goto l6;
if((V12<=90)) goto l7;
l6:V1=134;
l1:if((V1==135)) goto l3;
R=A;
l4:v[22]-=2; pile[v[22]+1]=R; return;
l3:V9=V10+1;
V19=V9;
l9:V14=bh[v[1]][V19];
if((V14<48)) goto l16;
if((V14>57)) goto l16;
V16=135;
l10:if((V16==135)) goto l13;
V21=V14;
if((V21>=97)) goto l15;
if((V21<65)) goto l11;
if((V21<=90)) goto l14;
l11:V15=134;
l12:if((V15==135)) goto l13;
R=V19;
goto l4;
l5:V2=134;
goto l2;
l7:V1=135;
goto l1;
l8:if((V12<=122)) goto l7;
goto l6;
l13:V17=V19+1;
V19=V17;
goto l9;
l14:V15=135;
goto l12;
l15:if((V21<=122)) goto l14;
goto l11;
l16:V16=134;
goto l10;
}
