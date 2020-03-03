#include "dx.h"
void DEPH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,D=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,A,jvj+5)*/
if((x[jvj+5]==41)) goto l6;
if((x[jvj+5]==484)) goto l6;
l7:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,A,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==486)) goto l8;
if((x[jvj+7]!=485)) goto l9;
pile[v[22]]=A; 
(*f[897])( );if(v[102]) goto l9;     /*DGR0(A,D)*/
D=pile[WZ1]; 
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,A,jvj+9)*/
l2:if((x[jvj+9]<=0)) goto l6;
x[jvj+1]=s[x[jvj+9]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+9];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[898])( );if(v[102]) goto l9;     /*DEPH0(jvj+1,jvj+2)*/
if((x[jvj+2]==135)) goto l1;
l9:v[0]=jvj; v[22]-=2; v[102]=1;return;
l1:pile[v[22]]=jvj+1; 
(*f[897])( );if(v[102]) goto l3;     /*DGR0(jvj+1,V5)*/
V5=pile[WZ1]; 
if((V5!=D)) goto l9;
l3:x[jvj+9]=t[x[jvj+9]];
goto l2;
l5:x[jvj+8]=t[x[jvj+8]];
l4:if((x[jvj+8]<=0)) goto l6;
x[jvj+3]=s[x[jvj+8]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+8];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[898])( );if(v[102]) goto l9;     /*DEPH0(jvj+3,jvj+4)*/
if((x[jvj+4]==135)) goto l5;
goto l9;
l6:x[R]=135 ;z[R]=135;
v[0]=jvj; v[22]-=2; v[102]=0;return;
l8:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,A,jvj+8)*/
goto l4;
}
