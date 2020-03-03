#include "dx.h"
void AJA6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int K,V,AT,RL,I,G;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

K=pile[v[22]]; V=pile[v[22]+1]; AT=pile[v[22]+2]; RL=pile[v[22]+3]; I=pile[v[22]+4]; G=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1088; pile[WZ1]=K; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1088,K,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=V; pile[WZ1]=140; pile[WZ2]=jvj+3; 
(*f[329])( );     /*TRI13(V,140,jvj+3)*/
pile[v[22]]=K; pile[WZ1]=1088; 
(*f[36])( );     /*PLUSC0(K,1088,jvj+3)*/
l4:x[jvj+4]=d[89];z[jvj+4]=0;
pile[v[22]]=AT; pile[WZ1]=1018; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(AT,1018,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=G; pile[WZ2]=201; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+6,G,201,jvj+7)*/
pile[v[22]]=117; pile[WZ1]=I; pile[WZ2]=145; pile[WZ3]=RL; pile[WZ4]=jvj+7; pile[WZ5]=jvj+5; 
(*f[725])( );     /*QUADRI14(117,I,145,RL,jvj+7,jvj+5)*/
pile[v[22]]=258; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; pile[WZ3]=jvj+4; 
(*f[663])( );     /*PLUG0(258,jvj+3,jvj+5,jvj+4)*/
v[0]=jvj; v[22]-=6; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+2,V2)*/
V2=pile[WZ2]; 
if((V2!=V)) goto l3;
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
goto l4;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
}
