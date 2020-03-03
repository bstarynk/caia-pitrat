#include "dx.h"
void Z10Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V174=0,V1=0,V176=0,V3=0,V8=0,V7=0,V9=0,V180=0,V181=0,V11=0,V183=0,V5=0,V18=0,V185=0,V186=0,V187=0,V188=0,V17=0,V16=0,V190=0,V191=0,V192=0,V15=0,V13=0,V40=0,V195=0,V196=0,V197=0,V39=0,V199=0,V200=0,V201=0,V202=0,V203=0,V41=0,V52=0,V218=0,V219=0,V51=0,V56=0,V59=0,V63=0,V230=0,V61=0,HH=0,V65=0,V64=0,V68=0,V233=0,V66=0,V131=0,V306=0,V307=0,V130=0,JK=0,V135=0,V141=0,V142=0,V156=0,V160=0,V310=0,V311=0,V312=0,V331=0,V332=0,V333=0,V335=0,V336=0,V338=0,V339=0,V326=0,V327=0,V328=0,V329=0,V314=0,V315=0,V316=0,V317=0,V318=0,V320=0,V321=0,V322=0,V323=0,V237=0,V238=0,V239=0,V240=0,V241=0,V242=0,V244=0,V245=0,V246=0,V247=0,V248=0,V249=0,V250=0,V251=0,V252=0,V283=0,V284=0,V285=0,V286=0,V287=0,V294=0,V295=0,V296=0,V297=0,V298=0,V300=0,V301=0,V302=0,V303=0,V304=0,V276=0,V277=0,V278=0,V279=0,V280=0,V281=0,V271=0,V272=0,V273=0,V274=0,V263=0,V264=0,V265=0,V266=0,V267=0,V268=0,V269=0,V289=0,V290=0,V291=0,V292=0,V254=0,V255=0,V256=0,V257=0,V258=0,V259=0,V260=0,V261=0,V221=0,V222=0,V223=0,V224=0,V225=0,V226=0,V227=0,V228=0,V205=0,V206=0,V207=0,V208=0,V209=0,V210=0,V211=0,V212=0,V213=0,V214=0,V215=0,V216=0,V217=0,V193=0,V194=0,V235=0,V236=0,V134=0;
int I,X;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=89;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(100,X,jvj+27)*/
if((x[jvj+27]==114)) goto l34;
if((x[jvj+27]==570)) goto l37;
if((x[jvj+27]==452)) goto l38;
if((x[jvj+27]==646)) goto l39;
if((x[jvj+27]==61)) goto l40;
if((x[jvj+27]==1908)) goto l41;
if((x[jvj+27]==455)) goto l42;
if((x[jvj+27]==454)) goto l44;
if((x[jvj+27]==453)) goto l47;
if((x[jvj+27]==979)) goto l48;
if((x[jvj+27]==1027)) goto l49;
if((x[jvj+27]==315)) goto l50;
if((x[jvj+27]==22)) goto l51;
if((x[jvj+27]==477)) goto l52;
if((x[jvj+27]==895)) goto l54;
if((x[jvj+27]==611)) goto l55;
if((x[jvj+27]!=600)) goto l58;
pile[v[22]]=111; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,X,jvj+82)*/
pile[v[22]]=102; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+83)*/
pile[v[22]]=103; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+84)*/
pile[v[22]]=160; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(160,X,jvj+85)*/
pile[v[22]]=107; pile[WZ2]=jvj+86; 
(*f[33])( );     /*FNDE0(107,X,jvj+86)*/
pile[v[22]]=730; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(730,X,jvj+13)*/
pile[v[22]]=I; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(I,91,V205)*/
V205=pile[WZ2]; 
pile[v[22]]=V205; pile[WZ1]=jvj+82; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V205,jvj+82,V206)*/
V206=pile[WZ2]; 
pile[v[22]]=V206; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V206,44,V207)*/
V207=pile[WZ2]; 
pile[v[22]]=V207; pile[WZ1]=jvj+85; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V207,jvj+85,V208)*/
V208=pile[WZ2]; 
pile[v[22]]=V208; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V208,93,V209)*/
V209=pile[WZ2]; 
pile[v[22]]=V209; pile[WZ1]=jvj+83; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V209,jvj+83,V210)*/
V210=pile[WZ2]; 
pile[v[22]]=V210; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V210,59,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=V211; pile[WZ1]=(-4413); 
(*f[37])( );     /*SRA0(V211,(-4413),V212)*/
V212=pile[WZ2]; 
pile[v[22]]=V212; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V212,58,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=V213; pile[WZ1]=jvj+84; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V213,jvj+84,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=V214; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V214,59,V215)*/
V215=pile[WZ2]; 
pile[v[22]]=V215; pile[WZ1]=(-4412); 
(*f[37])( );     /*SRA0(V215,(-4412),V216)*/
V216=pile[WZ2]; 
pile[v[22]]=V216; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V216,58,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=V217; pile[WZ1]=jvj+86; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V217,jvj+86,44,V40)*/
V40=pile[WZ3]; 
V39=incon;
if((x[jvj+13]!=0)) goto l18;
V39=V40;
l19:V41=incon;
pile[v[22]]=735; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(735,X,jvj+14)*/
pile[v[22]]=120; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(120,X,jvj+15)*/
pile[v[22]]=V39; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V39,46,V199)*/
V199=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V199; pile[WZ2]=735; 
(*f[98])( );     /*SRA3(135,V199,735,V200)*/
V200=pile[WZ3]; 
pile[v[22]]=V200; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V200,58,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=V201; pile[WZ1]=jvj+14; 
(*f[223])( );if(v[102]) goto l20;     /*XX0(V201,jvj+14,V202)*/
V202=pile[WZ2]; 
pile[v[22]]=V202; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V202,(-9543),V203)*/
V203=pile[WZ2]; 
pile[v[22]]=V203; pile[WZ1]=jvj+15; 
(*f[344])( );if(v[102]) goto l20;     /*XX1(V203,jvj+15,V41)*/
V41=pile[WZ2]; 
l57:J=V41;
l66:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:V1=V2;
l2:V3=incon;
pile[v[22]]=658; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(658,X,jvj+2)*/
if((x[jvj+2]!=0)) goto l3;
V3=V1;
l4:V5=incon;
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+4,jvj+5)*/
if(x[jvj+5]!=433&&x[jvj+5]!=918) goto l11;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,X,jvj+6)*/
pile[v[22]]=V3; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V3,32,V183)*/
V183=pile[WZ2]; 
pile[v[22]]=V183; pile[WZ1]=jvj+6; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V183,jvj+6,44,V8)*/
V8=pile[WZ3]; 
V7=incon;
pile[v[22]]=366; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(366,X,jvj+3)*/
pile[v[22]]=10; pile[WZ1]=jvj+3; pile[WZ2]=V8; 
(*f[421])( );     /*XO0(10,jvj+3,V8,V7)*/
V7=pile[WZ3]; 
l6:V9=incon;
if((x[jvj+5]==918)) goto l7;
V9=V7;
l8:V11=incon;
if((x[jvj+5]==433)) goto l9;
V11=V9;
l10:pile[v[22]]=V11; pile[WZ1]=10; 
(*f[38])( );     /*SPC0(V11,10,V5)*/
V5=pile[WZ2]; 
l12:V13=incon;
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+4,jvj+11)*/
if(x[jvj+11]!=44&&x[jvj+11]!=187&&x[jvj+11]!=714) goto l17;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,X,jvj+12)*/
pile[v[22]]=V5; pile[WZ1]=jvj+12; 
(*f[344])( );if(v[102]) goto l17;     /*XX1(V5,jvj+12,V16)*/
V16=pile[WZ2]; 
V15=incon;
if(x[jvj+11]!=187&&x[jvj+11]!=714) goto l15;
pile[v[22]]=959; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(959,X,jvj+9)*/
pile[v[22]]=107; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,X,jvj+10)*/
pile[v[22]]=V16; pile[WZ1]=10; 
(*f[38])( );     /*SPC0(V16,10,V190)*/
V190=pile[WZ2]; 
pile[v[22]]=V190; pile[WZ1]=43; 
(*f[38])( );     /*SPC0(V190,43,V191)*/
V191=pile[WZ2]; 
pile[v[22]]=V191; pile[WZ1]=jvj+10; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V191,jvj+10,44,V192)*/
V192=pile[WZ3]; 
pile[v[22]]=V192; pile[WZ1]=jvj+9; 
(*f[344])( );if(v[102]) goto l15;     /*XX1(V192,jvj+9,V18)*/
V18=pile[WZ2]; 
V17=incon;
if((x[jvj+11]!=714)) goto l13;
pile[v[22]]=960; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(960,X,jvj+7)*/
pile[v[22]]=767; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(767,X,jvj+8)*/
pile[v[22]]=V18; pile[WZ1]=10; 
(*f[38])( );     /*SPC0(V18,10,V185)*/
V185=pile[WZ2]; 
pile[v[22]]=V185; pile[WZ1]=43; 
(*f[38])( );     /*SPC0(V185,43,V186)*/
V186=pile[WZ2]; 
pile[v[22]]=V186; 
(*f[38])( );     /*SPC0(V186,43,V187)*/
V187=pile[WZ2]; 
pile[v[22]]=V187; pile[WZ1]=jvj+8; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V187,jvj+8,44,V188)*/
V188=pile[WZ3]; 
pile[v[22]]=V188; pile[WZ1]=jvj+7; 
(*f[344])( );if(v[102]) goto l13;     /*XX1(V188,jvj+7,V17)*/
V17=pile[WZ2]; 
l14:V15=V17;
l16:V13=V15;
l59:J=V13;
goto l66;
l3:pile[v[22]]=135; pile[WZ1]=V1; pile[WZ2]=658; 
(*f[42])( );     /*SRA1(135,V1,658,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=V176; pile[WZ1]=jvj+2; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V176,jvj+2,44,V3)*/
V3=pile[WZ3]; 
goto l4;
l5:V7=V8;
goto l6;
l7:pile[v[22]]=135; pile[WZ1]=V7; pile[WZ2]=12; 
(*f[42])( );     /*SRA1(135,V7,12,V9)*/
V9=pile[WZ3]; 
goto l8;
l9:pile[v[22]]=V9; pile[WZ1]=(-4868); 
(*f[37])( );     /*SRA0(V9,(-4868),V180)*/
V180=pile[WZ2]; 
pile[v[22]]=V180; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V180,(-1318),V181)*/
V181=pile[WZ2]; 
pile[v[22]]=V181; pile[WZ1]=(-5693); 
(*f[37])( );     /*SRA0(V181,(-5693),V11)*/
V11=pile[WZ2]; 
goto l10;
l11:V5=V3;
goto l12;
l13:V17=V18;
goto l14;
l15:V15=V16;
goto l16;
l17:V13=V5;
goto l59;
l18:pile[v[22]]=V40; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V40,46,V195)*/
V195=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V195; pile[WZ2]=730; 
(*f[98])( );     /*SRA3(135,V195,730,V196)*/
V196=pile[WZ3]; 
pile[v[22]]=V196; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V196,58,V197)*/
V197=pile[WZ2]; 
pile[v[22]]=V197; pile[WZ1]=jvj+13; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V197,jvj+13,44,V39)*/
V39=pile[WZ3]; 
goto l19;
l20:V41=V39;
goto l57;
l21:V51=V52;
l56:J=V51;
goto l66;
l22:V59=I;
l23:V61=incon;
pile[v[22]]=162; pile[WZ1]=jvj+18; 
(*f[219])( );if(v[102]) goto l24;     /*FNDC2(162,jvj+18,V63)*/
V63=pile[WZ2]; 
l25:V61=V59;
l61:pile[v[22]]=644; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(644,X,jvj+19)*/
pile[v[22]]=V61; pile[WZ1]=jvj+88; 
(*f[223])( );if(v[102]) goto l63;     /*XX0(V61,jvj+88,V235)*/
V235=pile[WZ2]; 
pile[v[22]]=V235; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V235,58,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=V236; pile[WZ1]=jvj+89; 
(*f[223])( );if(v[102]) goto l63;     /*XX0(V236,jvj+89,V65)*/
V65=pile[WZ2]; 
V64=incon;
pile[v[22]]=162; pile[WZ1]=jvj+19; 
(*f[219])( );if(v[102]) goto l26;     /*FNDC2(162,jvj+19,HH)*/
HH=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=HH; 
(*f[38])( );     /*SPC0(V65,HH,V64)*/
V64=pile[WZ2]; 
l27:V66=incon;
pile[v[22]]=162; pile[WZ1]=jvj+19; 
(*f[219])( );if(v[102]) goto l28;     /*FNDC2(162,jvj+19,V68)*/
V68=pile[WZ2]; 
l29:V66=V64;
l62:J=V66;
goto l66;
l24:pile[v[22]]=V59; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V59,123,V230)*/
V230=pile[WZ2]; 
pile[v[22]]=V230; pile[WZ1]=jvj+18; 
(*f[223])( );if(v[102]) goto l25;     /*XX0(V230,jvj+18,V61)*/
V61=pile[WZ2]; 
goto l61;
l26:V64=V65;
goto l27;
l28:pile[v[22]]=V64; pile[WZ1]=jvj+19; 
(*f[344])( );if(v[102]) goto l29;     /*XX1(V64,jvj+19,V233)*/
V233=pile[WZ2]; 
pile[v[22]]=V233; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V233,125,V66)*/
V66=pile[WZ2]; 
goto l62;
l30:pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(101,jvj+20,jvj+21)*/
l58:if((v[215]!=0)) goto l60;
if((x[jvj+27]!=984)) goto l60;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(103,X,jvj+87)*/
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(102,X,jvj+4)*/
pile[v[22]]=10; pile[WZ1]=I; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(10,I,42,V193)*/
V193=pile[WZ3]; 
pile[v[22]]=V193; pile[WZ1]=jvj+4; 
(*f[344])( );if(v[102]) goto l63;     /*XX1(V193,jvj+4,V194)*/
V194=pile[WZ2]; 
pile[v[22]]=V194; pile[WZ1]=jvj+87; 
(*f[344])( );if(v[102]) goto l63;     /*XX1(V194,jvj+87,V2)*/
V2=pile[WZ2]; 
V1=incon;
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(160,X,jvj+1)*/
pile[v[22]]=V2; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V2,58,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=V174; pile[WZ1]=jvj+1; 
(*f[344])( );if(v[102]) goto l1;     /*XX1(V174,jvj+1,V1)*/
V1=pile[WZ2]; 
goto l2;
l31:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,X,jvj+22)*/
goto l58;
l32:pile[v[22]]=V131; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V131,(-9543),V306)*/
V306=pile[WZ2]; 
pile[v[22]]=V306; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V306,32,V307)*/
V307=pile[WZ2]; 
pile[v[22]]=V307; pile[WZ1]=jvj+23; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V307,jvj+23,44,V130)*/
V130=pile[WZ3]; 
l43:J=V130;
goto l66;
l33:pile[v[22]]=JK; pile[WZ1]=jvj+24; pile[WZ2]=1687; 
(*f[642])( );     /*XM0(JK,jvj+24,1687,V135)*/
V135=pile[WZ3]; 
l64:J=V135;
goto l66;
l34:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+25,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(103,X,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+28,V160)*/
V160=pile[WZ2]; 
if((V156!=V160)) goto l35;
pile[v[22]]=V156; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V156,I,J)*/
J=pile[WZ2]; 
goto l66;
l35:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+25,V141)*/
V141=pile[WZ2]; 
pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+26,V142)*/
V142=pile[WZ2]; 
if((V141==V142)) goto l58;
l36:pile[v[22]]=I; pile[WZ1]=jvj+25; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(I,jvj+25,V310)*/
V310=pile[WZ2]; 
pile[v[22]]=V310; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V310,45,V311)*/
V311=pile[WZ2]; 
pile[v[22]]=V311; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V311,62,V312)*/
V312=pile[WZ2]; 
pile[v[22]]=V312; pile[WZ1]=jvj+26; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V312,jvj+26,J)*/
J=pile[WZ2]; 
goto l66;
l37:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+29)*/
pile[v[22]]=103; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+30)*/
pile[v[22]]=I; pile[WZ1]=jvj+29; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(I,jvj+29,V331)*/
V331=pile[WZ2]; 
pile[v[22]]=V331; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V331,46,V332)*/
V332=pile[WZ2]; 
pile[v[22]]=V332; pile[WZ1]=69; 
(*f[38])( );     /*SPC0(V332,69,V333)*/
V333=pile[WZ2]; 
pile[v[22]]=V333; pile[WZ1]=jvj+30; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V333,jvj+30,J)*/
J=pile[WZ2]; 
goto l66;
l38:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+31)*/
pile[v[22]]=107; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,X,jvj+32)*/
pile[v[22]]=I; pile[WZ1]=jvj+32; pile[WZ2]=44; 
(*f[640])( );     /*XL0(I,jvj+32,44,V335)*/
V335=pile[WZ3]; 
pile[v[22]]=V335; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V335,58,V336)*/
V336=pile[WZ2]; 
pile[v[22]]=V336; pile[WZ1]=jvj+31; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V336,jvj+31,J)*/
J=pile[WZ2]; 
goto l66;
l39:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+33)*/
pile[v[22]]=107; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,X,jvj+34)*/
pile[v[22]]=I; pile[WZ1]=jvj+34; pile[WZ2]=44; 
(*f[640])( );     /*XL0(I,jvj+34,44,V338)*/
V338=pile[WZ3]; 
pile[v[22]]=V338; pile[WZ1]=183; 
(*f[38])( );     /*SPC0(V338,183,V339)*/
V339=pile[WZ2]; 
pile[v[22]]=V339; pile[WZ1]=jvj+33; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V339,jvj+33,J)*/
J=pile[WZ2]; 
goto l66;
l40:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+35)*/
pile[v[22]]=103; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+36)*/
pile[v[22]]=I; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(I,91,V326)*/
V326=pile[WZ2]; 
pile[v[22]]=V326; pile[WZ1]=jvj+35; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V326,jvj+35,V327)*/
V327=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V327; pile[WZ2]=1706; 
(*f[42])( );     /*SRA1(135,V327,1706,V328)*/
V328=pile[WZ3]; 
pile[v[22]]=V328; pile[WZ1]=jvj+36; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(V328,jvj+36,V329)*/
V329=pile[WZ2]; 
pile[v[22]]=V329; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V329,93,J)*/
J=pile[WZ2]; 
goto l66;
l41:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+37)*/
pile[v[22]]=103; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+38)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=1908; 
(*f[42])( );     /*SRA1(135,I,1908,V314)*/
V314=pile[WZ3]; 
pile[v[22]]=V314; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V314,123,V315)*/
V315=pile[WZ2]; 
pile[v[22]]=V315; pile[WZ1]=jvj+37; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V315,jvj+37,V316)*/
V316=pile[WZ2]; 
pile[v[22]]=V316; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V316,44,V317)*/
V317=pile[WZ2]; 
pile[v[22]]=V317; pile[WZ1]=jvj+38; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V317,jvj+38,V318)*/
V318=pile[WZ2]; 
pile[v[22]]=V318; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V318,125,J)*/
J=pile[WZ2]; 
goto l66;
l42:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+39)*/
pile[v[22]]=107; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,X,jvj+23)*/
pile[v[22]]=I; pile[WZ1]=jvj+39; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(I,jvj+39,V131)*/
V131=pile[WZ2]; 
V130=incon;
if((x[jvj+23]!=0)) goto l32;
V130=V131;
goto l43;
l44:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,X,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+20,jvj+40)*/
if((x[jvj+40]!=21)) goto l45;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(103,X,jvj+41)*/
pile[v[22]]=436; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(436,X,jvj+42)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=454; 
(*f[98])( );     /*SRA3(135,I,454,V320)*/
V320=pile[WZ3]; 
pile[WZ1]=V320; pile[WZ2]=21; 
(*f[42])( );     /*SRA1(135,V320,21,V321)*/
V321=pile[WZ3]; 
pile[v[22]]=V321; pile[WZ1]=jvj+42; 
(*f[344])( );if(v[102]) goto l45;     /*XX1(V321,jvj+42,V322)*/
V322=pile[WZ2]; 
pile[v[22]]=V322; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V322,(-740),V323)*/
V323=pile[WZ2]; 
pile[v[22]]=V323; pile[WZ1]=jvj+41; 
(*f[344])( );if(v[102]) goto l45;     /*XX1(V323,jvj+41,J)*/
J=pile[WZ2]; 
goto l66;
l45:if((x[jvj+40]==21)) goto l30;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(436,X,jvj+43)*/
pile[v[22]]=102; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+44)*/
pile[v[22]]=103; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,X,jvj+45)*/
pile[v[22]]=160; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(160,X,jvj+46)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=454; 
(*f[98])( );     /*SRA3(135,I,454,V237)*/
V237=pile[WZ3]; 
pile[WZ1]=V237; pile[WZ2]=jvj+40; 
(*f[42])( );     /*SRA1(135,V237,jvj+40,V238)*/
V238=pile[WZ3]; 
pile[v[22]]=V238; pile[WZ1]=jvj+43; 
(*f[344])( );if(v[102]) goto l30;     /*XX1(V238,jvj+43,V239)*/
V239=pile[WZ2]; 
pile[v[22]]=V239; pile[WZ1]=jvj+44; 
(*f[344])( );if(v[102]) goto l30;     /*XX1(V239,jvj+44,V240)*/
V240=pile[WZ2]; 
pile[v[22]]=(-2980); pile[WZ1]=V240; 
(*f[64])( );     /*SRA2((-2980),V240,V241)*/
V241=pile[WZ2]; 
pile[v[22]]=V241; pile[WZ1]=jvj+45; 
(*f[223])( );if(v[102]) goto l30;     /*XX0(V241,jvj+45,V242)*/
V242=pile[WZ2]; 
pile[v[22]]=V242; pile[WZ1]=jvj+46; 
(*f[344])( );if(v[102]) goto l30;     /*XX1(V242,jvj+46,J)*/
J=pile[WZ2]; 
goto l66;
l46:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+47)*/
pile[v[22]]=103; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+48)*/
pile[v[22]]=160; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(160,X,jvj+49)*/
pile[v[22]]=436; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(436,X,jvj+50)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=454; 
(*f[98])( );     /*SRA3(135,I,454,V244)*/
V244=pile[WZ3]; 
pile[v[22]]=V244; pile[WZ1]=34; 
(*f[249])( );     /*SPC1(V244,34,V245)*/
V245=pile[WZ2]; 
pile[v[22]]=V245; pile[WZ1]=jvj+20; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V245,jvj+20,V246)*/
V246=pile[WZ2]; 
pile[v[22]]=V246; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V246,34,V247)*/
V247=pile[WZ2]; 
pile[v[22]]=V247; pile[WZ1]=jvj+50; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(V247,jvj+50,V248)*/
V248=pile[WZ2]; 
pile[v[22]]=V248; pile[WZ1]=jvj+47; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(V248,jvj+47,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=V249; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V249,45,V250)*/
V250=pile[WZ2]; 
pile[v[22]]=V250; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V250,62,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=V251; pile[WZ1]=jvj+48; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V251,jvj+48,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=V252; pile[WZ1]=jvj+49; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(V252,jvj+49,J)*/
J=pile[WZ2]; 
goto l66;
l47:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,X,jvj+51)*/
pile[v[22]]=102; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+52)*/
pile[v[22]]=103; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+53)*/
pile[v[22]]=I; pile[WZ1]=jvj+51; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(I,jvj+51,V283)*/
V283=pile[WZ2]; 
pile[v[22]]=V283; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V283,123,V284)*/
V284=pile[WZ2]; 
pile[v[22]]=V284; pile[WZ1]=jvj+52; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V284,jvj+52,V285)*/
V285=pile[WZ2]; 
pile[v[22]]=V285; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V285,44,V286)*/
V286=pile[WZ2]; 
pile[v[22]]=V286; pile[WZ1]=jvj+53; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V286,jvj+53,V287)*/
V287=pile[WZ2]; 
pile[v[22]]=V287; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V287,125,J)*/
J=pile[WZ2]; 
goto l66;
l48:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,X,jvj+54)*/
pile[v[22]]=102; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+55)*/
pile[v[22]]=103; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+56)*/
pile[v[22]]=I; pile[WZ1]=jvj+54; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(I,jvj+54,V294)*/
V294=pile[WZ2]; 
pile[v[22]]=V294; pile[WZ1]=47; 
(*f[38])( );     /*SPC0(V294,47,V295)*/
V295=pile[WZ2]; 
pile[v[22]]=V295; pile[WZ1]=jvj+55; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V295,jvj+55,V296)*/
V296=pile[WZ2]; 
pile[v[22]]=V296; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V296,44,V297)*/
V297=pile[WZ2]; 
pile[v[22]]=V297; pile[WZ1]=jvj+56; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V297,jvj+56,V298)*/
V298=pile[WZ2]; 
pile[v[22]]=V298; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V298,41,J)*/
J=pile[WZ2]; 
goto l66;
l49:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,X,jvj+57)*/
pile[v[22]]=102; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+58)*/
pile[v[22]]=103; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+59)*/
pile[v[22]]=I; pile[WZ1]=jvj+57; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(I,jvj+57,V300)*/
V300=pile[WZ2]; 
pile[v[22]]=V300; pile[WZ1]=92; 
(*f[38])( );     /*SPC0(V300,92,V301)*/
V301=pile[WZ2]; 
pile[v[22]]=V301; pile[WZ1]=jvj+58; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V301,jvj+58,V302)*/
V302=pile[WZ2]; 
pile[v[22]]=V302; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V302,44,V303)*/
V303=pile[WZ2]; 
pile[v[22]]=V303; pile[WZ1]=jvj+59; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V303,jvj+59,V304)*/
V304=pile[WZ2]; 
pile[v[22]]=V304; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V304,41,J)*/
J=pile[WZ2]; 
goto l66;
l50:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+60)*/
pile[v[22]]=103; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+61)*/
pile[v[22]]=160; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(160,X,jvj+62)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V276)*/
V276=pile[WZ2]; 
pile[v[22]]=V276; pile[WZ1]=jvj+60; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V276,jvj+60,V277)*/
V277=pile[WZ2]; 
pile[v[22]]=V277; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V277,44,V278)*/
V278=pile[WZ2]; 
pile[v[22]]=V278; pile[WZ1]=jvj+61; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V278,jvj+61,V279)*/
V279=pile[WZ2]; 
pile[v[22]]=V279; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V279,44,V280)*/
V280=pile[WZ2]; 
pile[v[22]]=V280; pile[WZ1]=jvj+62; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V280,jvj+62,V281)*/
V281=pile[WZ2]; 
pile[v[22]]=V281; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V281,41,J)*/
J=pile[WZ2]; 
goto l66;
l51:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,X,jvj+63)*/
pile[v[22]]=101; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(101,jvj+63,jvj+64)*/
pile[v[22]]=1744; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(1744,jvj+64,jvj+65)*/
if((x[jvj+65]!=68)) goto l58;
pile[v[22]]=1829; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(1829,jvj+64,jvj+66)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+67)*/
pile[v[22]]=102; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+68)*/
pile[v[22]]=107; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(107,X,jvj+69)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=jvj+64; 
(*f[42])( );     /*SRA1(135,I,jvj+64,V271)*/
V271=pile[WZ3]; 
pile[v[22]]=V271; pile[WZ1]=jvj+68; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(V271,jvj+68,V272)*/
V272=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V272; pile[WZ2]=1645; 
(*f[42])( );     /*SRA1(135,V272,1645,V273)*/
V273=pile[WZ3]; 
pile[v[22]]=V273; pile[WZ1]=jvj+67; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(V273,jvj+67,V274)*/
V274=pile[WZ2]; 
pile[v[22]]=V274; pile[WZ1]=jvj+69; pile[WZ2]=jvj+66; 
(*f[642])( );     /*XM0(V274,jvj+69,jvj+66,J)*/
J=pile[WZ3]; 
goto l66;
l52:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+70)*/
pile[v[22]]=111; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,X,jvj+71)*/
pile[v[22]]=436; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(436,X,jvj+72)*/
pile[v[22]]=103; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(103,X,jvj+73)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=477; 
(*f[98])( );     /*SRA3(135,I,477,V263)*/
V263=pile[WZ3]; 
pile[v[22]]=V263; pile[WZ1]=jvj+71; 
(*f[344])( );if(v[102]) goto l31;     /*XX1(V263,jvj+71,V264)*/
V264=pile[WZ2]; 
pile[v[22]]=V264; pile[WZ1]=jvj+72; 
(*f[344])( );if(v[102]) goto l31;     /*XX1(V264,jvj+72,V265)*/
V265=pile[WZ2]; 
pile[v[22]]=V265; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V265,40,V266)*/
V266=pile[WZ2]; 
pile[v[22]]=V266; pile[WZ1]=jvj+73; 
(*f[223])( );if(v[102]) goto l31;     /*XX0(V266,jvj+73,V267)*/
V267=pile[WZ2]; 
pile[v[22]]=V267; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V267,41,V268)*/
V268=pile[WZ2]; 
pile[v[22]]=V268; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V268,61,V269)*/
V269=pile[WZ2]; 
pile[v[22]]=V269; pile[WZ1]=jvj+70; 
(*f[223])( );if(v[102]) goto l31;     /*XX0(V269,jvj+70,J)*/
J=pile[WZ2]; 
goto l66;
l53:pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=477; 
(*f[98])( );     /*SRA3(135,I,477,V289)*/
V289=pile[WZ3]; 
pile[v[22]]=V289; pile[WZ1]=jvj+71; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(V289,jvj+71,V290)*/
V290=pile[WZ2]; 
pile[v[22]]=V290; pile[WZ1]=jvj+72; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(V290,jvj+72,V291)*/
V291=pile[WZ2]; 
pile[v[22]]=V291; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V291,58,V292)*/
V292=pile[WZ2]; 
pile[v[22]]=V292; pile[WZ1]=jvj+70; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V292,jvj+70,J)*/
J=pile[WZ2]; 
goto l66;
l54:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(160,X,jvj+74)*/
pile[v[22]]=111; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,X,jvj+75)*/
pile[v[22]]=102; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+76)*/
pile[v[22]]=103; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+77)*/
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=895; 
(*f[42])( );     /*SRA1(135,I,895,V254)*/
V254=pile[WZ3]; 
pile[v[22]]=V254; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V254,123,V255)*/
V255=pile[WZ2]; 
pile[v[22]]=V255; pile[WZ1]=jvj+75; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(V255,jvj+75,V256)*/
V256=pile[WZ2]; 
pile[v[22]]=V256; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V256,32,V257)*/
V257=pile[WZ2]; 
pile[v[22]]=V257; pile[WZ1]=jvj+74; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(V257,jvj+74,V258)*/
V258=pile[WZ2]; 
pile[v[22]]=V258; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V258,32,V259)*/
V259=pile[WZ2]; 
pile[v[22]]=V259; pile[WZ1]=jvj+76; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(V259,jvj+76,V260)*/
V260=pile[WZ2]; 
pile[v[22]]=V260; pile[WZ1]=jvj+77; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(V260,jvj+77,V261)*/
V261=pile[WZ2]; 
pile[v[22]]=V261; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V261,125,J)*/
J=pile[WZ2]; 
goto l66;
l55:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+78)*/
pile[v[22]]=103; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,X,jvj+79)*/
pile[v[22]]=111; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,X,jvj+80)*/
pile[v[22]]=107; pile[WZ2]=jvj+81; 
(*f[33])( );     /*FNDE0(107,X,jvj+81)*/
pile[v[22]]=I; pile[WZ1]=jvj+80; 
(*f[344])( );if(v[102]) goto l58;     /*XX1(I,jvj+80,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=V221; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V221,58,V222)*/
V222=pile[WZ2]; 
pile[v[22]]=V222; pile[WZ1]=jvj+81; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V222,jvj+81,44,V223)*/
V223=pile[WZ3]; 
pile[v[22]]=V223; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V223,61,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=V224; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V224,62,V225)*/
V225=pile[WZ2]; 
pile[v[22]]=V225; pile[WZ1]=jvj+79; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V225,jvj+79,V226)*/
V226=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V226; pile[WZ2]=1002; 
(*f[42])( );     /*SRA1(135,V226,1002,V227)*/
V227=pile[WZ3]; 
pile[v[22]]=V227; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V227,58,V228)*/
V228=pile[WZ2]; 
pile[v[22]]=V228; pile[WZ1]=jvj+78; 
(*f[223])( );if(v[102]) goto l58;     /*XX0(V228,jvj+78,V52)*/
V52=pile[WZ2]; 
V51=incon;
pile[v[22]]=1219; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1219,X,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+16,jvj+17)*/
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=1219; 
(*f[42])( );     /*SRA1(135,V52,1219,V218)*/
V218=pile[WZ3]; 
pile[v[22]]=V218; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V218,58,V219)*/
V219=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V219; pile[WZ2]=jvj+17; 
(*f[42])( );     /*SRA1(135,V219,jvj+17,V51)*/
V51=pile[WZ3]; 
goto l56;
l60:if((x[jvj+27]!=566)) goto l63;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(102,X,jvj+88)*/
pile[v[22]]=103; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(103,X,jvj+89)*/
pile[v[22]]=628; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(628,X,jvj+18)*/
V59=incon;
pile[v[22]]=162; pile[WZ1]=jvj+18; 
(*f[219])( );if(v[102]) goto l22;     /*FNDC2(162,jvj+18,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=V56; 
(*f[38])( );     /*SPC0(I,V56,V59)*/
V59=pile[WZ2]; 
goto l23;
l63:pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l65;     /*FNDC1(140,X,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=1687; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1687,X,jvj+24)*/
pile[v[22]]=V134; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V134,I,JK)*/
JK=pile[WZ2]; 
V135=incon;
if((x[jvj+24]!=0)) goto l33;
V135=JK;
goto l64;
l65:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
