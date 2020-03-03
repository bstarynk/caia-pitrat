#include "dx.h"
void SRN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int D=0,V4=0,V3=0,Z=0,V12=0,V11=0,V7=0,V6=0,V8=0,V9=0,V1=0,V2=0,V10=0;
int X,I;
int J;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
Z=J=D=incon;
if((X>=10000)) goto l1;
if((X>=1000)) goto l2;
if((X>=100)) goto l3;
if((X>=10)) goto l4;
if((X<0)) goto l11;
if((X>=10)) goto l5;
D=1;
V4=I+1;
J=V4;
l10:V3=X/D;
Z=V3;
l11:x[jvj+1]=211 ;z[jvj+1]=211;
if(Z!=incon) goto l12;
l15:if((X>=0)) goto l16;
c[v[1]][I]=45;
l16:if(J==incon) goto l17;
l19:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l1:if((X>=100000)) goto l6;
D=10000;
goto l10;
l2:if((X>=10000)) goto l5;
D=1000;
goto l10;
l3:if((X>=1000)) goto l5;
D=100;
goto l10;
l4:if((X>=100)) goto l5;
D=10;
goto l10;
l5:if((X>=100000)) goto l6;
goto l11;
l6:if((X<1000000)) goto l7;
if((X<10000000)) goto l8;
if((X<100000000)) goto l9;
if((X>999999999)) goto l11;
D=100000000;
goto l10;
l7:D=100000;
goto l10;
l8:D=1000000;
goto l10;
l9:D=10000000;
goto l10;
l12:V12=Z+48;
V11=V12;
c[v[1]][I]=V11;
if(J==incon) goto l13;
goto l15;
l13:if(D!=incon) goto l14;
goto l15;
l14:if((D<=1)) goto l15;
V7=D*Z;
V6=X-V7;
V8=D/10;
V9=I+1;
pile[v[22]]=V6; pile[WZ1]=V8; pile[WZ2]=V9; pile[WZ3]=jvj+1; 
(*f[633])( );     /*SRN2(V6,V8,V9,jvj+1,J)*/
J=pile[WZ4]; 
goto l15;
l17:if((X<0)) goto l18;
V10=I+1;
c[v[1]][I]=33;
J=V10;
goto l19;
l18:V1=(-X);
V2=I+1;
pile[v[22]]=V1; pile[WZ1]=V2; pile[WZ2]=jvj+1; 
(*f[632])( );     /*SRN1(V1,V2,jvj+1,J)*/
J=pile[WZ3]; 
goto l19;
}
