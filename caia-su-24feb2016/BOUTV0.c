#include "dx.h"
void BOUTV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,V2=0,V5=0,V4=0,V7=0,V6=0,V8=0,H=0,V9=0,V13=0,J=0,V14=0,V12=0,V11=0,V10=0,V17=0,V16=0,V15=0,V18=0,V19=0,V20=0;
int P,M,I;
int RR;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10542;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==21&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; M=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
V20=I;
V19=P;
l1:if((V20<=M)) goto l2;
RR=V19;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=RR; return;
l2:V1=(sw[V19]<<8)|(sw[V19+1]&0xff);
V3=V19+2;
V2=(sw[V3]<<8)|(sw[V3+1]&0xff);
V5=V19+4;
V4=(sw[V5]<<8)|(sw[V5+1]&0xff);
V7=V19+6;
V6=(sw[V7]<<8)|(sw[V7+1]&0xff);
knd[V20]=V1;
knr[V20]=V2;
vbl[V20]=V4;
sansechec[V20]=V6;
V8=knr[V20];
H=V8;
V9=H-1;
V13=V19+8;
J=0;
l3:if((J<=V9)) goto l4;
V17=H+4;
V16=2*V17;
V15=V19+V16;
V18=V20+1;
V19=V15;
V20=V18;
goto l1;
l4:V14=2*J;
V12=V13+V14;
V11=(sw[V12]<<8)|(sw[V12+1]&0xff);
V10=V11;
vnd[V20][J]=V10;
tnd[V20][J]=0;
J++;
goto l3;
}
