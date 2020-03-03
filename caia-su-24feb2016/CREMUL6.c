#include "dx.h"
void CREMUL6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,KK=0,V8=0,V12=0,K=0,V10=0,V2=0,V7=0,V9=0,V3=0;
int J,I;
int NNNX;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26122;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2489&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
J=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V2=incon;
if((I==3)) goto l5;
if((I==2)) goto l6;
if((I!=1)) goto l8;
pile[v[22]]=J; pile[WZ1]=(-1544); 
(*f[1010])( );if(v[102]) goto l8;     /*FVECT0(J,(-1544),V9)*/
V9=pile[WZ2]; 
if((V9!=0)) goto l8;
V12=J-1;
K=1;
l3:if((K>V12)) goto l7;
pile[v[22]]=K; pile[WZ1]=(-1544); 
(*f[1010])( );if(v[102]) goto l4;     /*FVECT0(K,(-1544),V10)*/
V10=pile[WZ2]; 
if((V10!=0)) goto l8;
l4:K++;
goto l3;
l5:pile[v[22]]=J; pile[WZ1]=(-630); 
(*f[1010])( );if(v[102]) goto l8;     /*FVECT0(J,(-630),V2)*/
V2=pile[WZ2]; 
l11:pile[v[22]]=V2; 
(*f[979])( );if(v[102]) goto l12;     /*CHILET0(V2,NNNX)*/
NNNX=pile[WZ1]; 
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNX; v[102]=0;return;
l6:pile[v[22]]=J; pile[WZ1]=(-2041); 
(*f[1010])( );if(v[102]) goto l8;     /*FVECT0(J,(-2041),V7)*/
V7=pile[WZ2]; 
if((V7!=0)) goto l8;
V11=J-1;
KK=1;
l1:if((KK>V11)) goto l7;
pile[v[22]]=KK; pile[WZ1]=(-2041); 
(*f[1010])( );if(v[102]) goto l2;     /*FVECT0(KK,(-2041),V8)*/
V8=pile[WZ2]; 
if((V8!=0)) goto l8;
l2:KK++;
goto l1;
l7:V2=42;
goto l11;
l8:V3=incon;
if((I!=1)) goto l9;
pile[v[22]]=J; pile[WZ1]=(-1544); 
(*f[1010])( );if(v[102]) goto l9;     /*FVECT0(J,(-1544),V3)*/
V3=pile[WZ2]; 
l10:V2=V3;
goto l11;
l9:pile[v[22]]=J; pile[WZ1]=(-2041); 
(*f[1010])( );if(v[102]) goto l12;     /*FVECT0(J,(-2041),V3)*/
V3=pile[WZ2]; 
goto l10;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
