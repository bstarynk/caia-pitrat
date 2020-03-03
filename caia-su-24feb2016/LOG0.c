#include "dx.h"
void LOG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0;
int A;
int R;
int WZ1;

A=pile[v[22]]; v[22]+=2; 
WZ1=v[22]+1; 
if((A==1)) goto l1;
if((A==2)) goto l2;
if((A==3)) goto l3;
if((A==4)) goto l4;
if((A==5)) goto l5;
if((A<6)) goto l18;
if((A<=7)) goto l6;
if((A<=9)) goto l7;
if((A<=12)) goto l8;
if((A<=15)) goto l9;
if((A<=19)) goto l10;
if((A<=24)) goto l11;
if((A<=31)) goto l12;
if((A<=39)) goto l13;
if((A<=49)) goto l14;
if((A<=63)) goto l15;
if((A<=79)) goto l16;
if((A<=99)) goto l17;
V2=A/10;
pile[v[22]]=V2; 
(*f[850])( );if(v[102]) goto l18;     /*LOG0(V2,V1)*/
V1=pile[WZ1]; 
V3=10+V1;
R=V3;
l19:v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l1:R=0;
goto l19;
l2:R=3;
goto l19;
l3:R=5;
goto l19;
l4:R=6;
goto l19;
l5:R=7;
goto l19;
l6:R=8;
goto l19;
l7:R=9;
goto l19;
l8:R=10;
goto l19;
l9:R=11;
goto l19;
l10:R=12;
goto l19;
l11:R=13;
goto l19;
l12:R=14;
goto l19;
l13:R=15;
goto l19;
l14:R=16;
goto l19;
l15:R=17;
goto l19;
l16:R=18;
goto l19;
l17:R=19;
goto l19;
l18:v[22]-=2; v[102]=1;return;
}
