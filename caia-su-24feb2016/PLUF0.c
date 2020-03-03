#include "dx.h"
void PLUF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0;
int K,XO,E;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

K=pile[v[22]]; XO=pile[v[22]+1]; E=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[K]==0)) goto l4;
x[jvj+6]=x[E] ;z[jvj+6]=z[E];
l3:if((x[jvj+6]<=0)) goto l4;
x[jvj+1]=s[x[jvj+6]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+6];
x[jvj+5]=x[K] ;z[jvj+5]=z[K];
l1:if((x[jvj+5]<=0)) goto l5;
x[jvj+2]=s[x[jvj+5]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+5];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ3]=jvj+3; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+1,jvj+2,V3,jvj+3)*/
V3=pile[WZ2]; 
pile[v[22]]=XO; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(XO,jvj+2,V5,jvj+4)*/
V5=pile[WZ2]; 
if((V3==V5)) goto l2;
x[jvj+6]=t[x[jvj+6]];
goto l3;
l2:x[jvj+5]=t[x[jvj+5]];
goto l1;
l4:pile[v[22]]=E; pile[WZ1]=XO; 
(*f[68])( );     /*PLUE0(E,XO)*/
l5:v[0]=jvj; v[22]-=3; return;
}
