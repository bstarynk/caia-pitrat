#include "dx.h"
void SPP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V3=0,V=0;
int I,N,X;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10571;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2147&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; N=pile[v[22]+1]; X=pile[v[22]+2]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[N]!=10438)) goto l2;
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,X,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V11,I,J)*/
J=pile[WZ2]; 
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l1:x[jvj+6]=68 ;z[jvj+6]=68;
l5:pile[v[22]]=I; pile[WZ1]=X; pile[WZ2]=jvj+6; pile[WZ3]=N; pile[WZ4]=V; 
(*f[2196])( );     /*SPI0(I,X,jvj+6,N,V,J)*/
J=pile[WZ5]; 
goto l7;
l2:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,X,jvj+4)*/
if((x[jvj+4]!=22)) goto l3;
pile[v[22]]=X; pile[WZ1]=I; 
(*f[2145])( );if(v[102]) goto l3;     /*SPF0(X,I,J)*/
J=pile[WZ2]; 
goto l7;
l3:if(x[jvj+4]!=96&&x[jvj+4]!=89&&x[jvj+4]!=41&&x[jvj+4]!=20&&x[jvj+4]!=128&&x[jvj+4]!=570&&x[jvj+4]!=1317) goto l4;
if((x[jvj+5]=w[x[jvj+4]][3])==incon) goto l4;
pile[v[22]]=jvj+5; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(jvj+5,X,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=I; 
(*f[99])( );     /*SPM0(V3,I,J)*/
J=pile[WZ2]; 
goto l7;
l4:if((x[N]==10438)) goto l6;
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,X,V)*/
V=pile[WZ2]; 
x[jvj+6]=incon;
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
pile[v[22]]=440; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(440,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V) goto l1;
x[jvj+6]=67 ;z[jvj+6]=67;
goto l5;
l6:J=I;
goto l7;
}
