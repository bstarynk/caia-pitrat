#include "dx.h"
void NVF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,V2=0,TY=0,V15=0,V5=0,V6=0,V7=0,Q=0,V10=0,V8=0,P=0,V9=0,V16=0,V13=0,V12=0,V20=0,V21=0;
int N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V21=N;
l15:TY=Q=incon;
V1=r[V21];
if((V1<=0)) goto l1;
V3=V1;
if((V2=w[V3][1])==incon) goto l1;
TY=V2;
l2:V5=r[V21];
V6=(-20);
if((V5==V6)) goto l3;
if(TY!=incon) goto l4;
l5:V8=t[V21];
P=V8;
if((P==0)) goto l6;
if((P<=0)) goto l7;
V9=(-P);
t[V21]=V9;
l7:if(Q!=incon) goto l8;
l9:V16=r[V21];
if((V16<=0)) goto l10;
x[jvj+2]=V16 ;z[jvj+2]=(V16<=sepcte) ? V16 : 0;
pile[v[22]]=jvj+2; 
(*f[282])( );     /*NVD0(jvj+2)*/
l10:if(TY!=incon) goto l11;
l12:if(Q!=incon) goto l13;
l14:if((P>0)) goto l16;
v[0]=jvj; v[22]-=1; return;
l1:V15=(-96);
if((V1!=V15)) goto l2;
TY=96;
goto l2;
l3:V7=s[V21];
Q=V7;
goto l5;
l4:if(TY!=20&&TY!=23) goto l5;
V10=s[V21];
Q=V10;
goto l5;
l6:t[V21]=impos;
goto l7;
l8:if((Q>sepcte)) goto l9;
x[jvj+1]=Q ;z[jvj+1]=(Q<=sepcte) ? Q : 0;
pile[v[22]]=jvj+1; 
(*f[282])( );     /*NVD0(jvj+1)*/
goto l9;
l11:if((TY!=96)) goto l12;
V13=s[V21];
V12=V13;
pile[v[22]]=V12; pile[WZ1]=jvj+3; 
(*f[117])( );if(v[102]) goto l12;     /*SRF1(V12,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=655; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+3,655,68)*/
goto l12;
l13:if((Q<=sepcte)) goto l14;
V20=t[Q];
if((V20<0)) goto l14;
pile[v[22]]=Q; 
(*f[679])( );     /*NVF0(Q)*/
goto l14;
l16:V21=P;
goto l15;
}
