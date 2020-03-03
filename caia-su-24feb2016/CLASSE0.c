#include "dx.h"
void CLASSE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,RES=0,V1=0;
int P,B,N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=10395;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==792&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; B=pile[v[22]+1]; N=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=961; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(961,P,V3)*/
V3=pile[WZ2]; 
l2:pile[v[22]]=961; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(961,P,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=P; pile[WZ1]=698; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(P,698,jvj+3)*/
pile[v[22]]=120; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,N,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+3,120,jvj+2)*/
l3:pile[v[22]]=N; pile[WZ1]=120; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(N,120,jvj+3)*/
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=P; pile[WZ1]=B; pile[WZ2]=jvj+4; 
(*f[1144])( );     /*VALSTRA0(P,B,jvj+4)*/
pile[v[22]]=jvj+4; 
(*f[766])( );if(v[102]) goto l2;     /*VALGLO0(jvj+4,RES)*/
RES=pile[WZ1]; 
pile[v[22]]=RES; pile[WZ1]=P; pile[WZ2]=N; 
(*f[1145])( );     /*TRIE0(RES,P,N)*/
goto l2;
}
