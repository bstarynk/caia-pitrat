#include "dx.h"
void CHGC5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V6=0,XN=0,V3=0,V4=0,V5=0,V16=0,V31=0,V30=0,V21=0,V22=0,V23=0,V25=0,V28=0;
int X,ATT,XT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; ATT=pile[v[22]+1]; XT=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[X];
if((V1>sepcte)) goto l1;
V2=s[x[X]];
if((V2!=66)) goto l1;
pile[v[22]]=X; 
(*f[59])( );     /*LECT0(X)*/
l1:V6=XT;
XN=V6;
V3=z[X];
V4=x[X];
V5=x[ATT];
V16=0;
V31=V4;
V30=V16;
l3:V21=r[V31];
if((V21!=V5)) goto l4;
V22=s[V31];
if((V22==XN)) goto l4;
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V31;pl[v[14]]=0;av[v[14]]=s[V31];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V31]=XN;
l4:if((V30>0)) goto l7;
if((V30!=0)) goto l5;
if((V21<=V5)) goto l5;
V23=s[V31];
V25=t[V31];
pile[v[22]]=V25; pile[WZ1]=V23; pile[WZ2]=V21; pile[WZ3]=jvj+1; 
(*f[210])( );     /*TRI5(V25,V23,V21,jvj+1)*/
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V31;pl[v[14]]=0;av[v[14]]=s[V31];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V31]=XN;
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V31;pl[v[14]]=(-1);av[v[14]]=r[V31];ty[v[14]]=0;};r[V31]=V5;
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V31;pl[v[14]]=1;av[v[14]]=t[V31];ty[v[14]]=1;};t[V31]=x[jvj+1];
l5:V28=t[V31];
if((V28==0)) goto l6;
if((V21>=V5)) goto l2;
if((V28<=0)) goto l2;
V30=V31;
V31=V28;
goto l3;
l6:if((V21>=V5)) goto l2;
pile[v[22]]=V5; pile[WZ1]=XN; pile[WZ2]=jvj+2; 
(*f[211])( );     /*TRI6(V5,XN,jvj+2)*/
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V31;pl[v[14]]=1;av[v[14]]=t[V31];ty[v[14]]=1;};t[V31]=x[jvj+2];
l2:v[0]=jvj; v[22]-=3; return;
l7:if((V21<=V5)) goto l5;
pile[v[22]]=V31; pile[WZ1]=XN; pile[WZ2]=V5; pile[WZ3]=jvj+3; 
(*f[210])( );     /*TRI5(V31,XN,V5,jvj+3)*/
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V30;pl[v[14]]=1;av[v[14]]=t[V30];ty[v[14]]=1;};t[V30]=x[jvj+3];
goto l5;
}
