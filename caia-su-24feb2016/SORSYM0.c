#include "dx.h"
void SORSYM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0,V6=0,V5=0,N=0,V12=0,V11=0,V16=0,V17=0,V18=0,V19=0,V21=0,V22=0,V23=0,V24=0,V26=0,V27=0,V28=0,V29=0;
int Q,P;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

Q=pile[v[22]]; P=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((P<=0)) goto l8;
pile[v[22]]=1190; pile[WZ1]=Q; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1190,Q,N)*/
N=pile[WZ2]; 
if((N<=0)) goto l8;
pile[v[22]]=1364; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1364,Q,jvj+1)*/
if((x[jvj+1]==67)) goto l8;
l5:V12=N+1;
V11=V12*P;
pile[v[22]]=0; pile[WZ1]=(-9661); 
(*f[37])( );     /*SRA0(0,(-9661),V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=73; 
(*f[249])( );     /*SPC1(V16,73,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=(-9663); 
(*f[37])( );     /*SRA0(V17,(-9663),V18)*/
V18=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(41,N,V18,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; pile[WZ1]=(-9666); 
(*f[37])( );     /*SRA0(V19,(-9666),V2)*/
V2=pile[WZ2]; 
V1=incon;
if((N==1)) goto l1;
V1=V2;
l2:V3=incon;
if((N>1)) goto l3;
V3=V1;
l6:pile[v[22]]=V3; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V3,44,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=73; 
(*f[249])( );     /*SPC1(V21,73,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=(-9678); 
(*f[37])( );     /*SRA0(V22,(-9678),V23)*/
V23=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V11; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(41,V11,V23,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; pile[WZ1]=(-9512); 
(*f[37])( );     /*SRA0(V24,(-9512),V6)*/
V6=pile[WZ2]; 
V5=incon;
if((V11>1)) goto l4;
V5=V6;
l7:pile[v[22]]=V5; pile[WZ1]=(-9520); 
(*f[37])( );     /*SRA0(V5,(-9520),V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=(-9672); 
(*f[37])( );     /*SRA0(V26,(-9672),V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V27,46,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=1; 
(*f[1547])( );     /*SPLO1(V28,1,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
l8:v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=V2; pile[WZ1]=89; 
(*f[38])( );     /*SPC0(V2,89,V1)*/
V1=pile[WZ2]; 
goto l2;
l3:pile[v[22]]=(-9675); pile[WZ1]=V1; 
(*f[64])( );     /*SRA2((-9675),V1,V3)*/
V3=pile[WZ2]; 
goto l6;
l4:pile[v[22]]=V6; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V6,83,V5)*/
V5=pile[WZ2]; 
goto l7;
}
