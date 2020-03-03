#include "dx.h"
void LIRB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,H=0,V14=0,B=0,V8=0,V3=0,V10=0,V9=0,V12=0,V13=0,V11=0,V6=0,V4=0,V5=0,QQ=0,V15=0;
int N,P;
int R;
int WZ1,WZ2,WZ3,WZ4;

N=pile[v[22]]; P=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V15=P;
V14=N;
l14:B=incon;
V1=(sw[V15]<<8)|(sw[V15+1]&0xff);
H=V1;
if((H==stofin)) goto l6;
pile[v[22]]=V14; 
(*f[654])( );     /*LIRX1(V14,B)*/
B=pile[WZ1]; 
l6:if((H==stofin)) goto l7;
if(B!=incon) goto l8;
l12:v[22]-=3; v[102]=1;return;
l4:V8=96;
l9:V10=V15+2;
V9=(sw[V10]<<8)|(sw[V10+1]&0xff);
V12=V15+4;
V13=V14+1;
V11=V8;
pile[v[22]]=V9; pile[WZ1]=V11; pile[WZ2]=V12; pile[WZ3]=B; 
(*f[241])( );if(v[102]) goto l11;     /*LIRN0(V9,V11,V12,B,V6)*/
V6=pile[WZ4]; 
if((V8!=250)) goto l10;
pile[v[22]]=10039; pile[WZ1]=H; pile[WZ2]=(-3412); 
(*f[242])( );     /*FAUTE0(10039,H,(-3412))*/
l10:pile[v[22]]=V13; pile[WZ1]=V6; 
(*f[240])( );if(v[102]) goto l11;     /*LIRB1(V13,V6,R)*/
R=pile[WZ2]; 
l13:v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
l5:V8=250;
goto l9;
l7:V3=V15+2;
R=V3;
goto l13;
l8:if((H<stenobj)) goto l11;
if((H>stensymb)) goto l11;
V8=incon;
if((H!=stenobj)) goto l1;
V8=20;
l1:if((H!=stenbre)) goto l2;
V8=41;
l2:if((H!=stencar)) goto l3;
V8=89;
l3:if((H==stensymb)) goto l4;
if(V8==incon) goto l5;
goto l9;
l11:if((H!=stonorm)) goto l12;
V4=V15+2;
V5=V14+1;
pile[v[22]]=V4; pile[WZ1]=B; 
(*f[239])( );if(v[102]) goto l12;     /*LIRO0(V4,B,QQ)*/
QQ=pile[WZ2]; 
V14=V5;
V15=QQ;
goto l14;
}
