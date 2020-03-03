#include "dx.h"
void FACTPREM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,P=0,Q=0,V3=0,V7=0,I=0,V5=0,V4=0,V6=0,V2=0,V8=0,V9=0;
int AA,RR,PP;
int WZ1,WZ2,WZ3;

AA=pile[v[22]]; RR=pile[v[22]+1]; PP=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V9=PP;
l1:if((V9==0)) goto l2;
if((V9<=0)) goto l7;
pile[v[22]]=30; pile[WZ1]=2; pile[WZ2]=AA; 
(*f[1005])( );if(v[102]) goto l5;     /*RACN0(30,2,AA,V3)*/
V3=pile[WZ3]; 
V7=V3/2;
I=V9;
l3:if((I>V7)) goto l5;
V5=2*I;
V4=V5+1;
V6=AA%V4;
if((V6==0)) goto l4;
I++;
goto l3;
l2:V1=AA%2;
if((V1!=0)) goto l8;
P=2;
Q=0;
pile[v[22]]=RR; pile[WZ1]=2; 
(*f[978])( );     /*PLUB3(RR,2)*/
l6:V2=AA/P;
if((V2<=1)) goto l7;
pile[v[22]]=V2; pile[WZ1]=RR; pile[WZ2]=Q; 
(*f[1351])( );     /*FACTPREM1(V2,RR,Q)*/
l7:if((V9==0)) goto l8;
l9:v[22]-=3; return;
l4:P=V4;
Q=I;
pile[v[22]]=RR; pile[WZ1]=V4; 
(*f[978])( );     /*PLUB3(RR,V4)*/
goto l6;
l5:if((AA<=1)) goto l9;
pile[v[22]]=RR; pile[WZ1]=AA; 
(*f[978])( );     /*PLUB3(RR,AA)*/
goto l9;
l8:V8=AA%2;
if((V8==0)) goto l9;
V9=1;
goto l1;
}
