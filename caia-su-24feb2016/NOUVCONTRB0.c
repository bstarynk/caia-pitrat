#include "dx.h"
void NOUVCONTRB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V24=0,K=0,V28=0,V34=0,V35=0,F=0,FF=0,V44=0,V52=0,L=0,V64=0,V67=0,V78=0,LA=0,V88=0,LB=0,P=0,V142=0,I=0,V29=0,V176=0,V175=0,V155=0,V153=0,V156=0,V181=0,V185=0,V177=0,V178=0,V179=0,V180=0,V182=0,V184=0,V32=0,V168=0,V172=0;
int RN,HIST;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=120;
x[jvj+1]=11374;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1736&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RN=pile[v[22]]; HIST=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=576; pile[WZ1]=RN; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(576,RN,HIST)*/
pile[v[22]]=1439; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1439,RN,jvj+42)*/
if((x[jvj+42]!=68)) goto l21;
pile[v[22]]=RN; pile[WZ1]=jvj+43; 
(*f[887])( );     /*VARND0(RN,jvj+43)*/
l20:if((x[jvj+43]<=0)) goto l21;
x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=1439; pile[WZ1]=jvj+44; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(1439,jvj+44,HIST)*/
x[jvj+43]=t[x[jvj+43]];
goto l20;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=447; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(447,jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[760])( );     /*MEMEX0(jvj+6,jvj+5,jvj+7)*/
if((x[jvj+7]==135)) goto l7;
l3:x[jvj+3]=t[x[jvj+3]];
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+111; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+111)*/
pile[v[22]]=447; pile[WZ1]=jvj+6; pile[WZ2]=459; pile[WZ3]=jvj+111; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(447,jvj+6,459,jvj+111,jvj+14)*/
pile[v[22]]=jvj+2; pile[WZ1]=1334; pile[WZ2]=jvj+14; 
(*f[774])( );     /*TJPLUS0(jvj+2,1334,jvj+14)*/
l7:pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+6,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=485)) goto l42;
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+17)*/
for(i=x[jvj+17],V19=0;i>0;i=t[i],V19++)  ;
if((V19!=2)) goto l42;
x[jvj+115]=x[jvj+17] ;z[jvj+115]=z[jvj+17];
l8:if((x[jvj+115]<=0)) goto l42;
x[jvj+18]=s[x[jvj+115]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+115];
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=484)) goto l9;
x[jvj+11]=x[jvj+18] ;z[jvj+11]=z[jvj+18];
pile[v[22]]=1334; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1334,jvj+2,jvj+8)*/
x[jvj+114]=x[jvj+8] ;z[jvj+114]=z[jvj+8];
l4:if((x[jvj+114]>0)) goto l5;
x[jvj+116]=x[jvj+17] ;z[jvj+116]=z[jvj+17];
l10:if((x[jvj+116]<=0)) goto l9;
x[jvj+20]=s[x[jvj+116]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+116];
if((x[jvj+18]==x[jvj+20])) goto l11;
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+20,V24)*/
V24=pile[WZ2]; 
K=V24;
V28=(-K);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V28; pile[WZ4]=jvj+112; 
(*f[192])( );     /*QUADRI4(100,41,130,V28,jvj+112)*/
pile[v[22]]=447; pile[WZ1]=jvj+11; pile[WZ2]=459; pile[WZ3]=jvj+112; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(447,jvj+11,459,jvj+112,jvj+21)*/
pile[v[22]]=jvj+2; pile[WZ1]=1334; pile[WZ2]=jvj+21; 
(*f[774])( );     /*TJPLUS0(jvj+2,1334,jvj+21)*/
l11:x[jvj+116]=t[x[jvj+116]];
goto l10;
l5:x[jvj+9]=s[x[jvj+114]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+114];
pile[v[22]]=447; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(447,jvj+9,jvj+10)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+10; pile[WZ2]=jvj+12; 
(*f[760])( );     /*MEMEX0(jvj+11,jvj+10,jvj+12)*/
if((x[jvj+12]==135)) goto l9;
l6:x[jvj+114]=t[x[jvj+114]];
goto l4;
l9:x[jvj+115]=t[x[jvj+115]];
goto l8;
l14:x[jvj+23]=t[x[jvj+23]];
l13:if((x[jvj+23]<=0)) goto l46;
x[jvj+22]=s[x[jvj+23]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+23];
pile[v[22]]=164; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(164,jvj+22,V34)*/
V34=pile[WZ2]; 
if((V32>=V34)) goto l14;
l12:pile[v[22]]=280; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(280,jvj+22,V35)*/
V35=pile[WZ2]; 
if((V32<V35)) goto l14;
l45:pile[v[22]]=1018; pile[WZ1]=jvj+22; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(1018,jvj+22,jvj+103)*/
pile[v[22]]=jvj+101; pile[WZ1]=jvj+103; 
(*f[1211])( );     /*MARKUTILE0(jvj+101,jvj+103)*/
pile[WZ1]=jvj+22; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+101,jvj+22,1)*/
pile[v[22]]=jvj+102; 
(*f[186])( );     /*BTC0(jvj+102,jvj+22,1)*/
l46:pile[v[22]]=111; pile[WZ1]=RN; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,RN,jvj+104)*/
pile[v[22]]=101; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+104,jvj+105)*/
if((x[jvj+105]!=1280)) goto l47;
pile[v[22]]=103; pile[WZ1]=RN; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,RN,jvj+106)*/
pile[v[22]]=130; pile[WZ1]=jvj+106; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+106,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=RN; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(160,RN,jvj+107)*/
pile[v[22]]=130; pile[WZ1]=jvj+107; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+107,V172)*/
V172=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=RN; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,RN,jvj+108)*/
pile[v[22]]=100; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,jvj+108,jvj+109)*/
if((x[jvj+109]!=484)) goto l47;
pile[v[22]]=41; pile[WZ1]=V172; pile[WZ2]=jvj+110; 
(*f[445])( );     /*TRI15(41,V172,jvj+110)*/
pile[v[22]]=jvj+108; pile[WZ1]=V168; pile[WZ3]=HIST; pile[WZ4]=67; 
(*f[1935])( );     /*AFP0(jvj+108,V168,jvj+110,HIST,67)*/
l47:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l15:pile[v[22]]=20; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[409])( );     /*TRI14(20,jvj+24,jvj+27)*/
l17:x[jvj+113]=x[jvj+27] ;z[jvj+113]=z[jvj+27];
pile[v[22]]=jvj+113; pile[WZ1]=763; pile[WZ2]=jvj+29; 
(*f[300])( );     /*TRI10(jvj+113,763,jvj+29)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[68])( );     /*PLUE0(jvj+28,jvj+29)*/
x[jvj+90]=t[x[jvj+90]];
l16:if((x[jvj+90]<=0)) goto l37;
x[jvj+24]=s[x[jvj+90]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+90];
x[jvj+27]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=48)) goto l15;
pile[v[22]]=107; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,jvj+24,jvj+27)*/
goto l17;
l18:pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+30,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+34,jvj+35)*/
F=x[jvj+35];
if(F!=25&&F!=26&&F!=29&&F!=30&&F!=27&&F!=28) goto l19;
pile[v[22]]=103; pile[WZ1]=jvj+30; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+30,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+36,jvj+37)*/
if((x[jvj+37]!=41)) goto l19;
x[jvj+120]=x[jvj+32] ;z[jvj+120]=z[jvj+32];
l41:if((x[jvj+120]==(-99999998))) goto l40;
x[jvj+93]=x[jvj+120] ;z[jvj+93]=z[jvj+120];
pile[v[22]]=jvj+93; pile[WZ1]=jvj+94; 
(*f[200])( );if(v[102]) goto l40;     /*NDD0(jvj+93,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=969; pile[WZ2]=RN; 
(*f[36])( );     /*PLUSC0(jvj+94,969,RN)*/
l40:x[jvj+119]=t[x[jvj+119]];
l38:if((x[jvj+119]>0)) goto l39;
x[jvj+28]=t[x[jvj+28]];
l37:if((x[jvj+28]<=0)) goto l42;
x[jvj+91]=s[x[jvj+28]] ;z[jvj+91]=(x[jvj+91]<=sepcte) ? x[jvj+91] : z[jvj+28];
pile[v[22]]=763; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[33])( );     /*FNDE0(763,jvj+91,jvj+92)*/
x[jvj+119]=x[jvj+92] ;z[jvj+119]=z[jvj+92];
goto l38;
l19:x[jvj+120]=(-99999998);
goto l40;
l21:x[jvj+45]=vo[16];z[jvj+45]=vz[16];
pile[v[22]]=jvj+45; pile[WZ1]=509; pile[WZ2]=RN; 
(*f[36])( );     /*PLUSC0(jvj+45,509,RN)*/
pile[v[22]]=111; pile[WZ1]=RN; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,RN,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+46,jvj+47)*/
if((x[jvj+47]==26)) goto l22;
if((x[jvj+47]!=55)) goto l30;
pile[v[22]]=905; pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(905,jvj+45,V64)*/
V64=pile[WZ2]; 
if((V64!=(-9009))) goto l30;
pile[v[22]]=107; pile[WZ1]=RN; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(107,RN,jvj+55)*/
for(i=x[jvj+55],V67=0;i>0;i=t[i],V67++)  ;
if((V67!=2)) goto l30;
x[jvj+117]=x[jvj+55] ;z[jvj+117]=z[jvj+55];
l25:if((x[jvj+117]<=0)) goto l30;
x[jvj+56]=s[x[jvj+117]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+117];
pile[v[22]]=100; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+56,jvj+57)*/
if((x[jvj+57]!=22)) goto l26;
pile[v[22]]=103; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+56,jvj+58)*/
pile[v[22]]=130; pile[WZ1]=jvj+58; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+58,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+56; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+56,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+59,jvj+60)*/
if((x[jvj+60]!=484)) goto l26;
pile[v[22]]=111; pile[WZ1]=jvj+56; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+56,jvj+61)*/
pile[v[22]]=101; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+61,jvj+62)*/
x[jvj+63]=x[jvj+62] ;z[jvj+63]=z[jvj+62];
if(x[jvj+63]!=29&&x[jvj+63]!=30) goto l26;
pile[v[22]]=268; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(268,jvj+63,jvj+64)*/
x[jvj+65]=x[jvj+59] ;z[jvj+65]=z[jvj+59];
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; 
(*f[200])( );if(v[102]) goto l26;     /*NDD0(jvj+65,jvj+66)*/
LA=V78;
x[jvj+118]=x[jvj+55] ;z[jvj+118]=z[jvj+55];
l27:if((x[jvj+118]<=0)) goto l26;
x[jvj+67]=s[x[jvj+118]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+118];
if((x[jvj+56]==x[jvj+67])) goto l28;
pile[v[22]]=100; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+67,jvj+68)*/
if((x[jvj+68]!=22)) goto l28;
pile[v[22]]=102; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+67,jvj+69)*/
pile[v[22]]=130; pile[WZ1]=jvj+69; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+69,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+67; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,jvj+67,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+70,jvj+71)*/
if((x[jvj+71]!=484)) goto l28;
pile[v[22]]=111; pile[WZ1]=jvj+67; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+67,jvj+72)*/
pile[v[22]]=101; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+72,jvj+73)*/
x[jvj+74]=x[jvj+73] ;z[jvj+74]=z[jvj+73];
if(x[jvj+74]!=29&&x[jvj+74]!=30) goto l28;
pile[v[22]]=514; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(514,jvj+74,jvj+75)*/
pile[v[22]]=268; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(268,jvj+75,jvj+76)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+70; pile[WZ2]=jvj+77; 
(*f[760])( );     /*MEMEX0(jvj+59,jvj+70,jvj+77)*/
if((x[jvj+77]==135)) goto l29;
l28:x[jvj+118]=t[x[jvj+118]];
goto l27;
l22:pile[v[22]]=905; pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(905,jvj+45,V44)*/
V44=pile[WZ2]; 
if((V44!=(-9009))) goto l30;
x[jvj+48]=d[20];z[jvj+48]=0;
l23:if((x[jvj+48]<=0)) goto l30;
x[jvj+49]=s[x[jvj+48]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+48];
pile[v[22]]=jvj+49; pile[WZ1]=RN; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+49,RN,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+50,jvj+51)*/
if((x[jvj+51]!=484)) goto l24;
pile[v[22]]=268; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(268,jvj+49,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=RN; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+52,RN,jvj+53)*/
pile[v[22]]=130; pile[WZ1]=jvj+53; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+53,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=jvj+50; pile[WZ1]=jvj+54; 
(*f[200])( );if(v[102]) goto l24;     /*NDD0(jvj+50,jvj+54)*/
L=V52;
pile[v[22]]=L; pile[WZ1]=L; pile[WZ2]=jvj+54; pile[WZ3]=RN; pile[WZ4]=28; pile[WZ5]=30; pile[v[22]+6]=HIST; 
(*f[1933])( );     /*CRINTERDIT0(L,L,jvj+54,RN,28,30,HIST)*/
l24:x[jvj+48]=t[x[jvj+48]];
goto l23;
l26:x[jvj+117]=t[x[jvj+117]];
goto l25;
l29:LB=V88;
pile[v[22]]=LA; pile[WZ1]=LB; pile[WZ2]=jvj+66; pile[WZ3]=RN; pile[WZ4]=jvj+64; pile[WZ5]=jvj+76; pile[v[22]+6]=HIST; 
(*f[1933])( );     /*CRINTERDIT0(LA,LB,jvj+66,RN,jvj+64,jvj+76,HIST)*/
goto l28;
l30:pile[v[22]]=RN; pile[WZ1]=jvj+78; 
(*f[887])( );     /*VARND0(RN,jvj+78)*/
l31:if((x[jvj+78]>0)) goto l32;
pile[v[22]]=111; pile[WZ1]=RN; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,RN,jvj+80)*/
pile[v[22]]=101; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+80,jvj+81)*/
if((x[jvj+81]==625)) goto l33;
if((x[jvj+81]==55)) goto l36;
if((x[jvj+81]!=408)) goto l42;
pile[v[22]]=102; pile[WZ1]=RN; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,RN,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+95,jvj+96)*/
if((x[jvj+96]!=484)) goto l42;
pile[v[22]]=103; pile[WZ1]=RN; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,RN,jvj+6)*/
pile[v[22]]=jvj+95; pile[WZ1]=jvj+2; 
(*f[200])( );if(v[102]) goto l42;     /*NDD0(jvj+95,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+6,jvj+13)*/
if((x[jvj+13]!=484)) goto l7;
pile[v[22]]=1334; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1334,jvj+2,jvj+3)*/
goto l1;
l32:x[jvj+79]=s[x[jvj+78]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+78];
z[jvj+79]=(-1);
pile[v[22]]=jvj+79; pile[WZ1]=509; pile[WZ2]=RN; 
(*f[36])( );     /*PLUSC0(jvj+79,509,RN)*/
x[jvj+78]=t[x[jvj+78]];
goto l31;
l33:pile[v[22]]=160; pile[WZ1]=RN; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(160,RN,jvj+82)*/
pile[v[22]]=130; pile[WZ1]=jvj+82; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+82,P)*/
P=pile[WZ2]; 
x[jvj+83]=d[20];z[jvj+83]=0;
l34:if((x[jvj+83]<=0)) goto l42;
x[jvj+84]=s[x[jvj+83]] ;z[jvj+84]=(x[jvj+84]<=sepcte) ? x[jvj+84] : z[jvj+83];
pile[v[22]]=jvj+84; pile[WZ1]=RN; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(jvj+84,RN,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+85,jvj+86)*/
if((x[jvj+86]!=484)) goto l35;
pile[v[22]]=268; pile[WZ1]=jvj+84; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(268,jvj+84,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=RN; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(jvj+87,RN,jvj+88)*/
pile[v[22]]=130; pile[WZ1]=jvj+88; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,jvj+88,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=jvj+85; pile[WZ1]=jvj+89; 
(*f[200])( );if(v[102]) goto l35;     /*NDD0(jvj+85,jvj+89)*/
I=V142;
pile[v[22]]=I; pile[WZ1]=P; pile[WZ2]=jvj+89; pile[WZ3]=HIST; pile[WZ4]=RN; 
(*f[1934])( );     /*STEQM0(I,P,jvj+89,HIST,RN)*/
l35:x[jvj+83]=t[x[jvj+83]];
goto l34;
l36:pile[v[22]]=107; pile[WZ1]=RN; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(107,RN,jvj+90)*/
x[jvj+28]=0 ;z[jvj+28]=0;
goto l16;
l39:x[jvj+30]=s[x[jvj+119]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+119];
x[jvj+120]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+30,jvj+31)*/
if((x[jvj+31]!=22)) goto l19;
pile[v[22]]=102; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+30,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+32,jvj+33)*/
if((x[jvj+33]==484)) goto l18;
if((x[jvj+33]!=41)) goto l19;
pile[v[22]]=103; pile[WZ1]=jvj+30; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+30,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+38,jvj+39)*/
if((x[jvj+39]!=484)) goto l19;
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+30,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+40,jvj+41)*/
FF=x[jvj+41];
if(FF!=25&&FF!=26&&FF!=29&&FF!=30&&FF!=27&&FF!=28) goto l19;
x[jvj+120]=x[jvj+38] ;z[jvj+120]=z[jvj+38];
goto l41;
l42:V29=vv[33];
if((V29<=0)) goto l43;
pile[v[22]]=1054; pile[WZ1]=RN; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(1054,RN,jvj+97)*/
if((x[jvj+97]!=20003)) goto l43;
x[jvj+98]=vo[14];z[jvj+98]=vz[14];
V176=x[RN];
pile[v[22]]=20; pile[WZ1]=V176; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V176,0,V175)*/
V175=pile[WZ3]; 
pile[v[22]]=V175; 
(*f[40])( );     /*SLG0(V175)*/
pile[v[22]]=jvj+98; pile[WZ1]=1035; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+98,1035,1)*/
l43:if((v[227]<=0)) goto l44;
V155=v[227]+20000;
pile[v[22]]=218; pile[WZ1]=HIST; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(218,HIST,jvj+99)*/
V153=x[jvj+99];
if((V153!=V155)) goto l44;
pile[v[22]]=929; pile[WZ1]=RN; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(929,RN,V156)*/
V156=pile[WZ2]; 
V181=x[jvj+99];
V185=x[RN];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V177)*/
V177=pile[WZ2]; 
pile[v[22]]=6; pile[WZ1]=V177; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(6,V177,64,V178)*/
V178=pile[WZ3]; 
pile[WZ1]=V178; pile[WZ2]=37; 
(*f[41])( );     /*SRB0(6,V178,37,V179)*/
V179=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V181; pile[WZ2]=V179; 
(*f[39])( );     /*SDX0(20,V181,V179,V180)*/
V180=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V156; pile[WZ2]=V180; 
(*f[39])( );     /*SDX0(41,V156,V180,V182)*/
V182=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V185; pile[WZ2]=V182; 
(*f[39])( );     /*SDX0(20,V185,V182,V184)*/
V184=pile[WZ3]; 
pile[v[22]]=V184; 
(*f[40])( );     /*SLG0(V184)*/
l44:if((v[93]<=0)) goto l46;
pile[v[22]]=244; pile[WZ1]=RN; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(244,RN,V32)*/
V32=pile[WZ2]; 
x[jvj+100]=vo[14];z[jvj+100]=vz[14];
pile[v[22]]=1415; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(1415,jvj+100,jvj+101)*/
pile[v[22]]=1525; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(1525,jvj+101,jvj+102)*/
pile[v[22]]=1260; pile[WZ1]=1203; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1260,1203,jvj+23)*/
goto l13;
}
