#include "dx.h"
void SORTROUV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,EE=0,C=0,V2=0,I=0,V12=0,V19=0,V22=0,V21=0,V32=0,V33=0,V34=0,II=0,V15=0,V9=0,V10=0,V25=0,V26=0,V28=0,JJ=0,V31=0,V39=0;
int X,E;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[E];
EE=V1;
C=32;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,X,jvj+1)*/
pile[v[22]]=140; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+1,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V2; 
(*f[37])( );     /*SRA0(0,V2,I)*/
I=pile[WZ2]; 
V12=t[EE];
if((V12==0)) goto l3;
if((V12<=0)) goto l2;
V19=s[EE];
x[jvj+2]=V19 ;z[jvj+2]=(V19<=sepcte) ? V19 : 0;
pile[v[22]]=158; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,jvj+2,jvj+5)*/
if((x[jvj+5]==89)) goto l1;
if((x[jvj+5]!=41)) goto l2;
pile[v[22]]=489; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+3)*/
if((x[jvj+3]<=0)) goto l2;
x[jvj+7]=s[x[jvj+3]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+7,V9)*/
V9=pile[WZ2]; 
pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+2,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=C; 
(*f[38])( );     /*SPC0(I,C,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=V10; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V25,V10,41,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V26,58,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=V9; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V28,V9,41,II)*/
II=pile[WZ3]; 
pile[v[22]]=II; pile[WZ1]=V12; pile[WZ2]=44; 
(*f[1976])( );     /*SORTROUV1(II,V12,44,JJ)*/
JJ=pile[WZ3]; 
l2:v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+4)*/
if((x[jvj+4]<=0)) goto l2;
x[jvj+6]=s[x[jvj+4]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+4];
pile[v[22]]=162; 
(*f[219])( );if(v[102]) goto l2;     /*FNDC2(162,jvj+2,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+6,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=C; 
(*f[38])( );     /*SPC0(I,C,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=V22; 
(*f[38])( );     /*SPC0(V32,V22,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V33,58,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=V21; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V34,V21,41,II)*/
II=pile[WZ3]; 
pile[v[22]]=II; pile[WZ1]=V12; pile[WZ2]=44; 
(*f[1976])( );     /*SORTROUV1(II,V12,44,V15)*/
V15=pile[WZ3]; 
goto l2;
l3:V31=0;
V39=I;
if((V39<0)) goto l2;
pile[v[22]]=V39; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V39,3)*/
goto l2;
}
