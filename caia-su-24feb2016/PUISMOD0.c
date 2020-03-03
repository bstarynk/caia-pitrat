#include "dx.h"
void PUISMOD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V4=0,S=0,V7=0,RR=0,AA=0,V8=0,V1=0,RT=0,V3=0,V2=0,V6=0;
int C,B,A;
int R;
int WZ1,WZ2,WZ3;

C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
RR=AA=R=S=incon;
if((B==0)) goto l2;
if((A!=0)) goto l3;
if((B<=0)) goto l6;
R=0;
l6:V7=abs(A);
if((V7!=1)) goto l7;
RR=1;
l7:if((A>1)) goto l8;
if((A>=(-1))) goto l9;
V8=(-A);
AA=V8;
l9:if(RR==incon) goto l10;
l13:if(R==incon) goto l14;
l18:v[22]-=4; pile[v[22]+3]=R; v[102]=0;return;
l1:V4=1;
l5:S=V4;
goto l6;
l2:R=1;
l3:if((A>0)) goto l4;
if((A>=0)) goto l6;
V4=incon;
V5=B%2;
if((V5==0)) goto l1;
V4=(-1);
goto l5;
l4:S=1;
goto l6;
l8:AA=A;
goto l9;
l10:if(AA!=incon) goto l11;
goto l13;
l11:if((B==1)) goto l12;
if((B<=1)) goto l13;
V1=B-1;
pile[v[22]]=AA; pile[WZ1]=V1; pile[WZ2]=C; 
(*f[1364])( );if(v[102]) goto l13;     /*PUISMOD1(AA,V1,C,RT)*/
RT=pile[WZ3]; 
V3=RT*AA;
V2=V3%C;
RR=V2;
goto l13;
l12:RR=AA;
goto l13;
l14:if(RR!=incon) goto l15;
l17:v[22]-=4; v[102]=1;return;
l15:if(S!=incon) goto l16;
goto l17;
l16:V6=S*RR;
R=V6;
goto l18;
}
