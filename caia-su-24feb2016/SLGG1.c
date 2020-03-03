#include "dx.h"
void SLGG1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,N=0,KK=0,MM=0,V2=0,V3=0,V4=0,V5=0,V6=0;
int I,K,M,JJ;
int H;

I=pile[v[22]]; K=pile[v[22]+1]; M=pile[v[22]+2]; JJ=pile[v[22]+3]; v[22]+=5; 
V6=M;
V5=K;
V4=I;
l6:H=incon;
if((V4<JJ)) goto l1;
H=V5;
l1:V1=c[v[1]][V4];
N=V1;
if((N!=32)) goto l2;
if(V6!=32&&V6!=91&&V6!=40&&V6!=44) goto l2;
KK=V5;
MM=V6;
l3:if(H==incon) goto l4;
v[22]-=5; pile[v[22]+4]=H; v[102]=0;return;
l2:V2=V5+1;
MM=N;
KK=V2;
c[v[1]][V5]=N;
goto l3;
l4:if((V4<JJ)) goto l5;
v[22]-=5; v[102]=1;return;
l5:V3=V4+1;
V4=V3;
V5=KK;
V6=MM;
goto l6;
}
