#include "dx.h"
void SIMPCTA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V17=0;
int A;
int E,S;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; E=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]==486)) goto l1;
if((x[jvj+2]==485)) goto l2;
if((x[jvj+2]!=52)) goto l3;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,A,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[1682])( );if(v[102]) goto l3;     /*SIMPCTA1(jvj+6,jvj+7)*/
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+7,V18)*/
V18=pile[WZ2]; 
V17=(-V18);
x[jvj+4]=x[jvj+7] ;z[jvj+4]=z[jvj+7];
pile[v[22]]=jvj+7; pile[WZ1]=510; pile[WZ2]=V17; 
(*f[43])( );     /*CHGC2(jvj+7,510,V17)*/
l4:pile[v[22]]=510; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(510,jvj+4,S)*/
S=pile[WZ2]; 
pile[v[22]]=1260; pile[WZ2]=E; 
(*f[33])( );     /*FNDE0(1260,jvj+4,E)*/
v[0]=jvj; v[22]-=3; pile[v[22]+2]=S; v[102]=0;return;
l1:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,A,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1680])( );if(v[102]) goto l3;     /*PRDFACT0(jvj+3,jvj+4)*/
goto l4;
l2:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,A,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; 
(*f[1681])( );if(v[102]) goto l3;     /*SOMFACT0(jvj+5,jvj+4)*/
goto l4;
l3:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,A,jvj+8)*/
if((x[jvj+8]!=41)) goto l5;
pile[v[22]]=20; pile[WZ2]=jvj+9; 
(*f[409])( );     /*TRI14(20,A,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+4; 
(*f[1680])( );if(v[102]) goto l5;     /*PRDFACT0(jvj+9,jvj+4)*/
goto l4;
l5:x[E]=S=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
}
