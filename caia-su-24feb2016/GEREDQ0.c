#include "dx.h"
void GEREDQ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V54=0,V53=0,V1=0,KR=0,NR=0,V3=0,V8=0,V9=0,V12=0,V65=0,V73=0,V61=0,V63=0,V62=0,V15=0,V10=0,V66=0,V68=0,V96=0,V72=0,V94=0,V74=0,V98=0,V97=0,V55=0,K=0,V56=0,NRR=0,V27=0,V31=0,V29=0,V30=0,V33=0,V26=0,V77=0,V75=0,V76=0,V21=0,V20=0,V23=0,V22=0,V40=0,V84=0,V80=0,V81=0,V83=0,V49=0,V51=0,V=0,V25=0,V24=0,V44=0,V43=0,V87=0,EA=0,V92=0,V86=0,V88=0,V89=0,V90=0,V91=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=59;
x[jvj+1]=11670;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==883&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=58; 
(*f[346])( );     /*LK1(58)*/
V1=bh[v[1]][0];
KR=V1;
if((KR!=76)) goto l5;
pile[v[22]]=1567; pile[WZ1]=1576; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1567,1576,jvj+5)*/
l4:if((x[jvj+5]<=0)) goto l5;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; 
(*f[1202])( );     /*GEREDL0(jvj+6)*/
x[jvj+5]=t[x[jvj+5]];
goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
l2:if((x[jvj+3]<=0)) goto l50;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=162; pile[WZ1]=jvj+4; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(162,jvj+4,V53)*/
V53=pile[WZ2]; 
if((V53!=V54)) goto l3;
x[jvj+33]=x[jvj+4] ;z[jvj+33]=z[jvj+4];
if((KR!=84)) goto l50;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(250,158,jvj+53)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(1484,854,V31)*/
V31=pile[WZ2]; 
V29=sepfacts+1;
V30=sepfacts+V31;
l31:if((V29>V30)) goto l36;
V33=r[V29];
if((V33!=1)) goto l32;
x[jvj+34]=V29 ;z[jvj+34]=(V29<=sepcte) ? V29 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(905,jvj+34,V26)*/
V26=pile[WZ2]; 
if((V26==(-9113))) goto l33;
pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(905,jvj+33,V27)*/
V27=pile[WZ2]; 
if((V26==V27)) goto l33;
l32:V29++;
goto l31;
l5:if(KR!=69&&KR!=65&&KR!=71&&KR!=82) goto l30;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,NR)*/
NR=pile[WZ1]; 
if((KR==71)) goto l22;
if((KR==65)) goto l16;
if((KR==69)) goto l6;
if((KR!=82)) goto l30;
V66=bh[v[1]][1];
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(457,324,jvj+25)*/
pile[v[22]]=1016; pile[WZ1]=211; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1016,211,jvj+19)*/
l19:if((x[jvj+19]<=0)) goto l1;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=332; pile[WZ1]=jvj+20; 
(*f[219])( );if(v[102]) goto l20;     /*FNDC2(332,jvj+20,V65)*/
V65=pile[WZ2]; 
if((V65==V66)) goto l23;
l20:x[jvj+19]=t[x[jvj+19]];
goto l19;
l6:pile[v[22]]=1567; pile[WZ1]=1576; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1567,1576,jvj+7)*/
l7:if((x[jvj+7]<=0)) goto l1;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+8,V3)*/
V3=pile[WZ2]; 
if((V3!=NR)) goto l8;
V10=x[jvj+8];
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(457,324,jvj+9)*/
l9:if((x[jvj+9]>0)) goto l10;
pile[v[22]]=1567; pile[WZ1]=1576; pile[WZ2]=V10; 
(*f[134])( );     /*OTA0(1567,1576,V10)*/
l1:V54=bh[v[1]][1];
pile[v[22]]=898; pile[WZ1]=905; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(898,905,jvj+3)*/
goto l2;
l8:x[jvj+7]=t[x[jvj+7]];
goto l7;
l10:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=983; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(983,jvj+10,jvj+11)*/
x[jvj+12]=x[jvj+11] ;z[jvj+12]=z[jvj+11];
pile[v[22]]=878; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(878,jvj+12,jvj+13)*/
x[jvj+54]=x[jvj+13] ;z[jvj+54]=z[jvj+13];
l12:if((x[jvj+54]<=0)) goto l11;
x[jvj+14]=s[x[jvj+54]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+54];
pile[v[22]]=1543; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1543,jvj+14,jvj+15)*/
x[jvj+55]=x[jvj+15] ;z[jvj+55]=z[jvj+15];
l13:if((x[jvj+55]>0)) goto l14;
x[jvj+54]=t[x[jvj+54]];
goto l12;
l11:x[jvj+9]=t[x[jvj+9]];
goto l9;
l14:x[jvj+16]=s[x[jvj+55]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+55];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+16,V8)*/
V8=pile[WZ2]; 
if((V8!=NR)) goto l15;
V9=x[jvj+16];
pile[v[22]]=1543; pile[WZ1]=jvj+14; pile[WZ2]=V9; 
(*f[134])( );     /*OTA0(1543,jvj+14,V9)*/
l15:x[jvj+55]=t[x[jvj+55]];
goto l13;
l16:pile[v[22]]=1567; pile[WZ1]=1576; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1567,1576,jvj+17)*/
l17:if((x[jvj+17]<=0)) goto l1;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=642; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+18,V12)*/
V12=pile[WZ2]; 
if((V12!=NR)) goto l18;
pile[v[22]]=jvj+18; 
(*f[872])( );     /*SORED0(jvj+18)*/
goto l1;
l18:x[jvj+17]=t[x[jvj+17]];
goto l17;
l21:V62=V63;
l29:pile[v[22]]=41; pile[WZ1]=V98; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(41,V98,V62,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; 
(*f[40])( );     /*SLG0(V97)*/
l28:x[jvj+57]=t[x[jvj+57]];
l26:if((x[jvj+57]>0)) goto l27;
x[jvj+56]=t[x[jvj+56]];
l25:if((x[jvj+56]<=0)) goto l24;
x[jvj+21]=s[x[jvj+56]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+56];
pile[v[22]]=1543; pile[WZ1]=jvj+21; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(1543,jvj+21,jvj+30)*/
x[jvj+57]=x[jvj+30] ;z[jvj+57]=z[jvj+30];
goto l26;
l22:V15=20000+NR;
x[jvj+22]=V15 ;z[jvj+22]=(V15<=sepcte) ? V15 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(983,jvj+22,jvj+23)*/
pile[v[22]]=1580; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1580,jvj+23,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+22; 
(*f[1182])( );     /*SORGERED0(jvj+24,jvj+22)*/
goto l1;
l24:x[jvj+25]=t[x[jvj+25]];
l23:if((x[jvj+25]<=0)) goto l1;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=905; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(905,jvj+26,V68)*/
V68=pile[WZ2]; 
if((V68!=(-9009))) goto l24;
pile[v[22]]=983; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(983,jvj+26,jvj+27)*/
x[jvj+28]=x[jvj+27] ;z[jvj+28]=z[jvj+27];
pile[v[22]]=878; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(878,jvj+28,jvj+29)*/
V96=x[jvj+26];
x[jvj+56]=x[jvj+29] ;z[jvj+56]=z[jvj+29];
goto l25;
l27:x[jvj+31]=s[x[jvj+57]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+57];
pile[v[22]]=642; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(642,jvj+31,V72)*/
V72=pile[WZ2]; 
if((V72!=NR)) goto l28;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+20; pile[WZ3]=jvj+32; 
(*f[45])( );if(v[102]) goto l28;     /*FNDZ0(jvj+31,jvj+20,V94,jvj+32)*/
V94=pile[WZ2]; 
V74=V94;
V98=V74;
pile[v[22]]=20; pile[WZ1]=V96; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V96,0,V63)*/
V63=pile[WZ3]; 
V62=incon;
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(163,jvj+21,V73)*/
V73=pile[WZ2]; 
V61=V73;
pile[v[22]]=V63; pile[WZ1]=V61; 
(*f[37])( );     /*SRA0(V63,V61,V62)*/
V62=pile[WZ2]; 
goto l29;
l30:if((KR!=67)) goto l1;
pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,V55,K)*/
V55=pile[WZ1]; K=pile[WZ2]; 
V56=K+1;
pile[v[22]]=V56; 
(*f[135])( );     /*LND3(V56,NRR)*/
NRR=pile[WZ1]; 
pile[v[22]]=V55; pile[WZ1]=NRR; 
(*f[1203])( );     /*COMPRED0(V55,NRR)*/
goto l1;
l33:pile[v[22]]=983; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(983,jvj+34,jvj+35)*/
pile[v[22]]=1580; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(1580,jvj+35,jvj+36)*/
V77=x[jvj+34];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V77; pile[WZ2]=V75; 
(*f[39])( );     /*SDX0(20,V77,V75,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=V76; 
(*f[40])( );     /*SLG0(V76)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+34; 
(*f[1182])( );     /*SORGERED0(jvj+36,jvj+34)*/
goto l32;
l34:V20=V21;
l40:pile[v[22]]=41; pile[WZ1]=V40; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(41,V40,V20,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=V81; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V81,(-4670),V23)*/
V23=pile[WZ2]; 
V22=incon;
if((V40>1)) goto l35;
V22=V23;
l41:pile[v[22]]=23; pile[WZ1]=V84; pile[WZ2]=V22; 
(*f[39])( );     /*SDX0(23,V84,V22,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=V83; 
(*f[40])( );     /*SLG0(V83)*/
l39:x[jvj+40]=t[x[jvj+40]];
l37:if((x[jvj+40]>0)) goto l38;
pile[v[22]]=905; pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(905,jvj+33,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(457,324,jvj+47)*/
l45:if((x[jvj+47]<=0)) goto l50;
x[jvj+48]=s[x[jvj+47]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+47];
pile[v[22]]=905; pile[WZ1]=jvj+48; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(905,jvj+48,V43)*/
V43=pile[WZ2]; 
if((V43!=V44)) goto l46;
pile[v[22]]=983; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(983,jvj+48,jvj+49)*/
x[jvj+50]=x[jvj+49] ;z[jvj+50]=z[jvj+49];
pile[v[22]]=878; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(878,jvj+50,jvj+51)*/
V87=x[jvj+48];
x[jvj+59]=x[jvj+51] ;z[jvj+59]=z[jvj+51];
l47:if((x[jvj+59]<=0)) goto l46;
x[jvj+43]=s[x[jvj+59]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+59];
pile[v[22]]=972; pile[WZ1]=jvj+43; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(972,jvj+43,jvj+52)*/
pile[v[22]]=1543; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(1543,jvj+43,jvj+44)*/
x[jvj+58]=x[jvj+44] ;z[jvj+58]=z[jvj+44];
l42:if((x[jvj+58]<=0)) goto l48;
x[jvj+45]=s[x[jvj+58]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+58];
pile[v[22]]=642; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(642,jvj+45,V49)*/
V49=pile[WZ2]; 
if((V49!=0)) goto l43;
pile[v[22]]=893; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(893,jvj+45,jvj+46)*/
if((x[jvj+46]!=1000)) goto l43;
EA=x[jvj+52];
V92=EA;
pile[v[22]]=0; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(0,(-9543),V86)*/
V86=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V87; pile[WZ2]=V86; 
(*f[39])( );     /*SDX0(20,V87,V86,V25)*/
V25=pile[WZ3]; 
V24=incon;
pile[v[22]]=163; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(163,jvj+43,V51)*/
V51=pile[WZ2]; 
V=V51;
pile[v[22]]=V25; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V25,V,V24)*/
V24=pile[WZ2]; 
l49:pile[v[22]]=135; pile[WZ1]=V24; pile[WZ2]=854; 
(*f[42])( );     /*SRA1(135,V24,854,V88)*/
V88=pile[WZ3]; 
pile[WZ1]=V88; pile[WZ2]=1032; 
(*f[42])( );     /*SRA1(135,V88,1032,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=V89; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V89,58,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V92; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(23,V92,V90,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=V91; 
(*f[40])( );     /*SLG0(V91)*/
l48:x[jvj+59]=t[x[jvj+59]];
goto l47;
l35:pile[v[22]]=V23; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V23,83,V22)*/
V22=pile[WZ2]; 
goto l41;
l36:pile[v[22]]=763; pile[WZ1]=1576; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(763,1576,jvj+40)*/
goto l37;
l38:x[jvj+37]=s[x[jvj+40]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+40];
pile[v[22]]=252; pile[WZ1]=jvj+37; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(252,jvj+37,jvj+41)*/
for(i=x[jvj+41],V40=0;i>0;i=t[i],V40++)  ;
pile[v[22]]=218; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(218,jvj+37,jvj+42)*/
V84=x[jvj+41];
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V80; pile[WZ2]=jvj+42; 
(*f[42])( );     /*SRA1(135,V80,jvj+42,V21)*/
V21=pile[WZ3]; 
V20=incon;
pile[v[22]]=447; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(447,jvj+37,jvj+38)*/
x[jvj+39]=x[jvj+38] ;z[jvj+39]=z[jvj+38];
if((x[jvj+39]==250)) goto l34;
pile[v[22]]=135; pile[WZ1]=V21; pile[WZ2]=jvj+39; 
(*f[42])( );     /*SRA1(135,V21,jvj+39,V20)*/
V20=pile[WZ3]; 
goto l40;
l43:x[jvj+58]=t[x[jvj+58]];
goto l42;
l44:V24=V25;
goto l49;
l46:x[jvj+47]=t[x[jvj+47]];
goto l45;
l50:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; return;
}
