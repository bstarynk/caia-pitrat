#include "dx.h"
void TJPLUS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V6=0,XN=0,V9=0,V8=0,V7=0,RX=0,V3=0,V4=0,V5=0,V18=0,V37=0,V36=0,V33=0,V35=0,V24=0,V26=0,V30=0;
int X,ATT,XO;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; ATT=pile[v[22]+1]; XO=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[X];
if((V1>sepcte)) goto l1;
V2=s[x[X]];
if((V2!=66)) goto l1;
pile[v[22]]=X; 
(*f[59])( );     /*LECT0(X)*/
l1:V6=x[XO];
XN=V6;
if((V9=w[x[ATT]][2])==incon) goto l2;
V8=V9;
V7=(-V8);
RX=V7;
V3=z[X];
V4=x[ATT];
V5=x[X];
V18=0;
V37=V5;
V36=V18;
l3:V33=r[V37];
if((V4!=V33)) goto l4;
V35=s[V37];
pile[v[22]]=XN; pile[WZ1]=RX; pile[WZ2]=V35; pile[WZ3]=jvj+1; 
(*f[1128])( );     /*TRI21(XN,RX,V35,jvj+1)*/
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V37;pl[v[14]]=0;av[v[14]]=s[V37];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V37]=x[jvj+1];
l4:if((V36>0)) goto l7;
if((V36!=0)) goto l5;
if((V4>=V33)) goto l5;
pile[v[22]]=XN; pile[WZ1]=RX; pile[WZ2]=jvj+2; 
(*f[213])( );     /*TRI7(XN,RX,jvj+2)*/
V24=s[V37];
V26=t[V37];
pile[v[22]]=V26; pile[WZ1]=V24; pile[WZ2]=V33; pile[WZ3]=jvj+3; 
(*f[210])( );     /*TRI5(V26,V24,V33,jvj+3)*/
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V37;pl[v[14]]=0;av[v[14]]=s[V37];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V37]=x[jvj+2];
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V37;pl[v[14]]=(-1);av[v[14]]=r[V37];ty[v[14]]=0;};r[V37]=V4;
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V37;pl[v[14]]=1;av[v[14]]=t[V37];ty[v[14]]=1;};t[V37]=x[jvj+3];
l5:V30=t[V37];
if((V30==0)) goto l6;
if((V4<=V33)) goto l2;
if((V30<=0)) goto l2;
V36=V37;
V37=V30;
goto l3;
l6:if((V4<=V33)) goto l2;
pile[v[22]]=XN; pile[WZ1]=RX; pile[WZ2]=jvj+4; 
(*f[213])( );     /*TRI7(XN,RX,jvj+4)*/
pile[v[22]]=V4; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[216])( );     /*TRI9(V4,jvj+4,jvj+5)*/
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V37;pl[v[14]]=1;av[v[14]]=t[V37];ty[v[14]]=1;};t[V37]=x[jvj+5];
l2:v[0]=jvj; v[22]-=3; return;
l7:if((V4>=V33)) goto l5;
pile[v[22]]=XN; pile[WZ1]=RX; pile[WZ2]=jvj+6; 
(*f[213])( );     /*TRI7(XN,RX,jvj+6)*/
pile[v[22]]=V37; pile[WZ1]=jvj+6; pile[WZ2]=V4; pile[WZ3]=jvj+7; 
(*f[215])( );     /*TRI8(V37,jvj+6,V4,jvj+7)*/
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V36;pl[v[14]]=1;av[v[14]]=t[V36];ty[v[14]]=1;};t[V36]=x[jvj+7];
goto l5;
}
