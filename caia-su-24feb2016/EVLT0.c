#include "dx.h"
void EVLT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int TT2=0,V2=0,V1=0,TZZ=0,V3=0;
int AA,B,X;
int TY,RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

AA=pile[v[22]]; B=pile[v[22]+1]; X=pile[v[22]+2]; TY=pile[v[22]+3]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[AA]!=1929)) goto l3;
pile[v[22]]=B; pile[WZ1]=X; pile[WZ3]=jvj+1; 
(*f[80])( );if(v[102]) goto l3;     /*EVL1(B,X,TT2,jvj+1,TZZ)*/
TT2=pile[WZ2]; TZZ=pile[WZ4]; 
if((x[jvj+1]!=41)) goto l3;
V1=incon;
pile[v[22]]=TT2; 
(*f[627])( );if(v[102]) goto l1;     /*RACINEXACTE0(TT2,V2)*/
V2=pile[WZ1]; 
V1=135;
l2:V3=V1;
x[TY]=20 ;z[TY]=20;
RES=V3;
v[0]=jvj; v[22]-=5; pile[v[22]+4]=RES; v[102]=0;return;
l1:V1=134;
goto l2;
l3:x[TY]=RES=incon;
v[0]=jvj; v[22]-=5; v[102]=1;return;
}
