#include "dx.h"
void KVX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V13=0,V24=0,V=0,V3=0,V4=0,F=0,V51=0,V47=0,V48=0,V68=0,V72=0,V93=0,WW=0,V98=0,VA=0,D=0,V105=0,VB=0,V85=0,W=0,V44=0,V66=0,VV=0,V43=0,VENS=0,V126=0,V120=0,V131=0,V114=0,V147=0;
int TL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=73;
x[jvj+1]=10101;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1603&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+20]=0 ;z[jvj+20]=0;
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(302,TL,jvj+16)*/
l14:if((x[jvj+16]>0)) goto l15;
x[jvj+60]=x[jvj+20] ;z[jvj+60]=z[jvj+20];
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(302,TL,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=223; pile[WZ1]=TL; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(223,TL,jvj+14)*/
l10:if((x[jvj+14]>0)) goto l11;
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(222,TL,jvj+15)*/
l12:if((x[jvj+15]>0)) goto l13;
VENS=x[jvj+8];
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(302,TL,jvj+52)*/
l40:if((x[jvj+52]>0)) goto l41;
x[jvj+51]=0 ;z[jvj+51]=0;
pile[v[22]]=292; pile[WZ1]=TL; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(292,TL,jvj+50)*/
x[jvj+27]=0 ;z[jvj+27]=0;
pile[v[22]]=223; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(223,TL,jvj+26)*/
l21:if((x[jvj+26]>0)) goto l22;
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(222,TL,jvj+28)*/
l23:if((x[jvj+28]>0)) goto l24;
x[jvj+70]=x[jvj+60] ;z[jvj+70]=z[jvj+60];
l25:if((x[jvj+70]<=0)) goto l37;
x[jvj+29]=s[x[jvj+70]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+70];
pile[v[22]]=114; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(114,jvj+29,jvj+30)*/
x[jvj+71]=x[jvj+30] ;z[jvj+71]=z[jvj+30];
l27:if((x[jvj+71]>0)) goto l28;
pile[v[22]]=113; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(113,jvj+29,jvj+33)*/
x[jvj+72]=x[jvj+33] ;z[jvj+72]=z[jvj+33];
l30:if((x[jvj+72]>0)) goto l31;
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+29,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]==599)) goto l33;
if((x[jvj+37]!=200)) goto l34;
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+29,jvj+39)*/
if((x[jvj+39]!=73)) goto l34;
pile[v[22]]=103; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(103,jvj+29,jvj+40)*/
pile[v[22]]=140; pile[WZ1]=jvj+40; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+40,V98)*/
V98=pile[WZ2]; 
VA=V98;
pile[v[22]]=jvj+27; pile[WZ1]=VA; 
(*f[331])( );     /*PLUE3(jvj+27,VA)*/
l34:D=x[jvj+37];
if(D!=507&&D!=431) goto l35;
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+29,jvj+41)*/
if((x[jvj+41]!=73)) goto l35;
pile[v[22]]=102; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,jvj+29,jvj+42)*/
pile[v[22]]=140; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+42,V105)*/
V105=pile[WZ2]; 
VB=V105;
pile[v[22]]=jvj+27; pile[WZ1]=VB; 
(*f[331])( );     /*PLUE3(jvj+27,VB)*/
l35:pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+29,jvj+43)*/
if((x[jvj+43]!=435)) goto l26;
pile[v[22]]=102; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+29,jvj+44)*/
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+44,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]!=306)) goto l36;
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,jvj+44,jvj+47)*/
pile[v[22]]=140; pile[WZ1]=jvj+47; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+47,V85)*/
V85=pile[WZ2]; 
W=V85;
pile[v[22]]=jvj+27; pile[WZ1]=W; 
(*f[331])( );     /*PLUE3(jvj+27,W)*/
l36:V44=x[jvj+46];
if(V44!=398&&V44!=639) goto l26;
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+44,jvj+48)*/
if((x[jvj+48]!=22)) goto l26;
pile[v[22]]=436; pile[WZ1]=jvj+29; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(436,jvj+29,jvj+49)*/
pile[v[22]]=140; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,jvj+49,V66)*/
V66=pile[WZ2]; 
VV=V66;
pile[v[22]]=jvj+27; pile[WZ1]=VV; 
(*f[331])( );     /*PLUE3(jvj+27,VV)*/
l26:x[jvj+70]=t[x[jvj+70]];
goto l25;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+3,jvj+4)*/
pile[v[22]]=114; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(114,jvj+4,jvj+5)*/
x[jvj+67]=x[jvj+5] ;z[jvj+67]=z[jvj+5];
l4:if((x[jvj+67]>0)) goto l5;
pile[v[22]]=113; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(113,jvj+4,jvj+9)*/
x[jvj+68]=x[jvj+9] ;z[jvj+68]=z[jvj+9];
l7:if((x[jvj+68]>0)) goto l8;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+4,jvj+12)*/
if((x[jvj+12]!=435)) goto l3;
pile[v[22]]=436; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,jvj+4,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+13,V24)*/
V24=pile[WZ2]; 
V=V24;
pile[v[22]]=jvj+8; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+8,V)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+6]=s[x[jvj+67]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+67];
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+6,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+7,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=V6; 
(*f[331])( );     /*PLUE3(jvj+8,V6)*/
l6:x[jvj+67]=t[x[jvj+67]];
goto l4;
l8:x[jvj+10]=s[x[jvj+68]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+68];
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+10,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+11,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=V13; 
(*f[331])( );     /*PLUE3(jvj+8,V13)*/
l9:x[jvj+68]=t[x[jvj+68]];
goto l7;
l11:V3=s[x[jvj+14]];
pile[v[22]]=jvj+8; pile[WZ1]=V3; 
(*f[331])( );     /*PLUE3(jvj+8,V3)*/
x[jvj+14]=t[x[jvj+14]];
goto l10;
l13:V4=s[x[jvj+15]];
pile[v[22]]=jvj+8; pile[WZ1]=V4; 
(*f[331])( );     /*PLUE3(jvj+8,V4)*/
x[jvj+15]=t[x[jvj+15]];
goto l12;
l15:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=102; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+17,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+18,jvj+19)*/
if(x[jvj+19]!=39&&x[jvj+19]!=435) goto l17;
pile[v[22]]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+20,jvj+18)*/
l17:if((x[jvj+19]!=73)) goto l16;
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+18,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+21,jvj+22)*/
F=x[jvj+22];
if(F!=200&&F!=431) goto l16;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+20,jvj+18)*/
l16:x[jvj+16]=t[x[jvj+16]];
goto l14;
l19:x[jvj+24]=s[x[jvj+69]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+69];
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+24,V51)*/
V51=pile[WZ2]; 
if((V51!=V43)) goto l20;
pile[v[22]]=158; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(158,jvj+24,jvj+25)*/
if(x[jvj+25]==89||x[jvj+25]==96||x[jvj+25]==41||x[jvj+25]==1317) goto l39;
l20:x[jvj+69]=t[x[jvj+69]];
l18:if((x[jvj+69]>0)) goto l19;
pile[v[22]]=jvj+51; pile[WZ1]=V43; 
(*f[331])( );     /*PLUE3(jvj+51,V43)*/
l39:x[jvj+27]=t[x[jvj+27]];
l37:if((x[jvj+27]>0)) goto l38;
x[jvj+61]=x[jvj+51] ;z[jvj+61]=z[jvj+51];
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[1800])( );     /*KVY0(jvj+60,jvj+61,jvj+62)*/
pile[v[22]]=TL; pile[WZ1]=440; 
(*f[34])( );     /*CHGC0(TL,440,jvj+62)*/
x[jvj+66]=0 ;z[jvj+66]=0;
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+63; 
(*f[33])( );     /*FNDE0(222,TL,jvj+63)*/
pile[v[22]]=223; pile[WZ2]=jvj+64; 
(*f[33])( );     /*FNDE0(223,TL,jvj+64)*/
pile[v[22]]=292; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(292,TL,jvj+65)*/
V147=VENS;
l45:if((V147>0)) goto l46;
pile[v[22]]=TL; pile[WZ1]=299; pile[WZ2]=jvj+66; 
(*f[34])( );     /*CHGC0(TL,299,jvj+66)*/
l48:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l22:V47=s[x[jvj+26]];
pile[v[22]]=jvj+27; pile[WZ1]=V47; 
(*f[331])( );     /*PLUE3(jvj+27,V47)*/
x[jvj+26]=t[x[jvj+26]];
goto l21;
l24:V48=s[x[jvj+28]];
pile[v[22]]=jvj+27; pile[WZ1]=V48; 
(*f[331])( );     /*PLUE3(jvj+27,V48)*/
x[jvj+28]=t[x[jvj+28]];
goto l23;
l28:x[jvj+31]=s[x[jvj+71]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+71];
pile[v[22]]=102; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+31,jvj+32)*/
pile[v[22]]=140; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(140,jvj+32,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=jvj+27; pile[WZ1]=V68; 
(*f[331])( );     /*PLUE3(jvj+27,V68)*/
l29:x[jvj+71]=t[x[jvj+71]];
goto l27;
l31:x[jvj+34]=s[x[jvj+72]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+72];
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,jvj+34,jvj+35)*/
pile[v[22]]=140; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(140,jvj+35,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=jvj+27; pile[WZ1]=V72; 
(*f[331])( );     /*PLUE3(jvj+27,V72)*/
l32:x[jvj+72]=t[x[jvj+72]];
goto l30;
l33:pile[v[22]]=436; pile[WZ1]=jvj+29; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(436,jvj+29,jvj+38)*/
pile[v[22]]=140; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+38,V93)*/
V93=pile[WZ2]; 
WW=V93;
pile[v[22]]=jvj+27; pile[WZ1]=WW; 
(*f[331])( );     /*PLUE3(jvj+27,WW)*/
goto l34;
l38:V43=s[x[jvj+27]];
for(a=x[jvj+50];a>0;a=t[a]) if(s[a]==V43) goto l39;
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(283,TL,jvj+23)*/
x[jvj+69]=x[jvj+23] ;z[jvj+69]=z[jvj+23];
goto l18;
l41:x[jvj+53]=s[x[jvj+52]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+52];
pile[v[22]]=102; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,jvj+53,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+54,jvj+55)*/
if((x[jvj+55]!=73)) goto l42;
pile[v[22]]=111; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+54,jvj+56)*/
pile[v[22]]=101; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+56,jvj+57)*/
if((x[jvj+57]!=255)) goto l42;
pile[v[22]]=128; pile[WZ1]=jvj+54; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(128,jvj+54,jvj+58)*/
x[jvj+73]=x[jvj+58] ;z[jvj+73]=z[jvj+58];
l43:if((x[jvj+73]<=0)) goto l42;
x[jvj+59]=s[x[jvj+73]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+73];
pile[v[22]]=140; pile[WZ1]=jvj+59; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+59,V126)*/
V126=pile[WZ2]; 
V120=V126;
for(a=VENS;a>0;a=t[a]) if(s[a]==V120) goto l44;
V131=x[jvj+59];
pile[v[22]]=128; pile[WZ1]=jvj+54; pile[WZ2]=V131; 
(*f[134])( );     /*OTA0(128,jvj+54,V131)*/
l44:x[jvj+73]=t[x[jvj+73]];
goto l43;
l42:x[jvj+52]=t[x[jvj+52]];
goto l40;
l46:V114=s[V147];
for(a=x[jvj+63];a>0;a=t[a]) if(s[a]==V114) goto l47;
for(a=x[jvj+64];a>0;a=t[a]) if(s[a]==V114) goto l47;
for(a=x[jvj+62];a>0;a=t[a]) if(s[a]==V114) goto l47;
for(a=x[jvj+65];a>0;a=t[a]) if(s[a]==V114) goto l47;
pile[v[22]]=jvj+66; pile[WZ1]=V114; 
(*f[331])( );     /*PLUE3(jvj+66,V114)*/
l47:V147=t[V147];
goto l45;
}
