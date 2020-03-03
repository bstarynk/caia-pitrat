#include "dx.h"
void LIRB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,H=0,V7=0,V2=0,V9=0,V8=0,V11=0,V12=0,V10=0,V5=0,V3=0,V4=0,QQ=0;
int P,B,N;
int R;
int WZ1,WZ2,WZ3,WZ4;

P=pile[v[22]]; B=pile[v[22]+1]; N=pile[v[22]+2]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=(sw[P]<<8)|(sw[P+1]&0xff);
H=V1;
if((H==stofin)) goto l6;
if((H<stenobj)) goto l9;
if((H>stensymb)) goto l9;
V7=incon;
if((H!=stenobj)) goto l1;
V7=20;
l1:if((H!=stenbre)) goto l2;
V7=41;
l2:if((H!=stencar)) goto l3;
V7=89;
l3:if((H==stensymb)) goto l4;
if(V7==incon) goto l5;
l7:V9=P+2;
V8=(sw[V9]<<8)|(sw[V9+1]&0xff);
V11=P+4;
V12=N+1;
V10=V7;
pile[v[22]]=V8; pile[WZ1]=V10; pile[WZ2]=V11; pile[WZ3]=B; 
(*f[241])( );if(v[102]) goto l9;     /*LIRN0(V8,V10,V11,B,V5)*/
V5=pile[WZ4]; 
if((V7!=250)) goto l8;
pile[v[22]]=10039; pile[WZ1]=H; pile[WZ2]=(-3412); 
(*f[242])( );     /*FAUTE0(10039,H,(-3412))*/
l8:pile[v[22]]=V12; pile[WZ1]=V5; 
(*f[240])( );if(v[102]) goto l9;     /*LIRB1(V12,V5,R)*/
R=pile[WZ2]; 
l11:v[22]-=4; pile[v[22]+3]=R; v[102]=0;return;
l4:V7=96;
goto l7;
l5:V7=250;
goto l7;
l6:V2=P+2;
R=V2;
goto l11;
l9:if((H!=stonorm)) goto l10;
V3=P+2;
V4=N+1;
pile[v[22]]=V3; pile[WZ1]=B; 
(*f[239])( );if(v[102]) goto l10;     /*LIRO0(V3,B,QQ)*/
QQ=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=QQ; 
(*f[240])( );if(v[102]) goto l10;     /*LIRB1(V4,QQ,R)*/
R=pile[WZ2]; 
goto l11;
l10:v[22]-=4; v[102]=1;return;
}
