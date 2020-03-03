#include "dx.h"
void CPI1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V22=0,V21=0,V20=0,V23=0,V30=0,V38=0,V15=0,V10=0,V11=0;
int X;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
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
l1:V22=r[X];
V21=V22;
if((V20=w[V21][1])==incon) goto l6;
if(V20!=20&&V20!=23) goto l2;
if((V20==23)) goto l4;
if((V20!=20)) goto l6;
V38=s[X];
if((V38<=sepcte)) goto l5;
if((V38<=sepcte)) goto l6;
if((V22==523)) goto l6;
pile[v[22]]=jvj+1; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+1,117,1)*/
pile[v[22]]=V38; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[740])( );     /*CPI2(V38,jvj+1,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=V22; pile[WZ2]=R; 
(*f[741])( );     /*TRI17(jvj+4,V22,R)*/
l9:V10=t[X];
if((V10<=0)) goto l10;
V11=r[X];
if((V11==523)) goto l10;
if((V11==687)) goto l10;
pile[v[22]]=V10; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[742])( );     /*CPI3(V10,R,jvj+1)*/
l10:v[0]=jvj; v[22]-=2; return;
l2:V23=s[X];
pile[v[22]]=V22; pile[WZ1]=V23; pile[WZ2]=R; 
(*f[211])( );     /*TRI6(V22,V23,R)*/
l3:pile[v[22]]=jvj+1; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+1,117,1)*/
goto l9;
l4:if((V22==687)) goto l6;
V30=s[X];
x[jvj+2]=V30 ;z[jvj+2]=0;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[743])( );     /*CPEI0(jvj+2,jvj+1,jvj+3)*/
pile[v[22]]=V22; pile[WZ1]=jvj+3; pile[WZ2]=R; 
(*f[216])( );     /*TRI9(V22,jvj+3,R)*/
goto l3;
l5:pile[v[22]]=V22; pile[WZ1]=V38; pile[WZ2]=R; 
(*f[211])( );     /*TRI6(V22,V38,R)*/
goto l3;
l6:V15=t[X];
if((V15<=0)) goto l8;
if((V22==523)) goto l7;
if((V22==687)) goto l7;
l8:x[R]=250 ;z[R]=250;
goto l9;
l7:pile[v[22]]=V15; pile[WZ1]=jvj+1; pile[WZ2]=R; 
(*f[740])( );     /*CPI2(V15,jvj+1,R)*/
goto l9;
}
