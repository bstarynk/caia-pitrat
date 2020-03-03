#include "dx.h"
void PLUG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V6=0;
int AT,B,N,K;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

AT=pile[v[22]]; B=pile[v[22]+1]; N=pile[v[22]+2]; K=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=AT; pile[WZ1]=B; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(AT,B,jvj+1)*/
x[jvj+7]=x[jvj+1] ;z[jvj+7]=z[jvj+1];
l3:if((x[jvj+7]>0)) goto l4;
pile[v[22]]=jvj+1; pile[WZ1]=N; 
(*f[68])( );     /*PLUE0(jvj+1,N)*/
l5:pile[v[22]]=B; pile[WZ1]=AT; pile[WZ2]=jvj+1; 
(*f[34])( );     /*CHGC0(B,AT,jvj+1)*/
v[0]=jvj; v[22]-=4; return;
l2:x[jvj+6]=t[x[jvj+6]];
l1:if((x[jvj+6]<=0)) goto l5;
x[jvj+3]=s[x[jvj+6]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+6];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+2,jvj+3,V4,jvj+4)*/
V4=pile[WZ2]; 
pile[v[22]]=N; pile[WZ3]=jvj+5; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(N,jvj+3,V6,jvj+5)*/
V6=pile[WZ2]; 
if((V4==V6)) goto l2;
x[jvj+7]=t[x[jvj+7]];
goto l3;
l4:x[jvj+2]=s[x[jvj+7]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+7];
x[jvj+6]=x[K] ;z[jvj+6]=z[K];
goto l1;
}
