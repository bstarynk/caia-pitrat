#include "dx.h"
void Z53Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V23=0,V19=0,V20=0,V21=0,V22=0,V4=0,V34=0,V30=0,V31=0,V32=0,V33=0,V39=0,V35=0,V36=0,V37=0,V38=0,V18=0,NNNX=0,V42=0,V15=0,V13=0,V14=0,V16=0,V17=0,V29=0,V24=0,V25=0,V26=0,V27=0,V28=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=258; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(258,SUJ,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=159; pile[WZ1]=SUJ; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,SUJ,jvj+3)*/
l3:if((x[jvj+3]>0)) goto l4;
pile[v[22]]=SUJ; pile[WZ1]=jvj+5; 
(*f[4086])( );     /*ENSATT0(SUJ,jvj+5)*/
pile[v[22]]=301; pile[WZ1]=SUJ; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(301,SUJ,jvj+6)*/
if(x[jvj+6]==68) goto l5;
V23=x[jvj+6];
pile[v[22]]=0; pile[WZ1]=(-4752); 
(*f[37])( );     /*SRA0(0,(-4752),V19)*/
V19=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V19; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,V19,301,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V20,(-4390),V21)*/
V21=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V23; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(20,V23,V21,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; 
(*f[40])( );     /*SLG0(V22)*/
l5:pile[v[22]]=109; pile[WZ1]=SUJ; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,SUJ,jvj+7)*/
V4=x[jvj+7];
if((V4<=sepcod)) goto l6;
V34=x[jvj+7];
pile[v[22]]=0; pile[WZ1]=(-4752); 
(*f[37])( );     /*SRA0(0,(-4752),V30)*/
V30=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V30; pile[WZ2]=164; 
(*f[42])( );     /*SRA1(135,V30,164,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=109; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(20,109,V31,V32)*/
V32=pile[WZ3]; 
pile[WZ1]=V34; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,V34,V32,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; 
(*f[40])( );     /*SLG0(V33)*/
l6:if((V4>sepbase)) goto l7;
V39=x[jvj+7];
pile[v[22]]=0; pile[WZ1]=(-4752); 
(*f[37])( );     /*SRA0(0,(-4752),V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=280; 
(*f[42])( );     /*SRA1(135,V35,280,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=109; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(20,109,V36,V37)*/
V37=pile[WZ3]; 
pile[WZ1]=V39; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V39,V37,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; 
(*f[40])( );     /*SLG0(V38)*/
l7:V18=x[SUJ];
V42=x[jvj+5];
l8:if((V42>0)) goto l9;
pile[v[22]]=110; pile[WZ1]=SUJ; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(110,SUJ,V3)*/
V3=pile[WZ2]; 
l12:v[0]=jvj; v[22]-=1; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=jvj+2; 
(*f[4039])( );     /*Z179Z0(jvj+2)*/
x[jvj+1]=t[x[jvj+1]];
goto l1;
l4:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; 
(*f[4040])( );     /*Z181Z0(jvj+4)*/
x[jvj+3]=t[x[jvj+3]];
goto l3;
l9:NNNX=s[V42];
if(NNNX==301||NNNX==258||NNNX==159||NNNX==110||NNNX==109) goto l10;
V15=NNNX;
pile[v[22]]=0; pile[WZ1]=(-4752); 
(*f[37])( );     /*SRA0(0,(-4752),V13)*/
V13=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V15; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(20,V15,V13,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V14,(-740),V16)*/
V16=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V18; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(20,V18,V16,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=V17; 
(*f[40])( );     /*SLG0(V17)*/
l10:V42=t[V42];
goto l8;
l11:V29=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4752); 
(*f[37])( );     /*SRA0(0,(-4752),V24)*/
V24=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V24; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V24,300,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=110; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(20,110,V25,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V26,(-740),V27)*/
V27=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V29; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(20,V29,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
goto l12;
}
