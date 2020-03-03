#include "dx.h"
void SRF1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V2=0,V1=0,K=0,V23=0,V22=0,V17=0,V13=0,V14=0;
int P;
int T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

P=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
N=8192;
V2=P;
V1=(-V2);
K=V1;
pile[v[22]]=128; pile[WZ1]=77; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(128,77,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
v[0]=jvj; v[22]-=2; v[102]=1;return;
l2:x[jvj+6]=s[x[jvj+1]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+1];
V23=N;
V22=K;
x[jvj+2]=x[jvj+6] ;z[jvj+2]=z[jvj+6];
l5:if((V23==1)) goto l7;
if((V23<=1)) goto l3;
if((V22>=V23)) goto l8;
pile[v[22]]=134; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(134,jvj+2,jvj+3)*/
V17=V23/2;
x[jvj+2]=x[jvj+3] ;z[jvj+2]=z[jvj+3];
V22=V22;
V23=V17;
goto l5;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l6:pile[v[22]]=135; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(135,jvj+2,jvj+4)*/
l4:x[T]=x[jvj+4] ;z[T]=z[jvj+4];
v[0]=jvj; v[22]-=2; v[102]=0;return;
l7:if((V22==1)) goto l6;
if((V22!=0)) goto l3;
pile[v[22]]=134; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(134,jvj+2,jvj+4)*/
goto l4;
l8:pile[v[22]]=135; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(135,jvj+2,jvj+5)*/
V13=V22-V23;
V14=V23/2;
x[jvj+2]=x[jvj+5] ;z[jvj+2]=z[jvj+5];
V22=V13;
V23=V14;
goto l5;
}
