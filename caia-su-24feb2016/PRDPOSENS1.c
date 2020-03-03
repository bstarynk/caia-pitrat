#include "dx.h"
void PRDPOSENS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V6=0,K=0,V2=0,V1=0;
int N,EE,T,I,E;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=11443;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==4032&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; EE=pile[v[22]+1]; T=pile[v[22]+2]; I=pile[v[22]+3]; E=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((I<=N)) goto l2;
pile[v[22]]=EE; pile[WZ1]=T; 
(*f[207])( );     /*PLUE2(EE,T)*/
l2:x[jvj+5]=x[E] ;z[jvj+5]=z[E];
l1:if((x[jvj+5]<=0)) goto l6;
x[jvj+3]=s[x[jvj+5]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+5];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+3,V3)*/
V3=pile[WZ2]; 
if((V3!=I)) goto l3;
pile[v[22]]=195; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(195,jvj+3,jvj+4)*/
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+3,V5)*/
V5=pile[WZ2]; 
V6=I+1;
l4:if((x[jvj+4]<=0)) goto l6;
K=s[x[jvj+4]];
pile[v[22]]=K; pile[WZ1]=V5; 
(*f[1006])( );if(v[102]) goto l5;     /*POWER0(K,V5,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=T; 
(*f[1024])( );if(v[102]) goto l5;     /*POSPRD0(V2,T,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=N; pile[WZ1]=EE; pile[WZ2]=V1; pile[WZ3]=V6; pile[WZ4]=E; 
(*f[4032])( );     /*PRDPOSENS1(N,EE,V1,V6,E)*/
l5:x[jvj+4]=t[x[jvj+4]];
goto l4;
l3:x[jvj+5]=t[x[jvj+5]];
goto l1;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
}
