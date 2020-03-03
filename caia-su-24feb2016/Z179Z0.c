#include "dx.h"
void Z179Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V9=0,NNNX=0,V22=0,V6=0,V4=0,V5=0,V7=0,V8=0,V21=0,V16=0,V17=0,V18=0,V19=0,V20=0,V15=0,V10=0,V11=0,V12=0,V13=0,V14=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=129; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(129,SUJ,jvj+2)*/
pile[v[22]]=jvj+2; 
(*f[4041])( );     /*Z183Z0(jvj+2)*/
l2:pile[v[22]]=SUJ; pile[WZ1]=jvj+3; 
(*f[4086])( );     /*ENSATT0(SUJ,jvj+3)*/
V9=x[SUJ];
V22=x[jvj+3];
l3:if((V22>0)) goto l4;
pile[v[22]]=129; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(129,SUJ,jvj+1)*/
l1:pile[v[22]]=110; pile[WZ1]=SUJ; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(110,SUJ,V1)*/
V1=pile[WZ2]; 
l8:v[0]=jvj; v[22]-=1; return;
l4:NNNX=s[V22];
if(NNNX==110||NNNX==129||NNNX==131) goto l5;
V6=NNNX;
pile[v[22]]=0; pile[WZ1]=(-4753); 
(*f[37])( );     /*SRA0(0,(-4753),V4)*/
V4=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V6; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(20,V6,V4,V5)*/
V5=pile[WZ3]; 
pile[v[22]]=V5; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V5,(-740),V7)*/
V7=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V9; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(20,V9,V7,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=V8; 
(*f[40])( );     /*SLG0(V8)*/
l5:V22=t[V22];
goto l3;
l6:V21=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4753); 
(*f[37])( );     /*SRA0(0,(-4753),V16)*/
V16=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V16; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V16,300,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=129; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,129,V17,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V18,(-740),V19)*/
V19=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V21; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(20,V21,V19,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; 
(*f[40])( );     /*SLG0(V20)*/
goto l1;
l7:V15=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4753); 
(*f[37])( );     /*SRA0(0,(-4753),V10)*/
V10=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V10; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V10,300,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=110; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(20,110,V11,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V12,(-740),V13)*/
V13=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V15; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(20,V15,V13,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; 
(*f[40])( );     /*SLG0(V14)*/
goto l8;
}
