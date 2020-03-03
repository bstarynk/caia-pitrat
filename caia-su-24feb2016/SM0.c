#include "dx.h"
void SM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,A,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=485)) goto l4;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,A,jvj+7)*/
for(i=x[jvj+7],V3=0;i>0;i=t[i],V3++)  ;
if((V3<4)) goto l4;
x[jvj+4]=0 ;z[jvj+4]=0;
l1:if((x[jvj+7]>0)) goto l2;
for(i=x[jvj+4],V4=0;i>0;i=t[i],V4++)  ;
if((V4<4)) goto l4;
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
l5:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+1]=s[x[jvj+7]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+7];
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]!=484)) goto l3;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+3; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+1,jvj+3)*/
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
l3:x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:x[jvj+8]=0 ;z[jvj+8]=0;
x[R]=x[jvj+8] ;z[R]=z[jvj+8];
goto l5;
}
