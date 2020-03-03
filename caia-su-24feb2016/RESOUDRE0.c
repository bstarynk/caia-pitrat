#include "dx.h"
void RESOUDRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V8=0,V1=0,V18=0,V=0,V3=0,V2=0,V85=0,V88=0,V82=0,V83=0,V84=0,V86=0,V87=0,V17=0,KK=0,V51=0,V50=0,V53=0,V59=0,V58=0,V36=0,V35=0,V28=0,V96=0,V64=0,V63=0,V73=0,V77=0,V90=0,V91=0,V74=0,V75=0,V66=0,V114=0,V120=0,V116=0,V115=0,V121=0,V123=0,V124=0,V126=0,V122=0,V125=0,V118=0;
int S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=62;
x[jvj+1]=10830;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1474&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V51=0;
x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=jvj+9; 
(*f[407])( );     /*SORDONNEES0(jvj+9)*/
pile[v[22]]=V51; 
(*f[656])( );     /*SPLN2(V51,V50)*/
V50=pile[WZ1]; 
pile[v[22]]=V50; 
(*f[288])( );     /*SPLN0(V50)*/
x[jvj+10]=vo[20];z[jvj+10]=vz[20];
pile[v[22]]=jvj+10; pile[WZ1]=1575; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+10,1575,67)*/
V1=incon;
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
pile[v[22]]=1058; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1058,jvj+2,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(936,jvj+2,V8)*/
V8=pile[WZ2]; 
if((V6>=V8)) goto l1;
V1=V6;
l9:x[jvj+4]=vo[16];z[jvj+4]=vz[16];
depuis=vv[52]+600-(time(tzt)-inccc);ensuite=depuis+V1;alarm((depuis>=0) ? 1 : (ensuite>0) ? ensuite : V1);
v[186]=0;
v[187]=0;
v[138]=0;
vv[46]=287;
vv[196]=1;
pile[v[22]]=298; pile[WZ1]=218; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(298,218,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=719; 
(*f[35])( );     /*CHGC1(jvj+10,719,jvj+11)*/
pile[v[22]]=jvj+4; pile[WZ1]=1035; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+4,1035,0)*/
pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(498,jvj+4,jvj+5)*/
pile[v[22]]=896; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(896,jvj+5,jvj+6)*/
if((x[jvj+6]==0)) goto l10;
KK=v[47];
if((KK==0)) goto l40;
v[50]=KK;
v[47]=0;
l7:v[49]=v[50];
vv[50]=v[50];
V17=g[480];
if((V17<=0)) goto l10;
V18=vg[480];
if((V18!=0)) goto l2;
if((V17<3)) goto l5;
l2:pile[v[22]]=480; pile[WZ1]=10830; pile[WZ2]=0; pile[WZ3]=jvj+3; 
(*f[291])( );     /*INTERP4(480,10830,0,jvj+3)*/
if((x[jvj+3]==135)) goto l4;
l10:x[jvj+12]=vo[16];z[jvj+12]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(905,jvj+12,V53)*/
V53=pile[WZ2]; 
if((V53!=(-9009))) goto l11;
pile[v[22]]=jvj+12; pile[WZ1]=322; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+12,322,1)*/
l11:x[jvj+13]=vo[12];z[jvj+13]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(683,jvj+13,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(645,597,jvj+14)*/
l12:if((x[jvj+14]<=0)) goto l36;
x[jvj+7]=s[x[jvj+14]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+14];
pile[v[22]]=683; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(683,jvj+7,V58)*/
V58=pile[WZ2]; 
if((V58!=V59)) goto l13;
x[jvj+62]=incon;
pile[v[22]]=1418; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1418,jvj+7,jvj+8)*/
x[jvj+62]=x[jvj+8] ;z[jvj+62]=z[jvj+8];
l14:x[jvj+46]=x[jvj+62] ;z[jvj+46]=z[jvj+62];
x[jvj+38]=x[jvj+7] ;z[jvj+38]=z[jvj+7];
x[jvj+15]=vo[42];z[jvj+15]=vz[42];
pile[v[22]]=265; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(265,jvj+15,jvj+16)*/
l15:if((x[jvj+16]<=0)) goto l36;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=158; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(158,jvj+17,jvj+18)*/
if((x[jvj+18]!=696)) goto l16;
x[jvj+19]=vo[12];z[jvj+19]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(683,jvj+19,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(645,597,jvj+20)*/
l17:if((x[jvj+20]<=0)) goto l36;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=683; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(683,jvj+21,V35)*/
V35=pile[WZ2]; 
if((V35!=V36)) goto l18;
x[jvj+50]=incon;
pile[v[22]]=1418; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(1418,jvj+21,jvj+22)*/
x[jvj+50]=x[jvj+22] ;z[jvj+50]=z[jvj+22];
l39:pile[v[22]]=jvj+46; pile[WZ1]=1418; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,1418,jvj+47)*/
pile[v[22]]=963; pile[WZ1]=68; pile[WZ2]=1026; pile[WZ3]=1; pile[WZ4]=jvj+47; pile[WZ5]=jvj+48; 
(*f[47])( );     /*QUADRI0(963,68,1026,1,jvj+47,jvj+48)*/
pile[v[22]]=696; pile[WZ1]=218; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(696,218,jvj+31)*/
pile[v[22]]=1545; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(1545,jvj+38,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=1545; pile[WZ2]=jvj+49; 
(*f[300])( );     /*TRI10(jvj+39,1545,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; pile[WZ2]=1418; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+49,jvj+50,1418,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=287; pile[WZ2]=1201; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+51,287,1201,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=0; pile[WZ2]=1065; pile[WZ3]=jvj+53; 
(*f[189])( );     /*TRI4(jvj+52,0,1065,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ2]=1037; pile[WZ3]=jvj+54; 
(*f[189])( );     /*TRI4(jvj+53,0,1037,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ2]=977; pile[WZ3]=jvj+55; 
(*f[189])( );     /*TRI4(jvj+54,0,977,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=1; pile[WZ2]=929; pile[WZ3]=jvj+56; 
(*f[189])( );     /*TRI4(jvj+55,1,929,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=0; pile[WZ2]=927; pile[WZ3]=jvj+57; 
(*f[189])( );     /*TRI4(jvj+56,0,927,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ2]=876; pile[WZ3]=jvj+58; 
(*f[189])( );     /*TRI4(jvj+57,0,876,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ2]=866; pile[WZ3]=jvj+59; 
(*f[189])( );     /*TRI4(jvj+58,0,866,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ2]=642; pile[WZ3]=jvj+60; 
(*f[189])( );     /*TRI4(jvj+59,0,642,jvj+60)*/
pile[v[22]]=220; pile[WZ2]=493; pile[WZ3]=0; pile[WZ4]=jvj+60; pile[WZ5]=jvj+40; 
(*f[190])( );     /*QUADRI3(220,0,493,0,jvj+60,jvj+40)*/
vo[13]=x[jvj+48];vz[13]=(-1);
vo[14]=x[jvj+40];vz[14]=0;
pile[v[22]]=448; pile[WZ1]=S; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(448,S,jvj+27)*/
l23:if((x[jvj+27]>0)) goto l24;
(*f[1687])( );     /*INITIALISE0()*/
pile[v[22]]=S; 
(*f[1688])( );     /*INIT0(S)*/
if((x[jvj+46]==67)) goto l26;
if((x[jvj+46]!=68)) goto l27;
pile[v[22]]=120; pile[WZ1]=jvj+17; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(120,jvj+17,jvj+33)*/
pile[v[22]]=287; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(287,jvj+33,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+28; 
(*f[1691])( );     /*INVPERE0(jvj+34,jvj+28)*/
l25:pile[v[22]]=jvj+28; 
(*f[1692])( );     /*INIDEBIS0(jvj+28)*/
pile[v[22]]=498; pile[WZ1]=jvj+28; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(498,jvj+28,jvj+28)*/
x[jvj+28]=x[jvj+28] ;z[jvj+28]=z[jvj+28];
goto l25;
l1:pile[v[22]]=936; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(936,jvj+2,V1)*/
V1=pile[WZ2]; 
goto l9;
l3:V2=V3;
l6:pile[v[22]]=135; pile[WZ1]=V2; pile[WZ2]=1073; 
(*f[42])( );     /*SRA1(135,V2,1073,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V88; pile[WZ2]=V86; 
(*f[39])( );     /*SDX0(41,V88,V86,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=V87; 
(*f[40])( );     /*SLG0(V87)*/
if((V17!=2)) goto l10;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l10;
l4:if((V17<4)) goto l5;
goto l10;
l5:V85=x[jvj+5];
V88=v[50];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V82; pile[WZ2]=10830; 
(*f[98])( );     /*SRA3(135,V82,10830,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=V83; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V83,125,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V85; pile[WZ2]=V84; 
(*f[39])( );     /*SDX0(20,V85,V84,V3)*/
V3=pile[WZ3]; 
V2=incon;
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+4,V)*/
V=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V3,V,V2)*/
V2=pile[WZ2]; 
goto l6;
l8:x[jvj+62]=67 ;z[jvj+62]=67;
goto l14;
l13:x[jvj+14]=t[x[jvj+14]];
goto l12;
l16:x[jvj+16]=t[x[jvj+16]];
goto l15;
l18:x[jvj+20]=t[x[jvj+20]];
goto l17;
l19:x[jvj+50]=67 ;z[jvj+50]=67;
goto l39;
l21:V28=s[V96];
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==V28) goto l22;
pile[v[22]]=jvj+26; pile[WZ1]=V28; 
(*f[331])( );     /*PLUE3(jvj+26,V28)*/
l22:V96=t[V96];
l20:if((V96>0)) goto l21;
pile[v[22]]=jvj+23; pile[WZ1]=273; pile[WZ2]=jvj+26; 
(*f[34])( );     /*CHGC0(jvj+23,273,jvj+26)*/
x[jvj+27]=t[x[jvj+27]];
goto l23;
l24:x[jvj+23]=s[x[jvj+27]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+27];
x[jvj+26]=0 ;z[jvj+26]=0;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[938])( );     /*USE0(jvj+23,jvj+24)*/
pile[WZ1]=jvj+25; 
(*f[1686])( );     /*VCAL0(jvj+23,jvj+25)*/
V96=x[jvj+24];
goto l20;
l26:pile[v[22]]=120; pile[WZ1]=jvj+17; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(120,jvj+17,jvj+29)*/
x[jvj+30]=vo[13];z[jvj+30]=vz[13];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+31; 
(*f[1690])( );     /*INIDEB0(jvj+29,jvj+31)*/
pile[v[22]]=0; pile[WZ1]=858; pile[WZ2]=jvj+61; 
(*f[46])( );     /*TRI0(0,858,jvj+61)*/
pile[v[22]]=158; pile[WZ1]=696; pile[WZ2]=642; pile[WZ3]=0; pile[WZ4]=jvj+61; pile[WZ5]=jvj+32; 
(*f[47])( );     /*QUADRI0(158,696,642,0,jvj+61,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=250; pile[WZ2]=jvj+32; pile[WZ3]=jvj+30; 
(*f[1593])( );     /*AJOULIS0(jvj+31,250,jvj+32,jvj+30)*/
l27:x[jvj+35]=vo[12];z[jvj+35]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(860,jvj+35,jvj+36)*/
if((x[jvj+36]!=368)) goto l28;
pile[v[22]]=909; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(909,jvj+35,jvj+37)*/
if(x[jvj+37]!=392&&x[jvj+37]!=205) goto l28;
(*f[1689])( );     /*INICHERCHE0()*/
l28:pile[v[22]]=jvj+40; pile[WZ1]=865; pile[WZ2]=jvj+40; 
(*f[35])( );     /*CHGC1(jvj+40,865,jvj+40)*/
l36:x[jvj+43]=vo[13];z[jvj+43]=vz[13];
pile[v[22]]=120; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(120,jvj+43,jvj+44)*/
x[jvj+41]=vo[14];z[jvj+41]=vz[14];
V66=(time(tzt)-inccc);
pile[v[22]]=jvj+44; 
(*f[1693])( );     /*MISORDRE0(jvj+44)*/
pile[v[22]]=jvj+41; pile[WZ1]=1009; pile[WZ2]=V66; 
(*f[43])( );     /*CHGC2(jvj+41,1009,V66)*/
pile[v[22]]=1418; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(1418,jvj+41,jvj+42)*/
if((x[jvj+42]!=67)) goto l29;
(*f[1694])( );     /*MONIT0()*/
l29:if((x[jvj+42]!=68)) goto l35;
(*f[1695])( );     /*MONITBIS0()*/
l35:V74=(time(tzt)-inccc);
pile[v[22]]=1009; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(1009,jvj+41,V75)*/
V75=pile[WZ2]; 
V73=V74-V75;
if((v[21]!=1)) goto l32;
pile[v[22]]=jvj+41; pile[WZ1]=936; pile[WZ2]=V73; 
(*f[43])( );     /*CHGC2(jvj+41,936,V73)*/
l32:if((v[21]!=2)) goto l37;
V77=vv[33];
if((V77!=0)) goto l37;
pile[v[22]]=20; pile[WZ1]=10830; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10830,0,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V73; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(41,V73,V90,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=V91; pile[WZ1]=(-5570); 
(*f[37])( );     /*SRA0(V91,(-5570),V64)*/
V64=pile[WZ2]; 
V63=incon;
if((V73<=1)) goto l30;
pile[v[22]]=V64; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V64,83,V63)*/
V63=pile[WZ2]; 
l30:if(V63==incon) goto l31;
l33:if(V63!=incon) goto l34;
l37:x[jvj+45]=vo[20];z[jvj+45]=vz[20];
vv[46]=0;
vv[196]=0;
pile[v[22]]=719; pile[WZ1]=jvj+45; 
(*f[71])( );     /*ENLV0(719,jvj+45)*/
l38:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l31:V63=V64;
goto l33;
l34:pile[v[22]]=V63; 
(*f[40])( );     /*SLG0(V63)*/
goto l37;
l40:V114=50;
V115=incon;
V120=v[V114];
V116=V120%1000000;
if((V116>0)) goto l42;
V115=137643;
l41:v[V114]=V115;
goto l7;
l42:V118=V116%100000;
V125=V116/100000;
V122=V118*10;
V126=V118/10000;
V124=V125+V126;
V123=V124%10;
V121=V122+V123;
V115=V121;
goto l41;
}
