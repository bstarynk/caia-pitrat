#include "dx.h"
void ENLY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,V4=0,V6=0,V7=0,V10=0,V13=0,V14=0,V15=0,V18=0,V20=0,V21=0;
int N,P,X,ATT;
int Z,Q;

N=pile[v[22]]; P=pile[v[22]+1]; X=pile[v[22]+2]; ATT=pile[v[22]+3]; v[22]+=6; 
V21=X;
V20=P;
l1:if((V21>sepcte)) goto l2;
V1=s[x[N]];
if((V1!=66)) goto l2;
pile[v[22]]=N; 
(*f[59])( );     /*LECT0(N)*/
l2:if((V20!=0)) goto l3;
V2=r[V21];
if((V2!=ATT)) goto l3;
if((V21<=0)) goto l3;
V3=t[V21];
if((V3<=0)) goto l3;
V4=s[V3];
V6=z[N];
V7=r[V3];
V10=t[V3];
if(V6>0) s[V6]=68;if(V6==(-1)||(V6>0&&v[122]!=0)) {ou[++v[14]]=V21;pl[v[14]]=0;av[v[14]]=s[V21];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V21]=V4;
if(V6>0) s[V6]=68;if(V6==(-1)||(V6>0&&v[122]!=0)) {ou[++v[14]]=V21;pl[v[14]]=(-1);av[v[14]]=r[V21];ty[v[14]]=0;};r[V21]=V7;
if(V6>0) s[V6]=68;if(V6==(-1)||(V6>0&&v[122]!=0)) {ou[++v[14]]=V21;pl[v[14]]=1;av[v[14]]=t[V21];ty[v[14]]=1;};t[V21]=V10;
Q=0;
Z=V21;
l7:v[22]-=6; pile[v[22]+4]=Z; pile[v[22]+5]=Q; return;
l3:V13=r[V21];
if((V13==ATT)) goto l4;
if((V21>0)) goto l5;
l6:Z=V21;
Q=V20;
goto l7;
l4:if((V21<=0)) goto l6;
if((V20<=0)) goto l5;
V14=t[V21];
V15=z[N];
if(V15>0) s[V15]=68;if(V15==(-1)||(V15>0&&v[122]!=0)) {ou[++v[14]]=V20;pl[v[14]]=1;av[v[14]]=t[V20];ty[v[14]]=1;};t[V20]=V14;
Q=V20;
Z=V14;
goto l7;
l5:if((V13>=ATT)) goto l6;
V18=t[V21];
if((V18<=0)) goto l6;
V20=V21;
V21=V18;
goto l1;
}
