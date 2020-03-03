#include "dx.h"
void SPJ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,L=0,V3=0,II=0,V10=0;
int I,X,N;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10437;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2081&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; N=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V10=I;
x[jvj+2]=x[X] ;z[jvj+2]=z[X];
l1:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+2,jvj+3)*/
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+3,V4)*/
V4=pile[WZ2]; 
if((V4==0)) goto l2;
if((V4<=0)) goto l4;
V3=V10+1;
c[v[1]][V10]=44;
L=V3;
l3:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+2,jvj+4)*/
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+4,jvj+5)*/
pile[v[22]]=L; pile[WZ1]=N; 
(*f[2147])( );     /*SPP0(L,N,jvj+5,II)*/
II=pile[WZ3]; 
x[jvj+2]=x[jvj+4] ;z[jvj+2]=z[jvj+4];
V10=II;
goto l1;
l2:L=V10;
goto l3;
l4:J=V10;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
}
