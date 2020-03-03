#include "dx.h"
void ENLW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,TX=0,V5=0,V1=0,V2=0,V3=0,V4=0,V11=0,V10=0,V7=0,V15=0,V16=0;
int T,X,P,BL;

T=pile[v[22]]; X=pile[v[22]+1]; P=pile[v[22]+2]; BL=pile[v[22]+3]; v[22]+=4; 
V16=X;
V15=P;
l1:V8=t[V16];
TX=V8;
V5=r[V16];
if((V5!=T)) goto l2;
if((V15<=0)) goto l2;
if(BL>0) s[BL]=68;if(BL==(-1)||(BL>0&&v[122]!=0)) {ou[++v[14]]=V15;pl[v[14]]=1;av[v[14]]=t[V15];ty[v[14]]=1;};t[V15]=V8;
l5:if((TX>0)) goto l6;
l7:v[22]-=4; return;
l2:if((V15!=0)) goto l5;
V1=r[V16];
if((V1!=T)) goto l5;
if((TX>0)) goto l3;
if((TX!=0)) goto l7;
V11=T;
if((V10=w[V11][1])==incon) goto l7;
if((V10==23)) goto l4;
if(BL>0) s[BL]=68;if(BL==(-1)||(BL>0&&v[122]!=0)) {ou[++v[14]]=V16;pl[v[14]]=0;av[v[14]]=s[V16];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V16]=0;
if(BL>0) s[BL]=68;if(BL==(-1)||(BL>0&&v[122]!=0)) {ou[++v[14]]=V16;pl[v[14]]=(-1);av[v[14]]=r[V16];ty[v[14]]=0;};r[V16]=742;
goto l7;
l3:V2=s[TX];
V3=r[TX];
V4=t[TX];
if(BL>0) s[BL]=68;if(BL==(-1)||(BL>0&&v[122]!=0)) {ou[++v[14]]=V16;pl[v[14]]=0;av[v[14]]=s[V16];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V16]=V2;
if(BL>0) s[BL]=68;if(BL==(-1)||(BL>0&&v[122]!=0)) {ou[++v[14]]=V16;pl[v[14]]=(-1);av[v[14]]=r[V16];ty[v[14]]=0;};r[V16]=V3;
if(BL>0) s[BL]=68;if(BL==(-1)||(BL>0&&v[122]!=0)) {ou[++v[14]]=V16;pl[v[14]]=1;av[v[14]]=t[V16];ty[v[14]]=1;};t[V16]=V4;
l6:V7=r[V16];
if((V7>=T)) goto l7;
V15=V16;
V16=TX;
goto l1;
l4:if(BL>0) s[BL]=68;if(BL==(-1)||(BL>0&&v[122]!=0)) {ou[++v[14]]=V16;pl[v[14]]=0;av[v[14]]=s[V16];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V16]=0;
goto l7;
}
