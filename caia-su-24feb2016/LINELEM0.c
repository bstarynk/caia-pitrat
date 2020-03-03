#include "dx.h"
void LINELEM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0;
int A;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; RES=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]==41)) goto l1;
if((x[jvj+1]!=484)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]==21)) goto l1;
l2:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,A,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=486)) goto l7;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,A,jvj+6)*/
for(i=x[jvj+6],V8=0;i>0;i=t[i],V8++)  ;
if((V8!=2)) goto l7;
x[jvj+13]=x[jvj+6] ;z[jvj+13]=z[jvj+6];
l3:if((x[jvj+13]<=0)) goto l7;
x[jvj+7]=s[x[jvj+13]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+13];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=41)) goto l4;
x[jvj+14]=x[jvj+6] ;z[jvj+14]=z[jvj+6];
l5:if((x[jvj+14]<=0)) goto l4;
x[jvj+9]=s[x[jvj+14]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+14];
if((x[jvj+7]==x[jvj+9])) goto l6;
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+9,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]==21)) goto l1;
l6:x[jvj+14]=t[x[jvj+14]];
goto l5;
l1:x[RES]=135 ;z[RES]=135;
l8:v[0]=jvj; v[22]-=2; return;
l4:x[jvj+13]=t[x[jvj+13]];
goto l3;
l7:x[RES]=134 ;z[RES]=134;
goto l8;
}
