#include "dx.h"
void SPA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I,K,P;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; K=pile[v[22]+1]; P=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[K]==406)) goto l1;
if((x[K]!=1146)) goto l2;
if((fx[P]=fopen(c[4],"r"))==NULL) ERR0();v[17]=P;
l2:if(x[K]!=1153&&x[K]!=686) goto l5;
if((v[24]>0)) goto l3;
x[jvj+1]=vo[20];z[jvj+1]=vz[20];
pile[v[22]]=346; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(346,jvj+1,jvj+2)*/
if((x[jvj+2]==68)) goto l4;
l3:if((fx[P]=fopen(c[4],"w"))==NULL) ERR0();v[27]=P;
v[26]=1;
l4:if((v[24]!=0)) goto l5;
x[jvj+3]=vo[20];z[jvj+3]=vz[20];
pile[v[22]]=346; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(346,jvj+3,jvj+4)*/
if((x[jvj+4]!=68)) goto l5;
v[27]=0;
l5:v[0]=jvj; v[22]-=3; return;
l1:v[P]=system(c[4]);
goto l2;
}
