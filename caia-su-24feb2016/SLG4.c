#include "dx.h"
void SLG4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DK2=0,I=0,DKK=0,DK=0,V1=0,V2=0,JJ=0,V6=0,V5=0,V8=0,V7=0,N=0,V19=0,V10=0,V12=0,V11=0,V13=0,V15=0,V16=0,V17=0;
int J,DK1;
int WZ1,WZ2,WZ3;

J=pile[v[22]]; DK1=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
JJ=incon;
DK2=DK1;
I=0;
DKK=DK1;
if((DKK<=40)) goto l1;
DK=40;
l2:V1=J-I;
V2=76-DK;
if((V1<=V2)) goto l3;
V6=75-DK;
V5=I+V6;
V19=V5;
l8:V10=c[v[1]][V19];
if((V10!=62)) goto l10;
V12=V19-1;
V11=c[v[1]][V12];
if((V11!=61)) goto l10;
V13=V19+1;
JJ=V13;
l4:if((JJ<=I)) goto l5;
N=v[27];
v[27]=v[15];
for(i=1;i<=DK;i++) putc(' ',fx[v[27]]);for(i=I;i<JJ;i++) putc(c[v[1]][i],fx[v[27]]);putc('\n',fx[v[27]]);
v[27]=N;
l5:if(JJ!=incon) goto l6;
l7:v[22]-=2; return;
l1:DK=DKK;
goto l2;
l3:JJ=J;
goto l4;
l6:if((JJ>=J)) goto l7;
pile[v[22]]=JJ; pile[WZ1]=J; pile[WZ2]=DK1; pile[WZ3]=DK2; 
(*f[230])( );     /*SLG1(JJ,J,DK1,DK2)*/
goto l7;
l9:V15=V19+1;
JJ=V15;
goto l4;
l10:if(V10==32||V10==44||V10==59) goto l9;
V16=V19-I;
if((V16>50)) goto l11;
V8=75-DK;
V7=I+V8;
JJ=V7;
goto l4;
l11:V17=V19-1;
V19=V17;
goto l8;
}
