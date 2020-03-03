#include "dx.h"
void CPTEXP1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V17=0,V11=0;
int A,VX,N,I;
int RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; VX=pile[v[22]+1]; N=pile[v[22]+2]; I=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,A,jvj+4)*/
if((x[jvj+4]==41)) goto l5;
if((x[jvj+4]!=484)) goto l7;
V2=incon;
pile[v[22]]=A; pile[WZ1]=VX; pile[WZ2]=jvj+1; 
(*f[760])( );     /*MEMEX0(A,VX,jvj+1)*/
if((x[jvj+1]==135)) goto l1;
V2=0;
l2:if((V2==0)) goto l3;
pile[v[22]]=N; pile[WZ1]=510; pile[WZ2]=I; 
(*f[186])( );     /*BTC0(N,510,I)*/
l6:x[RES]=135 ;z[RES]=135;
l10:v[0]=jvj; v[22]-=5; return;
l1:V2=1;
goto l2;
l3:pile[v[22]]=N; pile[WZ1]=1260; pile[WZ2]=A; 
(*f[774])( );     /*TJPLUS0(N,1260,A)*/
goto l6;
l5:x[RES]=135 ;z[RES]=135;
pile[v[22]]=N; pile[WZ1]=1260; pile[WZ2]=A; 
(*f[774])( );     /*TJPLUS0(N,1260,A)*/
goto l10;
l7:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,A,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==486)) goto l8;
if((x[jvj+6]!=596)) goto l9;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,A,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+8,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,A,jvj+9)*/
V11=I*V17;
pile[v[22]]=jvj+9; pile[WZ1]=VX; pile[WZ2]=N; pile[WZ3]=V11; pile[WZ4]=jvj+10; 
(*f[4100])( );     /*CPTEXP1(jvj+9,VX,N,V11,jvj+10)*/
if((x[jvj+10]==135)) goto l6;
l9:x[RES]=134 ;z[RES]=134;
goto l10;
l8:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,A,jvj+7)*/
l4:if((x[jvj+7]<=0)) goto l6;
x[jvj+2]=s[x[jvj+7]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+7];
pile[v[22]]=jvj+2; pile[WZ1]=VX; pile[WZ2]=N; pile[WZ3]=jvj+3; 
(*f[4071])( );     /*CPTEXP0(jvj+2,VX,N,jvj+3)*/
if((x[jvj+3]==134)) goto l9;
x[jvj+7]=t[x[jvj+7]];
goto l4;
}
