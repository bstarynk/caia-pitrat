#include "dx.h"
void LND5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V6=0,V10=0,ZZ=0,V17=0,V2=0,V4=0,V3=0;
int NN,N,B;
int NR,K;
int WZ1,WZ2,WZ3,WZ4;

NN=pile[v[22]]; N=pile[v[22]+1]; B=pile[v[22]+2]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
ZZ=incon;
V7=bh[v[1]][NN];
V6=V7;
if((V6<=57)) goto l1;
if((V6<65)) goto l2;
if((V6>70)) goto l2;
V17=V6-55;
ZZ=V17;
l2:if(ZZ!=incon) goto l3;
l4:NR=N;
K=NN;
l5:v[22]-=5; pile[v[22]+3]=NR; pile[v[22]+4]=K; return;
l1:if((V6<48)) goto l2;
V10=V6-48;
ZZ=V10;
goto l2;
l3:if((ZZ>=B)) goto l4;
if((ZZ<0)) goto l4;
V2=NN+1;
V4=N*B;
V3=V4+ZZ;
pile[v[22]]=V2; pile[WZ1]=V3; pile[WZ2]=B; 
(*f[319])( );     /*LND5(V2,V3,B,NR,K)*/
NR=pile[WZ3]; K=pile[WZ4]; 
;
goto l5;
}
