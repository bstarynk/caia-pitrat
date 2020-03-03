#include "dx.h"
void MODPOS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V6=0,V2=0,V8=0,K=0,V3=0,Y=0,M=0;
int N,D;
int E;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=11368;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3518&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; D=pile[v[22]+1]; E=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=280; pile[WZ1]=D; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(280,D,M)*/
M=pile[WZ2]; 
if((M<0)) goto l8;
pile[v[22]]=N; pile[WZ1]=jvj+4; 
(*f[1007])( );if(v[102]) goto l8;     /*DECFACTPREM0(N,jvj+4)*/
x[jvj+3]=0 ;z[jvj+3]=0;
l2:if((x[jvj+4]>0)) goto l3;
x[E]=x[jvj+3] ;z[E]=z[jvj+3];
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:V2=1;
l6:K=1;
l5:if((K>V2)) goto l4;
pile[v[22]]=K; pile[WZ1]=V8; 
(*f[1006])( );if(v[102]) goto l7;     /*POWER0(K,V8,V3)*/
V3=pile[WZ2]; 
Y=V3;
if((Y>32)) goto l7;
pile[v[22]]=jvj+3; pile[WZ1]=Y; 
(*f[207])( );     /*PLUE2(jvj+3,Y)*/
l7:K++;
goto l5;
l3:x[jvj+2]=s[x[jvj+4]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+4];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(510,jvj+2,V8)*/
V8=pile[WZ2]; 
V2=incon;
if((M<=0)) goto l1;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(515,jvj+2,V7)*/
V7=pile[WZ2]; 
V6=V7*M;
V2=V6;
goto l6;
l4:x[jvj+4]=t[x[jvj+4]];
goto l2;
l8:x[jvj+5]=0 ;z[jvj+5]=0;
x[E]=x[jvj+5] ;z[E]=z[jvj+5];
goto l9;
}
