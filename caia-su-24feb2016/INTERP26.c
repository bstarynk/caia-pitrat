#include "dx.h"
void INTERP26(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int ZZG,ZZBL,ZZN,SS1,S1,NS1,N1;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

ZZG=pile[v[22]]; ZZBL=pile[v[22]+1]; ZZN=pile[v[22]+2]; SS1=pile[v[22]+3]; S1=pile[v[22]+4]; NS1=pile[v[22]+5]; N1=pile[v[22]+6]; RES=pile[v[22]+7]; v[22]+=8; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(216,158,jvj+1)*/
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0((-200),416,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=41; pile[WZ2]=158; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+7,41,158,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=N1; pile[WZ2]=140; pile[WZ3]=NS1; pile[WZ4]=jvj+8; pile[WZ5]=jvj+2; 
(*f[197])( );     /*QUADRI5(130,N1,140,NS1,jvj+8,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+2)*/
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0((-200),416,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=S1; pile[WZ2]=163; pile[WZ3]=jvj+10; 
(*f[631])( );     /*TRI16(jvj+9,S1,163,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=SS1; pile[WZ2]=158; pile[WZ3]=96; pile[WZ4]=jvj+10; pile[WZ5]=jvj+3; 
(*f[48])( );     /*QUADRI1(140,SS1,158,96,jvj+10,jvj+3)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+3)*/
V1=vg[ZZG];
if((V1<=0)) goto l1;
x[jvj+4]=V1 ;z[jvj+4]=(V1<=sepcte) ? V1 : 0;
pile[v[22]]=135; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(135,jvj+4,jvj+5)*/
x[jvj+6]=vo[20];z[jvj+6]=vz[20];
pile[v[22]]=jvj+6; pile[WZ1]=558; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(jvj+6,558,jvj+1)*/
pile[v[22]]=jvj+5; pile[WZ1]=RES; 
(*f[598])( );     /*EVLQ2(jvj+5,RES)*/
l2:v[0]=jvj; v[22]-=8; return;
l1:x[RES]=135 ;z[RES]=135;
goto l2;
}
