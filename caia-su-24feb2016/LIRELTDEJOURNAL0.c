#include "dx.h"
void LIRELTDEJOURNAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V2=0,V1=0,V4=0,V3=0,V7=0,V8=0,V9=0,V10=0,V133=0,V132=0,V135=0,V136=0,V138=0,V139=0,V141=0,V142=0,V19=0,V13=0,V12=0,A=0,V146=0,V147=0,V148=0,V14=0,V151=0,V152=0,V153=0,V16=0,K=0,V25=0,V155=0,V156=0,V157=0,V24=0,V160=0,V161=0,V162=0,V26=0,KK=0,V36=0,V35=0,V45=0,V46=0,V44=0,V203=0,V204=0,V206=0,V207=0,V43=0,V65=0,V48=0,AA=0,V50=0,V213=0,V214=0,V215=0,V216=0,V218=0,V219=0,V51=0,F=0,FF=0,V222=0,V223=0,V224=0,V225=0,V227=0,V228=0,V53=0,B=0,BB=0,V231=0,V232=0,V233=0,V234=0,V236=0,V237=0,V55=0,C=0,CC=0,V240=0,V241=0,V242=0,V243=0,V245=0,V246=0,V57=0,V249=0,V250=0,V251=0,D=0,V252=0,V254=0,DD=0,V255=0,V61=0,V59=0,E=0,EE=0,V258=0,V259=0,V260=0,V261=0,V263=0,V264=0,V63=0,V49=0,V100=0,V84=0,V90=0,V89=0,V85=0,V275=0,V91=0,V102=0,V86=0,V94=0,V93=0,V104=0,V87=0,V95=0,V88=0,V280=0,V97=0,V284=0,V282=0,V110=0,V287=0,V285=0,V112=0,V290=0,V288=0,V114=0,V292=0,V123=0,V122=0,V294=0,V124=0,V212=0,V210=0,V211=0,V129=0,V295=0,V296=0,V297=0,V298=0,V39=0,V40=0,V41=0,V189=0,V190=0,V191=0,V192=0,V194=0,V195=0,V196=0,V197=0,V199=0,V200=0,V201=0,V30=0,V31=0,V32=0,V33=0,V34=0,V164=0,V165=0,V166=0,V168=0,V169=0,V170=0,V171=0,V173=0,V174=0,V175=0,V176=0,V178=0,V179=0,V180=0,V181=0,V183=0,V184=0,V185=0,V106=0,V281=0,V82=0,V269=0,V267=0,V268=0,V270=0;
int H;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=23;
if(v[0]>99700) (*f[6])( );

H=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=941; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(941,H,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=942; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(942,H,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=943; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(943,H,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(117,H,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(109,H,jvj+2)*/
V133=x[jvj+2];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(10,0,42,V132)*/
V132=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V133; pile[WZ2]=V132; 
(*f[39])( );     /*SDX0(20,V133,V132,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=163; pile[WZ1]=H; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,H,V)*/
V=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V2,V,V1)*/
V1=pile[WZ2]; 
l3:pile[v[22]]=41; pile[WZ1]=V10; pile[WZ2]=V1; 
(*f[39])( );     /*SDX0(41,V10,V1,V4)*/
V4=pile[WZ3]; 
V3=incon;
pile[v[22]]=860; pile[WZ1]=H; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(860,H,jvj+1)*/
if((x[jvj+1]==530)) goto l2;
pile[v[22]]=135; pile[WZ1]=V4; 
(*f[42])( );     /*SRA1(135,V4,jvj+1,V3)*/
V3=pile[WZ3]; 
l4:pile[v[22]]=V3; pile[WZ1]=(-6740); 
(*f[37])( );     /*SRA0(V3,(-6740),V135)*/
V135=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V9; pile[WZ2]=V135; 
(*f[39])( );     /*SDX0(41,V9,V135,V136)*/
V136=pile[WZ3]; 
pile[v[22]]=V136; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V136,45,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=V138; pile[WZ1]=V8; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V138,V8,41,V139)*/
V139=pile[WZ3]; 
pile[v[22]]=V139; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V139,45,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=V141; pile[WZ1]=V7; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V141,V7,41,V142)*/
V142=pile[WZ3]; 
pile[v[22]]=V142; 
(*f[40])( );     /*SLG0(V142)*/
l63:pile[v[22]]=1048; pile[WZ1]=H; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(1048,H,jvj+17)*/
V212=x[jvj+17];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1048; 
(*f[42])( );     /*SRA1(135,0,1048,V210)*/
V210=pile[WZ3]; 
pile[v[22]]=V210; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V210,58,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V212; pile[WZ2]=V211; 
(*f[39])( );     /*SDX0(20,V212,V211,V44)*/
V44=pile[WZ3]; 
V43=incon;
pile[v[22]]=204; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(204,H,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=1117; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1117,H,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V44,(-9813),V203)*/
V203=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V45; pile[WZ2]=V203; 
(*f[39])( );     /*SDX0(41,V45,V203,V204)*/
V204=pile[WZ3]; 
pile[v[22]]=V204; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V204,40,V206)*/
V206=pile[WZ2]; 
pile[v[22]]=V206; pile[WZ1]=V46; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V206,V46,41,V207)*/
V207=pile[WZ3]; 
pile[v[22]]=V207; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V207,41,V43)*/
V43=pile[WZ2]; 
l64:pile[v[22]]=V43; 
(*f[40])( );     /*SLG0(V43)*/
l65:pile[v[22]]=1119; pile[WZ1]=H; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(1119,H,jvj+18)*/
if((x[jvj+18]!=68)) goto l67;
pile[v[22]]=667; 
(*f[26])( );if(v[102]) goto l67;     /*FNDC0(667,H,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1119; 
(*f[42])( );     /*SRA1(135,0,1119,V295)*/
V295=pile[WZ3]; 
pile[WZ1]=V295; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V295,876,V296)*/
V296=pile[WZ3]; 
pile[v[22]]=V296; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V296,(-9543),V297)*/
V297=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V129; pile[WZ2]=V297; 
(*f[39])( );     /*SDX0(41,V129,V297,V298)*/
V298=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V298; pile[WZ2]=154; 
(*f[42])( );     /*SRA1(135,V298,154,V123)*/
V123=pile[WZ3]; 
V122=incon;
pile[v[22]]=195; pile[WZ1]=H; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(195,H,jvj+15)*/
if((x[jvj+15]!=0)) goto l60;
V122=V123;
l61:V124=incon;
pile[v[22]]=1049; pile[WZ1]=H; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1049,H,jvj+16)*/
if((x[jvj+16]!=0)) goto l62;
V124=V122;
l66:pile[v[22]]=V124; 
(*f[40])( );     /*SLG0(V124)*/
l67:pile[v[22]]=935; pile[WZ1]=H; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(935,H,jvj+3)*/
pile[v[22]]=135; pile[WZ1]=0; 
(*f[42])( );     /*SRA1(135,0,jvj+3,V13)*/
V13=pile[WZ3]; 
V12=incon;
if(x[jvj+3]!=936&&x[jvj+3]!=493&&x[jvj+3]!=876) goto l5;
pile[v[22]]=jvj+3; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(jvj+3,H,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V19; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(41,V19,V13,V12)*/
V12=pile[WZ3]; 
l6:V14=incon;
pile[v[22]]=1005; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1005,H,A)*/
A=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V12,44,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V146; pile[WZ2]=1005; 
(*f[42])( );     /*SRA1(135,V146,1005,V147)*/
V147=pile[WZ3]; 
pile[v[22]]=V147; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V147,61,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=A; pile[WZ2]=V148; 
(*f[39])( );     /*SDX0(41,A,V148,V14)*/
V14=pile[WZ3]; 
l8:V16=incon;
pile[v[22]]=1124; pile[WZ1]=H; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1124,H,jvj+4)*/
pile[v[22]]=V14; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V14,44,V151)*/
V151=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V151; pile[WZ2]=1124; 
(*f[42])( );     /*SRA1(135,V151,1124,V152)*/
V152=pile[WZ3]; 
pile[v[22]]=V152; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V152,61,V153)*/
V153=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V153; pile[WZ2]=jvj+4; 
(*f[42])( );     /*SRA1(135,V153,jvj+4,V16)*/
V16=pile[WZ3]; 
l68:pile[v[22]]=V16; 
(*f[40])( );     /*SLG0(V16)*/
l69:pile[v[22]]=860; pile[WZ1]=H; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(860,H,jvj+19)*/
if((x[jvj+19]!=954)) goto l71;
pile[v[22]]=695; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(695,H,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(493,H,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(936,H,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=954; 
(*f[42])( );     /*SRA1(135,0,954,V189)*/
V189=pile[WZ3]; 
pile[WZ1]=V189; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V189,936,V190)*/
V190=pile[WZ3]; 
pile[v[22]]=V190; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V190,58,V191)*/
V191=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V41; pile[WZ2]=V191; 
(*f[39])( );     /*SDX0(41,V41,V191,V192)*/
V192=pile[WZ3]; 
pile[v[22]]=V192; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V192,44,V194)*/
V194=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V194; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V194,493,V195)*/
V195=pile[WZ3]; 
pile[v[22]]=V195; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V195,58,V196)*/
V196=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V40; pile[WZ2]=V196; 
(*f[39])( );     /*SDX0(41,V40,V196,V197)*/
V197=pile[WZ3]; 
pile[v[22]]=V197; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V197,44,V199)*/
V199=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V199; pile[WZ2]=695; 
(*f[42])( );     /*SRA1(135,V199,695,V200)*/
V200=pile[WZ3]; 
pile[v[22]]=V200; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V200,58,V36)*/
V36=pile[WZ2]; 
V35=incon;
pile[v[22]]=1015; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(1015,H,KK)*/
KK=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=KK; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(41,KK,V36,V35)*/
V35=pile[WZ3]; 
l70:pile[v[22]]=V35; pile[WZ1]=V39; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V35,V39,41,V201)*/
V201=pile[WZ3]; 
pile[v[22]]=V201; 
(*f[40])( );     /*SLG0(V201)*/
l71:if(x[jvj+19]!=1082&&x[jvj+19]!=336) goto l73;
V110=incon;
pile[v[22]]=1081; pile[WZ1]=H; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1081,H,jvj+12)*/
if((x[jvj+12]!=0)) goto l55;
V110=0;
l56:V112=incon;
pile[v[22]]=658; pile[WZ1]=H; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(658,H,jvj+13)*/
if((x[jvj+13]!=0)) goto l57;
V112=V110;
l58:V114=incon;
pile[v[22]]=1120; pile[WZ1]=H; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1120,H,jvj+14)*/
if((x[jvj+14]!=0)) goto l59;
V114=V112;
l72:pile[v[22]]=V114; 
(*f[40])( );     /*SLG0(V114)*/
l73:pile[v[22]]=1037; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(1037,H,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=977; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(977,H,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(876,H,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(493,H,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(936,H,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,0,936,V164)*/
V164=pile[WZ3]; 
pile[v[22]]=V164; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V164,58,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V34; pile[WZ2]=V165; 
(*f[39])( );     /*SDX0(41,V34,V165,V166)*/
V166=pile[WZ3]; 
pile[v[22]]=V166; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V166,44,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V168; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V168,493,V169)*/
V169=pile[WZ3]; 
pile[v[22]]=V169; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V169,58,V170)*/
V170=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V33; pile[WZ2]=V170; 
(*f[39])( );     /*SDX0(41,V33,V170,V171)*/
V171=pile[WZ3]; 
pile[v[22]]=V171; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V171,44,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V173; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V173,876,V174)*/
V174=pile[WZ3]; 
pile[v[22]]=V174; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V174,58,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V32; pile[WZ2]=V175; 
(*f[39])( );     /*SDX0(41,V32,V175,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=V176; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V176,44,V178)*/
V178=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V178; pile[WZ2]=977; 
(*f[42])( );     /*SRA1(135,V178,977,V179)*/
V179=pile[WZ3]; 
pile[v[22]]=V179; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V179,58,V180)*/
V180=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V31; pile[WZ2]=V180; 
(*f[39])( );     /*SDX0(41,V31,V180,V181)*/
V181=pile[WZ3]; 
pile[v[22]]=V181; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V181,44,V183)*/
V183=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V183; pile[WZ2]=1037; 
(*f[42])( );     /*SRA1(135,V183,1037,V184)*/
V184=pile[WZ3]; 
pile[v[22]]=V184; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V184,58,V185)*/
V185=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V30; pile[WZ2]=V185; 
(*f[39])( );     /*SDX0(41,V30,V185,V25)*/
V25=pile[WZ3]; 
V24=incon;
pile[v[22]]=927; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(927,H,K)*/
K=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V25,44,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V155; pile[WZ2]=927; 
(*f[42])( );     /*SRA1(135,V155,927,V156)*/
V156=pile[WZ3]; 
pile[v[22]]=V156; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V156,58,V157)*/
V157=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=K; pile[WZ2]=V157; 
(*f[39])( );     /*SDX0(41,K,V157,V24)*/
V24=pile[WZ3]; 
l11:V26=incon;
pile[v[22]]=506; pile[WZ1]=H; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(506,H,jvj+5)*/
pile[v[22]]=V24; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V24,44,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V160; pile[WZ2]=506; 
(*f[42])( );     /*SRA1(135,V160,506,V161)*/
V161=pile[WZ3]; 
pile[v[22]]=V161; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V161,58,V162)*/
V162=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V162; pile[WZ2]=jvj+5; 
(*f[42])( );     /*SRA1(135,V162,jvj+5,V26)*/
V26=pile[WZ3]; 
l74:pile[v[22]]=V26; 
(*f[40])( );     /*SLG0(V26)*/
l75:pile[v[22]]=1116; pile[WZ1]=H; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(1116,H,jvj+20)*/
l76:if((x[jvj+20]>0)) goto l77;
pile[v[22]]=1115; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l83;     /*FNDC0(1115,H,V82)*/
V82=pile[WZ2]; 
x[jvj+6]=994 ;z[jvj+6]=994;
l15:pile[v[22]]=120; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(120,jvj+6,jvj+7)*/
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+7,V65)*/
V65=pile[WZ2]; 
if((V65!=V82)) goto l16;
pile[v[22]]=1113; pile[WZ1]=H; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(1113,H,jvj+23)*/
V269=x[jvj+23];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1113; 
(*f[42])( );     /*SRA1(135,0,1113,V267)*/
V267=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V269; pile[WZ2]=V267; 
(*f[39])( );     /*SDX0(20,V269,V267,V268)*/
V268=pile[WZ3]; 
pile[v[22]]=V268; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V268,(-9813),V270)*/
V270=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V82; pile[WZ2]=V270; 
(*f[39])( );     /*SDX0(41,V82,V270,V50)*/
V50=pile[WZ3]; 
V49=incon;
if(x[jvj+23]==25||x[jvj+23]==1012) goto l45;
V51=incon;
pile[v[22]]=936; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(936,H,V48)*/
V48=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(936,jvj+7,AA)*/
AA=pile[WZ2]; 
if((V48<=((AA*11)/10)+2)&&(V48>=((AA*9)/10)-2)) goto l17;
pile[v[22]]=V50; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V50,44,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V213; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V213,936,V214)*/
V214=pile[WZ3]; 
pile[v[22]]=V214; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V214,58,V215)*/
V215=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V48; pile[WZ2]=V215; 
(*f[39])( );     /*SDX0(41,V48,V215,V216)*/
V216=pile[WZ3]; 
pile[v[22]]=V216; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V216,40,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=V218; pile[WZ1]=AA; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V218,AA,41,V219)*/
V219=pile[WZ3]; 
pile[v[22]]=V219; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V219,41,V51)*/
V51=pile[WZ2]; 
l17:if(V51==incon) goto l18;
l38:if(V51!=incon) goto l19;
l45:if(V49==incon) goto l46;
l81:if(V49!=incon) goto l82;
l83:v[0]=jvj; v[22]-=1; return;
l1:V1=V2;
goto l3;
l2:V3=V4;
goto l4;
l5:V12=V13;
goto l6;
l7:V14=V12;
goto l8;
l9:V16=V14;
goto l68;
l10:V24=V25;
goto l11;
l12:V26=V24;
goto l74;
l13:V35=V36;
goto l70;
l14:V43=V44;
goto l64;
l16:x[jvj+6]=x[jvj+7] ;z[jvj+6]=z[jvj+7];
goto l15;
l18:V51=V50;
goto l38;
l19:V53=incon;
pile[v[22]]=493; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(493,H,F)*/
F=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(493,jvj+7,FF)*/
FF=pile[WZ2]; 
if((F==FF)) goto l20;
pile[v[22]]=V51; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V51,44,V222)*/
V222=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V222; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V222,493,V223)*/
V223=pile[WZ3]; 
pile[v[22]]=V223; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V223,58,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=F; pile[WZ2]=V224; 
(*f[39])( );     /*SDX0(41,F,V224,V225)*/
V225=pile[WZ3]; 
pile[v[22]]=V225; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V225,40,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=V227; pile[WZ1]=FF; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V227,FF,41,V228)*/
V228=pile[WZ3]; 
pile[v[22]]=V228; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V228,41,V53)*/
V53=pile[WZ2]; 
l20:if(V53==incon) goto l21;
l39:if(V53!=incon) goto l22;
goto l45;
l21:V53=V51;
goto l39;
l22:V55=incon;
pile[v[22]]=876; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(876,H,B)*/
B=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(876,jvj+7,BB)*/
BB=pile[WZ2]; 
if((B==BB)) goto l23;
pile[v[22]]=V53; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V53,44,V231)*/
V231=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V231; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V231,876,V232)*/
V232=pile[WZ3]; 
pile[v[22]]=V232; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V232,58,V233)*/
V233=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=B; pile[WZ2]=V233; 
(*f[39])( );     /*SDX0(41,B,V233,V234)*/
V234=pile[WZ3]; 
pile[v[22]]=V234; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V234,40,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=V236; pile[WZ1]=BB; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V236,BB,41,V237)*/
V237=pile[WZ3]; 
pile[v[22]]=V237; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V237,41,V55)*/
V55=pile[WZ2]; 
l23:if(V55==incon) goto l24;
l40:if(V55!=incon) goto l25;
goto l45;
l24:V55=V53;
goto l40;
l25:V57=incon;
pile[v[22]]=977; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(977,H,C)*/
C=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(977,jvj+7,CC)*/
CC=pile[WZ2]; 
if((C==CC)) goto l26;
pile[v[22]]=V55; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V55,44,V240)*/
V240=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V240; pile[WZ2]=977; 
(*f[42])( );     /*SRA1(135,V240,977,V241)*/
V241=pile[WZ3]; 
pile[v[22]]=V241; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V241,58,V242)*/
V242=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=C; pile[WZ2]=V242; 
(*f[39])( );     /*SDX0(41,C,V242,V243)*/
V243=pile[WZ3]; 
pile[v[22]]=V243; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V243,40,V245)*/
V245=pile[WZ2]; 
pile[v[22]]=V245; pile[WZ1]=CC; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V245,CC,41,V246)*/
V246=pile[WZ3]; 
pile[v[22]]=V246; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V246,41,V57)*/
V57=pile[WZ2]; 
l26:if(V57==incon) goto l27;
l41:if(V57!=incon) goto l28;
goto l45;
l27:V57=V55;
goto l41;
l28:V59=incon;
pile[v[22]]=1037; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(1037,H,D)*/
D=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(1037,jvj+7,DD)*/
DD=pile[WZ2]; 
if((D<=((DD*11)/10)+2)&&(D>=((DD*9)/10)-2)) goto l33;
V61=incon;
if((D!=D)) goto l29;
if((DD!=DD)) goto l29;
if((D<=((DD*11)/10)+2)&&(D>=((DD*9)/10)-2)) goto l29;
pile[v[22]]=V57; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V57,44,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V249; pile[WZ2]=1037; 
(*f[42])( );     /*SRA1(135,V249,1037,V250)*/
V250=pile[WZ3]; 
pile[v[22]]=V250; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V250,58,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=D; pile[WZ2]=V251; 
(*f[39])( );     /*SDX0(41,D,V251,V252)*/
V252=pile[WZ3]; 
pile[v[22]]=V252; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V252,40,V254)*/
V254=pile[WZ2]; 
pile[v[22]]=V254; pile[WZ1]=DD; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V254,DD,41,V255)*/
V255=pile[WZ3]; 
pile[v[22]]=V255; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V255,41,V61)*/
V61=pile[WZ2]; 
l29:if(V61==incon) goto l30;
l31:if(V61!=incon) goto l32;
l33:if(V59==incon) goto l34;
l42:if(V59!=incon) goto l35;
goto l45;
l30:V61=V57;
goto l31;
l32:V59=V61;
goto l33;
l34:V59=V57;
goto l42;
l35:V63=incon;
pile[v[22]]=927; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(927,H,E)*/
E=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(927,jvj+7,EE)*/
EE=pile[WZ2]; 
if((E<=((EE*11)/10)+2)&&(E>=((EE*9)/10)-2)) goto l36;
pile[v[22]]=V59; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V59,44,V258)*/
V258=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V258; pile[WZ2]=927; 
(*f[42])( );     /*SRA1(135,V258,927,V259)*/
V259=pile[WZ3]; 
pile[v[22]]=V259; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V259,58,V260)*/
V260=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=E; pile[WZ2]=V260; 
(*f[39])( );     /*SDX0(41,E,V260,V261)*/
V261=pile[WZ3]; 
pile[v[22]]=V261; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V261,40,V263)*/
V263=pile[WZ2]; 
pile[v[22]]=V263; pile[WZ1]=EE; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V263,EE,41,V264)*/
V264=pile[WZ3]; 
pile[v[22]]=V264; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V264,41,V63)*/
V63=pile[WZ2]; 
l36:if(V63==incon) goto l37;
l43:if(V63!=incon) goto l44;
goto l45;
l37:V63=V59;
goto l43;
l44:V49=V63;
goto l45;
l46:V49=V50;
goto l81;
l47:V89=V90;
l48:V91=incon;
pile[v[22]]=447; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(447,jvj+8,jvj+9)*/
V85=x[jvj+9];
V275=V85;
pile[v[22]]=20; pile[WZ1]=V275; pile[WZ2]=V89; 
(*f[39])( );     /*SDX0(20,V275,V89,V91)*/
V91=pile[WZ3]; 
l79:pile[v[22]]=V91; pile[WZ1]=V106; 
(*f[38])( );     /*SPC0(V91,V106,V94)*/
V94=pile[WZ2]; 
V93=incon;
pile[v[22]]=332; pile[WZ1]=jvj+10; 
(*f[219])( );if(v[102]) goto l50;     /*FNDC2(332,jvj+10,V102)*/
V102=pile[WZ2]; 
V86=V102;
pile[v[22]]=V94; pile[WZ1]=V86; 
(*f[38])( );     /*SPC0(V94,V86,V93)*/
V93=pile[WZ2]; 
l51:V95=incon;
pile[v[22]]=515; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(515,jvj+8,V104)*/
V104=pile[WZ2]; 
V87=V104;
pile[v[22]]=V93; pile[WZ1]=V87; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V93,V87,41,V95)*/
V95=pile[WZ3]; 
l53:V97=incon;
pile[v[22]]=459; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(459,jvj+8,jvj+11)*/
V88=x[jvj+11];
V280=V88;
pile[v[22]]=20; pile[WZ1]=V280; pile[WZ2]=V95; 
(*f[39])( );     /*SDX0(20,V280,V95,V97)*/
V97=pile[WZ3]; 
l80:pile[v[22]]=V97; 
(*f[40])( );     /*SLG0(V97)*/
l78:x[jvj+20]=t[x[jvj+20]];
goto l76;
l49:V91=V89;
goto l79;
l50:V93=V94;
goto l51;
l52:V95=V93;
goto l53;
l54:V97=V95;
goto l80;
l55:V284=x[jvj+12];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1081; 
(*f[42])( );     /*SRA1(135,0,1081,V282)*/
V282=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V284; pile[WZ2]=V282; 
(*f[39])( );     /*SDX0(23,V284,V282,V110)*/
V110=pile[WZ3]; 
goto l56;
l57:V287=x[jvj+13];
pile[v[22]]=135; pile[WZ1]=V110; pile[WZ2]=658; 
(*f[42])( );     /*SRA1(135,V110,658,V285)*/
V285=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V287; pile[WZ2]=V285; 
(*f[39])( );     /*SDX0(23,V287,V285,V112)*/
V112=pile[WZ3]; 
goto l58;
l59:V290=x[jvj+14];
pile[v[22]]=135; pile[WZ1]=V112; pile[WZ2]=1120; 
(*f[42])( );     /*SRA1(135,V112,1120,V288)*/
V288=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V290; pile[WZ2]=V288; 
(*f[39])( );     /*SDX0(23,V290,V288,V114)*/
V114=pile[WZ3]; 
goto l72;
l60:V292=x[jvj+15];
pile[v[22]]=23; pile[WZ1]=V292; pile[WZ2]=V123; 
(*f[39])( );     /*SDX0(23,V292,V123,V122)*/
V122=pile[WZ3]; 
goto l61;
l62:V294=x[jvj+16];
pile[v[22]]=23; pile[WZ1]=V294; pile[WZ2]=V122; 
(*f[39])( );     /*SDX0(23,V294,V122,V124)*/
V124=pile[WZ3]; 
goto l66;
l77:x[jvj+8]=s[x[jvj+20]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+20];
pile[v[22]]=145; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(145,jvj+8,jvj+10)*/
pile[v[22]]=331; pile[WZ1]=jvj+10; 
(*f[219])( );if(v[102]) goto l78;     /*FNDC2(331,jvj+10,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=122; pile[WZ1]=jvj+8; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(122,jvj+8,jvj+21)*/
pile[v[22]]=158; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(158,jvj+8,jvj+22)*/
pile[v[22]]=135; pile[WZ1]=0; 
(*f[42])( );     /*SRA1(135,0,jvj+22,V281)*/
V281=pile[WZ3]; 
pile[WZ1]=V281; pile[WZ2]=jvj+21; 
(*f[42])( );     /*SRA1(135,V281,jvj+21,V90)*/
V90=pile[WZ3]; 
V89=incon;
pile[v[22]]=510; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(510,jvj+8,V100)*/
V100=pile[WZ2]; 
V84=V100;
pile[v[22]]=41; pile[WZ1]=V84; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(41,V84,V90,V89)*/
V89=pile[WZ3]; 
goto l48;
l82:pile[v[22]]=V49; 
(*f[40])( );     /*SLG0(V49)*/
goto l83;
}
