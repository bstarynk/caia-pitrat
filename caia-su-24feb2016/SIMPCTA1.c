#include "dx.h"
void SIMPCTA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V17=0;
int A;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; RES=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]==486)) goto l1;
if((x[jvj+2]==485)) goto l2;
if((x[jvj+2]!=52)) goto l3;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,A,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1682])( );if(v[102]) goto l3;     /*SIMPCTA1(jvj+5,jvj+6)*/
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+6,V18)*/
V18=pile[WZ2]; 
V17=(-V18);
x[RES]=x[jvj+6] ;z[RES]=z[jvj+6];
pile[v[22]]=jvj+6; pile[WZ1]=510; pile[WZ2]=V17; 
(*f[43])( );     /*CHGC2(jvj+6,510,V17)*/
l5:v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,A,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=RES; 
(*f[1680])( );if(v[102]) goto l3;     /*PRDFACT0(jvj+3,RES)*/
goto l5;
l2:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,A,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=RES; 
(*f[1681])( );if(v[102]) goto l3;     /*SOMFACT0(jvj+4,RES)*/
goto l5;
l3:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,A,jvj+7)*/
if((x[jvj+7]!=41)) goto l4;
pile[v[22]]=20; pile[WZ2]=jvj+8; 
(*f[409])( );     /*TRI14(20,A,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=RES; 
(*f[1680])( );if(v[102]) goto l4;     /*PRDFACT0(jvj+8,RES)*/
goto l5;
l4:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
