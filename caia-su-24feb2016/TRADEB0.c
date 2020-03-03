#include "dx.h"
void TRADEB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N;
int BA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=11848;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1717&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; BA=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=459; pile[WZ3]=68; pile[WZ4]=BA; 
(*f[181])( );     /*QUADRI2(218,N,459,68,BA)*/
pile[v[22]]=1688; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1688,N,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1689,N,jvj+4)*/
l3:if((x[jvj+4]>0)) goto l4;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=BA; pile[WZ2]=865; 
(*f[1493])( );     /*NATFNA0(jvj+3,BA,865)*/
x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=BA; pile[WZ2]=228; 
(*f[1493])( );     /*NATFNA0(jvj+5,BA,228)*/
x[jvj+4]=t[x[jvj+4]];
goto l3;
}
