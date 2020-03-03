#include "dx.h"
void SORTROUV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V16=0,V19=0,V18=0,V35=0,V37=0,V28=0,V29=0,V30=0,II=0,V6=0,V7=0,V21=0,V22=0,V24=0,V36=0,V38=0;
int I,EE,C;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; EE=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V37=C;
V36=EE;
V35=I;
l2:V9=t[V36];
if((V9==0)) goto l5;
if((V9<=0)) goto l3;
V16=s[V36];
x[jvj+1]=V16 ;z[jvj+1]=(V16<=sepcte) ? V16 : 0;
pile[v[22]]=158; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+1,jvj+4)*/
if((x[jvj+4]==89)) goto l1;
if((x[jvj+4]!=41)) goto l3;
pile[v[22]]=489; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(489,jvj+1,jvj+2)*/
if((x[jvj+2]<=0)) goto l3;
x[jvj+6]=s[x[jvj+2]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+2];
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+6,V6)*/
V6=pile[WZ2]; 
pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+1,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=V37; 
(*f[38])( );     /*SPC0(V35,V37,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=V7; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V21,V7,41,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V22,58,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=V6; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V24,V6,41,II)*/
II=pile[WZ3]; 
V35=II;
V36=V9;
V37=44;
goto l2;
l1:pile[v[22]]=489; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(489,jvj+1,jvj+3)*/
if((x[jvj+3]<=0)) goto l3;
x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=162; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(162,jvj+1,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+5,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=V37; 
(*f[38])( );     /*SPC0(V35,V37,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=V19; 
(*f[38])( );     /*SPC0(V28,V19,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V29,58,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=V18; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V30,V18,41,II)*/
II=pile[WZ3]; 
V35=II;
V36=V9;
V37=44;
goto l2;
l3:v[0]=jvj; v[22]-=4; v[102]=1;return;
l5:J=0;
V38=V35;
if((V38<0)) goto l4;
pile[v[22]]=V38; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V38,3)*/
l4:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; v[102]=0;return;
}
