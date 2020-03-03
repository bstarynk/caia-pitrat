#include "dx.h"
void CREKRYPT2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,K=0,V11=0,V6=0,V2=0,V16=0,V15=0,V14=0,V5=0,V9=0,V8=0,V7=0;
int J,I,NL,NC;
int NNNX;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26116;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2444&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
J=pile[v[22]]; I=pile[v[22]+1]; NL=pile[v[22]+2]; NC=pile[v[22]+3]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V2=incon;
if((I!=NL)) goto l4;
pile[v[22]]=J; pile[WZ1]=(-2041); 
(*f[1010])( );if(v[102]) goto l4;     /*FVECT0(J,(-2041),V2)*/
V2=pile[WZ2]; 
l4:if((I>=NL)) goto l5;
V16=I-1;
V15=V16*NC;
V14=J+V15;
pile[v[22]]=V14; pile[WZ1]=(-1544); 
(*f[1010])( );if(v[102]) goto l5;     /*FVECT0(V14,(-1544),V5)*/
V5=pile[WZ2]; 
if((V5!=0)) goto l5;
V10=J-1;
K=1;
l1:if((K<=V10)) goto l3;
V2=42;
l7:pile[v[22]]=V2; 
(*f[979])( );if(v[102]) goto l8;     /*CHILET0(V2,NNNX)*/
NNNX=pile[WZ1]; 
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+4]=NNNX; v[102]=0;return;
l3:V11=K+V15;
pile[v[22]]=V11; pile[WZ1]=(-1544); 
(*f[1010])( );if(v[102]) goto l2;     /*FVECT0(V11,(-1544),V6)*/
V6=pile[WZ2]; 
if((V6!=0)) goto l5;
l2:K++;
goto l1;
l5:if(V2==incon) goto l6;
goto l7;
l6:V9=I-1;
V8=V9*NC;
V7=J+V8;
pile[v[22]]=V7; pile[WZ1]=(-1544); 
(*f[1010])( );if(v[102]) goto l8;     /*FVECT0(V7,(-1544),V2)*/
V2=pile[WZ2]; 
goto l7;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
}
