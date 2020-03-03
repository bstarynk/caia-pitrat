#include "dx.h"
void SORBL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,BLL=0,V3=0,V5=0,V130=0,V125=0,V126=0,V127=0,V128=0,V129=0,V131=0,V133=0,V132=0,V134=0,V135=0,J=0,V136=0,V138=0,M=0,V139=0,V141=0,A=0,V142=0,V9=0,V10=0,V148=0,V149=0,V150=0,V151=0,V152=0,V144=0,V147=0,V145=0,V146=0,V156=0,V153=0,V154=0,V155=0,V157=0,JJ=0,V24=0,V29=0,V163=0,V166=0,V169=0,V159=0,V161=0,V162=0,V164=0,V165=0,V167=0,V168=0,V172=0,V158=0,V170=0,V171=0,V176=0,V173=0,V174=0,V175=0,V42=0,V179=0,V177=0,V178=0,V55=0,V47=0,V50=0,V181=0,V180=0,YY=0,V36=0,V183=0,V182=0,ZZ=0,V37=0,V186=0,V184=0,V185=0,TT=0,V38=0,V188=0,V187=0,PP=0,V39=0,V190=0,V189=0,V194=0,V191=0,V192=0,V193=0,V203=0,V200=0,V201=0,V202=0,V86=0,V214=0,V210=0,V211=0,V212=0,V213=0,V215=0,V82=0,V207=0,V204=0,V205=0,V206=0,V208=0,V209=0,V219=0,V216=0,V217=0,V218=0,V220=0,V221=0,V222=0,V223=0,V224=0,V225=0,V229=0,V226=0,V227=0,V228=0,V197=0,V198=0,V199=0,V93=0,V76=0,V75=0,V233=0,V231=0,V232=0,V237=0,V97=0,V234=0,V235=0,V236=0,V73=0,V295=0,V258=0,V257=0,V109=0,V262=0,V259=0,V261=0,V104=0,V250=0,V246=0,V247=0,V248=0,V249=0,V251=0,V252=0,V253=0,V254=0,V255=0,V256=0,V101=0,V238=0,V239=0,V240=0,V241=0,V243=0,V244=0,V245=0,V265=0,V263=0,V264=0,V112=0,V267=0,V266=0,V271=0,V268=0,V269=0,V270=0,V275=0,V272=0,V273=0,V274=0,V279=0,V276=0,V277=0,V278=0,V196=0,V195=0,V118=0,V119=0;
int K,BL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=90;
x[jvj+1]=10323;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==115&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; BL=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V15=x[BL];
BLL=V15;
if((BLL<=sepbase)) goto l81;
if((BLL<=sepnouv)) goto l11;
if((BLL>sepfacts)) goto l11;
l81:x[jvj+83]=vo[20];z[jvj+83]=vz[20];
pile[v[22]]=jvj+83; pile[WZ1]=1123; pile[WZ2]=BL; 
(*f[35])( );     /*CHGC1(jvj+83,1123,BL)*/
if((BLL<=sepexp)) goto l83;
if((BLL>sepsimp)) goto l83;
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(565,BL,jvj+84)*/
l82:if((x[jvj+84]<=0)) goto l83;
x[jvj+85]=s[x[jvj+84]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+84];
V196=x[jvj+85];
pile[v[22]]=20; pile[WZ1]=V196; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V196,0,V195)*/
V195=pile[WZ3]; 
pile[v[22]]=V195; 
(*f[40])( );     /*SLG0(V195)*/
pile[v[22]]=jvj+85; 
(*f[341])( );     /*SORCMT0(jvj+85)*/
x[jvj+84]=t[x[jvj+84]];
goto l82;
l4:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=163; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+6,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=V9; 
(*f[331])( );     /*PLUE3(jvj+7,V9)*/
l5:x[jvj+5]=t[x[jvj+5]];
l3:if((x[jvj+5]>0)) goto l4;
if((x[jvj+7]==0)) goto l9;
V147=x[jvj+7];
pile[v[22]]=0; pile[WZ1]=(-712); 
(*f[37])( );     /*SRA0(0,(-712),V145)*/
V145=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V147; pile[WZ2]=V145; 
(*f[39])( );     /*SDX0(23,V147,V145,V146)*/
V146=pile[WZ3]; 
pile[v[22]]=V146; 
(*f[40])( );     /*SLG0(V146)*/
l9:pile[v[22]]=1923; pile[WZ1]=BL; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1923,BL,jvj+9)*/
if((x[jvj+9]==0)) goto l10;
V156=x[jvj+9];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1923; 
(*f[42])( );     /*SRA1(135,0,1923,V153)*/
V153=pile[WZ3]; 
pile[v[22]]=V153; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V153,58,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V156; pile[WZ2]=V154; 
(*f[39])( );     /*SDX0(23,V156,V154,V155)*/
V155=pile[WZ3]; 
pile[v[22]]=V155; 
(*f[40])( );     /*SLG0(V155)*/
l10:pile[v[22]]=BL; 
(*f[341])( );     /*SORCMT0(BL)*/
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V157)*/
V157=pile[WZ2]; 
pile[v[22]]=V157; 
(*f[40])( );     /*SLG0(V157)*/
goto l81;
l8:pile[v[22]]=0; pile[WZ1]=(-2268); 
(*f[37])( );     /*SRA0(0,(-2268),V144)*/
V144=pile[WZ2]; 
pile[v[22]]=V144; 
(*f[40])( );     /*SLG0(V144)*/
l2:x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=470; pile[WZ1]=BL; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(470,BL,jvj+5)*/
goto l3;
l11:
(*f[275])( );     /*DATE2(M,A,J)*/
M=pile[v[22]]; A=pile[WZ1]; J=pile[WZ2]; 
x[jvj+3]=vo[20];z[jvj+3]=vz[20];
pile[v[22]]=332; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l6;     /*FNDC2(332,jvj+3,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=331; 
(*f[219])( );if(v[102]) goto l6;     /*FNDC2(331,jvj+3,V5)*/
V5=pile[WZ2]; 
V130=x[BL];
pile[v[22]]=0; pile[WZ1]=V5; 
(*f[38])( );     /*SPC0(0,V5,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=V125; pile[WZ1]=V3; 
(*f[38])( );     /*SPC0(V125,V3,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=33; pile[WZ1]=V126; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(33,V126,42,V127)*/
V127=pile[WZ3]; 
pile[v[22]]=4; pile[WZ1]=V127; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(4,V127,32,V128)*/
V128=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V130; pile[WZ2]=V128; 
(*f[39])( );     /*SDX0(20,V130,V128,V129)*/
V129=pile[WZ3]; 
pile[v[22]]=4; pile[WZ1]=V129; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(4,V129,32,V131)*/
V131=pile[WZ3]; 
V133=75-V131;
pile[v[22]]=V133; pile[WZ1]=V131; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V133,V131,42,V132)*/
V132=pile[WZ3]; 
pile[v[22]]=V132; 
(*f[40])( );     /*SLG0(V132)*/
pile[v[22]]=0; pile[WZ1]=(-710); 
(*f[37])( );     /*SRA0(0,(-710),V134)*/
V134=pile[WZ2]; 
pile[v[22]]=V134; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V134,58,V135)*/
V135=pile[WZ2]; 
pile[v[22]]=V135; pile[WZ1]=J; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V135,J,41,V136)*/
V136=pile[WZ3]; 
pile[v[22]]=V136; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V136,45,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=V138; pile[WZ1]=M; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V138,M,41,V139)*/
V139=pile[WZ3]; 
pile[v[22]]=V139; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V139,45,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=V141; pile[WZ1]=A; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V141,A,41,V142)*/
V142=pile[WZ3]; 
pile[v[22]]=V142; 
(*f[40])( );     /*SLG0(V142)*/
l6:pile[v[22]]=905; pile[WZ1]=BL; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(905,BL,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=905; 
(*f[42])( );     /*SRA1(135,0,905,V148)*/
V148=pile[WZ3]; 
pile[v[22]]=V148; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V148,58,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=V149; pile[WZ1]=V10; 
(*f[37])( );     /*SRA0(V149,V10,V150)*/
V150=pile[WZ2]; 
pile[v[22]]=V150; 
(*f[40])( );     /*SLG0(V150)*/
l7:if((BLL>sepnouv)) goto l2;
pile[v[22]]=708; pile[WZ1]=BL; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(708,BL,jvj+8)*/
if(x[jvj+8]!=729&&x[jvj+8]!=259) goto l1;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=345; 
(*f[42])( );     /*SRA1(135,0,345,V151)*/
V151=pile[WZ3]; 
pile[WZ1]=V151; pile[WZ2]=jvj+8; 
(*f[42])( );     /*SRA1(135,V151,jvj+8,V152)*/
V152=pile[WZ3]; 
pile[v[22]]=V152; 
(*f[40])( );     /*SLG0(V152)*/
l1:pile[v[22]]=708; pile[WZ1]=BL; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(708,BL,jvj+4)*/
goto l2;
l14:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=0; pile[WZ1]=jvj+11; 
(*f[223])( );if(v[102]) goto l15;     /*XX0(0,jvj+11,JJ)*/
JJ=pile[WZ2]; 
pile[v[22]]=JJ; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(JJ,3)*/
pile[v[22]]=jvj+11; 
(*f[341])( );     /*SORCMT0(jvj+11)*/
l15:x[jvj+10]=t[x[jvj+10]];
l13:if((x[jvj+10]>0)) goto l14;
pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(147,BL,jvj+21)*/
V172=x[jvj+21];
pile[v[22]]=0; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(0,32,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=V158; 
(*f[40])( );     /*SLG0(V158)*/
pile[v[22]]=365; pile[WZ1]=BL; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(365,BL,jvj+18)*/
l20:if((x[jvj+18]>0)) goto l21;
pile[v[22]]=0; pile[WZ1]=(-714); 
(*f[37])( );     /*SRA0(0,(-714),V170)*/
V170=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V172; pile[WZ2]=V170; 
(*f[39])( );     /*SDX0(23,V172,V170,V171)*/
V171=pile[WZ3]; 
pile[v[22]]=V171; 
(*f[40])( );     /*SLG0(V171)*/
l87:if((BLL<=sepfacts)) goto l88;
if((BLL>sephist)) goto l88;
pile[v[22]]=102; pile[WZ1]=BL; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(102,BL,jvj+60)*/
pile[v[22]]=1923; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(1923,BL,jvj+50)*/
if((x[jvj+50]==0)) goto l54;
V203=x[jvj+50];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1923; 
(*f[42])( );     /*SRA1(135,0,1923,V200)*/
V200=pile[WZ3]; 
pile[v[22]]=V200; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V200,58,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V203; pile[WZ2]=V201; 
(*f[39])( );     /*SDX0(23,V203,V201,V202)*/
V202=pile[WZ3]; 
pile[v[22]]=V202; 
(*f[40])( );     /*SLG0(V202)*/
l54:pile[v[22]]=1422; pile[WZ1]=BL; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(1422,BL,jvj+57)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1422; 
(*f[42])( );     /*SRA1(135,0,1422,V220)*/
V220=pile[WZ3]; 
pile[v[22]]=V220; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V220,61,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V221; pile[WZ2]=jvj+57; 
(*f[42])( );     /*SRA1(135,V221,jvj+57,V222)*/
V222=pile[WZ3]; 
pile[v[22]]=V222; 
(*f[40])( );     /*SLG0(V222)*/
l55:pile[v[22]]=1423; pile[WZ1]=BL; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(1423,BL,jvj+58)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1423; 
(*f[42])( );     /*SRA1(135,0,1423,V223)*/
V223=pile[WZ3]; 
pile[v[22]]=V223; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V223,61,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V224; pile[WZ2]=jvj+58; 
(*f[42])( );     /*SRA1(135,V224,jvj+58,V225)*/
V225=pile[WZ3]; 
pile[v[22]]=V225; 
(*f[40])( );     /*SLG0(V225)*/
l56:pile[v[22]]=970; pile[WZ1]=BL; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(970,BL,jvj+59)*/
V229=x[jvj+59];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=970; 
(*f[42])( );     /*SRA1(135,0,970,V226)*/
V226=pile[WZ3]; 
pile[v[22]]=V226; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V226,58,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V229; pile[WZ2]=V227; 
(*f[39])( );     /*SDX0(20,V229,V227,V228)*/
V228=pile[WZ3]; 
pile[v[22]]=V228; 
(*f[40])( );     /*SLG0(V228)*/
l57:pile[v[22]]=0; pile[WZ1]=(-712); 
(*f[37])( );     /*SRA0(0,(-712),V197)*/
V197=pile[WZ2]; 
pile[v[22]]=V197; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V197,58,V198)*/
V198=pile[WZ2]; 
pile[v[22]]=V198; pile[WZ1]=jvj+60; 
(*f[344])( );if(v[102]) goto l62;     /*XX1(V198,jvj+60,V199)*/
V199=pile[WZ2]; 
pile[v[22]]=V199; 
(*f[40])( );     /*SLG0(V199)*/
pile[v[22]]=1782; pile[WZ1]=BL; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(1782,BL,jvj+53)*/
if((x[jvj+53]!=68)) goto l51;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1782; 
(*f[42])( );     /*SRA1(135,0,1782,V215)*/
V215=pile[WZ3]; 
pile[v[22]]=V215; 
(*f[40])( );     /*SLG0(V215)*/
l51:pile[v[22]]=163; pile[WZ1]=658; 
(*f[44])( );if(v[102]) goto l52;     /*FNDC1(163,658,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=658; pile[WZ1]=BL; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(658,BL,jvj+54)*/
if((x[jvj+54]==0)) goto l52;
V207=x[jvj+54];
pile[v[22]]=0; pile[WZ1]=V82; 
(*f[37])( );     /*SRA0(0,V82,V204)*/
V204=pile[WZ2]; 
pile[v[22]]=V204; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V204,58,V205)*/
V205=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V207; pile[WZ2]=V205; 
(*f[39])( );     /*SDX0(23,V207,V205,V206)*/
V206=pile[WZ3]; 
pile[v[22]]=V206; 
(*f[40])( );     /*SLG0(V206)*/
l52:pile[v[22]]=1420; pile[WZ1]=BL; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(1420,BL,jvj+55)*/
if((x[jvj+55]==0)) goto l53;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1420; 
(*f[42])( );     /*SRA1(135,0,1420,V208)*/
V208=pile[WZ3]; 
pile[v[22]]=V208; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V208,58,V209)*/
V209=pile[WZ2]; 
pile[v[22]]=V209; 
(*f[40])( );     /*SLG0(V209)*/
l49:if((x[jvj+55]<=0)) goto l53;
x[jvj+51]=s[x[jvj+55]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+55];
pile[v[22]]=110; pile[WZ1]=jvj+51; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(110,jvj+51,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=102; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+51,jvj+52)*/
V214=x[jvj+52];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=110; 
(*f[42])( );     /*SRA1(135,0,110,V210)*/
V210=pile[WZ3]; 
pile[v[22]]=V210; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V210,58,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=V211; pile[WZ1]=V86; 
(*f[37])( );     /*SRA0(V211,V86,V212)*/
V212=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V214; pile[WZ2]=V212; 
(*f[39])( );     /*SDX0(20,V214,V212,V213)*/
V213=pile[WZ3]; 
pile[v[22]]=V213; 
(*f[40])( );     /*SLG0(V213)*/
l50:x[jvj+55]=t[x[jvj+55]];
goto l49;
l16:x[jvj+17]=x[jvj+12] ;z[jvj+17]=z[jvj+12];
l19:pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+17)*/
x[jvj+86]=t[x[jvj+86]];
l17:if((x[jvj+86]>0)) goto l18;
pile[v[22]]=223; pile[WZ1]=jvj+14; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(223,jvj+14,jvj+19)*/
pile[v[22]]=222; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(222,jvj+14,jvj+20)*/
V163=x[jvj+16];
V166=x[jvj+20];
V169=x[jvj+19];
pile[v[22]]=41; pile[WZ1]=V29; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V29,0,V159)*/
V159=pile[WZ3]; 
pile[v[22]]=V159; pile[WZ1]=(-711); 
(*f[37])( );     /*SRA0(V159,(-711),V161)*/
V161=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V163; pile[WZ2]=V161; 
(*f[39])( );     /*SDX0(23,V163,V161,V162)*/
V162=pile[WZ3]; 
pile[v[22]]=V162; pile[WZ1]=(-712); 
(*f[37])( );     /*SRA0(V162,(-712),V164)*/
V164=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V166; pile[WZ2]=V164; 
(*f[39])( );     /*SDX0(23,V166,V164,V165)*/
V165=pile[WZ3]; 
pile[v[22]]=V165; pile[WZ1]=(-713); 
(*f[37])( );     /*SRA0(V165,(-713),V167)*/
V167=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V169; pile[WZ2]=V167; 
(*f[39])( );     /*SDX0(23,V169,V167,V168)*/
V168=pile[WZ3]; 
pile[v[22]]=V168; 
(*f[40])( );     /*SLG0(V168)*/
l22:x[jvj+18]=t[x[jvj+18]];
goto l20;
l18:x[jvj+12]=s[x[jvj+86]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+86];
x[jvj+17]=incon;
V24=x[jvj+12];
if((V24<=sepbloc)) goto l16;
if((V24>sepnouv)) goto l16;
pile[v[22]]=498; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(498,jvj+12,jvj+13)*/
x[jvj+17]=x[jvj+13] ;z[jvj+17]=z[jvj+13];
goto l19;
l21:x[jvj+14]=s[x[jvj+18]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+18];
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+14,V29)*/
V29=pile[WZ2]; 
x[jvj+16]=0 ;z[jvj+16]=0;
pile[v[22]]=313; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(313,jvj+14,jvj+15)*/
x[jvj+86]=x[jvj+15] ;z[jvj+86]=z[jvj+15];
goto l17;
l24:x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=163; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(163,jvj+24,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=jvj+25; pile[WZ1]=V42; 
(*f[331])( );     /*PLUE3(jvj+25,V42)*/
l25:x[jvj+23]=t[x[jvj+23]];
l23:if((x[jvj+23]>0)) goto l24;
if((x[jvj+25]==0)) goto l28;
V179=x[jvj+25];
pile[v[22]]=0; pile[WZ1]=(-712); 
(*f[37])( );     /*SRA0(0,(-712),V177)*/
V177=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V179; pile[WZ2]=V177; 
(*f[39])( );     /*SDX0(23,V179,V177,V178)*/
V178=pile[WZ3]; 
pile[v[22]]=V178; 
(*f[40])( );     /*SLG0(V178)*/
l28:pile[v[22]]=448; pile[WZ1]=BL; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(448,BL,jvj+35)*/
l29:if((x[jvj+35]>0)) goto l30;
pile[v[22]]=454; pile[WZ1]=BL; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(454,BL,jvj+38)*/
l34:if((x[jvj+38]>0)) goto l35;
pile[v[22]]=455; pile[WZ1]=BL; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(455,BL,jvj+41)*/
l38:if((x[jvj+41]>0)) goto l39;
pile[v[22]]=477; pile[WZ1]=BL; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(477,BL,jvj+44)*/
l42:if((x[jvj+44]>0)) goto l43;
pile[v[22]]=284; pile[WZ1]=BL; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(284,BL,jvj+47)*/
l46:if((x[jvj+47]>0)) goto l47;
pile[v[22]]=343; pile[WZ1]=BL; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(343,BL,jvj+48)*/
pile[v[22]]=511; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(511,BL,jvj+49)*/
V194=x[jvj+49];
pile[v[22]]=0; pile[WZ1]=(-3435); 
(*f[37])( );     /*SRA0(0,(-3435),V191)*/
V191=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V191; pile[WZ2]=jvj+48; 
(*f[42])( );     /*SRA1(135,V191,jvj+48,V192)*/
V192=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V194; pile[WZ2]=V192; 
(*f[39])( );     /*SDX0(20,V194,V192,V193)*/
V193=pile[WZ3]; 
pile[v[22]]=V193; 
(*f[40])( );     /*SLG0(V193)*/
l85:if((BLL<=sepnouv)) goto l86;
if((BLL>sepfacts)) goto l86;
pile[v[22]]=0; pile[WZ1]=BL; 
(*f[223])( );if(v[102]) goto l86;     /*XX0(0,BL,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=V118; 
(*f[343])( );if(v[102]) goto l86;     /*SLGG0(V118,V119)*/
V119=pile[WZ1]; 
pile[v[22]]=V119; 
(*f[40])( );     /*SLG0(V119)*/
pile[v[22]]=1863; pile[WZ1]=BL; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(1863,BL,jvj+80)*/
if((x[jvj+80]==0)) goto l79;
V271=x[jvj+80];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1863; 
(*f[42])( );     /*SRA1(135,0,1863,V268)*/
V268=pile[WZ3]; 
pile[v[22]]=V268; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V268,58,V269)*/
V269=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V271; pile[WZ2]=V269; 
(*f[39])( );     /*SDX0(23,V271,V269,V270)*/
V270=pile[WZ3]; 
pile[v[22]]=V270; 
(*f[40])( );     /*SLG0(V270)*/
l79:pile[v[22]]=1856; pile[WZ1]=BL; pile[WZ2]=jvj+81; 
(*f[33])( );     /*FNDE0(1856,BL,jvj+81)*/
if((x[jvj+81]==0)) goto l80;
V275=x[jvj+81];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1856; 
(*f[42])( );     /*SRA1(135,0,1856,V272)*/
V272=pile[WZ3]; 
pile[v[22]]=V272; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V272,58,V273)*/
V273=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V275; pile[WZ2]=V273; 
(*f[39])( );     /*SDX0(23,V275,V273,V274)*/
V274=pile[WZ3]; 
pile[v[22]]=V274; 
(*f[40])( );     /*SLG0(V274)*/
l80:pile[v[22]]=22; pile[WZ1]=BL; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l86;     /*FNDO0(22,BL,jvj+82)*/
V279=x[jvj+82];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=22; 
(*f[42])( );     /*SRA1(135,0,22,V276)*/
V276=pile[WZ3]; 
pile[v[22]]=V276; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V276,58,V277)*/
V277=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V279; pile[WZ2]=V277; 
(*f[39])( );     /*SDX0(20,V279,V277,V278)*/
V278=pile[WZ3]; 
pile[v[22]]=V278; 
(*f[40])( );     /*SLG0(V278)*/
l86:if((BLL<=sepbase)) goto l87;
if((BLL>sepnouv)) goto l87;
pile[v[22]]=1871; pile[WZ1]=BL; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1871,BL,jvj+22)*/
V176=x[jvj+22];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1871; 
(*f[42])( );     /*SRA1(135,0,1871,V173)*/
V173=pile[WZ3]; 
pile[v[22]]=V173; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V173,58,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V176; pile[WZ2]=V174; 
(*f[39])( );     /*SDX0(20,V176,V174,V175)*/
V175=pile[WZ3]; 
pile[v[22]]=V175; 
(*f[40])( );     /*SLG0(V175)*/
l12:pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(184,BL,jvj+10)*/
goto l13;
l30:x[jvj+26]=s[x[jvj+35]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+35];
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=448)) goto l32;
pile[v[22]]=436; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(436,jvj+26,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(140,jvj+28,V55)*/
V55=pile[WZ2]; 
if((V55!=(-7501))) goto l32;
pile[v[22]]=102; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,jvj+26,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=128)) goto l32;
pile[v[22]]=128; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(128,jvj+29,jvj+31)*/
for(i=x[jvj+31],V47=0;i>0;i=t[i],V47++)  ;
if((V47!=1)) goto l32;
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+26,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=128)) goto l32;
x[jvj+87]=x[jvj+31] ;z[jvj+87]=z[jvj+31];
l26:if((x[jvj+87]<=0)) goto l32;
x[jvj+34]=s[x[jvj+87]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+87];
pile[v[22]]=130; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+34,V50)*/
V50=pile[WZ2]; 
if((V50==0)) goto l31;
l27:x[jvj+87]=t[x[jvj+87]];
goto l26;
l32:V181=x[jvj+26];
pile[v[22]]=20; pile[WZ1]=V181; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V181,0,V180)*/
V180=pile[WZ3]; 
pile[v[22]]=V180; 
(*f[40])( );     /*SLG0(V180)*/
pile[v[22]]=jvj+26; 
(*f[341])( );     /*SORCMT0(jvj+26)*/
l31:x[jvj+35]=t[x[jvj+35]];
goto l29;
l33:V36=x[jvj+36];
l36:V183=V36;
pile[v[22]]=20; pile[WZ1]=V183; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V183,0,V182)*/
V182=pile[WZ3]; 
pile[v[22]]=V182; 
(*f[40])( );     /*SLG0(V182)*/
pile[v[22]]=jvj+36; 
(*f[341])( );     /*SORCMT0(jvj+36)*/
x[jvj+38]=t[x[jvj+38]];
goto l34;
l35:x[jvj+36]=s[x[jvj+38]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+38];
V36=incon;
pile[v[22]]=613; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(613,jvj+36,jvj+37)*/
YY=x[jvj+37];
V36=YY;
goto l36;
l37:V37=x[jvj+39];
l40:V186=V37;
pile[v[22]]=0; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(0,(-9813),V184)*/
V184=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V186; pile[WZ2]=V184; 
(*f[39])( );     /*SDX0(20,V186,V184,V185)*/
V185=pile[WZ3]; 
pile[v[22]]=V185; 
(*f[40])( );     /*SLG0(V185)*/
pile[v[22]]=jvj+39; 
(*f[341])( );     /*SORCMT0(jvj+39)*/
x[jvj+41]=t[x[jvj+41]];
goto l38;
l39:x[jvj+39]=s[x[jvj+41]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+41];
V37=incon;
pile[v[22]]=613; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(613,jvj+39,jvj+40)*/
ZZ=x[jvj+40];
V37=ZZ;
goto l40;
l41:V38=x[jvj+42];
l44:V188=V38;
pile[v[22]]=20; pile[WZ1]=V188; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V188,0,V187)*/
V187=pile[WZ3]; 
pile[v[22]]=V187; 
(*f[40])( );     /*SLG0(V187)*/
pile[v[22]]=jvj+42; 
(*f[341])( );     /*SORCMT0(jvj+42)*/
x[jvj+44]=t[x[jvj+44]];
goto l42;
l43:x[jvj+42]=s[x[jvj+44]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+44];
V38=incon;
pile[v[22]]=613; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(613,jvj+42,jvj+43)*/
TT=x[jvj+43];
V38=TT;
goto l44;
l45:V39=x[jvj+45];
l48:V190=V39;
pile[v[22]]=20; pile[WZ1]=V190; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V190,0,V189)*/
V189=pile[WZ3]; 
pile[v[22]]=V189; 
(*f[40])( );     /*SLG0(V189)*/
pile[v[22]]=jvj+45; 
(*f[341])( );     /*SORCMT0(jvj+45)*/
x[jvj+47]=t[x[jvj+47]];
goto l46;
l47:x[jvj+45]=s[x[jvj+47]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+47];
V39=incon;
pile[v[22]]=613; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(613,jvj+45,jvj+46)*/
PP=x[jvj+46];
V39=PP;
goto l48;
l53:pile[v[22]]=762; pile[WZ1]=BL; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(762,BL,jvj+56)*/
if((x[jvj+56]==0)) goto l62;
V219=x[jvj+56];
pile[v[22]]=0; pile[WZ1]=(-6245); 
(*f[37])( );     /*SRA0(0,(-6245),V216)*/
V216=pile[WZ2]; 
pile[v[22]]=V216; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V216,58,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V219; pile[WZ2]=V217; 
(*f[39])( );     /*SDX0(23,V219,V217,V218)*/
V218=pile[WZ3]; 
pile[v[22]]=V218; 
(*f[40])( );     /*SLG0(V218)*/
l62:pile[v[22]]=0; pile[WZ1]=10; 
(*f[249])( );     /*SPC1(0,10,V231)*/
V231=pile[WZ2]; 
pile[v[22]]=V231; pile[WZ1]=(-3698); 
(*f[37])( );     /*SRA0(V231,(-3698),V76)*/
V76=pile[WZ2]; 
V75=incon;
pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(184,BL,jvj+61)*/
for(i=x[jvj+61],V93=0;i>0;i=t[i],V93++)  ;
if((V93>1)) goto l58;
V75=V76;
l63:pile[v[22]]=V75; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V75,58,V232)*/
V232=pile[WZ2]; 
pile[v[22]]=V232; 
(*f[40])( );     /*SLG0(V232)*/
pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(184,BL,jvj+62)*/
l59:if((x[jvj+62]>0)) goto l60;
x[jvj+64]=d[10];z[jvj+64]=0;
l66:if((x[jvj+64]>0)) goto l67;
pile[v[22]]=1538; pile[WZ1]=BL; pile[WZ2]=jvj+76; 
(*f[33])( );     /*FNDE0(1538,BL,jvj+76)*/
l75:if((x[jvj+76]<=0)) goto l88;
x[jvj+72]=s[x[jvj+76]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+76];
pile[v[22]]=683; pile[WZ1]=jvj+72; 
(*f[26])( );if(v[102]) goto l76;     /*FNDC0(683,jvj+72,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=934; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(934,jvj+72,jvj+77)*/
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V238)*/
V238=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V238; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V238,683,V239)*/
V239=pile[WZ3]; 
pile[v[22]]=V239; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V239,58,V240)*/
V240=pile[WZ2]; 
pile[v[22]]=V240; pile[WZ1]=V101; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V240,V101,41,V241)*/
V241=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V241; pile[WZ2]=934; 
(*f[42])( );     /*SRA1(135,V241,934,V243)*/
V243=pile[WZ3]; 
pile[v[22]]=V243; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V243,58,V244)*/
V244=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V244; pile[WZ2]=jvj+77; 
(*f[42])( );     /*SRA1(135,V244,jvj+77,V245)*/
V245=pile[WZ3]; 
pile[v[22]]=V245; 
(*f[40])( );     /*SLG0(V245)*/
pile[v[22]]=159; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(159,jvj+72,jvj+73)*/
x[jvj+90]=x[jvj+73] ;z[jvj+90]=z[jvj+73];
l73:if((x[jvj+90]<=0)) goto l76;
x[jvj+67]=s[x[jvj+90]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+90];
pile[v[22]]=110; pile[WZ1]=jvj+67; 
(*f[44])( );if(v[102]) goto l74;     /*FNDC1(110,jvj+67,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=337; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(337,jvj+67,jvj+74)*/
pile[v[22]]=288; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(288,jvj+67,jvj+75)*/
V250=x[jvj+75];
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V246)*/
V246=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V246; pile[WZ2]=288; 
(*f[42])( );     /*SRA1(135,V246,288,V247)*/
V247=pile[WZ3]; 
pile[v[22]]=V247; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V247,58,V248)*/
V248=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V250; pile[WZ2]=V248; 
(*f[39])( );     /*SDX0(20,V250,V248,V249)*/
V249=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V249; pile[WZ2]=21; 
(*f[42])( );     /*SRA1(135,V249,21,V251)*/
V251=pile[WZ3]; 
pile[v[22]]=V251; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V251,58,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=V252; pile[WZ1]=V104; 
(*f[37])( );     /*SRA0(V252,V104,V253)*/
V253=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V253; pile[WZ2]=337; 
(*f[42])( );     /*SRA1(135,V253,337,V254)*/
V254=pile[WZ3]; 
pile[v[22]]=V254; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V254,58,V255)*/
V255=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V255; pile[WZ2]=jvj+74; 
(*f[42])( );     /*SRA1(135,V255,jvj+74,V256)*/
V256=pile[WZ3]; 
pile[v[22]]=V256; 
(*f[40])( );     /*SLG0(V256)*/
pile[v[22]]=1489; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(1489,jvj+67,jvj+68)*/
V295=x[jvj+68];
l69:if((V295>0)) goto l70;
pile[v[22]]=1544; pile[WZ1]=jvj+67; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(1544,jvj+67,jvj+69)*/
x[jvj+89]=x[jvj+69] ;z[jvj+89]=z[jvj+69];
l71:if((x[jvj+89]<=0)) goto l74;
x[jvj+70]=s[x[jvj+89]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+89];
pile[v[22]]=117; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l72;     /*FNDC0(117,jvj+70,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=102; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(102,jvj+70,jvj+71)*/
V262=x[jvj+71];
pile[v[22]]=41; pile[WZ1]=V109; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V109,0,V259)*/
V259=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V262; pile[WZ2]=V259; 
(*f[39])( );     /*SDX0(20,V262,V259,V261)*/
V261=pile[WZ3]; 
pile[v[22]]=V261; 
(*f[40])( );     /*SLG0(V261)*/
l72:x[jvj+89]=t[x[jvj+89]];
goto l71;
l58:pile[v[22]]=V76; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V76,83,V75)*/
V75=pile[WZ2]; 
goto l63;
l60:x[jvj+63]=s[x[jvj+62]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+62];
pile[v[22]]=0; pile[WZ1]=jvj+63; 
(*f[344])( );if(v[102]) goto l61;     /*XX1(0,jvj+63,V233)*/
V233=pile[WZ2]; 
pile[v[22]]=V233; 
(*f[40])( );     /*SLG0(V233)*/
l61:x[jvj+62]=t[x[jvj+62]];
goto l59;
l67:x[jvj+65]=s[x[jvj+64]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+64];
pile[v[22]]=163; pile[WZ1]=jvj+65; 
(*f[44])( );if(v[102]) goto l68;     /*FNDC1(163,jvj+65,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=jvj+65; pile[WZ1]=BL; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(jvj+65,BL,jvj+66)*/
if((x[jvj+66]==0)) goto l68;
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V234)*/
V234=pile[WZ2]; 
pile[v[22]]=V234; pile[WZ1]=V97; 
(*f[37])( );     /*SRA0(V234,V97,V235)*/
V235=pile[WZ2]; 
pile[v[22]]=V235; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V235,58,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=V236; 
(*f[40])( );     /*SLG0(V236)*/
x[jvj+88]=x[jvj+66] ;z[jvj+88]=z[jvj+66];
l64:if((x[jvj+88]<=0)) goto l68;
x[jvj+63]=s[x[jvj+88]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+88];
pile[v[22]]=0; pile[WZ1]=jvj+63; 
(*f[344])( );if(v[102]) goto l65;     /*XX1(0,jvj+63,V237)*/
V237=pile[WZ2]; 
pile[v[22]]=V237; 
(*f[40])( );     /*SLG0(V237)*/
l65:x[jvj+88]=t[x[jvj+88]];
goto l64;
l68:x[jvj+64]=t[x[jvj+64]];
goto l66;
l70:V73=s[V295];
V258=V73;
pile[v[22]]=20; pile[WZ1]=V258; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V258,0,V257)*/
V257=pile[WZ3]; 
pile[v[22]]=V257; 
(*f[40])( );     /*SLG0(V257)*/
V295=t[V295];
goto l69;
l74:x[jvj+90]=t[x[jvj+90]];
goto l73;
l76:x[jvj+76]=t[x[jvj+76]];
goto l75;
l83:if((BLL<=sepsimp)) goto l84;
if((BLL>sepcte)) goto l84;
pile[v[22]]=223; pile[WZ1]=BL; pile[WZ2]=jvj+78; 
(*f[33])( );     /*FNDE0(223,BL,jvj+78)*/
if((x[jvj+78]==0)) goto l77;
V265=x[jvj+78];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=223; 
(*f[42])( );     /*SRA1(135,0,223,V263)*/
V263=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V265; pile[WZ2]=V263; 
(*f[39])( );     /*SDX0(23,V265,V263,V264)*/
V264=pile[WZ3]; 
pile[v[22]]=V264; 
(*f[40])( );     /*SLG0(V264)*/
l77:pile[v[22]]=1658; pile[WZ1]=BL; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(1658,BL,jvj+79)*/
l78:if((x[jvj+79]<=0)) goto l84;
V112=s[x[jvj+79]];
V267=V112;
pile[v[22]]=20; pile[WZ1]=V267; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V267,0,V266)*/
V266=pile[WZ3]; 
pile[v[22]]=V266; 
(*f[40])( );     /*SLG0(V266)*/
x[jvj+79]=t[x[jvj+79]];
goto l78;
l84:if((BLL<=sepcod)) goto l85;
if((BLL>seppb)) goto l85;
if((K==76)) goto l85;
x[jvj+25]=0 ;z[jvj+25]=0;
pile[v[22]]=878; pile[WZ1]=BL; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(878,BL,jvj+23)*/
goto l23;
l88:if((K!=58)) goto l89;
putc('\f',fx[v[27]]);putc('\n',fx[v[27]]);
l89:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
