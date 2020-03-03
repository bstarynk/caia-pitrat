#include "dx.h"
void PGCD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0,AA=0,BB=0,XX=0,YY=0,V1=0,H=0;
int B,A;
int R;
int WZ1,WZ2;

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
AA=incon;
V2=abs(A);
V3=abs(B);
AA=V2;
BB=V3;
if((BB<=1)) goto l1;
if((AA<BB)) goto l1;
XX=AA;
YY=BB;
l3:V1=XX%YY;
H=V1;
if((H==0)) goto l4;
if((H<=1)) goto l5;
pile[v[22]]=YY; pile[WZ1]=H; 
(*f[1358])( );     /*PGCD1(YY,H,R)*/
R=pile[WZ2]; 
l8:v[22]-=3; pile[v[22]+2]=R; return;
l1:if((AA<=1)) goto l5;
if((AA<BB)) goto l2;
if(AA!=incon) goto l5;
l7:R=1;
goto l8;
l2:XX=BB;
YY=AA;
goto l3;
l4:R=YY;
goto l8;
l5:if((AA==0)) goto l6;
if((BB!=0)) goto l7;
R=AA;
goto l8;
l6:if((BB==0)) goto l7;
R=BB;
goto l8;
}
