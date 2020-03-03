#include "dx.h"
void ENTRAINE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A=0,B=0,V1=0,V2=0,C=0,D=0,V3=0,V4=0;
int I,G,J,H;
int RES;

I=pile[v[22]]; G=pile[v[22]+1]; J=pile[v[22]+2]; H=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
B=C=A=D=incon;
if((x[G]==25)) goto l1;
if((x[G]==29)) goto l3;
if((x[G]==30)) goto l4;
if((x[G]==27)) goto l5;
if((x[G]!=28)) goto l7;
A=I;
l6:B=999999;
l7:if((x[H]==25)) goto l8;
if((x[H]==29)) goto l10;
if((x[H]==30)) goto l11;
if((x[H]==27)) goto l12;
if((x[H]!=28)) goto l14;
C=J;
l13:D=999999;
l14:if(B!=incon) goto l15;
l23:if(A!=incon) goto l24;
l27:v[22]-=5; v[102]=1;return;
l1:A=I;
l2:B=I;
goto l7;
l3:V1=I-1;
A=(-999999);
B=V1;
goto l7;
l4:A=(-999999);
goto l2;
l5:V2=I+1;
A=V2;
goto l6;
l8:C=J;
l9:D=J;
goto l14;
l10:V3=J-1;
C=(-999999);
D=V3;
goto l14;
l11:C=(-999999);
goto l9;
l12:V4=J+1;
C=V4;
goto l13;
l15:if(C!=incon) goto l16;
l21:if((x[H]!=26)) goto l23;
if((J>B)) goto l20;
if(A!=incon) goto l22;
goto l27;
l16:if((B<C)) goto l17;
if(A!=incon) goto l18;
goto l21;
l17:x[RES]=134 ;z[RES]=134;
l28:v[22]-=5; v[102]=0;return;
l18:if(D!=incon) goto l19;
goto l21;
l19:if((A<C)) goto l21;
if((B<=D)) goto l20;
goto l21;
l20:x[RES]=135 ;z[RES]=135;
goto l28;
l22:if((J!=A)) goto l24;
if((J==B)) goto l17;
l24:if(D!=incon) goto l25;
l26:if((x[H]!=26)) goto l27;
if((J<A)) goto l20;
goto l27;
l25:if((A>D)) goto l17;
goto l26;
}
