#include "dx.h"
void PLUSC1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0,V4=0,V5=0,V27=0,V48=0,V47=0,V33=0,V34=0,V38=0,V40=0,V44=0,V52=0,V50=0,V54=0,V51=0;
int RX,XN,X,ATT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

RX=pile[v[22]]; XN=pile[v[22]+1]; X=pile[v[22]+2]; ATT=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[X];
if((V1>sepcte)) goto l1;
V2=s[x[X]];
if((V2!=66)) goto l1;
pile[v[22]]=X; 
(*f[59])( );     /*LECT0(X)*/
l1:V3=z[X];
V4=x[ATT];
V5=x[X];
V27=0;
V48=V5;
V47=V27;
l3:V33=r[V48];
if((V4!=V33)) goto l4;
V34=s[V48];
if((V34>0)) goto l10;
if((V34!=0)) goto l4;
pile[v[22]]=XN; pile[WZ1]=RX; pile[WZ2]=jvj+1; 
(*f[213])( );     /*TRI7(XN,RX,jvj+1)*/
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V48;pl[v[14]]=0;av[v[14]]=s[V48];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V48]=x[jvj+1];
l4:if((V47>0)) goto l7;
if((V47!=0)) goto l5;
if((V4>=V33)) goto l5;
pile[v[22]]=XN; pile[WZ1]=RX; pile[WZ2]=jvj+2; 
(*f[213])( );     /*TRI7(XN,RX,jvj+2)*/
V38=s[V48];
V40=t[V48];
pile[v[22]]=V40; pile[WZ1]=V38; pile[WZ2]=V33; pile[WZ3]=jvj+3; 
(*f[210])( );     /*TRI5(V40,V38,V33,jvj+3)*/
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V48;pl[v[14]]=0;av[v[14]]=s[V48];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V48]=x[jvj+2];
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V48;pl[v[14]]=(-1);av[v[14]]=r[V48];ty[v[14]]=0;};r[V48]=V4;
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V48;pl[v[14]]=1;av[v[14]]=t[V48];ty[v[14]]=1;};t[V48]=x[jvj+3];
l5:V44=t[V48];
if((V44==0)) goto l6;
if((V4<=V33)) goto l2;
if((V44<=0)) goto l2;
V47=V48;
V48=V44;
goto l3;
l6:if((V4<=V33)) goto l2;
pile[v[22]]=XN; pile[WZ1]=RX; pile[WZ2]=jvj+4; 
(*f[213])( );     /*TRI7(XN,RX,jvj+4)*/
pile[v[22]]=V4; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[216])( );     /*TRI9(V4,jvj+4,jvj+5)*/
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V48;pl[v[14]]=1;av[v[14]]=t[V48];ty[v[14]]=1;};t[V48]=x[jvj+5];
l2:v[0]=jvj; v[22]-=4; return;
l7:if((V4>=V33)) goto l5;
pile[v[22]]=XN; pile[WZ1]=RX; pile[WZ2]=jvj+6; 
(*f[213])( );     /*TRI7(XN,RX,jvj+6)*/
pile[v[22]]=V48; pile[WZ1]=jvj+6; pile[WZ2]=V4; pile[WZ3]=jvj+7; 
(*f[215])( );     /*TRI8(V48,jvj+6,V4,jvj+7)*/
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V47;pl[v[14]]=1;av[v[14]]=t[V47];ty[v[14]]=1;};t[V47]=x[jvj+7];
goto l5;
l8:V52=s[V54];
if((XN==V52)) goto l4;
pile[v[22]]=XN; pile[WZ1]=RX; pile[WZ2]=jvj+8; 
(*f[213])( );     /*TRI7(XN,RX,jvj+8)*/
if(V3>0) s[V3]=68;if(V3==(-1)||(V3>0&&v[122]!=0)) {ou[++v[14]]=V54;pl[v[14]]=1;av[v[14]]=t[V54];ty[v[14]]=1;};t[V54]=x[jvj+8];
goto l4;
l10:V54=V34;
l9:V51=t[V54];
if((V51==0)) goto l8;
if((V51<=0)) goto l4;
V50=s[V54];
if((XN==V50)) goto l4;
V54=V51;
goto l9;
}
