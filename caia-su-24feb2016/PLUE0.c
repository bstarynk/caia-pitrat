#include "dx.h"
void PLUE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,T=0,V2=0,V3=0,XN=0,XX=0,V7=0,V13=0,V10=0,V9=0,V11=0;
int E,XO;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; XO=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[E];
T=V1;
V2=x[XO];
V3=(-20);
XN=V2;
XX=V3;
if((T>0)) goto l2;
if((T!=0)) goto l1;
pile[v[22]]=XN; pile[WZ1]=XX; pile[WZ2]=jvj+1; 
(*f[213])( );     /*TRI7(XN,XX,jvj+1)*/
x[E]=x[jvj+1];z[E]=0;
l1:v[0]=jvj; v[22]-=2; return;
l2:V7=0;
V13=T;
l3:V10=t[V13];
if((V10==0)) goto l4;
if((V10<=0)) goto l1;
V9=s[V13];
if((XN==V9)) goto l1;
V13=V10;
goto l3;
l4:V11=s[V13];
if((XN==V11)) goto l1;
pile[v[22]]=XN; pile[WZ1]=XX; pile[WZ2]=jvj+2; 
(*f[213])( );     /*TRI7(XN,XX,jvj+2)*/
if(V7>0) s[V7]=68;if(V7==(-1)||(V7>0&&v[122]!=0)) {ou[++v[14]]=V13;pl[v[14]]=1;av[v[14]]=t[V13];ty[v[14]]=1;};t[V13]=x[jvj+2];
goto l1;
}
