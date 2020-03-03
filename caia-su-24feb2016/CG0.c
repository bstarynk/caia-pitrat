#include "dx.h"
void CG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V4=0,V32=0,V36=0,VB=0,V=0,V62=0,V43=0,V47=0,VA=0,VV=0,V50=0,WW=0,V14=0,W=0,V85=0,V80=0,V87=0,V93=0,V92=0,V98=0,V97=0,V94=0,V95=0,V20=0,V18=0;
int TL,SL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=86;
x[jvj+1]=10617;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1069&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; SL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=583; pile[WZ1]=SL; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(583,SL,jvj+2)*/
vo[15]=x[SL];vz[15]=x[jvj+2];
l1:pile[v[22]]=322; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(322,TL,V4)*/
V4=pile[WZ2]; 
pile[WZ1]=SL; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(322,SL,V2)*/
V2=pile[WZ2]; 
if((V2>=V4)) goto l42;
l2:pile[v[22]]=SL; pile[WZ1]=322; pile[WZ2]=V4; 
(*f[43])( );     /*CHGC2(SL,322,V4)*/
l42:pile[v[22]]=TL; pile[WZ1]=720; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(TL,720,68)*/
pile[v[22]]=525; pile[WZ1]=TL; pile[WZ2]=jvj+67; 
(*f[33])( );     /*FNDE0(525,TL,jvj+67)*/
if((x[jvj+67]==0)) goto l35;
x[jvj+65]=0 ;z[jvj+65]=0;
l38:if((x[jvj+67]>0)) goto l39;
pile[v[22]]=525; pile[WZ1]=SL; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(525,SL,jvj+66)*/
l40:if((x[jvj+66]>0)) goto l41;
pile[v[22]]=SL; pile[WZ1]=525; pile[WZ2]=jvj+65; 
(*f[34])( );     /*CHGC0(SL,525,jvj+65)*/
l35:pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,TL,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=583; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(583,TL,jvj+61)*/
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(494,324,jvj+62)*/
l36:if((x[jvj+62]<=0)) goto l43;
x[jvj+63]=s[x[jvj+62]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+62];
pile[v[22]]=130; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+63,V92)*/
V92=pile[WZ2]; 
if((V92!=V93)) goto l37;
pile[v[22]]=109; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(109,jvj+63,jvj+64)*/
if((x[jvj+64]!=x[jvj+61])) goto l37;
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(246,jvj+63,V94)*/
V94=pile[WZ2]; 
V95=x[jvj+63];
pres[V94]=1;
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=V95; 
(*f[134])( );     /*OTA0(494,324,V95)*/
l43:pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,TL,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=583; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(583,TL,jvj+68)*/
pile[v[22]]=302; pile[WZ1]=SL; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(302,SL,jvj+69)*/
l44:if((x[jvj+69]<=0)) goto l47;
x[jvj+34]=s[x[jvj+69]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+69];
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+34,jvj+3)*/
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(130,jvj+3,V18)*/
V18=pile[WZ2]; 
if((V18!=V20)) goto l45;
pile[v[22]]=100; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,jvj+3,jvj+70)*/
if((x[jvj+70]!=39)) goto l45;
pile[v[22]]=111; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,jvj+3,jvj+71)*/
pile[v[22]]=101; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+71,jvj+72)*/
if((x[jvj+68]!=x[jvj+72])) goto l45;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=114; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(114,jvj+3,jvj+4)*/
x[jvj+5]=d[82];z[jvj+5]=0;
x[jvj+77]=x[jvj+4] ;z[jvj+77]=z[jvj+4];
l3:if((x[jvj+77]>0)) goto l4;
x[jvj+11]=d[83];z[jvj+11]=0;
x[jvj+78]=x[jvj+4] ;z[jvj+78]=z[jvj+4];
l6:if((x[jvj+78]>0)) goto l7;
pile[v[22]]=113; pile[WZ1]=jvj+3; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(113,jvj+3,jvj+17)*/
x[jvj+18]=d[82];z[jvj+18]=0;
x[jvj+79]=x[jvj+17] ;z[jvj+79]=z[jvj+17];
l9:if((x[jvj+79]>0)) goto l10;
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(222,TL,jvj+23)*/
pile[v[22]]=223; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(223,TL,jvj+24)*/
pile[v[22]]=292; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(292,TL,jvj+25)*/
pile[v[22]]=283; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(283,TL,jvj+26)*/
x[jvj+27]=d[84];z[jvj+27]=0;
x[jvj+80]=x[jvj+26] ;z[jvj+80]=z[jvj+26];
l12:if((x[jvj+80]>0)) goto l13;
pile[v[22]]=jvj+10; pile[WZ1]=258; pile[WZ2]=jvj+35; 
(*f[300])( );     /*TRI10(jvj+10,258,jvj+35)*/
pile[v[22]]=258; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(258,jvj+35,jvj+36)*/
x[jvj+81]=x[jvj+36] ;z[jvj+81]=z[jvj+36];
l15:if((x[jvj+81]>0)) goto l16;
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(222,TL,jvj+56)*/
pile[v[22]]=223; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(223,TL,jvj+57)*/
pile[v[22]]=283; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(283,TL,jvj+58)*/
x[jvj+86]=x[jvj+58] ;z[jvj+86]=z[jvj+58];
l32:if((x[jvj+86]>0)) goto l33;
pile[v[22]]=135; pile[WZ1]=TL; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(135,TL,jvj+37)*/
pile[v[22]]=248; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(248,jvj+37,jvj+38)*/
x[jvj+82]=x[jvj+38] ;z[jvj+82]=z[jvj+38];
l20:if((x[jvj+82]<=0)) goto l46;
x[jvj+39]=s[x[jvj+82]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+82];
pile[v[22]]=161; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(161,jvj+39,jvj+40)*/
if((x[jvj+40]!=x[TL])) goto l21;
pile[v[22]]=TL; 
(*f[1378])( );     /*CH0(TL,jvj+39)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+37; pile[WZ2]=jvj+45; 
(*f[1379])( );if(v[102]) goto l46;     /*CPIL0(jvj+35,jvj+37,jvj+45)*/
pile[v[22]]=248; pile[WZ1]=jvj+34; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(248,jvj+34,jvj+41)*/
x[jvj+83]=x[jvj+41] ;z[jvj+83]=z[jvj+41];
l22:if((x[jvj+83]>0)) goto l23;
pile[v[22]]=TL; pile[WZ1]=jvj+39; 
(*f[1381])( );     /*CI0(TL,jvj+39)*/
x[jvj+46]=d[85];z[jvj+46]=0;
l25:if((x[jvj+46]>0)) goto l26;
pile[v[22]]=SL; 
(*f[1382])( );     /*CI1(SL)*/
l46:pile[v[22]]=jvj+34; pile[WZ1]=SL; 
(*f[1383])( );     /*ISV0(jvj+34,SL)*/
l45:x[jvj+69]=t[x[jvj+69]];
goto l44;
l4:x[jvj+6]=s[x[jvj+77]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+77];
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+6,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+7,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+6,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+8,V36)*/
V36=pile[WZ2]; 
VB=V32;
V=V36;
pile[v[22]]=110; pile[WZ1]=VB; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+9; 
(*f[1385])( );     /*QUADRI16(110,VB,140,V,jvj+9)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+9,jvj+10)*/
l5:x[jvj+77]=t[x[jvj+77]];
goto l3;
l7:x[jvj+12]=s[x[jvj+78]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+78];
pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+12,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+13,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+12,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+14,jvj+15)*/
if(x[jvj+15]!=96&&x[jvj+15]!=89&&x[jvj+15]!=41&&x[jvj+15]!=20&&x[jvj+15]!=128&&x[jvj+15]!=570&&x[jvj+15]!=1317) goto l8;
V=V62;
pile[v[22]]=102; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(102,jvj+14,140,V,jvj+16)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+16; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+11,jvj+16,jvj+10)*/
l8:x[jvj+78]=t[x[jvj+78]];
goto l6;
l10:x[jvj+19]=s[x[jvj+79]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+79];
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+19,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+20,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+19,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+21,V47)*/
V47=pile[WZ2]; 
VA=V43;
VV=V47;
pile[v[22]]=110; pile[WZ1]=VA; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+22; 
(*f[1385])( );     /*QUADRI16(110,VA,140,VV,jvj+22)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+22; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+18,jvj+22,jvj+10)*/
l11:x[jvj+79]=t[x[jvj+79]];
goto l9;
l13:x[jvj+28]=s[x[jvj+80]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+80];
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+28,V50)*/
V50=pile[WZ2]; 
WW=V50;
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==WW) goto l14;
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==WW) goto l14;
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==WW) goto l14;
pile[v[22]]=WW; pile[WZ1]=140; pile[WZ2]=jvj+29; 
(*f[329])( );     /*TRI13(WW,140,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+29; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+27,jvj+29,jvj+10)*/
l14:x[jvj+80]=t[x[jvj+80]];
goto l12;
l16:x[jvj+30]=s[x[jvj+81]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+81];
pile[v[22]]=110; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(110,jvj+30,V14)*/
V14=pile[WZ2]; 
l17:x[jvj+81]=t[x[jvj+81]];
goto l15;
l18:pile[v[22]]=SL; 
(*f[1376])( );     /*NOUV0(SL,W)*/
W=pile[WZ1]; 
pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+30,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+31,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+75)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+73; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=436; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,436,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; pile[WZ2]=111; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+74,jvj+75,111,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+76; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+32,jvj+76,jvj+33)*/
pile[v[22]]=120; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[1377])( );     /*RECA0(120,jvj+33,jvj+34)*/
l19:pile[v[22]]=jvj+30; pile[WZ1]=110; pile[WZ2]=W; 
(*f[177])( );     /*CHGC4(jvj+30,110,W)*/
goto l17;
l21:x[jvj+82]=t[x[jvj+82]];
goto l20;
l23:x[jvj+42]=s[x[jvj+83]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+83];
pile[v[22]]=122; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(122,jvj+42,jvj+43)*/
pile[v[22]]=161; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(161,jvj+42,jvj+44)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[1380])( );     /*RECZ0(jvj+43,jvj+44,jvj+45)*/
l24:x[jvj+83]=t[x[jvj+83]];
goto l22;
l26:x[jvj+47]=s[x[jvj+46]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+46];
pile[v[22]]=jvj+47; pile[WZ1]=jvj+35; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+47,jvj+35,jvj+48)*/
pile[v[22]]=248; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(248,jvj+48,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+34; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+47,jvj+34,jvj+50)*/
x[jvj+84]=x[jvj+49] ;z[jvj+84]=z[jvj+49];
l28:if((x[jvj+84]<=0)) goto l27;
x[jvj+51]=s[x[jvj+84]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+84];
pile[v[22]]=122; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(122,jvj+51,jvj+52)*/
pile[v[22]]=161; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(161,jvj+51,jvj+53)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=jvj+50; 
(*f[1380])( );     /*RECZ0(jvj+52,jvj+53,jvj+50)*/
l29:x[jvj+84]=t[x[jvj+84]];
goto l28;
l27:x[jvj+46]=t[x[jvj+46]];
goto l25;
l31:x[jvj+85]=t[x[jvj+85]];
l30:if((x[jvj+85]<=0)) goto l34;
x[jvj+55]=s[x[jvj+85]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+85];
pile[v[22]]=140; pile[WZ1]=jvj+55; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+55,V85)*/
V85=pile[WZ2]; 
if((V85!=V80)) goto l31;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(110,jvj+55,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[378])( );     /*CPI0(jvj+59,jvj+60)*/
pile[v[22]]=305; 
(*f[71])( );     /*ENLV0(305,jvj+60)*/
pile[v[22]]=SL; pile[WZ1]=283; pile[WZ2]=jvj+60; 
(*f[36])( );     /*PLUSC0(SL,283,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=140; pile[WZ2]=V87; 
(*f[177])( );     /*CHGC4(jvj+60,140,V87)*/
l34:x[jvj+86]=t[x[jvj+86]];
goto l32;
l33:x[jvj+59]=s[x[jvj+86]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+86];
pile[v[22]]=140; pile[WZ1]=jvj+59; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+59,V80)*/
V80=pile[WZ2]; 
for(a=x[jvj+56];a>0;a=t[a]) if(s[a]==V80) goto l34;
for(a=x[jvj+57];a>0;a=t[a]) if(s[a]==V80) goto l34;
pile[v[22]]=258; pile[WZ1]=jvj+35; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(258,jvj+35,jvj+54)*/
x[jvj+85]=x[jvj+54] ;z[jvj+85]=z[jvj+54];
goto l30;
l37:x[jvj+62]=t[x[jvj+62]];
goto l36;
l39:V98=s[x[jvj+67]];
pile[v[22]]=jvj+65; pile[WZ1]=V98; 
(*f[331])( );     /*PLUE3(jvj+65,V98)*/
x[jvj+67]=t[x[jvj+67]];
goto l38;
l41:V97=s[x[jvj+66]];
pile[v[22]]=jvj+65; pile[WZ1]=V97; 
(*f[331])( );     /*PLUE3(jvj+65,V97)*/
x[jvj+66]=t[x[jvj+66]];
goto l40;
l47:pile[v[22]]=SL; 
(*f[1384])( );     /*CK0(SL)*/
l48:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
