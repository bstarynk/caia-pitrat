#include "dx.h"
void NOUVCONTRA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V9=0,V15=0,V20=0,V133=0,V126=0,V127=0,RES=0,V128=0,V130=0,V132=0,V125=0,V120=0,V121=0,V122=0,V124=0,V91=0,RV=0,G=0,V58=0,V60=0,V69=0,V56=0,V53=0,V52=0,V73=0,V151=0,V55=0,V144=0,V145=0,V146=0,V147=0,V149=0,V54=0,V161=0,V163=0,V165=0,V152=0,V153=0,V155=0,V156=0,V158=0,V159=0,V160=0,V162=0,V164=0,V166=0,V65=0,V66=0,V140=0,V134=0,V135=0,V136=0,V138=0,V139=0,V141=0,V68=0,NA=0,V168=0,V169=0,V170=0,V167=0,V25=0,V36=0,V26=0,V38=0,V39=0,V106=0,V177=0,V179=0,V176=0,V178=0,V22=0,N=0,V27=0,V32=0,V31=0,V28=0,S=0,H=0,V96=0,V93=0,V175=0,V172=0,V174=0,V116=0;
int RR,RS,HIST;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=69;
x[jvj+1]=11325;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1548&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; RS=pile[v[22]+1]; HIST=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+31]=S=incon;
pile[v[22]]=RR; pile[WZ1]=HIST; pile[WZ2]=jvj+2; 
(*f[1729])( );if(v[102]) goto l65;     /*NOUVCONTRC0(RR,HIST,jvj+2)*/
if((v[111]!=0)) goto l3;
if((v[127]>0)) goto l1;
x[jvj+3]=vo[12];z[jvj+3]=vz[12];
pile[v[22]]=909; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(909,jvj+3,jvj+4)*/
if(x[jvj+4]==205||x[jvj+4]==392) goto l1;
l2:pile[v[22]]=576; pile[WZ1]=HIST; pile[WZ2]=jvj+2; 
(*f[1320])( );     /*ARCHIVE1(576,HIST,jvj+2)*/
l3:x[jvj+7]=x[jvj+2] ;z[jvj+7]=z[jvj+2];
x[jvj+18]=vo[14];z[jvj+18]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+18,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=642; pile[WZ2]=V91; 
(*f[43])( );     /*CHGC2(jvj+2,642,V91)*/
l18:pile[v[22]]=1070; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1070,jvj+2,jvj+19)*/
if((x[jvj+19]!=68)) goto l20;
pile[v[22]]=1201; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1201,jvj+18,jvj+20)*/
if((x[jvj+20]!=287)) goto l20;
x[jvj+21]=vo[12];z[jvj+21]=vz[12];
pile[v[22]]=1254; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1254,jvj+21,jvj+22)*/
if((x[jvj+22]!=68)) goto l20;
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+2,jvj+6)*/
if((x[jvj+6]==135)) goto l20;
l19:pile[v[22]]=jvj+2; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+23)*/
pile[v[22]]=jvj+18; pile[WZ1]=1255; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+18,1255,jvj+23)*/
l20:if((x[jvj+7]==250)) goto l65;
x[jvj+12]=incon;
x[jvj+11]=vo[16];z[jvj+11]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l65;     /*FNDC1(905,jvj+11,V15)*/
V15=pile[WZ2]; 
if((V15!=(-9009))) goto l11;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+12; 
(*f[1730])( );     /*COUTREGT0(jvj+7,jvj+12)*/
l11:if(V15==(-5963)||V15==(-11721)) goto l12;
if(x[jvj+12]==incon) goto l65;
l21:if((x[jvj+12]==(-99999998))) goto l65;
pile[v[22]]=jvj+12; 
(*f[766])( );if(v[102]) goto l65;     /*VALGLO0(jvj+12,RES)*/
RES=pile[WZ1]; 
x[jvj+17]=incon;
pile[v[22]]=1070; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1070,jvj+7,jvj+8)*/
if((x[jvj+8]!=68)) goto l4;
x[jvj+17]=1203 ;z[jvj+17]=1203;
l4:pile[v[22]]=868; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(868,jvj+7,jvj+9)*/
if((x[jvj+9]!=48)) goto l5;
x[jvj+17]=1203 ;z[jvj+17]=1203;
l5:x[jvj+10]=vo[16];z[jvj+10]=vz[16];
pile[v[22]]=244; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(244,jvj+10,V6)*/
V6=pile[WZ2]; 
if((RES>V6)) goto l6;
if((RES>=V6)) goto l7;
l8:pile[v[22]]=870; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(870,jvj+7,V9)*/
V9=pile[WZ2]; 
if((V9>1)) goto l9;
x[jvj+17]=1203 ;z[jvj+17]=1203;
l13:if((v[111]==0)) goto l14;
if((x[jvj+17]==634)) goto l15;
l17:if((v[39]<=0)) goto l22;
V125=x[jvj+7];
pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(5,0,42,V120)*/
V120=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V120; pile[WZ2]=jvj+17; 
(*f[42])( );     /*SRA1(135,V120,jvj+17,V121)*/
V121=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=RES; pile[WZ2]=V121; 
(*f[39])( );     /*SDX0(41,RES,V121,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V125; pile[WZ2]=V122; 
(*f[39])( );     /*SDX0(20,V125,V122,V124)*/
V124=pile[WZ3]; 
pile[v[22]]=V124; 
(*f[40])( );     /*SLG0(V124)*/
l22:RV=RES;
G=x[jvj+17];
if((v[39]!=2)) goto l34;
pile[v[22]]=jvj+12; 
(*f[1306])( );     /*SORJGT0(jvj+12)*/
l34:if((G==1203)) goto l35;
if((G!=634)) goto l65;
pile[v[22]]=218; pile[WZ1]=HIST; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(218,HIST,jvj+40)*/
x[jvj+41]=vo[13];z[jvj+41]=vz[13];
pile[v[22]]=1028; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(1028,jvj+41,jvj+42)*/
l45:if((x[jvj+42]<=0)) goto l65;
x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=218; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(218,jvj+43,jvj+44)*/
if((x[jvj+44]!=x[jvj+40])) goto l46;
pile[v[22]]=jvj+43; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+43,117,1)*/
l65:if(x[jvj+31]!=incon) goto l66;
l69:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=jvj+5; pile[WZ1]=946; pile[WZ2]=jvj+2; 
(*f[774])( );     /*TJPLUS0(jvj+5,946,jvj+2)*/
goto l2;
l6:x[jvj+17]=1203 ;z[jvj+17]=1203;
l7:if((v[244]<=0)) goto l8;
x[jvj+17]=1203 ;z[jvj+17]=1203;
goto l8;
l9:if(x[jvj+17]==incon) goto l10;
goto l13;
l10:x[jvj+17]=634 ;z[jvj+17]=634;
goto l13;
l12:pile[v[22]]=jvj+7; pile[WZ1]=jvj+12; 
(*f[1553])( );     /*COUTREG0(jvj+7,jvj+12)*/
goto l21;
l14:if((x[jvj+17]!=634)) goto l17;
pile[v[22]]=926; pile[WZ1]=HIST; pile[WZ2]=jvj+7; 
(*f[1320])( );     /*ARCHIVE1(926,HIST,jvj+7)*/
l15:if((v[93]<=0)) goto l16;
x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=1415; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(1415,jvj+13,jvj+14)*/
pile[v[22]]=1525; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(1525,jvj+14,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=846; 
(*f[1211])( );     /*MARKUTILE0(jvj+14,846)*/
pile[WZ1]=1463; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+14,1463,1)*/
pile[v[22]]=jvj+15; 
(*f[186])( );     /*BTC0(jvj+15,1463,1)*/
l16:if((v[245]<=0)) goto l17;
x[jvj+16]=vo[16];z[jvj+16]=vz[16];
pile[v[22]]=244; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(244,jvj+16,V20)*/
V20=pile[WZ2]; 
V133=x[jvj+7];
pile[v[22]]=20; pile[WZ1]=11325; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11325,0,V126)*/
V126=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V126; pile[WZ2]=634; 
(*f[42])( );     /*SRA1(135,V126,634,V127)*/
V127=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=RES; pile[WZ2]=V127; 
(*f[39])( );     /*SDX0(41,RES,V127,V128)*/
V128=pile[WZ3]; 
pile[WZ1]=V20; pile[WZ2]=V128; 
(*f[39])( );     /*SDX0(41,V20,V128,V130)*/
V130=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V133; pile[WZ2]=V130; 
(*f[39])( );     /*SDX0(20,V133,V130,V132)*/
V132=pile[WZ3]; 
pile[v[22]]=V132; 
(*f[40])( );     /*SLG0(V132)*/
goto l17;
l24:V52=V53;
l28:pile[v[22]]=V52; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V52,40,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=V155; pile[WZ1]=RV; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V155,RV,41,V156)*/
V156=pile[WZ3]; 
pile[v[22]]=V156; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V156,41,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=V158; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V158,34,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=V159; pile[WZ1]=V161; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V159,V161,41,V160)*/
V160=pile[WZ3]; 
pile[v[22]]=V160; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V160,34,V162)*/
V162=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V163; pile[WZ2]=V162; 
(*f[39])( );     /*SDX0(20,V163,V162,V55)*/
V55=pile[WZ3]; 
V54=incon;
if((x[RS]==250)) goto l25;
pile[v[22]]=929; pile[WZ1]=RS; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(929,RS,V73)*/
V73=pile[WZ2]; 
V151=x[RS];
pile[v[22]]=135; pile[WZ1]=V55; pile[WZ2]=844; 
(*f[42])( );     /*SRA1(135,V55,844,V144)*/
V144=pile[WZ3]; 
pile[v[22]]=V144; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V144,(-1318),V145)*/
V145=pile[WZ2]; 
pile[v[22]]=V145; pile[WZ1]=91; 
(*f[249])( );     /*SPC1(V145,91,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=V146; pile[WZ1]=V73; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V146,V73,41,V147)*/
V147=pile[WZ3]; 
pile[v[22]]=V147; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V147,93,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V151; pile[WZ2]=V149; 
(*f[39])( );     /*SDX0(20,V151,V149,V54)*/
V54=pile[WZ3]; 
l29:pile[v[22]]=23; pile[WZ1]=V165; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(23,V165,V54,V164)*/
V164=pile[WZ3]; 
pile[v[22]]=V164; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l30;     /*SORHIST1(V164,HIST,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=V166; 
(*f[40])( );     /*SLG0(V166)*/
l30:if((V68!=2)) goto l38;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l38:vv[37]=V56;
pile[v[22]]=1574; pile[WZ1]=jvj+33; 
(*f[71])( );     /*ENLV0(1574,jvj+33)*/
pile[v[22]]=jvj+7; pile[WZ1]=929; pile[WZ2]=V56; 
(*f[43])( );     /*CHGC2(jvj+7,929,V56)*/
pile[v[22]]=jvj+25; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+25,929,1)*/
pile[v[22]]=jvj+7; pile[WZ1]=1054; pile[WZ2]=jvj+32; 
(*f[35])( );     /*CHGC1(jvj+7,1054,jvj+32)*/
pile[WZ1]=244; pile[WZ2]=RV; 
(*f[43])( );     /*CHGC2(jvj+7,244,RV)*/
pile[WZ1]=1469; pile[WZ2]=V167; 
(*f[43])( );     /*CHGC2(jvj+7,1469,V167)*/
NA=v[196];
if((NA<=0)) goto l71;
if((V56<NA)) goto l71;
v[196]=0;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=929; 
(*f[42])( );     /*SRA1(135,0,929,V168)*/
V168=pile[WZ3]; 
pile[WZ1]=V168; pile[WZ2]=262; 
(*f[42])( );     /*SRA1(135,V168,262,V169)*/
V169=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NA; pile[WZ2]=V169; 
(*f[39])( );     /*SDX0(41,NA,V169,V170)*/
V170=pile[WZ3]; 
pile[v[22]]=V170; 
(*f[40])( );     /*SLG0(V170)*/
(*f[482])( );     /*E0()*/
l71:x[jvj+67]=vo[13];z[jvj+67]=vz[13];
pile[v[22]]=1028; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(1028,jvj+67,jvj+68)*/
l72:if((x[jvj+68]>0)) goto l73;
if(x[jvj+31]!=incon) goto l50;
goto l65;
l25:V54=V55;
goto l29;
l26:if((V68<4)) goto l27;
goto l38;
l27:pile[v[22]]=1006; pile[WZ1]=jvj+7; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(1006,jvj+7,jvj+28)*/
V161=v[14];
V163=x[jvj+7];
V165=x[jvj+28];
pile[v[22]]=0; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(0,91,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=V152; pile[WZ1]=V56; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V152,V56,41,V153)*/
V153=pile[WZ3]; 
pile[v[22]]=V153; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V153,93,V53)*/
V53=pile[WZ2]; 
V52=incon;
pile[v[22]]=1070; pile[WZ1]=jvj+7; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1070,jvj+7,jvj+27)*/
if((x[jvj+27]!=68)) goto l24;
pile[v[22]]=V53; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V53,42,V52)*/
V52=pile[WZ2]; 
goto l28;
l35:x[jvj+25]=vo[14];z[jvj+25]=vz[14];
pile[v[22]]=929; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(929,jvj+25,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=870; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(870,jvj+7,V58)*/
V58=pile[WZ2]; 
if((V58!=0)) goto l36;
pile[v[22]]=1070; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(1070,jvj+7,jvj+24)*/
if((x[jvj+24]==68)) goto l36;
goto l71;
l36:pile[v[22]]=218; pile[WZ1]=HIST; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(218,HIST,jvj+32)*/
x[jvj+33]=vo[20];z[jvj+33]=vz[20];
V167=v[14];
pile[v[22]]=870; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(870,jvj+7,V60)*/
V60=pile[WZ2]; 
if((V60<=1)) goto l37;
pile[v[22]]=jvj+25; pile[WZ1]=1037; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+25,1037,1)*/
l37:x[jvj+31]=x[jvj+7] ;z[jvj+31]=z[jvj+7];
if((V56!=v[202])) goto l31;
v[205]=1;
l31:V65=abs(v[89]);
V66=x[jvj+32];
if((V65!=V66)) goto l32;
V140=x[jvj+7];
pile[v[22]]=0; pile[WZ1]=10; 
(*f[178])( );     /*SPLO0(0,10,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=V134; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V134,91,V135)*/
V135=pile[WZ2]; 
pile[v[22]]=V135; pile[WZ1]=V56; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V135,V56,41,V136)*/
V136=pile[WZ3]; 
pile[v[22]]=V136; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V136,93,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V140; pile[WZ2]=V138; 
(*f[39])( );     /*SDX0(20,V140,V138,V139)*/
V139=pile[WZ3]; 
pile[v[22]]=V139; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l32;     /*SORHIST1(V139,HIST,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=V141; 
(*f[40])( );     /*SLG0(V141)*/
if((v[89]>=0)) goto l32;
(*f[84])( );     /*ARRET0()*/
l32:pile[v[22]]=1006; pile[WZ1]=jvj+7; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1006,jvj+7,jvj+29)*/
if((x[jvj+29]!=0)) goto l33;
pile[v[22]]=41; pile[WZ1]=V56; pile[WZ2]=jvj+30; 
(*f[445])( );     /*TRI15(41,V56,jvj+30)*/
pile[v[22]]=jvj+31; pile[WZ1]=1006; 
(*f[34])( );     /*CHGC0(jvj+31,1006,jvj+30)*/
l33:V68=g[555];
if((V68<=0)) goto l38;
V69=vg[555];
if((V69!=0)) goto l23;
if((V68<3)) goto l27;
l23:pile[v[22]]=555; pile[WZ1]=11325; pile[WZ2]=0; pile[WZ3]=(-1578); pile[WZ4]=V56; pile[WZ5]=jvj+26; 
(*f[612])( );     /*INTERP9(555,11325,0,(-1578),V56,jvj+26)*/
if((x[jvj+26]==135)) goto l26;
goto l38;
l40:if(V25==incon) goto l41;
l56:V31=V25*V32;
pile[v[22]]=509; pile[WZ1]=jvj+34; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(509,jvj+34,jvj+58)*/
for(i=x[jvj+58],V28=0;i>0;i=t[i],V28++)  ;
if((V28<=V31)) goto l58;
x[jvj+59]=vo[12];z[jvj+59]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(860,jvj+59,jvj+60)*/
if(x[jvj+60]==301||x[jvj+60]==1082||x[jvj+60]==336) goto l58;
V26=incon;
pile[v[22]]=1070; pile[WZ1]=jvj+31; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(1070,jvj+31,jvj+35)*/
if((x[jvj+35]!=68)) goto l42;
V26=68;
l42:pile[v[22]]=244; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(244,jvj+31,V38)*/
V38=pile[WZ2]; 
pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(244,jvj+34,V39)*/
V39=pile[WZ2]; 
if((V38<V39)) goto l43;
V26=68;
l57:S=V26;
if((v[244]<=0)) goto l70;
pile[v[22]]=1070; pile[WZ1]=jvj+31; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(1070,jvj+31,jvj+36)*/
if((x[jvj+36]!=68)) goto l70;
134;
l58:pile[v[22]]=1274; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(1274,jvj+31,H)*/
H=pile[WZ2]; 
pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l59;     /*FNDC0(1274,jvj+34,V106)*/
V106=pile[WZ2]; 
if((V106>=H)) goto l60;
l59:pile[v[22]]=jvj+34; pile[WZ1]=1274; pile[WZ2]=H; 
(*f[43])( );     /*CHGC2(jvj+34,1274,H)*/
l60:pile[v[22]]=870; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(870,jvj+31,V96)*/
V96=pile[WZ2]; 
if((V96>7)) goto l62;
pile[v[22]]=111; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+31,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]==55)) goto l61;
l49:pile[v[22]]=jvj+31; pile[WZ1]=jvj+47; 
(*f[1732])( );     /*Z265Z0(jvj+31,jvj+47)*/
if((x[jvj+47]!=135)) goto l47;
pile[v[22]]=1216; pile[WZ1]=jvj+34; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(1216,jvj+34,jvj+48)*/
for(a=x[jvj+48];a>0;a=t[a]) if(s[a]==1215) goto l61;
l47:pile[v[22]]=1273; pile[WZ1]=jvj+31; pile[WZ2]=jvj+45; 
(*f[492])( );     /*FIGURE0(1273,jvj+31,jvj+45)*/
if((x[jvj+45]==135)) goto l48;
l62:if((v[104]<=0)) goto l63;
pile[v[22]]=244; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(244,jvj+31,V93)*/
V93=pile[WZ2]; 
V175=x[jvj+31];
pile[v[22]]=41; pile[WZ1]=V93; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V93,0,V172)*/
V172=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V175; pile[WZ2]=V172; 
(*f[39])( );     /*SDX0(20,V175,V172,V174)*/
V174=pile[WZ3]; 
pile[v[22]]=V174; 
(*f[40])( );     /*SLG0(V174)*/
l63:x[jvj+61]=vo[14];z[jvj+61]=vz[14];
pile[v[22]]=1418; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(1418,jvj+61,jvj+62)*/
if((x[jvj+62]!=68)) goto l64;
pile[v[22]]=jvj+31; pile[WZ1]=HIST; 
(*f[1733])( );     /*CREEINFOS0(jvj+31,HIST)*/
(*f[1554])( );     /*CRETUCONTR0(jvj+31)*/
if((v[126]<=0)) goto l64;
pile[v[22]]=1417; pile[WZ1]=jvj+31; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(1417,jvj+31,jvj+51)*/
V177=x[jvj+31];
V179=x[jvj+51];
pile[v[22]]=20; pile[WZ1]=V177; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V177,0,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V179; pile[WZ2]=V176; 
(*f[39])( );     /*SDX0(23,V179,V176,V178)*/
V178=pile[WZ3]; 
pile[v[22]]=V178; 
(*f[40])( );     /*SLG0(V178)*/
l64:if(S==incon) goto l65;
if((S!=634)) goto l66;
l68:if((v[178]<=0)) goto l69;
(*f[439])( );     /*VERIFTOTALE0()*/
goto l69;
l41:V25=1;
goto l56;
l43:if(V26==incon) goto l44;
goto l57;
l44:V26=634;
goto l57;
l46:x[jvj+42]=t[x[jvj+42]];
goto l45;
l48:pile[v[22]]=1216; pile[WZ1]=jvj+34; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(1216,jvj+34,jvj+46)*/
for(a=x[jvj+46];a>0;a=t[a]) if(s[a]==1273) goto l61;
goto l62;
l50:if((v[247]<=0)) goto l51;
pile[v[22]]=218; pile[WZ1]=HIST; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(218,HIST,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=576; 
(*f[1734])( );     /*AJMEMA0(jvj+52,576)*/
l51:if((v[111]!=0)) goto l53;
if((v[127]!=0)) goto l53;
x[jvj+38]=vo[12];z[jvj+38]=vz[12];
pile[v[22]]=909; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(909,jvj+38,jvj+39)*/
if(x[jvj+39]==392||x[jvj+39]==205) goto l53;
l52:x[jvj+53]=vo[14];z[jvj+53]=vz[14];
pile[v[22]]=jvj+53; pile[WZ1]=946; pile[WZ2]=jvj+31; 
(*f[774])( );     /*TJPLUS0(jvj+53,946,jvj+31)*/
l53:pile[v[22]]=1300; pile[WZ1]=22; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(1300,22,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+31; pile[WZ2]=jvj+31; pile[WZ3]=1216; 
(*f[690])( );     /*FIGURENS0(jvj+54,jvj+31,jvj+31,1216)*/
x[jvj+34]=vo[16];z[jvj+34]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+34; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(498,jvj+34,jvj+55)*/
pile[v[22]]=1216; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(1216,jvj+55,jvj+56)*/
if((x[jvj+56]==0)) goto l54;
pile[v[22]]=jvj+56; pile[WZ1]=jvj+31; pile[WZ2]=jvj+31; pile[WZ3]=1216; 
(*f[690])( );     /*FIGURENS0(jvj+56,jvj+31,jvj+31,1216)*/
l54:pile[v[22]]=1070; pile[WZ1]=jvj+31; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(1070,jvj+31,jvj+57)*/
if((x[jvj+57]!=68)) goto l55;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(870,jvj+31,V22)*/
V22=pile[WZ2]; 
if((V22<=1)) goto l55;
pile[v[22]]=1; 
(*f[1325])( );if(v[102]) goto l55;     /*CALINC0(1,N)*/
N=pile[WZ1]; 
pile[v[22]]=jvj+34; pile[WZ1]=1221; pile[WZ2]=N; 
(*f[43])( );     /*CHGC2(jvj+34,1221,N)*/
l55:pile[v[22]]=870; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(870,jvj+31,V27)*/
V27=pile[WZ2]; 
if((V27<=1)) goto l58;
pile[v[22]]=1221; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(1221,jvj+34,V32)*/
V32=pile[WZ2]; 
V25=incon;
if((v[244]<=0)) goto l39;
V25=2;
l39:pile[v[22]]=905; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(905,jvj+34,V36)*/
V36=pile[WZ2]; 
if((V36!=(-9009))) goto l40;
V25=10;
goto l56;
l61:pile[v[22]]=jvj+31; pile[WZ1]=1030; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+31,1030,68)*/
pile[v[22]]=jvj+34; 
(*f[35])( );     /*CHGC1(jvj+34,1030,68)*/
goto l62;
l66:pile[v[22]]=jvj+31; pile[WZ1]=HIST; 
(*f[1736])( );     /*NOUVCONTRB0(jvj+31,HIST)*/
if((x[RS]!=250)) goto l68;
pile[v[22]]=868; pile[WZ1]=jvj+31; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(868,jvj+31,jvj+64)*/
if((x[jvj+64]!=25)) goto l68;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(870,jvj+31,V116)*/
V116=pile[WZ2]; 
if((V116>5)) goto l68;
if((V116<=1)) goto l68;
pile[v[22]]=1070; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(1070,jvj+31,jvj+63)*/
if((x[jvj+63]==68)) goto l68;
l67:x[jvj+65]=vo[16];z[jvj+65]=vz[16];
pile[v[22]]=1189; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(1189,jvj+65,jvj+66)*/
if((x[jvj+66]==0)) goto l68;
pile[v[22]]=jvj+31; pile[WZ1]=HIST; 
(*f[1735])( );     /*CONTRSYM0(jvj+31,HIST)*/
goto l68;
l70:pile[v[22]]=1137; pile[WZ1]=158; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(1137,158,jvj+37)*/
pile[v[22]]=jvj+37; 
(*f[605])( );     /*MONITEUR0(jvj+37)*/
goto l58;
l73:x[jvj+69]=s[x[jvj+68]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+68];
pile[v[22]]=jvj+69; pile[WZ1]=117; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+69,117,0)*/
x[jvj+68]=t[x[jvj+68]];
goto l72;
}
