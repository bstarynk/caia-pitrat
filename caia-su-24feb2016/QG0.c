#include "dx.h"
void QG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Q=0,V27=0,V29=0,V22=0,V5=0,V21=0,K=0,V1=0,V3=0,V4=0,V2=0,V6=0,V9=0,V10=0,V12=0,V11=0,V7=0,V15=0,V16=0,V18=0,V17=0,V13=0,V38=0,V30=0,V32=0,V33=0,V34=0,V36=0,V37=0,V35=0,JJ=0,VV=0,V55=0,V48=0,V49=0,V50=0,V51=0,V52=0,V53=0,V54=0,J=0,V44=0,V46=0,V45=0,V43=0,V42=0,V71=0,V64=0,V66=0,V67=0,V68=0,V69=0,V70=0,V65=0,V63=0,V62=0,V73=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=10288;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1764&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l11:K=incon;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=405; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(405,jvj+2,Q)*/
Q=pile[WZ2]; 
if((Q!=0)) goto l1;
pile[v[22]]=1304; 
(*f[71])( );     /*ENLV0(1304,jvj+2)*/
l1:V27=incon;
if((Q==0)) goto l2;
V27=3999;
l3:V29=V27;
pile[v[22]]=V29; pile[WZ1]=193; pile[WZ2]=jvj+3; 
(*f[329])( );     /*TRI13(V29,193,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=235; 
(*f[35])( );     /*CHGC1(jvj+2,235,jvj+3)*/
pile[v[22]]=241; pile[WZ1]=171; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(241,171,V22)*/
V22=pile[WZ2]; 
x[jvj+4]=vo[15];z[jvj+4]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(583,jvj+4,jvj+5)*/
V5=0;
V21=Q+10;
K=v[27];
v[2]=v[1];
V1=V5;
v[1]=4;
pile[v[22]]=135; pile[WZ1]=V1; 
(*f[98])( );     /*SRA3(135,V1,jvj+5,V3)*/
V3=pile[WZ3]; 
pile[v[22]]=Q; pile[WZ1]=V3; 
(*f[99])( );     /*SPM0(Q,V3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=(-787); pile[WZ1]=V4; 
(*f[64])( );     /*SRA2((-787),V4,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V2,0,V6)*/
V6=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V6; pile[WZ1]=1153; pile[WZ2]=V21; 
(*f[67])( );     /*SPA0(V6,1153,V21)*/
pile[v[22]]=V22; pile[WZ1]=V5; 
(*f[64])( );     /*SRA2(V22,V5,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V9,34,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=(-2614); pile[WZ1]=V10; 
(*f[64])( );     /*SRA2((-2614),V10,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=(-2615); pile[WZ1]=V12; 
(*f[64])( );     /*SRA2((-2615),V12,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V11,34,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; 
(*f[288])( );     /*SPLN0(V7)*/
pile[v[22]]=V22; pile[WZ1]=V5; 
(*f[64])( );     /*SRA2(V22,V5,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V15,34,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=(-8342); pile[WZ1]=V16; 
(*f[64])( );     /*SRA2((-8342),V16,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=(-2615); pile[WZ1]=V18; 
(*f[64])( );     /*SRA2((-2615),V18,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V17,34,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; 
(*f[288])( );     /*SPLN0(V13)*/
l4:pile[v[22]]=241; pile[WZ1]=690; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(241,690,V38)*/
V38=pile[WZ2]; 
x[jvj+6]=vo[15];z[jvj+6]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(583,jvj+6,jvj+7)*/
V30=0;
pile[v[22]]=V38; pile[WZ1]=V30; 
(*f[64])( );     /*SRA2(V38,V30,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=jvj+7; 
(*f[98])( );     /*SRA3(135,V32,jvj+7,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=Q; pile[WZ1]=V33; 
(*f[99])( );     /*SPM0(Q,V33,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V34,40,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=V36; 
(*f[64])( );     /*SRA2(V38,V36,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V37,41,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; 
(*f[656])( );     /*SPLN2(V35,JJ)*/
JJ=pile[WZ1]; 
x[jvj+9]=vo[15];z[jvj+9]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(583,jvj+9,jvj+10)*/
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(498,jvj+8,jvj+11)*/
V55=incon;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+8,VV)*/
VV=pile[WZ2]; 
V55=VV;
l6:pile[v[22]]=JJ; pile[WZ1]=47; 
(*f[38])( );     /*SPC0(JJ,47,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V48,42,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V49; pile[WZ2]=jvj+11; 
(*f[98])( );     /*SRA3(135,V49,jvj+11,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V50,32,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=V51; 
(*f[64])( );     /*SRA2(V55,V51,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V52; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V52,42,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=47; 
(*f[38])( );     /*SPC0(V53,47,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V54; 
(*f[656])( );     /*SPLN2(V54,J)*/
J=pile[WZ1]; 
pile[v[22]]=jvj+10; pile[WZ1]=Q; 
(*f[1960])( );     /*COPYRIGHT1(jvj+10,Q)*/
if((Q==0)) goto l7;
if((Q<=0)) goto l8;
pile[v[22]]=241; pile[WZ1]=80; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(241,80,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=J; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(J,123,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V64; 
(*f[656])( );     /*SPLN2(V64,V66)*/
V66=pile[WZ1]; 
pile[v[22]]=V66; 
(*f[1961])( );     /*QK0(V66,V67)*/
V67=pile[WZ1]; 
pile[v[22]]=3999; pile[WZ1]=193; pile[WZ2]=jvj+12; 
(*f[329])( );     /*TRI13(3999,193,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=V67; 
(*f[1962])( );     /*SPB0(jvj+12,V67,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=V68; 
(*f[64])( );     /*SRA2(V71,V68,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; 
(*f[1803])( );     /*SPLL0(V69,V70)*/
V70=pile[WZ1]; 
pile[v[22]]=V70; 
(*f[656])( );     /*SPLN2(V70,V65)*/
V65=pile[WZ1]; 
pile[v[22]]=V65; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V65,125,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V63; 
(*f[656])( );     /*SPLN2(V63,V62)*/
V62=pile[WZ1]; 
l8:if(K!=incon) goto l9;
l10:x[jvj+1]=incon; v[0]=jvj; return;
l2:V27=3998;
goto l3;
l5:V55=((-6488));
goto l6;
l7:pile[v[22]]=J; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(J,123,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; 
(*f[656])( );     /*SPLN2(V44,V46)*/
V46=pile[WZ1]; 
pile[v[22]]=V46; 
(*f[1959])( );if(v[102]) goto l8;     /*QN0(V46,V45)*/
V45=pile[WZ1]; 
pile[v[22]]=V45; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V45,125,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; 
(*f[656])( );     /*SPLN2(V43,V42)*/
V42=pile[WZ1]; 
goto l8;
l9:V73=Q+10;
pile[v[22]]=V73; 
(*f[63])( );     /*SPZ1(V73)*/
v[27]=K;
x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=728; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(728,jvj+13,jvj+14)*/
goto l11;
}
