#include "dx.h"
void CREMAGDO8(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int M=0,V4=0,V11=0,V2=0,V12=0,K=0,V8=0,V6=0,V7=0,V10=0,V9=0,V1=0,V5=0;
int I;
int NNNX;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26123;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2498&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V10=I+1;
V9=V10/2;
K=1;
l6:pile[v[22]]=K; pile[WZ1]=(-2041); 
(*f[1010])( );if(v[102]) goto l5;     /*FVECT0(K,(-2041),V1)*/
V1=pile[WZ2]; 
if((V1!=1)) goto l5;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
M=1;
l1:if((M<=K)) goto l3;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+2,V11)*/
V11=pile[WZ2]; 
V2=V11;
if((V2!=V9)) goto l5;
V6=incon;
V12=I%2;
if((V12!=0)) goto l4;
pile[v[22]]=K; pile[WZ1]=(-591); 
(*f[201])( );if(v[102]) goto l4;     /*FCOEFF0(K,(-591),V8)*/
V8=pile[WZ2]; 
V6=V8;
l7:pile[v[22]]=V6; pile[WZ1]=(-1544); 
(*f[1010])( );if(v[102]) goto l5;     /*FVECT0(V6,(-1544),V5)*/
V5=pile[WZ2]; 
NNNX=V5;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=NNNX; v[102]=0;return;
l3:pile[v[22]]=M; pile[WZ1]=(-2041); 
(*f[1010])( );if(v[102]) goto l2;     /*FVECT0(M,(-2041),V4)*/
V4=pile[WZ2]; 
if((V4!=1)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,117,1)*/
l2:M++;
goto l1;
l4:pile[v[22]]=K; pile[WZ1]=(-598); 
(*f[201])( );if(v[102]) goto l5;     /*FCOEFF0(K,(-598),V7)*/
V7=pile[WZ2]; 
V6=V7;
goto l7;
l5:K++;
if((K<=24)) goto l6;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}
