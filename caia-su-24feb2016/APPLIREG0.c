#include "dx.h"
void APPLIREG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,KR=0,V7=0,V6=0,V9=0,V8=0,V10=0,V13=0,V14=0,V18=0,V21=0,V22=0,V135=0,V136=0,V137=0,V138=0,V161=0,V164=0,V169=0,V172=0,V174=0,V175=0,V178=0,V180=0,V157=0,V153=0,V156=0,V181=0,V184=0,V186=0,V187=0,V190=0,V192=0,V165=0,V152=0,V151=0;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=83;
x[jvj+1]=11176;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==962&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}

WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:pile[v[22]]=43; 
(*f[346])( );     /*LK1(43)*/
V1=bh[v[1]][0];
KR=V1;
v[205]=0;
if((KR==69)) goto l2;
if((KR==67)) goto l33;
if((KR==85)) goto l4;
if((KR==86)) goto l8;
if((KR==70)) goto l1;
l3:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; return;
l2:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l3;
l4:V10=2;
pile[v[22]]=V10; 
(*f[135])( );     /*LND3(V10,V13)*/
V13=pile[WZ1]; 
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(509,jvj+5,jvj+6)*/
l5:if((x[jvj+6]>0)) goto l6;
goto l3;
l6:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=929; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(929,jvj+7,V14)*/
V14=pile[WZ2]; 
if((V14!=V13)) goto l7;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
x[jvj+12]=x[jvj+8] ;z[jvj+12]=z[jvj+8];
l12:pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=485)) goto l32;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+15)*/
x[jvj+75]=x[jvj+15] ;z[jvj+75]=z[jvj+15];
l13:if((x[jvj+75]<=0)) goto l32;
x[jvj+16]=s[x[jvj+75]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+75];
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=1215)) goto l15;
x[jvj+43]=x[jvj+16] ;z[jvj+43]=z[jvj+16];
x[jvj+80]=x[jvj+15] ;z[jvj+80]=z[jvj+15];
l14:if((x[jvj+80]>0)) goto l31;
l15:x[jvj+75]=t[x[jvj+75]];
goto l13;
l7:x[jvj+6]=t[x[jvj+6]];
goto l5;
l8:V18=2;
pile[v[22]]=V18; 
(*f[135])( );     /*LND3(V18,V21)*/
V21=pile[WZ1]; 
x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(509,jvj+9,jvj+10)*/
l9:if((x[jvj+10]>0)) goto l10;
goto l3;
l10:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=929; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(929,jvj+11,V22)*/
V22=pile[WZ2]; 
if((V22!=V21)) goto l11;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+3)*/
V9=x[jvj+3];
pile[v[22]]=jvj+3; 
(*f[1298])( );     /*APPRV0(jvj+3)*/
pile[v[22]]=20; pile[WZ1]=V9; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V9,0,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=V8; 
(*f[40])( );     /*SLG0(V8)*/
goto l3;
l11:x[jvj+10]=t[x[jvj+10]];
goto l9;
l19:x[jvj+22]=s[x[jvj+77]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+77];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[760])( );     /*MEMEX0(jvj+22,jvj+23,jvj+24)*/
if((x[jvj+24]==135)) goto l20;
x[jvj+77]=t[x[jvj+77]];
l17:if((x[jvj+77]>0)) goto l19;
l18:x[jvj+76]=t[x[jvj+76]];
l16:if((x[jvj+76]<=0)) goto l15;
x[jvj+19]=s[x[jvj+76]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+76];
if((x[jvj+16]==x[jvj+19])) goto l18;
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=1215)) goto l18;
x[jvj+23]=x[jvj+19] ;z[jvj+23]=z[jvj+19];
x[jvj+77]=x[jvj+83] ;z[jvj+77]=z[jvj+83];
goto l17;
l20:x[jvj+37]=0 ;z[jvj+37]=0;
x[jvj+78]=x[jvj+83] ;z[jvj+78]=z[jvj+83];
l21:if((x[jvj+78]>0)) goto l25;
x[jvj+25]=x[jvj+37] ;z[jvj+25]=z[jvj+37];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[299])( );     /*COPEL0(jvj+25,jvj+26)*/
pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+27)*/
x[jvj+28]=0 ;z[jvj+28]=0;
l22:if((x[jvj+39]<=0)) goto l23;
x[jvj+29]=s[x[jvj+39]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+39];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[522])( );     /*PLUB2(jvj+28,jvj+29)*/
x[jvj+39]=t[x[jvj+39]];
goto l22;
l24:x[jvj+36]=s[x[jvj+27]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+27];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+36; 
(*f[522])( );     /*PLUB2(jvj+28,jvj+36)*/
x[jvj+27]=t[x[jvj+27]];
l23:if((x[jvj+27]>0)) goto l24;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+30; 
(*f[299])( );     /*COPEL0(jvj+28,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+31)*/
pile[WZ3]=1215; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+30; pile[WZ2]=107; pile[WZ3]=jvj+34; 
(*f[301])( );     /*TRI11(jvj+33,jvj+30,107,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+34,22,100,jvj+35)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+31; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+31,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=107; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+35)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+12; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+26,jvj+12,107)*/
goto l12;
l25:x[jvj+38]=s[x[jvj+78]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+78];
if((x[jvj+38]==x[jvj+22])) goto l26;
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+37,jvj+38)*/
l26:x[jvj+78]=t[x[jvj+78]];
goto l21;
l28:x[jvj+41]=s[x[jvj+79]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+79];
if((x[jvj+41]==x[jvj+42])) goto l29;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+41)*/
l29:x[jvj+79]=t[x[jvj+79]];
l27:if((x[jvj+79]>0)) goto l28;
x[jvj+83]=x[jvj+40] ;z[jvj+83]=z[jvj+40];
pile[v[22]]=107; pile[WZ1]=jvj+16; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,jvj+16,jvj+39)*/
x[jvj+76]=x[jvj+15] ;z[jvj+76]=z[jvj+15];
goto l16;
l30:x[jvj+40]=0 ;z[jvj+40]=0;
x[jvj+79]=x[jvj+15] ;z[jvj+79]=z[jvj+15];
goto l27;
l31:x[jvj+42]=s[x[jvj+80]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+80];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[760])( );     /*MEMEX0(jvj+42,jvj+43,jvj+44)*/
if((x[jvj+44]==135)) goto l30;
x[jvj+80]=t[x[jvj+80]];
goto l14;
l32:x[jvj+4]=x[jvj+12] ;z[jvj+4]=z[jvj+12];
V7=x[jvj+4];
pile[v[22]]=20; pile[WZ1]=V7; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V7,0,V6)*/
V6=pile[WZ3]; 
pile[v[22]]=V6; 
(*f[40])( );     /*SLG0(V6)*/
if(KR==83||KR==70) goto l3;
pile[v[22]]=jvj+4; 
(*f[1300])( );     /*APPLIREG1(jvj+4)*/
goto l3;
l33:x[jvj+45]=vo[16];z[jvj+45]=vz[16];
pile[v[22]]=jvj+45; pile[WZ1]=1106; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+45,1106,0)*/
pile[v[22]]=454; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(454,jvj+45,jvj+46)*/
l34:if((x[jvj+46]>0)) goto l51;
pile[v[22]]=43; 
(*f[346])( );     /*LK1(43)*/
V135=bh[v[1]][0];
V136=bh[v[1]][1];
V137=V135;
V138=V136;
if((V137==61)) goto l50;
if((V137!=67)) goto l50;
if(V138!=43&&V138!=45&&V138!=61) goto l50;
l35:if((V138==43)) goto l46;
if((V138!=45)) goto l37;
V161=2;
pile[v[22]]=V161; 
(*f[135])( );     /*LND3(V161,V164)*/
V164=pile[WZ1]; 
x[jvj+47]=vo[16];z[jvj+47]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(509,jvj+47,jvj+48)*/
l36:if((x[jvj+48]>0)) goto l49;
l37:x[jvj+49]=vo[16];z[jvj+49]=vz[16];
pile[v[22]]=1106; pile[WZ1]=jvj+49; 
(*f[71])( );     /*ENLV0(1106,jvj+49)*/
pile[v[22]]=454; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(454,jvj+49,jvj+50)*/
l38:if((x[jvj+50]>0)) goto l39;
goto l3;
l39:x[jvj+51]=s[x[jvj+50]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+50];
pile[v[22]]=480; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(480,jvj+51,jvj+52)*/
x[jvj+81]=x[jvj+52] ;z[jvj+81]=z[jvj+52];
l40:if((x[jvj+81]>0)) goto l41;
x[jvj+50]=t[x[jvj+50]];
goto l38;
l41:x[jvj+53]=s[x[jvj+81]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+81];
pile[v[22]]=1106; pile[WZ1]=jvj+53; 
(*f[71])( );     /*ENLV0(1106,jvj+53)*/
x[jvj+81]=t[x[jvj+81]];
goto l40;
l43:x[jvj+63]=t[x[jvj+63]];
l44:if((x[jvj+63]>0)) goto l45;
goto l37;
l45:x[jvj+61]=s[x[jvj+63]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+63];
pile[v[22]]=929; pile[WZ1]=jvj+61; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(929,jvj+61,V157)*/
V157=pile[WZ2]; 
if((V157!=V156)) goto l43;
pile[v[22]]=jvj+61; pile[WZ1]=jvj+54; 
(*f[255])( );     /*COPEXP0(jvj+61,jvj+54)*/
pile[v[22]]=111; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+54,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]!=25)) goto l37;
pile[v[22]]=102; pile[WZ1]=jvj+54; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(102,jvj+54,jvj+57)*/
pile[v[22]]=103; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(103,jvj+54,jvj+58)*/
V169=1;
pile[v[22]]=130; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+57,V172)*/
V172=pile[WZ2]; 
x[jvj+59]=vo[16];z[jvj+59]=vz[16];
V174=V169*V172;
pile[v[22]]=jvj+59; pile[WZ1]=1106; pile[WZ2]=V174; 
(*f[186])( );     /*BTC0(jvj+59,1106,V174)*/
l42:V175=(-1);
pile[v[22]]=130; pile[WZ1]=jvj+58; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+58,V178)*/
V178=pile[WZ2]; 
x[jvj+60]=vo[16];z[jvj+60]=vz[16];
V180=V175*V178;
pile[v[22]]=jvj+60; pile[WZ1]=1106; pile[WZ2]=V180; 
(*f[186])( );     /*BTC0(jvj+60,1106,V180)*/
goto l37;
l46:V153=2;
pile[v[22]]=V153; 
(*f[135])( );     /*LND3(V153,V156)*/
V156=pile[WZ1]; 
x[jvj+62]=vo[16];z[jvj+62]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[33])( );     /*FNDE0(509,jvj+62,jvj+63)*/
goto l44;
l48:x[jvj+48]=t[x[jvj+48]];
goto l36;
l49:x[jvj+71]=s[x[jvj+48]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+48];
pile[v[22]]=929; pile[WZ1]=jvj+71; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(929,jvj+71,V165)*/
V165=pile[WZ2]; 
if((V165!=V164)) goto l48;
pile[v[22]]=jvj+71; pile[WZ1]=jvj+64; 
(*f[255])( );     /*COPEXP0(jvj+71,jvj+64)*/
pile[v[22]]=111; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+64,jvj+65)*/
pile[v[22]]=101; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+65,jvj+66)*/
if((x[jvj+66]!=25)) goto l37;
pile[v[22]]=102; pile[WZ1]=jvj+64; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(102,jvj+64,jvj+67)*/
pile[v[22]]=103; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(103,jvj+64,jvj+68)*/
V181=(-1);
pile[v[22]]=130; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+67,V184)*/
V184=pile[WZ2]; 
x[jvj+69]=vo[16];z[jvj+69]=vz[16];
V186=V181*V184;
pile[v[22]]=jvj+69; pile[WZ1]=1106; pile[WZ2]=V186; 
(*f[186])( );     /*BTC0(jvj+69,1106,V186)*/
l47:V187=1;
pile[v[22]]=130; pile[WZ1]=jvj+68; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+68,V190)*/
V190=pile[WZ2]; 
x[jvj+70]=vo[16];z[jvj+70]=vz[16];
V192=V187*V190;
pile[v[22]]=jvj+70; pile[WZ1]=1106; pile[WZ2]=V192; 
(*f[186])( );     /*BTC0(jvj+70,1106,V192)*/
goto l37;
l50:pile[v[22]]=20; pile[WZ1]=11182; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11182,0,V151)*/
V151=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V151; pile[WZ2]=125; 
(*f[42])( );     /*SRA1(135,V151,125,V152)*/
V152=pile[WZ3]; 
pile[v[22]]=V152; 
(*f[40])( );     /*SLG0(V152)*/
goto l35;
l51:x[jvj+72]=s[x[jvj+46]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+46];
pile[v[22]]=480; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(480,jvj+72,jvj+73)*/
x[jvj+82]=x[jvj+73] ;z[jvj+82]=z[jvj+73];
l52:if((x[jvj+82]>0)) goto l53;
x[jvj+46]=t[x[jvj+46]];
goto l34;
l53:x[jvj+74]=s[x[jvj+82]] ;z[jvj+74]=(x[jvj+74]<=sepcte) ? x[jvj+74] : z[jvj+82];
pile[v[22]]=jvj+74; pile[WZ1]=1106; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+74,1106,0)*/
x[jvj+82]=t[x[jvj+82]];
goto l52;
}
