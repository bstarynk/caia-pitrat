#include "dx.h"
void INTERP21(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int ZZG,ZZBL,ZZN,SS1,S1;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

ZZG=pile[v[22]]; ZZBL=pile[v[22]+1]; ZZN=pile[v[22]+2]; SS1=pile[v[22]+3]; S1=pile[v[22]+4]; RES=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(216,158,jvj+1)*/
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0((-200),416,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=S1; pile[WZ2]=163; pile[WZ3]=jvj+7; 
(*f[631])( );     /*TRI16(jvj+6,S1,163,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=SS1; pile[WZ2]=158; pile[WZ3]=96; pile[WZ4]=jvj+7; pile[WZ5]=jvj+2; 
(*f[48])( );     /*QUADRI1(140,SS1,158,96,jvj+7,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+2)*/
V1=vg[ZZG];
if((V1<=0)) goto l1;
x[jvj+3]=V1 ;z[jvj+3]=(V1<=sepcte) ? V1 : 0;
pile[v[22]]=135; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(135,jvj+3,jvj+4)*/
x[jvj+5]=vo[20];z[jvj+5]=vz[20];
pile[v[22]]=jvj+5; pile[WZ1]=558; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(jvj+5,558,jvj+1)*/
pile[v[22]]=jvj+4; pile[WZ1]=RES; 
(*f[598])( );     /*EVLQ2(jvj+4,RES)*/
l2:v[0]=jvj; v[22]-=6; return;
l1:x[RES]=135 ;z[RES]=135;
goto l2;
}
