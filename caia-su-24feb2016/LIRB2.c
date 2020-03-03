#include "dx.h"
void LIRB2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,H=0,B=0,V6=0,V8=0,V7=0,V10=0,V11=0,V9=0,V4=0,V5=0,V2=0,V3=0,QQ=0,RR=0;
int A,P,N;
int WZ1,WZ2,WZ3,WZ4;

A=pile[v[22]]; P=pile[v[22]+1]; N=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=(sw[P]<<8)|(sw[P+1]&0xff);
H=V1;
if((H==stofin)) goto l9;
pile[v[22]]=N; 
(*f[654])( );if(v[102]) goto l9;     /*LIRX1(N,B)*/
B=pile[WZ1]; 
t[A]=B;
if((H<stenobj)) goto l8;
if((H>stensymb)) goto l8;
V6=incon;
if((H!=stenobj)) goto l1;
V6=20;
l1:if((H!=stenbre)) goto l2;
V6=41;
l2:if((H!=stencar)) goto l3;
V6=89;
l3:if((H==stensymb)) goto l4;
if(V6==incon) goto l5;
l6:V8=P+2;
V7=(sw[V8]<<8)|(sw[V8+1]&0xff);
V10=P+4;
V11=N+1;
V9=V6;
pile[v[22]]=V7; pile[WZ1]=V9; pile[WZ2]=V10; pile[WZ3]=B; 
(*f[241])( );if(v[102]) goto l8;     /*LIRN0(V7,V9,V10,B,V4)*/
V4=pile[WZ4]; 
if((V6!=250)) goto l7;
pile[v[22]]=10039; pile[WZ1]=H; pile[WZ2]=(-3412); 
(*f[242])( );     /*FAUTE0(10039,H,(-3412))*/
l7:pile[v[22]]=V11; pile[WZ1]=V4; 
(*f[240])( );if(v[102]) goto l8;     /*LIRB1(V11,V4,V5)*/
V5=pile[WZ2]; 
l9:v[22]-=3; return;
l4:V6=96;
goto l6;
l5:V6=250;
goto l6;
l8:if((H!=stonorm)) goto l9;
V2=P+2;
V3=N+1;
pile[v[22]]=V2; pile[WZ1]=B; 
(*f[239])( );if(v[102]) goto l9;     /*LIRO0(V2,B,QQ)*/
QQ=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=QQ; 
(*f[240])( );if(v[102]) goto l9;     /*LIRB1(V3,QQ,RR)*/
RR=pile[WZ2]; 
goto l9;
}
