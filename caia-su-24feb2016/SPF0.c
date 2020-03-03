#include "dx.h"
void SPF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V207=0,V198=0,V199=0,V196=0,V197=0,V200=0,V201=0,V22=0,V19=0,V68=0,V60=0,V61=0,V62=0,V33=0,V26=0,V27=0,V156=0,V147=0,V149=0,V150=0,V148=0,V176=0,V163=0,V165=0,V166=0,V164=0,V167=0,V168=0,V90=0,V91=0,V92=0,V93=0,V95=0,V73=0,V74=0,V77=0,V81=0,V83=0,V84=0,V82=0,V79=0,V80=0,V78=0,V75=0,V76=0,V229=0,V221=0,V222=0,V223=0,V252=0,V254=0,V242=0,V243=0,V245=0,V246=0,V244=0,V217=0,V211=0,V213=0,V212=0,V189=0,V181=0,V182=0,V183=0,V56=0,V49=0,V51=0,V52=0,V50=0,V266=0,V267=0,V261=0,V262=0,V259=0,V260=0,V42=0,V43=0,V38=0,V39=0,V40=0,V41=0,V133=0,V134=0,V135=0,V136=0,V137=0,V138=0,V141=0,V142=0,V143=0,V102=0,V104=0,V105=0,V108=0,V112=0,V114=0,V115=0,V113=0,V110=0,V111=0,V109=0,V106=0,V107=0,V103=0,V100=0,V101=0,V116=0,V118=0,V119=0,V122=0,V126=0,V128=0,V129=0,V127=0,V124=0,V125=0,V123=0,V120=0,V121=0,V117=0,V4=0,V2=0,V3=0;
int X,I;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=52;
x[jvj+1]=10444;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2145&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,X,jvj+2)*/
if((x[jvj+2]!=22)) goto l10;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+3,jvj+4)*/
pile[v[22]]=155; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(155,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l1;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,X,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+4; pile[WZ2]=I; 
(*f[2195])( );     /*SPVARIAIRE0(jvj+6,jvj+4,I,J)*/
J=pile[WZ3]; 
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:if(x[jvj+4]!=625&&x[jvj+4]!=568) goto l2;
pile[v[22]]=145; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(145,jvj+4,jvj+7)*/
pile[v[22]]=241; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(241,jvj+7,V207)*/
V207=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,X,jvj+8)*/
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,X,jvj+9)*/
pile[v[22]]=160; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(160,X,jvj+10)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V198)*/
V198=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=326; pile[WZ2]=jvj+10; pile[WZ3]=V198; 
(*f[2193])( );if(v[102]) goto l2;     /*EVFONC0(jvj+8,326,jvj+10,V198,V199)*/
V199=pile[WZ4]; 
pile[v[22]]=V199; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V199,41,V196)*/
V196=pile[WZ2]; 
pile[v[22]]=V207; pile[WZ1]=V196; 
(*f[64])( );     /*SRA2(V207,V196,V197)*/
V197=pile[WZ2]; 
pile[v[22]]=V197; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V197,40,V200)*/
V200=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=326; pile[WZ2]=jvj+10; pile[WZ3]=V200; 
(*f[2193])( );if(v[102]) goto l2;     /*EVFONC0(jvj+9,326,jvj+10,V200,V201)*/
V201=pile[WZ4]; 
pile[v[22]]=V201; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V201,41,J)*/
J=pile[WZ2]; 
goto l18;
l2:if(x[jvj+4]!=44&&x[jvj+4]!=45) goto l3;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,X,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=128)) goto l3;
pile[v[22]]=241; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,jvj+4,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,X,jvj+13)*/
pile[v[22]]=145; pile[WZ1]=jvj+4; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(145,jvj+4,jvj+14)*/
pile[v[22]]=128; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(128,jvj+11,jvj+15)*/
V19=x[jvj+15];
pile[v[22]]=jvj+13; pile[WZ1]=V19; pile[WZ2]=I; pile[WZ3]=jvj+14; pile[WZ4]=V22; 
(*f[2194])( );if(v[102]) goto l3;     /*SAPP0(jvj+13,V19,I,jvj+14,V22,J)*/
J=pile[WZ5]; 
goto l18;
l3:if(x[jvj+4]!=24&&x[jvj+4]!=1154) goto l4;
pile[v[22]]=241; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(241,jvj+4,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,X,jvj+16)*/
pile[v[22]]=V68; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V68,I,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V60,91,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=V61; 
(*f[2077])( );     /*SPR0(jvj+16,V61,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=V62; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V62,93,J)*/
J=pile[WZ2]; 
goto l18;
l4:if(x[jvj+4]!=225&&x[jvj+4]!=178) goto l5;
pile[v[22]]=145; pile[WZ1]=jvj+4; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(145,jvj+4,jvj+17)*/
pile[v[22]]=241; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(241,jvj+17,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,X,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(jvj+18,I,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=V26; 
(*f[64])( );     /*SRA2(V33,V26,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=(-1936); pile[WZ1]=V27; 
(*f[64])( );     /*SRA2((-1936),V27,J)*/
J=pile[WZ2]; 
goto l18;
l5:if(x[jvj+4]!=87&&x[jvj+4]!=88) goto l6;
pile[v[22]]=145; pile[WZ1]=jvj+4; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(145,jvj+4,jvj+19)*/
pile[v[22]]=241; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(241,jvj+19,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,X,jvj+20)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V147)*/
V147=pile[WZ2]; 
pile[v[22]]=jvj+20; pile[WZ1]=V147; 
(*f[2077])( );     /*SPR0(jvj+20,V147,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=V156; pile[WZ1]=V149; 
(*f[64])( );     /*SRA2(V156,V149,V150)*/
V150=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V150; 
(*f[99])( );     /*SPM0(1,V150,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=V148; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V148,41,J)*/
J=pile[WZ2]; 
goto l18;
l6:if(x[jvj+4]!=419&&x[jvj+4]!=980) goto l7;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,X,jvj+21)*/
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+21,V176)*/
V176=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,X,jvj+22)*/
pile[v[22]]=160; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(160,X,jvj+23)*/
pile[v[22]]=V176; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V176,I,V163)*/
V163=pile[WZ2]; 
pile[v[22]]=V163; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V163,91,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=V165; 
(*f[2077])( );     /*SPR0(jvj+22,V165,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=V166; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V166,93,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=V164; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V164,91,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=jvj+23; pile[WZ1]=V167; 
(*f[2077])( );     /*SPR0(jvj+23,V167,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=V168; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V168,93,J)*/
J=pile[WZ2]; 
goto l18;
l7:if(x[jvj+4]!=995&&x[jvj+4]!=996) goto l8;
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+4,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=53; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(241,53,V91)*/
V91=pile[WZ2]; 
pile[WZ1]=63; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(241,63,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=708; pile[WZ1]=jvj+4; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(708,jvj+4,jvj+24)*/
pile[v[22]]=241; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(241,jvj+24,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=145; pile[WZ1]=jvj+4; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(145,jvj+4,jvj+25)*/
pile[v[22]]=241; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(241,jvj+25,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,X,jvj+26)*/
pile[v[22]]=103; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,X,jvj+27)*/
pile[v[22]]=jvj+26; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(jvj+26,I,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V95; pile[WZ1]=V73; 
(*f[64])( );     /*SRA2(V95,V73,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V74; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V74,40,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=V77; 
(*f[38])( );     /*SPC0(V77,40,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=jvj+27; pile[WZ1]=V81; 
(*f[2077])( );     /*SPR0(jvj+27,V81,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=V91; pile[WZ1]=V83; 
(*f[64])( );     /*SRA2(V91,V83,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=V90; pile[WZ1]=V84; 
(*f[99])( );     /*SPM0(V90,V84,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=V82; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V82,41,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V92; pile[WZ1]=V79; 
(*f[64])( );     /*SRA2(V92,V79,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V80; 
(*f[99])( );     /*SPM0(10,V80,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V78,41,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V93; pile[WZ1]=V75; 
(*f[64])( );     /*SRA2(V93,V75,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=2; pile[WZ1]=V76; 
(*f[99])( );     /*SPM0(2,V76,J)*/
J=pile[WZ2]; 
goto l18;
l8:x[jvj+28]=233 ;z[jvj+28]=233;
if((x[jvj+28]!=x[jvj+4])) goto l9;
pile[v[22]]=241; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(241,jvj+28,V229)*/
V229=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,X,jvj+29)*/
pile[v[22]]=V229; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V229,I,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=V221; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V221,40,V222)*/
V222=pile[WZ2]; 
pile[v[22]]=jvj+29; pile[WZ1]=V222; 
(*f[2077])( );     /*SPR0(jvj+29,V222,V223)*/
V223=pile[WZ2]; 
pile[v[22]]=V223; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V223,41,J)*/
J=pile[WZ2]; 
goto l18;
l9:x[jvj+30]=1307 ;z[jvj+30]=1307;
if((x[jvj+30]!=x[jvj+4])) goto l10;
pile[v[22]]=447; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(447,jvj+30,jvj+31)*/
pile[v[22]]=241; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(241,jvj+31,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=459; pile[WZ1]=jvj+30; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(459,jvj+30,jvj+32)*/
pile[v[22]]=241; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(241,jvj+32,V254)*/
V254=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,X,jvj+33)*/
pile[v[22]]=103; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,X,jvj+34)*/
pile[v[22]]=V252; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V252,I,V242)*/
V242=pile[WZ2]; 
pile[v[22]]=V242; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V242,40,V243)*/
V243=pile[WZ2]; 
pile[v[22]]=jvj+33; pile[WZ1]=V243; 
(*f[2077])( );     /*SPR0(jvj+33,V243,V245)*/
V245=pile[WZ2]; 
pile[v[22]]=V254; pile[WZ1]=V245; 
(*f[64])( );     /*SRA2(V254,V245,V246)*/
V246=pile[WZ2]; 
pile[v[22]]=jvj+34; pile[WZ1]=V246; 
(*f[2077])( );     /*SPR0(jvj+34,V246,V244)*/
V244=pile[WZ2]; 
pile[v[22]]=V244; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V244,41,J)*/
J=pile[WZ2]; 
goto l18;
l10:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,X,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]==52)) goto l11;
if((x[jvj+36]==542)) goto l12;
if((x[jvj+36]==186)) goto l13;
if((x[jvj+36]==408)) goto l14;
if((x[jvj+36]==142)) goto l15;
if((x[jvj+36]!=1012)) goto l16;
pile[v[22]]=117; pile[WZ1]=995; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,995,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=53; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,53,V134)*/
V134=pile[WZ2]; 
pile[WZ1]=63; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,63,V135)*/
V135=pile[WZ2]; 
pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,51,V136)*/
V136=pile[WZ2]; 
pile[WZ1]=30; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,30,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=996; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,996,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=64; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,64,V141)*/
V141=pile[WZ2]; 
pile[WZ1]=28; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,28,V142)*/
V142=pile[WZ2]; 
pile[WZ1]=143; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,143,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+46)*/
pile[v[22]]=103; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,X,jvj+47)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=jvj+46; pile[WZ1]=V102; 
(*f[2077])( );     /*SPR0(jvj+46,V102,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=V137; pile[WZ1]=V104; 
(*f[64])( );     /*SRA2(V137,V104,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=V105; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V105,40,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=V108; 
(*f[38])( );     /*SPC0(V108,40,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=jvj+47; pile[WZ1]=V112; 
(*f[2077])( );     /*SPR0(jvj+47,V112,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=V134; pile[WZ1]=V114; 
(*f[64])( );     /*SRA2(V134,V114,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=V133; pile[WZ1]=V115; 
(*f[99])( );     /*SPM0(V133,V115,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=V113; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V113,41,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=V135; pile[WZ1]=V110; 
(*f[64])( );     /*SRA2(V135,V110,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V111; 
(*f[99])( );     /*SPM0(10,V111,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=V109; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V109,41,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=V136; pile[WZ1]=V106; 
(*f[64])( );     /*SRA2(V136,V106,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=2; pile[WZ1]=V107; 
(*f[99])( );     /*SPM0(2,V107,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=V103; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V103,41,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=V143; pile[WZ1]=V100; 
(*f[64])( );     /*SRA2(V143,V100,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=V101; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V101,40,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=jvj+46; pile[WZ1]=V116; 
(*f[2077])( );     /*SPR0(jvj+46,V116,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=V142; pile[WZ1]=V118; 
(*f[64])( );     /*SRA2(V142,V118,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=V119; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V119,40,V122)*/
V122=pile[WZ2]; 
pile[v[22]]=V122; 
(*f[38])( );     /*SPC0(V122,40,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=jvj+47; pile[WZ1]=V126; 
(*f[2077])( );     /*SPR0(jvj+47,V126,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=V134; pile[WZ1]=V128; 
(*f[64])( );     /*SRA2(V134,V128,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=V138; pile[WZ1]=V129; 
(*f[99])( );     /*SPM0(V138,V129,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=V127; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V127,41,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=V135; pile[WZ1]=V124; 
(*f[64])( );     /*SRA2(V135,V124,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V125; 
(*f[99])( );     /*SPM0(10,V125,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=V123; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V123,41,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=V141; pile[WZ1]=V120; 
(*f[64])( );     /*SRA2(V141,V120,V121)*/
V121=pile[WZ2]; 
pile[v[22]]=2; pile[WZ1]=V121; 
(*f[99])( );     /*SPM0(2,V121,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=V117; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V117,41,J)*/
J=pile[WZ2]; 
goto l18;
l11:pile[v[22]]=241; pile[WZ1]=52; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,52,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+37)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=V217; pile[WZ1]=V211; 
(*f[64])( );     /*SRA2(V217,V211,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=jvj+37; pile[WZ1]=V213; 
(*f[2077])( );     /*SPR0(jvj+37,V213,V212)*/
V212=pile[WZ2]; 
pile[v[22]]=V212; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V212,41,J)*/
J=pile[WZ2]; 
goto l18;
l12:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+38)*/
pile[v[22]]=163; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,jvj+38,V189)*/
V189=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,X,jvj+39)*/
pile[v[22]]=V189; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V189,I,V181)*/
V181=pile[WZ2]; 
pile[v[22]]=V181; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V181,91,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=jvj+39; pile[WZ1]=V182; 
(*f[2077])( );     /*SPR0(jvj+39,V182,V183)*/
V183=pile[WZ2]; 
pile[v[22]]=V183; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V183,93,J)*/
J=pile[WZ2]; 
goto l18;
l13:pile[v[22]]=241; pile[WZ1]=64; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,64,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+40)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V49; 
(*f[99])( );     /*SPM0(1,V49,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=V51; 
(*f[64])( );     /*SRA2(V56,V51,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=jvj+40; pile[WZ1]=V52; 
(*f[2077])( );     /*SPR0(jvj+40,V52,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V50,41,J)*/
J=pile[WZ2]; 
goto l18;
l14:pile[v[22]]=241; pile[WZ1]=326; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,326,V266)*/
V266=pile[WZ2]; 
pile[WZ1]=26; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,26,V267)*/
V267=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+41)*/
pile[v[22]]=103; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,X,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(jvj+42,I,V261)*/
V261=pile[WZ2]; 
pile[v[22]]=V266; pile[WZ1]=V261; 
(*f[64])( );     /*SRA2(V266,V261,V262)*/
V262=pile[WZ2]; 
pile[v[22]]=jvj+41; pile[WZ1]=V262; 
(*f[2077])( );     /*SPR0(jvj+41,V262,V259)*/
V259=pile[WZ2]; 
pile[v[22]]=V267; pile[WZ1]=V259; 
(*f[64])( );     /*SRA2(V267,V259,V260)*/
V260=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V260; 
(*f[99])( );     /*SPM0(0,V260,J)*/
J=pile[WZ2]; 
goto l18;
l15:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(160,X,jvj+43)*/
pile[v[22]]=102; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+44)*/
pile[v[22]]=103; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,X,jvj+45)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=jvj+44; pile[WZ1]=V42; 
(*f[2077])( );     /*SPR0(jvj+44,V42,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V43,41,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=(-2601); pile[WZ1]=V38; 
(*f[64])( );     /*SRA2((-2601),V38,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=jvj+45; pile[WZ1]=V39; 
(*f[2077])( );     /*SPR0(jvj+45,V39,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=(-2602); pile[WZ1]=V40; 
(*f[64])( );     /*SRA2((-2602),V40,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=jvj+43; pile[WZ1]=V41; 
(*f[2077])( );     /*SPR0(jvj+43,V41,J)*/
J=pile[WZ2]; 
goto l18;
l16:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,X,jvj+48)*/
if((x[jvj+48]!=22)) goto l17;
pile[v[22]]=111; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,X,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+49,jvj+50)*/
pile[v[22]]=118; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(118,jvj+50,V4)*/
V4=pile[WZ2]; 
if((V4!=2)) goto l17;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,X,jvj+51)*/
pile[v[22]]=103; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,X,jvj+52)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=jvj+51; pile[WZ1]=jvj+50; pile[WZ2]=jvj+52; pile[WZ3]=V2; 
(*f[2193])( );if(v[102]) goto l17;     /*EVFONC0(jvj+51,jvj+50,jvj+52,V2,V3)*/
V3=pile[WZ4]; 
pile[v[22]]=V3; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V3,41,J)*/
J=pile[WZ2]; 
goto l18;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
