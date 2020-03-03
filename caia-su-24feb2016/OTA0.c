#include "dx.h"
void OTA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0,V4=0,V41=0,V40=0,V51=0,V52=0,V46=0,V47=0,V44=0,V45=0,V50=0,V59=0,V58=0,V53=0,V54=0,V55=0,V57=0,V39=0,V48=0;
int ATT,N,Y;
int WZ1,WZ2,WZ3;

ATT=pile[v[22]]; N=pile[v[22]+1]; Y=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[N];
if((V1>sepcte)) goto l1;
V2=s[x[N]];
if((V2!=66)) goto l1;
pile[v[22]]=N; 
(*f[59])( );     /*LECT0(N)*/
l1:V3=x[N];
V4=x[ATT];
V41=V3;
l3:V40=r[V41];
if((V40!=V4)) goto l7;
V51=s[V41];
V52=V51;
V46=s[V52];
if((V46!=Y)) goto l4;
V47=t[V52];
if((V47>0)) goto l8;
if((V47!=0)) goto l4;
V44=z[N];
V45=x[N];
pile[v[22]]=V4; pile[WZ1]=V45; pile[WZ2]=0; pile[WZ3]=V44; 
(*f[246])( );     /*ENLW0(V4,V45,0,V44)*/
l4:V50=t[V52];
if((V50<=0)) goto l7;
if((V46==Y)) goto l7;
V59=V50;
V58=V52;
l5:V53=s[V59];
if((V53!=Y)) goto l6;
V54=t[V59];
V55=z[N];
if(V55>0) s[V55]=68;if(V55==(-1)||(V55>0&&v[122]!=0)) {ou[++v[14]]=V58;pl[v[14]]=1;av[v[14]]=t[V58];ty[v[14]]=1;};t[V58]=V54;
l6:V57=t[V59];
if((V57<=0)) goto l7;
if((V53==Y)) goto l7;
V58=V59;
V59=V57;
goto l5;
l2:v[22]-=3; return;
l7:if((V40>=V4)) goto l2;
V39=t[V41];
if((V39<=0)) goto l2;
V41=V39;
goto l3;
l8:V48=z[N];
if(V48>0) s[V48]=68;if(V48==(-1)||(V48>0&&v[122]!=0)) {ou[++v[14]]=V41;pl[v[14]]=0;av[v[14]]=s[V41];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V41]=V47;
goto l4;
}
