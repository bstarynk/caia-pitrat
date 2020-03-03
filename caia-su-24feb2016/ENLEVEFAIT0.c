#include "dx.h"
void ENLEVEFAIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=191; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(191,X,jvj+4)*/
if((x[jvj+4]!=68)) goto l3;
(*f[71])( );     /*ENLV0(191,X)*/
x[jvj+1]=d[108];z[jvj+1]=0;
l1:if((x[jvj+1]<=0)) goto l3;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=jvj+2; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+2,X,jvj+3)*/
pile[v[22]]=jvj+3; 
(*f[2215])( );     /*ENLEVEFAIT0(jvj+3)*/
l2:x[jvj+1]=t[x[jvj+1]];
goto l1;
l3:v[0]=jvj; v[22]-=1; return;
}
