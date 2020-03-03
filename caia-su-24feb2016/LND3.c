#include "dx.h"
void LND3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,B=0,V20=0,V21=0,T=0,NN=0,V23=0,V7=0,V6=0,V10=0,ZZ=0,V17=0,V5=0,V1=0,V2=0,V4=0,V3=0,NNR=0,KK=0;
int I;
int NR;
int WZ1,WZ2,WZ3,WZ4;

I=pile[v[22]]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
N=0;
B=10;
V20=bh[v[1]][I];
if((V20==45)) goto l1;
if((V20==43)) goto l2;
T=36;
NN=I;
l3:V7=bh[v[1]][NN];
V6=V7;
if((V6<=57)) goto l4;
if((V6<65)) goto l8;
if((V6>70)) goto l8;
V17=V6-55;
ZZ=V17;
l6:if((ZZ>=B)) goto l8;
if((ZZ<0)) goto l8;
V2=NN+1;
V4=N*B;
V3=V4+ZZ;
pile[v[22]]=V2; pile[WZ1]=V3; pile[WZ2]=B; 
(*f[319])( );     /*LND5(V2,V3,B,NNR,KK)*/
NNR=pile[WZ3]; KK=pile[WZ4]; 
V1=incon;
if((T==52)) goto l5;
V1=NNR;
l7:NR=V1;
l9:v[22]-=2; pile[v[22]+1]=NR; return;
l1:V21=I+1;
T=52;
NN=V21;
goto l3;
l2:V23=I+1;
T=36;
NN=V23;
goto l3;
l4:if((V6<48)) goto l8;
V10=V6-48;
ZZ=V10;
goto l6;
l5:V5=(-NNR);
V1=V5;
goto l7;
l8:NR=N;
goto l9;
}
