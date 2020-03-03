#include "dx.h"
void SLGG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,K=0,M=0,V1=0,N=0,KK=0,MM=0,V2=0,V3=0;
int JJ;
int H;
int WZ1,WZ2,WZ3,WZ4;

JJ=pile[v[22]]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
I=H=KK=MM=incon;
I=0;
K=0;
M=32;
if((I<JJ)) goto l1;
H=K;
l1:if(I!=incon) goto l2;
l4:if(H==incon) goto l5;
l10:v[22]-=2; pile[v[22]+1]=H; v[102]=0;return;
l2:V1=c[v[1]][I];
N=V1;
if((N!=32)) goto l3;
if(M!=32&&M!=91&&M!=40&&M!=44) goto l3;
KK=K;
MM=M;
goto l4;
l3:V2=K+1;
MM=N;
KK=V2;
c[v[1]][K]=N;
goto l4;
l5:if(I!=incon) goto l6;
l9:v[22]-=2; v[102]=1;return;
l6:if(KK!=incon) goto l7;
goto l9;
l7:if(MM!=incon) goto l8;
goto l9;
l8:if((I>=JJ)) goto l9;
V3=I+1;
pile[v[22]]=V3; pile[WZ1]=KK; pile[WZ2]=MM; pile[WZ3]=JJ; 
(*f[721])( );if(v[102]) goto l9;     /*SLGG1(V3,KK,MM,JJ,H)*/
H=pile[WZ4]; 
goto l10;
}
