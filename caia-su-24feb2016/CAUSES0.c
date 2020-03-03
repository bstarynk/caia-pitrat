#include "dx.h"
void CAUSES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V1=0,KK=0,V2=0,V3=0,V4=0,V6=0;
int K;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10495;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1186&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V8=K;
l1:if((V8<=0)) goto l2;
pile[v[22]]=V8; 
(*f[1187])( );     /*SORELT0(V8)*/
l2:V1=tn[V8];
KK=V1;
if((KK<V8)) goto l3;
pile[v[22]]=15; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(15,0,126,V2)*/
V2=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V2; pile[WZ2]=10495; 
(*f[42])( );     /*SRA1(135,V2,10495,V3)*/
V3=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V8; pile[WZ2]=V3; 
(*f[39])( );     /*SDX0(41,V8,V3,V4)*/
V4=pile[WZ3]; 
pile[WZ1]=KK; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(41,KK,V4,V6)*/
V6=pile[WZ3]; 
pile[v[22]]=V6; 
(*f[40])( );     /*SLG0(V6)*/
l3:if((KK<=0)) goto l4;
if((KK>=V8)) goto l4;
V8=KK;
goto l1;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
