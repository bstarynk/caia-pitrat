#include "dx.h"
void AJB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int V,VV,K,AT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

V=pile[v[22]]; VV=pile[v[22]+1]; K=pile[v[22]+2]; AT=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1088; pile[WZ1]=K; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1088,K,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=V; pile[WZ1]=140; pile[WZ2]=jvj+3; 
(*f[329])( );     /*TRI13(V,140,jvj+3)*/
pile[v[22]]=K; pile[WZ1]=1088; 
(*f[36])( );     /*PLUSC0(K,1088,jvj+3)*/
l4:pile[v[22]]=jvj+3; pile[WZ1]=AT; pile[WZ2]=VV; 
(*f[735])( );     /*PLUSC4(jvj+3,AT,VV)*/
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
