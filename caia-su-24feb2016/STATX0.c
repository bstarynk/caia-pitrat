#include "dx.h"
void STATX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V5=0;
int X,JK,B,JL,JN;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=11537;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1220&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; JK=pile[v[22]+1]; B=pile[v[22]+2]; JL=pile[v[22]+3]; JN=pile[v[22]+4]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=B; pile[WZ1]=JK; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(B,JK,1)*/
if((x[JL]==250)) goto l1;
pile[WZ1]=JL; 
(*f[186])( );     /*BTC0(B,JL,1)*/
l1:pile[v[22]]=B; pile[WZ1]=JN; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(B,JN,1)*/
pile[v[22]]=1522; pile[WZ1]=1447; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1522,1447,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=X; pile[WZ1]=jvj+3; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l4;     /*FNDZ0(X,jvj+3,V3,jvj+4)*/
V3=pile[WZ2]; 
V2=V3;
V5=V2;
pile[v[22]]=B; pile[WZ2]=V5; 
(*f[186])( );     /*BTC0(B,jvj+3,V5)*/
l4:x[jvj+2]=t[x[jvj+2]];
goto l2;
}
