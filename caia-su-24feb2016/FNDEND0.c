#include "dx.h"
void FNDEND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0,V4=0,V6=0,V17=0,V12=0,V15=0,V13=0,R=0;
int ATT,X;
int RE;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

ATT=pile[v[22]]; X=pile[v[22]+1]; RE=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[X];
if((V1>sepcte)) goto l1;
V2=s[x[X]];
if((V2!=66)) goto l1;
pile[v[22]]=X; 
(*f[59])( );     /*LECT0(X)*/
l1:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,X,jvj+1)*/
if((x[jvj+1]==484)) goto l2;
if((x[jvj+1]!=1050)) goto l3;
pile[v[22]]=X; pile[WZ1]=jvj+2; 
(*f[204])( );     /*NDA0(X,jvj+2)*/
l4:V3=x[ATT];
V4=x[jvj+2];
V17=V4;
l7:V12=r[V17];
if((V12==V3)) goto l8;
if((V12>=V3)) goto l5;
V15=t[V17];
if((V15<=0)) goto l5;
V17=V15;
goto l7;
l2:pile[v[22]]=X; pile[WZ1]=jvj+2; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(X,jvj+2)*/
goto l4;
l3:x[jvj+2]=x[X] ;z[jvj+2]=z[X];
goto l4;
l5:x[jvj+4]=0 ;z[jvj+4]=0;
x[RE]=x[jvj+4] ;z[RE]=z[jvj+4];
l6:v[0]=jvj; v[22]-=3; return;
l8:V13=s[V17];
R=V13;
V6=z[jvj+2];
x[jvj+3]=R;z[jvj+3]=V6;
x[RE]=x[jvj+3] ;z[RE]=z[jvj+3];
goto l6;
}
