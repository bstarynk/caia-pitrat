#include "dx.h"
void MEDIUM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V8=0,V7=0,V6=0,V2=0,K=0,V5=0;
int M;
int NK;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

M=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=365; pile[WZ1]=M; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(365,M,jvj+3)*/
for(i=x[jvj+3],V8=0;i>0;i=t[i],V8++)  ;
V7=V8/2;
V6=V7-1;
x[jvj+6]=x[jvj+3] ;z[jvj+6]=z[jvj+3];
l4:if((x[jvj+6]>0)) goto l5;
v[0]=jvj; v[22]-=2; v[102]=1;return;
l2:x[jvj+1]=s[x[jvj+5]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+5];
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+1,V12)*/
V12=pile[WZ2]; 
if((V12>=K)) goto l3;
pile[v[22]]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+2,jvj+1)*/
l3:x[jvj+5]=t[x[jvj+5]];
l1:if((x[jvj+5]>0)) goto l2;
for(i=x[jvj+2],V5=0;i>0;i=t[i],V5++)  ;
if((V5!=V6)) goto l6;
NK=K;
v[0]=jvj; v[22]-=2; pile[v[22]+1]=NK; v[102]=0;return;
l5:x[jvj+4]=s[x[jvj+6]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+6];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+4,V2)*/
V2=pile[WZ2]; 
K=V2;
x[jvj+2]=0 ;z[jvj+2]=0;
x[jvj+5]=x[jvj+3] ;z[jvj+5]=z[jvj+3];
goto l1;
l6:x[jvj+6]=t[x[jvj+6]];
goto l4;
}
