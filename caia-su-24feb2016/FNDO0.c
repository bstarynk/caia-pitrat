#include "dx.h"
void FNDO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0,V1=0,V11=0,V6=0,V7=0,V17=0,V12=0,V15=0,V13=0,RN=0;
int ATT,X;
int RO;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

ATT=pile[v[22]]; X=pile[v[22]+1]; RO=pile[v[22]+2]; v[22]+=3; 
V1=x[X];
if((V1>sepcte)) goto l4;
V2=s[x[X]];
if((V2!=66)) goto l4;
V3=x[ATT];
if((V3<=4)) goto l4;
pile[v[22]]=X; 
(*f[59])( );     /*LECT0(X)*/
l4:V6=x[ATT];
V7=x[X];
V17=V7;
l7:V12=r[V17];
if((V12==V6)) goto l8;
if((V12>=V6)) goto l6;
V15=t[V17];
if((V15<=0)) goto l6;
V17=V15;
goto l7;
l2:V11=z[X];
x[jvj+3]=RN;z[jvj+3]=V11;
x[jvj+1]=x[jvj+3] ;z[jvj+1]=z[jvj+3];
l5:x[RO]=x[jvj+1] ;z[RO]=z[jvj+1];
v[0]=jvj; v[22]-=3; v[102]=0;return;
l3:x[jvj+4]=RN;z[jvj+4]=RN;
x[jvj+1]=x[jvj+4] ;z[jvj+1]=z[jvj+4];
goto l5;
l6:v[0]=jvj; v[22]-=3; v[102]=1;return;
l8:V13=s[V17];
RN=V13;
x[jvj+1]=incon;
if((x[ATT]!=1)) goto l1;
x[jvj+2]=RN;z[jvj+2]=0;
x[jvj+1]=x[jvj+2] ;z[jvj+1]=z[jvj+2];
l1:if((RN>sepcte)) goto l2;
if(x[jvj+1]==incon) goto l3;
goto l5;
}
