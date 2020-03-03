#include "dx.h"
void XF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V4=0,V6=0,V188=0,V8=0,V190=0,V10=0,V12=0,V16=0,V194=0,V14=0,V32=0,V31=0,V33=0,V35=0,V199=0,V37=0,V201=0,V39=0,V41=0,V45=0,V205=0,V43=0,V207=0,V249=0,V247=0,V242=0,V243=0,V244=0,V245=0,V214=0,V215=0,V216=0,V217=0,V218=0,V223=0,V224=0,V225=0,V226=0,V65=0,V146=0,V261=0,V145=0,L=0,V148=0,V147=0,V80=0,V220=0,V221=0,V228=0,V229=0,V230=0,V231=0,V232=0,V274=0,V275=0,V276=0,V277=0,V278=0,V279=0,V234=0,V235=0,V236=0,V237=0,V238=0,V239=0,V240=0,V269=0,V270=0,V271=0,V272=0,V208=0,V209=0,V210=0,V211=0,V212=0,V158=0,V264=0,V265=0,V266=0,V267=0,V251=0,V252=0,V253=0,V254=0,V255=0,V256=0,V257=0,V258=0,V259=0;
int X,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=62;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,X,jvj+11)*/
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=1714)) goto l32;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,X,jvj+5)*/
pile[v[22]]=I; pile[WZ1]=jvj+11; 
(*f[223])( );if(v[102]) goto l32;     /*XX0(I,jvj+11,V3)*/
V3=pile[WZ2]; 
V2=incon;
if((x[jvj+5]==0)) goto l1;
V2=V3;
l2:V4=incon;
if((x[jvj+5]!=0)) goto l3;
V4=V2;
l4:V6=incon;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,X,jvj+1)*/
pile[v[22]]=V4; pile[WZ1]=jvj+1; 
(*f[223])( );if(v[102]) goto l5;     /*XX0(V4,jvj+1,V6)*/
V6=pile[WZ2]; 
l6:V8=incon;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,X,jvj+2)*/
pile[v[22]]=V6; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V6,44,V188)*/
V188=pile[WZ2]; 
pile[v[22]]=V188; pile[WZ1]=jvj+2; 
(*f[223])( );if(v[102]) goto l7;     /*XX0(V188,jvj+2,V8)*/
V8=pile[WZ2]; 
l8:V10=incon;
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(160,X,jvj+3)*/
pile[v[22]]=V8; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V8,44,V190)*/
V190=pile[WZ2]; 
pile[v[22]]=V190; pile[WZ1]=jvj+3; 
(*f[223])( );if(v[102]) goto l9;     /*XX0(V190,jvj+3,V10)*/
V10=pile[WZ2]; 
l10:V12=incon;
if((x[jvj+5]==0)) goto l11;
V12=V10;
l12:V14=incon;
if((x[jvj+5]!=0)) goto l13;
V14=V12;
l31:J=V14;
l62:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:pile[v[22]]=V3; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V3,40,V2)*/
V2=pile[WZ2]; 
goto l2;
l3:pile[v[22]]=V2; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V2,91,V4)*/
V4=pile[WZ2]; 
goto l4;
l5:V6=V4;
goto l6;
l7:V8=V6;
goto l8;
l9:V10=V8;
goto l10;
l11:pile[v[22]]=V10; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V10,41,V12)*/
V12=pile[WZ2]; 
goto l12;
l13:V16=incon;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,X,jvj+4)*/
pile[v[22]]=V12; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V12,44,V16)*/
V16=pile[WZ2]; 
l15:pile[v[22]]=V16; pile[WZ1]=jvj+5; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V16,jvj+5,44,V194)*/
V194=pile[WZ3]; 
pile[v[22]]=V194; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V194,93,V14)*/
V14=pile[WZ2]; 
goto l31;
l14:V16=V12;
goto l15;
l16:pile[v[22]]=V32; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V32,40,V31)*/
V31=pile[WZ2]; 
l17:V33=incon;
if((x[jvj+10]!=0)) goto l18;
V33=V31;
l19:V35=incon;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,X,jvj+6)*/
pile[v[22]]=V33; pile[WZ1]=jvj+6; 
(*f[223])( );if(v[102]) goto l20;     /*XX0(V33,jvj+6,V35)*/
V35=pile[WZ2]; 
l21:V37=incon;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,X,jvj+7)*/
pile[v[22]]=V35; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V35,44,V199)*/
V199=pile[WZ2]; 
pile[v[22]]=V199; pile[WZ1]=jvj+7; 
(*f[223])( );if(v[102]) goto l22;     /*XX0(V199,jvj+7,V37)*/
V37=pile[WZ2]; 
l23:V39=incon;
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(160,X,jvj+8)*/
pile[v[22]]=V37; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V37,44,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=V201; pile[WZ1]=jvj+8; 
(*f[223])( );if(v[102]) goto l24;     /*XX0(V201,jvj+8,V39)*/
V39=pile[WZ2]; 
l25:V41=incon;
if((x[jvj+10]==0)) goto l26;
V41=V39;
l27:V43=incon;
if((x[jvj+10]!=0)) goto l28;
V43=V41;
l34:J=V43;
goto l62;
l18:pile[v[22]]=V31; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V31,91,V33)*/
V33=pile[WZ2]; 
goto l19;
l20:V35=V33;
goto l21;
l22:V37=V35;
goto l23;
l24:V39=V37;
goto l25;
l26:pile[v[22]]=V39; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V39,41,V41)*/
V41=pile[WZ2]; 
goto l27;
l28:V45=incon;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,X,jvj+9)*/
if((x[jvj+16]!=x[jvj+9])) goto l29;
pile[v[22]]=V41; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V41,44,V45)*/
V45=pile[WZ2]; 
l30:pile[v[22]]=V45; pile[WZ1]=jvj+10; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V45,jvj+10,44,V205)*/
V205=pile[WZ3]; 
pile[v[22]]=V205; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V205,93,V43)*/
V43=pile[WZ2]; 
goto l34;
l29:V45=V41;
goto l30;
l32:pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+11,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=651)) goto l35;
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,jvj+12,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]==1714)) goto l33;
if((x[jvj+17]==1764)) goto l33;
l35:pile[v[22]]=X; pile[WZ1]=I; 
(*f[1049])( );if(v[102]) goto l36;     /*Z11Z0(X,I,J)*/
J=pile[WZ2]; 
goto l62;
l33:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,X,jvj+10)*/
pile[v[22]]=I; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(I,42,V207)*/
V207=pile[WZ2]; 
pile[v[22]]=V207; pile[WZ1]=jvj+12; 
(*f[223])( );if(v[102]) goto l35;     /*XX0(V207,jvj+12,V32)*/
V32=pile[WZ2]; 
V31=incon;
if((x[jvj+10]==0)) goto l16;
V31=V32;
goto l17;
l36:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,X,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]==318)) goto l37;
if((x[jvj+19]==653)) goto l38;
if((x[jvj+19]==650)) goto l39;
if((x[jvj+19]!=54)) goto l40;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(436,X,jvj+22)*/
pile[v[22]]=107; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,X,jvj+23)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=54; 
(*f[98])( );     /*SRA3(135,I,54,V214)*/
V214=pile[WZ3]; 
pile[v[22]]=V214; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V214,91,V215)*/
V215=pile[WZ2]; 
pile[v[22]]=V215; pile[WZ1]=jvj+22; 
(*f[223])( );if(v[102]) goto l40;     /*XX0(V215,jvj+22,V216)*/
V216=pile[WZ2]; 
pile[v[22]]=V216; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V216,59,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=V217; pile[WZ1]=jvj+23; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V217,jvj+23,44,V218)*/
V218=pile[WZ3]; 
pile[v[22]]=V218; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V218,93,J)*/
J=pile[WZ2]; 
goto l62;
l37:pile[v[22]]=I; pile[WZ1]=63; 
(*f[38])( );     /*SPC0(I,63,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=V249; 
(*f[38])( );     /*SPC0(V249,63,J)*/
J=pile[WZ2]; 
goto l62;
l38:pile[v[22]]=I; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(I,42,V247)*/
V247=pile[WZ2]; 
pile[v[22]]=V247; 
(*f[38])( );     /*SPC0(V247,42,J)*/
J=pile[WZ2]; 
goto l62;
l39:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,X,jvj+20)*/
pile[v[22]]=103; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(103,X,jvj+21)*/
pile[v[22]]=I; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(I,42,V242)*/
V242=pile[WZ2]; 
pile[v[22]]=V242; pile[WZ1]=jvj+20; 
(*f[223])( );if(v[102]) goto l40;     /*XX0(V242,jvj+20,V243)*/
V243=pile[WZ2]; 
pile[v[22]]=V243; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V243,123,V244)*/
V244=pile[WZ2]; 
pile[v[22]]=V244; pile[WZ1]=jvj+21; 
(*f[223])( );if(v[102]) goto l40;     /*XX0(V244,jvj+21,V245)*/
V245=pile[WZ2]; 
pile[v[22]]=V245; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V245,125,J)*/
J=pile[WZ2]; 
goto l62;
l40:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,X,jvj+24)*/
if((x[jvj+24]!=22)) goto l51;
pile[v[22]]=107; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(107,X,jvj+25)*/
if((x[jvj+25]!=0)) goto l51;
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,jvj+18,jvj+26)*/
if((x[jvj+26]==20)) goto l51;
pile[v[22]]=(-2952); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2952),I,V223)*/
V223=pile[WZ2]; 
pile[v[22]]=V223; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V223,34,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=V224; pile[WZ1]=jvj+18; 
(*f[223])( );if(v[102]) goto l51;     /*XX0(V224,jvj+18,V225)*/
V225=pile[WZ2]; 
pile[v[22]]=V225; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V225,34,V226)*/
V226=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=1325; pile[WZ2]=V226; 
(*f[1050])( );if(v[102]) goto l51;     /*XE0(X,1325,V226,J)*/
J=pile[WZ3]; 
goto l62;
l41:pile[v[22]]=1480; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(1480,jvj+27,V65)*/
V65=pile[WZ2]; 
if((V65!=3)) goto l57;
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(160,X,jvj+28)*/
l61:v[0]=jvj; v[22]-=3; v[102]=1;return;
l42:pile[v[22]]=155; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(155,jvj+27,jvj+29)*/
if((x[jvj+29]!=67)) goto l61;
l43:pile[v[22]]=1825; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(1825,jvj+27,jvj+30)*/
goto l61;
l44:pile[v[22]]=155; pile[WZ1]=jvj+27; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(155,jvj+27,jvj+31)*/
if((x[jvj+31]!=67)) goto l61;
l52:pile[v[22]]=I; pile[WZ1]=jvj+38; 
(*f[641])( );if(v[102]) goto l61;     /*XY0(I,jvj+38,V220)*/
V220=pile[WZ2]; 
pile[v[22]]=V220; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V220,40,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=V221; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V221,41,J)*/
J=pile[WZ2]; 
goto l62;
l45:pile[v[22]]=343; pile[WZ1]=jvj+27; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(343,jvj+27,jvj+32)*/
if((x[jvj+32]==155)) goto l50;
l46:pile[v[22]]=1829; pile[WZ1]=jvj+27; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(1829,jvj+27,jvj+33)*/
l50:pile[v[22]]=155; pile[WZ1]=jvj+27; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(155,jvj+27,jvj+36)*/
if((x[jvj+36]!=67)) goto l42;
l56:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,X,jvj+48)*/
pile[v[22]]=103; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,X,jvj+49)*/
pile[v[22]]=1826; pile[WZ1]=jvj+27; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(1826,jvj+27,jvj+50)*/
pile[v[22]]=1825; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(1825,jvj+27,jvj+51)*/
pile[v[22]]=I; pile[WZ1]=jvj+38; 
(*f[641])( );if(v[102]) goto l42;     /*XY0(I,jvj+38,V269)*/
V269=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V269; pile[WZ2]=jvj+51; 
(*f[42])( );     /*SRA1(135,V269,jvj+51,V270)*/
V270=pile[WZ3]; 
pile[v[22]]=V270; pile[WZ1]=jvj+48; 
(*f[344])( );if(v[102]) goto l42;     /*XX1(V270,jvj+48,V271)*/
V271=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V271; pile[WZ2]=jvj+50; 
(*f[42])( );     /*SRA1(135,V271,jvj+50,V272)*/
V272=pile[WZ3]; 
pile[v[22]]=V272; pile[WZ1]=jvj+49; 
(*f[344])( );if(v[102]) goto l42;     /*XX1(V272,jvj+49,J)*/
J=pile[WZ2]; 
goto l62;
l47:pile[v[22]]=343; pile[WZ1]=jvj+27; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(343,jvj+27,jvj+34)*/
if((x[jvj+34]==155)) goto l61;
l60:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(102,X,jvj+59)*/
pile[v[22]]=103; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(103,X,jvj+60)*/
pile[v[22]]=160; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(160,X,jvj+61)*/
pile[v[22]]=107; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(107,X,jvj+62)*/
pile[v[22]]=I; pile[WZ1]=jvj+38; 
(*f[641])( );if(v[102]) goto l61;     /*XY0(I,jvj+38,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=V251; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V251,91,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=V252; pile[WZ1]=jvj+59; 
(*f[223])( );if(v[102]) goto l61;     /*XX0(V252,jvj+59,V253)*/
V253=pile[WZ2]; 
pile[v[22]]=V253; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V253,59,V254)*/
V254=pile[WZ2]; 
pile[v[22]]=V254; pile[WZ1]=jvj+60; 
(*f[223])( );if(v[102]) goto l61;     /*XX0(V254,jvj+60,V255)*/
V255=pile[WZ2]; 
pile[v[22]]=V255; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V255,59,V256)*/
V256=pile[WZ2]; 
pile[v[22]]=V256; pile[WZ1]=jvj+61; 
(*f[223])( );if(v[102]) goto l61;     /*XX0(V256,jvj+61,V257)*/
V257=pile[WZ2]; 
pile[v[22]]=V257; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V257,59,V258)*/
V258=pile[WZ2]; 
pile[v[22]]=V258; pile[WZ1]=jvj+62; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V258,jvj+62,44,V259)*/
V259=pile[WZ3]; 
pile[v[22]]=V259; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V259,93,J)*/
J=pile[WZ2]; 
goto l62;
l48:pile[v[22]]=V146; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V146,59,V261)*/
V261=pile[WZ2]; 
pile[v[22]]=V261; pile[WZ1]=jvj+35; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V261,jvj+35,44,V145)*/
V145=pile[WZ3]; 
l58:pile[v[22]]=V145; pile[WZ1]=V158; 
(*f[38])( );     /*SPC0(V145,V158,V148)*/
V148=pile[WZ2]; 
V147=incon;
pile[v[22]]=332; pile[WZ1]=jvj+27; 
(*f[219])( );if(v[102]) goto l49;     /*FNDC2(332,jvj+27,L)*/
L=pile[WZ2]; 
pile[v[22]]=V148; pile[WZ1]=L; 
(*f[38])( );     /*SPC0(V148,L,V147)*/
V147=pile[WZ2]; 
l59:pile[v[22]]=V147; pile[WZ1]=jvj+57; 
(*f[223])( );if(v[102]) goto l47;     /*XX0(V147,jvj+57,J)*/
J=pile[WZ2]; 
goto l62;
l49:V147=V148;
goto l59;
l51:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(100,X,jvj+37)*/
if((x[jvj+37]!=22)) goto l61;
pile[v[22]]=111; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,X,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+38,jvj+27)*/
pile[v[22]]=118; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(118,jvj+27,V80)*/
V80=pile[WZ2]; 
if((V80==0)) goto l44;
if((V80==1)) goto l53;
if((V80==2)) goto l54;
if((V80!=3)) goto l61;
pile[v[22]]=155; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(155,jvj+27,jvj+54)*/
if((x[jvj+54]!=68)) goto l61;
pile[v[22]]=343; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(343,jvj+27,jvj+55)*/
if((x[jvj+55]!=155)) goto l47;
pile[v[22]]=331; 
(*f[219])( );if(v[102]) goto l47;     /*FNDC2(331,jvj+27,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,X,jvj+56)*/
pile[v[22]]=103; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,X,jvj+57)*/
pile[v[22]]=160; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(160,X,jvj+58)*/
pile[v[22]]=107; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,X,jvj+35)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V264)*/
V264=pile[WZ2]; 
pile[v[22]]=V264; pile[WZ1]=jvj+58; 
(*f[223])( );if(v[102]) goto l47;     /*XX0(V264,jvj+58,V265)*/
V265=pile[WZ2]; 
pile[v[22]]=V265; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V265,41,V266)*/
V266=pile[WZ2]; 
pile[v[22]]=V266; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V266,32,V267)*/
V267=pile[WZ2]; 
pile[v[22]]=V267; pile[WZ1]=jvj+56; 
(*f[223])( );if(v[102]) goto l47;     /*XX0(V267,jvj+56,V146)*/
V146=pile[WZ2]; 
V145=incon;
if((x[jvj+35]!=0)) goto l48;
V145=V146;
goto l58;
l53:pile[v[22]]=155; pile[WZ1]=jvj+27; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(155,jvj+27,jvj+39)*/
if((x[jvj+39]!=68)) goto l61;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(102,X,jvj+40)*/
pile[v[22]]=107; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,X,jvj+41)*/
pile[v[22]]=I; pile[WZ1]=jvj+38; 
(*f[641])( );if(v[102]) goto l61;     /*XY0(I,jvj+38,V228)*/
V228=pile[WZ2]; 
pile[v[22]]=V228; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V228,91,V229)*/
V229=pile[WZ2]; 
pile[v[22]]=V229; pile[WZ1]=jvj+40; 
(*f[223])( );if(v[102]) goto l61;     /*XX0(V229,jvj+40,V230)*/
V230=pile[WZ2]; 
pile[v[22]]=V230; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V230,59,V231)*/
V231=pile[WZ2]; 
pile[v[22]]=V231; pile[WZ1]=jvj+41; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V231,jvj+41,44,V232)*/
V232=pile[WZ3]; 
pile[v[22]]=V232; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V232,93,J)*/
J=pile[WZ2]; 
goto l62;
l54:pile[v[22]]=155; pile[WZ1]=jvj+27; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(155,jvj+27,jvj+42)*/
if((x[jvj+42]!=68)) goto l50;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,X,jvj+43)*/
pile[v[22]]=103; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,X,jvj+44)*/
pile[v[22]]=1829; pile[WZ1]=jvj+27; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(1829,jvj+27,jvj+45)*/
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(107,X,jvj+46)*/
pile[v[22]]=I; pile[WZ1]=jvj+38; 
(*f[641])( );if(v[102]) goto l45;     /*XY0(I,jvj+38,V274)*/
V274=pile[WZ2]; 
pile[v[22]]=V274; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V274,91,V275)*/
V275=pile[WZ2]; 
pile[v[22]]=V275; pile[WZ1]=jvj+43; 
(*f[223])( );if(v[102]) goto l45;     /*XX0(V275,jvj+43,V276)*/
V276=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V276; pile[WZ2]=1682; 
(*f[42])( );     /*SRA1(135,V276,1682,V277)*/
V277=pile[WZ3]; 
pile[v[22]]=V277; pile[WZ1]=jvj+44; 
(*f[344])( );if(v[102]) goto l45;     /*XX1(V277,jvj+44,V278)*/
V278=pile[WZ2]; 
pile[v[22]]=V278; pile[WZ1]=jvj+46; pile[WZ2]=jvj+45; 
(*f[642])( );     /*XM0(V278,jvj+46,jvj+45,V279)*/
V279=pile[WZ3]; 
pile[v[22]]=V279; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V279,93,J)*/
J=pile[WZ2]; 
goto l62;
l55:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(107,X,jvj+47)*/
pile[v[22]]=I; pile[WZ1]=jvj+38; 
(*f[641])( );if(v[102]) goto l50;     /*XY0(I,jvj+38,V234)*/
V234=pile[WZ2]; 
pile[v[22]]=V234; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V234,91,V235)*/
V235=pile[WZ2]; 
pile[v[22]]=V235; pile[WZ1]=jvj+43; 
(*f[223])( );if(v[102]) goto l50;     /*XX0(V235,jvj+43,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=V236; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V236,59,V237)*/
V237=pile[WZ2]; 
pile[v[22]]=V237; pile[WZ1]=jvj+44; 
(*f[223])( );if(v[102]) goto l50;     /*XX0(V237,jvj+44,V238)*/
V238=pile[WZ2]; 
pile[v[22]]=V238; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V238,59,V239)*/
V239=pile[WZ2]; 
pile[v[22]]=V239; pile[WZ1]=jvj+47; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V239,jvj+47,44,V240)*/
V240=pile[WZ3]; 
pile[v[22]]=V240; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V240,93,J)*/
J=pile[WZ2]; 
goto l62;
l57:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(102,X,jvj+52)*/
pile[v[22]]=103; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(103,X,jvj+53)*/
pile[v[22]]=I; pile[WZ1]=jvj+38; 
(*f[641])( );if(v[102]) goto l61;     /*XY0(I,jvj+38,V208)*/
V208=pile[WZ2]; 
pile[v[22]]=V208; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V208,40,V209)*/
V209=pile[WZ2]; 
pile[v[22]]=V209; pile[WZ1]=jvj+52; 
(*f[223])( );if(v[102]) goto l61;     /*XX0(V209,jvj+52,V210)*/
V210=pile[WZ2]; 
pile[v[22]]=V210; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V210,44,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=V211; pile[WZ1]=jvj+53; 
(*f[223])( );if(v[102]) goto l61;     /*XX0(V211,jvj+53,V212)*/
V212=pile[WZ2]; 
pile[v[22]]=V212; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V212,41,J)*/
J=pile[WZ2]; 
goto l62;
}
