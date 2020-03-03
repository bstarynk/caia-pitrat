#include "dx.h"
void ANTILOG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V4=0,V3=0;
int A;
int R;
int WZ1;

A=pile[v[22]]; v[22]+=2; 
WZ1=v[22]+1; 
if((A<30)) goto l1;
if((A<47)) goto l2;
if((A<60)) goto l3;
if((A<70)) goto l4;
if((A<77)) goto l5;
if((A<84)) goto l6;
if((A<90)) goto l7;
if((A<95)) goto l8;
if((A<100)) goto l9;
if((A<104)) goto l10;
if((A<107)) goto l11;
if((A<111)) goto l12;
if((A<114)) goto l13;
if((A<117)) goto l14;
if((A<120)) goto l15;
if((A<123)) goto l16;
if((A<126)) goto l17;
if((A<128)) goto l18;
if((A<130)) goto l19;
V2=A-10;
pile[v[22]]=V2; 
(*f[986])( );if(v[102]) goto l20;     /*ANTILOG0(V2,V1)*/
V1=pile[WZ1]; 
V4=126*V1;
V3=V4/100;
R=V3;
l21:v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l1:R=1;
goto l21;
l2:R=2;
goto l21;
l3:R=3;
goto l21;
l4:R=4;
goto l21;
l5:R=5;
goto l21;
l6:R=6;
goto l21;
l7:R=7;
goto l21;
l8:R=8;
goto l21;
l9:R=9;
goto l21;
l10:R=10;
goto l21;
l11:R=11;
goto l21;
l12:R=12;
goto l21;
l13:R=13;
goto l21;
l14:R=14;
goto l21;
l15:R=15;
goto l21;
l16:R=16;
goto l21;
l17:R=17;
goto l21;
l18:R=18;
goto l21;
l19:R=19;
goto l21;
l20:v[22]-=2; v[102]=1;return;
}
