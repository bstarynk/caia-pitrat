#include "dx.h"
void PGCD1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,H=0,V2=0,V3=0;
int XX,YY;
int R;

XX=pile[v[22]]; YY=pile[v[22]+1]; v[22]+=3; 
V3=YY;
V2=XX;
l1:V1=V2%V3;
H=V1;
if((H==0)) goto l2;
if((H>1)) goto l4;
R=1;
l3:v[22]-=3; pile[v[22]+2]=R; return;
l2:R=V3;
goto l3;
l4:V2=V3;
V3=H;
goto l1;
}
