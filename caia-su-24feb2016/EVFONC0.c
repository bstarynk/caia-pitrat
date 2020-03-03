#include "dx.h"
void EVFONC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,Z=0,V9=0,V16=0,V11=0,V12=0,V19=0,V21=0,V22=0,V24=0;
int A,B,C,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; C=pile[v[22]+2]; I=pile[v[22]+3]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=146; pile[WZ1]=B; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(146,B,jvj+1)*/
if((x[jvj+1]==20)) goto l1;
if((x[jvj+1]!=41)) goto l2;
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,A,V16)*/
V16=pile[WZ2]; 
pile[WZ1]=C; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,C,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=V16; pile[WZ2]=B; 
(*f[617])( );if(v[102]) goto l2;     /*EVLD0(V11,V16,B,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; pile[WZ1]=I; 
(*f[99])( );     /*SPM0(V12,I,J)*/
J=pile[WZ2]; 
l4:v[0]=jvj; v[22]-=5; pile[v[22]+4]=J; v[102]=0;return;
l1:pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,A,jvj+2)*/
pile[WZ1]=C; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,C,jvj+3)*/
V3=x[jvj+2];
V4=x[jvj+3];
pile[v[22]]=V4; pile[WZ1]=V3; pile[WZ2]=B; 
(*f[617])( );if(v[102]) goto l2;     /*EVLD0(V4,V3,B,Z)*/
Z=pile[WZ3]; 
V9=Z;
V24=V9;
pile[v[22]]=V24; pile[WZ1]=I; 
(*f[221])( );     /*SRN0(V24,I,J)*/
J=pile[WZ2]; 
goto l4;
l2:pile[v[22]]=241; pile[WZ1]=B; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,B,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(A,I,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=V21; 
(*f[64])( );     /*SRA2(V19,V21,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=C; pile[WZ1]=V22; 
(*f[2077])( );     /*SPR0(C,V22,J)*/
J=pile[WZ2]; 
goto l4;
l3:v[0]=jvj; v[22]-=5; v[102]=1;return;
}
