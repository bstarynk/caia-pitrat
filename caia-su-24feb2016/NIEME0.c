#include "dx.h"
void NIEME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Y=0,V12=0,V2=0,V13=0,V6=0,V14=0,V9=0,V15=0,V4=0,X=0,V16=0,LL=0,V11=0,V5=0,V17=0,V7=0;
int E,N,M;
int L;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; N=pile[v[22]+1]; M=pile[v[22]+2]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[M]==510)) goto l11;
if((x[M]!=515)) goto l16;
if((N<=0)) goto l16;
V11=N-1;
V17=x[E];
l14:if((V17<=0)) goto l16;
V5=s[V17];
V14=x[E];
l6:if((V14>0)) goto l7;
x[jvj+2]=0 ;z[jvj+2]=0;
V15=x[E];
l8:if((V15>0)) goto l9;
pile[v[22]]=jvj+2; pile[WZ1]=V5; pile[WZ2]=V11; pile[WZ3]=M; 
(*f[3996])( );if(v[102]) goto l15;     /*NIEME1(jvj+2,V5,V11,M,V7)*/
V7=pile[WZ4]; 
L=V7;
l17:v[0]=jvj; v[22]-=4; pile[v[22]+3]=L; v[102]=0;return;
l2:Y=s[V12];
if((Y<X)) goto l13;
V12=t[V12];
l1:if((V12>0)) goto l2;
x[jvj+1]=0 ;z[jvj+1]=0;
V13=x[E];
l3:if((V13>0)) goto l4;
pile[v[22]]=jvj+1; pile[WZ1]=X; pile[WZ2]=V4; pile[WZ3]=M; 
(*f[3996])( );if(v[102]) goto l13;     /*NIEME1(jvj+1,X,V4,M,LL)*/
LL=pile[WZ4]; 
L=LL;
goto l17;
l4:V2=s[V13];
if((V2==X)) goto l5;
pile[v[22]]=jvj+1; pile[WZ1]=V2; 
(*f[207])( );     /*PLUE2(jvj+1,V2)*/
l5:V13=t[V13];
goto l3;
l7:V6=s[V14];
if((V6>V5)) goto l15;
V14=t[V14];
goto l6;
l9:V9=s[V15];
if((V9==V5)) goto l10;
pile[v[22]]=jvj+2; pile[WZ1]=V9; 
(*f[207])( );     /*PLUE2(jvj+2,V9)*/
l10:V15=t[V15];
goto l8;
l11:if((N<=0)) goto l16;
V4=N-1;
V16=x[E];
l12:if((V16<=0)) goto l16;
X=s[V16];
V12=x[E];
goto l1;
l13:V16=t[V16];
goto l12;
l15:V17=t[V17];
goto l14;
l16:v[0]=jvj; v[22]-=4; v[102]=1;return;
}
