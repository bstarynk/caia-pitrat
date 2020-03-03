#include "dx.h"
void BACKTRACK1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V91=0,LL=0,V2=0,V4=0,V49=0,V41=0,V42=0,V43=0,V44=0,V11=0,V10=0,V14=0,V13=0,NK=0,V9=0,V18=0,V23=0,V102=0,V105=0,V96=0,V97=0,V99=0,V100=0,V101=0,V103=0,V104=0,V17=0,V26=0,V107=0,V25=0,V30=0,V61=0,V64=0,V118=0,V121=0,V110=0,V111=0,V112=0,V114=0,V115=0,V116=0,V117=0,V119=0,V120=0,V60=0,V67=0,V123=0,V66=0,V108=0,V83=0,V87=0,V86=0,V89=0,V71=0;
int L,N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=56;
x[jvj+1]=10530;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1570&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[N] ;z[jvj+3]=z[N];
x[jvj+55]=x[L] ;z[jvj+55]=z[L];
l1:x[jvj+4]=incon;
if((x[jvj+55]==366)) goto l2;
x[jvj+4]=x[jvj+55] ;z[jvj+4]=z[jvj+55];
l3:pile[v[22]]=jvj+3; pile[WZ1]=867; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+3,867,jvj+4)*/
if((x[jvj+55]!=366)) goto l4;
pile[v[22]]=287; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(287,jvj+3,jvj+5)*/
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(498,jvj+5,jvj+6)*/
pile[v[22]]=436; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(436,jvj+6,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+7,V91)*/
V91=pile[WZ2]; 
if((V91!=(-1544))) goto l4;
LL=493;
l5:pile[v[22]]=866; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(866,jvj+3,V2)*/
V2=pile[WZ2]; 
if((V2>0)) goto l6;
if((V2!=0)) goto l47;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
x[jvj+10]=vo[13];z[jvj+10]=vz[13];
V49=x[jvj+10];
pile[v[22]]=jvj+10; pile[WZ1]=0; pile[WZ2]=V49; pile[WZ3]=120; 
(*f[285])( );     /*ENLY0(jvj+10,0,V49,120,V41,V42)*/
V41=pile[WZ4]; V42=pile[WZ5]; 
pile[WZ1]=V42; pile[WZ2]=V41; pile[WZ3]=717; 
(*f[285])( );     /*ENLY0(jvj+10,V42,V41,717,V43,V44)*/
V43=pile[WZ4]; V44=pile[WZ5]; 
pile[v[22]]=jvj+9; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+9,893,12)*/
pile[WZ1]=935; pile[WZ2]=547; 
(*f[35])( );     /*CHGC1(jvj+9,935,547)*/
l47:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+4]=493 ;z[jvj+4]=493;
goto l3;
l4:LL=x[jvj+55];
goto l5;
l6:pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(498,jvj+3,jvj+8)*/
pile[v[22]]=891; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(891,jvj+8,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; 
(*f[375])( );     /*RESTOR0(V4)*/
l38:if((LL==366)) goto l39;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+13; 
(*f[1566])( );if(v[102]) goto l39;     /*CHOIXND0(jvj+8,jvj+13)*/
pile[v[22]]=287; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(287,jvj+13,jvj+17)*/
pile[v[22]]=80; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(80,jvj+13,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,jvj+17,110,(-656),jvj+45)*/
pile[WZ1]=jvj+18; pile[WZ3]=(-598); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(101,jvj+18,110,(-598),jvj+46)*/
pile[v[22]]=0; pile[WZ1]=642; pile[WZ2]=jvj+44; 
(*f[46])( );     /*TRI0(0,642,jvj+44)*/
pile[v[22]]=158; pile[WZ1]=864; pile[WZ2]=218; pile[WZ3]=84; pile[WZ4]=jvj+44; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(158,864,218,84,jvj+44,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=159; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+12,159,jvj+45)*/
pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+12,159,jvj+46)*/
x[jvj+40]=vo[13];z[jvj+40]=vz[13];
V17=g[369];
if((V17<=0)) goto l17;
V18=vg[369];
if((V18!=0)) goto l10;
if((V17<3)) goto l12;
l10:pile[v[22]]=369; pile[WZ1]=10530; pile[WZ2]=1; pile[WZ3]=(-743); pile[WZ4]=jvj+13; pile[WZ5]=jvj+14; 
(*f[232])( );     /*INTERP3(369,10530,1,(-743),jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l11;
l17:V25=g[564];
if((V25<=0)) goto l7;
V26=vg[564];
if((V26!=0)) goto l14;
if((V25<3)) goto l16;
l14:pile[v[22]]=564; pile[WZ1]=10530; pile[WZ2]=1; pile[WZ3]=jvj+15; 
(*f[291])( );     /*INTERP4(564,10530,1,jvj+15)*/
if((x[jvj+15]==135)) goto l15;
l7:x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+11,NK)*/
NK=pile[WZ2]; 
V9=tt[NK];
if((V9!=864)) goto l9;
if((NK<=0)) goto l9;
V11=ta1[NK];
V10=V11;
if((V10==x[jvj+17])) goto l8;
V14=ta2[NK];
V13=V14;
if((V13==x[jvj+18])) goto l8;
l9:pile[v[22]]=864; pile[WZ1]=jvj+12; 
(*f[1567])( );     /*ARCHIVE2(864,jvj+12)*/
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+16,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=642; pile[WZ2]=V30; 
(*f[43])( );     /*CHGC2(jvj+12,642,V30)*/
pile[v[22]]=489; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; pile[WZ3]=jvj+12; pile[WZ4]=jvj+13; 
(*f[1568])( );     /*LIER0(489,jvj+17,jvj+18,jvj+12,jvj+13)*/
l18:pile[v[22]]=1267; pile[WZ1]=jvj+13; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1267,jvj+13,jvj+19)*/
l19:if((x[jvj+19]>0)) goto l20;
pile[v[22]]=jvj+40; pile[WZ1]=1026; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+40,1026,1)*/
goto l47;
l8:pile[v[22]]=jvj+11; pile[WZ1]=642; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(jvj+11,642,(-1))*/
goto l9;
l11:if((V17<4)) goto l12;
goto l17;
l12:pile[v[22]]=866; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(866,jvj+13,V23)*/
V23=pile[WZ2]; 
V102=x[jvj+17];
V105=x[jvj+18];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(10,0,38,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V23; pile[WZ2]=V96; 
(*f[39])( );     /*SDX0(41,V23,V96,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V97,46,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V99; pile[WZ2]=864; 
(*f[42])( );     /*SRA1(135,V99,864,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(20,V102,V100,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=V101; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V101,61,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V105; pile[WZ2]=V103; 
(*f[39])( );     /*SDX0(20,V105,V103,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=V104; 
(*f[40])( );     /*SLG0(V104)*/
l13:if((V17!=2)) goto l17;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l17;
l15:if((V25<4)) goto l16;
goto l7;
l16:pile[v[22]]=70; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(70,0,42,V107)*/
V107=pile[WZ3]; 
pile[v[22]]=V107; 
(*f[40])( );     /*SLG0(V107)*/
if((V25!=2)) goto l7;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l7;
l20:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=287; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(287,jvj+20,jvj+21)*/
pile[v[22]]=80; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(80,jvj+20,jvj+22)*/
pile[v[22]]=365; pile[WZ1]=jvj+21; pile[WZ3]=jvj+12; 
(*f[1569])( );     /*DELIER0(365,jvj+21,jvj+22,jvj+12)*/
l21:x[jvj+19]=t[x[jvj+19]];
goto l19;
l23:if((V60<4)) goto l24;
l29:V66=g[565];
if((V66<=0)) goto l30;
V67=vg[565];
if((V67!=0)) goto l26;
if((V66<3)) goto l28;
l26:pile[v[22]]=565; pile[WZ1]=10530; pile[WZ2]=1; pile[WZ3]=jvj+27; 
(*f[291])( );     /*INTERP4(565,10530,1,jvj+27)*/
if((x[jvj+27]==135)) goto l27;
l30:pile[v[22]]=jvj+29; pile[WZ1]=891; pile[WZ2]=V108; 
(*f[43])( );     /*CHGC2(jvj+29,891,V108)*/
l36:x[jvj+32]=vo[13];z[jvj+32]=vz[13];
pile[v[22]]=963; pile[WZ1]=jvj+32; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(963,jvj+32,jvj+37)*/
pile[v[22]]=907; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(907,jvj+32,jvj+38)*/
if((x[jvj+38]==0)) goto l37;
pile[v[22]]=jvj+32; pile[WZ1]=963; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+32,963,67)*/
if((x[jvj+37]==68)) goto l31;
l37:pile[v[22]]=642; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(642,jvj+28,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=698; pile[WZ1]=jvj+23; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(698,jvj+23,jvj+33)*/
pile[v[22]]=929; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(929,jvj+33,V87)*/
V87=pile[WZ2]; 
x[jvj+34]=vo[16];z[jvj+34]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(509,jvj+34,jvj+35)*/
l34:if((x[jvj+35]<=0)) goto l41;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=929; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(929,jvj+36,V86)*/
V86=pile[WZ2]; 
if((V86!=V87)) goto l35;
pile[v[22]]=V89; pile[WZ1]=858; pile[WZ2]=jvj+52; 
(*f[46])( );     /*TRI0(V89,858,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+53; 
(*f[189])( );     /*TRI4(jvj+52,v[13],642,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=1570; pile[WZ2]=246; pile[WZ3]=jvj+54; 
(*f[189])( );     /*TRI4(jvj+53,1570,246,jvj+54)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10530; pile[WZ4]=jvj+54; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(158,1,218,10530,jvj+54,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+36; 
(*f[966])( );     /*ELIMINE0(jvj+39,jvj+36)*/
l41:pile[v[22]]=jvj+25; 
(*f[1571])( );     /*NOUVELLECONTRAINTE0(jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=927; pile[WZ2]=V71; 
(*f[43])( );     /*CHGC2(jvj+23,927,V71)*/
pile[v[22]]=jvj+28; pile[WZ1]=865; pile[WZ2]=jvj+23; 
(*f[35])( );     /*CHGC1(jvj+28,865,jvj+23)*/
goto l47;
l24:pile[v[22]]=866; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(866,jvj+23,V64)*/
V64=pile[WZ2]; 
V118=v[14];
V121=x[jvj+25];
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V110; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(10,V110,38,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V64; pile[WZ2]=V111; 
(*f[39])( );     /*SDX0(41,V64,V111,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V112,46,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V114; pile[WZ2]=864; 
(*f[42])( );     /*SRA1(135,V114,864,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=V115; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V115,40,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=V116; pile[WZ1]=V118; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V116,V118,41,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=V117; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V117,41,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V121; pile[WZ2]=V119; 
(*f[39])( );     /*SDX0(20,V121,V119,V120)*/
V120=pile[WZ3]; 
pile[v[22]]=V120; 
(*f[40])( );     /*SLG0(V120)*/
l25:if((V60!=2)) goto l29;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l29;
l27:if((V66<4)) goto l28;
goto l30;
l28:pile[v[22]]=75; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(75,0,42,V123)*/
V123=pile[WZ3]; 
pile[v[22]]=V123; 
(*f[40])( );     /*SLG0(V123)*/
if((V66!=2)) goto l30;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l30;
l33:V83=x[jvj+30];
pile[v[22]]=907; pile[WZ1]=jvj+32; pile[WZ2]=V83; 
(*f[134])( );     /*OTA0(907,jvj+32,V83)*/
pile[v[22]]=jvj+32; pile[WZ1]=963; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+32,963,68)*/
l32:x[jvj+38]=t[x[jvj+38]];
l31:if((x[jvj+38]<=0)) goto l37;
x[jvj+30]=s[x[jvj+38]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+38];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+25; pile[WZ2]=jvj+31; 
(*f[760])( );     /*MEMEX0(jvj+30,jvj+25,jvj+31)*/
if((x[jvj+31]==135)) goto l33;
goto l32;
l35:x[jvj+35]=t[x[jvj+35]];
goto l34;
l39:x[jvj+28]=vo[14];z[jvj+28]=vz[14];
pile[v[22]]=927; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(927,jvj+28,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=jvj+23; 
(*f[1566])( );if(v[102]) goto l42;     /*CHOIXND0(jvj+8,jvj+23)*/
pile[v[22]]=287; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(287,jvj+23,jvj+24)*/
l42:x[jvj+56]=incon;
if((LL==366)) goto l43;
pile[v[22]]=226; pile[WZ1]=jvj+8; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(226,jvj+8,jvj+41)*/
l44:if((x[jvj+41]>0)) goto l45;
x[jvj+56]=1336 ;z[jvj+56]=1336;
l48:x[jvj+55]=x[jvj+56] ;z[jvj+55]=z[jvj+56];
x[jvj+3]=x[jvj+8] ;z[jvj+3]=z[jvj+8];
goto l1;
l40:pile[v[22]]=576; pile[WZ1]=jvj+23; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(576,jvj+23,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+49; 
(*f[270])( );     /*QUADRI7(101,jvj+25,110,(-601),jvj+49)*/
pile[v[22]]=0; pile[WZ1]=642; pile[WZ2]=jvj+47; 
(*f[46])( );     /*TRI0(0,642,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=84; pile[WZ2]=218; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+47,84,218,jvj+48)*/
pile[v[22]]=jvj+49; pile[WZ1]=(-20); pile[WZ2]=jvj+48; pile[WZ3]=159; pile[WZ4]=jvj+50; 
(*f[298])( );     /*TRIENS1(jvj+49,(-20),jvj+48,159,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=864; pile[WZ2]=158; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+50,864,158,jvj+51)*/
pile[v[22]]=865; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(865,jvj+28,jvj+29)*/
V108=v[14];
V60=g[450];
if((V60<=0)) goto l29;
V61=vg[450];
if((V61!=0)) goto l22;
if((V60<3)) goto l24;
l22:pile[v[22]]=450; pile[WZ1]=10530; pile[WZ2]=1; pile[WZ3]=52; pile[WZ4]=jvj+23; pile[WZ5]=(-601); pile[v[22]+6]=jvj+25; pile[v[22]+7]=jvj+26; 
(*f[187])( );     /*INTERP0(450,10530,1,52,jvj+23,(-601),jvj+25,jvj+26)*/
if((x[jvj+26]==135)) goto l23;
goto l29;
l43:x[jvj+56]=366 ;z[jvj+56]=366;
goto l48;
l45:x[jvj+42]=s[x[jvj+41]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+41];
pile[v[22]]=867; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(867,jvj+42,jvj+43)*/
if((x[jvj+43]!=493)) goto l46;
x[jvj+56]=493 ;z[jvj+56]=493;
goto l48;
l46:x[jvj+41]=t[x[jvj+41]];
goto l44;
}
