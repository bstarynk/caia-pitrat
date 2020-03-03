#include "dx.h"
void Z46Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V359=0,V367=0,II=0,V300=0,V309=0,V58=0,V414=0,V393=0,V35=0,V43=0,I=0,V382=0,V337=0,V271=0,V278=0,V353=0,V242=0,V238=0,V249=0,V110=0,V112=0,V185=0,V174=0,V483=0,V158=0,V133=0,V484=0,V134=0,V485=0,V135=0,V486=0,V213=0,V202=0,V488=0,L=0,K=0;
int EXEXEX,RRRT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=158;
if(v[0]>99700) (*f[6])( );

EXEXEX=pile[v[22]]; RRRT=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+44]=x[RRRT] ;z[jvj+44]=z[RRRT];
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(111,jvj+44,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]==625)) goto l20;
if((x[jvj+46]!=25)) goto l46;
x[jvj+65]=vo[16];z[jvj+65]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(498,jvj+65,jvj+66)*/
pile[v[22]]=1182; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(1182,jvj+66,jvj+67)*/
if((68!=x[jvj+67])) goto l31;
x[jvj+68]=d[20];z[jvj+68]=0;
l27:if((x[jvj+68]<=0)) goto l31;
x[jvj+69]=s[x[jvj+68]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+68];
pile[v[22]]=268; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(268,jvj+69,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+44; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(jvj+70,jvj+44,jvj+71)*/
pile[v[22]]=111; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+71,jvj+72)*/
pile[v[22]]=101; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+72,jvj+73)*/
if((x[jvj+73]!=63)) goto l28;
pile[v[22]]=102; pile[WZ1]=jvj+71; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+71,jvj+74)*/
pile[v[22]]=130; pile[WZ1]=jvj+74; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+74,V414)*/
V414=pile[WZ2]; 
V393=V414;
if((V393<0)) goto l28;
pile[v[22]]=jvj+69; pile[WZ1]=jvj+44; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(jvj+69,jvj+44,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+75,jvj+76)*/
if((x[jvj+76]!=484)) goto l28;
pile[v[22]]=103; pile[WZ1]=jvj+71; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,jvj+71,jvj+77)*/
pile[v[22]]=EXEXEX; pile[WZ1]=555; 
(*f[207])( );     /*PLUE2(EXEXEX,555)*/
l28:x[jvj+68]=t[x[jvj+68]];
goto l27;
l1:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=486)) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+4)*/
x[jvj+145]=x[jvj+4] ;z[jvj+145]=z[jvj+4];
l2:if((x[jvj+145]<=0)) goto l4;
x[jvj+5]=s[x[jvj+145]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+145];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]==484)) goto l37;
l3:x[jvj+145]=t[x[jvj+145]];
goto l2;
l4:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+1,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=486)) goto l32;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+9)*/
x[jvj+146]=x[jvj+9] ;z[jvj+146]=z[jvj+9];
l5:if((x[jvj+146]<=0)) goto l32;
x[jvj+10]=s[x[jvj+146]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+146];
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]==41)) goto l37;
l6:x[jvj+146]=t[x[jvj+146]];
goto l5;
l7:pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=486)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+15)*/
x[jvj+147]=x[jvj+15] ;z[jvj+147]=z[jvj+15];
l8:if((x[jvj+147]<=0)) goto l10;
x[jvj+16]=s[x[jvj+147]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+147];
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]==484)) goto l42;
l9:x[jvj+147]=t[x[jvj+147]];
goto l8;
l10:pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+12,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=486)) goto l40;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+20)*/
x[jvj+148]=x[jvj+20] ;z[jvj+148]=z[jvj+20];
l11:if((x[jvj+148]<=0)) goto l40;
x[jvj+21]=s[x[jvj+148]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+148];
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]==41)) goto l42;
l12:x[jvj+148]=t[x[jvj+148]];
goto l11;
l14:if((K<0)) goto l80;
l81:v[0]=jvj; v[22]-=2; return;
l17:if((V110>=0)) goto l60;
l62:if(x[jvj+46]!=29&&x[jvj+46]!=30&&x[jvj+46]!=25) goto l79;
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+44,jvj+119)*/
if((x[jvj+119]!=22)) goto l79;
pile[v[22]]=102; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(102,jvj+44,jvj+120)*/
pile[v[22]]=111; pile[WZ1]=jvj+120; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(111,jvj+120,jvj+121)*/
pile[v[22]]=101; pile[WZ1]=jvj+121; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(101,jvj+121,jvj+122)*/
if((x[jvj+122]!=486)) goto l74;
pile[v[22]]=107; pile[WZ1]=jvj+120; pile[WZ2]=jvj+123; 
(*f[33])( );     /*FNDE0(107,jvj+120,jvj+123)*/
for(i=x[jvj+123],V185=0;i>0;i=t[i],V185++)  ;
if((V185!=2)) goto l74;
x[jvj+124]=vo[16];z[jvj+124]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(498,jvj+124,jvj+125)*/
pile[v[22]]=1182; pile[WZ1]=jvj+125; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(1182,jvj+125,jvj+126)*/
if((68!=x[jvj+126])) goto l74;
pile[v[22]]=103; pile[WZ1]=jvj+44; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(103,jvj+44,jvj+127)*/
x[jvj+156]=x[jvj+123] ;z[jvj+156]=z[jvj+123];
l63:if((x[jvj+156]<=0)) goto l74;
x[jvj+128]=s[x[jvj+156]] ;z[jvj+128]=(x[jvj+128]<=sepcte) ? x[jvj+128] : z[jvj+156];
pile[v[22]]=100; pile[WZ1]=jvj+128; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(100,jvj+128,jvj+129)*/
if((x[jvj+129]!=484)) goto l67;
V483=x[jvj+123];
l65:if((V483<=0)) goto l67;
V174=s[V483];
if((x[jvj+128]==V174)) goto l66;
pile[v[22]]=EXEXEX; pile[WZ1]=375; 
(*f[207])( );     /*PLUE2(EXEXEX,375)*/
l66:V483=t[V483];
goto l65;
l20:pile[v[22]]=160; pile[WZ1]=jvj+44; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(160,jvj+44,jvj+47)*/
pile[v[22]]=130; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,jvj+47,V359)*/
V359=pile[WZ2]; 
x[jvj+48]=d[20];z[jvj+48]=0;
l21:if((x[jvj+48]>0)) goto l22;
if((V359>=20)) goto l46;
pile[v[22]]=870; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(870,jvj+44,V58)*/
V58=pile[WZ2]; 
if((V58!=1)) goto l46;
pile[v[22]]=1300; pile[WZ2]=jvj+64; 
(*f[33])( );     /*FNDE0(1300,jvj+44,jvj+64)*/
for(a=x[jvj+64];a>0;a=t[a]) if(s[a]==63) goto l46;
for(a=x[jvj+64];a>0;a=t[a]) if(s[a]==596) goto l46;
pile[v[22]]=102; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,jvj+44,jvj+23)*/
pile[v[22]]=103; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(103,jvj+44,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l13;
pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]==41)) goto l46;
l13:pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+25,jvj+27)*/
if((x[jvj+27]!=484)) goto l26;
pile[WZ1]=jvj+23; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+23,jvj+28)*/
if((x[jvj+28]==41)) goto l46;
l26:pile[v[22]]=EXEXEX; pile[WZ1]=546; 
(*f[207])( );     /*PLUE2(EXEXEX,546)*/
l46:if(x[jvj+46]!=29&&x[jvj+46]!=30) goto l62;
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(100,jvj+44,jvj+90)*/
if((x[jvj+90]!=22)) goto l62;
x[jvj+91]=vo[16];z[jvj+91]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(498,jvj+91,jvj+92)*/
pile[v[22]]=1182; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(1182,jvj+92,jvj+93)*/
if((68!=x[jvj+93])) goto l59;
pile[v[22]]=870; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(870,jvj+44,V382)*/
V382=pile[WZ2]; 
if((V382<=1)) goto l47;
if((V382>=8)) goto l47;
pile[v[22]]=102; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+44,jvj+94)*/
pile[v[22]]=103; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,jvj+44,jvj+95)*/
pile[v[22]]=EXEXEX; pile[WZ1]=612; 
(*f[207])( );     /*PLUE2(EXEXEX,612)*/
l47:pile[v[22]]=103; pile[WZ1]=jvj+44; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(103,jvj+44,jvj+96)*/
pile[v[22]]=130; pile[WZ1]=jvj+96; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(130,jvj+96,V337)*/
V337=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(102,jvj+44,jvj+97)*/
pile[v[22]]=100; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,jvj+97,jvj+98)*/
if((x[jvj+98]!=484)) goto l48;
pile[v[22]]=EXEXEX; pile[WZ1]=348; 
(*f[207])( );     /*PLUE2(EXEXEX,348)*/
l48:if((V337!=0)) goto l53;
pile[v[22]]=111; pile[WZ1]=jvj+97; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(111,jvj+97,jvj+99)*/
pile[v[22]]=101; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(101,jvj+99,jvj+100)*/
if((x[jvj+100]!=485)) goto l53;
pile[v[22]]=107; pile[WZ1]=jvj+97; pile[WZ2]=jvj+101; 
(*f[33])( );     /*FNDE0(107,jvj+97,jvj+101)*/
for(i=x[jvj+101],V271=0;i>0;i=t[i],V271++)  ;
if((V271!=2)) goto l53;
x[jvj+152]=x[jvj+101] ;z[jvj+152]=z[jvj+101];
l49:if((x[jvj+152]<=0)) goto l53;
x[jvj+102]=s[x[jvj+152]] ;z[jvj+102]=(x[jvj+102]<=sepcte) ? x[jvj+102] : z[jvj+152];
pile[v[22]]=100; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+102,jvj+103)*/
if((x[jvj+103]!=484)) goto l50;
x[jvj+153]=x[jvj+101] ;z[jvj+153]=z[jvj+101];
l51:if((x[jvj+153]<=0)) goto l50;
x[jvj+104]=s[x[jvj+153]] ;z[jvj+104]=(x[jvj+104]<=sepcte) ? x[jvj+104] : z[jvj+153];
if((x[jvj+102]==x[jvj+104])) goto l52;
pile[v[22]]=130; pile[WZ1]=jvj+104; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(130,jvj+104,V278)*/
V278=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=519; 
(*f[207])( );     /*PLUE2(EXEXEX,519)*/
l52:x[jvj+153]=t[x[jvj+153]];
goto l51;
l22:x[jvj+49]=s[x[jvj+48]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+48];
pile[v[22]]=jvj+49; pile[WZ1]=jvj+44; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(jvj+49,jvj+44,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+50,jvj+51)*/
if((x[jvj+51]!=484)) goto l25;
pile[v[22]]=268; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(268,jvj+49,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+44; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+52,jvj+44,jvj+53)*/
pile[v[22]]=130; pile[WZ1]=jvj+53; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+53,V367)*/
V367=pile[WZ2]; 
II=V367;
if((II==0)) goto l24;
pile[v[22]]=EXEXEX; pile[WZ1]=630; 
(*f[207])( );     /*PLUE2(EXEXEX,630)*/
l24:x[jvj+54]=vo[16];z[jvj+54]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(498,jvj+54,jvj+55)*/
pile[v[22]]=1182; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1182,jvj+55,jvj+56)*/
if((68!=x[jvj+56])) goto l25;
pile[v[22]]=EXEXEX; pile[WZ1]=507; 
(*f[207])( );     /*PLUE2(EXEXEX,507)*/
l25:if((V359>32)) goto l23;
pile[v[22]]=111; pile[WZ1]=jvj+50; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+50,jvj+57)*/
pile[v[22]]=101; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+57,jvj+58)*/
if((x[jvj+58]!=596)) goto l23;
pile[v[22]]=102; pile[WZ1]=jvj+50; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+50,jvj+59)*/
pile[v[22]]=130; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+59,V300)*/
V300=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+50; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,jvj+50,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+60,jvj+61)*/
if((x[jvj+61]!=484)) goto l23;
pile[v[22]]=268; pile[WZ1]=jvj+49; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(268,jvj+49,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+44; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(jvj+62,jvj+44,jvj+63)*/
pile[v[22]]=130; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+63,V309)*/
V309=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=666; 
(*f[207])( );     /*PLUE2(EXEXEX,666)*/
l23:x[jvj+48]=t[x[jvj+48]];
goto l21;
l30:x[jvj+79]=s[x[jvj+78]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+78];
pile[v[22]]=268; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(268,jvj+79,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+44; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+80,jvj+44,jvj+81)*/
pile[v[22]]=111; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+81,jvj+82)*/
pile[v[22]]=101; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+82,jvj+83)*/
if((x[jvj+83]==486)) goto l33;
if((x[jvj+83]!=485)) goto l32;
pile[v[22]]=107; pile[WZ1]=jvj+81; pile[WZ2]=jvj+85; 
(*f[33])( );     /*FNDE0(107,jvj+81,jvj+85)*/
for(i=x[jvj+85],V35=0;i>0;i=t[i],V35++)  ;
if((V35!=2)) goto l32;
pile[v[22]]=jvj+79; pile[WZ1]=jvj+44; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+79,jvj+44,jvj+1)*/
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+1,jvj+86)*/
if((x[jvj+86]==484)) goto l37;
if((x[jvj+86]==22)) goto l1;
if((x[jvj+86]==22)) goto l4;
l32:x[jvj+78]=t[x[jvj+78]];
l29:if((x[jvj+78]>0)) goto l30;
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,jvj+44,jvj+34)*/
pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+34,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]==485)) goto l46;
l44:pile[v[22]]=103; pile[WZ1]=jvj+44; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(103,jvj+44,jvj+37)*/
pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+37,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]==485)) goto l46;
l18:pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+34,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]==486)) goto l45;
l19:pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(111,jvj+37,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]==486)) goto l45;
goto l46;
l31:x[jvj+78]=d[20];z[jvj+78]=0;
goto l29;
l33:pile[v[22]]=jvj+79; pile[WZ1]=jvj+44; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+79,jvj+44,jvj+29)*/
pile[v[22]]=107; pile[WZ1]=jvj+81; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(107,jvj+81,jvj+84)*/
x[jvj+149]=x[jvj+84] ;z[jvj+149]=z[jvj+84];
l34:if((x[jvj+149]<=0)) goto l32;
x[jvj+31]=s[x[jvj+149]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+149];
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]==41)) goto l36;
l15:pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+31,jvj+32)*/
if((x[jvj+32]==41)) goto l36;
l16:pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+31,jvj+33)*/
if((x[jvj+33]==484)) goto l36;
l35:x[jvj+149]=t[x[jvj+149]];
goto l34;
l36:pile[v[22]]=EXEXEX; pile[WZ1]=141; 
(*f[207])( );     /*PLUE2(EXEXEX,141)*/
goto l35;
l37:pile[v[22]]=jvj+1; pile[WZ1]=jvj+87; 
(*f[1446])( );     /*NONUL0(jvj+1,jvj+87)*/
if((x[jvj+87]==135)) goto l39;
goto l32;
l39:x[jvj+158]=x[jvj+85] ;z[jvj+158]=z[jvj+85];
l38:if((x[jvj+158]<=0)) goto l32;
x[jvj+150]=s[x[jvj+158]] ;z[jvj+150]=(x[jvj+150]<=sepcte) ? x[jvj+150] : z[jvj+158];
x[jvj+12]=x[jvj+150] ;z[jvj+12]=z[jvj+150];
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(100,jvj+12,jvj+88)*/
if((x[jvj+88]==484)) goto l42;
if((x[jvj+88]==22)) goto l7;
if((x[jvj+88]==22)) goto l10;
l40:x[jvj+158]=t[x[jvj+158]];
goto l38;
l42:x[jvj+151]=x[jvj+85] ;z[jvj+151]=z[jvj+85];
l41:if((x[jvj+151]<=0)) goto l40;
x[jvj+89]=s[x[jvj+151]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+151];
if((x[jvj+150]==x[jvj+89])) goto l43;
pile[v[22]]=130; pile[WZ1]=jvj+89; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,jvj+89,V43)*/
V43=pile[WZ2]; 
I=V43;
if(I!=1&&I!=(-1)) goto l43;
pile[v[22]]=EXEXEX; pile[WZ1]=132; 
(*f[207])( );     /*PLUE2(EXEXEX,132)*/
l43:x[jvj+151]=t[x[jvj+151]];
goto l41;
l45:pile[v[22]]=EXEXEX; pile[WZ1]=396; 
(*f[207])( );     /*PLUE2(EXEXEX,396)*/
goto l46;
l50:x[jvj+152]=t[x[jvj+152]];
goto l49;
l53:pile[v[22]]=100; pile[WZ1]=jvj+96; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+96,jvj+105)*/
if((x[jvj+105]!=484)) goto l54;
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(102,jvj+44,jvj+106)*/
pile[v[22]]=130; pile[WZ1]=jvj+106; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,jvj+106,V353)*/
V353=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=351; 
(*f[207])( );     /*PLUE2(EXEXEX,351)*/
l54:pile[v[22]]=111; pile[WZ1]=jvj+96; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(111,jvj+96,jvj+107)*/
pile[v[22]]=101; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(101,jvj+107,jvj+108)*/
if((x[jvj+108]!=485)) goto l59;
pile[v[22]]=107; pile[WZ1]=jvj+96; pile[WZ2]=jvj+109; 
(*f[33])( );     /*FNDE0(107,jvj+96,jvj+109)*/
for(i=x[jvj+109],V242=0;i>0;i=t[i],V242++)  ;
if((V242!=2)) goto l59;
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(102,jvj+44,jvj+110)*/
pile[v[22]]=130; pile[WZ1]=jvj+110; 
(*f[26])( );if(v[102]) goto l59;     /*FNDC0(130,jvj+110,V238)*/
V238=pile[WZ2]; 
if((V238!=0)) goto l59;
x[jvj+154]=x[jvj+109] ;z[jvj+154]=z[jvj+109];
l55:if((x[jvj+154]<=0)) goto l59;
x[jvj+111]=s[x[jvj+154]] ;z[jvj+111]=(x[jvj+111]<=sepcte) ? x[jvj+111] : z[jvj+154];
pile[v[22]]=100; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+111,jvj+112)*/
if((x[jvj+112]!=484)) goto l56;
x[jvj+155]=x[jvj+109] ;z[jvj+155]=z[jvj+109];
l57:if((x[jvj+155]<=0)) goto l56;
x[jvj+113]=s[x[jvj+155]] ;z[jvj+113]=(x[jvj+113]<=sepcte) ? x[jvj+113] : z[jvj+155];
if((x[jvj+111]==x[jvj+113])) goto l58;
pile[v[22]]=130; pile[WZ1]=jvj+113; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+113,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=516; 
(*f[207])( );     /*PLUE2(EXEXEX,516)*/
l58:x[jvj+155]=t[x[jvj+155]];
goto l57;
l56:x[jvj+154]=t[x[jvj+154]];
goto l55;
l59:pile[v[22]]=103; pile[WZ1]=jvj+44; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(103,jvj+44,jvj+114)*/
pile[v[22]]=111; pile[WZ1]=jvj+114; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(111,jvj+114,jvj+115)*/
pile[v[22]]=101; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(101,jvj+115,jvj+116)*/
if((x[jvj+116]!=486)) goto l62;
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(102,jvj+44,jvj+117)*/
pile[v[22]]=130; pile[WZ1]=jvj+117; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(130,jvj+117,V110)*/
V110=pile[WZ2]; 
if((x[jvj+46]==29)) goto l17;
if((x[jvj+46]!=30)) goto l62;
if((V110>0)) goto l60;
goto l62;
l60:pile[v[22]]=107; pile[WZ1]=jvj+114; pile[WZ2]=jvj+118; 
(*f[33])( );     /*FNDE0(107,jvj+114,jvj+118)*/
l61:if((x[jvj+118]<=0)) goto l62;
V112=s[x[jvj+118]];
pile[v[22]]=EXEXEX; pile[WZ1]=606; 
(*f[207])( );     /*PLUE2(EXEXEX,606)*/
x[jvj+118]=t[x[jvj+118]];
goto l61;
l64:x[jvj+156]=t[x[jvj+156]];
goto l63;
l67:pile[v[22]]=111; pile[WZ1]=jvj+127; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(111,jvj+127,jvj+130)*/
pile[v[22]]=101; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(101,jvj+130,jvj+131)*/
if((x[jvj+131]!=486)) goto l64;
pile[v[22]]=107; pile[WZ1]=jvj+127; pile[WZ2]=jvj+132; 
(*f[33])( );     /*FNDE0(107,jvj+127,jvj+132)*/
for(i=x[jvj+132],V158=0;i>0;i=t[i],V158++)  ;
if((V158!=2)) goto l64;
V484=x[jvj+123];
l68:if((V484<=0)) goto l64;
V133=s[V484];
if((x[jvj+128]==V133)) goto l69;
V485=x[jvj+132];
l70:if((V485<=0)) goto l69;
V134=s[V485];
V486=x[jvj+132];
l71:if((V486>0)) goto l72;
V485=t[V485];
goto l70;
l69:V484=t[V484];
goto l68;
l72:V135=s[V486];
if((V134==V135)) goto l73;
pile[v[22]]=EXEXEX; pile[WZ1]=300; 
(*f[207])( );     /*PLUE2(EXEXEX,300)*/
l73:V486=t[V486];
goto l71;
l74:pile[v[22]]=103; pile[WZ1]=jvj+44; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(103,jvj+44,jvj+133)*/
pile[v[22]]=111; pile[WZ1]=jvj+133; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(111,jvj+133,jvj+134)*/
pile[v[22]]=101; pile[WZ1]=jvj+134; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(101,jvj+134,jvj+135)*/
if((x[jvj+135]!=486)) goto l79;
pile[v[22]]=107; pile[WZ1]=jvj+133; pile[WZ2]=jvj+136; 
(*f[33])( );     /*FNDE0(107,jvj+133,jvj+136)*/
for(i=x[jvj+136],V213=0;i>0;i=t[i],V213++)  ;
if((V213!=2)) goto l79;
x[jvj+137]=vo[16];z[jvj+137]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+137; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(498,jvj+137,jvj+138)*/
pile[v[22]]=1182; pile[WZ1]=jvj+138; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(1182,jvj+138,jvj+139)*/
if((68!=x[jvj+139])) goto l79;
x[jvj+157]=x[jvj+136] ;z[jvj+157]=z[jvj+136];
l75:if((x[jvj+157]<=0)) goto l79;
x[jvj+140]=s[x[jvj+157]] ;z[jvj+140]=(x[jvj+140]<=sepcte) ? x[jvj+140] : z[jvj+157];
pile[v[22]]=100; pile[WZ1]=jvj+140; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(100,jvj+140,jvj+141)*/
if((x[jvj+141]!=484)) goto l76;
V488=x[jvj+136];
l77:if((V488<=0)) goto l76;
V202=s[V488];
if((x[jvj+140]==V202)) goto l78;
pile[v[22]]=EXEXEX; pile[WZ1]=378; 
(*f[207])( );     /*PLUE2(EXEXEX,378)*/
l78:V488=t[V488];
goto l77;
l76:x[jvj+157]=t[x[jvj+157]];
goto l75;
l79:if((x[jvj+46]!=1280)) goto l81;
pile[v[22]]=103; pile[WZ1]=jvj+44; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(103,jvj+44,jvj+142)*/
pile[v[22]]=130; pile[WZ1]=jvj+142; 
(*f[26])( );if(v[102]) goto l81;     /*FNDC0(130,jvj+142,L)*/
L=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=jvj+44; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(160,jvj+44,jvj+143)*/
pile[v[22]]=130; pile[WZ1]=jvj+143; 
(*f[26])( );if(v[102]) goto l81;     /*FNDC0(130,jvj+143,K)*/
K=pile[WZ2]; 
if((K==0)) goto l81;
if((K==999)) goto l81;
if((L==2)) goto l14;
if((L>2)) goto l80;
goto l81;
l80:pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(102,jvj+44,jvj+144)*/
pile[v[22]]=EXEXEX; pile[WZ1]=432; 
(*f[207])( );     /*PLUE2(EXEXEX,432)*/
goto l81;
}
