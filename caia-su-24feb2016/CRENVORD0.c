#include "dx.h"
void CRENVORD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0;
int N,UR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=11539;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==560&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; UR=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((UR==65)) goto l1;
if((UR!=77)) goto l5;
x[jvj+4]=1454 ;z[jvj+4]=1454;
l4:pile[v[22]]=905; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(905,jvj+4,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(645,597,jvj+2)*/
l2:if((x[jvj+2]<=0)) goto l5;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+3,V2)*/
V2=pile[WZ2]; 
if((V2!=N)) goto l3;
pile[v[22]]=N; pile[WZ1]=V3; pile[WZ2]=jvj+3; 
(*f[312])( );     /*CRENSORDBIS0(N,V3,jvj+3)*/
pile[v[22]]=81; pile[WZ1]=32; pile[WZ2]=N; pile[WZ3]=67; 
(*f[313])( );     /*EDITORD1(81,32,N,67)*/
l5:pile[v[22]]=81; pile[WZ1]=32; 
(*f[356])( );     /*EAX1(81,32)*/
(*f[113])( );     /*EAK0()*/
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:x[jvj+4]=1453 ;z[jvj+4]=1453;
goto l4;
l3:x[jvj+2]=t[x[jvj+2]];
goto l2;
}
