#include "dx.h"
void SYMET0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V9=0;
int A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=158; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,A,jvj+1)*/
if((x[jvj+2]=w[x[jvj+1]][3])==incon) goto l3;
pile[v[22]]=A; pile[WZ1]=jvj+2; pile[WZ3]=jvj+3; 
(*f[45])( );if(v[102]) goto l3;     /*FNDZ0(A,jvj+2,V11,jvj+3)*/
V11=pile[WZ2]; 
pile[v[22]]=277; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(277,A,jvj+4)*/
pile[v[22]]=268; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+4,jvj+5)*/
pile[v[22]]=498; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(498,A,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+5,jvj+6,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l3;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+2; pile[WZ3]=jvj+9; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+8,jvj+2,V9,jvj+9)*/
V9=pile[WZ2]; 
if((V9!=V11)) goto l2;
x[R]=x[jvj+8] ;z[R]=z[jvj+8];
v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
