#include "dx.h"
void CRELIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V3=0,V8=0;
int DP,EX,AT,T,DM,K,DI;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10281;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1343&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
DP=pile[v[22]]; EX=pile[v[22]+1]; AT=pile[v[22]+2]; T=pile[v[22]+3]; DM=pile[v[22]+4]; K=pile[v[22]+5]; DI=pile[v[22]+6]; v[22]+=7; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=x[AT] ;z[jvj+5]=z[AT];
x[jvj+4]=x[EX] ;z[jvj+4]=z[EX];
V9=DP;
l1:if((V9<=DM)) goto l2;
if((DM==(-1))) goto l2;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l2:V3=incon;
if((DI<0)) goto l3;
pile[v[22]]=V9; pile[WZ1]=DI; pile[WZ2]=T; 
(*f[1584])( );if(v[102]) goto l6;     /*EXECUTION1(V9,DI,T,V3)*/
V3=pile[WZ3]; 
l4:if((V3==(-99999998))) goto l6;
x[jvj+2]=incon;
if((x[K]==41)) goto l7;
if((x[K]!=89)) goto l6;
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V3; pile[WZ4]=jvj+2; 
(*f[272])( );     /*QUADRI9(100,89,162,V3,jvj+2)*/
l5:if((x[jvj+2]==(-99999998))) goto l6;
V8=V9+1;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=120; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,120,102,jvj+3,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+4,jvj+5,jvj+6)*/
V9=V8;
x[jvj+4]=x[jvj+6] ;z[jvj+4]=z[jvj+6];
x[jvj+5]=120 ;z[jvj+5]=120;
goto l1;
l3:pile[v[22]]=V9; pile[WZ1]=T; 
(*f[1012])( );if(v[102]) goto l6;     /*EXECUTION0(V9,T,V3)*/
V3=pile[WZ2]; 
goto l4;
l7:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+2; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+2)*/
goto l5;
}
