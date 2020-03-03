#include "dx.h"
void VALREL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,V2=0,V7=0,V6=0,V14=0,V13=0;
int DY;
int DZ,SZ;

DY=pile[v[22]]; SZ=pile[v[22]+2]; v[22]+=3; 
V1=bh[v[1]][DY];
if((V1==61)) goto l1;
if((V1==35)) goto l6;
if((V1==62)) goto l7;
if((V1!=60)) goto l14;
V14=DY+1;
V13=bh[v[1]][V14];
if((V13==61)) goto l11;
if(V13!=61&&V13!=60) goto l13;
if((V13!=60)) goto l14;
x[SZ]=996 ;z[SZ]=996;
l12:DZ=V14;
l15:v[22]-=3; pile[v[22]+1]=DZ; v[102]=0;return;
l1:V3=DY+1;
V2=bh[v[1]][V3];
if(V2!=62&&V2!=61&&V2!=58) goto l2;
if((V2==61)) goto l4;
if((V2!=58)) goto l14;
x[SZ]=962 ;z[SZ]=962;
l5:DZ=V3;
goto l15;
l2:x[SZ]=25 ;z[SZ]=25;
l3:DZ=DY;
goto l15;
l4:x[SZ]=1012 ;z[SZ]=1012;
goto l5;
l6:x[SZ]=26 ;z[SZ]=26;
goto l3;
l7:V7=DY+1;
V6=bh[v[1]][V7];
if((V6==61)) goto l8;
if(V6!=61&&V6!=62) goto l10;
if((V6!=62)) goto l14;
x[SZ]=995 ;z[SZ]=995;
l9:DZ=V7;
goto l15;
l8:x[SZ]=28 ;z[SZ]=28;
goto l9;
l10:x[SZ]=27 ;z[SZ]=27;
goto l3;
l11:x[SZ]=30 ;z[SZ]=30;
goto l12;
l13:x[SZ]=29 ;z[SZ]=29;
goto l3;
l14:DZ=x[SZ]=incon;
v[22]-=3; v[102]=1;return;
}
