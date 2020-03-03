#include "dx.h"
void CREGLISSER7(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,K=0,V1=0,KK=0,V3=0,V6=0;
int I;
int NNNX;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26119;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2468&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V2=I-1;
K=0;
l2:pile[v[22]]=K; pile[WZ1]=(-656); 
(*f[1010])( );if(v[102]) goto l1;     /*FVECT0(K,(-656),V1)*/
V1=pile[WZ2]; 
if((V1!=V2)) goto l1;
NNNX=0;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=NNNX; v[102]=0;return;
l1:K++;
if((K<=2)) goto l2;
KK=0;
l4:pile[v[22]]=KK; pile[WZ1]=(-598); 
(*f[1010])( );if(v[102]) goto l3;     /*FVECT0(KK,(-598),V3)*/
V3=pile[WZ2]; 
if((V3!=V2)) goto l3;
NNNX=1;
goto l6;
l3:KK++;
if((KK<=2)) goto l4;
V6=I-1;
pile[v[22]]=V6; pile[WZ1]=(-1544); 
(*f[1010])( );if(v[102]) goto l5;     /*FVECT0(V6,(-1544),NNNX)*/
NNNX=pile[WZ2]; 
goto l6;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}
