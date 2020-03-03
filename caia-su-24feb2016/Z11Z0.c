#include "dx.h"
void Z11Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V182=0,V2=0,V180=0,V176=0,V177=0,V178=0,V19=0,V20=0,JJ=0,KK=0,V28=0,V192=0,V193=0,V194=0,V195=0,V196=0,V197=0,V198=0,V199=0,V44=0,V213=0,V214=0,V215=0,V168=0,V292=0,V293=0,V148=0,V149=0,V283=0,V284=0,V285=0,V109=0,V110=0,V111=0,V260=0,V261=0,V262=0,V263=0,V287=0,V288=0,V289=0,V290=0,V78=0,V247=0,V248=0,V184=0,V185=0,V186=0,V187=0,V188=0,V189=0,V190=0,V201=0,V202=0,V203=0,V204=0,V205=0,V206=0,V207=0,V208=0,V209=0,V210=0,V211=0,V276=0,V277=0,V278=0,V279=0,V280=0,V281=0,V217=0,V218=0,V219=0,V220=0,V221=0,V222=0,V223=0,V224=0,V225=0,V226=0,V250=0,V251=0,V252=0,V253=0,V254=0,V255=0,V256=0,V257=0,V132=0,V272=0,V273=0,V274=0,V73=0,V239=0,V240=0,V241=0,V242=0,V243=0,V244=0,V245=0,V295=0,V296=0,V297=0,V298=0,V299=0,V265=0,V266=0,V267=0,V268=0,V269=0,V270=0,V228=0,V229=0,V230=0,V231=0,V232=0,V233=0,V234=0,V235=0,V236=0,V237=0;
int X,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=52;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,X,jvj+12)*/
if((x[jvj+12]!=22)) goto l27;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,X,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+6,jvj+1)*/
pile[v[22]]=155; pile[WZ1]=jvj+1; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(155,jvj+1,jvj+13)*/
if((x[jvj+13]==120)) goto l9;
if((x[jvj+13]==336)) goto l10;
if((x[jvj+13]!=68)) goto l12;
pile[v[22]]=118; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(118,jvj+1,V44)*/
V44=pile[WZ2]; 
if((V44!=0)) goto l12;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(436,X,jvj+8)*/
l12:pile[v[22]]=343; pile[WZ1]=jvj+1; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(343,jvj+1,jvj+18)*/
if((x[jvj+18]==335)) goto l13;
if((x[jvj+18]==336)) goto l14;
if((x[jvj+18]==66)) goto l15;
if((x[jvj+18]!=300)) goto l16;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+25)*/
pile[v[22]]=103; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,X,jvj+26)*/
pile[v[22]]=I; pile[WZ1]=jvj+25; 
(*f[223])( );if(v[102]) goto l16;     /*XX0(I,jvj+25,V287)*/
V287=pile[WZ2]; 
pile[v[22]]=V287; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V287,46,V288)*/
V288=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V288; pile[WZ2]=jvj+1; 
(*f[98])( );     /*SRA3(135,V288,jvj+1,V289)*/
V289=pile[WZ3]; 
pile[v[22]]=V289; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V289,46,V290)*/
V290=pile[WZ2]; 
pile[v[22]]=V290; pile[WZ1]=jvj+26; 
(*f[223])( );if(v[102]) goto l16;     /*XX0(V290,jvj+26,J)*/
J=pile[WZ2]; 
l33:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:pile[v[22]]=155; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(155,jvj+1,jvj+2)*/
if((x[jvj+2]!=67)) goto l6;
l2:pile[v[22]]=1825; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1825,jvj+1,jvj+3)*/
l6:pile[v[22]]=155; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(155,jvj+1,jvj+7)*/
if((x[jvj+7]!=67)) goto l22;
l20:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,X,jvj+29)*/
pile[v[22]]=160; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(160,X,jvj+30)*/
pile[v[22]]=102; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,X,jvj+31)*/
pile[v[22]]=118; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(118,jvj+1,V19)*/
V19=pile[WZ2]; 
if((V19==3)) goto l21;
l7:pile[v[22]]=1480; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(1480,jvj+1,V20)*/
V20=pile[WZ2]; 
if((V20==3)) goto l21;
l22:pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+6,jvj+32)*/
if((x[jvj+32]==20)) goto l27;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,X,jvj+33)*/
if((x[jvj+33]==0)) goto l27;
pile[v[22]]=184; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(184,X,jvj+34)*/
if((x[jvj+34]!=0)) goto l23;
pile[v[22]]=102; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,X,jvj+11)*/
l25:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,X,jvj+35)*/
pile[v[22]]=103; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,X,jvj+36)*/
pile[v[22]]=(-2952); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2952),I,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=V217; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V217,34,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=V218; pile[WZ1]=jvj+6; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V218,jvj+6,V219)*/
V219=pile[WZ2]; 
pile[v[22]]=V219; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V219,34,V220)*/
V220=pile[WZ2]; 
pile[v[22]]=V220; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V220,91,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=V221; pile[WZ1]=jvj+35; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V221,jvj+35,V222)*/
V222=pile[WZ2]; 
pile[v[22]]=V222; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V222,44,V223)*/
V223=pile[WZ2]; 
pile[v[22]]=V223; pile[WZ1]=jvj+36; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V223,jvj+36,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=V224; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V224,59,V225)*/
V225=pile[WZ2]; 
pile[v[22]]=V225; pile[WZ1]=jvj+33; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V225,jvj+33,44,V226)*/
V226=pile[WZ3]; 
pile[v[22]]=V226; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V226,93,J)*/
J=pile[WZ2]; 
goto l33;
l4:if(V2==incon) goto l5;
l19:J=V2;
goto l33;
l5:pile[v[22]]=I; pile[WZ1]=jvj+6; 
(*f[641])( );if(v[102]) goto l6;     /*XY0(I,jvj+6,V176)*/
V176=pile[WZ2]; 
pile[v[22]]=V176; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V176,40,V177)*/
V177=pile[WZ2]; 
pile[v[22]]=V177; pile[WZ1]=jvj+4; 
(*f[223])( );if(v[102]) goto l6;     /*XX0(V177,jvj+4,V178)*/
V178=pile[WZ2]; 
pile[v[22]]=V178; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V178,41,V2)*/
V2=pile[WZ2]; 
goto l19;
l8:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,X,jvj+10)*/
l27:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,X,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]==654)) goto l28;
if((x[jvj+38]==649)) goto l30;
if((x[jvj+38]!=848)) goto l32;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(107,X,jvj+48)*/
if((x[jvj+48]==0)) goto l31;
pile[v[22]]=102; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+51)*/
pile[v[22]]=103; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,X,jvj+52)*/
pile[v[22]]=I; pile[WZ1]=92; 
(*f[38])( );     /*SPC0(I,92,V228)*/
V228=pile[WZ2]; 
pile[v[22]]=V228; pile[WZ1]=82; 
(*f[38])( );     /*SPC0(V228,82,V229)*/
V229=pile[WZ2]; 
pile[v[22]]=V229; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V229,58,V230)*/
V230=pile[WZ2]; 
pile[v[22]]=V230; pile[WZ1]=jvj+51; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V230,jvj+51,V231)*/
V231=pile[WZ2]; 
pile[v[22]]=V231; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V231,46,V232)*/
V232=pile[WZ2]; 
pile[v[22]]=V232; pile[WZ1]=69; 
(*f[38])( );     /*SPC0(V232,69,V233)*/
V233=pile[WZ2]; 
pile[v[22]]=V233; pile[WZ1]=jvj+52; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V233,jvj+52,V234)*/
V234=pile[WZ2]; 
pile[v[22]]=V234; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V234,59,V235)*/
V235=pile[WZ2]; 
pile[v[22]]=V235; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V235,91,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=V236; pile[WZ1]=jvj+48; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V236,jvj+48,44,V237)*/
V237=pile[WZ3]; 
pile[v[22]]=V237; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V237,93,J)*/
J=pile[WZ2]; 
goto l33;
l9:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+14)*/
pile[v[22]]=I; pile[WZ1]=jvj+6; 
(*f[641])( );if(v[102]) goto l12;     /*XY0(I,jvj+6,JJ)*/
JJ=pile[WZ2]; 
pile[v[22]]=JJ; pile[WZ1]=40; pile[WZ2]=jvj+14; 
(*f[1368])( );     /*XG0(JJ,40,jvj+14,KK)*/
KK=pile[WZ3]; 
pile[v[22]]=KK; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(KK,41,J)*/
J=pile[WZ2]; 
goto l33;
l10:pile[v[22]]=118; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(118,jvj+1,V28)*/
V28=pile[WZ2]; 
if((V28!=0)) goto l12;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,X,jvj+15)*/
pile[v[22]]=184; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(184,X,jvj+16)*/
pile[v[22]]=I; pile[WZ1]=jvj+6; 
(*f[641])( );if(v[102]) goto l12;     /*XY0(I,jvj+6,V192)*/
V192=pile[WZ2]; 
pile[v[22]]=V192; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V192,40,V193)*/
V193=pile[WZ2]; 
pile[v[22]]=V193; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V193,91,V194)*/
V194=pile[WZ2]; 
pile[v[22]]=V194; pile[WZ1]=jvj+15; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V194,jvj+15,44,V195)*/
V195=pile[WZ3]; 
pile[v[22]]=V195; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V195,93,V196)*/
V196=pile[WZ2]; 
pile[v[22]]=V196; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V196,91,V197)*/
V197=pile[WZ2]; 
pile[v[22]]=V197; pile[WZ1]=jvj+16; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V197,jvj+16,44,V198)*/
V198=pile[WZ3]; 
pile[v[22]]=V198; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V198,93,V199)*/
V199=pile[WZ2]; 
pile[v[22]]=V199; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V199,41,J)*/
J=pile[WZ2]; 
goto l33;
l11:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,X,jvj+17)*/
pile[v[22]]=I; pile[WZ1]=jvj+6; 
(*f[641])( );if(v[102]) goto l12;     /*XY0(I,jvj+6,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=V213; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V213,91,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=V214; pile[WZ1]=jvj+17; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V214,jvj+17,44,V215)*/
V215=pile[WZ3]; 
pile[v[22]]=V215; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V215,93,J)*/
J=pile[WZ2]; 
goto l33;
l13:pile[v[22]]=331; pile[WZ1]=jvj+1; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(331,jvj+1,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+19)*/
pile[v[22]]=103; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,X,jvj+20)*/
pile[v[22]]=I; pile[WZ1]=jvj+19; 
(*f[223])( );if(v[102]) goto l16;     /*XX0(I,jvj+19,V292)*/
V292=pile[WZ2]; 
pile[v[22]]=V292; pile[WZ1]=V168; 
(*f[38])( );     /*SPC0(V292,V168,V293)*/
V293=pile[WZ2]; 
pile[v[22]]=V293; pile[WZ1]=jvj+20; 
(*f[223])( );if(v[102]) goto l16;     /*XX0(V293,jvj+20,J)*/
J=pile[WZ2]; 
goto l33;
l14:pile[v[22]]=332; pile[WZ1]=jvj+1; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(332,jvj+1,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=331; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(331,jvj+1,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+21)*/
pile[v[22]]=103; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,X,jvj+22)*/
pile[v[22]]=I; pile[WZ1]=jvj+21; 
(*f[223])( );if(v[102]) goto l16;     /*XX0(I,jvj+21,V283)*/
V283=pile[WZ2]; 
pile[v[22]]=V283; pile[WZ1]=V149; 
(*f[38])( );     /*SPC0(V283,V149,V284)*/
V284=pile[WZ2]; 
pile[v[22]]=V284; pile[WZ1]=V148; 
(*f[38])( );     /*SPC0(V284,V148,V285)*/
V285=pile[WZ2]; 
pile[v[22]]=V285; pile[WZ1]=jvj+22; 
(*f[223])( );if(v[102]) goto l16;     /*XX0(V285,jvj+22,J)*/
J=pile[WZ2]; 
goto l33;
l15:pile[v[22]]=332; pile[WZ1]=jvj+1; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(332,jvj+1,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=516; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(516,jvj+1,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=331; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(331,jvj+1,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+23)*/
pile[v[22]]=103; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,X,jvj+24)*/
pile[v[22]]=I; pile[WZ1]=V111; 
(*f[38])( );     /*SPC0(I,V111,V260)*/
V260=pile[WZ2]; 
pile[v[22]]=V260; pile[WZ1]=jvj+23; 
(*f[223])( );if(v[102]) goto l16;     /*XX0(V260,jvj+23,V261)*/
V261=pile[WZ2]; 
pile[v[22]]=V261; pile[WZ1]=V110; 
(*f[38])( );     /*SPC0(V261,V110,V262)*/
V262=pile[WZ2]; 
pile[v[22]]=V262; pile[WZ1]=jvj+24; 
(*f[223])( );if(v[102]) goto l16;     /*XX0(V262,jvj+24,V263)*/
V263=pile[WZ2]; 
pile[v[22]]=V263; pile[WZ1]=V109; 
(*f[38])( );     /*SPC0(V263,V109,J)*/
J=pile[WZ2]; 
goto l33;
l16:pile[v[22]]=118; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(118,jvj+1,V78)*/
V78=pile[WZ2]; 
if((V78!=1)) goto l6;
pile[v[22]]=155; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(155,jvj+1,jvj+9)*/
if((x[jvj+9]!=67)) goto l1;
l17:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,X,jvj+27)*/
pile[v[22]]=1825; pile[WZ1]=jvj+1; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1825,jvj+1,jvj+28)*/
pile[v[22]]=I; pile[WZ1]=jvj+6; 
(*f[641])( );if(v[102]) goto l1;     /*XY0(I,jvj+6,V247)*/
V247=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V247; pile[WZ2]=jvj+28; 
(*f[42])( );     /*SRA1(135,V247,jvj+28,V248)*/
V248=pile[WZ3]; 
pile[v[22]]=V248; pile[WZ1]=jvj+27; 
(*f[344])( );if(v[102]) goto l1;     /*XX1(V248,jvj+27,J)*/
J=pile[WZ2]; 
goto l33;
l18:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,X,jvj+4)*/
V2=incon;
if(x[jvj+1]!=295&&x[jvj+1]!=137&&x[jvj+1]!=651) goto l3;
pile[v[22]]=331; pile[WZ1]=jvj+1; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(331,jvj+1,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=V13; 
(*f[38])( );     /*SPC0(I,V13,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=V182; pile[WZ1]=jvj+4; 
(*f[223])( );if(v[102]) goto l3;     /*XX0(V182,jvj+4,V2)*/
V2=pile[WZ2]; 
l3:if(x[jvj+1]!=149&&x[jvj+1]!=141&&x[jvj+1]!=138&&x[jvj+1]!=139&&x[jvj+1]!=1382) goto l4;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+4,jvj+5)*/
if(x[jvj+5]!=96&&x[jvj+5]!=89&&x[jvj+5]!=41&&x[jvj+5]!=20&&x[jvj+5]!=128&&x[jvj+5]!=570&&x[jvj+5]!=1317) goto l4;
pile[v[22]]=I; pile[WZ1]=63; 
(*f[38])( );     /*SPC0(I,63,V180)*/
V180=pile[WZ2]; 
pile[v[22]]=V180; pile[WZ1]=jvj+4; 
(*f[223])( );if(v[102]) goto l4;     /*XX0(V180,jvj+4,V2)*/
V2=pile[WZ2]; 
goto l19;
l21:pile[v[22]]=I; pile[WZ1]=jvj+6; 
(*f[641])( );if(v[102]) goto l22;     /*XY0(I,jvj+6,V184)*/
V184=pile[WZ2]; 
pile[v[22]]=V184; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V184,40,V185)*/
V185=pile[WZ2]; 
pile[v[22]]=V185; pile[WZ1]=jvj+31; 
(*f[223])( );if(v[102]) goto l22;     /*XX0(V185,jvj+31,V186)*/
V186=pile[WZ2]; 
pile[v[22]]=V186; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V186,44,V187)*/
V187=pile[WZ2]; 
pile[v[22]]=V187; pile[WZ1]=jvj+29; 
(*f[223])( );if(v[102]) goto l22;     /*XX0(V187,jvj+29,V188)*/
V188=pile[WZ2]; 
pile[v[22]]=V188; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V188,44,V189)*/
V189=pile[WZ2]; 
pile[v[22]]=V189; pile[WZ1]=jvj+30; 
(*f[223])( );if(v[102]) goto l22;     /*XX0(V189,jvj+30,V190)*/
V190=pile[WZ2]; 
pile[v[22]]=V190; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V190,41,J)*/
J=pile[WZ2]; 
goto l33;
l23:pile[v[22]]=(-2952); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2952),I,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=V201; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V201,34,V202)*/
V202=pile[WZ2]; 
pile[v[22]]=V202; pile[WZ1]=jvj+6; 
(*f[223])( );if(v[102]) goto l25;     /*XX0(V202,jvj+6,V203)*/
V203=pile[WZ2]; 
pile[v[22]]=V203; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V203,34,V204)*/
V204=pile[WZ2]; 
pile[v[22]]=V204; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V204,40,V205)*/
V205=pile[WZ2]; 
pile[v[22]]=V205; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V205,91,V206)*/
V206=pile[WZ2]; 
pile[v[22]]=V206; pile[WZ1]=jvj+33; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V206,jvj+33,44,V207)*/
V207=pile[WZ3]; 
pile[v[22]]=V207; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V207,93,V208)*/
V208=pile[WZ2]; 
pile[v[22]]=V208; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V208,91,V209)*/
V209=pile[WZ2]; 
pile[v[22]]=V209; pile[WZ1]=jvj+34; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V209,jvj+34,44,V210)*/
V210=pile[WZ3]; 
pile[v[22]]=V210; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V210,93,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=V211; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V211,41,J)*/
J=pile[WZ2]; 
goto l33;
l24:pile[v[22]]=(-2952); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2952),I,V276)*/
V276=pile[WZ2]; 
pile[v[22]]=V276; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V276,34,V277)*/
V277=pile[WZ2]; 
pile[v[22]]=V277; pile[WZ1]=jvj+6; 
(*f[223])( );if(v[102]) goto l25;     /*XX0(V277,jvj+6,V278)*/
V278=pile[WZ2]; 
pile[v[22]]=V278; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V278,34,V279)*/
V279=pile[WZ2]; 
pile[v[22]]=V279; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V279,91,V280)*/
V280=pile[WZ2]; 
pile[v[22]]=V280; pile[WZ1]=jvj+33; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V280,jvj+33,44,V281)*/
V281=pile[WZ3]; 
pile[v[22]]=V281; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V281,93,J)*/
J=pile[WZ2]; 
goto l33;
l26:pile[v[22]]=(-2952); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2952),I,V250)*/
V250=pile[WZ2]; 
pile[v[22]]=V250; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V250,34,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=V251; pile[WZ1]=jvj+6; 
(*f[223])( );if(v[102]) goto l27;     /*XX0(V251,jvj+6,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=V252; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V252,34,V253)*/
V253=pile[WZ2]; 
pile[v[22]]=V253; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V253,91,V254)*/
V254=pile[WZ2]; 
pile[v[22]]=V254; pile[WZ1]=jvj+35; 
(*f[223])( );if(v[102]) goto l27;     /*XX0(V254,jvj+35,V255)*/
V255=pile[WZ2]; 
pile[v[22]]=V255; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V255,59,V256)*/
V256=pile[WZ2]; 
pile[v[22]]=V256; pile[WZ1]=jvj+33; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V256,jvj+33,44,V257)*/
V257=pile[WZ3]; 
pile[v[22]]=V257; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V257,93,J)*/
J=pile[WZ2]; 
goto l33;
l28:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,X,jvj+39)*/
if((x[jvj+39]==0)) goto l29;
pile[v[22]]=103; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,X,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+43,jvj+44)*/
pile[v[22]]=162; pile[WZ1]=jvj+44; 
(*f[219])( );if(v[102]) goto l32;     /*FNDC2(162,jvj+44,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+45)*/
pile[v[22]]=I; pile[WZ1]=92; 
(*f[38])( );     /*SPC0(I,92,V239)*/
V239=pile[WZ2]; 
pile[v[22]]=V239; pile[WZ1]=V73; 
(*f[38])( );     /*SPC0(V239,V73,V240)*/
V240=pile[WZ2]; 
pile[v[22]]=V240; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V240,58,V241)*/
V241=pile[WZ2]; 
pile[v[22]]=V241; pile[WZ1]=jvj+45; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V241,jvj+45,V242)*/
V242=pile[WZ2]; 
pile[v[22]]=V242; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V242,59,V243)*/
V243=pile[WZ2]; 
pile[v[22]]=V243; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V243,91,V244)*/
V244=pile[WZ2]; 
pile[v[22]]=V244; pile[WZ1]=jvj+39; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V244,jvj+39,44,V245)*/
V245=pile[WZ3]; 
pile[v[22]]=V245; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V245,93,J)*/
J=pile[WZ2]; 
goto l33;
l29:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,X,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+40,jvj+41)*/
pile[v[22]]=162; pile[WZ1]=jvj+41; 
(*f[219])( );if(v[102]) goto l32;     /*FNDC2(162,jvj+41,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+42)*/
pile[v[22]]=I; pile[WZ1]=92; 
(*f[38])( );     /*SPC0(I,92,V272)*/
V272=pile[WZ2]; 
pile[v[22]]=V272; pile[WZ1]=V132; 
(*f[38])( );     /*SPC0(V272,V132,V273)*/
V273=pile[WZ2]; 
pile[v[22]]=V273; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V273,58,V274)*/
V274=pile[WZ2]; 
pile[v[22]]=V274; pile[WZ1]=jvj+42; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V274,jvj+42,J)*/
J=pile[WZ2]; 
goto l33;
l30:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+46)*/
pile[v[22]]=107; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(107,X,jvj+47)*/
pile[v[22]]=I; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(I,42,V295)*/
V295=pile[WZ2]; 
pile[v[22]]=V295; pile[WZ1]=jvj+46; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V295,jvj+46,V296)*/
V296=pile[WZ2]; 
pile[v[22]]=V296; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V296,58,V297)*/
V297=pile[WZ2]; 
pile[v[22]]=V297; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V297,123,V298)*/
V298=pile[WZ2]; 
pile[v[22]]=V298; pile[WZ1]=jvj+47; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V298,jvj+47,44,V299)*/
V299=pile[WZ3]; 
pile[v[22]]=V299; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V299,125,J)*/
J=pile[WZ2]; 
goto l33;
l31:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+49)*/
pile[v[22]]=103; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,X,jvj+50)*/
pile[v[22]]=I; pile[WZ1]=92; 
(*f[38])( );     /*SPC0(I,92,V265)*/
V265=pile[WZ2]; 
pile[v[22]]=V265; pile[WZ1]=82; 
(*f[38])( );     /*SPC0(V265,82,V266)*/
V266=pile[WZ2]; 
pile[v[22]]=V266; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V266,58,V267)*/
V267=pile[WZ2]; 
pile[v[22]]=V267; pile[WZ1]=jvj+49; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V267,jvj+49,V268)*/
V268=pile[WZ2]; 
pile[v[22]]=V268; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V268,46,V269)*/
V269=pile[WZ2]; 
pile[v[22]]=V269; pile[WZ1]=69; 
(*f[38])( );     /*SPC0(V269,69,V270)*/
V270=pile[WZ2]; 
pile[v[22]]=V270; pile[WZ1]=jvj+50; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(V270,jvj+50,J)*/
J=pile[WZ2]; 
goto l33;
l32:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
