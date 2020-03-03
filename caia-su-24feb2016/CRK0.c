#include "dx.h"
void CRK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V6=0,V7=0,V8=0,V2=0,V11=0,V1=0,V18=0,V13=0,V15=0,V20=0,V14=0,J=0,V16=0;
int A;
int R;

A=pile[v[22]]; v[22]+=2; 
V3=bh[v[1]][A];
if(V3==64||V3==36||V3==38||V3==124||V3==34||V3==(-80)||V3==(-75)||V3==126||V3==58||V3==59) goto l3;
if((V3<48)) goto l7;
if((V3>57)) goto l7;
V2=135;
l2:if((V2==135)) goto l3;
V11=V3;
if((V11>=97)) goto l10;
if((V11<65)) goto l8;
if((V11<=90)) goto l9;
l8:V1=134;
l1:if((V1==135)) goto l3;
l5:v[22]-=2; v[102]=1;return;
l3:V6=A+1;
V18=V6;
l11:V13=bh[v[1]][V18];
if((V13<48)) goto l18;
if((V13>57)) goto l18;
V15=135;
l12:if((V15==135)) goto l15;
V20=V13;
if((V20>=97)) goto l17;
if((V20<65)) goto l13;
if((V20<=90)) goto l16;
l13:V14=134;
l14:if((V14==135)) goto l15;
J=V18;
V7=bh[v[1]][J];
if((V7==32)) goto l4;
if(V7!=44&&V7!=41&&V7!=93) goto l5;
R=J;
l6:v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l4:V8=J+1;
R=V8;
goto l6;
l7:V2=134;
goto l2;
l9:V1=135;
goto l1;
l10:if((V11<=122)) goto l9;
goto l8;
l15:V16=V18+1;
V18=V16;
goto l11;
l16:V14=135;
goto l14;
l17:if((V20<=122)) goto l16;
goto l13;
l18:V15=134;
goto l12;
}
