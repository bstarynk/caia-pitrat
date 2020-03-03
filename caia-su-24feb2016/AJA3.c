#include "dx.h"
void AJA3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int K,V,T,P;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

K=pile[v[22]]; V=pile[v[22]+1]; T=pile[v[22]+2]; P=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1088; pile[WZ1]=K; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1088,K,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=V; pile[WZ1]=140; pile[WZ2]=jvj+3; 
(*f[329])( );     /*TRI13(V,140,jvj+3)*/
pile[v[22]]=K; pile[WZ1]=1088; 
(*f[36])( );     /*PLUSC0(K,1088,jvj+3)*/
l4:x[jvj+4]=d[72];z[jvj+4]=0;
pile[v[22]]=447; pile[WZ1]=T; pile[WZ2]=459; pile[WZ3]=P; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(447,T,459,P,jvj+5)*/
pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; pile[WZ3]=jvj+4; 
(*f[663])( );     /*PLUG0(159,jvj+3,jvj+5,jvj+4)*/
v[0]=jvj; v[22]-=4; return;
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
