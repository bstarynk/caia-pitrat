#include "dx.h"
void VD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V8=0,V=0,V15=0;
int X;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,X,jvj+1)*/
if((x[jvj+1]!=39)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,X,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+2,jvj+3)*/
if(x[jvj+3]!=10016&&x[jvj+3]!=10144&&x[jvj+3]!=10221) goto l3;
pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(114,X,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+5,jvj+6)*/
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+6,V4)*/
V4=pile[WZ2]; 
if((V4!=0)) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+5,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+7,V8)*/
V8=pile[WZ2]; 
V=V8;
if(V!=(-608)&&V!=(-2266)) goto l2;
V15=x[jvj+5];
pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=V15; 
(*f[134])( );     /*OTA0(114,X,V15)*/
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:v[0]=jvj; v[22]-=1; return;
}
