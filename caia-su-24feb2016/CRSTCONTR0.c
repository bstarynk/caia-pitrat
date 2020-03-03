#include "dx.h"
void CRSTCONTR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int G,I;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

G=pile[v[22]]; I=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[G] ;z[jvj+1]=z[G];
l1:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+1,jvj+2)*/
pile[v[22]]=244; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(244,jvj+2,V2)*/
V2=pile[WZ2]; 
if((I!=V2)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,117,1)*/
l2:if((I<=V2)) goto l3;
pile[v[22]]=I; pile[WZ1]=244; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(I,244,jvj+5)*/
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=120; pile[WZ3]=jvj+2; pile[WZ4]=jvj+5; pile[WZ5]=jvj+4; 
(*f[725])( );     /*QUADRI14(117,1,120,jvj+2,jvj+5,jvj+4)*/
pile[v[22]]=jvj+1; pile[WZ1]=120; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+1,120,jvj+4)*/
l3:if((I>=V2)) goto l4;
x[jvj+1]=x[jvj+2] ;z[jvj+1]=z[jvj+2];
goto l1;
l5:pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=244; pile[WZ3]=I; pile[WZ4]=jvj+3; 
(*f[391])( );     /*QUADRI10(117,1,244,I,jvj+3)*/
pile[v[22]]=jvj+1; pile[WZ1]=120; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+1,120,jvj+3)*/
l4:v[0]=jvj; v[22]-=2; return;
}
