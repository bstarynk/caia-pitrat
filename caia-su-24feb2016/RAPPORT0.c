#include "dx.h"
void RAPPORT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,V5=0,V6=0,V4=0;
int B,A;
int R;

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
if((B>0)) goto l1;
v[22]-=3; v[102]=1;return;
l1:V1=incon;
if((B<=100000)) goto l2;
if((B<=1000000)) goto l3;
if((B<=10000000)) goto l4;
V1=1;
l9:V5=A*V1;
V2=incon;
if((B<=100000)) goto l5;
if((B<=1000000)) goto l6;
if((B<=10000000)) goto l7;
V2=1000;
l10:V6=B/V2;
V4=V5/V6;
V3=incon;
if((V4!=0)) goto l8;
if((A<=0)) goto l8;
V3=1;
l11:R=V3;
v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
l2:V1=1000;
goto l9;
l3:V1=100;
goto l9;
l4:V1=10;
goto l9;
l5:V2=1;
goto l10;
l6:V2=10;
goto l10;
l7:V2=100;
goto l10;
l8:V3=V4;
goto l11;
}
