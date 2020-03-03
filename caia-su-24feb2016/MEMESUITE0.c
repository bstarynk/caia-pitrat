#include "dx.h"
void MEMESUITE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V1=0,V20=0,V6=0;
int A,B;
int RES;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=120; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,A,jvj+1)*/
l1:pile[v[22]]=120; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,B,jvj+2)*/
l5:pile[v[22]]=120; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,A,jvj+5)*/
pile[WZ1]=B; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,B,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[1345])( );     /*MEMESUITE0(jvj+5,jvj+6,jvj+7)*/
if((x[jvj+7]==134)) goto l3;
l6:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,A,jvj+8)*/
pile[WZ1]=B; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,B,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+8,jvj+10)*/
if((x[jvj+11]=w[x[jvj+10]][3])==incon) goto l7;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+11; pile[WZ3]=jvj+12; 
(*f[45])( );if(v[102]) goto l7;     /*FNDZ0(jvj+8,jvj+11,V18,jvj+12)*/
V18=pile[WZ2]; 
V1=V18;
pile[v[22]]=jvj+9; pile[WZ3]=jvj+13; 
(*f[45])( );if(v[102]) goto l7;     /*FNDZ0(jvj+9,jvj+11,V20,jvj+13)*/
V20=pile[WZ2]; 
V6=V20;
if((V1!=V6)) goto l3;
l7:x[RES]=135 ;z[RES]=135;
l8:v[0]=jvj; v[22]-=3; return;
l2:pile[v[22]]=120; pile[WZ1]=B; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,B,jvj+3)*/
l3:x[RES]=134 ;z[RES]=134;
goto l8;
l4:pile[v[22]]=120; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,A,jvj+4)*/
goto l3;
}
