#include "dx.h"
void SPDON0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V9=0,V3=0,V1=0,NN=0,J=0;
int I,X;
int L;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10233;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2079&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,X,jvj+3)*/
if((x[jvj+3]!=39)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,X,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+5)*/
pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,X,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=V1; pile[WZ2]=jvj+6; 
(*f[133])( );if(v[102]) goto l3;     /*TLDEBL1(jvj+5,V1,jvj+6)*/
pile[v[22]]=246; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(246,jvj+6,NN)*/
NN=pile[WZ2]; 
V3=knr[NN];
pile[v[22]]=0; pile[WZ1]=V3; pile[WZ2]=NN; pile[WZ3]=X; pile[WZ4]=I; 
(*f[2150])( );     /*SPONS0(0,V3,NN,X,I,J)*/
J=pile[WZ5]; 
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
pile[v[22]]=870; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(870,jvj+2,V10)*/
V10=pile[WZ2]; 
V9=V10-1;
l1:if((V3>V9)) goto l2;
gardevaleur[V3]=250;
V3++;
goto l1;
l2:if((J<=0)) goto l3;
pile[v[22]]=J; 
(*f[656])( );     /*SPLN2(J,L)*/
L=pile[WZ1]; 
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=L; return;
l3:L=I;
goto l4;
}
