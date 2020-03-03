#include "dx.h"
void CRENSORDBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V8=0,V9=0,V12=0,V4=0,V14=0,V18=0,V28=0,V26=0,V27=0,V30=0,V22=0,V44=0,V56=0,V=0,V68=0,V91=0,V89=0,V90=0,V93=0,V87=0,RB=0,V83=0,V85=0,V75=0,V79=0,RL=0,VV=0,V107=0,V109=0,V113=0,V111=0,V103=0,V104=0,V105=0,V106=0,V108=0,V110=0,V112=0;
int ND,F,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=76;
x[jvj+1]=11570;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==312&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
ND=pile[v[22]]; F=pile[v[22]+1]; X=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V18=incon;
pile[v[22]]=1418; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1418,X,jvj+14)*/
if((x[jvj+14]!=68)) goto l11;
V18=1421;
l12:pile[v[22]]=265; pile[WZ1]=X; 
(*f[71])( );     /*ENLV0(265,X)*/
pile[v[22]]=jvj+15; 
(*f[697])( );     /*CREFONCDANS0(jvj+15)*/
pile[v[22]]=22; pile[WZ1]=1300; pile[WZ2]=jvj+15; 
(*f[34])( );     /*CHGC0(22,1300,jvj+15)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1484,854,V10)*/
V10=pile[WZ2]; 
V8=sepfacts+1;
V9=sepfacts+V10;
l2:if((V8>V9)) goto l6;
V12=r[V8];
if((V12!=1)) goto l3;
x[jvj+2]=V8 ;z[jvj+2]=(V8<=sepcte) ? V8 : 0;
pile[v[22]]=1782; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1782,jvj+2,jvj+7)*/
if((x[jvj+7]==68)) goto l3;
l4:pile[v[22]]=905; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(905,jvj+2,V4)*/
V4=pile[WZ2]; 
if((V4==F)) goto l5;
if((V4!=(-9113))) goto l3;
if((F!=(-11721))) goto l5;
pile[v[22]]=464; pile[WZ2]=jvj+3; 
(*f[492])( );     /*FIGURE0(464,jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l5;
pile[v[22]]=159; pile[WZ1]=857; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,857,jvj+4)*/
x[jvj+70]=x[jvj+4] ;z[jvj+70]=z[jvj+4];
l1:if((x[jvj+70]<=0)) goto l3;
x[jvj+5]=s[x[jvj+70]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+70];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[492])( );     /*FIGURE0(jvj+5,jvj+2,jvj+6)*/
if((x[jvj+6]==135)) goto l5;
x[jvj+70]=t[x[jvj+70]];
goto l1;
l5:pile[v[22]]=1088; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(1088,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=F; pile[WZ2]=ND; 
(*f[698])( );     /*ANATOMEBIS0(jvj+2,F,ND)*/
(*f[389])( );     /*NUMDCL0(jvj+2)*/
l3:V8++;
goto l2;
l6:pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(645,597,jvj+8)*/
l7:if((x[jvj+8]<=0)) goto l13;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=683; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(683,jvj+9,V14)*/
V14=pile[WZ2]; 
if((V14!=ND)) goto l8;
pile[v[22]]=1545; 
(*f[71])( );     /*ENLV0(1545,jvj+9)*/
pile[v[22]]=1549; pile[WZ1]=240; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1549,240,jvj+10)*/
l9:if((x[jvj+10]<=0)) goto l13;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=449; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(449,jvj+11,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+12,jvj+9,jvj+13)*/
pile[v[22]]=X; pile[WZ2]=jvj+11; pile[WZ3]=jvj+13; 
(*f[699])( );     /*CONSTRETUCONTR0(X,jvj+9,jvj+11,jvj+13)*/
l10:x[jvj+10]=t[x[jvj+10]];
goto l9;
l8:x[jvj+8]=t[x[jvj+8]];
goto l7;
l11:V18=397;
goto l12;
l13:x[jvj+71]=0 ;z[jvj+71]=0;
x[jvj+20]=x[jvj+71] ;z[jvj+20]=z[jvj+71];
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(1484,854,V28)*/
V28=pile[WZ2]; 
V26=sepfacts+1;
V27=sepfacts+V28;
l15:if((V26>V27)) goto l44;
V30=r[V26];
if((V30!=1)) goto l16;
x[jvj+16]=V26 ;z[jvj+16]=(V26<=sepcte) ? V26 : 0;
pile[v[22]]=1782; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1782,jvj+16,jvj+19)*/
if((x[jvj+19]==68)) goto l16;
l17:pile[v[22]]=905; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(905,jvj+16,V22)*/
V22=pile[WZ2]; 
if((V22==F)) goto l18;
if((V22!=(-9113))) goto l16;
if((F!=(-11721))) goto l18;
pile[v[22]]=857; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(857,jvj+16,jvj+17)*/
if((x[jvj+17]==68)) goto l18;
l14:pile[v[22]]=464; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[492])( );     /*FIGURE0(464,jvj+16,jvj+18)*/
if((x[jvj+18]==135)) goto l18;
l16:V26++;
goto l15;
l18:pile[v[22]]=jvj+16; pile[WZ1]=X; pile[WZ2]=jvj+20; pile[WZ3]=F; 
(*f[700])( );     /*PLACATOMEBIS0(jvj+16,X,jvj+20,F)*/
goto l16;
l20:x[jvj+72]=t[x[jvj+72]];
l19:if((x[jvj+72]<=0)) goto l35;
x[jvj+23]=s[x[jvj+72]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+72];
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=1792)) goto l20;
pile[v[22]]=102; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+23,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+26,V44)*/
V44=pile[WZ2]; 
if((RL!=V44)) goto l20;
pile[v[22]]=103; pile[WZ1]=jvj+23; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(103,jvj+23,jvj+27)*/
x[jvj+50]=0 ;z[jvj+50]=0;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(1484,854,V91)*/
V91=pile[WZ2]; 
V89=sepfacts+1;
V90=sepfacts+V91;
x[jvj+47]=d[215];z[jvj+47]=0;
l27:if((V89>V90)) goto l36;
V93=r[V89];
if((V93!=1)) goto l28;
x[jvj+48]=V89 ;z[jvj+48]=(V89<=sepcte) ? V89 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+48; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(905,jvj+48,V87)*/
V87=pile[WZ2]; 
if((V87==(-11721))) goto l29;
if((V87==(-9113))) goto l29;
l28:V89++;
goto l27;
l22:x[jvj+73]=t[x[jvj+73]];
l21:if((x[jvj+73]<=0)) goto l35;
x[jvj+29]=s[x[jvj+73]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+73];
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=1789)) goto l22;
pile[v[22]]=103; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+29,jvj+32)*/
pile[v[22]]=140; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+32,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+29,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+33,jvj+34)*/
V=V56;
x[jvj+60]=x[jvj+34] ;z[jvj+60]=z[jvj+34];
RL=V75;
pile[v[22]]=1688; pile[WZ1]=jvj+21; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(1688,jvj+21,jvj+40)*/
x[jvj+75]=x[jvj+40] ;z[jvj+75]=z[jvj+40];
l25:if((x[jvj+75]<=0)) goto l35;
x[jvj+41]=s[x[jvj+75]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+75];
pile[v[22]]=111; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+41,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]!=1604)) goto l26;
pile[v[22]]=102; pile[WZ1]=jvj+41; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+41,jvj+44)*/
pile[v[22]]=140; pile[WZ1]=jvj+44; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,jvj+44,V68)*/
V68=pile[WZ2]; 
if((RL!=V68)) goto l26;
pile[v[22]]=103; pile[WZ1]=jvj+41; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+41,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]!=854)) goto l26;
VV=V79;
x[jvj+54]=0 ;z[jvj+54]=0;
pile[v[22]]=1688; pile[WZ1]=jvj+21; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(1688,jvj+21,jvj+51)*/
x[jvj+76]=x[jvj+51] ;z[jvj+76]=z[jvj+51];
l30:if((x[jvj+76]>0)) goto l31;
pile[v[22]]=1688; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(1688,jvj+21,jvj+22)*/
x[jvj+72]=x[jvj+22] ;z[jvj+72]=z[jvj+22];
goto l19;
l24:x[jvj+74]=t[x[jvj+74]];
l23:if((x[jvj+74]<=0)) goto l35;
x[jvj+36]=s[x[jvj+74]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+74];
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+36,jvj+37)*/
if((x[jvj+37]!=73)) goto l24;
pile[v[22]]=111; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+36,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=1794)) goto l24;
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+36,jvj+55)*/
if((x[jvj+55]!=73)) goto l35;
pile[v[22]]=102; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,jvj+36,jvj+56)*/
pile[v[22]]=140; pile[WZ1]=jvj+56; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+56,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+36; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(103,jvj+36,jvj+57)*/
pile[v[22]]=140; pile[WZ1]=jvj+57; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+57,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+36; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+36,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]!=1794)) goto l35;
pile[v[22]]=1688; pile[WZ1]=jvj+21; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(1688,jvj+21,jvj+28)*/
x[jvj+73]=x[jvj+28] ;z[jvj+73]=z[jvj+28];
goto l21;
l26:x[jvj+75]=t[x[jvj+75]];
goto l25;
l29:pile[v[22]]=jvj+48; pile[WZ1]=jvj+27; pile[WZ2]=ND; 
(*f[702])( );if(v[102]) goto l28;     /*EVCONTAINS0(jvj+48,jvj+27,ND,RB)*/
RB=pile[WZ3]; 
pile[v[22]]=110; pile[WZ1]=RB; pile[WZ2]=218; pile[WZ3]=jvj+48; pile[WZ4]=jvj+49; 
(*f[692])( );     /*QUADRI13(110,RB,218,jvj+48,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[196])( );     /*PLUF0(jvj+47,jvj+49,jvj+50)*/
goto l28;
l31:x[jvj+52]=s[x[jvj+76]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+76];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; 
(*f[703])( );     /*USW0(jvj+52,jvj+53)*/
for(a=x[jvj+53];a>0;a=t[a]) if(s[a]==VV) goto l33;
l32:x[jvj+76]=t[x[jvj+76]];
goto l30;
l33:pile[v[22]]=jvj+54; pile[WZ1]=jvj+52; 
(*f[68])( );     /*PLUE0(jvj+54,jvj+52)*/
goto l32;
l36:V107=x[jvj+21];
V109=x[jvj+60];
V113=x[jvj+54];
V111=x[jvj+50];
pile[v[22]]=jvj+60; pile[WZ1]=250; pile[WZ2]=V; pile[WZ3]=X; pile[WZ4]=jvj+50; pile[WZ5]=jvj+54; 
(*f[704])( );     /*AJOUREGBIS0(jvj+60,250,V,X,jvj+50,jvj+54)*/
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=11570; pile[WZ2]=V103; 
(*f[39])( );     /*SDX0(20,11570,V103,V104)*/
V104=pile[WZ3]; 
pile[WZ1]=11806; pile[WZ2]=V104; 
(*f[39])( );     /*SDX0(20,11806,V104,V105)*/
V105=pile[WZ3]; 
pile[WZ1]=V107; pile[WZ2]=V105; 
(*f[39])( );     /*SDX0(20,V107,V105,V106)*/
V106=pile[WZ3]; 
pile[WZ1]=V109; pile[WZ2]=V106; 
(*f[39])( );     /*SDX0(20,V109,V106,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V111; pile[WZ2]=V108; 
(*f[39])( );     /*SDX0(23,V111,V108,V110)*/
V110=pile[WZ3]; 
pile[WZ1]=V113; pile[WZ2]=V110; 
(*f[39])( );     /*SDX0(23,V113,V110,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; 
(*f[40])( );     /*SLG0(V112)*/
l35:V83++;
l34:if((V83>sepfacts)) goto l37;
V85=r[V83];
if((V85!=1)) goto l35;
x[jvj+21]=V83 ;z[jvj+21]=(V83<=sepcte) ? V83 : 0;
pile[v[22]]=1689; pile[WZ1]=jvj+21; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1689,jvj+21,jvj+35)*/
x[jvj+74]=x[jvj+35] ;z[jvj+74]=z[jvj+35];
goto l23;
l37:pile[v[22]]=265; pile[WZ1]=X; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(265,X,jvj+61)*/
l38:if((x[jvj+61]>0)) goto l39;
pile[v[22]]=265; pile[WZ1]=X; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(265,X,jvj+65)*/
l41:if((x[jvj+65]>0)) goto l42;
l45:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l39:x[jvj+21]=s[x[jvj+61]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+61];
pile[v[22]]=158; pile[WZ1]=jvj+21; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(158,jvj+21,jvj+62)*/
if((x[jvj+62]!=696)) goto l40;
pile[v[22]]=120; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(120,jvj+21,jvj+63)*/
(*f[71])( );     /*ENLV0(120,jvj+21)*/
pile[v[22]]=218; pile[WZ1]=696; pile[WZ2]=287; pile[WZ3]=jvj+63; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(218,696,287,jvj+63,jvj+64)*/
pile[v[22]]=jvj+21; pile[WZ1]=120; pile[WZ2]=jvj+64; 
(*f[35])( );     /*CHGC1(jvj+21,120,jvj+64)*/
l40:x[jvj+61]=t[x[jvj+61]];
goto l38;
l42:x[jvj+66]=s[x[jvj+65]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+65];
pile[v[22]]=158; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(158,jvj+66,jvj+67)*/
if((x[jvj+67]==696)) goto l43;
pile[v[22]]=120; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(120,jvj+66,jvj+68)*/
x[jvj+69]=x[jvj+68] ;z[jvj+69]=z[jvj+68];
pile[v[22]]=jvj+69; pile[WZ1]=ND; 
(*f[705])( );     /*DEBPRIO0(jvj+69,ND)*/
pile[v[22]]=120; pile[WZ1]=jvj+66; 
(*f[71])( );     /*ENLV0(120,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+69; 
(*f[706])( );     /*ORDOBIS0(jvj+66,jvj+69)*/
l43:x[jvj+65]=t[x[jvj+65]];
goto l41;
l44:pile[v[22]]=X; pile[WZ1]=jvj+20; 
(*f[701])( );     /*AJOUREGORD0(X,jvj+20)*/
if((F!=(-11721))) goto l37;
V83=sepnouv+1;
goto l34;
}
