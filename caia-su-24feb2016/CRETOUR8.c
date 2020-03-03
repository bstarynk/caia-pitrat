#include "dx.h"
void CRETOUR8(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,V4=0,K=0,V3=0,V7=0,V1=0,V5=0;
int I,NP;
int NNNX;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26121;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2482&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; NP=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V5=NP-1;
J=0;
l4:if((J<=V5)) goto l8;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l3:pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+2,V7)*/
V7=pile[WZ2]; 
V1=V7;
if((V1!=I)) goto l5;
NNNX=J;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNX; v[102]=0;return;
l5:J++;
goto l4;
l8:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
pile[v[22]]=J; pile[WZ1]=(-1544); 
(*f[1010])( );if(v[102]) goto l3;     /*FVECT0(J,(-1544),V4)*/
V4=pile[WZ2]; 
K=0;
l1:if((K>V5)) goto l3;
pile[v[22]]=K; pile[WZ1]=(-1544); 
(*f[1010])( );if(v[102]) goto l2;     /*FVECT0(K,(-1544),V3)*/
V3=pile[WZ2]; 
if((V3>V4)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,117,1)*/
l2:K++;
goto l1;
}
