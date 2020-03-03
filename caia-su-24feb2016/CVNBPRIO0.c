#include "dx.h"
void CVNBPRIO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,M=0;
int N;
int S,P;

N=pile[v[22]]; S=pile[v[22]+1]; P=pile[v[22]+2]; v[22]+=3; 
if((N<0)) goto l1;
x[S]=36 ;z[S]=36;
M=N;
l2:if((M>8)) goto l3;
if((M==0)) goto l10;
if((M<=0)) goto l11;
if((M>8)) goto l11;
x[P]=1204 ;z[P]=1204;
l12:v[22]-=3; return;
l1:V1=(-N);
M=V1;
x[S]=52 ;z[S]=52;
goto l2;
l3:if((M<=16)) goto l4;
if((M<=32)) goto l5;
if((M<=64)) goto l6;
if((M<=125)) goto l7;
if((M<=250)) goto l8;
if((M<=500)) goto l9;
x[P]=607 ;z[P]=607;
goto l12;
l4:x[P]=606 ;z[P]=606;
goto l12;
l5:x[P]=605 ;z[P]=605;
goto l12;
l6:x[P]=604 ;z[P]=604;
goto l12;
l7:x[P]=206 ;z[P]=206;
goto l12;
l8:x[P]=603 ;z[P]=603;
goto l12;
l9:x[P]=602 ;z[P]=602;
goto l12;
l10:x[P]=985 ;z[P]=985;
goto l12;
l11:x[P]=1051 ;z[P]=1051;
goto l12;
}
