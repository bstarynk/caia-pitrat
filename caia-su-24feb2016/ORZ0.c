#include "dx.h"
void ORZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int R,V,AT,P;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; V=pile[v[22]+1]; AT=pile[v[22]+2]; P=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[AT]!=334)) goto l6;
pile[v[22]]=237; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(237,R,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V) goto l5;
l6:x[jvj+5]=x[AT] ;z[jvj+5]=z[AT];
l1:pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(159,R,jvj+1)*/
l2:if((x[jvj+1]>0)) goto l3;
pile[v[22]]=V; pile[WZ1]=110; pile[WZ2]=jvj+4; 
(*f[329])( );     /*TRI13(V,110,jvj+4)*/
pile[v[22]]=R; pile[WZ1]=159; 
(*f[36])( );     /*PLUSC0(R,159,jvj+4)*/
l7:pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=P; 
(*f[36])( );     /*PLUSC0(jvj+4,jvj+5,P)*/
v[0]=jvj; v[22]-=4; return;
l3:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(110,jvj+2,V2)*/
V2=pile[WZ2]; 
if((V2!=V)) goto l4;
x[jvj+4]=x[jvj+2] ;z[jvj+4]=z[jvj+2];
goto l7;
l4:x[jvj+1]=t[x[jvj+1]];
goto l2;
l5:x[jvj+5]=333 ;z[jvj+5]=333;
goto l1;
}
