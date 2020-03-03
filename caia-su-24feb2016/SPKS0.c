#include "dx.h"
void SPKS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V10=0,R=0,V3=0,V5=0,V8=0,K=0,V41=0,V63=0,V31=0,V32=0,V33=0,V34=0,V36=0,V37=0,V38=0,V35=0,V30=0,V39=0,KK=0,V26=0,V27=0,V14=0,V15=0,V16=0,V17=0,V21=0,V22=0,V23=0,V19=0,V20=0,V64=0,V18=0,V13=0,V24=0,V60=0,V46=0,V47=0,V48=0,V44=0,V45=0,V49=0,V50=0,V54=0,V55=0,V56=0,V52=0,V53=0,V51=0,V43=0,V57=0,V61=0;
int NN,L,S;
int T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=10246;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1806&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NN=pile[v[22]]; L=pile[v[22]+1]; S=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V64=L;
V63=S;
l15:K=KK=incon;
V10=knd[NN];
if((V64<V10)) goto l2;
V3=knr[NN];
if((V64>=V3)) goto l13;
V5=vnd[NN][V64];
x[jvj+4]=vo[15];z[jvj+4]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(283,jvj+4,jvj+5)*/
l3:if((x[jvj+5]<=0)) goto l13;
x[jvj+2]=s[x[jvj+5]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+5];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+2,V8)*/
V8=pile[WZ2]; 
if((V8!=V5)) goto l4;
V1=incon;
pile[v[22]]=158; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(158,jvj+2,jvj+3)*/
if(x[jvj+3]!=20&&x[jvj+3]!=23) goto l1;
V1=68;
l5:R=V1;
if((R!=67)) goto l6;
K=V63;
l6:if((V64==0)) goto l7;
if((R!=68)) goto l8;
if((V64<=0)) goto l8;
V26=vnd[NN][V64];
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(241,51,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=V63; 
(*f[64])( );     /*SRA2(V26,V63,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V14,61,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=(-6004); pile[WZ1]=V15; 
(*f[64])( );     /*SRA2((-6004),V15,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V16,91,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V17; 
(*f[64])( );     /*SRA2((-2491),V17,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V21,91,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V22; 
(*f[99])( );     /*SPM0(22,V22,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V23,93,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=V19; 
(*f[64])( );     /*SRA2(V27,V19,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=V20; 
(*f[99])( );     /*SPM0(V64,V20,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V18,93,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V13,59,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V24,32,KK)*/
KK=pile[WZ2]; 
l8:if(K==incon) goto l9;
l12:V61=V64+1;
V63=K;
V64=V61;
goto l15;
l1:V1=67;
goto l5;
l2:R=68;
goto l6;
l4:x[jvj+5]=t[x[jvj+5]];
goto l3;
l7:if((R!=68)) goto l8;
V41=vnd[NN][V64];
pile[v[22]]=V41; pile[WZ1]=V63; 
(*f[64])( );     /*SRA2(V41,V63,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V31,61,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=(-6004); pile[WZ1]=V32; 
(*f[64])( );     /*SRA2((-6004),V32,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V33,91,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V34; 
(*f[64])( );     /*SRA2((-2491),V34,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V36,91,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V37; 
(*f[99])( );     /*SPM0(22,V37,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V38,93,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; 
(*f[38])( );     /*SPC0(V35,93,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V30,59,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V39,32,KK)*/
KK=pile[WZ2]; 
goto l8;
l9:if(KK!=incon) goto l10;
l13:T=V63;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=T; return;
l10:if((R!=68)) goto l11;
x[jvj+6]=vo[15];z[jvj+6]=vz[15];
pile[v[22]]=372; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(372,jvj+6,jvj+7)*/
if((x[jvj+7]!=68)) goto l11;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(241,51,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=(-8066); pile[WZ1]=KK; 
(*f[64])( );     /*SRA2((-8066),KK,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V46,91,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=V47; 
(*f[99])( );     /*SPM0(V64,V47,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V48,93,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V44,61,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=(-6004); pile[WZ1]=V45; 
(*f[64])( );     /*SRA2((-6004),V45,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V49; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V49,91,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V50; 
(*f[64])( );     /*SRA2((-2491),V50,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V54,91,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V55; 
(*f[99])( );     /*SPM0(22,V55,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V56,93,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=V52; 
(*f[64])( );     /*SRA2(V60,V52,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=V53; 
(*f[99])( );     /*SPM0(V64,V53,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V51,93,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V43,59,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V57,32,K)*/
K=pile[WZ2]; 
goto l12;
l11:K=KK;
goto l12;
}
