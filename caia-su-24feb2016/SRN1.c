#include "dx.h"
void SRN1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int D=0,V3=0,Z=0,V4=0,V7=0,V6=0,V8=0,V9=0,V12=0,V11=0,V13=0,V1=0,V2=0,V10=0,V14=0,V15=0;
int X,I,P;
int J;
int WZ1,WZ2,WZ3,WZ4;

X=pile[v[22]]; I=pile[v[22]+1]; P=pile[v[22]+2]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V15=I;
V14=X;
l22:J=incon;
if((V14>=10000)) goto l1;
if((V14>=1000)) goto l2;
if((V14>=100)) goto l3;
if((V14>=10)) goto l4;
if((V14<0)) goto l14;
if((V14>=10)) goto l5;
D=1;
l10:V3=V14/D;
Z=V3;
if((D==1)) goto l11;
if((D<=1)) goto l12;
V7=D*Z;
V6=V14-V7;
V8=D/10;
V9=V15+1;
pile[v[22]]=V6; pile[WZ1]=V8; pile[WZ2]=V9; pile[WZ3]=P; 
(*f[633])( );     /*SRN2(V6,V8,V9,P,J)*/
J=pile[WZ4]; 
l12:if((x[P]==211)) goto l13;
if((x[P]!=397)) goto l16;
V13=Z+48;
srt[V15]=V13;
l17:if((V14>=0)) goto l18;
srt[V15]=45;
l18:if(J==incon) goto l19;
l21:v[22]-=4; pile[v[22]+3]=J; return;
l1:if((V14>=100000)) goto l6;
D=10000;
goto l10;
l2:if((V14>=10000)) goto l5;
D=1000;
goto l10;
l3:if((V14>=1000)) goto l5;
D=100;
goto l10;
l4:if((V14>=100)) goto l5;
D=10;
goto l10;
l5:if((V14>=100000)) goto l6;
l14:if((x[P]==211)) goto l15;
l16:if((x[P]==397)) goto l17;
goto l18;
l6:if((V14<1000000)) goto l7;
if((V14<10000000)) goto l8;
if((V14<100000000)) goto l9;
if((V14>999999999)) goto l14;
D=100000000;
goto l10;
l7:D=100000;
goto l10;
l8:D=1000000;
goto l10;
l9:D=10000000;
goto l10;
l11:V4=V15+1;
J=V4;
goto l12;
l13:V12=Z+48;
V11=V12;
c[v[1]][V15]=V11;
l15:if((V14>=0)) goto l18;
c[v[1]][V15]=45;
goto l18;
l19:if((V14<0)) goto l20;
V10=V15+1;
c[v[1]][V15]=33;
J=V10;
goto l21;
l20:V1=(-V14);
V2=V15+1;
V14=V1;
V15=V2;
goto l22;
}
