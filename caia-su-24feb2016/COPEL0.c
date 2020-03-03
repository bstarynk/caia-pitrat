#include "dx.h"
void COPEL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,X=0,V6=0,V7=0,V10=0,V2=0,V4=0,V11=0,V13=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[A];
X=V1;
if((X>0)) goto l2;
x[jvj+3]=0 ;z[jvj+3]=0;
x[R]=x[jvj+3] ;z[R]=z[jvj+3];
l4:v[0]=jvj; v[22]-=2; return;
l1:V4=s[X];
V2=V4;
l3:pile[v[22]]=V2; pile[WZ1]=V11; pile[WZ2]=R; 
(*f[213])( );     /*TRI7(V2,V11,R)*/
V13=t[X];
pile[v[22]]=V13; pile[WZ1]=R; 
(*f[681])( );     /*COPEL1(V13,R)*/
goto l4;
l2:V11=r[X];
V2=incon;
V6=(-20);
if((V11!=V6)) goto l1;
V7=s[X];
if((V7<=sepcte)) goto l1;
x[jvj+1]=V7 ;z[jvj+1]=(V7<=sepcte) ? V7 : 0;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+2)*/
V10=x[jvj+2];
V2=V10;
goto l3;
}
