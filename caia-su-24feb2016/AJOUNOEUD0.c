#include "dx.h"
void AJOUNOEUD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V52=0,V54=0,V50=0,V51=0,V53=0,V55=0,V16=0,V3=0,V2=0,V1=0,K=0,V5=0,V43=0,V7=0,V45=0,V13=0,V46=0,V15=0,V48=0,V56=0,V28=0,V58=0,H=0,V66=0,V8=0,V67=0,RP=0,V41=0,V79=0,V85=0,V91=0,V108=0,V98=0,V110=0;
int HIST,A,B,C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=75;
x[jvj+1]=10198;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3037&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; C=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[C]==0)) goto l5;
V3=r[x[C]];
V2=(-V3);
V1=V2;
K=V1;
if((K==20)) goto l28;
if((K==41)) goto l31;
if((K!=89)) goto l5;
V67=x[C];
l33:if((V67<=0)) goto l5;
V8=s[V67];
pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(A,B,jvj+9)*/
x[jvj+68]=x[jvj+9] ;z[jvj+68]=z[jvj+9];
l13:if((x[jvj+68]>0)) goto l14;
pile[v[22]]=B; pile[WZ1]=498; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(B,498,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=A; pile[WZ2]=277; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+38,A,277,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=V8; pile[WZ2]=162; pile[WZ3]=jvj+40; 
(*f[815])( );     /*TRI18(jvj+39,V8,162,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=158; pile[WZ3]=89; pile[WZ4]=jvj+40; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,89,158,89,jvj+40,jvj+14)*/
if((x[A]!=480)) goto l16;
x[jvj+46]=vo[16];z[jvj+46]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+46; 
(*f[44])( );if(v[102]) goto l45;     /*FNDC1(905,jvj+46,V85)*/
V85=pile[WZ2]; 
if((V85!=(-9009))) goto l45;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+47; 
(*f[1290])( );if(v[102]) goto l45;     /*DEPEXP0(jvj+14,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+48; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+48)*/
pile[v[22]]=447; pile[WZ1]=jvj+47; pile[WZ2]=459; pile[WZ3]=jvj+48; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(447,jvj+47,459,jvj+48,jvj+49)*/
pile[v[22]]=jvj+14; pile[WZ1]=1334; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+14,1334,jvj+49)*/
l45:pile[v[22]]=462; pile[WZ1]=B; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(462,B,jvj+50)*/
if((x[jvj+50]!=68)) goto l16;
pile[v[22]]=jvj+14; pile[WZ1]=466; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+14,466,1)*/
pile[WZ1]=235; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+14,235,jvj+14)*/
l16:pile[v[22]]=A; pile[WZ1]=461; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(A,461,jvj+11)*/
x[jvj+69]=x[jvj+11] ;z[jvj+69]=z[jvj+11];
l17:if((x[jvj+69]>0)) goto l18;
pile[v[22]]=B; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(B,A,jvj+14)*/
l34:V67=t[V67];
goto l33;
l2:if((V16<4)) goto l3;
l35:if((v[111]!=0)) goto l36;
pile[v[22]]=A; pile[WZ1]=HIST; pile[WZ2]=B; pile[WZ3]=C; 
(*f[1768])( );     /*ARCHIVE4(A,HIST,B,C)*/
l36:if((x[A]==480)) goto l37;
if((x[A]!=481)) goto l43;
pile[v[22]]=663; pile[WZ1]=B; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(663,B,HIST)*/
pile[v[22]]=B; pile[WZ1]=663; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(B,663,68)*/
l43:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l3:V52=x[A];
V54=x[B];
pile[v[22]]=20; pile[WZ1]=10198; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10198,0,V50)*/
V50=pile[WZ3]; 
pile[WZ1]=V52; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,V52,V50,V51)*/
V51=pile[WZ3]; 
pile[WZ1]=V54; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(20,V54,V51,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=HIST; 
(*f[828])( );if(v[102]) goto l4;     /*SORHIST0(V53,HIST,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V55; 
(*f[40])( );     /*SLG0(V55)*/
l4:if((V16!=2)) goto l35;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l35;
l5:V16=g[621];
if((V16<=0)) goto l35;
V17=vg[621];
if((V17!=0)) goto l1;
if((V16<3)) goto l3;
l1:pile[v[22]]=621; pile[WZ1]=10198; pile[WZ2]=0; pile[WZ3]=(-598); pile[WZ4]=A; pile[WZ5]=(-591); pile[v[22]+6]=B; pile[v[22]+7]=(-6231); pile[v[22]+8]=HIST; pile[v[22]+9]=jvj+2; 
(*f[188])( );     /*INTERP1(621,10198,0,(-598),A,(-591),B,(-6231),HIST,jvj+2)*/
if((x[jvj+2]==135)) goto l2;
goto l35;
l7:x[jvj+4]=s[x[jvj+66]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+66];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+4,V5)*/
V5=pile[WZ2]; 
if((V5==H)) goto l32;
l8:x[jvj+66]=t[x[jvj+66]];
l6:if((x[jvj+66]>0)) goto l7;
pile[v[22]]=B; pile[WZ1]=498; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(B,498,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=A; pile[WZ2]=277; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,A,277,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=41; pile[WZ2]=158; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+36,41,158,jvj+37)*/
pile[v[22]]=100; pile[WZ2]=130; pile[WZ3]=H; pile[WZ4]=jvj+37; pile[WZ5]=jvj+8; 
(*f[47])( );     /*QUADRI0(100,41,130,H,jvj+37,jvj+8)*/
if((x[A]!=480)) goto l9;
x[jvj+41]=vo[16];z[jvj+41]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+41; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(905,jvj+41,V79)*/
V79=pile[WZ2]; 
if((V79!=(-9009))) goto l44;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+42; 
(*f[1290])( );if(v[102]) goto l44;     /*DEPEXP0(jvj+8,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+43)*/
pile[v[22]]=447; pile[WZ1]=jvj+42; pile[WZ2]=459; pile[WZ3]=jvj+43; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(447,jvj+42,459,jvj+43,jvj+44)*/
pile[v[22]]=jvj+8; pile[WZ1]=1334; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+8,1334,jvj+44)*/
l44:pile[v[22]]=462; pile[WZ1]=B; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(462,B,jvj+45)*/
if((x[jvj+45]!=68)) goto l9;
pile[v[22]]=jvj+8; pile[WZ1]=466; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+8,466,1)*/
pile[WZ1]=235; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(jvj+8,235,jvj+8)*/
l9:pile[v[22]]=A; pile[WZ1]=461; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(A,461,jvj+5)*/
x[jvj+67]=x[jvj+5] ;z[jvj+67]=z[jvj+5];
l10:if((x[jvj+67]>0)) goto l11;
pile[v[22]]=B; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(B,A,jvj+8)*/
l32:V66=t[V66];
l30:if((V66<=0)) goto l5;
H=s[V66];
pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(A,B,jvj+3)*/
x[jvj+66]=x[jvj+3] ;z[jvj+66]=z[jvj+3];
goto l6;
l11:x[jvj+6]=s[x[jvj+67]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+67];
pile[v[22]]=B; pile[WZ1]=jvj+6; pile[WZ3]=jvj+7; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(B,jvj+6,V43,jvj+7)*/
V43=pile[WZ2]; 
V7=V43;
V45=V7;
pile[v[22]]=jvj+8; pile[WZ2]=V45; 
(*f[43])( );     /*CHGC2(jvj+8,jvj+6,V45)*/
l12:x[jvj+67]=t[x[jvj+67]];
goto l10;
l14:x[jvj+10]=s[x[jvj+68]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+68];
pile[v[22]]=162; pile[WZ1]=jvj+10; 
(*f[219])( );if(v[102]) goto l15;     /*FNDC2(162,jvj+10,V13)*/
V13=pile[WZ2]; 
if((V13==V8)) goto l34;
l15:x[jvj+68]=t[x[jvj+68]];
goto l13;
l18:x[jvj+12]=s[x[jvj+69]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+69];
pile[v[22]]=B; pile[WZ1]=jvj+12; pile[WZ3]=jvj+13; 
(*f[45])( );if(v[102]) goto l19;     /*FNDZ0(B,jvj+12,V46,jvj+13)*/
V46=pile[WZ2]; 
V15=V46;
V48=V15;
pile[v[22]]=jvj+14; pile[WZ2]=V48; 
(*f[43])( );     /*CHGC2(jvj+14,jvj+12,V48)*/
l19:x[jvj+69]=t[x[jvj+69]];
goto l17;
l21:x[jvj+16]=s[x[jvj+70]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+70];
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]==x[jvj+34])) goto l29;
l22:x[jvj+70]=t[x[jvj+70]];
l20:if((x[jvj+70]>0)) goto l21;
pile[v[22]]=B; pile[WZ1]=498; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(B,498,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=A; pile[WZ2]=277; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+32,A,277,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=158; pile[WZ3]=20; pile[WZ4]=jvj+33; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(101,jvj+34,158,20,jvj+33,jvj+21)*/
if((x[A]!=480)) goto l23;
x[jvj+51]=vo[16];z[jvj+51]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+51; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(905,jvj+51,V91)*/
V91=pile[WZ2]; 
if((V91!=(-9009))) goto l46;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+52; 
(*f[1290])( );if(v[102]) goto l46;     /*DEPEXP0(jvj+21,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+53; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+53)*/
pile[v[22]]=447; pile[WZ1]=jvj+52; pile[WZ2]=459; pile[WZ3]=jvj+53; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(447,jvj+52,459,jvj+53,jvj+54)*/
pile[v[22]]=jvj+21; pile[WZ1]=1334; pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+21,1334,jvj+54)*/
l46:pile[v[22]]=462; pile[WZ1]=B; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(462,B,jvj+55)*/
if((x[jvj+55]!=68)) goto l23;
pile[v[22]]=jvj+21; pile[WZ1]=466; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+21,466,1)*/
pile[WZ1]=235; pile[WZ2]=jvj+21; 
(*f[35])( );     /*CHGC1(jvj+21,235,jvj+21)*/
l23:pile[v[22]]=A; pile[WZ1]=461; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(A,461,jvj+18)*/
x[jvj+71]=x[jvj+18] ;z[jvj+71]=z[jvj+18];
l24:if((x[jvj+71]>0)) goto l25;
pile[v[22]]=B; pile[WZ1]=A; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(B,A,jvj+21)*/
l29:x[jvj+72]=t[x[jvj+72]];
l27:if((x[jvj+72]<=0)) goto l5;
x[jvj+34]=s[x[jvj+72]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+72];
pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(A,B,jvj+15)*/
x[jvj+70]=x[jvj+15] ;z[jvj+70]=z[jvj+15];
goto l20;
l25:x[jvj+19]=s[x[jvj+71]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+71];
pile[v[22]]=B; pile[WZ1]=jvj+19; pile[WZ3]=jvj+20; 
(*f[45])( );if(v[102]) goto l26;     /*FNDZ0(B,jvj+19,V56,jvj+20)*/
V56=pile[WZ2]; 
V28=V56;
V58=V28;
pile[v[22]]=jvj+21; pile[WZ2]=V58; 
(*f[43])( );     /*CHGC2(jvj+21,jvj+19,V58)*/
l26:x[jvj+71]=t[x[jvj+71]];
goto l24;
l28:x[jvj+72]=x[C] ;z[jvj+72]=z[C];
goto l27;
l31:V66=x[C];
goto l30;
l37:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,B,jvj+22)*/
if((x[jvj+22]!=454)) goto l42;
pile[v[22]]=436; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(436,B,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(140,jvj+23,RP)*/
RP=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=B; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(509,B,jvj+24)*/
l38:if((x[jvj+24]<=0)) goto l42;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=620; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(620,jvj+25,jvj+26)*/
x[jvj+73]=x[jvj+26] ;z[jvj+73]=z[jvj+26];
l39:if((x[jvj+73]>0)) goto l40;
x[jvj+24]=t[x[jvj+24]];
goto l38;
l40:x[jvj+27]=s[x[jvj+73]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+73];
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=484)) goto l41;
pile[v[22]]=111; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+27,jvj+29)*/
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(140,jvj+29,V41)*/
V41=pile[WZ2]; 
if((RP!=V41)) goto l41;
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+27,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=jvj+30; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+30,jvj+56)*/
if((x[jvj+57]=w[x[jvj+56]][3])==incon) goto l41;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+57; pile[WZ3]=jvj+58; 
(*f[45])( );if(v[102]) goto l41;     /*FNDZ0(jvj+30,jvj+57,V108,jvj+58)*/
V108=pile[WZ2]; 
x[jvj+59]=vo[16];z[jvj+59]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(454,jvj+59,jvj+60)*/
l47:if((x[jvj+60]<=0)) goto l41;
x[jvj+61]=s[x[jvj+60]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+60];
pile[v[22]]=436; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(436,jvj+61,jvj+62)*/
pile[v[22]]=140; pile[WZ1]=jvj+62; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,jvj+62,V98)*/
V98=pile[WZ2]; 
if((V98!=RP)) goto l50;
pile[v[22]]=480; pile[WZ1]=jvj+61; pile[WZ2]=jvj+63; 
(*f[33])( );     /*FNDE0(480,jvj+61,jvj+63)*/
x[jvj+75]=x[jvj+63] ;z[jvj+75]=z[jvj+63];
l48:if((x[jvj+75]<=0)) goto l50;
x[jvj+64]=s[x[jvj+75]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+75];
pile[v[22]]=jvj+64; pile[WZ1]=jvj+57; pile[WZ3]=jvj+65; 
(*f[45])( );if(v[102]) goto l49;     /*FNDZ0(jvj+64,jvj+57,V110,jvj+65)*/
V110=pile[WZ2]; 
if((V108!=V110)) goto l49;
x[jvj+74]=x[jvj+64] ;z[jvj+74]=z[jvj+64];
x[jvj+31]=x[jvj+74] ;z[jvj+31]=z[jvj+74];
pile[v[22]]=jvj+31; pile[WZ1]=509; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+31,509,jvj+25)*/
l41:x[jvj+73]=t[x[jvj+73]];
goto l39;
l42:pile[v[22]]=662; pile[WZ1]=B; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(662,B,HIST)*/
goto l43;
l49:x[jvj+75]=t[x[jvj+75]];
goto l48;
l50:x[jvj+60]=t[x[jvj+60]];
goto l47;
}
