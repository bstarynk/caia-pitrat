#include "dx.h"
void ENCHAINE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V1=0,V4=0,V3=0,V6=0,V10=0;
int AT,I,E,T,D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

AT=pile[v[22]]; I=pile[v[22]+1]; E=pile[v[22]+2]; T=pile[v[22]+3]; D=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[T] ;z[jvj+3]=z[T];
V10=I;
x[jvj+4]=x[AT] ;z[jvj+4]=z[AT];
l5:x[jvj+7]=x[E] ;z[jvj+7]=z[E];
l3:if((x[jvj+7]>0)) goto l4;
v[0]=jvj; v[22]-=5; return;
l1:pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(jvj+1,jvj+2)*/
for(i=x[jvj+2],V5=0;i>0;i=t[i],V5++)  ;
V1=V5;
l7:if((V1==(-99999998))) goto l6;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V1; pile[WZ4]=jvj+6; 
(*f[192])( );     /*QUADRI4(100,41,130,V1,jvj+6)*/
pile[WZ1]=120; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,120,102,jvj+6,jvj+5)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(jvj+3,jvj+4,jvj+5)*/
V6=V10+1;
x[jvj+4]=120 ;z[jvj+4]=120;
V10=V6;
x[jvj+3]=x[jvj+5] ;z[jvj+3]=z[jvj+5];
goto l5;
l2:V1=(-99999998);
l6:x[jvj+7]=t[x[jvj+7]];
goto l3;
l4:x[jvj+1]=s[x[jvj+7]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+7];
pile[v[22]]=642; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+1,V3)*/
V3=pile[WZ2]; 
if((V3!=V10)) goto l6;
V1=incon;
if((D==2)) goto l1;
if((D!=1)) goto l2;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+1,V4)*/
V4=pile[WZ2]; 
V1=V4;
goto l7;
}
