#include "dx.h"
void MENAGEPROVANT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int N,ND,U;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11548;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==920&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; ND=pile[v[22]+1]; U=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1538,N,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l4;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+3,V2)*/
V2=pile[WZ2]; 
if((V2!=ND)) goto l2;
pile[v[22]]=934; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(934,jvj+3,jvj+4)*/
if((x[jvj+4]!=x[U])) goto l2;
x[jvj+5]=x[jvj+3] ;z[jvj+5]=z[jvj+3];
pile[v[22]]=159; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,jvj+5,jvj+6)*/
l3:if((x[jvj+6]<=0)) goto l4;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; 
(*f[1224])( );     /*MENAGEPROVANTA0(jvj+5,jvj+7)*/
x[jvj+6]=t[x[jvj+6]];
goto l3;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
