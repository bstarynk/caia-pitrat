#include "dx.h"
void CRR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,II=0,V3=0,V6=0,V2=0,V9=0,V1=0,V16=0,V11=0,V13=0,V18=0,V12=0,V14=0;
int I;
int J;

I=pile[v[22]]; v[22]+=2; 
V7=I+1;
II=V7;
V3=bh[v[1]][II];
if(V3==64||V3==36||V3==45) goto l3;
if((V3<48)) goto l5;
if((V3>57)) goto l5;
V2=135;
l2:if((V2==135)) goto l3;
V9=V3;
if((V9>=97)) goto l8;
if((V9<65)) goto l6;
if((V9<=90)) goto l7;
l6:V1=134;
l1:if((V1==135)) goto l3;
J=II;
l4:v[22]-=2; pile[v[22]+1]=J; return;
l3:V6=II+1;
V16=V6;
l9:V11=bh[v[1]][V16];
if((V11<48)) goto l16;
if((V11>57)) goto l16;
V13=135;
l10:if((V13==135)) goto l13;
V18=V11;
if((V18>=97)) goto l15;
if((V18<65)) goto l11;
if((V18<=90)) goto l14;
l11:V12=134;
l12:if((V12==135)) goto l13;
J=V16;
goto l4;
l5:V2=134;
goto l2;
l7:V1=135;
goto l1;
l8:if((V9<=122)) goto l7;
goto l6;
l13:V14=V16+1;
V16=V14;
goto l9;
l14:V12=135;
goto l12;
l15:if((V18<=122)) goto l14;
goto l11;
l16:V13=134;
goto l10;
}
