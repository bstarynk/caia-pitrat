#include "dx.h"
void DVA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V55=0,V54=0,V58=0,V57=0,V64=0,V250=0,V251=0,V289=0,W=0,V357=0,V363=0,V317=0,O=0,V306=0,V380=0,V369=0,V218=0,V91=0,V42=0,V240=0,V29=0,V19=0,V7=0,V160=0,V137=0,V149=0,V123=0,V177=0,V248=0,V257=0,V245=0,V268=0,V278=0,V276=0,V261=0,V72=0,V117=0,V114=0,V95=0,V350=0,V345=0,V51=0,V328=0,V341=0,V228=0,V186=0,V180=0,V195=0,V189=0;
int R,X;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=164;
x[jvj+1]=10474;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1600&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=X; 
(*f[1795])( );     /*DVG0(X)*/
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(100,X,jvj+22)*/
if((x[jvj+22]==61)) goto l11;
if((x[jvj+22]==69)) goto l13;
if((x[jvj+22]==435)) goto l16;
if((x[jvj+22]==22)) goto l23;
if((x[jvj+22]==73)) goto l30;
if((x[jvj+22]!=39)) goto l62;
pile[v[22]]=111; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(111,X,jvj+92)*/
pile[v[22]]=101; pile[WZ1]=jvj+92; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(101,jvj+92,jvj+2)*/
if(x[jvj+2]!=10016&&x[jvj+2]!=10144&&x[jvj+2]!=10102&&x[jvj+2]!=10672&&x[jvj+2]!=10462&&x[jvj+2]!=10546&&x[jvj+2]!=10221&&x[jvj+2]!=10064&&x[jvj+2]!=10062&&x[jvj+2]!=10545&&x[jvj+2]!=10023&&x[jvj+2]!=10156) goto l44;
pile[v[22]]=256; pile[WZ1]=100; pile[WZ2]=jvj+93; 
(*f[33])( );     /*FNDE0(256,100,jvj+93)*/
x[jvj+94]=d[34];z[jvj+94]=0;
l37:if((x[jvj+94]<=0)) goto l44;
x[jvj+95]=s[x[jvj+94]] ;z[jvj+95]=(x[jvj+95]<=sepcte) ? x[jvj+95] : z[jvj+94];
pile[v[22]]=jvj+95; pile[WZ1]=X; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(jvj+95,X,jvj+96)*/
x[jvj+156]=x[jvj+96] ;z[jvj+156]=z[jvj+96];
l38:if((x[jvj+156]>0)) goto l39;
x[jvj+94]=t[x[jvj+94]];
goto l37;
l1:pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,X,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l54;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V54)*/
V54=pile[WZ2]; 
if((V54!=V55)) goto l3;
x[jvj+107]=d[34];z[jvj+107]=0;
l49:if((x[jvj+107]<=0)) goto l54;
x[jvj+108]=s[x[jvj+107]] ;z[jvj+108]=(x[jvj+108]<=sepcte) ? x[jvj+108] : z[jvj+107];
pile[v[22]]=jvj+108; pile[WZ1]=X; pile[WZ2]=jvj+109; 
(*f[33])( );     /*FNDE0(jvj+108,X,jvj+109)*/
x[jvj+159]=x[jvj+109] ;z[jvj+159]=z[jvj+109];
l50:if((x[jvj+159]>0)) goto l51;
x[jvj+107]=t[x[jvj+107]];
goto l49;
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l5:x[jvj+151]=t[x[jvj+151]];
l4:if((x[jvj+151]<=0)) goto l52;
x[jvj+8]=s[x[jvj+151]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+151];
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+8,V57)*/
V57=pile[WZ2]; 
if((V57!=V58)) goto l5;
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,jvj+5,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l53;     /*FNDC1(140,jvj+9,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=327; pile[WZ1]=317; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(327,317,jvj+10)*/
x[jvj+152]=x[jvj+10] ;z[jvj+152]=z[jvj+10];
l6:if((x[jvj+152]<=0)) goto l53;
x[jvj+11]=s[x[jvj+152]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+152];
pile[v[22]]=109; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+11,jvj+12)*/
if((x[jvj+12]!=x[jvj+2])) goto l7;
pile[v[22]]=273; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(273,jvj+11,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==V64) goto l52;
l7:x[jvj+152]=t[x[jvj+152]];
goto l6;
l10:x[jvj+17]=t[x[jvj+17]];
l9:if((x[jvj+17]<=0)) goto l1;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=109; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+18,jvj+19)*/
if((x[jvj+19]!=x[jvj+2])) goto l10;
pile[v[22]]=146; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(146,jvj+18,jvj+21)*/
l45:if((x[jvj+100]<=0)) goto l1;
x[jvj+102]=s[x[jvj+100]] ;z[jvj+102]=(x[jvj+102]<=sepcte) ? x[jvj+102] : z[jvj+100];
pile[v[22]]=103; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(103,jvj+102,jvj+103)*/
pile[v[22]]=140; pile[WZ1]=jvj+103; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(140,jvj+103,V268)*/
V268=pile[WZ2]; 
if((V268!=(-598))) goto l46;
pile[v[22]]=102; pile[WZ1]=jvj+102; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,jvj+102,jvj+20)*/
x[jvj+158]=x[jvj+101] ;z[jvj+158]=z[jvj+101];
l47:if((x[jvj+158]<=0)) goto l46;
x[jvj+104]=s[x[jvj+158]] ;z[jvj+104]=(x[jvj+104]<=sepcte) ? x[jvj+104] : z[jvj+158];
pile[v[22]]=103; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(103,jvj+104,jvj+105)*/
pile[v[22]]=140; pile[WZ1]=jvj+105; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+105,V278)*/
V278=pile[WZ2]; 
if((V278!=(-601))) goto l48;
pile[v[22]]=102; pile[WZ1]=jvj+104; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+104,jvj+106)*/
pile[v[22]]=140; pile[WZ1]=jvj+106; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+106,V276)*/
V276=pile[WZ2]; 
V261=V276;
pile[v[22]]=V261; pile[WZ1]=jvj+20; pile[WZ2]=R; 
(*f[1789])( );     /*DVP0(V261,jvj+20,R)*/
pile[WZ1]=jvj+21; 
(*f[1791])( );     /*DVF0(V261,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+20,V289)*/
V289=pile[WZ2]; 
W=V289;
pile[v[22]]=W; pile[WZ1]=jvj+21; 
(*f[1791])( );     /*DVF0(W,jvj+21)*/
l48:x[jvj+158]=t[x[jvj+158]];
goto l47;
l11:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+23,V357)*/
V357=pile[WZ2]; 
pile[v[22]]=V357; pile[WZ1]=41; 
(*f[1791])( );     /*DVF0(V357,41)*/
l12:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(103,X,jvj+24)*/
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l62;     /*FNDC1(140,jvj+24,V363)*/
V363=pile[WZ2]; 
pile[v[22]]=V363; pile[WZ1]=41; 
(*f[1791])( );     /*DVF0(V363,41)*/
l62:x[jvj+161]=w[x[jvj+22]][9];
l63:if((x[jvj+161]>0)) goto l64;
if((x[jvj+22]==39)) goto l69;
x[jvj+162]=w[x[jvj+22]][8];
l66:if((x[jvj+162]<=0)) goto l69;
x[jvj+124]=s[x[jvj+162]] ;z[jvj+124]=(x[jvj+124]<=sepcte) ? x[jvj+124] : z[jvj+162];
pile[v[22]]=jvj+124; pile[WZ1]=X; pile[WZ2]=jvj+125; 
(*f[33])( );     /*FNDE0(jvj+124,X,jvj+125)*/
x[jvj+163]=x[jvj+125] ;z[jvj+163]=z[jvj+125];
l67:if((x[jvj+163]>0)) goto l68;
x[jvj+162]=t[x[jvj+162]];
goto l66;
l13:pile[v[22]]=108; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(108,X,jvj+25)*/
l14:if((x[jvj+25]<=0)) goto l62;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=103; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+26,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+27,V317)*/
V317=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+26; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+26,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+28,jvj+29)*/
O=x[jvj+29];
if((x[jvj+30]=w[O][1])==incon) goto l15;
if((x[jvj+30]==23)) goto l15;
V306=V317;
pile[v[22]]=V306; pile[WZ1]=jvj+30; 
(*f[1791])( );     /*DVF0(V306,jvj+30)*/
l15:x[jvj+25]=t[x[jvj+25]];
goto l14;
l16:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,X,jvj+31)*/
pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+31,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=172)) goto l18;
pile[v[22]]=103; pile[WZ1]=jvj+31; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,jvj+31,jvj+34)*/
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+34,V380)*/
V380=pile[WZ2]; 
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(436,X,jvj+35)*/
pile[v[22]]=140; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+35,V369)*/
V369=pile[WZ2]; 
pile[v[22]]=V369; pile[WZ1]=V380; 
(*f[1796])( );     /*DVF4(V369,V380)*/
l17:pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+34,jvj+36)*/
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(436,X,jvj+37)*/
pile[v[22]]=140; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+37,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,X,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+38,jvj+39)*/
if(x[jvj+39]!=179&&x[jvj+39]!=82) goto l18;
pile[v[22]]=V218; pile[WZ1]=jvj+36; 
(*f[1791])( );     /*DVF0(V218,jvj+36)*/
l18:x[jvj+153]=w[22][9];
if(x[jvj+33]!=179&&x[jvj+33]!=82) goto l21;
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+31,jvj+40)*/
if((x[jvj+40]!=22)) goto l21;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,X,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+33]==x[jvj+42])) goto l19;
l21:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(436,X,jvj+47)*/
pile[v[22]]=140; pile[WZ1]=jvj+47; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+47,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,X,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+48,jvj+49)*/
if(x[jvj+49]!=179&&x[jvj+49]!=82) goto l22;
pile[v[22]]=V42; pile[WZ1]=jvj+31; pile[WZ2]=R; 
(*f[1789])( );     /*DVP0(V42,jvj+31,R)*/
l22:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(436,X,jvj+50)*/
pile[v[22]]=140; pile[WZ1]=jvj+50; 
(*f[44])( );if(v[102]) goto l62;     /*FNDC1(140,jvj+50,V240)*/
V240=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(111,X,jvj+51)*/
pile[v[22]]=101; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(101,jvj+51,jvj+52)*/
if(x[jvj+52]!=723&&x[jvj+52]!=903&&x[jvj+52]!=908&&x[jvj+52]!=911) goto l62;
pile[v[22]]=V240; pile[WZ1]=20; 
(*f[1791])( );     /*DVF0(V240,20)*/
goto l62;
l23:x[jvj+154]=w[22][9];
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,X,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+53,jvj+54)*/
l24:if((x[jvj+154]<=0)) goto l26;
x[jvj+55]=s[x[jvj+154]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+154];
pile[v[22]]=jvj+55; pile[WZ1]=X; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+55,X,jvj+56)*/
pile[v[22]]=140; pile[WZ1]=jvj+56; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+56,V29)*/
V29=pile[WZ2]; 
if((x[jvj+57]=w[x[jvj+55]][3])==incon) goto l25;
pile[v[22]]=jvj+57; pile[WZ1]=jvj+54; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+57,jvj+54,jvj+58)*/
pile[v[22]]=V29; pile[WZ1]=jvj+58; 
(*f[1791])( );     /*DVF0(V29,jvj+58)*/
l25:x[jvj+154]=t[x[jvj+154]];
goto l24;
l26:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,X,jvj+59)*/
pile[v[22]]=140; pile[WZ1]=jvj+59; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+59,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,X,jvj+60)*/
pile[v[22]]=101; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+60,jvj+61)*/
if(x[jvj+61]!=44&&x[jvj+61]!=45) goto l27;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(103,X,jvj+62)*/
pile[v[22]]=V19; pile[WZ1]=jvj+62; 
(*f[1790])( );     /*DVE0(V19,jvj+62)*/
l27:x[jvj+155]=w[61][9];
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(111,X,jvj+63)*/
pile[v[22]]=101; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(101,jvj+63,jvj+64)*/
if(x[jvj+64]==25||x[jvj+64]==26) goto l28;
goto l62;
l30:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,X,jvj+69)*/
pile[v[22]]=140; pile[WZ1]=jvj+69; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+69,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(103,X,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+70,jvj+71)*/
if((x[jvj+71]!=69)) goto l31;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,X,jvj+72)*/
pile[v[22]]=101; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+72,jvj+73)*/
if(x[jvj+73]!=430&&x[jvj+73]!=732&&x[jvj+73]!=564&&x[jvj+73]!=841) goto l31;
pile[v[22]]=V160; pile[WZ1]=23; pile[WZ2]=20; 
(*f[1794])( );     /*DVF3(V160,23,20)*/
l31:pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+69,jvj+74)*/
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(160,X,jvj+75)*/
pile[v[22]]=140; pile[WZ1]=jvj+75; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(140,jvj+75,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,X,jvj+76)*/
pile[v[22]]=101; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+76,jvj+77)*/
if(x[jvj+77]!=38&&x[jvj+77]!=84&&x[jvj+77]!=364&&x[jvj+77]!=1372) goto l32;
pile[v[22]]=jvj+74; pile[WZ1]=V137; 
(*f[1793])( );     /*DVF2(jvj+74,V137)*/
l32:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,X,jvj+78)*/
pile[v[22]]=140; pile[WZ1]=jvj+78; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,jvj+78,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,X,jvj+79)*/
pile[v[22]]=101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+79,jvj+80)*/
if(x[jvj+80]!=430&&x[jvj+80]!=732&&x[jvj+80]!=564&&x[jvj+80]!=841) goto l33;
pile[v[22]]=V149; pile[WZ1]=jvj+69; 
(*f[1790])( );     /*DVE0(V149,jvj+69)*/
l33:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(160,X,jvj+81)*/
pile[v[22]]=140; pile[WZ1]=jvj+81; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+81,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,X,jvj+82)*/
pile[v[22]]=101; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+82,jvj+83)*/
if((x[jvj+83]!=36)) goto l34;
pile[v[22]]=V123; pile[WZ1]=X; 
(*f[1790])( );     /*DVE0(V123,X)*/
l34:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(111,X,jvj+84)*/
pile[v[22]]=101; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(101,jvj+84,jvj+85)*/
x[jvj+86]=d[6];z[jvj+86]=0;
l35:if((x[jvj+86]<=0)) goto l62;
x[jvj+89]=s[x[jvj+86]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+86];
if((x[jvj+87]=w[x[jvj+89]][3])==incon) goto l36;
pile[v[22]]=jvj+87; pile[WZ1]=jvj+85; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(jvj+87,jvj+85,jvj+88)*/
x[jvj+91]=x[jvj+88] ;z[jvj+91]=z[jvj+88];
if(x[jvj+91]!=20&&x[jvj+91]!=41&&x[jvj+91]!=89&&x[jvj+91]!=96&&x[jvj+91]!=1317) goto l36;
pile[v[22]]=jvj+89; pile[WZ1]=X; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(jvj+89,X,jvj+90)*/
pile[v[22]]=140; pile[WZ1]=jvj+90; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+90,V177)*/
V177=pile[WZ2]; 
pile[v[22]]=V177; pile[WZ1]=jvj+91; 
(*f[1791])( );     /*DVF0(V177,jvj+91)*/
l36:x[jvj+86]=t[x[jvj+86]];
goto l35;
l39:x[jvj+97]=s[x[jvj+156]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+156];
pile[v[22]]=103; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(103,jvj+97,jvj+98)*/
pile[v[22]]=140; pile[WZ1]=jvj+98; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(140,jvj+98,V248)*/
V248=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+97; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,jvj+97,jvj+99)*/
pile[v[22]]=140; pile[WZ1]=jvj+99; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(140,jvj+99,V257)*/
V257=pile[WZ2]; 
V245=V248;
x[jvj+157]=x[jvj+93] ;z[jvj+157]=z[jvj+93];
l41:if((x[jvj+157]<=0)) goto l40;
x[jvj+16]=s[x[jvj+157]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+157];
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+16,V250)*/
V250=pile[WZ2]; 
if((V245==V250)) goto l43;
l8:pile[v[22]]=110; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(110,jvj+16,V251)*/
V251=pile[WZ2]; 
if((V245==V251)) goto l43;
l42:x[jvj+157]=t[x[jvj+157]];
goto l41;
l40:x[jvj+156]=t[x[jvj+156]];
goto l38;
l43:pile[v[22]]=V257; pile[WZ1]=jvj+16; 
(*f[1791])( );     /*DVF0(V257,jvj+16)*/
goto l42;
l44:if(x[jvj+2]!=10128&&x[jvj+2]!=10171) goto l1;
pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=jvj+100; 
(*f[33])( );     /*FNDE0(114,X,jvj+100)*/
pile[v[22]]=113; pile[WZ2]=jvj+101; 
(*f[33])( );     /*FNDE0(113,X,jvj+101)*/
x[jvj+17]=d[116];z[jvj+17]=0;
goto l9;
l46:x[jvj+100]=t[x[jvj+100]];
goto l45;
l51:x[jvj+5]=s[x[jvj+159]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+159];
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(102,jvj+5,jvj+110)*/
pile[v[22]]=140; pile[WZ1]=jvj+110; 
(*f[44])( );if(v[102]) goto l52;     /*FNDC1(140,jvj+110,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(103,jvj+5,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l52;     /*FNDC1(140,jvj+6,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=283; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(283,jvj+4,jvj+7)*/
x[jvj+151]=x[jvj+7] ;z[jvj+151]=z[jvj+7];
goto l4;
l53:pile[v[22]]=V72; pile[WZ1]=jvj+8; 
(*f[1792])( );     /*DVF1(V72,jvj+8)*/
l52:x[jvj+159]=t[x[jvj+159]];
goto l50;
l54:x[jvj+111]=vo[15];z[jvj+111]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(583,jvj+111,jvj+112)*/
if((x[jvj+112]!=x[jvj+2])) goto l59;
x[jvj+113]=d[34];z[jvj+113]=0;
l55:if((x[jvj+113]<=0)) goto l59;
x[jvj+114]=s[x[jvj+113]] ;z[jvj+114]=(x[jvj+114]<=sepcte) ? x[jvj+114] : z[jvj+113];
pile[v[22]]=jvj+114; pile[WZ1]=X; pile[WZ2]=jvj+115; 
(*f[33])( );     /*FNDE0(jvj+114,X,jvj+115)*/
x[jvj+160]=x[jvj+115] ;z[jvj+160]=z[jvj+115];
l56:if((x[jvj+160]>0)) goto l57;
x[jvj+113]=t[x[jvj+113]];
goto l55;
l57:x[jvj+116]=s[x[jvj+160]] ;z[jvj+116]=(x[jvj+116]<=sepcte) ? x[jvj+116] : z[jvj+160];
pile[v[22]]=103; pile[WZ1]=jvj+116; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,jvj+116,jvj+117)*/
pile[v[22]]=140; pile[WZ1]=jvj+117; 
(*f[44])( );if(v[102]) goto l58;     /*FNDC1(140,jvj+117,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+116; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,jvj+116,jvj+118)*/
pile[v[22]]=140; pile[WZ1]=jvj+118; 
(*f[44])( );if(v[102]) goto l58;     /*FNDC1(140,jvj+118,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=V114; pile[WZ1]=jvj+117; pile[WZ2]=R; 
(*f[1789])( );     /*DVP0(V114,jvj+117,R)*/
pile[v[22]]=V117; pile[WZ1]=jvj+118; 
(*f[1789])( );     /*DVP0(V117,jvj+118,R)*/
l58:x[jvj+160]=t[x[jvj+160]];
goto l56;
l59:pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=jvj+119; 
(*f[33])( );     /*FNDE0(114,X,jvj+119)*/
l60:if((x[jvj+119]<=0)) goto l62;
x[jvj+120]=s[x[jvj+119]] ;z[jvj+120]=(x[jvj+120]<=sepcte) ? x[jvj+120] : z[jvj+119];
pile[v[22]]=102; pile[WZ1]=jvj+120; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(102,jvj+120,jvj+121)*/
pile[v[22]]=R; pile[WZ1]=jvj+121; 
(*f[1600])( );     /*DVA0(R,jvj+121)*/
l61:x[jvj+119]=t[x[jvj+119]];
goto l60;
l64:x[jvj+122]=s[x[jvj+161]] ;z[jvj+122]=(x[jvj+122]<=sepcte) ? x[jvj+122] : z[jvj+161];
pile[v[22]]=jvj+122; pile[WZ1]=X; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(jvj+122,X,jvj+123)*/
pile[v[22]]=R; pile[WZ1]=jvj+123; 
(*f[1600])( );     /*DVA0(R,jvj+123)*/
l65:x[jvj+161]=t[x[jvj+161]];
goto l63;
l68:x[jvj+126]=s[x[jvj+163]] ;z[jvj+126]=(x[jvj+126]<=sepcte) ? x[jvj+126] : z[jvj+163];
pile[v[22]]=R; pile[WZ1]=jvj+126; 
(*f[1600])( );     /*DVA0(R,jvj+126)*/
x[jvj+163]=t[x[jvj+163]];
goto l67;
l69:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(111,X,jvj+127)*/
pile[v[22]]=101; pile[WZ1]=jvj+127; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(101,jvj+127,jvj+128)*/
if((x[jvj+128]==353)) goto l70;
if((x[jvj+128]==743)) goto l72;
if((x[jvj+128]==180)) goto l74;
if((x[jvj+128]==44)) goto l75;
if((x[jvj+128]!=599)) goto l76;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(436,X,jvj+143)*/
pile[v[22]]=140; pile[WZ1]=jvj+143; 
(*f[44])( );if(v[102]) goto l76;     /*FNDC1(140,jvj+143,V228)*/
V228=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(102,X,jvj+14)*/
pile[v[22]]=128; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(128,jvj+14,jvj+15)*/
if((x[jvj+15]<=0)) goto l76;
x[jvj+144]=s[x[jvj+15]] ;z[jvj+144]=(x[jvj+144]<=sepcte) ? x[jvj+144] : z[jvj+15];
pile[v[22]]=100; pile[WZ1]=jvj+144; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(100,jvj+144,jvj+145)*/
pile[v[22]]=V228; pile[WZ1]=23; 
(*f[1794])( );     /*DVF3(V228,23,jvj+145)*/
l76:x[jvj+164]=w[185][9];
l77:if((x[jvj+164]>0)) goto l78;
l81:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l70:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(436,X,jvj+129)*/
pile[v[22]]=140; pile[WZ1]=jvj+129; 
(*f[44])( );if(v[102]) goto l76;     /*FNDC1(140,jvj+129,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=V95; pile[WZ1]=41; 
(*f[1791])( );     /*DVF0(V95,41)*/
goto l76;
l72:x[jvj+130]=d[20];z[jvj+130]=0;
l71:if((x[jvj+130]<=0)) goto l76;
x[jvj+131]=s[x[jvj+130]] ;z[jvj+131]=(x[jvj+131]<=sepcte) ? x[jvj+131] : z[jvj+130];
pile[v[22]]=jvj+131; pile[WZ1]=X; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(jvj+131,X,jvj+132)*/
pile[v[22]]=140; pile[WZ1]=jvj+132; 
(*f[44])( );if(v[102]) goto l73;     /*FNDC1(140,jvj+132,V350)*/
V350=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+131; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(268,jvj+131,jvj+133)*/
pile[v[22]]=jvj+133; pile[WZ1]=X; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(jvj+133,X,jvj+134)*/
V345=V350;
pile[v[22]]=jvj+134; pile[WZ1]=V345; 
(*f[1797])( );     /*DVF5(jvj+134,V345)*/
l73:x[jvj+130]=t[x[jvj+130]];
goto l71;
l74:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(436,X,jvj+135)*/
pile[v[22]]=140; pile[WZ1]=jvj+135; 
(*f[44])( );if(v[102]) goto l76;     /*FNDC1(140,jvj+135,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(102,X,jvj+136)*/
pile[v[22]]=V51; pile[WZ1]=jvj+136; 
(*f[1790])( );     /*DVE0(V51,jvj+136)*/
goto l76;
l75:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(102,X,jvj+137)*/
pile[v[22]]=140; pile[WZ1]=jvj+137; 
(*f[44])( );if(v[102]) goto l76;     /*FNDC1(140,jvj+137,V328)*/
V328=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(103,X,jvj+138)*/
pile[v[22]]=100; pile[WZ1]=jvj+138; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(100,jvj+138,jvj+139)*/
if((x[jvj+139]!=22)) goto l76;
pile[v[22]]=102; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(102,jvj+138,jvj+140)*/
pile[v[22]]=140; pile[WZ1]=jvj+140; 
(*f[44])( );if(v[102]) goto l76;     /*FNDC1(140,jvj+140,V341)*/
V341=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+138; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(111,jvj+138,jvj+141)*/
pile[v[22]]=101; pile[WZ1]=jvj+141; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(101,jvj+141,jvj+142)*/
if(x[jvj+142]!=231&&x[jvj+142]!=1175) goto l76;
pile[v[22]]=V328; pile[WZ1]=V341; 
(*f[1796])( );     /*DVF4(V328,V341)*/
goto l76;
l78:x[jvj+146]=s[x[jvj+164]] ;z[jvj+146]=(x[jvj+146]<=sepcte) ? x[jvj+146] : z[jvj+164];
pile[v[22]]=jvj+146; pile[WZ1]=X; pile[WZ2]=jvj+147; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(jvj+146,X,jvj+147)*/
pile[v[22]]=100; pile[WZ1]=jvj+147; pile[WZ2]=jvj+148; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+147,jvj+148)*/
if((x[jvj+148]!=43)) goto l79;
pile[v[22]]=102; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(102,jvj+147,jvj+149)*/
pile[v[22]]=140; pile[WZ1]=jvj+149; 
(*f[44])( );if(v[102]) goto l80;     /*FNDC1(140,jvj+149,V186)*/
V186=pile[WZ2]; 
V180=V186;
pile[v[22]]=V180; pile[WZ1]=20; 
(*f[1791])( );     /*DVF0(V180,20)*/
l80:pile[v[22]]=103; pile[WZ1]=jvj+147; pile[WZ2]=jvj+150; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(103,jvj+147,jvj+150)*/
pile[v[22]]=140; pile[WZ1]=jvj+150; 
(*f[44])( );if(v[102]) goto l79;     /*FNDC1(140,jvj+150,V195)*/
V195=pile[WZ2]; 
V189=V195;
pile[v[22]]=V189; pile[WZ1]=20; 
(*f[1791])( );     /*DVF0(V189,20)*/
l79:x[jvj+164]=t[x[jvj+164]];
goto l77;
l19:if((x[jvj+153]<=0)) goto l21;
x[jvj+43]=s[x[jvj+153]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+153];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+31; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(jvj+43,jvj+31,jvj+44)*/
pile[v[22]]=140; pile[WZ1]=jvj+44; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+44,V91)*/
V91=pile[WZ2]; 
if((x[jvj+45]=w[x[jvj+43]][3])==incon) goto l20;
pile[v[22]]=jvj+45; pile[WZ1]=jvj+33; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(jvj+45,jvj+33,jvj+46)*/
pile[v[22]]=V91; pile[WZ1]=jvj+46; 
(*f[1791])( );     /*DVF0(V91,jvj+46)*/
l20:x[jvj+153]=t[x[jvj+153]];
goto l19;
l28:if((x[jvj+155]<=0)) goto l62;
x[jvj+65]=s[x[jvj+155]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+155];
pile[v[22]]=jvj+65; pile[WZ1]=X; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(jvj+65,X,jvj+66)*/
pile[v[22]]=140; pile[WZ1]=jvj+66; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(140,jvj+66,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+65; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(268,jvj+65,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=X; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(jvj+67,X,jvj+68)*/
pile[v[22]]=V7; pile[WZ1]=jvj+68; pile[WZ2]=R; 
(*f[1789])( );     /*DVP0(V7,jvj+68,R)*/
l29:x[jvj+155]=t[x[jvj+155]];
goto l28;
}
