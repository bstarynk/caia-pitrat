#include "dx.h"
void EVLII0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0;
int B,A,C;
int Z;

B=pile[v[22]]; A=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=4; 
if((A==(-2499))) goto l1;
if((A==(-2500))) goto l2;
if((A==(-2590))) goto l3;
if((A==(-5998))) goto l4;
if((A==(-6028))) goto l5;
if((A==(-8092))) goto l6;
if((A==(-9055))) goto l7;
if((A==(-9056))) goto l8;
if((A==(-10008))) goto l9;
v[22]-=4; v[102]=1;return;
l1:V1=bh[B][C];
Z=V1;
l10:v[22]-=4; pile[v[22]+3]=Z; v[102]=0;return;
l2:V2=c[B][C];
Z=V2;
goto l10;
l3:V3=w[B][C];
Z=V3;
goto l10;
l4:V4=vnd[B][C];
Z=V4;
goto l10;
l5:V5=tnd[B][C];
Z=V5;
goto l10;
l6:V6=sk[B][C];
Z=V6;
goto l10;
l7:V7=h[B][C];
Z=V7;
goto l10;
l8:V8=u[B][C];
Z=V8;
goto l10;
l9:V9=cmt[B][C];
Z=V9;
goto l10;
}
