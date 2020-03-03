#include "dx.h"
void SMX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V9=0,V10=0,V7=0,V13=0;
int X,Z,N,K;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Z=pile[v[22]+1]; N=pile[v[22]+2]; K=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((N==1)) goto l3;
if((N<=1)) goto l6;
if((K>=N)) goto l5;
pile[v[22]]=134; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(134,X,jvj+5)*/
V7=N/2;
pile[v[22]]=jvj+5; pile[WZ1]=Z; pile[WZ2]=V7; pile[WZ3]=K; 
(*f[722])( );     /*SMX0(jvj+5,Z,V7,K)*/
l2:pile[v[22]]=134; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(134,X,jvj+2)*/
l6:v[0]=jvj; v[22]-=4; return;
l3:if((K==1)) goto l4;
if((K!=0)) goto l6;
pile[v[22]]=X; pile[WZ1]=134; pile[WZ2]=Z; 
(*f[35])( );     /*CHGC1(X,134,Z)*/
goto l6;
l4:pile[v[22]]=X; pile[WZ1]=135; pile[WZ2]=Z; 
(*f[35])( );     /*CHGC1(X,135,Z)*/
goto l6;
l5:pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(135,X,jvj+3)*/
V3=N/2;
V4=K-N;
pile[v[22]]=jvj+3; pile[WZ1]=Z; pile[WZ2]=V3; pile[WZ3]=V4; 
(*f[722])( );     /*SMX0(jvj+3,Z,V3,V4)*/
l1:pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(135,X,jvj+1)*/
goto l6;
l7:pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(216,158,jvj+4)*/
V9=N/2;
V10=K-N;
pile[v[22]]=X; pile[WZ1]=135; 
(*f[35])( );     /*CHGC1(X,135,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=Z; pile[WZ2]=V9; pile[WZ3]=V10; 
(*f[722])( );     /*SMX0(jvj+4,Z,V9,V10)*/
pile[v[22]]=158; pile[WZ1]=jvj+4; 
(*f[71])( );     /*ENLV0(158,jvj+4)*/
goto l6;
l8:pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(216,158,jvj+6)*/
V13=N/2;
pile[v[22]]=X; pile[WZ1]=134; 
(*f[35])( );     /*CHGC1(X,134,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=Z; pile[WZ2]=V13; pile[WZ3]=K; 
(*f[722])( );     /*SMX0(jvj+6,Z,V13,K)*/
pile[v[22]]=158; pile[WZ1]=jvj+6; 
(*f[71])( );     /*ENLV0(158,jvj+6)*/
goto l6;
}
