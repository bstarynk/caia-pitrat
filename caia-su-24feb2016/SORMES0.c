#include "dx.h"
void SORMES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,V24=0,V23=0,V20=0,V33=0,V31=0,V32=0,PP=0,V19=0,V10=0,V11=0,V9=0,V29=0,V13=0,V25=0,V8=0,V28=0,V27=0,P=0,V37=0,V38=0,V39=0,V40=0;
int AT,N;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

AT=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((V10=w[x[AT]][1])==incon) goto l9;
if((V10==23)) goto l6;
if((V10==41)) goto l8;
if((V10!=20)) goto l9;
pile[v[22]]=AT; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(AT,N,P)*/
P=pile[WZ2]; 
x[jvj+1]=P ;z[jvj+1]=(P<=sepcte) ? P : 0;
if((P>=sepcte)) goto l1;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+1; 
(*f[42])( );     /*SRA1(135,0,jvj+1,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; 
(*f[40])( );     /*SLG0(V22)*/
l1:if((P<=sepcte)) goto l9;
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+1,jvj+2)*/
l3:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+1,jvj+3)*/
pile[v[22]]=0; 
(*f[344])( );if(v[102]) goto l9;     /*XX1(0,jvj+1,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; 
(*f[40])( );     /*SLG0(V23)*/
l9:v[0]=jvj; v[22]-=2; return;
l2:pile[v[22]]=83; pile[WZ1]=jvj+1; 
(*f[576])( );     /*EASOR2(83,jvj+1)*/
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; 
(*f[40])( );     /*SLG0(V24)*/
goto l3;
l6:if((V11=w[x[AT]][2])==incon) goto l9;
if((V11==41)) goto l7;
if((V11!=20)) goto l9;
pile[v[22]]=AT; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(AT,N,V13)*/
V13=pile[WZ2]; 
if((V13<=0)) goto l9;
V19=V13;
V20=x[N];
if((V20>=sepcte)) goto l4;
V33=x[N];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; 
(*f[40])( );     /*SLG0(V31)*/
pile[v[22]]=20; pile[WZ1]=V33; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V33,0,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
l4:if((V19<=0)) goto l9;
PP=s[V19];
x[jvj+5]=PP ;z[jvj+5]=(PP<=sepcte) ? PP : 0;
if((PP>=sepcte)) goto l10;
V37=x[jvj+5];
pile[v[22]]=20; pile[WZ1]=V37; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V37,0,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; 
(*f[40])( );     /*SLG0(V38)*/
l10:if((PP<=sepcte)) goto l5;
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+5,jvj+6)*/
l11:pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+5,jvj+7)*/
pile[v[22]]=0; 
(*f[344])( );if(v[102]) goto l5;     /*XX1(0,jvj+5,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
l5:V19=t[V19];
goto l4;
l7:pile[v[22]]=AT; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(AT,N,V9)*/
V9=pile[WZ2]; 
if((V9<=0)) goto l9;
pile[v[22]]=41; pile[WZ1]=V9; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V9,0,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
goto l9;
l8:pile[v[22]]=N; pile[WZ1]=AT; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l9;     /*FNDZ0(N,AT,V25,jvj+4)*/
V25=pile[WZ2]; 
V8=V25;
V28=V8;
pile[v[22]]=41; pile[WZ1]=V28; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V28,0,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
goto l9;
l12:pile[v[22]]=83; pile[WZ1]=jvj+5; 
(*f[576])( );     /*EASOR2(83,jvj+5)*/
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
goto l11;
}
