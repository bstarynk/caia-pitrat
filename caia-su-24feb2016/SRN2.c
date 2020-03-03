#include "dx.h"
void SRN2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,Z=0,V4=0,V1=0,V2=0,V7=0,V6=0,V8=0,V9=0,V10=0,V12=0,V11=0,V13=0;
int X,D,I,P;
int J;
int WZ1,WZ2,WZ3,WZ4;

X=pile[v[22]]; D=pile[v[22]+1]; I=pile[v[22]+2]; P=pile[v[22]+3]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V3=X/D;
Z=V3;
if((D==1)) goto l1;
if((X<0)) goto l2;
if((D>1)) goto l3;
V10=I+1;
c[v[1]][I]=33;
J=V10;
l4:if((x[P]==211)) goto l5;
if((x[P]==397)) goto l6;
if((x[P]==397)) goto l7;
l8:v[22]-=5; pile[v[22]+4]=J; return;
l1:V4=I+1;
J=V4;
goto l4;
l2:V1=(-X);
V2=I+1;
pile[v[22]]=V1; pile[WZ1]=V2; pile[WZ2]=P; 
(*f[632])( );     /*SRN1(V1,V2,P,J)*/
J=pile[WZ3]; 
goto l4;
l3:V7=D*Z;
V6=X-V7;
V8=D/10;
V9=I+1;
pile[v[22]]=V6; pile[WZ1]=V8; pile[WZ2]=V9; pile[WZ3]=P; 
(*f[633])( );     /*SRN2(V6,V8,V9,P,J)*/
J=pile[WZ4]; 
goto l4;
l5:V12=Z+48;
V11=V12;
c[v[1]][I]=V11;
if((X>=0)) goto l8;
c[v[1]][I]=45;
goto l8;
l6:V13=Z+48;
srt[I]=V13;
l7:if((X>=0)) goto l8;
srt[I]=45;
goto l8;
}
