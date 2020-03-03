#include "dx.h"
void POWER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V9=0,V8=0,V5=0,V6=0;
int B,A;
int R;
int WZ1,WZ2;

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((B==0)) goto l3;
if((B==1)) goto l5;
if((B>1)) goto l6;
if((A!=0)) goto l8;
if((B>0)) goto l7;
l11:v[22]-=3; v[102]=1;return;
l1:V1=incon;
V2=B%2;
if((V2==0)) goto l2;
V1=(-1);
l10:R=V1;
l12:v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
l2:V1=1;
goto l10;
l3:if((A!=0)) goto l4;
goto l11;
l4:R=1;
goto l12;
l5:R=A;
goto l12;
l6:if((A==0)) goto l7;
if((A==1)) goto l4;
if((A==(-1))) goto l1;
V9=A;
V8=B;
l13:if((V8==1)) goto l14;
if((V8<=1)) goto l8;
V5=V8-1;
pile[v[22]]=A; pile[WZ1]=V9; 
(*f[1024])( );if(v[102]) goto l8;     /*POSPRD0(A,V9,V6)*/
V6=pile[WZ2]; 
V8=V5;
V9=V6;
goto l13;
l7:R=0;
goto l12;
l8:if((A==1)) goto l9;
if((A==(-1))) goto l1;
goto l11;
l9:if((B!=0)) goto l4;
goto l11;
l14:R=V9;
goto l12;
}
