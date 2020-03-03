#include "dx.h"
void STEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V7=0,V9=0,V10=0,V11=0,HH=0,V8=0;
int S,GG,A,T,U,H,K;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

S=pile[v[22]]; GG=pile[v[22]+1]; A=pile[v[22]+2]; T=pile[v[22]+3]; U=pile[v[22]+4]; H=pile[v[22]+5]; K=pile[v[22]+6]; v[22]+=7; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
HH=incon;
pile[v[22]]=1260; pile[WZ1]=T; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1260,T,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=109; pile[WZ1]=T; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(109,T,jvj+5)*/
pile[WZ1]=jvj+5; pile[WZ2]=698; pile[WZ3]=A; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(109,jvj+5,698,A,jvj+4)*/
x[jvj+6]=x[jvj+4] ;z[jvj+6]=z[jvj+4];
pile[v[22]]=163; pile[WZ1]=T; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,T,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=163; pile[WZ2]=V5; 
(*f[177])( );     /*CHGC4(jvj+4,163,V5)*/
l4:pile[v[22]]=T; pile[WZ1]=1260; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(T,1260,jvj+4)*/
l7:pile[v[22]]=516; pile[WZ1]=jvj+6; 
(*f[219])( );if(v[102]) goto l8;     /*FNDC2(516,jvj+6,HH)*/
HH=pile[WZ2]; 
l8:V8=GG+1;
V7=incon;
if((x[S]==1012)) goto l5;
V9=40*V8;
V7=V9;
l9:pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=V7; 
(*f[186])( );     /*BTC0(jvj+6,117,V7)*/
if(HH==incon) goto l10;
if((HH==63)) goto l11;
if((HH==U)) goto l11;
pile[WZ1]=516; pile[WZ2]=63; 
(*f[69])( );     /*CHGC3(jvj+6,516,63)*/
l11:if((x[S]==1012)) goto l6;
pile[v[22]]=610; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(610,jvj+6,V11)*/
V11=pile[WZ2]; 
if((V11>=GG)) goto l14;
l13:pile[v[22]]=jvj+6; pile[WZ1]=610; pile[WZ2]=GG; 
(*f[43])( );     /*CHGC2(jvj+6,610,GG)*/
pile[WZ1]=475; pile[WZ2]=H; 
(*f[35])( );     /*CHGC1(jvj+6,475,H)*/
pile[WZ1]=502; pile[WZ2]=K; 
(*f[35])( );     /*CHGC1(jvj+6,502,K)*/
l14:v[0]=jvj; v[22]-=7; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=698; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(698,jvj+2,jvj+3)*/
if((x[A]!=x[jvj+3])) goto l3;
x[jvj+6]=x[jvj+2] ;z[jvj+6]=z[jvj+2];
goto l7;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l5:V7=V8;
goto l9;
l6:pile[v[22]]=164; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(164,jvj+6,V10)*/
V10=pile[WZ2]; 
if((V10>=GG)) goto l14;
l12:pile[v[22]]=jvj+6; pile[WZ1]=164; pile[WZ2]=GG; 
(*f[43])( );     /*CHGC2(jvj+6,164,GG)*/
pile[WZ1]=447; pile[WZ2]=H; 
(*f[35])( );     /*CHGC1(jvj+6,447,H)*/
pile[WZ1]=459; pile[WZ2]=K; 
(*f[35])( );     /*CHGC1(jvj+6,459,K)*/
goto l14;
l10:pile[v[22]]=jvj+6; pile[WZ1]=516; pile[WZ2]=U; 
(*f[69])( );     /*CHGC3(jvj+6,516,U)*/
goto l11;
}
