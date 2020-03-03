#include "dx.h"
void CSORELT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V126=0,V127=0,M=0,V122=0,V129=0,NT=0,V124=0,V160=0,V1=0,V58=0,V162=0,V163=0,V4=0,V60=0,V7=0,V166=0,V167=0,V6=0,V61=0,V9=0,V8=0,V63=0,V10=0,V173=0,V172=0,V12=0,C=0,V175=0,V176=0,V16=0,V65=0,V14=0,V69=0,V18=0,D=0,V23=0,V183=0,V184=0,V22=0,V72=0,V71=0,V76=0,V75=0,V187=0,V188=0,V189=0,V20=0,V80=0,V27=0,V192=0,R=0,V193=0,V26=0,V79=0,V78=0,V83=0,V82=0,V196=0,V197=0,V198=0,V24=0,V85=0,V86=0,V88=0,V87=0,V201=0,V202=0,V203=0,V204=0,V28=0,V90=0,V91=0,V93=0,V92=0,V207=0,V208=0,V209=0,V210=0,V30=0,V95=0,V96=0,V98=0,V97=0,V213=0,V214=0,V215=0,V216=0,V32=0,F=0,V219=0,V220=0,V36=0,V99=0,V224=0,V34=0,GG=0,V225=0,V226=0,V40=0,V102=0,V230=0,V38=0,H=0,V231=0,V232=0,V44=0,V105=0,V236=0,V42=0,I=0,V237=0,V238=0,V48=0,V108=0,V242=0,V46=0,J=0,V243=0,V244=0,V52=0,V111=0,V248=0,V50=0,V115=0,V118=0,V253=0,V55=0,V249=0,V250=0,V251=0,V54=0,V57=0,V119=0,V120=0,V254=0,V256=0,V257=0,V258=0,V260=0,V261=0,V262=0,V134=0,V139=0,V144=0,V150=0,HH=0,V148=0,V149=0,V155=0,V158=0,YY=0,V159=0,V132=0,V147=0,V269=0;
int K,T,TT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=43;
if(v[0]>99700) (*f[6])( );

K=pile[v[22]]; T=pile[v[22]+1]; TT=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[jvj+27]=NT=M=x[jvj+39]=incon;
V126=ctt[K];
x[jvj+42]=V126 ;z[jvj+42]=(V126<=sepcte) ? V126 : 0;
x[jvj+5]=x[jvj+42] ;z[jvj+5]=z[jvj+42];
V127=ctm[K];
M=V127;
if((M>0)) goto l1;
x[jvj+4]=250 ;z[jvj+4]=250;
if((M!=0)) goto l4;
pile[v[22]]=855; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(855,jvj+5,NT)*/
NT=pile[WZ2]; 
l100:if((x[T]==250)) goto l105;
x[jvj+28]=x[TT] ;z[jvj+28]=z[TT];
l101:x[jvj+1]=x[jvj+28] ;z[jvj+1]=z[jvj+28];
pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l148;     /*FNDO0(120,jvj+1,jvj+2)*/
pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(120,jvj+1,jvj+28)*/
goto l101;
l1:V122=vbl[M];
x[jvj+43]=V122 ;z[jvj+43]=(V122<=sepcte) ? V122 : 0;
x[jvj+4]=x[jvj+43] ;z[jvj+4]=z[jvj+43];
l4:V124=knd[M];
NT=V124;
goto l100;
l2:V129=ctx[K];
if((V129!=(-1))) goto l3;
pile[v[22]]=jvj+3; pile[WZ1]=218; pile[WZ2]=634; 
(*f[35])( );     /*CHGC1(jvj+3,218,634)*/
l3:if((x[jvj+4]==250)) goto l102;
pile[v[22]]=jvj+3; pile[WZ1]=109; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+3,109,jvj+4)*/
l102:pile[v[22]]=jvj+1; pile[WZ1]=120; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+1,120,jvj+3)*/
l103:if(NT!=incon) goto l104;
l140:if(x[jvj+3]!=incon) goto l141;
l147:v[0]=jvj; v[22]-=3; return;
l6:x[jvj+6]=300 ;z[jvj+6]=300;
l7:if(x[jvj+6]!=incon) goto l8;
l9:if(V1==incon) goto l10;
l106:if(V1!=incon) goto l11;
goto l140;
l8:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+6; 
(*f[42])( );     /*SRA1(135,0,jvj+6,V160)*/
V160=pile[WZ3]; 
pile[v[22]]=V160; pile[WZ1]=45; 
(*f[249])( );     /*SPC1(V160,45,V1)*/
V1=pile[WZ2]; 
goto l9;
l10:V1=0;
goto l106;
l11:V4=incon;
if((V57!=0)) goto l12;
V58=ctw[K];
if((V58<=0)) goto l12;
pile[v[22]]=V1; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V1,42,V162)*/
V162=pile[WZ2]; 
pile[v[22]]=V162; pile[WZ1]=V58; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V162,V58,41,V163)*/
V163=pile[WZ3]; 
pile[v[22]]=V163; pile[WZ1]=45; 
(*f[249])( );     /*SPC1(V163,45,V4)*/
V4=pile[WZ2]; 
l12:if(V4==incon) goto l13;
l107:if(V4!=incon) goto l108;
goto l140;
l13:V4=V1;
goto l107;
l15:V6=V7;
l109:if(V6!=incon) goto l110;
goto l140;
l17:V8=V9;
l111:if(V8!=incon) goto l18;
goto l140;
l18:V10=incon;
V63=ctn[K];
pile[v[22]]=41; pile[WZ1]=V63; pile[WZ2]=V8; 
(*f[39])( );     /*SDX0(41,V63,V8,V10)*/
V10=pile[WZ3]; 
if(V10==incon) goto l19;
l112:if(V10!=incon) goto l20;
goto l140;
l19:V10=V8;
goto l112;
l20:V12=incon;
if((M<=0)) goto l21;
V173=x[jvj+4];
pile[v[22]]=20; pile[WZ1]=V173; pile[WZ2]=V10; 
(*f[39])( );     /*SDX0(20,V173,V10,V172)*/
V172=pile[WZ3]; 
pile[v[22]]=V172; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V172,32,V12)*/
V12=pile[WZ2]; 
l21:if(V12==incon) goto l22;
l113:if(V12!=incon) goto l23;
goto l140;
l22:V12=V10;
goto l113;
l23:V14=incon;
if((M!=0)) goto l28;
if((NT<=0)) goto l28;
V65=cta1[K];
pile[v[22]]=849; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(849,jvj+5,jvj+9)*/
V16=incon;
if((x[jvj+9]!=20)) goto l24;
x[jvj+8]=V65 ;z[jvj+8]=(V65<=sepcte) ? V65 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(642,jvj+8,C)*/
C=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V12,40,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=V175; pile[WZ1]=C; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V175,C,41,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=V176; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V176,41,V16)*/
V16=pile[WZ2]; 
l24:if(V16==incon) goto l25;
l26:if(V16!=incon) goto l27;
l28:if(V14==incon) goto l29;
l114:if(V14!=incon) goto l30;
goto l140;
l25:V16=V12;
goto l26;
l27:pile[v[22]]=jvj+9; pile[WZ1]=V65; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(jvj+9,V65,V16,V14)*/
V14=pile[WZ3]; 
goto l28;
l29:V14=V12;
goto l114;
l30:V18=incon;
if((M!=0)) goto l31;
if((NT<=1)) goto l31;
pile[v[22]]=852; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(852,jvj+5,jvj+10)*/
V69=cta2[K];
pile[v[22]]=jvj+10; pile[WZ1]=V69; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(jvj+10,V69,V14,V18)*/
V18=pile[WZ3]; 
l31:if(V18==incon) goto l32;
l115:if(V18!=incon) goto l33;
goto l140;
l32:V18=V14;
goto l115;
l33:V20=incon;
if((M<=0)) goto l38;
if((NT<=0)) goto l38;
V72=cta1[K];
V71=tnd[M][0];
x[jvj+12]=V71 ;z[jvj+12]=(V71<=sepcte) ? V71 : 0;
V76=vnd[M][0];
V75=V76;
pile[v[22]]=V18; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V18,40,V187)*/
V187=pile[WZ2]; 
pile[v[22]]=V75; pile[WZ1]=V187; 
(*f[64])( );     /*SRA2(V75,V187,V188)*/
V188=pile[WZ2]; 
pile[v[22]]=V188; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V188,58,V23)*/
V23=pile[WZ2]; 
V22=incon;
if((x[jvj+12]!=20)) goto l34;
x[jvj+11]=V72 ;z[jvj+11]=(V72<=sepcte) ? V72 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(642,jvj+11,D)*/
D=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V23,40,V183)*/
V183=pile[WZ2]; 
pile[v[22]]=V183; pile[WZ1]=D; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V183,D,41,V184)*/
V184=pile[WZ3]; 
pile[v[22]]=V184; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V184,41,V22)*/
V22=pile[WZ2]; 
l34:if(V22==incon) goto l35;
l36:if(V22!=incon) goto l37;
l38:if(V20==incon) goto l39;
l116:if(V20!=incon) goto l40;
goto l140;
l35:V22=V23;
goto l36;
l37:pile[v[22]]=jvj+12; pile[WZ1]=V72; pile[WZ2]=V22; 
(*f[39])( );     /*SDX0(jvj+12,V72,V22,V189)*/
V189=pile[WZ3]; 
pile[v[22]]=V189; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V189,41,V20)*/
V20=pile[WZ2]; 
goto l38;
l39:V20=V18;
goto l116;
l40:V24=incon;
if((M<=0)) goto l45;
if((NT<=1)) goto l45;
V79=cta2[K];
V78=tnd[M][1];
x[jvj+14]=V78 ;z[jvj+14]=(V78<=sepcte) ? V78 : 0;
V83=vnd[M][1];
V82=V83;
R=0;
pile[v[22]]=V20; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V20,40,V196)*/
V196=pile[WZ2]; 
pile[v[22]]=V82; pile[WZ1]=V196; 
(*f[64])( );     /*SRA2(V82,V196,V197)*/
V197=pile[WZ2]; 
pile[v[22]]=V197; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V197,58,V27)*/
V27=pile[WZ2]; 
V26=incon;
if((x[jvj+14]!=20)) goto l41;
x[jvj+13]=V79 ;z[jvj+13]=(V79<=sepcte) ? V79 : 0;
pile[v[22]]=642; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(642,jvj+13,V80)*/
V80=pile[WZ2]; 
if((R!=V80)) goto l41;
pile[v[22]]=V27; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V27,40,V192)*/
V192=pile[WZ2]; 
pile[v[22]]=V192; pile[WZ1]=R; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V192,R,41,V193)*/
V193=pile[WZ3]; 
pile[v[22]]=V193; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V193,41,V26)*/
V26=pile[WZ2]; 
l41:if(V26==incon) goto l42;
l43:if(V26!=incon) goto l44;
l45:if(V24==incon) goto l46;
l117:if(V24!=incon) goto l47;
goto l140;
l42:V26=V27;
goto l43;
l44:pile[v[22]]=jvj+14; pile[WZ1]=V79; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(jvj+14,V79,V26,V198)*/
V198=pile[WZ3]; 
pile[v[22]]=V198; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V198,41,V24)*/
V24=pile[WZ2]; 
goto l45;
l46:V24=V20;
goto l117;
l47:V28=incon;
if((M<=0)) goto l48;
if((NT<=2)) goto l48;
V85=tnd[M][2];
x[jvj+15]=V85 ;z[jvj+15]=(V85<=sepcte) ? V85 : 0;
V86=cta3[K];
V88=vnd[M][2];
V87=V88;
pile[v[22]]=V24; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V24,40,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=V87; pile[WZ1]=V201; 
(*f[64])( );     /*SRA2(V87,V201,V202)*/
V202=pile[WZ2]; 
pile[v[22]]=V202; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V202,58,V203)*/
V203=pile[WZ2]; 
pile[v[22]]=jvj+15; pile[WZ1]=V86; pile[WZ2]=V203; 
(*f[39])( );     /*SDX0(jvj+15,V86,V203,V204)*/
V204=pile[WZ3]; 
pile[v[22]]=V204; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V204,41,V28)*/
V28=pile[WZ2]; 
l48:if(V28==incon) goto l49;
l118:if(V28!=incon) goto l50;
goto l140;
l49:V28=V24;
goto l118;
l50:V30=incon;
if((M<=0)) goto l51;
if((NT<=3)) goto l51;
V90=tnd[M][3];
x[jvj+16]=V90 ;z[jvj+16]=(V90<=sepcte) ? V90 : 0;
V91=cta4[K];
V93=vnd[M][3];
V92=V93;
pile[v[22]]=V28; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V28,40,V207)*/
V207=pile[WZ2]; 
pile[v[22]]=V92; pile[WZ1]=V207; 
(*f[64])( );     /*SRA2(V92,V207,V208)*/
V208=pile[WZ2]; 
pile[v[22]]=V208; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V208,58,V209)*/
V209=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=V91; pile[WZ2]=V209; 
(*f[39])( );     /*SDX0(jvj+16,V91,V209,V210)*/
V210=pile[WZ3]; 
pile[v[22]]=V210; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V210,41,V30)*/
V30=pile[WZ2]; 
l51:if(V30==incon) goto l52;
l119:if(V30!=incon) goto l53;
goto l140;
l52:V30=V28;
goto l119;
l53:V32=incon;
if((M<=0)) goto l54;
if((NT<=4)) goto l54;
V95=tnd[M][4];
x[jvj+17]=V95 ;z[jvj+17]=(V95<=sepcte) ? V95 : 0;
V96=cta5[K];
V98=vnd[M][4];
V97=V98;
pile[v[22]]=V30; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V30,40,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=V97; pile[WZ1]=V213; 
(*f[64])( );     /*SRA2(V97,V213,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=V214; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V214,58,V215)*/
V215=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=V96; pile[WZ2]=V215; 
(*f[39])( );     /*SDX0(jvj+17,V96,V215,V216)*/
V216=pile[WZ3]; 
pile[v[22]]=V216; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V216,41,V32)*/
V32=pile[WZ2]; 
l54:if(V32==incon) goto l55;
l120:if(V32!=incon) goto l56;
goto l140;
l55:V32=V30;
goto l120;
l56:V34=incon;
if((M!=0)) goto l61;
if((NT!=0)) goto l61;
V99=cta1[K];
if((V99<=0)) goto l61;
x[jvj+18]=V99 ;z[jvj+18]=(V99<=sepcte) ? V99 : 0;
V36=incon;
pile[v[22]]=642; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(642,jvj+18,F)*/
F=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V32,40,V219)*/
V219=pile[WZ2]; 
pile[v[22]]=V219; pile[WZ1]=F; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V219,F,41,V220)*/
V220=pile[WZ3]; 
pile[v[22]]=V220; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V220,41,V36)*/
V36=pile[WZ2]; 
l57:if(V36==incon) goto l58;
l59:if(V36!=incon) goto l60;
l61:if(V34==incon) goto l62;
l121:if(V34!=incon) goto l63;
goto l140;
l58:V36=V32;
goto l59;
l60:V224=x[jvj+18];
pile[v[22]]=20; pile[WZ1]=V224; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(20,V224,V36,V34)*/
V34=pile[WZ3]; 
goto l61;
l62:V34=V32;
goto l121;
l63:V38=incon;
if((M!=0)) goto l68;
if((NT>1)) goto l68;
V102=cta2[K];
if((V102<=0)) goto l68;
x[jvj+19]=V102 ;z[jvj+19]=(V102<=sepcte) ? V102 : 0;
V40=incon;
pile[v[22]]=642; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l64;     /*FNDC0(642,jvj+19,GG)*/
GG=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V34,40,V225)*/
V225=pile[WZ2]; 
pile[v[22]]=V225; pile[WZ1]=GG; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V225,GG,41,V226)*/
V226=pile[WZ3]; 
pile[v[22]]=V226; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V226,41,V40)*/
V40=pile[WZ2]; 
l64:if(V40==incon) goto l65;
l66:if(V40!=incon) goto l67;
l68:if(V38==incon) goto l69;
l122:if(V38!=incon) goto l70;
goto l140;
l65:V40=V34;
goto l66;
l67:V230=x[jvj+19];
pile[v[22]]=20; pile[WZ1]=V230; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(20,V230,V40,V38)*/
V38=pile[WZ3]; 
goto l68;
l69:V38=V34;
goto l122;
l70:V42=incon;
if((M!=0)) goto l75;
if((NT>2)) goto l75;
V105=cta3[K];
if((V105<=0)) goto l75;
x[jvj+20]=V105 ;z[jvj+20]=(V105<=sepcte) ? V105 : 0;
V44=incon;
pile[v[22]]=642; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(642,jvj+20,H)*/
H=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V38,40,V231)*/
V231=pile[WZ2]; 
pile[v[22]]=V231; pile[WZ1]=H; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V231,H,41,V232)*/
V232=pile[WZ3]; 
pile[v[22]]=V232; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V232,41,V44)*/
V44=pile[WZ2]; 
l71:if(V44==incon) goto l72;
l73:if(V44!=incon) goto l74;
l75:if(V42==incon) goto l76;
l123:if(V42!=incon) goto l77;
goto l140;
l72:V44=V38;
goto l73;
l74:V236=x[jvj+20];
pile[v[22]]=20; pile[WZ1]=V236; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(20,V236,V44,V42)*/
V42=pile[WZ3]; 
goto l75;
l76:V42=V38;
goto l123;
l77:V46=incon;
if((M!=0)) goto l82;
if((NT>3)) goto l82;
V108=cta4[K];
if((V108<=0)) goto l82;
x[jvj+21]=V108 ;z[jvj+21]=(V108<=sepcte) ? V108 : 0;
V48=incon;
pile[v[22]]=642; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l78;     /*FNDC0(642,jvj+21,I)*/
I=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V42,40,V237)*/
V237=pile[WZ2]; 
pile[v[22]]=V237; pile[WZ1]=I; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V237,I,41,V238)*/
V238=pile[WZ3]; 
pile[v[22]]=V238; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V238,41,V48)*/
V48=pile[WZ2]; 
l78:if(V48==incon) goto l79;
l80:if(V48!=incon) goto l81;
l82:if(V46==incon) goto l83;
l124:if(V46!=incon) goto l84;
goto l140;
l79:V48=V42;
goto l80;
l81:V242=x[jvj+21];
pile[v[22]]=20; pile[WZ1]=V242; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(20,V242,V48,V46)*/
V46=pile[WZ3]; 
goto l82;
l83:V46=V42;
goto l124;
l84:V50=incon;
if((M!=0)) goto l89;
if((NT>4)) goto l89;
V111=cta5[K];
if((V111<=0)) goto l89;
x[jvj+22]=V111 ;z[jvj+22]=(V111<=sepcte) ? V111 : 0;
V52=incon;
pile[v[22]]=642; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l85;     /*FNDC0(642,jvj+22,J)*/
J=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V46,40,V243)*/
V243=pile[WZ2]; 
pile[v[22]]=V243; pile[WZ1]=J; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V243,J,41,V244)*/
V244=pile[WZ3]; 
pile[v[22]]=V244; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V244,41,V52)*/
V52=pile[WZ2]; 
l85:if(V52==incon) goto l86;
l87:if(V52!=incon) goto l88;
l89:if(V50==incon) goto l90;
l125:if(V50!=incon) goto l126;
goto l140;
l86:V52=V46;
goto l87;
l88:V248=x[jvj+22];
pile[v[22]]=20; pile[WZ1]=V248; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(20,V248,V52,V50)*/
V50=pile[WZ3]; 
goto l89;
l90:V50=V46;
goto l125;
l92:x[jvj+23]=t[x[jvj+23]];
l91:if((x[jvj+23]<=0)) goto l98;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=117; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l92;     /*FNDC0(117,jvj+24,V115)*/
V115=pile[WZ2]; 
if((V115!=K)) goto l92;
x[jvj+27]=0 ;z[jvj+27]=0;
if(x[jvj+27]!=incon) goto l93;
l96:if(x[jvj+27]!=incon) goto l97;
l98:if(V54==incon) goto l99;
l127:if(V54!=incon) goto l128;
goto l140;
l93:pile[v[22]]=159; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(159,jvj+24,jvj+25)*/
l94:if((x[jvj+25]<=0)) goto l96;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=510; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l95;     /*FNDC0(510,jvj+26,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=jvj+27; pile[WZ1]=V118; 
(*f[207])( );     /*PLUE2(jvj+27,V118)*/
l95:x[jvj+25]=t[x[jvj+25]];
goto l94;
l97:V253=x[jvj+27];
pile[v[22]]=V55; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V55,44,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V249; pile[WZ2]=228; 
(*f[42])( );     /*SRA1(135,V249,228,V250)*/
V250=pile[WZ3]; 
pile[v[22]]=V250; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V250,58,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V253; pile[WZ2]=V251; 
(*f[39])( );     /*SDX0(23,V253,V251,V54)*/
V54=pile[WZ3]; 
goto l98;
l99:V54=V55;
goto l127;
l104:if(M!=incon) goto l105;
goto l140;
l105:V57=ctx[K];
V119=ctu[K];
V120=cts[K];
V1=incon;
if((V57==0)) goto l9;
if((V57==(-2))) goto l9;
x[jvj+6]=incon;
if((V57!=(-1))) goto l5;
x[jvj+6]=634 ;z[jvj+6]=634;
l5:if(x[jvj+6]==incon) goto l6;
goto l7;
l108:pile[v[22]]=41; pile[WZ1]=K; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(41,K,V4,V254)*/
V254=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V254; pile[WZ2]=642; 
(*f[42])( );     /*SRA1(135,V254,642,V256)*/
V256=pile[WZ3]; 
pile[v[22]]=V256; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V256,58,V257)*/
V257=pile[WZ2]; 
pile[v[22]]=V257; pile[WZ1]=V120; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V257,V120,41,V258)*/
V258=pile[WZ3]; 
pile[v[22]]=V258; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V258,44,V7)*/
V7=pile[WZ2]; 
V6=incon;
if((x[jvj+5]!=489)) goto l14;
V60=ctn[K];
if((K!=V60)) goto l14;
pile[v[22]]=50; pile[WZ1]=V7; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(50,V7,42,V166)*/
V166=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V166; pile[WZ2]=864; 
(*f[42])( );     /*SRA1(135,V166,864,V167)*/
V167=pile[WZ3]; 
V6=0;
V269=V167;
if((V269<0)) goto l14;
pile[v[22]]=V269; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V269,3)*/
l14:if(V6==incon) goto l15;
goto l109;
l110:pile[v[22]]=135; pile[WZ1]=V6; pile[WZ2]=jvj+5; 
(*f[42])( );     /*SRA1(135,V6,jvj+5,V9)*/
V9=pile[WZ3]; 
V8=incon;
V61=ctp[K];
if((V61<=0)) goto l16;
x[jvj+7]=V61 ;z[jvj+7]=(V61<=sepcte) ? V61 : 0;
pile[WZ1]=V9; pile[WZ2]=jvj+7; 
(*f[42])( );     /*SRA1(135,V9,jvj+7,V8)*/
V8=pile[WZ3]; 
l16:if(V8==incon) goto l17;
goto l111;
l126:pile[v[22]]=V50; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V50,46,V260)*/
V260=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V260; pile[WZ2]=613; 
(*f[42])( );     /*SRA1(135,V260,613,V261)*/
V261=pile[WZ3]; 
pile[v[22]]=V261; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V261,58,V262)*/
V262=pile[WZ2]; 
pile[v[22]]=V262; pile[WZ1]=V119; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V262,V119,41,V55)*/
V55=pile[WZ3]; 
V54=incon;
if((x[T]==250)) goto l98;
pile[v[22]]=763; pile[WZ1]=T; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(763,T,jvj+23)*/
goto l91;
l128:pile[v[22]]=V54; 
(*f[40])( );     /*SLG0(V54)*/
fflush(stdout);
goto l140;
l133:HH++;
l132:if((HH>V150)) goto l134;
V148=cts[HH];
if((V148!=V147)) goto l133;
V149=ctx[HH];
if((V149==0)) goto l133;
pile[v[22]]=jvj+3; pile[WZ1]=1043; pile[WZ2]=HH; 
(*f[43])( );     /*CHGC2(jvj+3,1043,HH)*/
l134:pile[v[22]]=763; pile[WZ1]=T; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(763,T,jvj+35)*/
l135:if((x[jvj+35]<=0)) goto l147;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=117; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l136;     /*FNDC0(117,jvj+36,V155)*/
V155=pile[WZ2]; 
if((V155!=K)) goto l136;
x[jvj+39]=0 ;z[jvj+39]=0;
if(x[jvj+39]!=incon) goto l137;
l145:if(x[jvj+39]!=incon) goto l146;
goto l147;
l136:x[jvj+35]=t[x[jvj+35]];
goto l135;
l137:pile[v[22]]=159; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(159,jvj+36,jvj+37)*/
l138:if((x[jvj+37]<=0)) goto l145;
x[jvj+38]=s[x[jvj+37]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+37];
pile[v[22]]=510; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l139;     /*FNDC0(510,jvj+38,V158)*/
V158=pile[WZ2]; 
YY=V158;
V159=ctx[YY];
if((V159==0)) goto l139;
pile[v[22]]=jvj+39; pile[WZ1]=YY; 
(*f[207])( );     /*PLUE2(jvj+39,YY)*/
l139:x[jvj+37]=t[x[jvj+37]];
goto l138;
l141:V132=cta1[K];
x[jvj+40]=V132 ;z[jvj+40]=(V132<=sepcte) ? V132 : 0;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[1582])( );     /*TRND0(jvj+40,jvj+41)*/
pile[v[22]]=jvj+3; pile[WZ1]=447; pile[WZ2]=jvj+41; 
(*f[35])( );     /*CHGC1(jvj+3,447,jvj+41)*/
V134=cta2[K];
if((V134<=0)) goto l142;
if((V134<=sepcte)) goto l129;
x[jvj+29]=V134 ;z[jvj+29]=(V134<=sepcte) ? V134 : 0;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[1582])( );     /*TRND0(jvj+29,jvj+30)*/
pile[v[22]]=jvj+3; pile[WZ1]=459; pile[WZ2]=jvj+30; 
(*f[35])( );     /*CHGC1(jvj+3,459,jvj+30)*/
l129:if((V134>sepcte)) goto l142;
pile[v[22]]=jvj+3; pile[WZ1]=515; pile[WZ2]=V134; 
(*f[43])( );     /*CHGC2(jvj+3,515,V134)*/
l142:V139=cta3[K];
if((V139<=0)) goto l143;
if((V139<=sepcte)) goto l130;
x[jvj+31]=V139 ;z[jvj+31]=(V139<=sepcte) ? V139 : 0;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[1582])( );     /*TRND0(jvj+31,jvj+32)*/
pile[v[22]]=jvj+3; pile[WZ1]=475; pile[WZ2]=jvj+32; 
(*f[35])( );     /*CHGC1(jvj+3,475,jvj+32)*/
l130:if((V139>sepcte)) goto l143;
pile[v[22]]=jvj+3; pile[WZ1]=609; pile[WZ2]=V139; 
(*f[43])( );     /*CHGC2(jvj+3,609,V139)*/
l143:V144=cta4[K];
if((V144<=0)) goto l144;
if((V144<=sepcte)) goto l131;
x[jvj+33]=V144 ;z[jvj+33]=(V144<=sepcte) ? V144 : 0;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[1582])( );     /*TRND0(jvj+33,jvj+34)*/
pile[v[22]]=jvj+3; pile[WZ1]=502; pile[WZ2]=jvj+34; 
(*f[35])( );     /*CHGC1(jvj+3,502,jvj+34)*/
l131:if((V144>sepcte)) goto l144;
pile[v[22]]=jvj+3; pile[WZ1]=610; pile[WZ2]=V144; 
(*f[43])( );     /*CHGC2(jvj+3,610,V144)*/
l144:V147=ctu[K];
if((V147==999999)) goto l134;
pile[v[22]]=117; pile[WZ1]=T; 
(*f[26])( );if(v[102]) goto l134;     /*FNDC0(117,T,V150)*/
V150=pile[WZ2]; 
HH=1;
goto l132;
l146:if((x[jvj+39]==0)) goto l147;
pile[v[22]]=jvj+3; pile[WZ1]=195; pile[WZ2]=jvj+39; 
(*f[34])( );     /*CHGC0(jvj+3,195,jvj+39)*/
goto l147;
l148:pile[v[22]]=158; pile[WZ1]=jvj+5; pile[WZ2]=642; pile[WZ3]=K; pile[WZ4]=jvj+3; 
(*f[192])( );     /*QUADRI4(158,jvj+5,642,K,jvj+3)*/
if(x[jvj+3]!=incon) goto l2;
goto l102;
}
