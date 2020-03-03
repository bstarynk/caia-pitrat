#include "dx.h"
void REGROUPE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V6=0;
int Q,M,K,AT,N,L;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

Q=pile[v[22]]; M=pile[v[22]+1]; K=pile[v[22]+2]; AT=pile[v[22]+3]; N=pile[v[22]+4]; L=pile[v[22]+5]; v[22]+=6; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
pile[v[22]]=1288; pile[WZ1]=Q; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1288,Q,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=218; pile[WZ1]=K; pile[WZ2]=246; pile[WZ3]=M; pile[WZ4]=jvj+3; 
(*f[192])( );     /*QUADRI4(218,K,246,M,jvj+3)*/
l4:x[jvj+6]=incon;
pile[v[22]]=763; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(763,jvj+3,jvj+4)*/
l5:if((x[jvj+4]>0)) goto l6;
pile[v[22]]=L; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(L,117,jvj+6)*/
l8:pile[v[22]]=jvj+3; pile[WZ1]=763; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+3,763,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=AT; pile[WZ2]=N; 
(*f[186])( );     /*BTC0(jvj+6,AT,N)*/
pile[v[22]]=Q; pile[WZ1]=1288; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(Q,1288,jvj+3)*/
v[0]=jvj; v[22]-=6; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=246; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(246,jvj+2,V4)*/
V4=pile[WZ2]; 
if((V4!=M)) goto l3;
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
goto l4;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l6:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+5,V6)*/
V6=pile[WZ2]; 
if((V6!=L)) goto l7;
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
goto l8;
l7:x[jvj+4]=t[x[jvj+4]];
goto l5;
}
