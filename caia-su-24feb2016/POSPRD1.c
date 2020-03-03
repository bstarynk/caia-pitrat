#include "dx.h"
void POSPRD1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,ZA=0,ZB=0,V3=0,V4=0,V5=0,S=0,V9=0,V8=0,V7=0,V6=0,V13=0,V12=0,V11=0,V10=0;
int A,B;
int RT;
int WZ1;

A=pile[v[22]]; B=pile[v[22]+1]; RT=pile[v[22]+2]; v[22]+=3; 
WZ1=v[22]+1; 
V1=abs(A);
V2=abs(B);
ZA=V1;
ZB=V2;
pile[v[22]]=ZA; 
(*f[990])( );     /*ORDG0(ZA,V3)*/
V3=pile[WZ1]; 
pile[v[22]]=ZB; 
(*f[990])( );     /*ORDG0(ZB,V4)*/
V4=pile[WZ1]; 
V5=V3+V4;
S=V5;
if((S==10)) goto l1;
if((S<=9)) goto l2;
l4:x[RT]=134 ;z[RT]=134;
l5:v[22]-=3; return;
l1:if((ZA<=10000)) goto l3;
V9=ZA/1000;
V8=V9+1;
V7=V8*ZB;
pile[v[22]]=V7; 
(*f[990])( );     /*ORDG0(V7,V6)*/
V6=pile[WZ1]; 
if((V6<=6)) goto l2;
l3:if((ZB<=10000)) goto l4;
V13=ZB/1000;
V12=V13+1;
V11=V12*ZA;
pile[v[22]]=V11; 
(*f[990])( );     /*ORDG0(V11,V10)*/
V10=pile[WZ1]; 
if((V10<=6)) goto l2;
goto l4;
l2:x[RT]=135 ;z[RT]=135;
goto l5;
}
