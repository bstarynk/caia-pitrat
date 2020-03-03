#include "dx.h"
void CHILET0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A;
int R;

A=pile[v[22]]; v[22]+=2; 
if((A==0)) goto l1;
if((A==1)) goto l2;
if((A==2)) goto l3;
if((A==3)) goto l4;
if((A==4)) goto l5;
if((A==5)) goto l6;
if((A==6)) goto l7;
if((A==7)) goto l8;
if((A==8)) goto l9;
if((A==9)) goto l10;
if((A==32)) goto l11;
if((A==42)) goto l12;
v[22]-=2; v[102]=1;return;
l1:R=90;
l13:v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l2:R=85;
goto l13;
l3:R=68;
goto l13;
l4:R=84;
goto l13;
l5:R=81;
goto l13;
l6:R=67;
goto l13;
l7:R=83;
goto l13;
l8:R=80;
goto l13;
l9:R=72;
goto l13;
l10:R=78;
goto l13;
l11:R=32;
goto l13;
l12:R=42;
goto l13;
}
