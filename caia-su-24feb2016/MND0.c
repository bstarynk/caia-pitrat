#include "dx.h"
void MND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V1=0,V3=0,V2=0,V5=0,V13=0,V7=0,S=0,V8=0,V9=0,V11=0,V10=0,V6=0,V15=0,V143=0,V144=0,V145=0,V146=0,V14=0,K=0,V53=0,V102=0,V140=0,V141=0,V130=0,V131=0,V132=0,V133=0,V135=0,V137=0,V136=0,V134=0,V138=0,V139=0,V129=0,V113=0,V127=0,V128=0,V114=0,V115=0,V116=0,V117=0,V118=0,V112=0,V90=0,V84=0,V91=0,V85=0,V86=0,V87=0,V83=0,V67=0,V60=0,V65=0,V66=0,V61=0,V62=0,V63=0,V59=0,RR=0,V95=0,V96=0,V97=0,V93=0,V37=0,V43=0,V46=0,V47=0,V44=0,V38=0,V39=0,V40=0,V41=0,V36=0,V32=0,V33=0,V34=0,V30=0,V21=0,V22=0,V24=0,V25=0,V23=0,V26=0,V27=0,V19=0,V80=0,V81=0,V78=0,V71=0,V72=0,V73=0,V74=0,V75=0,V69=0,V111=0,V109=0,V105=0,V106=0,V103=0,V55=0,V57=0,V51=0,V49=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=10051;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==91&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
K=v[27];
V14=g[348];
if((V14<=0)) goto l1;
V15=vg[348];
if((V15!=0)) goto l3;
if((V14<3)) goto l5;
l3:pile[v[22]]=348; pile[WZ1]=10051; pile[WZ2]=0; pile[WZ3]=jvj+3; 
(*f[291])( );     /*INTERP4(348,10051,0,jvj+3)*/
if((x[jvj+3]==135)) goto l4;
l1:V4=0;
v[2]=v[1];
V1=V4;
v[1]=4;
pile[v[22]]=(-2614); pile[WZ1]=V1; 
(*f[64])( );     /*SRA2((-2614),V1,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=(-2615); pile[WZ1]=V3; 
(*f[64])( );     /*SRA2((-2615),V3,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V2,0,V5)*/
V5=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V5; pile[WZ1]=1153; pile[WZ2]=3; 
(*f[67])( );     /*SPA0(V5,1153,3)*/
(*f[287])( );     /*COPYRIGHT0()*/
pile[v[22]]=241; pile[WZ1]=171; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(241,171,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=253; pile[WZ1]=177; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(253,177,jvj+2)*/
V7=0;
l2:if((x[jvj+2]<=0)) goto l10;
S=s[x[jvj+2]];
pile[v[22]]=V13; pile[WZ1]=V7; 
(*f[64])( );     /*SRA2(V13,V7,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=60; 
(*f[38])( );     /*SPC0(V8,60,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=S; pile[WZ1]=V9; 
(*f[64])( );     /*SRA2(S,V9,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=(-2615); pile[WZ1]=V11; 
(*f[64])( );     /*SRA2((-2615),V11,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V10,62,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; 
(*f[288])( );     /*SPLN0(V6)*/
x[jvj+2]=t[x[jvj+2]];
goto l2;
l4:if((V14<4)) goto l5;
goto l1;
l5:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V143; pile[WZ2]=10051; 
(*f[98])( );     /*SRA3(135,V143,10051,V144)*/
V144=pile[WZ3]; 
pile[v[22]]=V144; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V144,125,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=V145; pile[WZ1]=(-6389); 
(*f[37])( );     /*SRA0(V145,(-6389),V146)*/
V146=pile[WZ2]; 
pile[v[22]]=V146; 
(*f[40])( );     /*SLG0(V146)*/
if((V14!=2)) goto l1;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l1;
l8:x[jvj+6]=s[x[jvj+20]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+20];
pile[v[22]]=109; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(109,jvj+6,jvj+7)*/
if((x[jvj+10]!=x[jvj+7])) goto l9;
x[jvj+11]=276 ;z[jvj+11]=276;
l14:pile[v[22]]=241; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(241,jvj+11,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=V140; pile[WZ1]=V113; 
(*f[64])( );     /*SRA2(V140,V113,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V114; pile[WZ2]=jvj+10; 
(*f[98])( );     /*SRA3(135,V114,jvj+10,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=V127; pile[WZ1]=V115; 
(*f[99])( );     /*SPM0(V127,V115,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=V116; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V116,40,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=V128; pile[WZ1]=V117; 
(*f[64])( );     /*SRA2(V128,V117,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=V118; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V118,41,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=V112; 
(*f[289])( );     /*SPLN1(V112)*/
l13:x[jvj+8]=t[x[jvj+8]];
l12:if((x[jvj+8]<=0)) goto l15;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+9,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,jvj+9,jvj+10)*/
x[jvj+11]=incon;
pile[v[22]]=159; pile[WZ1]=316; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,316,jvj+5)*/
x[jvj+20]=x[jvj+5] ;z[jvj+20]=z[jvj+5];
l7:if((x[jvj+20]>0)) goto l8;
x[jvj+11]=690 ;z[jvj+11]=690;
goto l14;
l9:x[jvj+20]=t[x[jvj+20]];
goto l7;
l10:pile[v[22]]=241; pile[WZ1]=690; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(241,690,V140)*/
V140=pile[WZ2]; 
pile[WZ1]=1151; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(241,1151,V141)*/
V141=pile[WZ2]; 
V130=0;
pile[v[22]]=(-7257); pile[WZ1]=V130; 
(*f[64])( );     /*SRA2((-7257),V130,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=V131; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V131,32,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=V140; pile[WZ1]=V132; 
(*f[64])( );     /*SRA2(V140,V132,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=V133; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V133,40,V135)*/
V135=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=V135; 
(*f[64])( );     /*SRA2((-2532),V135,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=V141; pile[WZ1]=V137; 
(*f[64])( );     /*SRA2(V141,V137,V136)*/
V136=pile[WZ2]; 
pile[v[22]]=V136; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V136,41,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=V134; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V134,40,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=V138; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V138,32,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=V139; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V139,41,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=V129; 
(*f[289])( );     /*SPLN1(V129)*/
l11:pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(494,324,jvj+8)*/
V113=0;
goto l12;
l15:x[jvj+23]=w[177][8];
pile[v[22]]=241; pile[WZ1]=197; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(241,197,V90)*/
V90=pile[WZ2]; 
V84=0;
x[jvj+21]=x[jvj+23] ;z[jvj+21]=z[jvj+23];
l16:if((x[jvj+21]<=0)) goto l18;
x[jvj+12]=s[x[jvj+21]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+21];
pile[v[22]]=288; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(288,jvj+12,jvj+13)*/
if((x[jvj+13]!=197)) goto l17;
pile[v[22]]=190; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(190,jvj+12,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=V90; pile[WZ1]=V84; 
(*f[64])( );     /*SRA2(V90,V84,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V85,32,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=V86; 
(*f[64])( );     /*SRA2((-2532),V86,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=V91; pile[WZ1]=V87; 
(*f[64])( );     /*SRA2(V91,V87,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=V83; 
(*f[289])( );     /*SPLN1(V83)*/
l17:x[jvj+21]=t[x[jvj+21]];
goto l16;
l18:pile[v[22]]=241; pile[WZ1]=340; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(241,340,V67)*/
V67=pile[WZ2]; 
V60=0;
x[jvj+22]=x[jvj+23] ;z[jvj+22]=z[jvj+23];
l19:if((x[jvj+22]<=0)) goto l22;
x[jvj+14]=s[x[jvj+22]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+22];
pile[v[22]]=190; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(190,jvj+14,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=391; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(391,jvj+14,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=V67; pile[WZ1]=V60; 
(*f[64])( );     /*SRA2(V67,V60,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=V61; 
(*f[64])( );     /*SRA2(V65,V61,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=V62; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V62,32,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V66; pile[WZ1]=V63; 
(*f[64])( );     /*SRA2(V66,V63,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; 
(*f[288])( );     /*SPLN0(V59)*/
l21:pile[v[22]]=jvj+14; 
(*f[290])( );if(v[102]) goto l20;     /*MNV1(jvj+14,RR)*/
RR=pile[WZ1]; 
pile[v[22]]=V67; pile[WZ1]=V60; 
(*f[64])( );     /*SRA2(V67,V60,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=V95; 
(*f[64])( );     /*SRA2(V65,V95,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=V96; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V96,32,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=RR; pile[WZ1]=V97; 
(*f[99])( );     /*SPM0(RR,V97,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=V93; 
(*f[288])( );     /*SPLN0(V93)*/
l20:x[jvj+22]=t[x[jvj+22]];
goto l19;
l22:V37=0;
l23:if((x[jvj+23]>0)) goto l24;
pile[v[22]]=3; 
(*f[63])( );     /*SPZ1(3)*/
v[27]=K;
l31:x[jvj+1]=incon; v[0]=jvj; return;
l24:x[jvj+4]=s[x[jvj+23]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+23];
pile[v[22]]=118; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(118,jvj+4,V43)*/
V43=pile[WZ2]; 
if((V43==1)) goto l26;
if((V43!=2)) goto l27;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+4,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(117,jvj+4,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=190; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(190,jvj+4,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(288,jvj+4,jvj+16)*/
pile[v[22]]=241; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(241,jvj+16,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=V37; 
(*f[64])( );     /*SRA2(V30,V37,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=V21; 
(*f[64])( );     /*SRA2(V34,V21,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V22,91,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=V24; 
(*f[99])( );     /*SPM0(V32,V24,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V25,93,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V23,91,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=V26; 
(*f[99])( );     /*SPM0(V33,V26,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V27,93,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; 
(*f[289])( );     /*SPLN1(V19)*/
l27:pile[v[22]]=288; pile[WZ1]=jvj+4; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(288,jvj+4,jvj+17)*/
if((x[jvj+17]!=148)) goto l29;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+4,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=190; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(190,jvj+4,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=852; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(852,jvj+4,jvj+18)*/
pile[v[22]]=241; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(241,jvj+18,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; pile[WZ1]=V37; 
(*f[64])( );     /*SRA2(V78,V37,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=V71; 
(*f[64])( );     /*SRA2((-2532),V71,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V81; pile[WZ1]=V72; 
(*f[64])( );     /*SRA2(V81,V72,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V73,91,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=V74; 
(*f[99])( );     /*SPM0(V80,V74,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V75; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V75,93,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; 
(*f[289])( );     /*SPLN1(V69)*/
l6:pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+4,V102)*/
V102=pile[WZ2]; 
l29:if(x[jvj+17]!=192&&x[jvj+17]!=194&&x[jvj+17]!=276&&x[jvj+17]!=89&&x[jvj+17]!=1007) goto l25;
pile[v[22]]=118; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(118,jvj+4,V53)*/
V53=pile[WZ2]; 
if((V53>0)) goto l25;
l30:pile[v[22]]=241; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(241,jvj+17,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=190; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(190,jvj+4,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=V37; 
(*f[64])( );     /*SRA2(V55,V37,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=V51; 
(*f[64])( );     /*SRA2(V57,V51,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V49; 
(*f[289])( );     /*SPLN1(V49)*/
l25:x[jvj+23]=t[x[jvj+23]];
goto l23;
l26:pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+4,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=190; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(190,jvj+4,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(288,jvj+4,jvj+15)*/
pile[v[22]]=241; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(241,jvj+15,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=V37; 
(*f[64])( );     /*SRA2(V44,V37,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=V38; 
(*f[64])( );     /*SRA2(V47,V38,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V39,91,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=V40; 
(*f[99])( );     /*SPM0(V46,V40,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V41,93,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; 
(*f[289])( );     /*SPLN1(V36)*/
goto l27;
l28:pile[v[22]]=190; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(190,jvj+4,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=852; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(852,jvj+4,jvj+19)*/
pile[v[22]]=241; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(241,jvj+19,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=V109; pile[WZ1]=V37; 
(*f[64])( );     /*SRA2(V109,V37,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=V105; 
(*f[64])( );     /*SRA2((-2532),V105,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=V111; pile[WZ1]=V106; 
(*f[64])( );     /*SRA2(V111,V106,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=V103; 
(*f[289])( );     /*SPLN1(V103)*/
goto l29;
}
