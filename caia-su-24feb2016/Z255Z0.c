#include "dx.h"
void Z255Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V9=0,V10=0,V11=0,V12=0,V19=0,V14=0,V15=0,V16=0,V17=0,V18=0,V25=0,V20=0,V21=0,V22=0,V23=0,V24=0,V31=0,V26=0,V27=0,V28=0,V29=0,V30=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=102; pile[WZ1]=SUJ; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,SUJ,jvj+4)*/
pile[v[22]]=jvj+4; 
(*f[4041])( );     /*Z183Z0(jvj+4)*/
l4:pile[v[22]]=103; pile[WZ1]=SUJ; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,SUJ,jvj+5)*/
pile[v[22]]=jvj+5; 
(*f[4041])( );     /*Z183Z0(jvj+5)*/
l5:pile[v[22]]=111; pile[WZ1]=SUJ; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,SUJ,jvj+6)*/
pile[v[22]]=jvj+6; 
(*f[4041])( );     /*Z183Z0(jvj+6)*/
l6:pile[v[22]]=100; pile[WZ1]=SUJ; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,SUJ,jvj+7)*/
if(x[jvj+7]==22) goto l1;
V13=x[jvj+7];
pile[v[22]]=0; pile[WZ1]=(-4773); 
(*f[37])( );     /*SRA0(0,(-4773),V9)*/
V9=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V9; pile[WZ2]=100; 
(*f[42])( );     /*SRA1(135,V9,100,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=V10; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V10,(-4390),V11)*/
V11=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V13; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(20,V13,V11,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
l1:pile[v[22]]=100; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,SUJ,jvj+1)*/
l2:pile[v[22]]=102; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,SUJ,jvj+2)*/
l3:pile[v[22]]=111; pile[WZ1]=SUJ; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,SUJ,jvj+3)*/
l10:v[0]=jvj; v[22]-=1; return;
l7:V19=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4773); 
(*f[37])( );     /*SRA0(0,(-4773),V14)*/
V14=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V14; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V14,300,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=100; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(20,100,V15,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V16,(-740),V17)*/
V17=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V19; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,V19,V17,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
goto l2;
l8:V25=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4773); 
(*f[37])( );     /*SRA0(0,(-4773),V20)*/
V20=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V20; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V20,300,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=102; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(20,102,V21,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V22,(-740),V23)*/
V23=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V25; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(20,V25,V23,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; 
(*f[40])( );     /*SLG0(V24)*/
goto l3;
l9:V31=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4773); 
(*f[37])( );     /*SRA0(0,(-4773),V26)*/
V26=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V26; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V26,300,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=111; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(20,111,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V28,(-740),V29)*/
V29=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V31; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(20,V31,V29,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; 
(*f[40])( );     /*SLG0(V30)*/
goto l10;
}
