#include "dx.h"
void MEVALA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V14=0,F=0,V=0,V29=0,V21=0,V145=0,V124=0,W=0,V58=0,V147=0,V41=0,V159=0,V160=0,V167=0,V168=0,V171=0,V172=0;
int TL,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=90;
x[jvj+1]=10065;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2000&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+71]=x[jvj+73]=incon;
pile[v[22]]=X; pile[WZ1]=360; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(X,360,68)*/
pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(135,X,jvj+7)*/
pile[v[22]]=248; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(248,jvj+7,jvj+8)*/
l4:if((x[jvj+8]<=0)) goto l7;
x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=161; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(161,jvj+2,jvj+9)*/
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+9,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=435)) goto l5;
pile[v[22]]=436; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(436,jvj+10,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+12,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+10,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+13,jvj+14)*/
F=x[jvj+14];
if(F!=78&&F!=79) goto l5;
pile[v[22]]=360; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(360,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l5;
l6:V=V14;
x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=356; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(356,X,jvj+4)*/
x[jvj+89]=x[jvj+4] ;z[jvj+89]=z[jvj+4];
l1:if((x[jvj+89]>0)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=356; pile[WZ2]=jvj+6; 
(*f[34])( );     /*CHGC0(jvj+2,356,jvj+6)*/
pile[WZ1]=360; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+2,360,68)*/
pile[v[22]]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+9,360,68)*/
l5:x[jvj+8]=t[x[jvj+8]];
goto l4;
l2:x[jvj+5]=s[x[jvj+89]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+89];
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+5,V18)*/
V18=pile[WZ2]; 
if((V18==V)) goto l3;
pile[v[22]]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+5)*/
l3:x[jvj+89]=t[x[jvj+89]];
goto l1;
l7:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,X,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+15,jvj+26)*/
if((x[jvj+26]!=22)) goto l18;
pile[v[22]]=102; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+15,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+27,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+15,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+28,jvj+29)*/
if(x[jvj+29]!=225&&x[jvj+29]!=178) goto l12;
pile[v[22]]=268; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+29,jvj+30)*/
x[jvj+52]=135 ;z[jvj+52]=135;
x[jvj+64]=134 ;z[jvj+64]=134;
pile[v[22]]=140; pile[WZ1]=V124; pile[WZ2]=361; pile[WZ3]=jvj+29; pile[WZ4]=jvj+71; 
(*f[692])( );     /*QUADRI13(140,V124,361,jvj+29,jvj+71)*/
pile[WZ3]=jvj+30; pile[WZ4]=jvj+73; 
(*f[692])( );     /*QUADRI13(140,V124,361,jvj+30,jvj+73)*/
l22:pile[v[22]]=jvj+52; pile[WZ1]=X; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+52,X,jvj+53)*/
pile[v[22]]=248; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(248,jvj+53,jvj+54)*/
l23:if((x[jvj+54]<=0)) goto l31;
x[jvj+55]=s[x[jvj+54]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+54];
pile[v[22]]=122; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(122,jvj+55,jvj+56)*/
if((x[jvj+56]!=x[jvj+52])) goto l24;
pile[v[22]]=161; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(161,jvj+55,jvj+57)*/
if((x[jvj+57]!=x[X])) goto l24;
pile[v[22]]=356; pile[WZ1]=X; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(356,X,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; pile[WZ2]=jvj+55; 
(*f[2097])( );     /*MEVALZ0(jvj+70,jvj+71,jvj+55)*/
pile[v[22]]=TL; pile[WZ1]=jvj+52; pile[WZ2]=X; 
(*f[1839])( );     /*MEVALX0(TL,jvj+52,X)*/
(*f[1840])( );     /*MEVALY0(TL,jvj+52,X)*/
l31:if(x[jvj+73]!=incon) goto l32;
l33:pile[v[22]]=356; pile[WZ1]=X; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(356,X,jvj+74)*/
x[jvj+75]=d[108];z[jvj+75]=0;
l34:if((x[jvj+75]>0)) goto l35;
l37:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l9:x[jvj+17]=s[x[jvj+51]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+51];
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=113)) goto l10;
pile[v[22]]=102; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+17,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+19,V29)*/
V29=pile[WZ2]; 
V21=V29;
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==V21) goto l11;
l10:x[jvj+51]=t[x[jvj+51]];
l8:if((x[jvj+51]>0)) goto l9;
if((x[jvj+20]==0)) goto l21;
pile[v[22]]=jvj+20; pile[WZ1]=216; pile[WZ2]=jvj+71; 
(*f[300])( );     /*TRI10(jvj+20,216,jvj+71)*/
x[jvj+52]=135 ;z[jvj+52]=135;
l25:x[jvj+64]=120 ;z[jvj+64]=120;
if(x[jvj+71]!=incon) goto l30;
goto l33;
l11:pile[v[22]]=jvj+20; pile[WZ1]=V21; 
(*f[331])( );     /*PLUE3(jvj+20,V21)*/
goto l10;
l12:if(x[jvj+29]!=25&&x[jvj+29]!=26&&x[jvj+29]!=27&&x[jvj+29]!=28&&x[jvj+29]!=29&&x[jvj+29]!=30&&x[jvj+29]!=44&&x[jvj+29]!=45) goto l15;
pile[v[22]]=103; pile[WZ1]=jvj+15; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+15,jvj+31)*/
pile[v[22]]=140; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+31,W)*/
W=pile[WZ2]; 
pile[v[22]]=263; pile[WZ1]=TL; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(263,TL,jvj+32)*/
for(a=x[jvj+32];a>0;a=t[a]) if(s[a]==V124) goto l13;
l15:pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+15,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+34,jvj+35)*/
if(x[jvj+35]!=25&&x[jvj+35]!=26&&x[jvj+35]!=29&&x[jvj+35]!=30&&x[jvj+35]!=27&&x[jvj+35]!=28) goto l18;
x[jvj+36]=d[20];z[jvj+36]=0;
l16:if((x[jvj+36]<=0)) goto l18;
x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+15; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+37,jvj+15,jvj+38)*/
pile[v[22]]=140; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+38,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+37; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+37,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+15; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+39,jvj+15,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+40,jvj+41)*/
if(x[jvj+41]!=89&&x[jvj+41]!=96&&x[jvj+41]!=41&&x[jvj+41]!=20&&x[jvj+41]!=1317) goto l17;
pile[v[22]]=232; pile[WZ1]=jvj+37; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(232,jvj+37,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+35; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+42,jvj+35,jvj+43)*/
if((x[jvj+44]=w[x[jvj+41]][3])==incon) goto l17;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+44; pile[WZ3]=jvj+45; 
(*f[45])( );if(v[102]) goto l17;     /*FNDZ0(jvj+40,jvj+44,V147,jvj+45)*/
V147=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+43; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+43,jvj+46)*/
x[jvj+86]=V147 ;z[jvj+86]=(x[jvj+45]==20&&V147<=sepcte) ? V147 : (x[jvj+45]==41) ? (-1000) : 0;
x[jvj+52]=135 ;z[jvj+52]=135;
pile[v[22]]=225; pile[WZ1]=361; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(225,361,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+41; pile[WZ2]=158; pile[WZ3]=jvj+85; 
(*f[58])( );     /*TRI3(jvj+84,jvj+41,158,jvj+85)*/
pile[v[22]]=140; pile[WZ1]=V58; pile[WZ2]=145; pile[WZ3]=jvj+43; pile[WZ4]=jvj+85; pile[WZ5]=jvj+71; 
(*f[48])( );     /*QUADRI1(140,V58,145,jvj+43,jvj+85,jvj+71)*/
V167=x[jvj+86];
V168=z[jvj+86];
pile[v[22]]=jvj+71; pile[WZ1]=V167; pile[WZ2]=jvj+44; pile[WZ3]=V168; 
(*f[49])( );     /*CHP0(jvj+71,V167,jvj+44,V168)*/
x[jvj+64]=134 ;z[jvj+64]=134;
pile[v[22]]=225; pile[WZ1]=361; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(225,361,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+41; pile[WZ2]=158; pile[WZ3]=jvj+88; 
(*f[58])( );     /*TRI3(jvj+87,jvj+41,158,jvj+88)*/
pile[v[22]]=140; pile[WZ1]=V58; pile[WZ2]=145; pile[WZ3]=jvj+46; pile[WZ4]=jvj+88; pile[WZ5]=jvj+73; 
(*f[48])( );     /*QUADRI1(140,V58,145,jvj+46,jvj+88,jvj+73)*/
V171=x[jvj+86];
V172=z[jvj+86];
pile[v[22]]=jvj+73; pile[WZ1]=V171; pile[WZ2]=jvj+44; pile[WZ3]=V172; 
(*f[49])( );     /*CHP0(jvj+73,V171,jvj+44,V172)*/
goto l22;
l13:for(a=x[jvj+32];a>0;a=t[a]) if(s[a]==W) goto l14;
goto l15;
l14:pile[v[22]]=268; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(268,jvj+29,jvj+33)*/
x[jvj+52]=135 ;z[jvj+52]=135;
pile[v[22]]=289; pile[WZ1]=361; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(289,361,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+29; pile[WZ2]=145; pile[WZ3]=jvj+81; 
(*f[58])( );     /*TRI3(jvj+80,jvj+29,145,jvj+81)*/
pile[v[22]]=110; pile[WZ1]=W; pile[WZ2]=140; pile[WZ3]=V124; pile[WZ4]=jvj+81; pile[WZ5]=jvj+71; 
(*f[1833])( );     /*QUADRI18(110,W,140,V124,jvj+81,jvj+71)*/
x[jvj+64]=134 ;z[jvj+64]=134;
pile[v[22]]=289; pile[WZ1]=361; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(289,361,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=jvj+33; pile[WZ2]=145; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+82,jvj+33,145,jvj+83)*/
pile[v[22]]=110; pile[WZ1]=W; pile[WZ2]=140; pile[WZ3]=V124; pile[WZ4]=jvj+83; pile[WZ5]=jvj+73; 
(*f[1833])( );     /*QUADRI18(110,W,140,V124,jvj+83,jvj+73)*/
goto l22;
l17:x[jvj+36]=t[x[jvj+36]];
goto l16;
l18:pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+15,jvj+47)*/
if((x[jvj+47]==435)) goto l19;
if((x[jvj+47]!=39)) goto l21;
pile[v[22]]=113; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(113,jvj+15,jvj+51)*/
x[jvj+20]=0 ;z[jvj+20]=0;
pile[v[22]]=263; pile[WZ1]=TL; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(263,TL,jvj+16)*/
goto l8;
l19:pile[v[22]]=436; pile[WZ1]=jvj+15; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(436,jvj+15,jvj+48)*/
pile[v[22]]=140; pile[WZ1]=jvj+48; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+48,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+15,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+49,jvj+50)*/
if(x[jvj+50]!=179&&x[jvj+50]!=500&&x[jvj+50]!=82) goto l21;
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+15,jvj+21)*/
x[jvj+78]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+21,jvj+22)*/
if(x[jvj+22]!=89&&x[jvj+22]!=96&&x[jvj+22]!=41&&x[jvj+22]!=20&&x[jvj+22]!=1317) goto l38;
pile[v[22]]=535; pile[WZ1]=TL; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(535,TL,jvj+23)*/
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==V41) goto l38;
if((x[jvj+24]=w[x[jvj+22]][3])==incon) goto l38;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+24; pile[WZ3]=jvj+25; 
(*f[45])( );if(v[102]) goto l38;     /*FNDZ0(jvj+21,jvj+24,V145,jvj+25)*/
V145=pile[WZ2]; 
x[jvj+79]=V145 ;z[jvj+79]=(x[jvj+25]==20&&V145<=sepcte) ? V145 : (x[jvj+25]==41) ? (-1000) : 0;
pile[v[22]]=225; pile[WZ1]=361; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(225,361,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+22; pile[WZ2]=158; pile[WZ3]=jvj+77; 
(*f[58])( );     /*TRI3(jvj+76,jvj+22,158,jvj+77)*/
pile[v[22]]=140; pile[WZ1]=V41; pile[WZ2]=145; pile[WZ3]=25; pile[WZ4]=jvj+77; pile[WZ5]=jvj+78; 
(*f[48])( );     /*QUADRI1(140,V41,145,25,jvj+77,jvj+78)*/
V159=x[jvj+79];
V160=z[jvj+79];
pile[v[22]]=jvj+78; pile[WZ1]=V159; pile[WZ2]=jvj+24; pile[WZ3]=V160; 
(*f[49])( );     /*CHP0(jvj+78,V159,jvj+24,V160)*/
l20:x[jvj+52]=135 ;z[jvj+52]=135;
x[jvj+71]=x[jvj+78] ;z[jvj+71]=z[jvj+78];
goto l25;
l21:x[jvj+52]=120 ;z[jvj+52]=120;
goto l25;
l24:x[jvj+54]=t[x[jvj+54]];
goto l23;
l27:x[jvj+90]=t[x[jvj+90]];
l26:if((x[jvj+90]<=0)) goto l36;
x[jvj+61]=s[x[jvj+90]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+90];
pile[v[22]]=161; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(161,jvj+61,jvj+62)*/
if((x[jvj+62]!=x[X])) goto l27;
pile[v[22]]=122; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(122,jvj+61,jvj+63)*/
if((x[jvj+63]!=x[jvj+58])) goto l27;
pile[v[22]]=jvj+61; pile[WZ1]=356; pile[WZ2]=jvj+74; 
(*f[34])( );     /*CHGC0(jvj+61,356,jvj+74)*/
pile[WZ1]=360; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+61,360,68)*/
pile[v[22]]=TL; pile[WZ1]=jvj+58; pile[WZ2]=X; 
(*f[1839])( );     /*MEVALX0(TL,jvj+58,X)*/
(*f[1840])( );     /*MEVALY0(TL,jvj+58,X)*/
l36:x[jvj+75]=t[x[jvj+75]];
goto l34;
l29:x[jvj+66]=t[x[jvj+66]];
l28:if((x[jvj+66]<=0)) goto l33;
x[jvj+67]=s[x[jvj+66]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+66];
pile[v[22]]=161; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(161,jvj+67,jvj+68)*/
if((x[jvj+68]!=x[X])) goto l29;
pile[v[22]]=122; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(122,jvj+67,jvj+69)*/
if((x[jvj+69]!=x[jvj+64])) goto l29;
pile[v[22]]=356; pile[WZ1]=X; pile[WZ2]=jvj+72; 
(*f[33])( );     /*FNDE0(356,X,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; pile[WZ2]=jvj+67; 
(*f[2097])( );     /*MEVALZ0(jvj+72,jvj+73,jvj+67)*/
pile[v[22]]=TL; pile[WZ1]=jvj+64; pile[WZ2]=X; 
(*f[1839])( );     /*MEVALX0(TL,jvj+64,X)*/
(*f[1840])( );     /*MEVALY0(TL,jvj+64,X)*/
goto l33;
l30:if((x[jvj+52]!=120)) goto l22;
goto l33;
l32:if((x[jvj+64]==120)) goto l33;
pile[v[22]]=jvj+64; pile[WZ1]=X; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(jvj+64,X,jvj+65)*/
pile[v[22]]=248; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(248,jvj+65,jvj+66)*/
goto l28;
l35:x[jvj+58]=s[x[jvj+75]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+75];
if((x[jvj+58]==x[jvj+52])) goto l36;
if((x[jvj+58]==x[jvj+64])) goto l36;
pile[v[22]]=jvj+58; pile[WZ1]=X; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(jvj+58,X,jvj+59)*/
pile[v[22]]=248; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(248,jvj+59,jvj+60)*/
x[jvj+90]=x[jvj+60] ;z[jvj+90]=z[jvj+60];
goto l26;
l38:pile[v[22]]=V41; pile[WZ1]=(-96); pile[WZ2]=216; pile[WZ3]=jvj+78; 
(*f[1979])( );     /*TRIENS3(V41,(-96),216,jvj+78)*/
goto l20;
}
