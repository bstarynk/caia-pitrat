#include "dx.h"
void FNDOND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0,V1=0,V11=0,V6=0,V7=0,V21=0,V16=0,V19=0,V17=0,RN=0;
int ATT,X;
int RO;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

ATT=pile[v[22]]; X=pile[v[22]+1]; RO=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[X];
if((V1>sepcte)) goto l1;
V2=s[x[X]];
if((V2!=66)) goto l1;
V3=x[ATT];
if((V3<=4)) goto l1;
pile[v[22]]=X; 
(*f[59])( );     /*LECT0(X)*/
l1:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,X,jvj+1)*/
if((x[jvj+1]==484)) goto l2;
if((x[jvj+1]!=1050)) goto l3;
pile[v[22]]=X; pile[WZ1]=jvj+2; 
(*f[204])( );     /*NDA0(X,jvj+2)*/
l7:V6=x[ATT];
V7=x[jvj+2];
V21=V7;
l10:V16=r[V21];
if((V16==V6)) goto l11;
if((V16>=V6)) goto l9;
V19=t[V21];
if((V19<=0)) goto l9;
V21=V19;
goto l10;
l2:pile[v[22]]=X; pile[WZ1]=jvj+2; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(X,jvj+2)*/
goto l7;
l3:x[jvj+2]=x[X] ;z[jvj+2]=z[X];
goto l7;
l5:V11=z[jvj+2];
x[jvj+5]=RN;z[jvj+5]=V11;
x[jvj+3]=x[jvj+5] ;z[jvj+3]=z[jvj+5];
l8:x[RO]=x[jvj+3] ;z[RO]=z[jvj+3];
v[0]=jvj; v[22]-=3; v[102]=0;return;
l6:x[jvj+6]=RN;z[jvj+6]=RN;
x[jvj+3]=x[jvj+6] ;z[jvj+3]=z[jvj+6];
goto l8;
l9:v[0]=jvj; v[22]-=3; v[102]=1;return;
l11:V17=s[V21];
RN=V17;
x[jvj+3]=incon;
if((x[ATT]!=1)) goto l4;
x[jvj+4]=RN;z[jvj+4]=0;
x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
l4:if((RN>sepcte)) goto l5;
if(x[jvj+3]==incon) goto l6;
goto l8;
}
