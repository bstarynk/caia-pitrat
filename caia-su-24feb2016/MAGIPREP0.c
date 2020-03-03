#include "dx.h"
void MAGIPREP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V4=0,V6=0,K=0,V3=0,V18=0,V20=0,V19=0,PP=0,V17=0,V16=0,V8=0,V10=0,KK=0,V9=0,V7=0,V12=0,V13=0,V15=0,P=0,V11=0;
int J,N;
int NNNE;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26148;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2623&&v[97]==0) {
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
V18=N-1;
V20=J%N;
V19=V20+V5;
if((V19!=V18)) goto l6;
PP=0;
l4:if((PP>V18)) goto l6;
V17=PP+1;
V16=V17*V18;
if((V16==J)) goto l5;
pile[v[22]]=jvj+2; pile[WZ1]=V16; 
(*f[207])( );     /*PLUE2(jvj+2,V16)*/
l5:PP++;
goto l4;
l3:V3=K+V4;
if((V3==J)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=V3; 
(*f[207])( );     /*PLUE2(jvj+2,V3)*/
l2:K++;
goto l1;
l6:V8=J%N;
V10=N-1;
KK=0;
l7:if((KK<=V10)) goto l9;
V12=N+1;
V13=J%V12;
if((V13!=0)) goto l12;
V15=N-1;
P=0;
l10:if((P>V15)) goto l12;
V11=P*V12;
if((V11==J)) goto l11;
pile[v[22]]=jvj+2; pile[WZ1]=V11; 
(*f[207])( );     /*PLUE2(jvj+2,V11)*/
l11:P++;
goto l10;
l9:V9=N*KK;
V7=V8+V9;
if((V7==J)) goto l8;
pile[v[22]]=jvj+2; pile[WZ1]=V7; 
(*f[207])( );     /*PLUE2(jvj+2,V7)*/
l8:KK++;
goto l7;
l12:x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
