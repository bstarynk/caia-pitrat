#include "dx.h"
void ORA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V150=0,V163=0,V128=0,V36=0,V63=0,V87=0,V93=0,V189=0,V195=0,V201=0,V16=0,V8=0,V176=0,V146=0,V234=0,V24=0,V18=0,V33=0,V27=0,V75=0,V69=0,V84=0,V78=0,V157=0,V240=0,V41=0,V54=0,V49=0,V131=0,V211=0;
int X,R,P,E;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=64;
x[jvj+1]=10300;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2086&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; R=pile[v[22]+1]; P=pile[v[22]+2]; E=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,X,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V128; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V128,333,P)*/
l2:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,X,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+4,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V36; pile[WZ2]=470; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V36,470,P)*/
l3:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,X,jvj+5)*/
if((x[jvj+5]==435)) goto l4;
if((x[jvj+5]==61)) goto l9;
if((x[jvj+5]==73)) goto l11;
if((x[jvj+5]==22)) goto l14;
if((x[jvj+5]==39)) goto l22;
if((x[jvj+5]==69)) goto l31;
if((x[jvj+5]!=47)) goto l44;
pile[v[22]]=184; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(184,X,jvj+46)*/
V240=x[E];
l38:if((V240<=0)) goto l44;
V157=s[V240];
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(436,X,jvj+3)*/
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(140,jvj+3,V163)*/
V163=pile[WZ2]; 
if((V157==V163)) goto l39;
l41:x[jvj+64]=x[jvj+46] ;z[jvj+64]=z[jvj+46];
l40:if((x[jvj+64]<=0)) goto l39;
x[jvj+47]=s[x[jvj+64]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+64];
pile[v[22]]=253; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(253,jvj+47,jvj+48)*/
for(a=x[jvj+48];a>0;a=t[a]) if(s[a]==V157) goto l43;
l42:x[jvj+64]=t[x[jvj+64]];
goto l40;
l1:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(436,X,jvj+2)*/
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+2,V150)*/
V150=pile[WZ2]; 
if((V146==V150)) goto l20;
l21:pile[v[22]]=R; pile[WZ1]=V146; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V146,333,P)*/
l20:V234=t[V234];
l19:if((V234<=0)) goto l44;
V146=s[V234];
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==V146) goto l1;
goto l20;
l4:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+6,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V63; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V63,333,P)*/
l5:pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]==22)) goto l6;
if((x[jvj+7]!=69)) goto l44;
pile[v[22]]=108; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(108,jvj+6,jvj+8)*/
l7:if((x[jvj+8]<=0)) goto l44;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=103; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=R; pile[WZ2]=P; pile[WZ3]=E; 
(*f[2086])( );     /*ORA0(jvj+10,R,P,E)*/
l8:x[jvj+8]=t[x[jvj+8]];
goto l7;
l6:pile[v[22]]=jvj+6; pile[WZ1]=R; pile[WZ2]=P; pile[WZ3]=E; 
(*f[2086])( );     /*ORA0(jvj+6,R,P,E)*/
l44:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,X,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]==44)) goto l45;
if((x[jvj+50]!=25)) goto l50;
x[jvj+52]=d[20];z[jvj+52]=0;
l46:if((x[jvj+52]<=0)) goto l50;
x[jvj+53]=s[x[jvj+52]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+52];
pile[v[22]]=jvj+53; pile[WZ1]=X; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(jvj+53,X,jvj+54)*/
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(140,jvj+54,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+53; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(268,jvj+53,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=X; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(jvj+55,X,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+56,jvj+57)*/
if((x[jvj+57]!=21)) goto l48;
V49=V54;
pile[v[22]]=R; pile[WZ1]=V49; pile[WZ2]=334; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V49,334,P)*/
l48:if(x[jvj+57]!=96&&x[jvj+57]!=89&&x[jvj+57]!=41&&x[jvj+57]!=20&&x[jvj+57]!=128&&x[jvj+57]!=570&&x[jvj+57]!=1317) goto l49;
V131=V54;
pile[v[22]]=R; pile[WZ1]=V131; pile[WZ2]=334; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V131,334,P)*/
l49:pile[v[22]]=111; pile[WZ1]=jvj+56; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+56,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]!=24)) goto l47;
pile[v[22]]=102; pile[WZ1]=jvj+56; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+56,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,jvj+60,jvj+61)*/
if((x[jvj+61]!=41)) goto l47;
V211=V54;
pile[v[22]]=R; pile[WZ1]=V211; pile[WZ2]=334; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V211,334,P)*/
l47:x[jvj+52]=t[x[jvj+52]];
goto l46;
l9:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,X,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+11,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V87; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V87,333,P)*/
l10:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+12,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V93; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V93,333,P)*/
goto l44;
l11:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+13,V189)*/
V189=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V189; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V189,333,P)*/
l12:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,X,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+14,V195)*/
V195=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V195; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V195,333,P)*/
l13:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(160,X,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+15,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V201; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V201,333,P)*/
goto l44;
l14:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(160,X,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+16,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,X,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=20)) goto l15;
pile[v[22]]=R; pile[WZ1]=V16; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V16,333,P)*/
l15:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,X,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+19,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,X,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]==25)) goto l16;
pile[v[22]]=R; pile[WZ1]=V8; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V8,333,P)*/
l16:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,X,jvj+22)*/
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+22,V176)*/
V176=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,X,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+23,jvj+24)*/
if(x[jvj+24]==178||x[jvj+24]==44||x[jvj+24]==25) goto l17;
pile[v[22]]=R; pile[WZ1]=V176; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V176,333,P)*/
l17:if((x[jvj+24]==25)) goto l18;
pile[v[22]]=R; pile[WZ1]=V176; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V176,333,P)*/
l18:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,X,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+25,jvj+26)*/
if(x[jvj+26]!=55&&x[jvj+26]!=48&&x[jvj+26]!=50&&x[jvj+26]!=54) goto l44;
pile[v[22]]=253; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(253,X,jvj+27)*/
V234=x[E];
goto l19;
l22:pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(114,X,jvj+28)*/
l23:if((x[jvj+28]>0)) goto l24;
pile[v[22]]=113; pile[WZ1]=X; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(113,X,jvj+35)*/
l29:if((x[jvj+35]<=0)) goto l44;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=102; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,jvj+36,jvj+37)*/
pile[v[22]]=140; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(140,jvj+37,V33)*/
V33=pile[WZ2]; 
V27=V33;
pile[v[22]]=R; pile[WZ1]=V27; pile[WZ2]=470; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V27,470,P)*/
l30:x[jvj+35]=t[x[jvj+35]];
goto l29;
l24:x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+29,jvj+30)*/
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,jvj+30,V24)*/
V24=pile[WZ2]; 
V18=V24;
pile[v[22]]=R; pile[WZ1]=V18; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V18,333,P)*/
l26:pile[v[22]]=100; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+30,jvj+31)*/
if((x[jvj+31]!=69)) goto l25;
pile[v[22]]=108; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(108,jvj+30,jvj+32)*/
x[jvj+62]=x[jvj+32] ;z[jvj+62]=z[jvj+32];
l27:if((x[jvj+62]<=0)) goto l25;
x[jvj+33]=s[x[jvj+62]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+62];
pile[v[22]]=103; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,jvj+33,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=R; pile[WZ2]=P; pile[WZ3]=E; 
(*f[2086])( );     /*ORA0(jvj+34,R,P,E)*/
l28:x[jvj+62]=t[x[jvj+62]];
goto l27;
l25:x[jvj+28]=t[x[jvj+28]];
goto l23;
l31:pile[v[22]]=108; pile[WZ1]=X; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(108,X,jvj+38)*/
l32:if((x[jvj+38]<=0)) goto l44;
x[jvj+39]=s[x[jvj+38]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+38];
pile[v[22]]=103; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(103,jvj+39,jvj+40)*/
pile[v[22]]=140; pile[WZ1]=jvj+40; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+40,V75)*/
V75=pile[WZ2]; 
V69=V75;
pile[v[22]]=R; pile[WZ1]=V69; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V69,333,P)*/
l34:pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=69)) goto l37;
pile[v[22]]=108; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(108,jvj+40,jvj+42)*/
x[jvj+63]=x[jvj+42] ;z[jvj+63]=z[jvj+42];
l35:if((x[jvj+63]<=0)) goto l37;
x[jvj+43]=s[x[jvj+63]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+63];
pile[v[22]]=103; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(103,jvj+43,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=R; pile[WZ2]=P; pile[WZ3]=E; 
(*f[2086])( );     /*ORA0(jvj+44,R,P,E)*/
l36:x[jvj+63]=t[x[jvj+63]];
goto l35;
l37:pile[v[22]]=102; pile[WZ1]=jvj+39; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+39,jvj+45)*/
pile[v[22]]=140; pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,jvj+45,V84)*/
V84=pile[WZ2]; 
V78=V84;
pile[v[22]]=R; pile[WZ1]=V78; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V78,333,P)*/
l33:x[jvj+38]=t[x[jvj+38]];
goto l32;
l39:V240=t[V240];
goto l38;
l43:pile[v[22]]=R; pile[WZ1]=V157; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V157,333,P)*/
goto l42;
l45:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,X,jvj+51)*/
pile[v[22]]=140; pile[WZ1]=jvj+51; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,jvj+51,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V41; pile[WZ2]=334; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V41,334,P)*/
l50:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
}
