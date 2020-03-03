#include "dx.h"
void BACKTRACK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V46=0,V49=0,V99=0,V102=0,V91=0,V92=0,V93=0,V95=0,V96=0,V97=0,V98=0,V100=0,V101=0,V45=0,V52=0,V104=0,V51=0,V89=0,V68=0,V72=0,V71=0,V74=0,V7=0,V6=0,V10=0,V9=0,NK=0,V5=0,V14=0,V19=0,V83=0,V86=0,V77=0,V78=0,V80=0,V81=0,V82=0,V84=0,V85=0,V13=0,V22=0,V88=0,V21=0,V26=0,V56=0;
int P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=10530;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1318&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=P; pile[WZ1]=jvj+22; 
(*f[1566])( );if(v[102]) goto l32;     /*CHOIXND0(P,jvj+22)*/
pile[v[22]]=287; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(287,jvj+22,jvj+26)*/
pile[v[22]]=80; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(80,jvj+22,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(101,jvj+26,110,(-656),jvj+38)*/
pile[WZ1]=jvj+27; pile[WZ3]=(-598); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,jvj+27,110,(-598),jvj+39)*/
pile[v[22]]=0; pile[WZ1]=642; pile[WZ2]=jvj+37; 
(*f[46])( );     /*TRI0(0,642,jvj+37)*/
pile[v[22]]=158; pile[WZ1]=864; pile[WZ2]=218; pile[WZ3]=84; pile[WZ4]=jvj+37; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(158,864,218,84,jvj+37,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=159; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+38)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+39)*/
x[jvj+32]=vo[13];z[jvj+32]=vz[13];
V13=g[369];
if((V13<=0)) goto l27;
V14=vg[369];
if((V14!=0)) goto l20;
if((V13<3)) goto l22;
l20:pile[v[22]]=369; pile[WZ1]=10530; pile[WZ2]=0; pile[WZ3]=(-743); pile[WZ4]=jvj+22; pile[WZ5]=jvj+23; 
(*f[232])( );     /*INTERP3(369,10530,0,(-743),jvj+22,jvj+23)*/
if((x[jvj+23]==135)) goto l21;
l27:V21=g[564];
if((V21<=0)) goto l17;
V22=vg[564];
if((V22!=0)) goto l24;
if((V21<3)) goto l26;
l24:pile[v[22]]=564; pile[WZ1]=10530; pile[WZ2]=0; pile[WZ3]=jvj+24; 
(*f[291])( );     /*INTERP4(564,10530,0,jvj+24)*/
if((x[jvj+24]==135)) goto l25;
l17:x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(642,jvj+20,NK)*/
NK=pile[WZ2]; 
V5=tt[NK];
if((V5!=864)) goto l19;
if((NK<=0)) goto l19;
V7=ta1[NK];
V6=V7;
if((V6==x[jvj+26])) goto l18;
V10=ta2[NK];
V9=V10;
if((V9==x[jvj+27])) goto l18;
l19:pile[v[22]]=864; pile[WZ1]=jvj+21; 
(*f[1567])( );     /*ARCHIVE2(864,jvj+21)*/
x[jvj+25]=vo[14];z[jvj+25]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(642,jvj+25,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+21; pile[WZ1]=642; pile[WZ2]=V26; 
(*f[43])( );     /*CHGC2(jvj+21,642,V26)*/
pile[v[22]]=489; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; pile[WZ3]=jvj+21; pile[WZ4]=jvj+22; 
(*f[1568])( );     /*LIER0(489,jvj+26,jvj+27,jvj+21,jvj+22)*/
l28:pile[v[22]]=1267; pile[WZ1]=jvj+22; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(1267,jvj+22,jvj+28)*/
l29:if((x[jvj+28]>0)) goto l30;
pile[v[22]]=jvj+32; pile[WZ1]=1026; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+32,1026,1)*/
l40:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:if((V45<4)) goto l3;
l8:V51=g[565];
if((V51<=0)) goto l9;
V52=vg[565];
if((V52!=0)) goto l5;
if((V51<3)) goto l7;
l5:pile[v[22]]=565; pile[WZ1]=10530; pile[WZ2]=0; pile[WZ3]=jvj+7; 
(*f[291])( );     /*INTERP4(565,10530,0,jvj+7)*/
if((x[jvj+7]==135)) goto l6;
l9:pile[v[22]]=jvj+9; pile[WZ1]=891; pile[WZ2]=V89; 
(*f[43])( );     /*CHGC2(jvj+9,891,V89)*/
l15:x[jvj+12]=vo[13];z[jvj+12]=vz[13];
pile[v[22]]=963; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(963,jvj+12,jvj+17)*/
pile[v[22]]=907; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(907,jvj+12,jvj+18)*/
if((x[jvj+18]==0)) goto l16;
pile[v[22]]=jvj+12; pile[WZ1]=963; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+12,963,67)*/
if((x[jvj+17]==68)) goto l10;
l16:pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(642,jvj+8,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=698; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(698,jvj+3,jvj+13)*/
pile[v[22]]=929; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(929,jvj+13,V72)*/
V72=pile[WZ2]; 
x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(509,jvj+14,jvj+15)*/
l13:if((x[jvj+15]<=0)) goto l34;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=929; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(929,jvj+16,V71)*/
V71=pile[WZ2]; 
if((V71!=V72)) goto l14;
pile[v[22]]=V74; pile[WZ1]=858; pile[WZ2]=jvj+45; 
(*f[46])( );     /*TRI0(V74,858,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+46; 
(*f[189])( );     /*TRI4(jvj+45,v[13],642,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=1318; pile[WZ2]=246; pile[WZ3]=jvj+47; 
(*f[189])( );     /*TRI4(jvj+46,1318,246,jvj+47)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10530; pile[WZ4]=jvj+47; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(158,1,218,10530,jvj+47,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+16; 
(*f[966])( );     /*ELIMINE0(jvj+19,jvj+16)*/
l34:pile[v[22]]=jvj+5; 
(*f[1571])( );     /*NOUVELLECONTRAINTE0(jvj+5)*/
pile[v[22]]=jvj+3; pile[WZ1]=927; pile[WZ2]=V56; 
(*f[43])( );     /*CHGC2(jvj+3,927,V56)*/
pile[v[22]]=jvj+8; pile[WZ1]=865; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+8,865,jvj+3)*/
goto l40;
l3:pile[v[22]]=866; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(866,jvj+3,V49)*/
V49=pile[WZ2]; 
V99=v[14];
V102=x[jvj+5];
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V91; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(10,V91,38,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V49; pile[WZ2]=V92; 
(*f[39])( );     /*SDX0(41,V49,V92,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V93,46,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V95; pile[WZ2]=864; 
(*f[42])( );     /*SRA1(135,V95,864,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=V96; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V96,40,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=V97; pile[WZ1]=V99; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V97,V99,41,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=V98; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V98,41,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(20,V102,V100,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=V101; 
(*f[40])( );     /*SLG0(V101)*/
l4:if((V45!=2)) goto l8;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l8;
l6:if((V51<4)) goto l7;
goto l9;
l7:pile[v[22]]=75; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(75,0,42,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=V104; 
(*f[40])( );     /*SLG0(V104)*/
if((V51!=2)) goto l9;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l9;
l12:V68=x[jvj+10];
pile[v[22]]=907; pile[WZ1]=jvj+12; pile[WZ2]=V68; 
(*f[134])( );     /*OTA0(907,jvj+12,V68)*/
pile[v[22]]=jvj+12; pile[WZ1]=963; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+12,963,68)*/
l11:x[jvj+18]=t[x[jvj+18]];
l10:if((x[jvj+18]<=0)) goto l16;
x[jvj+10]=s[x[jvj+18]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+18];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[760])( );     /*MEMEX0(jvj+10,jvj+5,jvj+11)*/
if((x[jvj+11]==135)) goto l12;
goto l11;
l14:x[jvj+15]=t[x[jvj+15]];
goto l13;
l18:pile[v[22]]=jvj+20; pile[WZ1]=642; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(jvj+20,642,(-1))*/
goto l19;
l21:if((V13<4)) goto l22;
goto l27;
l22:pile[v[22]]=866; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(866,jvj+22,V19)*/
V19=pile[WZ2]; 
V83=x[jvj+26];
V86=x[jvj+27];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(10,0,38,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V19; pile[WZ2]=V77; 
(*f[39])( );     /*SDX0(41,V19,V77,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V78,46,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V80; pile[WZ2]=864; 
(*f[42])( );     /*SRA1(135,V80,864,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V83; pile[WZ2]=V81; 
(*f[39])( );     /*SDX0(20,V83,V81,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V82,61,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V86; pile[WZ2]=V84; 
(*f[39])( );     /*SDX0(20,V86,V84,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=V85; 
(*f[40])( );     /*SLG0(V85)*/
l23:if((V13!=2)) goto l27;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l27;
l25:if((V21<4)) goto l26;
goto l17;
l26:pile[v[22]]=70; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(70,0,42,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; 
(*f[40])( );     /*SLG0(V88)*/
if((V21!=2)) goto l17;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l17;
l30:x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=287; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(287,jvj+29,jvj+30)*/
pile[v[22]]=80; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(80,jvj+29,jvj+31)*/
pile[v[22]]=365; pile[WZ1]=jvj+30; pile[WZ3]=jvj+21; 
(*f[1569])( );     /*DELIER0(365,jvj+30,jvj+31,jvj+21)*/
l31:x[jvj+28]=t[x[jvj+28]];
goto l29;
l32:x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=927; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(927,jvj+8,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=P; pile[WZ1]=jvj+3; 
(*f[1566])( );if(v[102]) goto l35;     /*CHOIXND0(P,jvj+3)*/
pile[v[22]]=287; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(287,jvj+3,jvj+4)*/
l35:x[jvj+36]=incon;
pile[v[22]]=226; pile[WZ1]=P; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(226,P,jvj+33)*/
l36:if((x[jvj+33]>0)) goto l37;
x[jvj+36]=1336 ;z[jvj+36]=1336;
l39:pile[v[22]]=jvj+36; pile[WZ1]=P; 
(*f[1570])( );     /*BACKTRACK1(jvj+36,P)*/
goto l40;
l33:pile[v[22]]=576; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(576,jvj+3,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(101,jvj+5,110,(-601),jvj+42)*/
pile[v[22]]=0; pile[WZ1]=642; pile[WZ2]=jvj+40; 
(*f[46])( );     /*TRI0(0,642,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=84; pile[WZ2]=218; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+40,84,218,jvj+41)*/
pile[v[22]]=jvj+42; pile[WZ1]=(-20); pile[WZ2]=jvj+41; pile[WZ3]=159; pile[WZ4]=jvj+43; 
(*f[298])( );     /*TRIENS1(jvj+42,(-20),jvj+41,159,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=864; pile[WZ2]=158; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,864,158,jvj+44)*/
pile[v[22]]=865; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(865,jvj+8,jvj+9)*/
V89=v[14];
V45=g[450];
if((V45<=0)) goto l8;
V46=vg[450];
if((V46!=0)) goto l1;
if((V45<3)) goto l3;
l1:pile[v[22]]=450; pile[WZ1]=10530; pile[WZ2]=0; pile[WZ3]=37; pile[WZ4]=jvj+3; pile[WZ5]=(-601); pile[v[22]+6]=jvj+5; pile[v[22]+7]=jvj+6; 
(*f[187])( );     /*INTERP0(450,10530,0,37,jvj+3,(-601),jvj+5,jvj+6)*/
if((x[jvj+6]==135)) goto l2;
goto l8;
l37:x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=867; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(867,jvj+34,jvj+35)*/
if((x[jvj+35]!=493)) goto l38;
x[jvj+36]=493 ;z[jvj+36]=493;
goto l39;
l38:x[jvj+33]=t[x[jvj+33]];
goto l36;
}
