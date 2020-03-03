#include "dx.h"
void CB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0,V83=0,V78=0,V79=0,V80=0,V81=0,V82=0,V84=0,V1=0,V22=0,V34=0,V28=0,V8=0,V18=0,V20=0,V15=0,V9=0,V10=0,V11=0,V12=0,V53=0,W=0,V=0,V103=0,V56=0,V61=0,V60=0,V41=0,V69=0,L=0,V66=0,V65=0,V73=0,V95=0,V89=0,V90=0,V91=0,V92=0,V93=0,V94=0,V68=0;
int BL,TL,BK,NV;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=10668;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==723&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; TL=pile[v[22]+1]; BK=pile[v[22]+2]; NV=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,TL,V8)*/
V8=pile[WZ2]; 
x[jvj+15]=vo[20];z[jvj+15]=vz[20];
vo[15]=x[TL];vz[15]=x[BK];
pile[v[22]]=10240; pile[WZ1]=218; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(10240,218,jvj+46)*/
pile[v[22]]=109; pile[WZ1]=BK; pile[WZ2]=117; pile[WZ3]=V8; pile[WZ4]=jvj+46; pile[WZ5]=jvj+16; 
(*f[47])( );     /*QUADRI0(109,BK,117,V8,jvj+46,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=719; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(jvj+15,719,jvj+16)*/
pile[v[22]]=888; pile[WZ1]=240; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(888,240,jvj+17)*/
l13:if((x[jvj+17]<=0)) goto l15;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+18,V18)*/
V18=pile[WZ2]; 
if((V18!=V8)) goto l14;
pile[v[22]]=109; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(109,jvj+18,jvj+19)*/
if((x[jvj+19]!=x[BK])) goto l14;
V20=x[jvj+18];
pile[v[22]]=888; pile[WZ1]=240; pile[WZ2]=V20; 
(*f[134])( );     /*OTA0(888,240,V20)*/
l14:x[jvj+17]=t[x[jvj+17]];
goto l13;
l2:if((V1<4)) goto l3;
l19:fflush(stdout);
l31:x[jvj+37]=vo[20];z[jvj+37]=vz[20];
pile[v[22]]=jvj+37; pile[WZ1]=130; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+37,130,0)*/
pile[v[22]]=218; pile[WZ1]=BL; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(218,BL,jvj+38)*/
if((x[jvj+38]!=854)) goto l32;
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(222,TL,jvj+39)*/
pile[v[22]]=BL; pile[WZ1]=147; 
(*f[34])( );     /*CHGC0(BL,147,jvj+39)*/
l32:pile[v[22]]=363; pile[WZ1]=BL; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(363,BL,jvj+40)*/
V61=x[BL];
l33:if((x[jvj+40]>0)) goto l34;
pile[v[22]]=218; pile[WZ1]=BL; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(218,BL,jvj+22)*/
if((x[jvj+22]==854)) goto l45;
l35:pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(147,BL,jvj+42)*/
for(i=x[jvj+42],V41=0;i>0;i=t[i],V41++)  ;
x[jvj+31]=0 ;z[jvj+31]=0;
pile[v[22]]=184; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(184,BL,jvj+23)*/
l20:if((x[jvj+23]>0)) goto l21;
pile[v[22]]=365; pile[WZ1]=BL; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(365,BL,jvj+32)*/
l25:if((x[jvj+32]>0)) goto l26;
for(i=x[jvj+31],V56=0;i>0;i=t[i],V56++)  ;
if((V41>=V56)) goto l36;
pile[v[22]]=365; pile[WZ1]=BL; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(365,BL,jvj+35)*/
l29:if((x[jvj+35]<=0)) goto l36;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
if((x[jvj+36]==x[TL])) goto l30;
pile[v[22]]=jvj+36; pile[WZ1]=147; 
(*f[273])( );     /*PLUK1(jvj+36,147)*/
l30:x[jvj+35]=t[x[jvj+35]];
goto l29;
l3:pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,TL,V5)*/
V5=pile[WZ2]; 
V83=x[BK];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V78; pile[WZ2]=10668; 
(*f[98])( );     /*SRA3(135,V78,10668,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(41,1,V79,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=V80; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V80,125,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V83; pile[WZ2]=V81; 
(*f[39])( );     /*SDX0(20,V83,V81,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V5; pile[WZ2]=V82; 
(*f[39])( );     /*SDX0(41,V5,V82,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; 
(*f[40])( );     /*SLG0(V84)*/
l4:if((V1!=2)) goto l19;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l19;
l8:V34=r[V22];
if((V34!=1)) goto l7;
x[jvj+9]=V22 ;z[jvj+9]=(V22<=sepcte) ? V22 : 0;
pile[v[22]]=1854; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1854,jvj+9,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+10)*/
l7:V22++;
l6:if((V22<=sepbase)) goto l8;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(645,597,jvj+11)*/
l9:if((x[jvj+11]>0)) goto l10;
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l17;
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]==854)) goto l17;
l5:if((x[jvj+8]<=0)) goto l18;
x[jvj+4]=s[x[jvj+8]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+8];
pile[v[22]]=1913; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1913,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l17;
x[jvj+8]=t[x[jvj+8]];
goto l5;
l10:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=905; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(905,jvj+12,V28)*/
V28=pile[WZ2]; 
if((V28!=(-11721))) goto l11;
pile[v[22]]=109; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(109,jvj+12,jvj+13)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+13)*/
l12:pile[v[22]]=449; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(449,jvj+12,jvj+14)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+14)*/
l11:x[jvj+11]=t[x[jvj+11]];
goto l9;
l15:pile[v[22]]=218; pile[WZ1]=BL; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(218,BL,jvj+20)*/
if((x[jvj+20]!=854)) goto l16;
V15=x[BL];
pile[v[22]]=TL; 
(*f[1103])( );     /*CREKPROD0(TL)*/
pile[v[22]]=BL; pile[WZ1]=0; pile[WZ2]=V15; pile[WZ3]=184; 
(*f[285])( );     /*ENLY0(BL,0,V15,184,V9,V10)*/
V9=pile[WZ4]; V10=pile[WZ5]; 
pile[WZ1]=V10; pile[WZ2]=V9; pile[WZ3]=565; 
(*f[285])( );     /*ENLY0(BL,V10,V9,565,V11,V12)*/
V11=pile[WZ4]; V12=pile[WZ5]; 
pile[v[22]]=184; pile[WZ1]=TL; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(184,TL,jvj+3)*/
pile[v[22]]=BL; pile[WZ1]=184; 
(*f[34])( );     /*CHGC0(BL,184,jvj+3)*/
l16:pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(583,TL,jvj+6)*/
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=jvj+8; pile[WZ1]=11728; 
(*f[68])( );     /*PLUE0(jvj+8,11728)*/
V22=1;
goto l6;
l17:x[jvj+21]=vo[20];z[jvj+21]=vz[20];
pile[v[22]]=jvj+21; pile[WZ1]=1270; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+21,1270,68)*/
l18:if(x[BK]==10547||x[BK]==10169) goto l31;
V1=g[139];
if((V1<=0)) goto l19;
V2=vg[139];
if((V2!=0)) goto l1;
if((V1<3)) goto l3;
l1:pile[v[22]]=139; pile[WZ1]=10668; pile[WZ2]=0; pile[WZ3]=(-678); pile[WZ4]=BK; pile[WZ5]=(-662); pile[v[22]+6]=TL; pile[v[22]+7]=jvj+2; 
(*f[187])( );     /*INTERP0(139,10668,0,(-678),BK,(-662),TL,jvj+2)*/
if((x[jvj+2]==135)) goto l2;
goto l19;
l21:x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=42)) goto l22;
pile[v[22]]=105; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(105,jvj+24,jvj+26)*/
x[jvj+47]=x[jvj+26] ;z[jvj+47]=z[jvj+26];
l23:if((x[jvj+47]<=0)) goto l22;
x[jvj+27]=s[x[jvj+47]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+47];
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=82)) goto l24;
pile[v[22]]=436; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(436,jvj+27,jvj+30)*/
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,jvj+30,V53)*/
V53=pile[WZ2]; 
W=V53;
pile[v[22]]=jvj+31; pile[WZ1]=W; 
(*f[331])( );     /*PLUE3(jvj+31,W)*/
l24:x[jvj+47]=t[x[jvj+47]];
goto l23;
l22:x[jvj+23]=t[x[jvj+23]];
goto l20;
l26:x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=222; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(222,jvj+33,jvj+34)*/
V103=x[jvj+34];
l27:if((V103>0)) goto l28;
x[jvj+32]=t[x[jvj+32]];
goto l25;
l28:V=s[V103];
pile[v[22]]=jvj+31; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+31,V)*/
V103=t[V103];
goto l27;
l34:x[jvj+41]=s[x[jvj+40]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+40];
V60=x[jvj+41];
pile[v[22]]=363; pile[WZ1]=BL; pile[WZ2]=V60; 
(*f[134])( );     /*OTA0(363,BL,V60)*/
pile[v[22]]=474; pile[WZ1]=jvj+41; pile[WZ2]=V61; 
(*f[134])( );     /*OTA0(474,jvj+41,V61)*/
x[jvj+40]=t[x[jvj+40]];
goto l33;
l36:pile[v[22]]=BL; pile[WZ1]=147; pile[WZ2]=jvj+31; 
(*f[34])( );     /*CHGC0(BL,147,jvj+31)*/
l45:x[jvj+45]=vo[20];z[jvj+45]=vz[20];
pile[v[22]]=TL; 
(*f[316])( );     /*NETT0(TL)*/
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(565,BL,jvj+43)*/
if((x[jvj+43]!=0)) goto l37;
pile[v[22]]=BL; 
(*f[1104])( );     /*SEGM0(BL)*/
l37:pile[v[22]]=TL; 
(*f[316])( );     /*NETT0(TL)*/
pile[WZ1]=322; pile[WZ2]=NV; 
(*f[43])( );     /*CHGC2(TL,322,NV)*/
pile[v[22]]=BL; pile[WZ1]=TL; 
(*f[1105])( );     /*CC0(BL,TL)*/
if(x[BK]==10547||x[BK]==10169) goto l46;
V68=g[298];
if((V68<=0)) goto l44;
V69=vg[298];
if((V69!=0)) goto l38;
if((V68<3)) goto l41;
l38:pile[v[22]]=298; pile[WZ1]=10668; pile[WZ2]=0; pile[WZ3]=(-678); pile[WZ4]=BK; pile[WZ5]=(-662); pile[v[22]+6]=TL; pile[v[22]+7]=jvj+44; 
(*f[187])( );     /*INTERP0(298,10668,0,(-678),BK,(-662),TL,jvj+44)*/
if((x[jvj+44]==135)) goto l40;
l44:fflush(stdout);
l46:pile[v[22]]=719; pile[WZ1]=jvj+45; 
(*f[71])( );     /*ENLV0(719,jvj+45)*/
pile[v[22]]=1270; 
(*f[71])( );     /*ENLV0(1270,jvj+45)*/
l47:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l39:V65=V66;
l42:pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
l43:if((V68!=2)) goto l44;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l44;
l40:if((V68<4)) goto l41;
goto l44;
l41:pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,TL,V73)*/
V73=pile[WZ2]; 
V95=x[BK];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V89; pile[WZ2]=10668; 
(*f[98])( );     /*SRA3(135,V89,10668,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(41,2,V90,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=V91; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V91,125,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=V92; pile[WZ1]=(-4868); 
(*f[37])( );     /*SRA0(V92,(-4868),V93)*/
V93=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V95; pile[WZ2]=V93; 
(*f[39])( );     /*SDX0(20,V95,V93,V94)*/
V94=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V73; pile[WZ2]=V94; 
(*f[39])( );     /*SDX0(41,V73,V94,V66)*/
V66=pile[WZ3]; 
V65=incon;
pile[v[22]]=741; pile[WZ1]=BK; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(741,BK,L)*/
L=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=L; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(41,L,V66,V65)*/
V65=pile[WZ3]; 
goto l42;
}
