#include "dx.h"
void COPELFAIT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V6=0,V9=0,V1=0,V3=0,V10=0,V12=0,V13=0,V14=0;
int X,Q;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Q=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V14=x[Q];
V13=X;
l2:if((V13>0)) goto l3;
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
l5:t[V14]=x[jvj+3];
if((V13>0)) goto l6;
v[0]=jvj; v[22]-=2; return;
l1:V3=s[V13];
V1=V3;
l4:pile[v[22]]=V1; pile[WZ1]=V10; pile[WZ2]=jvj+3; 
(*f[213])( );     /*TRI7(V1,V10,jvj+3)*/
goto l5;
l3:V10=r[V13];
V1=incon;
V5=(-20);
if((V10!=V5)) goto l1;
V6=s[V13];
if((V6<=sepcte)) goto l1;
x[jvj+1]=V6 ;z[jvj+1]=(V6<=sepcte) ? V6 : 0;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+1,jvj+2)*/
V9=x[jvj+2];
V1=V9;
goto l4;
l6:V12=t[V13];
V13=V12;
V14=x[jvj+3];
goto l2;
}
