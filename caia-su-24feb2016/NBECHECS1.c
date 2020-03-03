#include "dx.h"
void NBECHECS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,HH=0,KK=0,V6=0;
int Z;
int H,K;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=226; pile[WZ1]=Z; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(226,Z,jvj+2)*/
if((x[jvj+2]!=0)) goto l3;
V1=incon;
pile[v[22]]=867; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(867,Z,jvj+1)*/
if((x[jvj+1]!=876)) goto l1;
V1=1;
l2:pile[v[22]]=Z; pile[WZ1]=876; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(Z,876,V1)*/
pile[WZ1]=977; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(Z,977,1)*/
l5:pile[v[22]]=876; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(876,Z,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=977; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(977,Z,K)*/
K=pile[WZ2]; 
H=V6;
v[0]=jvj; v[22]-=3; pile[v[22]+1]=H; pile[v[22]+2]=K; v[102]=0;return;
l1:V1=0;
goto l2;
l6:H=K=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l3:if((x[jvj+2]<=0)) goto l5;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; 
(*f[1777])( );if(v[102]) goto l4;     /*NBECHECS1(jvj+3,HH,KK)*/
HH=pile[WZ1]; KK=pile[WZ2]; 
pile[v[22]]=Z; pile[WZ1]=876; pile[WZ2]=HH; 
(*f[186])( );     /*BTC0(Z,876,HH)*/
pile[WZ1]=977; pile[WZ2]=KK; 
(*f[186])( );     /*BTC0(Z,977,KK)*/
l4:x[jvj+2]=t[x[jvj+2]];
goto l3;
}
