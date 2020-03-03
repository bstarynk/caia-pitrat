#include "dx.h"
void INCT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V8=0,V7=0,V2=0,V4=0,V10=0,V12=0,V13=0,V15=0,V14=0;
int ATT,X,C,K,BBL;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

ATT=pile[v[22]]; X=pile[v[22]+1]; C=pile[v[22]+2]; K=pile[v[22]+3]; BBL=pile[v[22]+4]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V6=r[X];
if((V6==ATT)) goto l1;
if((V6>=ATT)) goto l2;
V2=t[X];
if((V2<=0)) goto l2;
pile[v[22]]=ATT; pile[WZ1]=V2; pile[WZ2]=C; pile[WZ3]=X; pile[WZ4]=BBL; 
(*f[1433])( );     /*INCT0(ATT,V2,C,X,BBL,RES)*/
RES=pile[WZ5]; 
l3:if((K>0)) goto l4;
if((K!=0)) goto l5;
V10=r[X];
if((V10<=ATT)) goto l5;
V12=s[X];
V13=t[X];
pile[v[22]]=V13; pile[WZ1]=V12; pile[WZ2]=V10; pile[WZ3]=jvj+2; 
(*f[210])( );     /*TRI5(V13,V12,V10,jvj+2)*/
if(BBL>0) s[BBL]=68;if(BBL==(-1)||(BBL>0&&v[122]!=0)) {ou[++v[14]]=X;pl[v[14]]=0;av[v[14]]=s[X];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[X]=C;
if(BBL>0) s[BBL]=68;if(BBL==(-1)||(BBL>0&&v[122]!=0)) {ou[++v[14]]=X;pl[v[14]]=(-1);av[v[14]]=r[X];ty[v[14]]=0;};r[X]=ATT;
if(BBL>0) s[BBL]=68;if(BBL==(-1)||(BBL>0&&v[122]!=0)) {ou[++v[14]]=X;pl[v[14]]=1;av[v[14]]=t[X];ty[v[14]]=1;};t[X]=x[jvj+2];
l5:V15=t[X];
if((V15!=0)) goto l6;
V14=r[X];
if((V14>=ATT)) goto l6;
pile[v[22]]=ATT; pile[WZ1]=C; pile[WZ2]=jvj+3; 
(*f[211])( );     /*TRI6(ATT,C,jvj+3)*/
if(BBL>0) s[BBL]=68;if(BBL==(-1)||(BBL>0&&v[122]!=0)) {ou[++v[14]]=X;pl[v[14]]=1;av[v[14]]=t[X];ty[v[14]]=1;};t[X]=x[jvj+3];
l6:v[0]=jvj; v[22]-=6; pile[v[22]+5]=RES; return;
l1:V8=s[X];
V7=V8+C;
if(BBL>0) s[BBL]=68;if(BBL==(-1)||(BBL>0&&v[122]!=0)) {ou[++v[14]]=X;pl[v[14]]=0;av[v[14]]=s[X];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[X]=V7;
RES=V7;
goto l3;
l2:RES=C;
goto l3;
l4:V4=r[X];
if((V4<=ATT)) goto l5;
pile[v[22]]=X; pile[WZ1]=C; pile[WZ2]=ATT; pile[WZ3]=jvj+1; 
(*f[210])( );     /*TRI5(X,C,ATT,jvj+1)*/
if(BBL>0) s[BBL]=68;if(BBL==(-1)||(BBL>0&&v[122]!=0)) {ou[++v[14]]=K;pl[v[14]]=1;av[v[14]]=t[K];ty[v[14]]=1;};t[K]=x[jvj+1];
goto l5;
}
