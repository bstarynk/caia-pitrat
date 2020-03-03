#include "dx.h"
void LND1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,B=0,V21=0,V23=0,V22=0,I=0,V25=0,V26=0,T=0,NN=0,V28=0,V7=0,V6=0,V10=0,ZZ=0,V17=0,V5=0,V1=0,V2=0,V4=0,V3=0,NNR=0,KK=0,V20=0;
int J;
int NR,K;
int WZ1,WZ2,WZ3,WZ4;

J=pile[v[22]]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
N=0;
B=10;
V21=bh[v[1]][J];
if((V21!=32)) goto l3;
V23=J+1;
V22=bh[v[1]][V23];
if((V22==45)) goto l2;
if((V22==43)) goto l2;
if((V22<48)) goto l14;
if((V22>57)) goto l14;
V20=135;
l1:if((V20==135)) goto l2;
l3:I=J;
l4:V25=bh[v[1]][I];
if((V25==45)) goto l5;
if((V25==43)) goto l6;
T=36;
NN=I;
l7:V7=bh[v[1]][NN];
V6=V7;
if((V6<=57)) goto l8;
if((V6<65)) goto l12;
if((V6>70)) goto l12;
V17=V6-55;
ZZ=V17;
l10:if((ZZ>=B)) goto l12;
if((ZZ<0)) goto l12;
V2=NN+1;
V4=N*B;
V3=V4+ZZ;
pile[v[22]]=V2; pile[WZ1]=V3; pile[WZ2]=B; 
(*f[319])( );     /*LND5(V2,V3,B,NNR,KK)*/
NNR=pile[WZ3]; KK=pile[WZ4]; 
V1=incon;
if((T==52)) goto l9;
V1=NNR;
l11:NR=V1;
K=KK;
l13:v[22]-=3; pile[v[22]+1]=NR; pile[v[22]+2]=K; return;
l2:I=V23;
goto l4;
l5:V26=I+1;
T=52;
NN=V26;
goto l7;
l6:V28=I+1;
T=36;
NN=V28;
goto l7;
l8:if((V6<48)) goto l12;
V10=V6-48;
ZZ=V10;
goto l10;
l9:V5=(-NNR);
V1=V5;
goto l11;
l12:NR=N;
K=NN;
goto l13;
l14:V20=134;
goto l1;
}
