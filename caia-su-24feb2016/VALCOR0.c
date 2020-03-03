#include "dx.h"
void VALCOR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,N=0,V7=0,V13=0,V15=0,V8=0,V14=0,V17=0,V9=0,V16=0,V18=0,V21=0,V1=0,V2=0,V5=0,V6=0,V12=0,V24=0,V25=0,V26=0,V3=0,V27=0;
int A,B;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=280; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(280,B,V1)*/
V1=pile[WZ2]; 
if((A<V1)) goto l6;
l7:pile[v[22]]=164; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(164,B,V2)*/
V2=pile[WZ2]; 
if((A>V2)) goto l6;
l8:pile[v[22]]=1474; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1474,B,jvj+2)*/
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(510,jvj+2,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+2,V6)*/
V6=pile[WZ2]; 
V25=A%V6;
V26=V25;
if((V26<0)) goto l18;
V3=V26;
l9:if((V3!=V5)) goto l6;
l10:pile[v[22]]=1310; pile[WZ1]=B; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1310,B,jvj+3)*/
l11:if((x[jvj+3]>0)) goto l12;
pile[v[22]]=365; pile[WZ1]=B; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,B,jvj+6)*/
if((x[jvj+6]!=0)) goto l4;
l16:x[R]=135 ;z[R]=135;
l17:v[0]=jvj; v[22]-=3; return;
l2:V17=abs(K);
pile[v[22]]=V17; pile[WZ1]=N; 
(*f[1006])( );if(v[102]) goto l15;     /*POWER0(V17,N,V9)*/
V9=pile[WZ2]; 
V16=A%V9;
if((V16!=0)) goto l6;
l15:V24=t[V24];
l14:if((V24<=0)) goto l13;
K=s[V24];
if((K==0)) goto l3;
if((K<0)) goto l2;
if((K<=0)) goto l15;
pile[v[22]]=K; pile[WZ1]=N; 
(*f[1006])( );if(v[102]) goto l1;     /*POWER0(K,N,V7)*/
V7=pile[WZ2]; 
V13=A%V7;
if((V13!=0)) goto l6;
l1:V15=K+1;
pile[v[22]]=V15; pile[WZ1]=N; 
(*f[1006])( );if(v[102]) goto l15;     /*POWER0(V15,N,V8)*/
V8=pile[WZ2]; 
V14=A%V8;
if((V14==0)) goto l6;
goto l15;
l3:V18=A%N;
if((V18==0)) goto l6;
goto l15;
l6:x[R]=134 ;z[R]=134;
goto l17;
l12:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+4,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=195; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(195,jvj+4,jvj+5)*/
N=V12;
V24=x[jvj+5];
goto l14;
l13:x[jvj+3]=t[x[jvj+3]];
goto l11;
l18:V27=V26+V6;
V3=V27;
goto l9;
l4:if((x[jvj+6]<=0)) goto l6;
x[jvj+1]=s[x[jvj+6]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+6];
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+1,V21)*/
V21=pile[WZ2]; 
if((V21==A)) goto l16;
l5:x[jvj+6]=t[x[jvj+6]];
goto l4;
}
