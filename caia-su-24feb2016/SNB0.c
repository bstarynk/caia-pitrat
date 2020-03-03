#include "dx.h"
void SNB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0;
int X;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=226; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(226,X,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
v[0]=jvj; v[22]-=1; return;
l2:x[jvj+1]=s[x[jvj+2]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+2];
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+1,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V2; 
(*f[37])( );     /*SRA0(0,V2,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; 
(*f[40])( );     /*SLG0(V3)*/
l3:pile[v[22]]=jvj+1; 
(*f[293])( );     /*SNB0(jvj+1)*/
x[jvj+2]=t[x[jvj+2]];
goto l1;
}
