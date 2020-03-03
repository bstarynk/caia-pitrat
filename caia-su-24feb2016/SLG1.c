#include "dx.h"
void SLG1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DKK=0,DK=0,V1=0,V2=0,JJ=0,V6=0,V5=0,V8=0,V7=0,N=0,V9=0,V19=0,V10=0,V12=0,V11=0,V13=0,V15=0,V16=0,V17=0;
int I,J,DK1,DK2;

I=pile[v[22]]; J=pile[v[22]+1]; DK1=pile[v[22]+2]; DK2=pile[v[22]+3]; v[22]+=4; 
V9=I;
l10:JJ=incon;
if((V9<=0)) goto l1;
DKK=DK2;
l2:if((DKK<=40)) goto l3;
DK=40;
l4:V1=J-V9;
V2=76-DK;
if((V1<=V2)) goto l5;
V6=75-DK;
V5=V9+V6;
V19=V5;
l11:V10=c[v[1]][V19];
if((V10!=62)) goto l13;
V12=V19-1;
V11=c[v[1]][V12];
if((V11!=61)) goto l13;
V13=V19+1;
JJ=V13;
l6:if((JJ<=V9)) goto l7;
N=v[27];
v[27]=v[15];
for(i=1;i<=DK;i++) putc(' ',fx[v[27]]);for(i=V9;i<JJ;i++) putc(c[v[1]][i],fx[v[27]]);putc('\n',fx[v[27]]);
v[27]=N;
l7:if(JJ!=incon) goto l8;
l9:v[22]-=4; return;
l1:DKK=DK1;
goto l2;
l3:DK=DKK;
goto l4;
l5:JJ=J;
goto l6;
l8:if((JJ>=J)) goto l9;
V9=JJ;
goto l10;
l12:V15=V19+1;
JJ=V15;
goto l6;
l13:if(V10==32||V10==44||V10==59) goto l12;
V16=V19-V9;
if((V16>50)) goto l14;
V8=75-DK;
V7=V9+V8;
JJ=V7;
goto l6;
l14:V17=V19-1;
V19=V17;
goto l11;
}
