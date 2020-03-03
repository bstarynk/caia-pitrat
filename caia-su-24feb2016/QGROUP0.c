#include "dx.h"
void QGROUP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V4=0,V6=0,K=0,V3=0,V8=0,V10=0,KK=0,V9=0,V7=0;
int J,N;
int NNNE;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26156;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2628&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
J=pile[v[22]]; N=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V5=J/N;
V4=V5*N;
V6=N-1;
K=0;
l1:if((K<=V6)) goto l3;
V8=J%N;
V10=N-1;
KK=0;
l4:if((KK<=V10)) goto l6;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:V3=K+V4;
if((V3==J)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=V3; 
(*f[207])( );     /*PLUE2(jvj+2,V3)*/
l2:K++;
goto l1;
l6:V9=N*KK;
V7=V8+V9;
if((V7==J)) goto l5;
pile[v[22]]=jvj+2; pile[WZ1]=V7; 
(*f[207])( );     /*PLUE2(jvj+2,V7)*/
l5:KK++;
goto l4;
}
