#include "dx.h"
void Z247Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V13=0,V14=0,V15=0,V16=0,V23=0,V18=0,V19=0,V20=0,V21=0,V22=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=212; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(212,SUJ,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
pile[v[22]]=448; pile[WZ1]=SUJ; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(448,SUJ,jvj+4)*/
l4:if((x[jvj+4]>0)) goto l5;
pile[v[22]]=454; pile[WZ1]=SUJ; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(454,SUJ,jvj+6)*/
l6:if((x[jvj+6]>0)) goto l7;
pile[v[22]]=455; pile[WZ1]=SUJ; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(455,SUJ,jvj+8)*/
l8:if((x[jvj+8]>0)) goto l9;
pile[v[22]]=470; pile[WZ1]=SUJ; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(470,SUJ,jvj+10)*/
l10:if((x[jvj+10]>0)) goto l11;
pile[v[22]]=100; pile[WZ1]=SUJ; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,SUJ,jvj+12)*/
if(x[jvj+12]==298) goto l1;
V17=x[jvj+12];
pile[v[22]]=0; pile[WZ1]=(-4769); 
(*f[37])( );     /*SRA0(0,(-4769),V13)*/
V13=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V13; pile[WZ2]=100; 
(*f[42])( );     /*SRA1(135,V13,100,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V14,(-4390),V15)*/
V15=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(20,V17,V15,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; 
(*f[40])( );     /*SLG0(V16)*/
l1:pile[v[22]]=100; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,SUJ,jvj+1)*/
l13:v[0]=jvj; v[22]-=1; return;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; 
(*f[4041])( );     /*Z183Z0(jvj+3)*/
x[jvj+2]=t[x[jvj+2]];
goto l2;
l5:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; 
(*f[4041])( );     /*Z183Z0(jvj+5)*/
x[jvj+4]=t[x[jvj+4]];
goto l4;
l7:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; 
(*f[4041])( );     /*Z183Z0(jvj+7)*/
x[jvj+6]=t[x[jvj+6]];
goto l6;
l9:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; 
(*f[4041])( );     /*Z183Z0(jvj+9)*/
x[jvj+8]=t[x[jvj+8]];
goto l8;
l11:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; 
(*f[4044])( );     /*Z248Z0(jvj+11)*/
x[jvj+10]=t[x[jvj+10]];
goto l10;
l12:V23=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4769); 
(*f[37])( );     /*SRA0(0,(-4769),V18)*/
V18=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V18; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V18,300,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=100; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(20,100,V19,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V20,(-740),V21)*/
V21=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V23; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(20,V23,V21,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; 
(*f[40])( );     /*SLG0(V22)*/
goto l13;
}
