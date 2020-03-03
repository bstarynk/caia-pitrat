#include "dx.h"
void XX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int HA=0,V8=0,V7=0,HB=0,V9=0,V17=0,V20=0,V19=0,V18=0,V21=0,Q=0,V14=0,V193=0,V26=0,V198=0,V186=0,V187=0,V188=0,V286=0,V287=0,V307=0,V265=0,V266=0,V272=0,V273=0,V289=0,V290=0,V275=0,V262=0,V263=0,V200=0,V201=0,V202=0,V204=0,V205=0,V206=0,V268=0,V269=0,V270=0,V281=0,V282=0,V283=0,V303=0,V304=0,V305=0,V277=0,V278=0,V279=0,V230=0,L=0,V232=0,V233=0,V84=0,V75=0,V85=0,V221=0,V77=0,V152=0,V292=0,V293=0,V294=0,V151=0,V183=0,V184=0,V176=0,V314=0,V311=0,V312=0,V178=0,V58=0,V63=0,V62=0,V61=0,V211=0,V212=0,V213=0,V208=0,V209=0,V222=0,V224=0,V225=0,V226=0,V227=0,V228=0,V315=0,V254=0,V255=0,V256=0,V257=0,V258=0,V259=0,V215=0,V216=0,V217=0,V106=0,V107=0,V235=0,V236=0,V237=0,V239=0,V240=0,V241=0,V242=0,V243=0,V296=0,V297=0,V298=0,V299=0,V300=0,V301=0,V302=0,V245=0,V246=0,V247=0,V248=0,V249=0,V250=0,V251=0,V252=0,V52=0,V56=0,V53=0,V57=0,V43=0,V154=0,V155=0,V157=0,V160=0,V121=0,V120=0,V123=0,V317=0,V318=0,V319=0,V320=0;
int I,X;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=75;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
Q=J=incon;
pile[v[22]]=929; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(929,X,Q)*/
Q=pile[WZ2]; 
x[jvj+1]=vo[20];z[jvj+1]=vz[20];
pile[v[22]]=1575; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1575,jvj+1,jvj+2)*/
if((x[jvj+2]!=67)) goto l8;
pile[v[22]]=1574; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1574,jvj+1,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==Q) goto l7;
l8:pile[v[22]]=277; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(277,X,jvj+4)*/
if((x[jvj+4]==480)) goto l9;
if((x[jvj+4]!=481)) goto l12;
pile[v[22]]=498; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(498,X,jvj+7)*/
pile[v[22]]=436; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(436,jvj+7,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+8,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(I,123,V20)*/
V20=pile[WZ2]; 
V19=incon;
pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,X,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=V17; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V20,V17,41,V19)*/
V19=pile[WZ3]; 
l5:V21=incon;
pile[v[22]]=162; pile[WZ1]=X; 
(*f[219])( );if(v[102]) goto l6;     /*FNDC2(162,X,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=V18; 
(*f[249])( );     /*SPC1(V19,V18,V21)*/
V21=pile[WZ2]; 
l11:pile[v[22]]=V21; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V21,125,V198)*/
V198=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=V198; 
(*f[64])( );     /*SRA2(V26,V198,J)*/
J=pile[WZ2]; 
l30:if(Q!=incon) goto l31;
l32:pile[v[22]]=337; pile[WZ1]=X; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(337,X,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+34,jvj+35)*/
pile[v[22]]=135; pile[WZ1]=I; 
(*f[42])( );     /*SRA1(135,I,jvj+35,V230)*/
V230=pile[WZ3]; 
pile[v[22]]=V230; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V230,32,L)*/
L=pile[WZ2]; 
l45:if(J==incon) goto l46;
l72:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:V7=V8;
l2:V9=incon;
pile[v[22]]=162; pile[WZ1]=X; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(162,X,HB)*/
HB=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=HB; 
(*f[249])( );     /*SPC1(V7,HB,V9)*/
V9=pile[WZ2]; 
l10:pile[v[22]]=V9; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V9,125,J)*/
J=pile[WZ2]; 
goto l30;
l3:V9=V7;
goto l10;
l4:V19=V20;
goto l5;
l6:V21=V19;
goto l11;
l7:J=I;
l31:x[jvj+32]=vo[20];z[jvj+32]=vz[20];
pile[v[22]]=1574; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(1574,jvj+32,jvj+33)*/
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==Q) goto l32;
pile[v[22]]=Q; pile[WZ1]=1574; pile[WZ2]=jvj+32; 
(*f[235])( );     /*PLUSC2(Q,1574,jvj+32)*/
goto l32;
l9:pile[v[22]]=498; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(498,X,jvj+5)*/
pile[v[22]]=436; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(436,jvj+5,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+6,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V14,I,V193)*/
V193=pile[WZ2]; 
pile[v[22]]=V193; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V193,123,V8)*/
V8=pile[WZ2]; 
V7=incon;
pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,X,HA)*/
HA=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=HA; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V8,HA,41,V7)*/
V7=pile[WZ3]; 
goto l2;
l12:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,X,jvj+9)*/
if((x[jvj+9]!=484)) goto l13;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,X,jvj+10)*/
pile[v[22]]=102; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,X,jvj+11)*/
pile[v[22]]=I; pile[WZ1]=jvj+10; 
(*f[223])( );if(v[102]) goto l13;     /*XX0(I,jvj+10,V186)*/
V186=pile[WZ2]; 
pile[v[22]]=V186; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V186,123,V187)*/
V187=pile[WZ2]; 
pile[v[22]]=V187; pile[WZ1]=jvj+11; 
(*f[223])( );if(v[102]) goto l13;     /*XX0(V187,jvj+11,V188)*/
V188=pile[WZ2]; 
pile[v[22]]=V188; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V188,125,J)*/
J=pile[WZ2]; 
goto l30;
l13:pile[v[22]]=I; pile[WZ1]=X; 
(*f[639])( );if(v[102]) goto l14;     /*Z10Z0(I,X,J)*/
J=pile[WZ2]; 
goto l30;
l14:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,X,jvj+12)*/
if((x[jvj+12]==448)) goto l15;
if((x[jvj+12]==178)) goto l16;
if((x[jvj+12]==1317)) goto l17;
if((x[jvj+12]==85)) goto l18;
if((x[jvj+12]==86)) goto l19;
if((x[jvj+12]==128)) goto l20;
if((x[jvj+12]==69)) goto l21;
if((x[jvj+12]==711)) goto l22;
if((x[jvj+12]==120)) goto l23;
if((x[jvj+12]==108)) goto l24;
if((x[jvj+12]==1050)) goto l25;
if((x[jvj+12]==484)) goto l26;
if((x[jvj+12]==113)) goto l27;
if((x[jvj+12]==531)) goto l28;
if((x[jvj+12]==284)) goto l29;
if((x[jvj+12]!=212)) goto l30;
pile[v[22]]=102; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+30)*/
pile[v[22]]=103; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,X,jvj+31)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=212; 
(*f[98])( );     /*SRA3(135,I,212,V277)*/
V277=pile[WZ3]; 
pile[v[22]]=V277; pile[WZ1]=jvj+30; 
(*f[344])( );if(v[102]) goto l30;     /*XX1(V277,jvj+30,V278)*/
V278=pile[WZ2]; 
pile[v[22]]=V278; pile[WZ1]=(-4411); 
(*f[37])( );     /*SRA0(V278,(-4411),V279)*/
V279=pile[WZ2]; 
pile[v[22]]=V279; pile[WZ1]=jvj+31; 
(*f[344])( );if(v[102]) goto l30;     /*XX1(V279,jvj+31,J)*/
J=pile[WZ2]; 
goto l30;
l15:pile[v[22]]=I; pile[WZ1]=X; 
(*f[638])( );     /*XS0(I,X,J)*/
J=pile[WZ2]; 
goto l30;
l16:pile[v[22]]=I; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(I,123,V286)*/
V286=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=337; pile[WZ2]=V286; 
(*f[643])( );     /*XINC0(X,337,V286,V287)*/
V287=pile[WZ3]; 
pile[v[22]]=V287; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V287,125,J)*/
J=pile[WZ2]; 
goto l30;
l17:pile[v[22]]=X; pile[WZ1]=1352; pile[WZ3]=jvj+13; 
(*f[45])( );if(v[102]) goto l30;     /*FNDZ0(X,1352,V307,jvj+13)*/
V307=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=V307; 
(*f[644])( );     /*SPCMT1(I,V307,J)*/
J=pile[WZ2]; 
goto l30;
l18:pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=85; 
(*f[98])( );     /*SRA3(135,I,85,J)*/
J=pile[WZ3]; 
goto l30;
l19:pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=86; 
(*f[98])( );     /*SRA3(135,I,86,J)*/
J=pile[WZ3]; 
goto l30;
l20:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(128,X,jvj+14)*/
pile[v[22]]=I; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(I,91,V265)*/
V265=pile[WZ2]; 
pile[v[22]]=V265; pile[WZ1]=jvj+14; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V265,jvj+14,44,V266)*/
V266=pile[WZ3]; 
pile[v[22]]=V266; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V266,93,J)*/
J=pile[WZ2]; 
goto l30;
l21:pile[v[22]]=108; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(108,X,jvj+15)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V272)*/
V272=pile[WZ2]; 
pile[v[22]]=V272; pile[WZ1]=jvj+15; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V272,jvj+15,44,V273)*/
V273=pile[WZ3]; 
pile[v[22]]=V273; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V273,41,J)*/
J=pile[WZ2]; 
goto l30;
l22:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,X,jvj+16)*/
pile[v[22]]=I; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(I,91,V289)*/
V289=pile[WZ2]; 
pile[v[22]]=V289; pile[WZ1]=jvj+16; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V289,jvj+16,44,V290)*/
V290=pile[WZ3]; 
pile[v[22]]=V290; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V290,93,J)*/
J=pile[WZ2]; 
goto l30;
l23:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+17)*/
pile[v[22]]=(-2955); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2955),I,V275)*/
V275=pile[WZ2]; 
pile[v[22]]=V275; pile[WZ1]=jvj+17; 
(*f[344])( );if(v[102]) goto l30;     /*XX1(V275,jvj+17,J)*/
J=pile[WZ2]; 
goto l30;
l24:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+18)*/
pile[v[22]]=103; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,X,jvj+19)*/
pile[v[22]]=I; pile[WZ1]=jvj+18; 
(*f[641])( );if(v[102]) goto l30;     /*XY0(I,jvj+18,V262)*/
V262=pile[WZ2]; 
pile[v[22]]=V262; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V262,58,V263)*/
V263=pile[WZ2]; 
pile[v[22]]=V263; pile[WZ1]=jvj+19; 
(*f[223])( );if(v[102]) goto l30;     /*XX0(V263,jvj+19,J)*/
J=pile[WZ2]; 
goto l30;
l25:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,X,jvj+20)*/
pile[v[22]]=102; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+21)*/
pile[v[22]]=I; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(I,123,V200)*/
V200=pile[WZ2]; 
pile[v[22]]=V200; pile[WZ1]=jvj+21; 
(*f[223])( );if(v[102]) goto l30;     /*XX0(V200,jvj+21,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=V201; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V201,125,V202)*/
V202=pile[WZ2]; 
pile[v[22]]=V202; pile[WZ1]=jvj+20; 
(*f[223])( );if(v[102]) goto l30;     /*XX0(V202,jvj+20,J)*/
J=pile[WZ2]; 
goto l30;
l26:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,X,jvj+22)*/
pile[v[22]]=102; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+23)*/
pile[v[22]]=I; pile[WZ1]=jvj+22; 
(*f[223])( );if(v[102]) goto l30;     /*XX0(I,jvj+22,V204)*/
V204=pile[WZ2]; 
pile[v[22]]=V204; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V204,123,V205)*/
V205=pile[WZ2]; 
pile[v[22]]=V205; pile[WZ1]=jvj+23; 
(*f[223])( );if(v[102]) goto l30;     /*XX0(V205,jvj+23,V206)*/
V206=pile[WZ2]; 
pile[v[22]]=V206; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V206,125,J)*/
J=pile[WZ2]; 
goto l30;
l27:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+24)*/
pile[v[22]]=103; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,X,jvj+25)*/
pile[v[22]]=I; pile[WZ1]=jvj+24; 
(*f[223])( );if(v[102]) goto l30;     /*XX0(I,jvj+24,V268)*/
V268=pile[WZ2]; 
pile[v[22]]=V268; pile[WZ1]=60; 
(*f[38])( );     /*SPC0(V268,60,V269)*/
V269=pile[WZ2]; 
pile[v[22]]=V269; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V269,45,V270)*/
V270=pile[WZ2]; 
pile[v[22]]=V270; pile[WZ1]=jvj+25; 
(*f[223])( );if(v[102]) goto l30;     /*XX0(V270,jvj+25,J)*/
J=pile[WZ2]; 
goto l30;
l28:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,X,jvj+26)*/
pile[v[22]]=102; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+27)*/
pile[v[22]]=I; pile[WZ1]=jvj+26; 
(*f[223])( );if(v[102]) goto l30;     /*XX0(I,jvj+26,V281)*/
V281=pile[WZ2]; 
pile[v[22]]=V281; pile[WZ1]=33; 
(*f[38])( );     /*SPC0(V281,33,V282)*/
V282=pile[WZ2]; 
pile[v[22]]=V282; pile[WZ1]=jvj+27; 
(*f[223])( );if(v[102]) goto l30;     /*XX0(V282,jvj+27,V283)*/
V283=pile[WZ2]; 
pile[v[22]]=V283; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V283,41,J)*/
J=pile[WZ2]; 
goto l30;
l29:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+28)*/
pile[v[22]]=111; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,X,jvj+29)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=284; 
(*f[98])( );     /*SRA3(135,I,284,V303)*/
V303=pile[WZ3]; 
pile[v[22]]=V303; pile[WZ1]=jvj+29; 
(*f[344])( );if(v[102]) goto l30;     /*XX1(V303,jvj+29,V304)*/
V304=pile[WZ2]; 
pile[v[22]]=V304; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V304,61,V305)*/
V305=pile[WZ2]; 
pile[v[22]]=V305; pile[WZ1]=jvj+28; 
(*f[223])( );if(v[102]) goto l30;     /*XX0(V305,jvj+28,J)*/
J=pile[WZ2]; 
goto l30;
l33:pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+34,jvj+36)*/
if((x[jvj+36]==20)) goto l34;
pile[v[22]]=I; pile[WZ1]=(-2961); 
(*f[37])( );     /*SRA0(I,(-2961),V232)*/
V232=pile[WZ2]; 
pile[v[22]]=V232; pile[WZ1]=jvj+34; 
(*f[344])( );if(v[102]) goto l34;     /*XX1(V232,jvj+34,V233)*/
V233=pile[WZ2]; 
pile[v[22]]=V233; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V233,32,L)*/
L=pile[WZ2]; 
goto l45;
l34:L=I;
goto l45;
l35:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(436,X,jvj+40)*/
l66:pile[v[22]]=101; pile[WZ1]=X; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(101,X,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=L; 
(*f[220])( );     /*SRA4(jvj+74,L,J)*/
J=pile[WZ2]; 
goto l72;
l36:pile[v[22]]=135; pile[WZ1]=L; pile[WZ2]=jvj+41; 
(*f[98])( );     /*SRA3(135,L,jvj+41,V75)*/
V75=pile[WZ3]; 
l37:V77=incon;
V85=x[jvj+41];
if((V85>sepsimp)) goto l38;
V77=V75;
l55:pile[v[22]]=V77; pile[WZ1]=jvj+50; pile[WZ2]=1436; 
(*f[642])( );     /*XM0(V77,jvj+50,1436,V222)*/
V222=pile[WZ3]; 
pile[v[22]]=V222; pile[WZ1]=jvj+51; 
(*f[642])( );     /*XM0(V222,jvj+51,1436,J)*/
J=pile[WZ3]; 
goto l72;
l38:V221=x[jvj+41];
pile[v[22]]=20; pile[WZ1]=V221; pile[WZ2]=V75; 
(*f[39])( );     /*SDX0(20,V221,V75,V77)*/
V77=pile[WZ3]; 
goto l55;
l40:pile[v[22]]=V152; pile[WZ1]=(-4412); 
(*f[37])( );     /*SRA0(V152,(-4412),V292)*/
V292=pile[WZ2]; 
pile[v[22]]=V292; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V292,32,V293)*/
V293=pile[WZ2]; 
pile[v[22]]=V293; pile[WZ1]=jvj+42; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V293,jvj+42,44,V294)*/
V294=pile[WZ3]; 
V151=0;
V317=V294;
if((V317<0)) goto l65;
pile[v[22]]=V317; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V317,3)*/
l65:J=V151;
goto l72;
l41:V176=L;
l42:V178=incon;
pile[v[22]]=1923; pile[WZ1]=X; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(1923,X,jvj+43)*/
if((x[jvj+43]!=0)) goto l43;
V178=V176;
l58:pile[v[22]]=V178; pile[WZ1]=jvj+55; pile[WZ2]=1688; 
(*f[642])( );     /*XM0(V178,jvj+55,1688,V315)*/
V315=pile[WZ3]; 
pile[v[22]]=V315; pile[WZ1]=jvj+56; pile[WZ2]=1689; 
(*f[642])( );     /*XM0(V315,jvj+56,1689,J)*/
J=pile[WZ3]; 
goto l72;
l43:V314=x[jvj+43];
V311=0;
V318=V176;
if((V318<0)) goto l44;
pile[v[22]]=V318; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V318,3)*/
l44:pile[v[22]]=135; pile[WZ1]=V311; pile[WZ2]=1923; 
(*f[42])( );     /*SRA1(135,V311,1923,V312)*/
V312=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V314; pile[WZ2]=V312; 
(*f[39])( );     /*SDX0(23,V314,V312,V178)*/
V178=pile[WZ3]; 
goto l58;
l46:pile[v[22]]=162; pile[WZ1]=X; 
(*f[219])( );if(v[102]) goto l47;     /*FNDC2(162,X,V58)*/
V58=pile[WZ2]; 
V63=L+1;
V62=V63+1;
V61=V62+1;
J=V61;
c[v[1]][L]=39;
c[v[1]][V63]=V58;
c[v[1]][V62]=39;
goto l72;
l47:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(100,X,jvj+44)*/
if((x[jvj+44]==73)) goto l48;
if((x[jvj+44]==185)) goto l49;
if((x[jvj+44]==22)) goto l50;
if((x[jvj+44]==43)) goto l52;
if((x[jvj+44]==42)) goto l53;
if((x[jvj+44]==39)) goto l54;
if((x[jvj+44]==1732)) goto l57;
if((x[jvj+44]==47)) goto l59;
if((x[jvj+44]==435)) goto l61;
if((x[jvj+44]==537)) goto l63;
if((x[jvj+44]!=492)) goto l66;
pile[v[22]]=436; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(436,X,jvj+70)*/
pile[v[22]]=102; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(102,X,jvj+71)*/
pile[v[22]]=103; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(103,X,jvj+72)*/
pile[v[22]]=111; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(111,X,jvj+73)*/
pile[v[22]]=135; pile[WZ1]=L; pile[WZ2]=492; 
(*f[98])( );     /*SRA3(135,L,492,V245)*/
V245=pile[WZ3]; 
pile[v[22]]=V245; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V245,32,V246)*/
V246=pile[WZ2]; 
pile[v[22]]=V246; pile[WZ1]=jvj+73; 
(*f[223])( );if(v[102]) goto l66;     /*XX0(V246,jvj+73,V247)*/
V247=pile[WZ2]; 
pile[v[22]]=V247; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V247,58,V248)*/
V248=pile[WZ2]; 
pile[v[22]]=V248; pile[WZ1]=jvj+70; 
(*f[223])( );if(v[102]) goto l66;     /*XX0(V248,jvj+70,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=V249; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V249,59,V250)*/
V250=pile[WZ2]; 
pile[v[22]]=V250; pile[WZ1]=jvj+71; 
(*f[223])( );if(v[102]) goto l66;     /*XX0(V250,jvj+71,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=V251; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V251,44,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=V252; pile[WZ1]=jvj+72; 
(*f[223])( );if(v[102]) goto l66;     /*XX0(V252,jvj+72,J)*/
J=pile[WZ2]; 
goto l72;
l48:pile[v[22]]=L; pile[WZ1]=X; 
(*f[637])( );     /*XOR0(L,X,J)*/
J=pile[WZ2]; 
goto l72;
l49:pile[v[22]]=X; pile[WZ1]=L; 
(*f[636])( );if(v[102]) goto l66;     /*XN0(X,L,J)*/
J=pile[WZ2]; 
goto l72;
l50:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(111,X,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+37,jvj+38)*/
pile[v[22]]=1744; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(1744,jvj+38,jvj+39)*/
if((x[jvj+39]==68)) goto l66;
l51:pile[v[22]]=X; pile[WZ1]=L; 
(*f[635])( );if(v[102]) goto l66;     /*XF0(X,L,J)*/
J=pile[WZ2]; 
goto l72;
l52:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(102,X,jvj+45)*/
pile[v[22]]=103; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(103,X,jvj+46)*/
pile[v[22]]=L; pile[WZ1]=jvj+45; 
(*f[641])( );if(v[102]) goto l66;     /*XY0(L,jvj+45,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=V211; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V211,40,V212)*/
V212=pile[WZ2]; 
pile[v[22]]=V212; pile[WZ1]=jvj+46; 
(*f[223])( );if(v[102]) goto l66;     /*XX0(V212,jvj+46,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=V213; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V213,41,J)*/
J=pile[WZ2]; 
goto l72;
l53:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(107,X,jvj+47)*/
pile[v[22]]=105; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(105,X,jvj+48)*/
pile[v[22]]=L; pile[WZ1]=jvj+47; pile[WZ2]=44; 
(*f[640])( );     /*XL0(L,jvj+47,44,V208)*/
V208=pile[WZ3]; 
pile[v[22]]=(-2929); pile[WZ1]=V208; 
(*f[64])( );     /*SRA2((-2929),V208,V209)*/
V209=pile[WZ2]; 
pile[v[22]]=V209; pile[WZ1]=jvj+48; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V209,jvj+48,44,J)*/
J=pile[WZ3]; 
goto l72;
l54:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(111,X,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(101,jvj+49,jvj+41)*/
pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(114,X,jvj+50)*/
pile[v[22]]=113; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(113,X,jvj+51)*/
V75=incon;
V84=x[jvj+41];
if((V84<=sepnouv)) goto l36;
V75=L;
goto l37;
l56:pile[v[22]]=100; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(100,jvj+49,jvj+52)*/
if((x[jvj+52]==20)) goto l66;
pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(114,X,jvj+53)*/
pile[v[22]]=113; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(113,X,jvj+54)*/
pile[v[22]]=(-2954); pile[WZ1]=L; 
(*f[64])( );     /*SRA2((-2954),L,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=V224; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V224,34,V225)*/
V225=pile[WZ2]; 
pile[v[22]]=V225; pile[WZ1]=jvj+49; 
(*f[223])( );if(v[102]) goto l66;     /*XX0(V225,jvj+49,V226)*/
V226=pile[WZ2]; 
pile[v[22]]=V226; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V226,34,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=V227; pile[WZ1]=jvj+53; pile[WZ2]=1436; 
(*f[642])( );     /*XM0(V227,jvj+53,1436,V228)*/
V228=pile[WZ3]; 
pile[v[22]]=V228; pile[WZ1]=jvj+54; 
(*f[642])( );     /*XM0(V228,jvj+54,1436,J)*/
J=pile[WZ3]; 
goto l72;
l57:pile[v[22]]=1688; pile[WZ1]=X; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(1688,X,jvj+55)*/
pile[v[22]]=1689; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(1689,X,jvj+56)*/
V176=incon;
V183=x[X];
if((V183>=sepcte)) goto l41;
if((V184=w[x[X]][0])==incon) goto l41;
pile[v[22]]=V184; pile[WZ1]=L; 
(*f[64])( );     /*SRA2(V184,L,V176)*/
V176=pile[WZ2]; 
goto l42;
l59:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(436,X,jvj+57)*/
pile[v[22]]=184; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(184,X,jvj+58)*/
pile[v[22]]=135; pile[WZ1]=L; pile[WZ2]=47; 
(*f[98])( );     /*SRA3(135,L,47,V254)*/
V254=pile[WZ3]; 
pile[v[22]]=V254; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V254,40,V255)*/
V255=pile[WZ2]; 
pile[v[22]]=V255; pile[WZ1]=jvj+57; 
(*f[223])( );if(v[102]) goto l35;     /*XX0(V255,jvj+57,V256)*/
V256=pile[WZ2]; 
pile[v[22]]=V256; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V256,41,V257)*/
V257=pile[WZ2]; 
pile[v[22]]=V257; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V257,91,V258)*/
V258=pile[WZ2]; 
pile[v[22]]=V258; pile[WZ1]=jvj+58; pile[WZ2]=59; 
(*f[640])( );     /*XL0(V258,jvj+58,59,V259)*/
V259=pile[WZ3]; 
pile[v[22]]=V259; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V259,93,J)*/
J=pile[WZ2]; 
goto l72;
l60:pile[v[22]]=184; pile[WZ1]=X; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(184,X,jvj+59)*/
pile[v[22]]=135; pile[WZ1]=L; pile[WZ2]=47; 
(*f[98])( );     /*SRA3(135,L,47,V215)*/
V215=pile[WZ3]; 
pile[v[22]]=V215; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V215,91,V216)*/
V216=pile[WZ2]; 
pile[v[22]]=V216; pile[WZ1]=jvj+59; pile[WZ2]=59; 
(*f[640])( );     /*XL0(V216,jvj+59,59,V217)*/
V217=pile[WZ3]; 
pile[v[22]]=V217; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V217,93,J)*/
J=pile[WZ2]; 
goto l72;
l61:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(111,X,jvj+60)*/
pile[v[22]]=101; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(101,jvj+60,jvj+61)*/
pile[v[22]]=332; pile[WZ1]=jvj+61; 
(*f[219])( );if(v[102]) goto l62;     /*FNDC2(332,jvj+61,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=331; 
(*f[219])( );if(v[102]) goto l62;     /*FNDC2(331,jvj+61,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(102,X,jvj+62)*/
pile[v[22]]=436; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(436,X,jvj+63)*/
pile[v[22]]=L; pile[WZ1]=jvj+63; 
(*f[223])( );if(v[102]) goto l62;     /*XX0(L,jvj+63,V235)*/
V235=pile[WZ2]; 
pile[v[22]]=V235; pile[WZ1]=V107; 
(*f[38])( );     /*SPC0(V235,V107,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=V236; pile[WZ1]=V106; 
(*f[38])( );     /*SPC0(V236,V106,V237)*/
V237=pile[WZ2]; 
pile[v[22]]=V237; pile[WZ1]=jvj+62; 
(*f[223])( );if(v[102]) goto l62;     /*XX0(V237,jvj+62,J)*/
J=pile[WZ2]; 
goto l72;
l62:pile[v[22]]=100; pile[WZ1]=jvj+60; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(100,jvj+60,jvj+64)*/
if((x[jvj+64]==20)) goto l66;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(102,X,jvj+65)*/
pile[v[22]]=436; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(436,X,jvj+66)*/
pile[v[22]]=L; pile[WZ1]=jvj+66; 
(*f[223])( );if(v[102]) goto l66;     /*XX0(L,jvj+66,V239)*/
V239=pile[WZ2]; 
pile[v[22]]=V239; pile[WZ1]=(-2960); 
(*f[37])( );     /*SRA0(V239,(-2960),V240)*/
V240=pile[WZ2]; 
pile[v[22]]=V240; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V240,34,V241)*/
V241=pile[WZ2]; 
pile[v[22]]=V241; pile[WZ1]=jvj+60; 
(*f[223])( );if(v[102]) goto l66;     /*XX0(V241,jvj+60,V242)*/
V242=pile[WZ2]; 
pile[v[22]]=V242; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V242,34,V243)*/
V243=pile[WZ2]; 
pile[v[22]]=V243; pile[WZ1]=jvj+65; 
(*f[344])( );if(v[102]) goto l66;     /*XX1(V243,jvj+65,J)*/
J=pile[WZ2]; 
goto l72;
l63:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(160,X,jvj+67)*/
pile[v[22]]=102; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(102,X,jvj+68)*/
pile[v[22]]=103; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(103,X,jvj+69)*/
pile[v[22]]=107; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,X,jvj+42)*/
pile[v[22]]=(-3698); pile[WZ1]=L; 
(*f[64])( );     /*SRA2((-3698),L,V296)*/
V296=pile[WZ2]; 
pile[v[22]]=V296; pile[WZ1]=jvj+68; 
(*f[344])( );if(v[102]) goto l66;     /*XX1(V296,jvj+68,V297)*/
V297=pile[WZ2]; 
pile[v[22]]=V297; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V297,58,V298)*/
V298=pile[WZ2]; 
pile[v[22]]=V298; pile[WZ1]=jvj+69; 
(*f[344])( );if(v[102]) goto l66;     /*XX1(V298,jvj+69,V299)*/
V299=pile[WZ2]; 
V300=0;
V319=V299;
if((V319<0)) goto l64;
pile[v[22]]=V319; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V319,3)*/
l64:pile[v[22]]=V300; pile[WZ1]=(-4413); 
(*f[37])( );     /*SRA0(V300,(-4413),V301)*/
V301=pile[WZ2]; 
pile[v[22]]=V301; pile[WZ1]=jvj+67; 
(*f[344])( );if(v[102]) goto l66;     /*XX1(V301,jvj+67,V302)*/
V302=pile[WZ2]; 
V152=0;
V320=V302;
if((V320<0)) goto l39;
pile[v[22]]=V320; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V320,3)*/
l39:V151=incon;
if((x[jvj+42]!=0)) goto l40;
V151=V152;
goto l65;
l67:pile[v[22]]=163; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l68;     /*FNDC1(163,X,V52)*/
V52=pile[WZ2]; 
V56=L+1;
c[v[1]][L]=96;
pile[v[22]]=V52; pile[WZ1]=V56; 
(*f[64])( );     /*SRA2(V52,V56,V53)*/
V53=pile[WZ2]; 
V57=V53+1;
c[v[1]][V53]=96;
J=V57;
goto l72;
l68:pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(130,X,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=L; 
(*f[221])( );     /*SRN0(V43,L,J)*/
J=pile[WZ2]; 
goto l72;
l69:if((v[67]!=0)) goto l70;
if((v[67]==0)) goto l71;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l70:V154=I+1;
V155=V154+1;
V157=V155+1;
V160=V157+1;
c[v[1]][I]=126;
c[v[1]][V154]=126;
c[v[1]][V155]=126;
c[v[1]][V157]=126;
J=V160;
goto l72;
l71:V121=x[X];
pile[v[22]]=373; pile[WZ1]=X; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(373,X,jvj+75)*/
v[67]=1;
pile[v[22]]=I; pile[WZ1]=42; pile[WZ2]=V121; pile[WZ3]=jvj+75; pile[WZ4]=67; 
(*f[224])( );     /*SDA0(I,42,V121,jvj+75,67,V120)*/
V120=pile[WZ5]; 
V123=V120+1;
J=V123;
c[v[1]][V120]=42;
v[67]=0;
goto l72;
}
