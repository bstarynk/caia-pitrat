#include "dx.h"
void APPLIREG1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,KR=0,V2=0,V6=0,V5=0,V10=0,V13=0,V14=0,V135=0,V136=0,V137=0,V138=0,V161=0,V164=0,V169=0,V172=0,V174=0,V175=0,V178=0,V180=0,V157=0,V153=0,V156=0,V181=0,V184=0,V186=0,V187=0,V190=0,V192=0,V165=0,V152=0,V151=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=83;
x[jvj+1]=11176;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1300&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[R] ;z[jvj+4]=z[R];
l1:pile[v[22]]=43; 
(*f[346])( );     /*LK1(43)*/
V1=bh[v[1]][0];
KR=V1;
v[205]=0;
if((KR==69)) goto l2;
if((KR==67)) goto l30;
if((KR==84)) goto l3;
if((KR==85)) goto l5;
if((KR!=70)) goto l4;
(*f[962])( );     /*APPLIREG0()*/
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l4;
l3:x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+3,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=858; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(V2,858,jvj+6)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10900; pile[WZ4]=jvj+6; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(158,1,218,10900,jvj+6,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[1296])( );     /*NOUVCONTR0(jvj+4,jvj+5)*/
goto l4;
l5:V10=2;
pile[v[22]]=V10; 
(*f[135])( );     /*LND3(V10,V13)*/
V13=pile[WZ1]; 
x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(509,jvj+7,jvj+8)*/
l6:if((x[jvj+8]>0)) goto l7;
goto l4;
l7:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=929; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(929,jvj+9,V14)*/
V14=pile[WZ2]; 
if((V14!=V13)) goto l8;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
x[jvj+11]=x[jvj+10] ;z[jvj+11]=z[jvj+10];
l9:pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=485)) goto l29;
pile[v[22]]=107; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,jvj+11,jvj+14)*/
x[jvj+75]=x[jvj+14] ;z[jvj+75]=z[jvj+14];
l10:if((x[jvj+75]<=0)) goto l29;
x[jvj+15]=s[x[jvj+75]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+75];
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=1215)) goto l12;
x[jvj+42]=x[jvj+15] ;z[jvj+42]=z[jvj+15];
x[jvj+80]=x[jvj+14] ;z[jvj+80]=z[jvj+14];
l11:if((x[jvj+80]>0)) goto l28;
l12:x[jvj+75]=t[x[jvj+75]];
goto l10;
l8:x[jvj+8]=t[x[jvj+8]];
goto l6;
l16:x[jvj+21]=s[x[jvj+77]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+77];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[760])( );     /*MEMEX0(jvj+21,jvj+22,jvj+23)*/
if((x[jvj+23]==135)) goto l17;
x[jvj+77]=t[x[jvj+77]];
l14:if((x[jvj+77]>0)) goto l16;
l15:x[jvj+76]=t[x[jvj+76]];
l13:if((x[jvj+76]<=0)) goto l12;
x[jvj+18]=s[x[jvj+76]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+76];
if((x[jvj+15]==x[jvj+18])) goto l15;
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=1215)) goto l15;
x[jvj+22]=x[jvj+18] ;z[jvj+22]=z[jvj+18];
x[jvj+77]=x[jvj+83] ;z[jvj+77]=z[jvj+83];
goto l14;
l17:x[jvj+36]=0 ;z[jvj+36]=0;
x[jvj+78]=x[jvj+83] ;z[jvj+78]=z[jvj+83];
l18:if((x[jvj+78]>0)) goto l22;
x[jvj+24]=x[jvj+36] ;z[jvj+24]=z[jvj+36];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[299])( );     /*COPEL0(jvj+24,jvj+25)*/
pile[v[22]]=107; pile[WZ1]=jvj+18; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+18,jvj+26)*/
x[jvj+27]=0 ;z[jvj+27]=0;
l19:if((x[jvj+38]<=0)) goto l20;
x[jvj+28]=s[x[jvj+38]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+38];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[522])( );     /*PLUB2(jvj+27,jvj+28)*/
x[jvj+38]=t[x[jvj+38]];
goto l19;
l21:x[jvj+35]=s[x[jvj+26]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+35; 
(*f[522])( );     /*PLUB2(jvj+27,jvj+35)*/
x[jvj+26]=t[x[jvj+26]];
l20:if((x[jvj+26]>0)) goto l21;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+29; 
(*f[299])( );     /*COPEL0(jvj+27,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+30)*/
pile[WZ3]=1215; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+29; pile[WZ2]=107; pile[WZ3]=jvj+33; 
(*f[301])( );     /*TRI11(jvj+32,jvj+29,107,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+33,22,100,jvj+34)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+30; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+30,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=107; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+34)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+11; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+25,jvj+11,107)*/
goto l9;
l22:x[jvj+37]=s[x[jvj+78]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+78];
if((x[jvj+37]==x[jvj+21])) goto l23;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[68])( );     /*PLUE0(jvj+36,jvj+37)*/
l23:x[jvj+78]=t[x[jvj+78]];
goto l18;
l25:x[jvj+40]=s[x[jvj+79]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+79];
if((x[jvj+40]==x[jvj+41])) goto l26;
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[68])( );     /*PLUE0(jvj+39,jvj+40)*/
l26:x[jvj+79]=t[x[jvj+79]];
l24:if((x[jvj+79]>0)) goto l25;
x[jvj+83]=x[jvj+39] ;z[jvj+83]=z[jvj+39];
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+38)*/
x[jvj+76]=x[jvj+14] ;z[jvj+76]=z[jvj+14];
goto l13;
l27:x[jvj+39]=0 ;z[jvj+39]=0;
x[jvj+79]=x[jvj+14] ;z[jvj+79]=z[jvj+14];
goto l24;
l28:x[jvj+41]=s[x[jvj+80]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+80];
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[760])( );     /*MEMEX0(jvj+41,jvj+42,jvj+43)*/
if((x[jvj+43]==135)) goto l27;
x[jvj+80]=t[x[jvj+80]];
goto l11;
l29:x[jvj+74]=x[jvj+11] ;z[jvj+74]=z[jvj+11];
V6=x[jvj+74];
pile[v[22]]=20; pile[WZ1]=V6; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V6,0,V5)*/
V5=pile[WZ3]; 
pile[v[22]]=V5; 
(*f[40])( );     /*SLG0(V5)*/
if(KR==83||KR==70) goto l4;
x[jvj+4]=x[jvj+74] ;z[jvj+4]=z[jvj+74];
goto l1;
l30:x[jvj+44]=vo[16];z[jvj+44]=vz[16];
pile[v[22]]=jvj+44; pile[WZ1]=1106; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+44,1106,0)*/
pile[v[22]]=454; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(454,jvj+44,jvj+45)*/
l31:if((x[jvj+45]>0)) goto l48;
pile[v[22]]=43; 
(*f[346])( );     /*LK1(43)*/
V135=bh[v[1]][0];
V136=bh[v[1]][1];
V137=V135;
V138=V136;
if((V137==61)) goto l47;
if((V137!=67)) goto l47;
if(V138!=43&&V138!=45&&V138!=61) goto l47;
l32:if((V138==43)) goto l43;
if((V138!=45)) goto l34;
V161=2;
pile[v[22]]=V161; 
(*f[135])( );     /*LND3(V161,V164)*/
V164=pile[WZ1]; 
x[jvj+46]=vo[16];z[jvj+46]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(509,jvj+46,jvj+47)*/
l33:if((x[jvj+47]>0)) goto l46;
l34:x[jvj+48]=vo[16];z[jvj+48]=vz[16];
pile[v[22]]=1106; pile[WZ1]=jvj+48; 
(*f[71])( );     /*ENLV0(1106,jvj+48)*/
pile[v[22]]=454; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(454,jvj+48,jvj+49)*/
l35:if((x[jvj+49]>0)) goto l36;
goto l4;
l36:x[jvj+50]=s[x[jvj+49]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+49];
pile[v[22]]=480; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(480,jvj+50,jvj+51)*/
x[jvj+81]=x[jvj+51] ;z[jvj+81]=z[jvj+51];
l37:if((x[jvj+81]>0)) goto l38;
x[jvj+49]=t[x[jvj+49]];
goto l35;
l38:x[jvj+52]=s[x[jvj+81]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+81];
pile[v[22]]=1106; pile[WZ1]=jvj+52; 
(*f[71])( );     /*ENLV0(1106,jvj+52)*/
x[jvj+81]=t[x[jvj+81]];
goto l37;
l40:x[jvj+62]=t[x[jvj+62]];
l41:if((x[jvj+62]>0)) goto l42;
goto l34;
l42:x[jvj+60]=s[x[jvj+62]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+62];
pile[v[22]]=929; pile[WZ1]=jvj+60; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(929,jvj+60,V157)*/
V157=pile[WZ2]; 
if((V157!=V156)) goto l40;
pile[v[22]]=jvj+60; pile[WZ1]=jvj+53; 
(*f[255])( );     /*COPEXP0(jvj+60,jvj+53)*/
pile[v[22]]=111; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]!=25)) goto l34;
pile[v[22]]=102; pile[WZ1]=jvj+53; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+53,jvj+56)*/
pile[v[22]]=103; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(103,jvj+53,jvj+57)*/
V169=1;
pile[v[22]]=130; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(130,jvj+56,V172)*/
V172=pile[WZ2]; 
x[jvj+58]=vo[16];z[jvj+58]=vz[16];
V174=V169*V172;
pile[v[22]]=jvj+58; pile[WZ1]=1106; pile[WZ2]=V174; 
(*f[186])( );     /*BTC0(jvj+58,1106,V174)*/
l39:V175=(-1);
pile[v[22]]=130; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+57,V178)*/
V178=pile[WZ2]; 
x[jvj+59]=vo[16];z[jvj+59]=vz[16];
V180=V175*V178;
pile[v[22]]=jvj+59; pile[WZ1]=1106; pile[WZ2]=V180; 
(*f[186])( );     /*BTC0(jvj+59,1106,V180)*/
goto l34;
l43:V153=2;
pile[v[22]]=V153; 
(*f[135])( );     /*LND3(V153,V156)*/
V156=pile[WZ1]; 
x[jvj+61]=vo[16];z[jvj+61]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(509,jvj+61,jvj+62)*/
goto l41;
l45:x[jvj+47]=t[x[jvj+47]];
goto l33;
l46:x[jvj+70]=s[x[jvj+47]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+47];
pile[v[22]]=929; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(929,jvj+70,V165)*/
V165=pile[WZ2]; 
if((V165!=V164)) goto l45;
pile[v[22]]=jvj+70; pile[WZ1]=jvj+63; 
(*f[255])( );     /*COPEXP0(jvj+70,jvj+63)*/
pile[v[22]]=111; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+63,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+64,jvj+65)*/
if((x[jvj+65]!=25)) goto l34;
pile[v[22]]=102; pile[WZ1]=jvj+63; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+63,jvj+66)*/
pile[v[22]]=103; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(103,jvj+63,jvj+67)*/
V181=(-1);
pile[v[22]]=130; pile[WZ1]=jvj+66; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(130,jvj+66,V184)*/
V184=pile[WZ2]; 
x[jvj+68]=vo[16];z[jvj+68]=vz[16];
V186=V181*V184;
pile[v[22]]=jvj+68; pile[WZ1]=1106; pile[WZ2]=V186; 
(*f[186])( );     /*BTC0(jvj+68,1106,V186)*/
l44:V187=1;
pile[v[22]]=130; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+67,V190)*/
V190=pile[WZ2]; 
x[jvj+69]=vo[16];z[jvj+69]=vz[16];
V192=V187*V190;
pile[v[22]]=jvj+69; pile[WZ1]=1106; pile[WZ2]=V192; 
(*f[186])( );     /*BTC0(jvj+69,1106,V192)*/
goto l34;
l47:pile[v[22]]=20; pile[WZ1]=11182; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11182,0,V151)*/
V151=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V151; pile[WZ2]=125; 
(*f[42])( );     /*SRA1(135,V151,125,V152)*/
V152=pile[WZ3]; 
pile[v[22]]=V152; 
(*f[40])( );     /*SLG0(V152)*/
goto l32;
l48:x[jvj+71]=s[x[jvj+45]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+45];
pile[v[22]]=480; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[33])( );     /*FNDE0(480,jvj+71,jvj+72)*/
x[jvj+82]=x[jvj+72] ;z[jvj+82]=z[jvj+72];
l49:if((x[jvj+82]>0)) goto l50;
x[jvj+45]=t[x[jvj+45]];
goto l31;
l50:x[jvj+73]=s[x[jvj+82]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+82];
pile[v[22]]=jvj+73; pile[WZ1]=1106; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+73,1106,0)*/
x[jvj+82]=t[x[jvj+82]];
goto l49;
}
