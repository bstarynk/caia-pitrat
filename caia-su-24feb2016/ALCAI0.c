#include "dx.h"
void ALCAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V10=0,V11=0,V12=0,V13=0,V3=0,V85=0,V69=0,V70=0,V87=0,V121=0,V95=0,V113=0,V92=0,V93=0,V91=0,V159=0,V150=0,V25=0,V=0,V47=0,V49=0,V182=0,V126=0,V128=0,V183=0,V36=0,V42=0,V31=0,W=0,V54=0,VV=0,V46=0,V133=0,V141=0,V125=0,V167=0,NN=0;
int AL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=273;
x[jvj+1]=10795;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==309&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
AL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[20];z[jvj+2]=vz[20];
pile[v[22]]=jvj+2; pile[WZ1]=322; pile[WZ2]=1500; 
(*f[43])( );     /*CHGC2(jvj+2,322,1500)*/
V14=x[AL];
pile[v[22]]=AL; pile[WZ1]=0; pile[WZ2]=V14; pile[WZ3]=1216; 
(*f[285])( );     /*ENLY0(AL,0,V14,1216,V10,V11)*/
V10=pile[WZ4]; V11=pile[WZ5]; 
pile[WZ1]=V11; pile[WZ2]=V10; pile[WZ3]=1274; 
(*f[285])( );     /*ENLY0(AL,V11,V10,1274,V12,V13)*/
V12=pile[WZ4]; V13=pile[WZ5]; 
x[jvj+3]=d[32];z[jvj+3]=0;
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=455; pile[WZ1]=AL; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(455,AL,jvj+9)*/
l6:if((x[jvj+9]>0)) goto l7;
pile[v[22]]=455; pile[WZ1]=AL; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(455,AL,jvj+62)*/
pile[v[22]]=1016; pile[WZ1]=1216; pile[WZ2]=jvj+63; 
(*f[33])( );     /*FNDE0(1016,1216,jvj+63)*/
l32:if((x[jvj+62]>0)) goto l33;
pile[v[22]]=454; pile[WZ1]=AL; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(454,AL,jvj+65)*/
l34:if((x[jvj+65]>0)) goto l35;
pile[v[22]]=448; pile[WZ1]=AL; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(448,AL,jvj+71)*/
x[jvj+77]=0 ;z[jvj+77]=0;
x[jvj+78]=0 ;z[jvj+78]=0;
x[jvj+79]=0 ;z[jvj+79]=0;
l37:if((x[jvj+71]>0)) goto l38;
x[jvj+42]=0 ;z[jvj+42]=0;
pile[v[22]]=454; pile[WZ1]=AL; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(454,AL,jvj+36)*/
l20:if((x[jvj+36]>0)) goto l21;
pile[v[22]]=448; pile[WZ1]=AL; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(448,AL,jvj+43)*/
l23:if((x[jvj+43]>0)) goto l24;
x[jvj+90]=x[jvj+42] ;z[jvj+90]=z[jvj+42];
x[jvj+29]=0 ;z[jvj+29]=0;
pile[v[22]]=448; pile[WZ1]=AL; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(448,AL,jvj+20)*/
x[jvj+21]=d[33];z[jvj+21]=0;
l10:if((x[jvj+20]>0)) goto l11;
x[jvj+92]=x[jvj+29] ;z[jvj+92]=z[jvj+29];
x[jvj+270]=x[jvj+92] ;z[jvj+270]=z[jvj+92];
l14:if((x[jvj+270]>0)) goto l15;
pile[v[22]]=448; pile[WZ1]=AL; pile[WZ2]=jvj+82; 
(*f[33])( );     /*FNDE0(448,AL,jvj+82)*/
x[jvj+91]=0 ;z[jvj+91]=0;
l45:if((x[jvj+82]>0)) goto l46;
pile[v[22]]=455; pile[WZ1]=AL; pile[WZ2]=jvj+100; 
(*f[33])( );     /*FNDE0(455,AL,jvj+100)*/
l51:if((x[jvj+100]>0)) goto l52;
l54:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=AL; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(jvj+4,AL,jvj+5)*/
x[jvj+269]=x[jvj+5] ;z[jvj+269]=z[jvj+5];
l3:if((x[jvj+269]>0)) goto l4;
x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+6]=s[x[jvj+269]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+269];
pile[v[22]]=613; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(613,jvj+6,jvj+7)*/
V3=x[jvj+6];
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[v[22]]=jvj+4; pile[WZ1]=AL; pile[WZ2]=V3; 
(*f[134])( );     /*OTA0(jvj+4,AL,V3)*/
pile[v[22]]=AL; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(AL,jvj+4,jvj+8)*/
l5:x[jvj+269]=t[x[jvj+269]];
goto l3;
l7:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+10,jvj+11)*/
pile[v[22]]=20; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[409])( );     /*TRI14(20,jvj+11,jvj+12)*/
pile[v[22]]=107; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,jvj+10,jvj+13)*/
pile[v[22]]=AL; pile[WZ1]=jvj+12; pile[WZ3]=jvj+14; 
(*f[403])( );     /*DEFMINMAX0(AL,jvj+12,jvj+13,jvj+14)*/
if((x[jvj+14]==68)) goto l9;
l8:x[jvj+9]=t[x[jvj+9]];
goto l6;
l9:pile[v[22]]=AL; pile[WZ1]=1182; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(AL,1182,68)*/
goto l8;
l11:x[jvj+22]=s[x[jvj+20]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+20];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=448)) goto l12;
pile[v[22]]=436; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(436,jvj+22,jvj+24)*/
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+24,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+22,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+25,jvj+26)*/
V69=x[jvj+26];
if(V69!=451&&V69!=128) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+22,jvj+17)*/
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]==267)) goto l12;
l13:pile[v[22]]=jvj+17; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+27)*/
V70=V85;
pile[v[22]]=110; pile[WZ1]=V70; pile[WZ2]=111; pile[WZ3]=jvj+27; pile[WZ4]=jvj+28; 
(*f[692])( );     /*QUADRI13(110,V70,111,jvj+27,jvj+28)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[196])( );     /*PLUF0(jvj+21,jvj+28,jvj+29)*/
l12:x[jvj+20]=t[x[jvj+20]];
goto l10;
l15:x[jvj+30]=s[x[jvj+270]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+270];
pile[v[22]]=110; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(110,jvj+30,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=111; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+30,jvj+31)*/
x[jvj+271]=x[jvj+92] ;z[jvj+271]=z[jvj+92];
l17:if((x[jvj+271]<=0)) goto l16;
x[jvj+32]=s[x[jvj+271]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+271];
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=V87; pile[WZ1]=jvj+31; 
(*f[688])( );     /*SUBVX0(V87,jvj+31,jvj+33)*/
l18:x[jvj+271]=t[x[jvj+271]];
goto l17;
l16:x[jvj+270]=t[x[jvj+270]];
goto l14;
l21:x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=100; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+37,jvj+38)*/
if((x[jvj+38]!=454)) goto l22;
pile[v[22]]=436; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(436,jvj+37,jvj+39)*/
pile[v[22]]=140; pile[WZ1]=jvj+39; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+39,V121)*/
V121=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=jvj+37; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(160,jvj+37,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=128)) goto l22;
V95=V121;
pile[v[22]]=jvj+42; pile[WZ1]=V95; 
(*f[331])( );     /*PLUE3(jvj+42,V95)*/
l22:x[jvj+36]=t[x[jvj+36]];
goto l20;
l24:x[jvj+34]=s[x[jvj+43]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+43];
pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+34,jvj+44)*/
if((x[jvj+44]!=448)) goto l25;
pile[v[22]]=436; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(436,jvj+34,jvj+45)*/
pile[v[22]]=140; pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+45,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+34,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+46,jvj+47)*/
V92=x[jvj+47];
if(V92!=453&&V92!=531&&V92!=979&&V92!=1027) goto l19;
V93=V113;
pile[v[22]]=jvj+42; pile[WZ1]=V93; 
(*f[331])( );     /*PLUE3(jvj+42,V93)*/
l19:pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+34,jvj+35)*/
l25:x[jvj+43]=t[x[jvj+43]];
goto l23;
l26:V91=V113;
pile[v[22]]=jvj+42; pile[WZ1]=V91; 
(*f[331])( );     /*PLUE3(jvj+42,V91)*/
goto l25;
l27:x[jvj+59]=x[jvj+48] ;z[jvj+59]=z[jvj+48];
l55:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7510); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7510),jvj+51)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; pile[WZ2]=jvj+48; pile[WZ3]=67; pile[WZ4]=jvj+52; pile[WZ5]=jvj+53; 
(*f[689])( );if(v[102]) goto l30;     /*SUBSTITUVAR0(jvj+50,jvj+51,jvj+48,67,jvj+52,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7510); pile[WZ4]=jvj+54; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7510),jvj+54)*/
pile[WZ3]=V150; pile[WZ4]=jvj+102; 
(*f[270])( );     /*QUADRI7(100,21,140,V150,jvj+102)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+104; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+104)*/
pile[v[22]]=jvj+102; pile[WZ1]=111; pile[WZ2]=jvj+103; 
(*f[54])( );     /*TRI1(jvj+102,111,jvj+103)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+104; pile[WZ4]=jvj+103; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+104,jvj+103,jvj+55)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=jvj+53; pile[WZ3]=67; pile[WZ4]=jvj+56; pile[WZ5]=jvj+57; 
(*f[689])( );if(v[102]) goto l30;     /*SUBSTITUVAR0(jvj+54,jvj+55,jvj+53,67,jvj+56,jvj+57)*/
pile[v[22]]=AL; pile[WZ1]=jvj+58; pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(AL,jvj+58,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=613; pile[WZ2]=jvj+59; 
(*f[35])( );     /*CHGC1(jvj+57,613,jvj+59)*/
l30:x[jvj+273]=t[x[jvj+273]];
l28:if((x[jvj+273]>0)) goto l29;
x[jvj+60]=t[x[jvj+60]];
l31:if((x[jvj+60]<=0)) goto l36;
x[jvj+58]=s[x[jvj+60]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+60];
pile[v[22]]=jvj+58; pile[WZ1]=AL; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(jvj+58,AL,jvj+61)*/
x[jvj+273]=x[jvj+61] ;z[jvj+273]=z[jvj+61];
(*f[71])( );     /*ENLV0(jvj+58,AL)*/
goto l28;
l29:x[jvj+48]=s[x[jvj+273]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+273];
x[jvj+59]=incon;
pile[v[22]]=613; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(613,jvj+48,jvj+49)*/
x[jvj+272]=x[jvj+49] ;z[jvj+272]=z[jvj+49];
x[jvj+59]=x[jvj+272] ;z[jvj+59]=z[jvj+272];
goto l55;
l33:x[jvj+64]=s[x[jvj+62]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+62];
pile[v[22]]=jvj+63; pile[WZ1]=AL; pile[WZ2]=jvj+64; pile[WZ3]=1216; 
(*f[690])( );     /*FIGURENS0(jvj+63,AL,jvj+64,1216)*/
x[jvj+62]=t[x[jvj+62]];
goto l32;
l35:x[jvj+66]=s[x[jvj+65]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+65];
pile[v[22]]=613; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(613,jvj+66,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+67,jvj+68)*/
if((x[jvj+68]!=454)) goto l36;
pile[v[22]]=436; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(436,jvj+67,jvj+50)*/
pile[v[22]]=140; pile[WZ1]=jvj+50; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+50,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+67; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+67,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+69,jvj+70)*/
if((x[jvj+70]!=21)) goto l36;
V150=V159;
x[jvj+60]=d[32];z[jvj+60]=0;
goto l31;
l36:x[jvj+65]=t[x[jvj+65]];
goto l34;
l38:x[jvj+15]=s[x[jvj+71]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+71];
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(100,jvj+15,jvj+72)*/
if((x[jvj+72]!=448)) goto l39;
pile[v[22]]=436; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(436,jvj+15,jvj+73)*/
pile[v[22]]=140; pile[WZ1]=jvj+73; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(140,jvj+73,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+15,jvj+74)*/
pile[v[22]]=101; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+74,jvj+75)*/
x[jvj+113]=x[jvj+75] ;z[jvj+113]=z[jvj+75];
if(x[jvj+113]!=451&&x[jvj+113]!=128) goto l39;
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,jvj+15,jvj+16)*/
l39:x[jvj+71]=t[x[jvj+71]];
goto l37;
l40:V=V25;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10811; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,20,101,10811,jvj+107)*/
pile[WZ3]=jvj+113; pile[WZ4]=jvj+112; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+113,jvj+112)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-623); pile[WZ4]=jvj+110; 
(*f[270])( );     /*QUADRI7(100,21,140,(-623),jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=103; pile[WZ2]=jvj+111; 
(*f[54])( );     /*TRI1(jvj+110,103,jvj+111)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+112; pile[WZ4]=jvj+111; pile[WZ5]=jvj+108; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+112,jvj+111,jvj+108)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V; pile[WZ4]=jvj+116; 
(*f[270])( );     /*QUADRI7(100,96,163,V,jvj+116)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-756); pile[WZ4]=jvj+114; 
(*f[270])( );     /*QUADRI7(100,21,140,(-756),jvj+114)*/
pile[v[22]]=jvj+114; pile[WZ1]=103; pile[WZ2]=jvj+115; 
(*f[54])( );     /*TRI1(jvj+114,103,jvj+115)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+116; pile[WZ4]=jvj+115; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+116,jvj+115,jvj+109)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+107; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+107,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=114; pile[WZ2]=jvj+108; 
(*f[36])( );     /*PLUSC0(jvj+105,114,jvj+108)*/
pile[WZ2]=jvj+109; 
(*f[36])( );     /*PLUSC0(jvj+105,114,jvj+109)*/
pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+106; 
(*f[180])( );     /*TRIENS0(jvj+105,(-20),105,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+106,42,100,jvj+76)*/
pile[v[22]]=10547; pile[WZ1]=184; pile[WZ2]=jvj+76; 
(*f[36])( );     /*PLUSC0(10547,184,jvj+76)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; pile[WZ3]=AL; pile[WZ4]=jvj+79; 
(*f[687])( );     /*CRINT0(jvj+15,jvj+77,jvj+78,AL,jvj+79)*/
goto l39;
l42:V49=s[V182];
pile[v[22]]=jvj+80; pile[WZ1]=V49; 
(*f[331])( );     /*PLUE3(jvj+80,V49)*/
V182=t[V182];
l41:if((V182>0)) goto l42;
VV=V36;
V46=V54;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10800; pile[WZ4]=jvj+170; 
(*f[181])( );     /*QUADRI2(100,20,101,10800,jvj+170)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V46; pile[WZ4]=jvj+173; 
(*f[270])( );     /*QUADRI7(100,96,163,V46,jvj+173)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-622); pile[WZ4]=jvj+171; 
(*f[270])( );     /*QUADRI7(100,21,140,(-622),jvj+171)*/
pile[v[22]]=jvj+171; pile[WZ1]=103; pile[WZ2]=jvj+172; 
(*f[54])( );     /*TRI1(jvj+171,103,jvj+172)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+173; pile[WZ4]=jvj+172; pile[WZ5]=jvj+166; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+173,jvj+172,jvj+166)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6180); pile[WZ4]=jvj+176; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6180),jvj+176)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+174; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=103; pile[WZ2]=jvj+175; 
(*f[54])( );     /*TRI1(jvj+174,103,jvj+175)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+176; pile[WZ4]=jvj+175; pile[WZ5]=jvj+168; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+176,jvj+175,jvj+168)*/
pile[v[22]]=jvj+166; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+167; 
(*f[180])( );     /*TRIENS0(jvj+166,(-20),114,jvj+167)*/
pile[v[22]]=jvj+168; pile[WZ2]=jvj+167; pile[WZ3]=113; pile[WZ4]=jvj+169; 
(*f[298])( );     /*TRIENS1(jvj+168,(-20),jvj+167,113,jvj+169)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+170; pile[WZ5]=jvj+164; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+170,jvj+169,jvj+164)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10800; pile[WZ4]=jvj+181; 
(*f[181])( );     /*QUADRI2(100,20,101,10800,jvj+181)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=VV; pile[WZ4]=jvj+184; 
(*f[270])( );     /*QUADRI7(100,96,163,VV,jvj+184)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-622); pile[WZ4]=jvj+182; 
(*f[270])( );     /*QUADRI7(100,21,140,(-622),jvj+182)*/
pile[v[22]]=jvj+182; pile[WZ1]=103; pile[WZ2]=jvj+183; 
(*f[54])( );     /*TRI1(jvj+182,103,jvj+183)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+184; pile[WZ4]=jvj+183; pile[WZ5]=jvj+177; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+184,jvj+183,jvj+177)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3821); pile[WZ4]=jvj+187; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3821),jvj+187)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+185; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+185)*/
pile[v[22]]=jvj+185; pile[WZ1]=103; pile[WZ2]=jvj+186; 
(*f[54])( );     /*TRI1(jvj+185,103,jvj+186)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+187; pile[WZ4]=jvj+186; pile[WZ5]=jvj+179; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+187,jvj+186,jvj+179)*/
pile[v[22]]=jvj+177; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+178; 
(*f[180])( );     /*TRIENS0(jvj+177,(-20),114,jvj+178)*/
pile[v[22]]=jvj+179; pile[WZ2]=jvj+178; pile[WZ3]=113; pile[WZ4]=jvj+180; 
(*f[298])( );     /*TRIENS1(jvj+179,(-20),jvj+178,113,jvj+180)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+181; pile[WZ5]=jvj+165; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+181,jvj+180,jvj+165)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10810; pile[WZ4]=jvj+188; 
(*f[181])( );     /*QUADRI2(100,20,101,10810,jvj+188)*/
pile[WZ3]=453; pile[WZ4]=jvj+197; 
(*f[181])( );     /*QUADRI2(100,20,101,453,jvj+197)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-623); pile[WZ4]=jvj+195; 
(*f[270])( );     /*QUADRI7(100,21,140,(-623),jvj+195)*/
pile[v[22]]=jvj+195; pile[WZ1]=103; pile[WZ2]=jvj+196; 
(*f[54])( );     /*TRI1(jvj+195,103,jvj+196)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+197; pile[WZ4]=jvj+196; pile[WZ5]=jvj+189; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+197,jvj+196,jvj+189)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V47; pile[WZ4]=jvj+200; 
(*f[270])( );     /*QUADRI7(100,96,163,V47,jvj+200)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-756); pile[WZ4]=jvj+198; 
(*f[270])( );     /*QUADRI7(100,21,140,(-756),jvj+198)*/
pile[v[22]]=jvj+198; pile[WZ1]=103; pile[WZ2]=jvj+199; 
(*f[54])( );     /*TRI1(jvj+198,103,jvj+199)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+200; pile[WZ4]=jvj+199; pile[WZ5]=jvj+190; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+200,jvj+199,jvj+190)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6180); pile[WZ4]=jvj+203; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6180),jvj+203)*/
pile[WZ3]=(-2730); pile[WZ4]=jvj+201; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2730),jvj+201)*/
pile[v[22]]=jvj+201; pile[WZ1]=103; pile[WZ2]=jvj+202; 
(*f[54])( );     /*TRI1(jvj+201,103,jvj+202)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+203; pile[WZ4]=jvj+202; pile[WZ5]=jvj+191; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+203,jvj+202,jvj+191)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3821); pile[WZ4]=jvj+206; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3821),jvj+206)*/
pile[WZ3]=(-2889); pile[WZ4]=jvj+204; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2889),jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=103; pile[WZ2]=jvj+205; 
(*f[54])( );     /*TRI1(jvj+204,103,jvj+205)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+206; pile[WZ4]=jvj+205; pile[WZ5]=jvj+192; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+206,jvj+205,jvj+192)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=877; pile[WZ4]=jvj+210; 
(*f[181])( );     /*QUADRI2(100,20,101,877,jvj+210)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V46; pile[WZ4]=jvj+214; 
(*f[270])( );     /*QUADRI7(100,96,163,V46,jvj+214)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+212; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+212)*/
pile[v[22]]=jvj+210; pile[WZ1]=111; pile[WZ2]=jvj+211; 
(*f[54])( );     /*TRI1(jvj+210,111,jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=jvj+212; pile[WZ2]=103; pile[WZ3]=jvj+213; 
(*f[58])( );     /*TRI3(jvj+211,jvj+212,103,jvj+213)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+214; pile[WZ4]=jvj+213; pile[WZ5]=jvj+209; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+214,jvj+213,jvj+209)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6481); pile[WZ4]=jvj+207; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6481),jvj+207)*/
pile[v[22]]=jvj+207; pile[WZ1]=103; pile[WZ2]=jvj+208; 
(*f[54])( );     /*TRI1(jvj+207,103,jvj+208)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+209; pile[WZ4]=jvj+208; pile[WZ5]=jvj+193; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+209,jvj+208,jvj+193)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=877; pile[WZ4]=jvj+218; 
(*f[181])( );     /*QUADRI2(100,20,101,877,jvj+218)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=VV; pile[WZ4]=jvj+222; 
(*f[270])( );     /*QUADRI7(100,96,163,VV,jvj+222)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+220; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+220)*/
pile[v[22]]=jvj+218; pile[WZ1]=111; pile[WZ2]=jvj+219; 
(*f[54])( );     /*TRI1(jvj+218,111,jvj+219)*/
pile[v[22]]=jvj+219; pile[WZ1]=jvj+220; pile[WZ2]=103; pile[WZ3]=jvj+221; 
(*f[58])( );     /*TRI3(jvj+219,jvj+220,103,jvj+221)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+222; pile[WZ4]=jvj+221; pile[WZ5]=jvj+217; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+222,jvj+221,jvj+217)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6482); pile[WZ4]=jvj+215; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6482),jvj+215)*/
pile[v[22]]=jvj+215; pile[WZ1]=103; pile[WZ2]=jvj+216; 
(*f[54])( );     /*TRI1(jvj+215,103,jvj+216)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+217; pile[WZ4]=jvj+216; pile[WZ5]=jvj+194; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+217,jvj+216,jvj+194)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+188; pile[WZ4]=jvj+162; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+188,jvj+162)*/
pile[v[22]]=jvj+162; pile[WZ1]=114; pile[WZ2]=jvj+189; 
(*f[36])( );     /*PLUSC0(jvj+162,114,jvj+189)*/
pile[WZ2]=jvj+190; 
(*f[36])( );     /*PLUSC0(jvj+162,114,jvj+190)*/
pile[WZ2]=jvj+191; 
(*f[36])( );     /*PLUSC0(jvj+162,114,jvj+191)*/
pile[WZ2]=jvj+192; 
(*f[36])( );     /*PLUSC0(jvj+162,114,jvj+192)*/
pile[WZ2]=jvj+193; 
(*f[36])( );     /*PLUSC0(jvj+162,114,jvj+193)*/
pile[WZ2]=jvj+194; 
(*f[36])( );     /*PLUSC0(jvj+162,114,jvj+194)*/
pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+163; 
(*f[180])( );     /*TRIENS0(jvj+162,(-20),105,jvj+163)*/
pile[v[22]]=jvj+163; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+163,42,100,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=107; pile[WZ2]=jvj+164; 
(*f[36])( );     /*PLUSC0(jvj+94,107,jvj+164)*/
pile[WZ2]=jvj+165; 
(*f[36])( );     /*PLUSC0(jvj+94,107,jvj+165)*/
pile[v[22]]=10547; pile[WZ1]=184; pile[WZ2]=jvj+94; 
(*f[36])( );     /*PLUSC0(10547,184,jvj+94)*/
pile[v[22]]=jvj+83; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; pile[WZ3]=AL; pile[WZ4]=jvj+80; 
(*f[687])( );     /*CRINT0(jvj+83,jvj+91,jvj+92,AL,jvj+80)*/
l49:pile[v[22]]=102; pile[WZ1]=jvj+83; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+83,jvj+95)*/
pile[v[22]]=140; pile[WZ1]=jvj+95; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(140,jvj+95,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=436; pile[WZ1]=jvj+83; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(436,jvj+83,jvj+96)*/
pile[v[22]]=140; pile[WZ1]=jvj+96; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(140,jvj+96,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+83; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+83,jvj+97)*/
pile[v[22]]=101; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+97,jvj+98)*/
x[jvj+248]=x[jvj+98] ;z[jvj+248]=z[jvj+98];
if(x[jvj+248]!=979&&x[jvj+248]!=1027) goto l47;
V126=V141;
x[jvj+81]=0 ;z[jvj+81]=0;
pile[v[22]]=jvj+81; pile[WZ1]=(-657); 
(*f[331])( );     /*PLUE3(jvj+81,(-657))*/
pile[WZ1]=V126; 
(*f[331])( );     /*PLUE3(jvj+81,V126)*/
V183=x[jvj+90];
l43:if((V183>0)) goto l44;
V125=V133;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10800; pile[WZ4]=jvj+231; 
(*f[181])( );     /*QUADRI2(100,20,101,10800,jvj+231)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V125; pile[WZ4]=jvj+234; 
(*f[270])( );     /*QUADRI7(100,96,163,V125,jvj+234)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-622); pile[WZ4]=jvj+232; 
(*f[270])( );     /*QUADRI7(100,21,140,(-622),jvj+232)*/
pile[v[22]]=jvj+232; pile[WZ1]=103; pile[WZ2]=jvj+233; 
(*f[54])( );     /*TRI1(jvj+232,103,jvj+233)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+234; pile[WZ4]=jvj+233; pile[WZ5]=jvj+227; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+234,jvj+233,jvj+227)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6180); pile[WZ4]=jvj+237; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6180),jvj+237)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+235; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+235)*/
pile[v[22]]=jvj+235; pile[WZ1]=103; pile[WZ2]=jvj+236; 
(*f[54])( );     /*TRI1(jvj+235,103,jvj+236)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+237; pile[WZ4]=jvj+236; pile[WZ5]=jvj+229; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+237,jvj+236,jvj+229)*/
pile[v[22]]=jvj+227; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+228; 
(*f[180])( );     /*TRIENS0(jvj+227,(-20),114,jvj+228)*/
pile[v[22]]=jvj+229; pile[WZ2]=jvj+228; pile[WZ3]=113; pile[WZ4]=jvj+230; 
(*f[298])( );     /*TRIENS1(jvj+229,(-20),jvj+228,113,jvj+230)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+231; pile[WZ5]=jvj+223; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+231,jvj+230,jvj+223)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10810; pile[WZ4]=jvj+238; 
(*f[181])( );     /*QUADRI2(100,20,101,10810,jvj+238)*/
pile[WZ3]=jvj+248; pile[WZ4]=jvj+247; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+248,jvj+247)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-623); pile[WZ4]=jvj+245; 
(*f[270])( );     /*QUADRI7(100,21,140,(-623),jvj+245)*/
pile[v[22]]=jvj+245; pile[WZ1]=103; pile[WZ2]=jvj+246; 
(*f[54])( );     /*TRI1(jvj+245,103,jvj+246)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+247; pile[WZ4]=jvj+246; pile[WZ5]=jvj+239; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+247,jvj+246,jvj+239)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V126; pile[WZ4]=jvj+251; 
(*f[270])( );     /*QUADRI7(100,96,163,V126,jvj+251)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-756); pile[WZ4]=jvj+249; 
(*f[270])( );     /*QUADRI7(100,21,140,(-756),jvj+249)*/
pile[v[22]]=jvj+249; pile[WZ1]=103; pile[WZ2]=jvj+250; 
(*f[54])( );     /*TRI1(jvj+249,103,jvj+250)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+251; pile[WZ4]=jvj+250; pile[WZ5]=jvj+240; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+251,jvj+250,jvj+240)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6180); pile[WZ4]=jvj+254; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6180),jvj+254)*/
pile[WZ3]=(-2730); pile[WZ4]=jvj+252; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2730),jvj+252)*/
pile[v[22]]=jvj+252; pile[WZ1]=103; pile[WZ2]=jvj+253; 
(*f[54])( );     /*TRI1(jvj+252,103,jvj+253)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+254; pile[WZ4]=jvj+253; pile[WZ5]=jvj+241; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+254,jvj+253,jvj+241)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+257; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+257)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2889); pile[WZ4]=jvj+255; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2889),jvj+255)*/
pile[v[22]]=jvj+255; pile[WZ1]=103; pile[WZ2]=jvj+256; 
(*f[54])( );     /*TRI1(jvj+255,103,jvj+256)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+257; pile[WZ4]=jvj+256; pile[WZ5]=jvj+242; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+257,jvj+256,jvj+242)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=877; pile[WZ4]=jvj+261; 
(*f[181])( );     /*QUADRI2(100,20,101,877,jvj+261)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V125; pile[WZ4]=jvj+265; 
(*f[270])( );     /*QUADRI7(100,96,163,V125,jvj+265)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+263; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+263)*/
pile[v[22]]=jvj+261; pile[WZ1]=111; pile[WZ2]=jvj+262; 
(*f[54])( );     /*TRI1(jvj+261,111,jvj+262)*/
pile[v[22]]=jvj+262; pile[WZ1]=jvj+263; pile[WZ2]=103; pile[WZ3]=jvj+264; 
(*f[58])( );     /*TRI3(jvj+262,jvj+263,103,jvj+264)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+265; pile[WZ4]=jvj+264; pile[WZ5]=jvj+260; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+265,jvj+264,jvj+260)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6481); pile[WZ4]=jvj+258; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6481),jvj+258)*/
pile[v[22]]=jvj+258; pile[WZ1]=103; pile[WZ2]=jvj+259; 
(*f[54])( );     /*TRI1(jvj+258,103,jvj+259)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+260; pile[WZ4]=jvj+259; pile[WZ5]=jvj+243; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+260,jvj+259,jvj+243)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+268; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+268)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6482); pile[WZ4]=jvj+266; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6482),jvj+266)*/
pile[v[22]]=jvj+266; pile[WZ1]=103; pile[WZ2]=jvj+267; 
(*f[54])( );     /*TRI1(jvj+266,103,jvj+267)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+268; pile[WZ4]=jvj+267; pile[WZ5]=jvj+244; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+268,jvj+267,jvj+244)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+238; pile[WZ4]=jvj+225; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+238,jvj+225)*/
pile[v[22]]=jvj+225; pile[WZ1]=114; pile[WZ2]=jvj+239; 
(*f[36])( );     /*PLUSC0(jvj+225,114,jvj+239)*/
pile[WZ2]=jvj+240; 
(*f[36])( );     /*PLUSC0(jvj+225,114,jvj+240)*/
pile[WZ2]=jvj+241; 
(*f[36])( );     /*PLUSC0(jvj+225,114,jvj+241)*/
pile[WZ2]=jvj+242; 
(*f[36])( );     /*PLUSC0(jvj+225,114,jvj+242)*/
pile[WZ2]=jvj+243; 
(*f[36])( );     /*PLUSC0(jvj+225,114,jvj+243)*/
pile[WZ2]=jvj+244; 
(*f[36])( );     /*PLUSC0(jvj+225,114,jvj+244)*/
pile[v[22]]=jvj+223; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+224; 
(*f[180])( );     /*TRIENS0(jvj+223,(-20),107,jvj+224)*/
pile[v[22]]=jvj+225; pile[WZ2]=jvj+224; pile[WZ3]=105; pile[WZ4]=jvj+226; 
(*f[298])( );     /*TRIENS1(jvj+225,(-20),jvj+224,105,jvj+226)*/
pile[v[22]]=jvj+226; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+99; 
(*f[58])( );     /*TRI3(jvj+226,42,100,jvj+99)*/
pile[v[22]]=10547; pile[WZ1]=184; pile[WZ2]=jvj+99; 
(*f[36])( );     /*PLUSC0(10547,184,jvj+99)*/
pile[v[22]]=jvj+83; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; pile[WZ3]=AL; pile[WZ4]=jvj+81; 
(*f[687])( );     /*CRINT0(jvj+83,jvj+91,jvj+92,AL,jvj+81)*/
l47:x[jvj+82]=t[x[jvj+82]];
goto l45;
l44:V128=s[V183];
pile[v[22]]=jvj+81; pile[WZ1]=V128; 
(*f[331])( );     /*PLUE3(jvj+81,V128)*/
V183=t[V183];
goto l43;
l46:x[jvj+83]=s[x[jvj+82]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+82];
pile[v[22]]=100; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,jvj+83,jvj+84)*/
if((x[jvj+84]!=448)) goto l47;
pile[v[22]]=103; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(103,jvj+83,jvj+85)*/
pile[v[22]]=140; pile[WZ1]=jvj+85; 
(*f[44])( );if(v[102]) goto l49;     /*FNDC1(140,jvj+85,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=436; pile[WZ1]=jvj+83; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(436,jvj+83,jvj+86)*/
pile[v[22]]=140; pile[WZ1]=jvj+86; 
(*f[44])( );if(v[102]) goto l49;     /*FNDC1(140,jvj+86,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+83; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+83,jvj+87)*/
pile[v[22]]=101; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+87,jvj+88)*/
if((x[jvj+88]==531)) goto l48;
if((x[jvj+88]!=453)) goto l49;
pile[v[22]]=102; pile[WZ1]=jvj+83; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(102,jvj+83,jvj+93)*/
pile[v[22]]=140; pile[WZ1]=jvj+93; 
(*f[44])( );if(v[102]) goto l49;     /*FNDC1(140,jvj+93,V54)*/
V54=pile[WZ2]; 
V47=V42;
x[jvj+80]=0 ;z[jvj+80]=0;
pile[v[22]]=jvj+80; pile[WZ1]=(-657); 
(*f[331])( );     /*PLUE3(jvj+80,(-657))*/
pile[WZ1]=V47; 
(*f[331])( );     /*PLUE3(jvj+80,V47)*/
V182=x[jvj+90];
goto l41;
l48:V31=V36;
W=V42;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10800; pile[WZ4]=jvj+125; 
(*f[181])( );     /*QUADRI2(100,20,101,10800,jvj+125)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V31; pile[WZ4]=jvj+128; 
(*f[270])( );     /*QUADRI7(100,96,163,V31,jvj+128)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-622); pile[WZ4]=jvj+126; 
(*f[270])( );     /*QUADRI7(100,21,140,(-622),jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=103; pile[WZ2]=jvj+127; 
(*f[54])( );     /*TRI1(jvj+126,103,jvj+127)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+128; pile[WZ4]=jvj+127; pile[WZ5]=jvj+121; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+128,jvj+127,jvj+121)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3821); pile[WZ4]=jvj+131; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3821),jvj+131)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+129; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+129)*/
pile[v[22]]=jvj+129; pile[WZ1]=103; pile[WZ2]=jvj+130; 
(*f[54])( );     /*TRI1(jvj+129,103,jvj+130)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+131; pile[WZ4]=jvj+130; pile[WZ5]=jvj+123; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+131,jvj+130,jvj+123)*/
pile[v[22]]=jvj+121; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+122; 
(*f[180])( );     /*TRIENS0(jvj+121,(-20),114,jvj+122)*/
pile[v[22]]=jvj+123; pile[WZ2]=jvj+122; pile[WZ3]=113; pile[WZ4]=jvj+124; 
(*f[298])( );     /*TRIENS1(jvj+123,(-20),jvj+122,113,jvj+124)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+125; pile[WZ5]=jvj+117; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+125,jvj+124,jvj+117)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10810; pile[WZ4]=jvj+132; 
(*f[181])( );     /*QUADRI2(100,20,101,10810,jvj+132)*/
pile[WZ3]=531; pile[WZ4]=jvj+141; 
(*f[181])( );     /*QUADRI2(100,20,101,531,jvj+141)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-623); pile[WZ4]=jvj+139; 
(*f[270])( );     /*QUADRI7(100,21,140,(-623),jvj+139)*/
pile[v[22]]=jvj+139; pile[WZ1]=103; pile[WZ2]=jvj+140; 
(*f[54])( );     /*TRI1(jvj+139,103,jvj+140)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+141; pile[WZ4]=jvj+140; pile[WZ5]=jvj+133; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+141,jvj+140,jvj+133)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=W; pile[WZ4]=jvj+144; 
(*f[270])( );     /*QUADRI7(100,96,163,W,jvj+144)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-756); pile[WZ4]=jvj+142; 
(*f[270])( );     /*QUADRI7(100,21,140,(-756),jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=103; pile[WZ2]=jvj+143; 
(*f[54])( );     /*TRI1(jvj+142,103,jvj+143)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+144; pile[WZ4]=jvj+143; pile[WZ5]=jvj+134; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+144,jvj+143,jvj+134)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=877; pile[WZ4]=jvj+148; 
(*f[181])( );     /*QUADRI2(100,20,101,877,jvj+148)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V31; pile[WZ4]=jvj+152; 
(*f[270])( );     /*QUADRI7(100,96,163,V31,jvj+152)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+150; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+150)*/
pile[v[22]]=jvj+148; pile[WZ1]=111; pile[WZ2]=jvj+149; 
(*f[54])( );     /*TRI1(jvj+148,111,jvj+149)*/
pile[v[22]]=jvj+149; pile[WZ1]=jvj+150; pile[WZ2]=103; pile[WZ3]=jvj+151; 
(*f[58])( );     /*TRI3(jvj+149,jvj+150,103,jvj+151)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+152; pile[WZ4]=jvj+151; pile[WZ5]=jvj+147; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+152,jvj+151,jvj+147)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6481); pile[WZ4]=jvj+145; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6481),jvj+145)*/
pile[v[22]]=jvj+145; pile[WZ1]=103; pile[WZ2]=jvj+146; 
(*f[54])( );     /*TRI1(jvj+145,103,jvj+146)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+147; pile[WZ4]=jvj+146; pile[WZ5]=jvj+135; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+147,jvj+146,jvj+135)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3821); pile[WZ4]=jvj+155; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3821),jvj+155)*/
pile[WZ3]=(-2730); pile[WZ4]=jvj+153; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2730),jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=103; pile[WZ2]=jvj+154; 
(*f[54])( );     /*TRI1(jvj+153,103,jvj+154)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+155; pile[WZ4]=jvj+154; pile[WZ5]=jvj+136; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+155,jvj+154,jvj+136)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+158; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+158)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6482); pile[WZ4]=jvj+156; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6482),jvj+156)*/
pile[v[22]]=jvj+156; pile[WZ1]=103; pile[WZ2]=jvj+157; 
(*f[54])( );     /*TRI1(jvj+156,103,jvj+157)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+158; pile[WZ4]=jvj+157; pile[WZ5]=jvj+137; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+158,jvj+157,jvj+137)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+161; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+161)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2889); pile[WZ4]=jvj+159; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2889),jvj+159)*/
pile[v[22]]=jvj+159; pile[WZ1]=103; pile[WZ2]=jvj+160; 
(*f[54])( );     /*TRI1(jvj+159,103,jvj+160)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+161; pile[WZ4]=jvj+160; pile[WZ5]=jvj+138; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+161,jvj+160,jvj+138)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+132; pile[WZ4]=jvj+119; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+132,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=114; pile[WZ2]=jvj+133; 
(*f[36])( );     /*PLUSC0(jvj+119,114,jvj+133)*/
pile[WZ2]=jvj+134; 
(*f[36])( );     /*PLUSC0(jvj+119,114,jvj+134)*/
pile[WZ2]=jvj+135; 
(*f[36])( );     /*PLUSC0(jvj+119,114,jvj+135)*/
pile[WZ2]=jvj+136; 
(*f[36])( );     /*PLUSC0(jvj+119,114,jvj+136)*/
pile[WZ2]=jvj+137; 
(*f[36])( );     /*PLUSC0(jvj+119,114,jvj+137)*/
pile[WZ2]=jvj+138; 
(*f[36])( );     /*PLUSC0(jvj+119,114,jvj+138)*/
pile[v[22]]=jvj+117; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+118; 
(*f[180])( );     /*TRIENS0(jvj+117,(-20),107,jvj+118)*/
pile[v[22]]=jvj+119; pile[WZ2]=jvj+118; pile[WZ3]=105; pile[WZ4]=jvj+120; 
(*f[298])( );     /*TRIENS1(jvj+119,(-20),jvj+118,105,jvj+120)*/
pile[v[22]]=jvj+120; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+89; 
(*f[58])( );     /*TRI3(jvj+120,42,100,jvj+89)*/
pile[v[22]]=10547; pile[WZ1]=184; pile[WZ2]=jvj+89; 
(*f[36])( );     /*PLUSC0(10547,184,jvj+89)*/
pile[v[22]]=jvj+83; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; pile[WZ3]=AL; pile[WZ4]=jvj+90; 
(*f[687])( );     /*CRINT0(jvj+83,jvj+91,jvj+92,AL,jvj+90)*/
goto l49;
l52:x[jvj+101]=s[x[jvj+100]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+100];
pile[v[22]]=jvj+101; 
(*f[691])( );if(v[102]) goto l53;     /*DETRECUR0(jvj+101,NN)*/
NN=pile[WZ1]; 
pile[v[22]]=1274; pile[WZ1]=AL; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(1274,AL,V167)*/
V167=pile[WZ2]; 
if((V167>=NN)) goto l53;
l50:pile[v[22]]=AL; pile[WZ1]=1274; pile[WZ2]=NN; 
(*f[43])( );     /*CHGC2(AL,1274,NN)*/
l53:x[jvj+100]=t[x[jvj+100]];
goto l51;
}
