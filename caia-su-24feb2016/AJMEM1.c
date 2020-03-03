#include "dx.h"
void AJMEM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,AA=0,V3=0,YY=0;
int A,H;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; H=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[A];
AA=V1;
pile[v[22]]=120; pile[WZ1]=H; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,H,jvj+1)*/
pile[v[22]]=218; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+1,jvj+2)*/
V3=x[jvj+2];
YY=V3;
if((AA!=YY)) goto l1;
pile[v[22]]=jvj+1; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+1,117,1)*/
l1:if((AA<=YY)) goto l2;
pile[v[22]]=A; pile[WZ1]=jvj+1; 
(*f[1212])( );     /*AJMEM1(A,jvj+1)*/
l2:if((AA>=YY)) goto l4;
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=A; pile[WZ4]=jvj+4; 
(*f[567])( );     /*QUADRI11(117,1,218,A,jvj+4)*/
pile[v[22]]=120; pile[WZ1]=H; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,H,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+4,120,jvj+3)*/
l3:pile[v[22]]=H; pile[WZ1]=120; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(H,120,jvj+4)*/
l4:v[0]=jvj; v[22]-=2; return;
l5:pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=A; pile[WZ4]=jvj+5; 
(*f[567])( );     /*QUADRI11(117,1,218,A,jvj+5)*/
pile[v[22]]=H; pile[WZ1]=120; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(H,120,jvj+5)*/
goto l4;
}
