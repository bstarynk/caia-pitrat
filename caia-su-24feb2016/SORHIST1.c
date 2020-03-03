#include "dx.h"
void SORHIST1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,I=0,V2=0,V5=0,V15=0,V4=0,V17=0,L=0,K=0,V10=0,V19=0;
int II,X;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

II=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((II>0)) goto l1;
I=0;
l4:pile[v[22]]=218; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(218,X,jvj+3)*/
V2=incon;
pile[v[22]]=158; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,X,jvj+1)*/
pile[v[22]]=135; pile[WZ1]=I; 
(*f[42])( );     /*SRA1(135,I,jvj+1,V2)*/
V2=pile[WZ3]; 
l5:V17=x[jvj+3];
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=V2; 
(*f[39])( );     /*SDX0(20,V17,V2,V5)*/
V5=pile[WZ3]; 
V4=incon;
pile[v[22]]=715; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(715,X,jvj+2)*/
pile[v[22]]=V5; pile[WZ1]=43; 
(*f[249])( );     /*SPC1(V5,43,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V15; pile[WZ2]=jvj+2; 
(*f[42])( );     /*SRA1(135,V15,jvj+2,V4)*/
V4=pile[WZ3]; 
l6:L=V4;
pile[v[22]]=159; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,X,jvj+4)*/
if((x[jvj+4]==0)) goto l7;
V10=L+1;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=V10; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; pile[WZ3]=91; pile[WZ4]=93; 
(*f[1168])( );if(v[102]) goto l8;     /*SORHISTE0(V10,jvj+4,jvj+5,91,93,K)*/
K=pile[WZ5]; 
c[v[1]][L]=32;
l10:J=0;
V19=K;
if((V19<0)) goto l9;
pile[v[22]]=V19; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V19,3)*/
l9:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:V1=II+1;
I=V1;
c[v[1]][II]=32;
goto l4;
l2:V2=I;
goto l5;
l3:V4=V5;
goto l6;
l7:K=L;
goto l10;
l8:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
