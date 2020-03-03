#include "dx.h"
void NBT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,V38=0;
int A,N,T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=23;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; N=pile[v[22]+1]; T=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V38=incon;
if(x[N]==228||x[N]==278) goto l2;
V38=1;
l3:pile[v[22]]=T; pile[WZ1]=130; pile[WZ2]=V38; 
(*f[186])( );     /*BTC0(T,130,V38)*/
if((x[N]==68)) goto l4;
if((x[N]==228)) goto l6;
if((x[N]!=278)) goto l8;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,A,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=151)) goto l8;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,A,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=N; pile[WZ2]=T; 
(*f[682])( );     /*NBT1(jvj+14,N,T)*/
l8:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,A,jvj+15)*/
x[jvj+21]=w[x[jvj+15]][8];
l9:if((x[jvj+21]>0)) goto l10;
x[jvj+23]=w[x[jvj+15]][9];
l13:if((x[jvj+23]<=0)) goto l16;
x[jvj+19]=s[x[jvj+23]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+23];
if((x[jvj+15]!=22)) goto l15;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+1,jvj+2)*/
F=x[jvj+2];
if((F!=278)) goto l1;
if((x[jvj+19]==103)) goto l14;
l1:if(F==295||F==585||F==137||F==149||F==139||F==138||F==141||F==432||F==228||F==647||F==1382) goto l14;
l15:pile[v[22]]=jvj+19; pile[WZ1]=A; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+19,A,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=N; pile[WZ2]=T; 
(*f[682])( );     /*NBT1(jvj+20,N,T)*/
l14:x[jvj+23]=t[x[jvj+23]];
goto l13;
l2:V38=3;
goto l3;
l4:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,A,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==228)) goto l5;
if((x[jvj+4]!=278)) goto l8;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,A,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=278; pile[WZ2]=T; 
(*f[682])( );     /*NBT1(jvj+6,278,T)*/
goto l8;
l5:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,A,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=228; pile[WZ2]=T; 
(*f[682])( );     /*NBT1(jvj+5,228,T)*/
goto l8;
l6:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,A,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=647)) goto l7;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,A,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=N; pile[WZ2]=T; 
(*f[682])( );     /*NBT1(jvj+9,N,T)*/
l7:if(x[jvj+8]!=295&&x[jvj+8]!=585&&x[jvj+8]!=137&&x[jvj+8]!=149&&x[jvj+8]!=139&&x[jvj+8]!=432&&x[jvj+8]!=138&&x[jvj+8]!=141&&x[jvj+8]!=1382) goto l8;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,A,jvj+10)*/
if((x[jvj+10]!=22)) goto l8;
pile[v[22]]=102; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,A,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=68; pile[WZ2]=T; 
(*f[682])( );     /*NBT1(jvj+11,68,T)*/
goto l8;
l10:x[jvj+16]=s[x[jvj+21]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+21];
pile[v[22]]=jvj+16; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+16,A,jvj+17)*/
x[jvj+22]=x[jvj+17] ;z[jvj+22]=z[jvj+17];
l11:if((x[jvj+22]>0)) goto l12;
x[jvj+21]=t[x[jvj+21]];
goto l9;
l12:x[jvj+18]=s[x[jvj+22]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+22];
pile[v[22]]=jvj+18; pile[WZ1]=N; pile[WZ2]=T; 
(*f[682])( );     /*NBT1(jvj+18,N,T)*/
x[jvj+22]=t[x[jvj+22]];
goto l11;
l16:v[0]=jvj; v[22]-=3; return;
}
