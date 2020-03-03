#include "dx.h"
void SPFINS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V=0,V3=0,V6=0,R=0,V35=0,V12=0,V13=0,V15=0,V16=0,V17=0,V14=0,V10=0,V11=0,V9=0,V18=0,K=0,V32=0,V23=0,V24=0,V28=0,V29=0,V30=0,V26=0,V27=0,V36=0,V25=0,V21=0,V22=0,V20=0,V31=0,V33=0;
int NN,L,S,M;
int T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10245;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2199&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NN=pile[v[22]]; L=pile[v[22]+1]; S=pile[v[22]+2]; M=pile[v[22]+3]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V36=L;
V35=S;
l1:if((V36>=M)) goto l9;
V2=vnd[NN][V36];
V1=V2;
V=V1;
x[jvj+4]=vo[15];z[jvj+4]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(283,jvj+4,jvj+5)*/
l3:if((x[jvj+5]<=0)) goto l9;
x[jvj+2]=s[x[jvj+5]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+5];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+2,V6)*/
V6=pile[WZ2]; 
if((V6!=V)) goto l4;
V3=incon;
pile[v[22]]=158; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,jvj+2,jvj+3)*/
if(x[jvj+3]!=20&&x[jvj+3]!=23) goto l2;
V3=67;
l5:R=V3;
if((R==68)) goto l6;
if((R!=67)) goto l9;
K=V35;
l8:V33=V36+1;
V35=K;
V36=V33;
goto l1;
l2:V3=68;
goto l5;
l4:x[jvj+5]=t[x[jvj+5]];
goto l3;
l6:if((V36==0)) goto l7;
if((V36<=0)) goto l9;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(241,51,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=(-6004); pile[WZ1]=V35; 
(*f[64])( );     /*SRA2((-6004),V35,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V23,91,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V24; 
(*f[64])( );     /*SRA2((-2491),V24,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V28,91,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V29; 
(*f[99])( );     /*SPM0(22,V29,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V30,93,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=V26; 
(*f[64])( );     /*SRA2(V32,V26,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=V27; 
(*f[99])( );     /*SPM0(V36,V27,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V25,93,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V21,61,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=V22; 
(*f[64])( );     /*SRA2(V,V22,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V20,59,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V31,32,K)*/
K=pile[WZ2]; 
goto l8;
l7:pile[v[22]]=(-6004); pile[WZ1]=V35; 
(*f[64])( );     /*SRA2((-6004),V35,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V12,91,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V13; 
(*f[64])( );     /*SRA2((-2491),V13,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V15,91,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V16; 
(*f[99])( );     /*SPM0(22,V16,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V17,93,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; 
(*f[38])( );     /*SPC0(V14,93,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V10,61,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=V11; 
(*f[64])( );     /*SRA2(V,V11,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V9,59,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V18,32,K)*/
K=pile[WZ2]; 
goto l8;
l9:T=V35;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+4]=T; return;
}
