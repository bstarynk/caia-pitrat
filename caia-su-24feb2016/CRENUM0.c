#include "dx.h"
void CRENUM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,I=0,V1=0;
int H,N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

H=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=642; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,H,V1)*/
V1=pile[WZ2]; 
l8:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=jvj+2; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(jvj+2,N,jvj+3)*/
x[jvj+5]=x[jvj+3] ;z[jvj+5]=z[jvj+3];
l4:if((x[jvj+5]>0)) goto l5;
x[jvj+1]=t[x[jvj+1]];
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=H; pile[WZ1]=642; pile[WZ2]=I; 
(*f[43])( );     /*CHGC2(H,642,I)*/
goto l8;
l5:x[jvj+4]=s[x[jvj+5]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+5];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+4,V3)*/
V3=pile[WZ2]; 
if((V3!=I)) goto l6;
I++;
if((I<=100)) goto l3;
goto l8;
l6:x[jvj+5]=t[x[jvj+5]];
goto l4;
l7:I=0;
l3:x[jvj+1]=d[32];z[jvj+1]=0;
goto l1;
}
