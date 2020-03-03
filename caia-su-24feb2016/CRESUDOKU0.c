#include "dx.h"
void CRESUDOKU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V4=0,K=0,V3=0,V7=0,KK=0,V8=0,V6=0,V12=0,V11=0,V15=0,V14=0,V13=0,V10=0,L=0,LL=0,V17=0,V16=0,V9=0;
int J;
int NNNE;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26118;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2453&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
J=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V5=J/9;
V4=V5*9;
K=0;
l2:V3=K+V4;
if((V3==J)) goto l1;
pile[v[22]]=jvj+2; pile[WZ1]=V3; 
(*f[207])( );     /*PLUE2(jvj+2,V3)*/
l1:K++;
if((K<=8)) goto l2;
V7=J%9;
KK=0;
l4:V8=9*KK;
V6=V7+V8;
if((V6==J)) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=V6; 
(*f[207])( );     /*PLUE2(jvj+2,V6)*/
l3:KK++;
if((KK<=8)) goto l4;
V12=J/27;
V11=V12*27;
V15=J/3;
V14=V15%3;
V13=V14*3;
V10=V11+V13;
L=0;
l5:LL=0;
l7:V17=LL*9;
V16=L+V17;
V9=V10+V16;
if((V9==J)) goto l6;
pile[v[22]]=jvj+2; pile[WZ1]=V9; 
(*f[207])( );     /*PLUE2(jvj+2,V9)*/
l6:LL++;
if((LL<=2)) goto l7;
L++;
if((L<=2)) goto l5;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
