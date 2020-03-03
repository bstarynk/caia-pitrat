#include "dx.h"
void DMV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,NK=0;
int S,M,N;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

S=pile[v[22]]; M=pile[v[22]+1]; N=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=120; pile[WZ1]=M; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,M,jvj+6)*/
pile[v[22]]=S; pile[WZ1]=jvj+6; pile[WZ2]=N; 
(*f[2205])( );     /*DMV0(S,jvj+6,N)*/
l4:pile[v[22]]=100; pile[WZ1]=M; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,M,jvj+7)*/
if((x[jvj+7]!=185)) goto l5;
pile[v[22]]=160; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(160,M,jvj+8)*/
pile[v[22]]=162; pile[WZ1]=jvj+8; 
(*f[219])( );if(v[102]) goto l5;     /*FNDC2(162,jvj+8,V13)*/
V13=pile[WZ2]; 
if((V13!=36)) goto l5;
pile[v[22]]=103; pile[WZ1]=M; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,M,jvj+9)*/
pile[v[22]]=S; pile[WZ1]=jvj+9; pile[WZ2]=N; 
(*f[2205])( );     /*DMV0(S,jvj+9,N)*/
l5:pile[v[22]]=103; pile[WZ1]=M; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,M,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]==22)) goto l6;
if((x[jvj+11]==43)) goto l6;
l7:v[0]=jvj; v[22]-=3; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[760])( );     /*MEMEX0(jvj+3,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l7;
l3:x[jvj+1]=t[x[jvj+1]];
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=1; pile[WZ1]=N; pile[WZ2]=117; 
(*f[1113])( );     /*INCM0(1,N,117,NK)*/
NK=pile[WZ3]; 
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ3]=NK; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(102,jvj+4,117,NK,jvj+12)*/
pile[v[22]]=S; pile[WZ1]=159; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(S,159,jvj+12)*/
goto l7;
l6:pile[v[22]]=jvj+10; pile[WZ1]=jvj+4; 
(*f[709])( );if(v[102]) goto l7;     /*SUBGEN0(jvj+10,jvj+4)*/
pile[v[22]]=159; pile[WZ1]=S; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(159,S,jvj+1)*/
goto l1;
}
