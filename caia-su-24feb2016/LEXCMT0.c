#include "dx.h"
void LEXCMT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,P=0,V4=0,C=0,V5=0,V6=0;
int I;
int N,J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
N=incon;
pile[v[22]]=117; pile[WZ1]=1427; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,1427,V2)*/
V2=pile[WZ2]; 
V1=V2;
x[jvj+1]=vo[20];z[jvj+1]=vz[20];
N=V1;
pile[v[22]]=1427; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(1427,117,1)*/
pile[v[22]]=jvj+1; pile[WZ1]=1316; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+1,1316,68)*/
l1:P=0;
V4=bh[v[1]][I];
C=V4;
if(N!=incon) goto l2;
l4:N=J=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l2:if((C==35)) goto l3;
V5=P+1;
V6=I+1;
cmt[N][P]=C;
pile[v[22]]=V5; pile[WZ1]=N; pile[WZ2]=V6; 
(*f[665])( );if(v[102]) goto l4;     /*LEXCMT2(V5,N,V6,J)*/
J=pile[WZ3]; 
l5:v[0]=jvj; v[22]-=3; pile[v[22]+1]=N; pile[v[22]+2]=J; v[102]=0;return;
l3:cmt[N][P]=0;
J=I;
goto l5;
}
