#include "dx.h"
void POURMILLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,V4=0,V6=0,V7=0,V5=0;
int B,A;
int R;

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
V4=A+B;
if((V4>0)) goto l1;
v[22]-=3; v[102]=1;return;
l1:V1=incon;
if((V4<=100000)) goto l2;
if((V4<=1000000)) goto l3;
if((V4<=10000000)) goto l4;
V1=1;
l12:V6=A*V1;
V2=incon;
if((V4<=100000)) goto l5;
if((V4<=1000000)) goto l6;
if((V4<=10000000)) goto l7;
V2=1000;
l13:V7=V4/V2;
V5=V6/V7;
V3=incon;
if((V5==0)) goto l8;
if((V5<1000)) goto l9;
if((A>=V4)) goto l9;
V3=999;
l14:R=V3;
v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
l2:V1=1000;
goto l12;
l3:V1=100;
goto l12;
l4:V1=10;
goto l12;
l5:V2=1;
goto l13;
l6:V2=10;
goto l13;
l7:V2=100;
goto l13;
l8:if((A<=0)) goto l9;
V3=1;
l9:if((A!=V4)) goto l10;
if((V5<=1000)) goto l10;
V3=1000;
goto l14;
l10:if(V3==incon) goto l11;
goto l14;
l11:V3=V5;
goto l14;
}
