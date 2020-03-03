#include "dx.h"
void COUPENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,X=0,V4=0,BB=0,V6=0,V7=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=incon;
x[jvj+4]=0 ;z[jvj+4]=0;
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
V2=x[A];
X=V2;
if((X<=0)) goto l1;
V4=s[X];
x[jvj+5]=V4 ;z[jvj+5]=(V4<=sepcte) ? V4 : 0;
x[jvj+1]=x[jvj+5] ;z[jvj+1]=z[jvj+5];
l1:BB=B;
if(x[jvj+1]!=incon) goto l2;
l3:v[0]=jvj; v[22]-=3; return;
l2:if((BB!=B)) goto l3;
V6=B-1;
V7=t[X];
pile[v[22]]=20; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[409])( );     /*TRI14(20,jvj+1,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=128; pile[WZ2]=jvj+3; 
(*f[300])( );     /*TRI10(jvj+2,128,jvj+3)*/
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(R,jvj+3)*/
pile[v[22]]=V6; pile[WZ1]=B; pile[WZ2]=R; pile[WZ3]=jvj+3; pile[WZ4]=V7; 
(*f[2182])( );     /*COUPENS1(V6,B,R,jvj+3,V7)*/
goto l3;
}
