#include "dx.h"
void CPI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,XX=0,X=0,V23=0,V22=0,V21=0,V24=0,V31=0,V39=0,V16=0,V11=0,V12=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=X=incon;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+1; 
(*f[46])( );     /*TRI0(0,117,jvj+1)*/
pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,jvj+1,V1)*/
V1=pile[WZ2]; 
if((V1<=25000)) goto l1;
pile[WZ1]=412; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,412,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; 
(*f[611])( );     /*ERRINCIDENT0(V2)*/
l1:V3=x[A];
XX=V3;
if((XX>=sepcte)) goto l2;
x[R]=x[A] ;z[R]=z[A];
l2:if((XX<sepcte)) goto l3;
X=XX;
l3:if(x[R]==incon) goto l4;
l13:if(X!=incon) goto l14;
l15:v[0]=jvj; v[22]-=2; return;
l4:if(X!=incon) goto l5;
l12:x[R]=250 ;z[R]=250;
goto l13;
l5:V23=r[X];
V22=V23;
if((V21=w[V22][1])==incon) goto l10;
if(V21!=20&&V21!=23) goto l6;
if((V21==23)) goto l8;
if((V21!=20)) goto l10;
V39=s[X];
if((V39<=sepcte)) goto l9;
if((V39<=sepcte)) goto l10;
if((V23==523)) goto l10;
pile[v[22]]=jvj+1; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+1,117,1)*/
pile[v[22]]=V39; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[740])( );     /*CPI2(V39,jvj+1,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=V23; pile[WZ2]=R; 
(*f[741])( );     /*TRI17(jvj+4,V23,R)*/
l14:V11=t[X];
if((V11<=0)) goto l15;
V12=r[X];
if((V12==523)) goto l15;
if((V12==687)) goto l15;
pile[v[22]]=V11; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[742])( );     /*CPI3(V11,R,jvj+1)*/
goto l15;
l6:V24=s[X];
pile[v[22]]=V23; pile[WZ1]=V24; pile[WZ2]=R; 
(*f[211])( );     /*TRI6(V23,V24,R)*/
l7:pile[v[22]]=jvj+1; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+1,117,1)*/
goto l14;
l8:if((V23==687)) goto l10;
V31=s[X];
x[jvj+2]=V31 ;z[jvj+2]=0;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[743])( );     /*CPEI0(jvj+2,jvj+1,jvj+3)*/
pile[v[22]]=V23; pile[WZ1]=jvj+3; pile[WZ2]=R; 
(*f[216])( );     /*TRI9(V23,jvj+3,R)*/
goto l7;
l9:pile[v[22]]=V23; pile[WZ1]=V39; pile[WZ2]=R; 
(*f[211])( );     /*TRI6(V23,V39,R)*/
goto l7;
l10:V16=t[X];
if((V16<=0)) goto l12;
if((V23==523)) goto l11;
if((V23==687)) goto l11;
goto l12;
l11:pile[v[22]]=V16; pile[WZ1]=jvj+1; pile[WZ2]=R; 
(*f[740])( );     /*CPI2(V16,jvj+1,R)*/
goto l14;
}
