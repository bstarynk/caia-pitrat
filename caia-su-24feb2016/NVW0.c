#include "dx.h"
void NVW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V7=0;
int X,N,K;
int T,AT,XR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; N=pile[v[22]+1]; K=pile[v[22]+2]; T=pile[v[22]+3]; AT=pile[v[22]+4]; XR=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((N==0)) goto l1;
if((N<=0)) goto l6;
if((K>=N)) goto l2;
pile[v[22]]=134; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(134,X,jvj+5)*/
V7=N/2;
x[jvj+8]=134 ;z[jvj+8]=134;
pile[v[22]]=jvj+5; pile[WZ1]=V7; pile[WZ2]=K; pile[WZ3]=jvj+3; pile[WZ4]=jvj+2; pile[WZ5]=jvj+4; 
(*f[351])( );if(v[102]) goto l6;     /*NVW0(jvj+5,V7,K,jvj+3,jvj+2,jvj+4)*/
l3:if((x[jvj+3]!=250)) goto l5;
pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(135,X,jvj+6)*/
pile[v[22]]=134; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(134,X,jvj+7)*/
x[T]=x[X] ;z[T]=z[X];
x[AT]=x[jvj+8] ;z[AT]=z[jvj+8];
l4:x[XR]=x[jvj+4] ;z[XR]=z[jvj+4];
l7:v[0]=jvj; v[22]-=6; v[102]=0;return;
l1:x[T]=250 ;z[T]=250;
x[AT]=250 ;z[AT]=250;
x[XR]=x[X] ;z[XR]=z[X];
goto l7;
l2:pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(135,X,jvj+1)*/
V1=N/2;
V2=K-N;
x[jvj+8]=135 ;z[jvj+8]=135;
pile[v[22]]=jvj+1; pile[WZ1]=V1; pile[WZ2]=V2; pile[WZ3]=jvj+3; pile[WZ4]=jvj+2; pile[WZ5]=jvj+4; 
(*f[351])( );if(v[102]) goto l6;     /*NVW0(jvj+1,V1,V2,jvj+3,jvj+2,jvj+4)*/
goto l3;
l5:x[T]=x[jvj+3] ;z[T]=z[jvj+3];
x[AT]=x[jvj+2] ;z[AT]=z[jvj+2];
goto l4;
l6:x[T]=x[AT]=x[XR]=incon;
v[0]=jvj; v[22]-=6; v[102]=1;return;
}
