#include "dx.h"
void SPE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V14=0,V8=0,V16=0,V6=0,K=0,V2=0,V10=0,V11=0,V12=0;
int I,X,P,S;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; P=pile[v[22]+2]; S=pile[v[22]+3]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(216,158,jvj+1)*/
if((x[S]==480)) goto l4;
if((x[S]==21)) goto l1;
if((x[S]!=255)) goto l10;
pile[v[22]]=273; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(273,jvj+1,jvj+4)*/
V16=x[X];
l7:if((V16<=0)) goto l10;
V8=s[V16];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V8) goto l8;
pile[v[22]]=I; pile[WZ1]=P; 
(*f[38])( );     /*SPC0(I,P,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=V10; 
(*f[64])( );     /*SRA2(V8,V10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V11,61,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=48; 
(*f[38])( );     /*SPC0(V12,48,K)*/
K=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=273; pile[WZ2]=V8; 
(*f[735])( );     /*PLUSC4(jvj+1,273,V8)*/
l9:pile[v[22]]=K; pile[WZ1]=jvj+1; pile[WZ2]=X; pile[WZ3]=44; pile[WZ4]=S; 
(*f[1982])( );     /*SPE1(K,jvj+1,X,44,S,J)*/
J=pile[WZ5]; 
l11:v[0]=jvj; v[22]-=5; pile[v[22]+4]=J; return;
l1:pile[v[22]]=273; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(273,jvj+1,jvj+2)*/
V14=x[X];
l2:if((V14<=0)) goto l10;
V=s[V14];
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==V) goto l3;
pile[v[22]]=I; pile[WZ1]=P; 
(*f[38])( );     /*SPC0(I,P,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=V2; 
(*f[64])( );     /*SRA2(V,V2,K)*/
K=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=273; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(jvj+1,273,V)*/
goto l9;
l3:V14=t[V14];
goto l2;
l4:pile[v[22]]=334; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(334,jvj+1,jvj+3)*/
x[jvj+6]=x[X] ;z[jvj+6]=z[X];
l5:if((x[jvj+6]<=0)) goto l10;
x[jvj+5]=s[x[jvj+6]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+6];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l6;
pile[v[22]]=I; pile[WZ1]=P; 
(*f[38])( );     /*SPC0(I,P,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=jvj+5; 
(*f[1981])( );if(v[102]) goto l10;     /*SPSS0(V6,jvj+5,K)*/
K=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=334; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+1,334,jvj+5)*/
goto l9;
l6:x[jvj+6]=t[x[jvj+6]];
goto l5;
l8:V16=t[V16];
goto l7;
l10:J=I;
goto l11;
}
