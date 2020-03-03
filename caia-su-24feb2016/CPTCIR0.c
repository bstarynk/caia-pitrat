#include "dx.h"
void CPTCIR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V3=0,V6=0,V5=0,V8=0,V9=0;
int L,LS,N,NK,LA;
int NM;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11627;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1575&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; LS=pile[v[22]+1]; N=pile[v[22]+2]; NK=pile[v[22]+3]; LA=pile[v[22]+4]; v[22]+=6; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[LS] ;z[jvj+2]=z[LS];
V9=x[LA];
V8=NK;
l1:pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+3)*/
l2:if((x[jvj+3]>0)) goto l3;
V5=incon;
if((V8>=N)) goto l7;
V5=V8;
l8:NM=V5;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; pile[v[22]+5]=NM; return;
l3:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[1576])( );if(v[102]) goto l4;     /*SYMET0(jvj+4,jvj+5)*/
x[jvj+7]=x[jvj+5] ;z[jvj+7]=z[jvj+5];
if((x[jvj+7]==V9)) goto l4;
x[jvj+6]=x[jvj+7] ;z[jvj+6]=z[jvj+7];
if((x[jvj+6]==x[L])) goto l5;
if((V8>=N)) goto l6;
V3=V8+1;
V8=V3;
V9=x[jvj+2];
x[jvj+2]=x[jvj+6] ;z[jvj+2]=z[jvj+6];
goto l1;
l4:x[jvj+3]=t[x[jvj+3]];
goto l2;
l5:NM=V8;
goto l9;
l6:V4=(-V8);
NM=V4;
goto l9;
l7:V6=N-1;
V5=V6;
goto l8;
}
