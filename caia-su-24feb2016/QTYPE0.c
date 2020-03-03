#include "dx.h"
void QTYPE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,A,jvj+4)*/
if((x[jvj+4]==69)) goto l3;
if(x[jvj+4]!=20&&x[jvj+4]!=41&&x[jvj+4]!=89&&x[jvj+4]!=96&&x[jvj+4]!=23&&x[jvj+4]!=1317) goto l4;
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
l6:v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+2]=t[x[jvj+2]];
l1:if((x[jvj+2]<=0)) goto l5;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+3,V3)*/
V3=pile[WZ2]; 
if((V3!=V)) goto l2;
pile[v[22]]=158; pile[WZ2]=R; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(158,jvj+3,R)*/
goto l6;
l3:x[R]=20 ;z[R]=20;
goto l6;
l4:pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,A,V)*/
V=pile[WZ2]; 
x[jvj+1]=vo[15];z[jvj+1]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(283,jvj+1,jvj+2)*/
goto l1;
l5:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
