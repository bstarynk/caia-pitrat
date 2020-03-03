#include "dx.h"
void Z34Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V12=0,V13=0,V14=0,V15=0,V11=0,NNNX=0,V29=0,V8=0,V6=0,V7=0,V9=0,V10=0,V22=0,V17=0,V18=0,V19=0,V20=0,V21=0,V28=0,V23=0,V24=0,V25=0,V26=0,V27=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=218; pile[WZ1]=SUJ; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,SUJ,jvj+3)*/
pile[v[22]]=jvj+3; 
(*f[4051])( );     /*Z32Z0(jvj+3)*/
l2:pile[v[22]]=SUJ; pile[WZ1]=jvj+4; 
(*f[4086])( );     /*ENSATT0(SUJ,jvj+4)*/
pile[v[22]]=115; pile[WZ1]=SUJ; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(115,SUJ,jvj+5)*/
if(x[jvj+5]==480||x[jvj+5]==481||x[jvj+5]==208) goto l3;
V16=x[jvj+5];
pile[v[22]]=0; pile[WZ1]=(-4787); 
(*f[37])( );     /*SRA0(0,(-4787),V12)*/
V12=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V12; pile[WZ2]=115; 
(*f[42])( );     /*SRA1(135,V12,115,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V13,(-4390),V14)*/
V14=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V16; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(20,V16,V14,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
l3:V11=x[SUJ];
V29=x[jvj+4];
l4:if((V29>0)) goto l5;
pile[v[22]]=115; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(115,SUJ,jvj+1)*/
l1:pile[v[22]]=218; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(218,SUJ,jvj+2)*/
l9:v[0]=jvj; v[22]-=1; return;
l5:NNNX=s[V29];
if(NNNX==115||NNNX==218) goto l6;
V8=NNNX;
pile[v[22]]=0; pile[WZ1]=(-4787); 
(*f[37])( );     /*SRA0(0,(-4787),V6)*/
V6=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V8; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(20,V8,V6,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=V7; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V7,(-740),V9)*/
V9=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V11; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(20,V11,V9,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=V10; 
(*f[40])( );     /*SLG0(V10)*/
l6:V29=t[V29];
goto l4;
l7:V22=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4787); 
(*f[37])( );     /*SRA0(0,(-4787),V17)*/
V17=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V17; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V17,300,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=115; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(20,115,V18,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V19,(-740),V20)*/
V20=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V22; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(20,V22,V20,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
goto l1;
l8:V28=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4787); 
(*f[37])( );     /*SRA0(0,(-4787),V23)*/
V23=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V23; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V23,300,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=218; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(20,218,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V25,(-740),V26)*/
V26=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V28; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V28,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
goto l9;
}
