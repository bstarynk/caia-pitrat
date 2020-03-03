#include "dx.h"
void SDP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V32=0,V2=0,V8=0,V7=0,K=0,V6=0,L=0,V13=0,V12=0,V19=0,V34=0,V23=0,V22=0,V25=0,V24=0,V15=0,V18=0,V16=0,V29=0,V31=0;
int I,X;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=277; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(277,X,jvj+1)*/
if((x[jvj+1]==480)) goto l1;
if((x[jvj+1]!=481)) goto l2;
pile[v[22]]=498; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(498,X,jvj+7)*/
pile[v[22]]=436; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+7,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+8,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=158; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,X,jvj+9)*/
if((x[jvj+10]=w[x[jvj+9]][3])==incon) goto l2;
pile[v[22]]=X; pile[WZ1]=jvj+10; pile[WZ3]=jvj+11; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(X,jvj+10,V34,jvj+11)*/
V34=pile[WZ2]; 
V23=I+1;
V22=V23+1;
V25=V34;
V24=V25;
pile[v[22]]=V22; pile[WZ1]=V24; pile[WZ2]=jvj+9; 
(*f[179])( );     /*SDX1(V22,V24,jvj+9,V15)*/
V15=pile[WZ3]; 
V18=V15+1;
pile[v[22]]=V19; pile[WZ1]=V18; 
(*f[64])( );     /*SRA2(V19,V18,V16)*/
V16=pile[WZ2]; 
V29=V16+1;
J=V29;
c[v[1]][V23]=123;
c[v[1]][V15]=125;
c[v[1]][I]=34;
c[v[1]][V16]=34;
l3:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l1:pile[v[22]]=498; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(498,X,jvj+2)*/
pile[v[22]]=436; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+2,jvj+3)*/
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+3,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=158; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,X,jvj+4)*/
if((x[jvj+5]=w[x[jvj+4]][3])==incon) goto l2;
pile[v[22]]=X; pile[WZ1]=jvj+5; pile[WZ3]=jvj+6; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(X,jvj+5,V32,jvj+6)*/
V32=pile[WZ2]; 
V2=I+1;
V8=V32;
V7=V8;
pile[v[22]]=V3; pile[WZ1]=V2; 
(*f[64])( );     /*SRA2(V3,V2,K)*/
K=pile[WZ2]; 
V6=K+1;
c[v[1]][K]=123;
pile[v[22]]=V6; pile[WZ1]=V7; pile[WZ2]=jvj+4; 
(*f[179])( );     /*SDX1(V6,V7,jvj+4,L)*/
L=pile[WZ3]; 
V13=L+1;
V12=V13+1;
c[v[1]][L]=125;
J=V12;
c[v[1]][I]=34;
c[v[1]][V13]=34;
goto l3;
l2:V31=x[X];
pile[v[22]]=V31; pile[WZ1]=I; 
(*f[221])( );     /*SRN0(V31,I,J)*/
J=pile[WZ2]; 
goto l3;
}
