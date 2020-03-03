#include "dx.h"
void ORDG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A;
int R;

A=pile[v[22]]; v[22]+=2; 
if((A<=1)) goto l1;
if((A<=9)) goto l2;
if((A<=99)) goto l3;
if((A<=999)) goto l4;
if((A<=9999)) goto l5;
if((A<=99999)) goto l6;
if((A<=999999)) goto l7;
if((A<=9999999)) goto l8;
if((A<=99999999)) goto l9;
if((A<=999999999)) goto l10;
R=10;
l11:v[22]-=2; pile[v[22]+1]=R; return;
l1:R=0;
goto l11;
l2:R=1;
goto l11;
l3:R=2;
goto l11;
l4:R=3;
goto l11;
l5:R=4;
goto l11;
l6:R=5;
goto l11;
l7:R=6;
goto l11;
l8:R=7;
goto l11;
l9:R=8;
goto l11;
l10:R=9;
goto l11;
}
