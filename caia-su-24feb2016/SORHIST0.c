#include "dx.h"
void SORHIST0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V4=0,V14=0,V3=0,V16=0,L=0,K=0,V9=0,V18=0;
int I,X;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=218; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(218,X,jvj+3)*/
V1=incon;
pile[v[22]]=158; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(158,X,jvj+1)*/
pile[v[22]]=135; pile[WZ1]=I; 
(*f[42])( );     /*SRA1(135,I,jvj+1,V1)*/
V1=pile[WZ3]; 
l3:V16=x[jvj+3];
pile[v[22]]=20; pile[WZ1]=V16; pile[WZ2]=V1; 
(*f[39])( );     /*SDX0(20,V16,V1,V4)*/
V4=pile[WZ3]; 
V3=incon;
pile[v[22]]=715; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(715,X,jvj+2)*/
pile[v[22]]=V4; pile[WZ1]=43; 
(*f[249])( );     /*SPC1(V4,43,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V14; pile[WZ2]=jvj+2; 
(*f[42])( );     /*SRA1(135,V14,jvj+2,V3)*/
V3=pile[WZ3]; 
l4:L=V3;
pile[v[22]]=159; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,X,jvj+4)*/
if((x[jvj+4]==0)) goto l5;
V9=L+1;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=V9; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; pile[WZ3]=91; pile[WZ4]=93; 
(*f[1168])( );if(v[102]) goto l6;     /*SORHISTE0(V9,jvj+4,jvj+5,91,93,K)*/
K=pile[WZ5]; 
c[v[1]][L]=32;
l8:J=0;
V18=K;
if((V18<0)) goto l7;
pile[v[22]]=V18; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V18,3)*/
l7:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:V1=I;
goto l3;
l2:V3=V4;
goto l4;
l5:K=L;
goto l8;
l6:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
