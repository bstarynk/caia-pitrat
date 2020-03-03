#include "dx.h"
void XD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V8=0,V12=0,V16=0,L=0;
int X,N,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; N=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V16=I;
x[jvj+1]=x[N] ;z[jvj+1]=z[N];
l1:x[jvj+6]=incon;
if((x[jvj+1]==120)) goto l8;
pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+1,jvj+2)*/
l4:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+1,jvj+3)*/
pile[v[22]]=X; pile[WZ1]=jvj+3; pile[WZ3]=jvj+5; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(X,jvj+3,V8,jvj+5)*/
V8=pile[WZ2]; 
x[jvj+6]=x[jvj+3] ;z[jvj+6]=z[jvj+3];
l2:pile[v[22]]=X; pile[WZ1]=jvj+3; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l5;     /*FNDZ0(X,jvj+3,V10,jvj+4)*/
V10=pile[WZ2]; 
l6:if(x[jvj+6]==incon) goto l8;
if((x[jvj+6]!=(-99999998))) goto l7;
l8:J=V16;
v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l3:x[jvj+6]=120 ;z[jvj+6]=120;
goto l4;
l5:x[jvj+6]=120 ;z[jvj+6]=120;
l7:pile[v[22]]=X; pile[WZ1]=jvj+6; pile[WZ3]=jvj+7; 
(*f[45])( );if(v[102]) goto l8;     /*FNDZ0(X,jvj+6,V12,jvj+7)*/
V12=pile[WZ2]; 
x[jvj+8]=V12 ;z[jvj+8]=(x[jvj+7]==20&&V12<=sepcte) ? V12 : (x[jvj+7]==41) ? (-1000) : 0;
pile[v[22]]=V16; pile[WZ1]=jvj+8; 
(*f[344])( );if(v[102]) goto l8;     /*XX1(V16,jvj+8,L)*/
L=pile[WZ2]; 
x[jvj+1]=x[jvj+6] ;z[jvj+1]=z[jvj+6];
V16=L;
goto l1;
}
