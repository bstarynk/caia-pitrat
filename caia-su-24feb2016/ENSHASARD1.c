#include "dx.h"
void ENSHASARD1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V4=0,V1=0,V5=0,V6=0,V7=0,V29=0,V35=0,V31=0,V30=0,V26=0,V24=0,V28=0,V27=0,V36=0,V38=0,V39=0,V41=0,V37=0,V40=0,V33=0;
int R,A,B,C,K;
int WZ1;

R=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; C=pile[v[22]+3]; K=pile[v[22]+4]; v[22]+=5; 
WZ1=v[22]+1; 
V7=K;
l1:V3=2*A;
V2=V7%V3;
if((V2!=0)) goto l2;
V4=v[49]+1;
v[49]=V4;
l2:if((v[48]!=0)) goto l3;
V29=49;
V30=incon;
V35=v[V29];
V31=V35%1000000;
if((V31>0)) goto l6;
V30=137643;
l5:v[V29]=V30;
V26=C+1;
V24=V26-B;
V28=v[49]%V24;
V27=B+V28;
V1=V27;
pile[v[22]]=R; pile[WZ1]=V1; 
(*f[207])( );     /*PLUE2(R,V1)*/
l3:if((v[48]!=0)) goto l4;
for(i=x[R],V5=0;i>0;i=t[i],V5++)  ;
if((V5>=A)) goto l4;
V6=V7+1;
V7=V6;
goto l1;
l4:v[22]-=5; return;
l6:V33=V31%100000;
V40=V31/100000;
V37=V33*10;
V41=V33/10000;
V39=V40+V41;
V38=V39%10;
V36=V37+V38;
V30=V36;
goto l5;
}
