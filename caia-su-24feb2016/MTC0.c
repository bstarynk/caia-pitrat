#include "dx.h"
void MTC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0,V4=0,V5=0,V20=0,V40=0,V39=0,V25=0,V26=0,V28=0,V29=0,V30=0,V33=0,V34=0,V37=0;
int X,ATT,XN;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; ATT=pile[v[22]+1]; XN=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[X];
if((V1>sepcte)) goto l1;
V2=s[x[X]];
if((V2!=66)) goto l1;
pile[v[22]]=X; 
(*f[59])( );     /*LECT0(X)*/
l1:V3=x[ATT];
V4=x[X];
V5=z[X];
V20=1;
V40=V4;
V39=V20;
l3:V25=r[V40];
if((V25!=V3)) goto l4;
V26=s[V40];
V28=V26*XN;
if(V5>0) s[V5]=68;if(V5==(-1)||(V5>0&&v[122]!=0)) {ou[++v[14]]=V40;pl[v[14]]=0;av[v[14]]=s[V40];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V40]=V28;
V29=abs(XN);
if((V29>10000)) goto l9;
V30=abs(V26);
if((V30>10000)) goto l9;
l4:if((V39>0)) goto l7;
if((V39!=0)) goto l5;
if((V25<=V3)) goto l5;
V33=s[V40];
V34=t[V40];
pile[v[22]]=V34; pile[WZ1]=V33; pile[WZ2]=V25; pile[WZ3]=jvj+1; 
(*f[210])( );     /*TRI5(V34,V33,V25,jvj+1)*/
if(V5>0) s[V5]=68;if(V5==(-1)||(V5>0&&v[122]!=0)) {ou[++v[14]]=V40;pl[v[14]]=0;av[v[14]]=s[V40];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V40]=XN;
if(V5>0) s[V5]=68;if(V5==(-1)||(V5>0&&v[122]!=0)) {ou[++v[14]]=V40;pl[v[14]]=(-1);av[v[14]]=r[V40];ty[v[14]]=0;};r[V40]=V3;
if(V5>0) s[V5]=68;if(V5==(-1)||(V5>0&&v[122]!=0)) {ou[++v[14]]=V40;pl[v[14]]=1;av[v[14]]=t[V40];ty[v[14]]=1;};t[V40]=x[jvj+1];
l5:V37=t[V40];
if((V37==0)) goto l6;
if((V25>=V3)) goto l2;
if((V37<=0)) goto l2;
V39=V40;
V40=V37;
goto l3;
l6:if((V25>=V3)) goto l2;
pile[v[22]]=V3; pile[WZ1]=XN; pile[WZ2]=jvj+2; 
(*f[211])( );     /*TRI6(V3,XN,jvj+2)*/
if(V5>0) s[V5]=68;if(V5==(-1)||(V5>0&&v[122]!=0)) {ou[++v[14]]=V40;pl[v[14]]=1;av[v[14]]=t[V40];ty[v[14]]=1;};t[V40]=x[jvj+2];
l2:v[0]=jvj; v[22]-=3; return;
l7:if((V25<=V3)) goto l5;
pile[v[22]]=V40; pile[WZ1]=XN; pile[WZ2]=V3; pile[WZ3]=jvj+3; 
(*f[210])( );     /*TRI5(V40,XN,V3,jvj+3)*/
if(V5>0) s[V5]=68;if(V5==(-1)||(V5>0&&v[122]!=0)) {ou[++v[14]]=V39;pl[v[14]]=1;av[v[14]]=t[V39];ty[v[14]]=1;};t[V39]=x[jvj+3];
goto l5;
l8:v[45]=1;
goto l4;
l9:pile[v[22]]=XN; pile[WZ1]=V26; pile[WZ2]=jvj+4; 
(*f[1165])( );     /*POSPRD1(XN,V26,jvj+4)*/
if((x[jvj+4]==134)) goto l8;
goto l4;
}
