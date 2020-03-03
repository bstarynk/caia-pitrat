#include "dx.h"
void LCOPT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V9=0,V10=0,V7=0,V6=0,V2=0,V1=0,V11=0,DX=0,V4=0;
int P,DP;
int DF;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

P=pile[v[22]]; DP=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V11=DP;
l9:DF=DX=incon;
V7=V11+1;
V6=bh[v[1]][V7];
if((V6!=93)) goto l1;
DF=V7;
l1:V2=V11+1;
V1=bh[v[1]][V2];
if((V1==93)) goto l3;
pile[v[22]]=V11; pile[WZ1]=jvj+1; 
(*f[358])( );if(v[102]) goto l3;     /*LREG0(V11,jvj+1,DX)*/
DX=pile[WZ2]; 
V3=bh[v[1]][DX];
if(V3==59||V3==93) goto l2;
pile[v[22]]=20; pile[WZ1]=10104; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10104,0,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(41,1,V9,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=V10; 
(*f[40])( );     /*SLG0(V10)*/
l2:pile[v[22]]=P; pile[WZ1]=184; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(P,184,jvj+1)*/
l3:if(DF==incon) goto l4;
l8:v[0]=jvj; v[22]-=3; pile[v[22]+2]=DF; v[102]=0;return;
l4:if(DX!=incon) goto l5;
l7:v[0]=jvj; v[22]-=3; v[102]=1;return;
l5:V4=bh[v[1]][DX];
if(V4==93||V4==32) goto l6;
if((V4!=59)) goto l7;
V11=DX;
goto l9;
l6:DF=DX;
goto l8;
}
