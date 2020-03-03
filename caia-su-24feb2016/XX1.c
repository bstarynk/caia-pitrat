#include "dx.h"
void XX1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,I=0,HA=0,V9=0,V8=0,HB=0,V10=0,V18=0,V21=0,V20=0,V19=0,V22=0,Q=0,V15=0,V194=0,V27=0,V199=0,V187=0,V188=0,V189=0,V287=0,V288=0,V308=0,V266=0,V267=0,V273=0,V274=0,V290=0,V291=0,V276=0,V263=0,V264=0,V201=0,V202=0,V203=0,V205=0,V206=0,V207=0,V269=0,V270=0,V271=0,V282=0,V283=0,V284=0,V304=0,V305=0,V306=0,V278=0,V279=0,V280=0,V231=0,L=0,V233=0,V234=0,V85=0,V76=0,V86=0,V222=0,V78=0,V153=0,V293=0,V294=0,V295=0,V152=0,V184=0,V185=0,V177=0,V315=0,V312=0,V313=0,V179=0,V59=0,V64=0,V63=0,V62=0,V212=0,V213=0,V214=0,V209=0,V210=0,V223=0,V225=0,V226=0,V227=0,V228=0,V229=0,V316=0,V255=0,V256=0,V257=0,V258=0,V259=0,V260=0,V216=0,V217=0,V218=0,V107=0,V108=0,V236=0,V237=0,V238=0,V240=0,V241=0,V242=0,V243=0,V244=0,V297=0,V298=0,V299=0,V300=0,V301=0,V302=0,V303=0,V246=0,V247=0,V248=0,V249=0,V250=0,V251=0,V252=0,V253=0,V53=0,V57=0,V54=0,V58=0,V44=0,V155=0,V156=0,V158=0,V161=0,V122=0,V121=0,V124=0,V318=0,V319=0,V320=0,V321=0;
int II,X;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=75;
if(v[0]>99700) (*f[6])( );

II=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
Q=J=incon;
if((II>0)) goto l1;
I=0;
l8:pile[v[22]]=929; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(929,X,Q)*/
Q=pile[WZ2]; 
x[jvj+1]=vo[20];z[jvj+1]=vz[20];
pile[v[22]]=1575; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1575,jvj+1,jvj+2)*/
if((x[jvj+2]!=67)) goto l10;
pile[v[22]]=1574; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1574,jvj+1,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==Q) goto l9;
l10:pile[v[22]]=277; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(277,X,jvj+4)*/
if((x[jvj+4]==480)) goto l11;
if((x[jvj+4]!=481)) goto l14;
pile[v[22]]=498; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(498,X,jvj+7)*/
pile[v[22]]=436; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(436,jvj+7,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+8,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(I,123,V21)*/
V21=pile[WZ2]; 
V20=incon;
pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,X,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=V18; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V21,V18,41,V20)*/
V20=pile[WZ3]; 
l6:V22=incon;
pile[v[22]]=162; pile[WZ1]=X; 
(*f[219])( );if(v[102]) goto l7;     /*FNDC2(162,X,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=V19; 
(*f[249])( );     /*SPC1(V20,V19,V22)*/
V22=pile[WZ2]; 
l13:pile[v[22]]=V22; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V22,125,V199)*/
V199=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=V199; 
(*f[64])( );     /*SRA2(V27,V199,J)*/
J=pile[WZ2]; 
l32:if(Q!=incon) goto l33;
l34:pile[v[22]]=337; pile[WZ1]=X; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(337,X,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+34,jvj+35)*/
pile[v[22]]=135; pile[WZ1]=I; 
(*f[42])( );     /*SRA1(135,I,jvj+35,V231)*/
V231=pile[WZ3]; 
pile[v[22]]=V231; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V231,32,L)*/
L=pile[WZ2]; 
l47:if(J==incon) goto l48;
l74:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:V7=II+1;
I=V7;
c[v[1]][II]=32;
goto l8;
l2:V8=V9;
l3:V10=incon;
pile[v[22]]=162; pile[WZ1]=X; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(162,X,HB)*/
HB=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=HB; 
(*f[249])( );     /*SPC1(V8,HB,V10)*/
V10=pile[WZ2]; 
l12:pile[v[22]]=V10; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V10,125,J)*/
J=pile[WZ2]; 
goto l32;
l4:V10=V8;
goto l12;
l5:V20=V21;
goto l6;
l7:V22=V20;
goto l13;
l9:J=I;
l33:x[jvj+32]=vo[20];z[jvj+32]=vz[20];
pile[v[22]]=1574; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(1574,jvj+32,jvj+33)*/
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==Q) goto l34;
pile[v[22]]=Q; pile[WZ1]=1574; pile[WZ2]=jvj+32; 
(*f[235])( );     /*PLUSC2(Q,1574,jvj+32)*/
goto l34;
l11:pile[v[22]]=498; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(498,X,jvj+5)*/
pile[v[22]]=436; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(436,jvj+5,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+6,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V15,I,V194)*/
V194=pile[WZ2]; 
pile[v[22]]=V194; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V194,123,V9)*/
V9=pile[WZ2]; 
V8=incon;
pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,X,HA)*/
HA=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=HA; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V9,HA,41,V8)*/
V8=pile[WZ3]; 
goto l3;
l14:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,X,jvj+9)*/
if((x[jvj+9]!=484)) goto l15;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,X,jvj+10)*/
pile[v[22]]=102; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,X,jvj+11)*/
pile[v[22]]=I; pile[WZ1]=jvj+10; 
(*f[223])( );if(v[102]) goto l15;     /*XX0(I,jvj+10,V187)*/
V187=pile[WZ2]; 
pile[v[22]]=V187; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V187,123,V188)*/
V188=pile[WZ2]; 
pile[v[22]]=V188; pile[WZ1]=jvj+11; 
(*f[223])( );if(v[102]) goto l15;     /*XX0(V188,jvj+11,V189)*/
V189=pile[WZ2]; 
pile[v[22]]=V189; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V189,125,J)*/
J=pile[WZ2]; 
goto l32;
l15:pile[v[22]]=I; pile[WZ1]=X; 
(*f[639])( );if(v[102]) goto l16;     /*Z10Z0(I,X,J)*/
J=pile[WZ2]; 
goto l32;
l16:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,X,jvj+12)*/
if((x[jvj+12]==448)) goto l17;
if((x[jvj+12]==178)) goto l18;
if((x[jvj+12]==1317)) goto l19;
if((x[jvj+12]==85)) goto l20;
if((x[jvj+12]==86)) goto l21;
if((x[jvj+12]==128)) goto l22;
if((x[jvj+12]==69)) goto l23;
if((x[jvj+12]==711)) goto l24;
if((x[jvj+12]==120)) goto l25;
if((x[jvj+12]==108)) goto l26;
if((x[jvj+12]==1050)) goto l27;
if((x[jvj+12]==484)) goto l28;
if((x[jvj+12]==113)) goto l29;
if((x[jvj+12]==531)) goto l30;
if((x[jvj+12]==284)) goto l31;
if((x[jvj+12]!=212)) goto l32;
pile[v[22]]=102; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+30)*/
pile[v[22]]=103; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,X,jvj+31)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=212; 
(*f[98])( );     /*SRA3(135,I,212,V278)*/
V278=pile[WZ3]; 
pile[v[22]]=V278; pile[WZ1]=jvj+30; 
(*f[344])( );if(v[102]) goto l32;     /*XX1(V278,jvj+30,V279)*/
V279=pile[WZ2]; 
pile[v[22]]=V279; pile[WZ1]=(-4411); 
(*f[37])( );     /*SRA0(V279,(-4411),V280)*/
V280=pile[WZ2]; 
pile[v[22]]=V280; pile[WZ1]=jvj+31; 
(*f[344])( );if(v[102]) goto l32;     /*XX1(V280,jvj+31,J)*/
J=pile[WZ2]; 
goto l32;
l17:pile[v[22]]=I; pile[WZ1]=X; 
(*f[638])( );     /*XS0(I,X,J)*/
J=pile[WZ2]; 
goto l32;
l18:pile[v[22]]=I; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(I,123,V287)*/
V287=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=337; pile[WZ2]=V287; 
(*f[643])( );     /*XINC0(X,337,V287,V288)*/
V288=pile[WZ3]; 
pile[v[22]]=V288; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V288,125,J)*/
J=pile[WZ2]; 
goto l32;
l19:pile[v[22]]=X; pile[WZ1]=1352; pile[WZ3]=jvj+13; 
(*f[45])( );if(v[102]) goto l32;     /*FNDZ0(X,1352,V308,jvj+13)*/
V308=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=V308; 
(*f[644])( );     /*SPCMT1(I,V308,J)*/
J=pile[WZ2]; 
goto l32;
l20:pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=85; 
(*f[98])( );     /*SRA3(135,I,85,J)*/
J=pile[WZ3]; 
goto l32;
l21:pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=86; 
(*f[98])( );     /*SRA3(135,I,86,J)*/
J=pile[WZ3]; 
goto l32;
l22:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(128,X,jvj+14)*/
pile[v[22]]=I; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(I,91,V266)*/
V266=pile[WZ2]; 
pile[v[22]]=V266; pile[WZ1]=jvj+14; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V266,jvj+14,44,V267)*/
V267=pile[WZ3]; 
pile[v[22]]=V267; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V267,93,J)*/
J=pile[WZ2]; 
goto l32;
l23:pile[v[22]]=108; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(108,X,jvj+15)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V273)*/
V273=pile[WZ2]; 
pile[v[22]]=V273; pile[WZ1]=jvj+15; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V273,jvj+15,44,V274)*/
V274=pile[WZ3]; 
pile[v[22]]=V274; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V274,41,J)*/
J=pile[WZ2]; 
goto l32;
l24:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,X,jvj+16)*/
pile[v[22]]=I; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(I,91,V290)*/
V290=pile[WZ2]; 
pile[v[22]]=V290; pile[WZ1]=jvj+16; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V290,jvj+16,44,V291)*/
V291=pile[WZ3]; 
pile[v[22]]=V291; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V291,93,J)*/
J=pile[WZ2]; 
goto l32;
l25:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+17)*/
pile[v[22]]=(-2955); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2955),I,V276)*/
V276=pile[WZ2]; 
pile[v[22]]=V276; pile[WZ1]=jvj+17; 
(*f[344])( );if(v[102]) goto l32;     /*XX1(V276,jvj+17,J)*/
J=pile[WZ2]; 
goto l32;
l26:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+18)*/
pile[v[22]]=103; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,X,jvj+19)*/
pile[v[22]]=I; pile[WZ1]=jvj+18; 
(*f[641])( );if(v[102]) goto l32;     /*XY0(I,jvj+18,V263)*/
V263=pile[WZ2]; 
pile[v[22]]=V263; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V263,58,V264)*/
V264=pile[WZ2]; 
pile[v[22]]=V264; pile[WZ1]=jvj+19; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V264,jvj+19,J)*/
J=pile[WZ2]; 
goto l32;
l27:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,X,jvj+20)*/
pile[v[22]]=102; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+21)*/
pile[v[22]]=I; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(I,123,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=V201; pile[WZ1]=jvj+21; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V201,jvj+21,V202)*/
V202=pile[WZ2]; 
pile[v[22]]=V202; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V202,125,V203)*/
V203=pile[WZ2]; 
pile[v[22]]=V203; pile[WZ1]=jvj+20; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V203,jvj+20,J)*/
J=pile[WZ2]; 
goto l32;
l28:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,X,jvj+22)*/
pile[v[22]]=102; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+23)*/
pile[v[22]]=I; pile[WZ1]=jvj+22; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(I,jvj+22,V205)*/
V205=pile[WZ2]; 
pile[v[22]]=V205; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V205,123,V206)*/
V206=pile[WZ2]; 
pile[v[22]]=V206; pile[WZ1]=jvj+23; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V206,jvj+23,V207)*/
V207=pile[WZ2]; 
pile[v[22]]=V207; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V207,125,J)*/
J=pile[WZ2]; 
goto l32;
l29:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+24)*/
pile[v[22]]=103; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,X,jvj+25)*/
pile[v[22]]=I; pile[WZ1]=jvj+24; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(I,jvj+24,V269)*/
V269=pile[WZ2]; 
pile[v[22]]=V269; pile[WZ1]=60; 
(*f[38])( );     /*SPC0(V269,60,V270)*/
V270=pile[WZ2]; 
pile[v[22]]=V270; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V270,45,V271)*/
V271=pile[WZ2]; 
pile[v[22]]=V271; pile[WZ1]=jvj+25; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V271,jvj+25,J)*/
J=pile[WZ2]; 
goto l32;
l30:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,X,jvj+26)*/
pile[v[22]]=102; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+27)*/
pile[v[22]]=I; pile[WZ1]=jvj+26; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(I,jvj+26,V282)*/
V282=pile[WZ2]; 
pile[v[22]]=V282; pile[WZ1]=33; 
(*f[38])( );     /*SPC0(V282,33,V283)*/
V283=pile[WZ2]; 
pile[v[22]]=V283; pile[WZ1]=jvj+27; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V283,jvj+27,V284)*/
V284=pile[WZ2]; 
pile[v[22]]=V284; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V284,41,J)*/
J=pile[WZ2]; 
goto l32;
l31:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+28)*/
pile[v[22]]=111; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,X,jvj+29)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=284; 
(*f[98])( );     /*SRA3(135,I,284,V304)*/
V304=pile[WZ3]; 
pile[v[22]]=V304; pile[WZ1]=jvj+29; 
(*f[344])( );if(v[102]) goto l32;     /*XX1(V304,jvj+29,V305)*/
V305=pile[WZ2]; 
pile[v[22]]=V305; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V305,61,V306)*/
V306=pile[WZ2]; 
pile[v[22]]=V306; pile[WZ1]=jvj+28; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V306,jvj+28,J)*/
J=pile[WZ2]; 
goto l32;
l35:pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+34,jvj+36)*/
if((x[jvj+36]==20)) goto l36;
pile[v[22]]=I; pile[WZ1]=(-2961); 
(*f[37])( );     /*SRA0(I,(-2961),V233)*/
V233=pile[WZ2]; 
pile[v[22]]=V233; pile[WZ1]=jvj+34; 
(*f[344])( );if(v[102]) goto l36;     /*XX1(V233,jvj+34,V234)*/
V234=pile[WZ2]; 
pile[v[22]]=V234; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V234,32,L)*/
L=pile[WZ2]; 
goto l47;
l36:L=I;
goto l47;
l37:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(436,X,jvj+40)*/
l68:pile[v[22]]=101; pile[WZ1]=X; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(101,X,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=L; 
(*f[220])( );     /*SRA4(jvj+74,L,J)*/
J=pile[WZ2]; 
goto l74;
l38:pile[v[22]]=135; pile[WZ1]=L; pile[WZ2]=jvj+41; 
(*f[98])( );     /*SRA3(135,L,jvj+41,V76)*/
V76=pile[WZ3]; 
l39:V78=incon;
V86=x[jvj+41];
if((V86>sepsimp)) goto l40;
V78=V76;
l57:pile[v[22]]=V78; pile[WZ1]=jvj+50; pile[WZ2]=1436; 
(*f[642])( );     /*XM0(V78,jvj+50,1436,V223)*/
V223=pile[WZ3]; 
pile[v[22]]=V223; pile[WZ1]=jvj+51; 
(*f[642])( );     /*XM0(V223,jvj+51,1436,J)*/
J=pile[WZ3]; 
goto l74;
l40:V222=x[jvj+41];
pile[v[22]]=20; pile[WZ1]=V222; pile[WZ2]=V76; 
(*f[39])( );     /*SDX0(20,V222,V76,V78)*/
V78=pile[WZ3]; 
goto l57;
l42:pile[v[22]]=V153; pile[WZ1]=(-4412); 
(*f[37])( );     /*SRA0(V153,(-4412),V293)*/
V293=pile[WZ2]; 
pile[v[22]]=V293; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V293,32,V294)*/
V294=pile[WZ2]; 
pile[v[22]]=V294; pile[WZ1]=jvj+42; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V294,jvj+42,44,V295)*/
V295=pile[WZ3]; 
V152=0;
V318=V295;
if((V318<0)) goto l67;
pile[v[22]]=V318; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V318,3)*/
l67:J=V152;
goto l74;
l43:V177=L;
l44:V179=incon;
pile[v[22]]=1923; pile[WZ1]=X; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(1923,X,jvj+43)*/
if((x[jvj+43]!=0)) goto l45;
V179=V177;
l60:pile[v[22]]=V179; pile[WZ1]=jvj+55; pile[WZ2]=1688; 
(*f[642])( );     /*XM0(V179,jvj+55,1688,V316)*/
V316=pile[WZ3]; 
pile[v[22]]=V316; pile[WZ1]=jvj+56; pile[WZ2]=1689; 
(*f[642])( );     /*XM0(V316,jvj+56,1689,J)*/
J=pile[WZ3]; 
goto l74;
l45:V315=x[jvj+43];
V312=0;
V319=V177;
if((V319<0)) goto l46;
pile[v[22]]=V319; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V319,3)*/
l46:pile[v[22]]=135; pile[WZ1]=V312; pile[WZ2]=1923; 
(*f[42])( );     /*SRA1(135,V312,1923,V313)*/
V313=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V315; pile[WZ2]=V313; 
(*f[39])( );     /*SDX0(23,V315,V313,V179)*/
V179=pile[WZ3]; 
goto l60;
l48:pile[v[22]]=162; pile[WZ1]=X; 
(*f[219])( );if(v[102]) goto l49;     /*FNDC2(162,X,V59)*/
V59=pile[WZ2]; 
V64=L+1;
V63=V64+1;
V62=V63+1;
J=V62;
c[v[1]][L]=39;
c[v[1]][V64]=V59;
c[v[1]][V63]=39;
goto l74;
l49:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(100,X,jvj+44)*/
if((x[jvj+44]==73)) goto l50;
if((x[jvj+44]==185)) goto l51;
if((x[jvj+44]==22)) goto l52;
if((x[jvj+44]==43)) goto l54;
if((x[jvj+44]==42)) goto l55;
if((x[jvj+44]==39)) goto l56;
if((x[jvj+44]==1732)) goto l59;
if((x[jvj+44]==47)) goto l61;
if((x[jvj+44]==435)) goto l63;
if((x[jvj+44]==537)) goto l65;
if((x[jvj+44]!=492)) goto l68;
pile[v[22]]=436; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(436,X,jvj+70)*/
pile[v[22]]=102; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(102,X,jvj+71)*/
pile[v[22]]=103; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(103,X,jvj+72)*/
pile[v[22]]=111; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(111,X,jvj+73)*/
pile[v[22]]=135; pile[WZ1]=L; pile[WZ2]=492; 
(*f[98])( );     /*SRA3(135,L,492,V246)*/
V246=pile[WZ3]; 
pile[v[22]]=V246; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V246,32,V247)*/
V247=pile[WZ2]; 
pile[v[22]]=V247; pile[WZ1]=jvj+73; 
(*f[223])( );if(v[102]) goto l68;     /*XX0(V247,jvj+73,V248)*/
V248=pile[WZ2]; 
pile[v[22]]=V248; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V248,58,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=V249; pile[WZ1]=jvj+70; 
(*f[223])( );if(v[102]) goto l68;     /*XX0(V249,jvj+70,V250)*/
V250=pile[WZ2]; 
pile[v[22]]=V250; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V250,59,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=V251; pile[WZ1]=jvj+71; 
(*f[223])( );if(v[102]) goto l68;     /*XX0(V251,jvj+71,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=V252; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V252,44,V253)*/
V253=pile[WZ2]; 
pile[v[22]]=V253; pile[WZ1]=jvj+72; 
(*f[223])( );if(v[102]) goto l68;     /*XX0(V253,jvj+72,J)*/
J=pile[WZ2]; 
goto l74;
l50:pile[v[22]]=L; pile[WZ1]=X; 
(*f[637])( );     /*XOR0(L,X,J)*/
J=pile[WZ2]; 
goto l74;
l51:pile[v[22]]=X; pile[WZ1]=L; 
(*f[636])( );if(v[102]) goto l68;     /*XN0(X,L,J)*/
J=pile[WZ2]; 
goto l74;
l52:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(111,X,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(101,jvj+37,jvj+38)*/
pile[v[22]]=1744; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1744,jvj+38,jvj+39)*/
if((x[jvj+39]==68)) goto l68;
l53:pile[v[22]]=X; pile[WZ1]=L; 
(*f[635])( );if(v[102]) goto l68;     /*XF0(X,L,J)*/
J=pile[WZ2]; 
goto l74;
l54:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(102,X,jvj+45)*/
pile[v[22]]=103; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(103,X,jvj+46)*/
pile[v[22]]=L; pile[WZ1]=jvj+45; 
(*f[641])( );if(v[102]) goto l68;     /*XY0(L,jvj+45,V212)*/
V212=pile[WZ2]; 
pile[v[22]]=V212; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V212,40,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=V213; pile[WZ1]=jvj+46; 
(*f[223])( );if(v[102]) goto l68;     /*XX0(V213,jvj+46,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=V214; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V214,41,J)*/
J=pile[WZ2]; 
goto l74;
l55:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(107,X,jvj+47)*/
pile[v[22]]=105; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(105,X,jvj+48)*/
pile[v[22]]=L; pile[WZ1]=jvj+47; pile[WZ2]=44; 
(*f[640])( );     /*XL0(L,jvj+47,44,V209)*/
V209=pile[WZ3]; 
pile[v[22]]=(-2929); pile[WZ1]=V209; 
(*f[64])( );     /*SRA2((-2929),V209,V210)*/
V210=pile[WZ2]; 
pile[v[22]]=V210; pile[WZ1]=jvj+48; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V210,jvj+48,44,J)*/
J=pile[WZ3]; 
goto l74;
l56:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(111,X,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(101,jvj+49,jvj+41)*/
pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(114,X,jvj+50)*/
pile[v[22]]=113; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(113,X,jvj+51)*/
V76=incon;
V85=x[jvj+41];
if((V85<=sepnouv)) goto l38;
V76=L;
goto l39;
l58:pile[v[22]]=100; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(100,jvj+49,jvj+52)*/
if((x[jvj+52]==20)) goto l68;
pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(114,X,jvj+53)*/
pile[v[22]]=113; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(113,X,jvj+54)*/
pile[v[22]]=(-2954); pile[WZ1]=L; 
(*f[64])( );     /*SRA2((-2954),L,V225)*/
V225=pile[WZ2]; 
pile[v[22]]=V225; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V225,34,V226)*/
V226=pile[WZ2]; 
pile[v[22]]=V226; pile[WZ1]=jvj+49; 
(*f[223])( );if(v[102]) goto l68;     /*XX0(V226,jvj+49,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=V227; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V227,34,V228)*/
V228=pile[WZ2]; 
pile[v[22]]=V228; pile[WZ1]=jvj+53; pile[WZ2]=1436; 
(*f[642])( );     /*XM0(V228,jvj+53,1436,V229)*/
V229=pile[WZ3]; 
pile[v[22]]=V229; pile[WZ1]=jvj+54; 
(*f[642])( );     /*XM0(V229,jvj+54,1436,J)*/
J=pile[WZ3]; 
goto l74;
l59:pile[v[22]]=1688; pile[WZ1]=X; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(1688,X,jvj+55)*/
pile[v[22]]=1689; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(1689,X,jvj+56)*/
V177=incon;
V184=x[X];
if((V184>=sepcte)) goto l43;
if((V185=w[x[X]][0])==incon) goto l43;
pile[v[22]]=V185; pile[WZ1]=L; 
(*f[64])( );     /*SRA2(V185,L,V177)*/
V177=pile[WZ2]; 
goto l44;
l61:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(436,X,jvj+57)*/
pile[v[22]]=184; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(184,X,jvj+58)*/
pile[v[22]]=135; pile[WZ1]=L; pile[WZ2]=47; 
(*f[98])( );     /*SRA3(135,L,47,V255)*/
V255=pile[WZ3]; 
pile[v[22]]=V255; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V255,40,V256)*/
V256=pile[WZ2]; 
pile[v[22]]=V256; pile[WZ1]=jvj+57; 
(*f[223])( );if(v[102]) goto l37;     /*XX0(V256,jvj+57,V257)*/
V257=pile[WZ2]; 
pile[v[22]]=V257; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V257,41,V258)*/
V258=pile[WZ2]; 
pile[v[22]]=V258; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V258,91,V259)*/
V259=pile[WZ2]; 
pile[v[22]]=V259; pile[WZ1]=jvj+58; pile[WZ2]=59; 
(*f[640])( );     /*XL0(V259,jvj+58,59,V260)*/
V260=pile[WZ3]; 
pile[v[22]]=V260; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V260,93,J)*/
J=pile[WZ2]; 
goto l74;
l62:pile[v[22]]=184; pile[WZ1]=X; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(184,X,jvj+59)*/
pile[v[22]]=135; pile[WZ1]=L; pile[WZ2]=47; 
(*f[98])( );     /*SRA3(135,L,47,V216)*/
V216=pile[WZ3]; 
pile[v[22]]=V216; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V216,91,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=V217; pile[WZ1]=jvj+59; pile[WZ2]=59; 
(*f[640])( );     /*XL0(V217,jvj+59,59,V218)*/
V218=pile[WZ3]; 
pile[v[22]]=V218; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V218,93,J)*/
J=pile[WZ2]; 
goto l74;
l63:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(111,X,jvj+60)*/
pile[v[22]]=101; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(101,jvj+60,jvj+61)*/
pile[v[22]]=332; pile[WZ1]=jvj+61; 
(*f[219])( );if(v[102]) goto l64;     /*FNDC2(332,jvj+61,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=331; 
(*f[219])( );if(v[102]) goto l64;     /*FNDC2(331,jvj+61,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(102,X,jvj+62)*/
pile[v[22]]=436; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(436,X,jvj+63)*/
pile[v[22]]=L; pile[WZ1]=jvj+63; 
(*f[223])( );if(v[102]) goto l64;     /*XX0(L,jvj+63,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=V236; pile[WZ1]=V108; 
(*f[38])( );     /*SPC0(V236,V108,V237)*/
V237=pile[WZ2]; 
pile[v[22]]=V237; pile[WZ1]=V107; 
(*f[38])( );     /*SPC0(V237,V107,V238)*/
V238=pile[WZ2]; 
pile[v[22]]=V238; pile[WZ1]=jvj+62; 
(*f[223])( );if(v[102]) goto l64;     /*XX0(V238,jvj+62,J)*/
J=pile[WZ2]; 
goto l74;
l64:pile[v[22]]=100; pile[WZ1]=jvj+60; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(100,jvj+60,jvj+64)*/
if((x[jvj+64]==20)) goto l68;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(102,X,jvj+65)*/
pile[v[22]]=436; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(436,X,jvj+66)*/
pile[v[22]]=L; pile[WZ1]=jvj+66; 
(*f[223])( );if(v[102]) goto l68;     /*XX0(L,jvj+66,V240)*/
V240=pile[WZ2]; 
pile[v[22]]=V240; pile[WZ1]=(-2960); 
(*f[37])( );     /*SRA0(V240,(-2960),V241)*/
V241=pile[WZ2]; 
pile[v[22]]=V241; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V241,34,V242)*/
V242=pile[WZ2]; 
pile[v[22]]=V242; pile[WZ1]=jvj+60; 
(*f[223])( );if(v[102]) goto l68;     /*XX0(V242,jvj+60,V243)*/
V243=pile[WZ2]; 
pile[v[22]]=V243; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V243,34,V244)*/
V244=pile[WZ2]; 
pile[v[22]]=V244; pile[WZ1]=jvj+65; 
(*f[344])( );if(v[102]) goto l68;     /*XX1(V244,jvj+65,J)*/
J=pile[WZ2]; 
goto l74;
l65:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(160,X,jvj+67)*/
pile[v[22]]=102; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(102,X,jvj+68)*/
pile[v[22]]=103; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(103,X,jvj+69)*/
pile[v[22]]=107; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,X,jvj+42)*/
pile[v[22]]=(-3698); pile[WZ1]=L; 
(*f[64])( );     /*SRA2((-3698),L,V297)*/
V297=pile[WZ2]; 
pile[v[22]]=V297; pile[WZ1]=jvj+68; 
(*f[344])( );if(v[102]) goto l68;     /*XX1(V297,jvj+68,V298)*/
V298=pile[WZ2]; 
pile[v[22]]=V298; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V298,58,V299)*/
V299=pile[WZ2]; 
pile[v[22]]=V299; pile[WZ1]=jvj+69; 
(*f[344])( );if(v[102]) goto l68;     /*XX1(V299,jvj+69,V300)*/
V300=pile[WZ2]; 
V301=0;
V320=V300;
if((V320<0)) goto l66;
pile[v[22]]=V320; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V320,3)*/
l66:pile[v[22]]=V301; pile[WZ1]=(-4413); 
(*f[37])( );     /*SRA0(V301,(-4413),V302)*/
V302=pile[WZ2]; 
pile[v[22]]=V302; pile[WZ1]=jvj+67; 
(*f[344])( );if(v[102]) goto l68;     /*XX1(V302,jvj+67,V303)*/
V303=pile[WZ2]; 
V153=0;
V321=V303;
if((V321<0)) goto l41;
pile[v[22]]=V321; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V321,3)*/
l41:V152=incon;
if((x[jvj+42]!=0)) goto l42;
V152=V153;
goto l67;
l69:pile[v[22]]=163; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l70;     /*FNDC1(163,X,V53)*/
V53=pile[WZ2]; 
V57=L+1;
c[v[1]][L]=96;
pile[v[22]]=V53; pile[WZ1]=V57; 
(*f[64])( );     /*SRA2(V53,V57,V54)*/
V54=pile[WZ2]; 
V58=V54+1;
c[v[1]][V54]=96;
J=V58;
goto l74;
l70:pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(130,X,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=L; 
(*f[221])( );     /*SRN0(V44,L,J)*/
J=pile[WZ2]; 
goto l74;
l71:if((v[67]!=0)) goto l72;
if((v[67]==0)) goto l73;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l72:V155=I+1;
V156=V155+1;
V158=V156+1;
V161=V158+1;
c[v[1]][I]=126;
c[v[1]][V155]=126;
c[v[1]][V156]=126;
c[v[1]][V158]=126;
J=V161;
goto l74;
l73:V122=x[X];
pile[v[22]]=373; pile[WZ1]=X; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(373,X,jvj+75)*/
v[67]=1;
pile[v[22]]=I; pile[WZ1]=42; pile[WZ2]=V122; pile[WZ3]=jvj+75; pile[WZ4]=67; 
(*f[224])( );     /*SDA0(I,42,V122,jvj+75,67,V121)*/
V121=pile[WZ5]; 
V124=V121+1;
J=V124;
c[v[1]][V121]=42;
v[67]=0;
goto l74;
}
