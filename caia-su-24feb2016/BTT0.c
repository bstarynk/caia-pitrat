#include "dx.h"
void BTT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V7=0,V6=0,V16=0,V11=0,V12=0,V14=0,V15=0;
int ATT,X,C,K,BBL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

ATT=pile[v[22]]; X=pile[v[22]+1]; C=pile[v[22]+2]; K=pile[v[22]+3]; BBL=pile[v[22]+4]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V16=X;
V15=K;
l1:V5=r[V16];
if((V5!=ATT)) goto l2;
V7=s[V16];
V6=V7+C;
if(BBL>0) s[BBL]=68;if(BBL==(-1)||(BBL>0&&v[122]!=0)) {ou[++v[14]]=V16;pl[v[14]]=0;av[v[14]]=s[V16];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V16]=V6;
l2:if((V15>0)) goto l3;
if((V15!=0)) goto l4;
if((V5<=ATT)) goto l4;
V11=s[V16];
V12=t[V16];
pile[v[22]]=V12; pile[WZ1]=V11; pile[WZ2]=V5; pile[WZ3]=jvj+2; 
(*f[210])( );     /*TRI5(V12,V11,V5,jvj+2)*/
if(BBL>0) s[BBL]=68;if(BBL==(-1)||(BBL>0&&v[122]!=0)) {ou[++v[14]]=V16;pl[v[14]]=0;av[v[14]]=s[V16];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V16]=C;
if(BBL>0) s[BBL]=68;if(BBL==(-1)||(BBL>0&&v[122]!=0)) {ou[++v[14]]=V16;pl[v[14]]=(-1);av[v[14]]=r[V16];ty[v[14]]=0;};r[V16]=ATT;
if(BBL>0) s[BBL]=68;if(BBL==(-1)||(BBL>0&&v[122]!=0)) {ou[++v[14]]=V16;pl[v[14]]=1;av[v[14]]=t[V16];ty[v[14]]=1;};t[V16]=x[jvj+2];
l4:V14=t[V16];
if((V14==0)) goto l5;
if((V5>=ATT)) goto l6;
if((V14<=0)) goto l6;
V15=V16;
V16=V14;
goto l1;
l3:if((V5<=ATT)) goto l4;
pile[v[22]]=V16; pile[WZ1]=C; pile[WZ2]=ATT; pile[WZ3]=jvj+1; 
(*f[210])( );     /*TRI5(V16,C,ATT,jvj+1)*/
if(BBL>0) s[BBL]=68;if(BBL==(-1)||(BBL>0&&v[122]!=0)) {ou[++v[14]]=V15;pl[v[14]]=1;av[v[14]]=t[V15];ty[v[14]]=1;};t[V15]=x[jvj+1];
goto l4;
l5:if((V5>=ATT)) goto l6;
pile[v[22]]=ATT; pile[WZ1]=C; pile[WZ2]=jvj+3; 
(*f[211])( );     /*TRI6(ATT,C,jvj+3)*/
if(BBL>0) s[BBL]=68;if(BBL==(-1)||(BBL>0&&v[122]!=0)) {ou[++v[14]]=V16;pl[v[14]]=1;av[v[14]]=t[V16];ty[v[14]]=1;};t[V16]=x[jvj+3];
l6:v[0]=jvj; v[22]-=5; return;
}
