#include "dx.h"
void LEXCMT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P=0,V1=0,C=0,V2=0,V3=0;
int I,N;
int J;
int WZ1,WZ2,WZ3;

I=pile[v[22]]; N=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
P=0;
V1=bh[v[1]][I];
C=V1;
if((C==35)) goto l1;
V2=P+1;
V3=I+1;
cmt[N][P]=C;
pile[v[22]]=V2; pile[WZ1]=N; pile[WZ2]=V3; 
(*f[665])( );if(v[102]) goto l2;     /*LEXCMT2(V2,N,V3,J)*/
J=pile[WZ3]; 
l3:v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:cmt[N][P]=0;
J=I;
goto l3;
l2:v[22]-=3; v[102]=1;return;
}
