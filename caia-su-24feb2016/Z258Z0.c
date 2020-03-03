#include "dx.h"
void Z258Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,NNNX=0,V15=0,V5=0,V3=0,V4=0,V6=0,V7=0,V14=0,V9=0,V10=0,V11=0,V12=0,V13=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=SUJ; pile[WZ1]=jvj+2; 
(*f[4086])( );     /*ENSATT0(SUJ,jvj+2)*/
V8=x[SUJ];
V15=x[jvj+2];
l2:if((V15>0)) goto l3;
pile[v[22]]=608; pile[WZ1]=SUJ; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(608,SUJ,jvj+3)*/
pile[v[22]]=jvj+3; 
(*f[4048])( );     /*Z258Z0(jvj+3)*/
l1:pile[v[22]]=447; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(447,SUJ,jvj+1)*/
l6:v[0]=jvj; v[22]-=1; return;
l3:NNNX=s[V15];
if(NNNX==447||NNNX==159||NNNX==608) goto l4;
V5=NNNX;
pile[v[22]]=0; pile[WZ1]=(-4789); 
(*f[37])( );     /*SRA0(0,(-4789),V3)*/
V3=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V5; pile[WZ2]=V3; 
(*f[39])( );     /*SDX0(20,V5,V3,V4)*/
V4=pile[WZ3]; 
pile[v[22]]=V4; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V4,(-740),V6)*/
V6=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V8; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(20,V8,V6,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=V7; 
(*f[40])( );     /*SLG0(V7)*/
l4:V15=t[V15];
goto l2;
l5:V14=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4789); 
(*f[37])( );     /*SRA0(0,(-4789),V9)*/
V9=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V9; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V9,300,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=447; pile[WZ2]=V10; 
(*f[39])( );     /*SDX0(20,447,V10,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=V11; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V11,(-740),V12)*/
V12=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V14; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V14,V12,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
goto l6;
}
