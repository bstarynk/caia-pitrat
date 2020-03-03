#include "dx.h"
void LEXW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0;
int AT,EX,S,NA,NB;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

AT=pile[v[22]]; EX=pile[v[22]+1]; S=pile[v[22]+2]; NA=pile[v[22]+3]; NB=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[AT] ;z[jvj+2]=z[AT];
x[jvj+1]=x[EX] ;z[jvj+1]=z[EX];
V3=NA;
l1:if((V3<=NB)) goto l2;
v[0]=jvj; v[22]-=5; return;
l2:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+4; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+4)*/
pile[WZ1]=120; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,120,102,jvj+4,jvj+3)*/
V1=V3+1;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+1,jvj+2,jvj+3)*/
pile[v[22]]=S; pile[WZ1]=667; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(S,667,1)*/
V3=V1;
x[jvj+1]=x[jvj+3] ;z[jvj+1]=z[jvj+3];
x[jvj+2]=120 ;z[jvj+2]=120;
goto l1;
}
