#include "dx.h"
void INFEG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0;
int A,B,AA,BB;
int RES;

A=pile[v[22]]; B=pile[v[22]+1]; AA=pile[v[22]+2]; BB=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
if((x[A]==25)) goto l1;
if((x[A]==26)) goto l8;
if((x[A]==29)) goto l9;
if((x[A]==30)) goto l12;
if((x[A]==27)) goto l15;
if((x[A]!=28)) goto l20;
if((x[AA]==25)) goto l18;
if((x[AA]==29)) goto l19;
if((x[AA]!=30)) goto l20;
if((B>BB)) goto l3;
l20:v[22]-=5; v[102]=1;return;
l1:if((x[AA]==25)) goto l2;
if((x[AA]==26)) goto l4;
if((x[AA]==29)) goto l5;
if((x[AA]==30)) goto l6;
if((x[AA]==27)) goto l7;
if((x[AA]!=28)) goto l20;
if((B<BB)) goto l3;
goto l20;
l2:if((B!=BB)) goto l3;
goto l20;
l3:x[RES]=135 ;z[RES]=135;
v[22]-=5; v[102]=0;return;
l4:if((B==BB)) goto l3;
goto l20;
l5:if((B>=BB)) goto l3;
goto l20;
l6:if((B>BB)) goto l3;
goto l20;
l7:if((B<=BB)) goto l3;
goto l20;
l8:if((x[AA]!=25)) goto l20;
if((B==BB)) goto l3;
goto l20;
l9:if((x[AA]==25)) goto l10;
if((x[AA]==27)) goto l11;
if((x[AA]!=28)) goto l20;
if((B<=BB)) goto l3;
goto l20;
l10:if((B<=BB)) goto l3;
goto l20;
l11:V1=BB-1;
if((B<=V1)) goto l3;
goto l20;
l12:if((x[AA]==25)) goto l13;
if((x[AA]==27)) goto l14;
if((x[AA]!=28)) goto l20;
if((B<BB)) goto l3;
goto l20;
l13:if((B<BB)) goto l3;
goto l20;
l14:if((B<=BB)) goto l3;
goto l20;
l15:if((x[AA]==25)) goto l16;
if((x[AA]==29)) goto l17;
if((x[AA]!=30)) goto l20;
if((B>=BB)) goto l3;
goto l20;
l16:if((B>=BB)) goto l3;
goto l20;
l17:V2=BB+1;
if((B>=V2)) goto l3;
goto l20;
l18:if((B>BB)) goto l3;
goto l20;
l19:if((B>=BB)) goto l3;
goto l20;
}
