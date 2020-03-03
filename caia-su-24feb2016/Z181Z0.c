#include "dx.h"
void Z181Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V22=0,V18=0,V19=0,V20=0,V21=0,V27=0,V23=0,V24=0,V25=0,V26=0,V17=0,NNNX=0,V34=0,V14=0,V12=0,V13=0,V15=0,V16=0,V33=0,V28=0,V29=0,V30=0,V31=0,V32=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=120; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,SUJ,jvj+2)*/
pile[v[22]]=jvj+2; 
(*f[4042])( );     /*Z246Z0(jvj+2)*/
l1:pile[v[22]]=521; pile[WZ1]=SUJ; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(521,SUJ,jvj+3)*/
pile[v[22]]=jvj+3; 
(*f[4041])( );     /*Z183Z0(jvj+3)*/
l2:pile[v[22]]=530; pile[WZ1]=SUJ; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(530,SUJ,jvj+4)*/
pile[v[22]]=jvj+4; 
(*f[4041])( );     /*Z183Z0(jvj+4)*/
l3:pile[v[22]]=613; pile[WZ1]=SUJ; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(613,SUJ,jvj+5)*/
pile[v[22]]=jvj+5; 
(*f[4041])( );     /*Z183Z0(jvj+5)*/
l4:pile[v[22]]=SUJ; pile[WZ1]=jvj+6; 
(*f[4086])( );     /*ENSATT0(SUJ,jvj+6)*/
pile[v[22]]=122; pile[WZ1]=SUJ; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(122,SUJ,jvj+7)*/
V1=x[jvj+7];
if((V1<=sepbase)) goto l5;
V22=x[jvj+7];
pile[v[22]]=0; pile[WZ1]=(-4754); 
(*f[37])( );     /*SRA0(0,(-4754),V18)*/
V18=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V18; pile[WZ2]=164; 
(*f[42])( );     /*SRA1(135,V18,164,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=122; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(20,122,V19,V20)*/
V20=pile[WZ3]; 
pile[WZ1]=V22; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(20,V22,V20,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
l5:if((V1>debobj)) goto l6;
V27=x[jvj+7];
pile[v[22]]=0; pile[WZ1]=(-4754); 
(*f[37])( );     /*SRA0(0,(-4754),V23)*/
V23=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V23; pile[WZ2]=280; 
(*f[42])( );     /*SRA1(135,V23,280,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=122; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(20,122,V24,V25)*/
V25=pile[WZ3]; 
pile[WZ1]=V27; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(20,V27,V25,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; 
(*f[40])( );     /*SLG0(V26)*/
l6:V17=x[SUJ];
V34=x[jvj+6];
l7:if((V34>0)) goto l8;
pile[v[22]]=122; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(122,SUJ,jvj+1)*/
l11:v[0]=jvj; v[22]-=1; return;
l8:NNNX=s[V34];
if(NNNX==122||NNNX==164||NNNX==280||NNNX==120||NNNX==521||NNNX==530||NNNX==613) goto l9;
V14=NNNX;
pile[v[22]]=0; pile[WZ1]=(-4754); 
(*f[37])( );     /*SRA0(0,(-4754),V12)*/
V12=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V14; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V14,V12,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V13,(-740),V15)*/
V15=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(20,V17,V15,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; 
(*f[40])( );     /*SLG0(V16)*/
l9:V34=t[V34];
goto l7;
l10:V33=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4754); 
(*f[37])( );     /*SRA0(0,(-4754),V28)*/
V28=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V28,300,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=122; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(20,122,V29,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V30,(-740),V31)*/
V31=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V33; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(20,V33,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
goto l11;
}
