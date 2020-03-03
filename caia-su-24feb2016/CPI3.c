#include "dx.h"
void CPI3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V23=0,V22=0,V21=0,V24=0,V31=0,V39=0,V10=0,V12=0,V16=0,V17=0,V42=0;
int X,Q,N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Q=pile[v[22]+1]; N=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V42=X;
l1:pile[v[22]]=117; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,N,V1)*/
V1=pile[WZ2]; 
if((V1<=25000)) goto l2;
pile[WZ1]=412; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,412,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; 
(*f[611])( );     /*ERRINCIDENT0(V2)*/
l2:V23=r[V42];
V22=V23;
if((V21=w[V22][1])==incon) goto l7;
if(V21!=20&&V21!=23) goto l3;
if((V21==23)) goto l5;
if((V21!=20)) goto l7;
V39=s[V42];
if((V39<=sepcte)) goto l6;
if((V39<=sepcte)) goto l7;
if((V23==523)) goto l7;
pile[v[22]]=N; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(N,117,1)*/
pile[v[22]]=V39; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[740])( );     /*CPI2(V39,N,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=V23; pile[WZ2]=jvj+1; 
(*f[741])( );     /*TRI17(jvj+4,V23,jvj+1)*/
l8:V10=r[V42];
if((V10==523)) goto l9;
if((V10==687)) goto l9;
t[x[Q]]=x[jvj+1];
V12=t[V42];
if((V12<=0)) goto l9;
pile[v[22]]=V12; pile[WZ1]=jvj+1; pile[WZ2]=N; 
(*f[742])( );     /*CPI3(V12,jvj+1,N)*/
l9:V16=t[V42];
if((V16<=0)) goto l10;
V17=r[V42];
if((V17==523)) goto l11;
if((V17==687)) goto l11;
l10:v[0]=jvj; v[22]-=3; return;
l3:V24=s[V42];
pile[v[22]]=V23; pile[WZ1]=V24; pile[WZ2]=jvj+1; 
(*f[211])( );     /*TRI6(V23,V24,jvj+1)*/
l4:pile[v[22]]=N; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(N,117,1)*/
goto l8;
l5:if((V23==687)) goto l7;
V31=s[V42];
x[jvj+2]=V31 ;z[jvj+2]=0;
pile[v[22]]=jvj+2; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[743])( );     /*CPEI0(jvj+2,N,jvj+3)*/
pile[v[22]]=V23; pile[WZ1]=jvj+3; pile[WZ2]=jvj+1; 
(*f[216])( );     /*TRI9(V23,jvj+3,jvj+1)*/
goto l4;
l6:pile[v[22]]=V23; pile[WZ1]=V39; pile[WZ2]=jvj+1; 
(*f[211])( );     /*TRI6(V23,V39,jvj+1)*/
goto l4;
l7:x[jvj+1]=250 ;z[jvj+1]=250;
goto l8;
l11:V42=V16;
goto l1;
}
