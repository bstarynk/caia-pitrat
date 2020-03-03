#include "dx.h"
void CALCARDANT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V15=0;
int X;
int RK;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,X,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=26)) goto l1;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=26)) goto l4;
x[jvj+5]=d[20];z[jvj+5]=0;
l2:if((x[jvj+5]<=0)) goto l4;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+6,X,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=484)) goto l3;
pile[v[22]]=268; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+6,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+9,X,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=41)) goto l3;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+12; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+7,jvj+12)*/
pile[v[22]]=365; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(365,jvj+12,jvj+13)*/
for(i=x[jvj+13],V3=0;i>0;i=t[i],V3++)  ;
if((V3<=0)) goto l3;
V15=V3-1;
RK=V15;
l5:v[0]=jvj; v[22]-=2; pile[v[22]+1]=RK; return;
l1:RK=1;
goto l5;
l3:x[jvj+5]=t[x[jvj+5]];
goto l2;
l4:RK=1000;
goto l5;
}
