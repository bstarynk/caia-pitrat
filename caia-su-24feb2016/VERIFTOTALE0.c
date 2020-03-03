#include "dx.h"
void VERIFTOTALE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V5=0,V19=0,V22=0,G=0,V10=0,V52=0,V53=0,V54=0,V9=0,V29=0,V13=0,V64=0,V65=0,V12=0,V33=0,V73=0,V75=0,V68=0,V69=0,V23=0,V71=0,V72=0,V74=0,V41=0,V44=0,V46=0,V90=0,V84=0,V85=0,V86=0,V88=0,V89=0,V91=0,K=0,V93=0,V48=0,V50=0,V101=0,V95=0,V96=0,V97=0,V99=0,V100=0,V102=0,V104=0,V42=0,V81=0,V76=0,V77=0,V78=0,V80=0,V82=0,V36=0,V61=0,V63=0,V57=0,V58=0,V60=0,V62=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=11437;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==439&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=1371; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1371,jvj+3,jvj+4)*/
l1:if((x[jvj+4]>0)) goto l2;
x[jvj+11]=vo[16];z[jvj+11]=vz[16];
pile[v[22]]=1371; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1371,jvj+11,jvj+15)*/
x[jvj+37]=x[jvj+15] ;z[jvj+37]=z[jvj+15];
l15:if((x[jvj+37]>0)) goto l16;
x[jvj+29]=vo[14];z[jvj+29]=vz[14];
pile[v[22]]=929; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(929,jvj+29,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=jvj+11; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(509,jvj+11,jvj+30)*/
l18:if((x[jvj+30]<=0)) goto l23;
x[jvj+10]=s[x[jvj+30]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+30];
pile[v[22]]=929; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(929,jvj+10,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=1344; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1344,jvj+11,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==V19) goto l19;
l20:pile[v[22]]=jvj+10; pile[WZ1]=jvj+15; pile[WZ2]=jvj+31; 
(*f[798])( );     /*INSTANTIE0(jvj+10,jvj+15,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[799])( );if(v[102]) goto l19;     /*NORME0(jvj+31,jvj+32)*/
x[jvj+33]=x[jvj+32] ;z[jvj+33]=z[jvj+32];
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=134)) goto l19;
V61=x[jvj+10];
V63=x[jvj+33];
pile[v[22]]=929; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(929,jvj+10,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=1344; pile[WZ2]=jvj+11; 
(*f[235])( );     /*PLUSC2(V33,1344,jvj+11)*/
l8:pile[v[22]]=205; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(205,jvj+10,jvj+13)*/
x[jvj+14]=x[jvj+13] ;z[jvj+14]=z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[798])( );     /*INSTANTIE0(jvj+14,jvj+15,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[799])( );if(v[102]) goto l21;     /*NORME0(jvj+16,jvj+17)*/
x[jvj+18]=x[jvj+17] ;z[jvj+18]=z[jvj+17];
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=134)) goto l21;
V73=x[jvj+14];
V75=x[jvj+18];
pile[v[22]]=20; pile[WZ1]=11437; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11437,0,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V68; pile[WZ2]=576; 
(*f[42])( );     /*SRA1(135,V68,576,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V23; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(41,V23,V69,V13)*/
V13=pile[WZ3]; 
V12=incon;
pile[v[22]]=929; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(929,jvj+10,V29)*/
V29=pile[WZ2]; 
G=V29;
pile[v[22]]=V13; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V13,91,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=G; pile[WZ2]=V64; 
(*f[39])( );     /*SDX0(41,G,V64,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V65,93,V12)*/
V12=pile[WZ2]; 
l9:pile[v[22]]=135; pile[WZ1]=V12; pile[WZ2]=205; 
(*f[42])( );     /*SRA1(135,V12,205,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V73; pile[WZ2]=V71; 
(*f[39])( );     /*SDX0(20,V73,V71,V72)*/
V72=pile[WZ3]; 
pile[WZ1]=V75; pile[WZ2]=V72; 
(*f[39])( );     /*SDX0(20,V75,V72,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; 
(*f[40])( );     /*SLG0(V74)*/
l21:pile[v[22]]=20; pile[WZ1]=11437; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11437,0,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V57; pile[WZ2]=576; 
(*f[42])( );     /*SRA1(135,V57,576,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V23; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(41,V23,V58,V10)*/
V10=pile[WZ3]; 
V9=incon;
pile[v[22]]=929; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(929,jvj+10,V22)*/
V22=pile[WZ2]; 
G=V22;
pile[v[22]]=V10; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V10,32,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V52; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V52,91,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=G; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V53,G,41,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V54,93,V9)*/
V9=pile[WZ2]; 
l22:pile[v[22]]=20; pile[WZ1]=V61; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(20,V61,V9,V60)*/
V60=pile[WZ3]; 
pile[WZ1]=V63; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(20,V63,V60,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; 
(*f[40])( );     /*SLG0(V62)*/
l19:x[jvj+30]=t[x[jvj+30]];
goto l18;
l2:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=319; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(319,jvj+5,jvj+6)*/
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+6,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=274; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(274,jvj+5,jvj+7)*/
pile[v[22]]=489; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(489,jvj+7,jvj+8)*/
x[jvj+35]=x[jvj+8] ;z[jvj+35]=z[jvj+8];
l4:if((x[jvj+35]<=0)) goto l3;
x[jvj+9]=s[x[jvj+35]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+35];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+9,V5)*/
V5=pile[WZ2]; 
if((V5!=V6)) goto l23;
l5:x[jvj+35]=t[x[jvj+35]];
goto l4;
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
l6:V9=V10;
goto l22;
l7:V12=V13;
goto l9;
l11:x[jvj+20]=s[x[jvj+36]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+36];
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+20,V41)*/
V41=pile[WZ2]; 
if((V41==K)) goto l17;
l12:x[jvj+36]=t[x[jvj+36]];
l10:if((x[jvj+36]>0)) goto l11;
V81=x[jvj+21];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=365; 
(*f[42])( );     /*SRA1(135,0,365,V76)*/
V76=pile[WZ3]; 
pile[WZ1]=V76; pile[WZ2]=104; 
(*f[42])( );     /*SRA1(135,V76,104,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V42; pile[WZ2]=V77; 
(*f[39])( );     /*SDX0(41,V42,V77,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V81; pile[WZ2]=V78; 
(*f[39])( );     /*SDX0(20,V81,V78,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=K; pile[WZ2]=V80; 
(*f[39])( );     /*SDX0(41,K,V80,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; 
(*f[40])( );     /*SLG0(V82)*/
l17:x[jvj+37]=t[x[jvj+37]];
goto l15;
l16:x[jvj+25]=s[x[jvj+37]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+37];
pile[v[22]]=274; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(274,jvj+25,jvj+26)*/
pile[v[22]]=319; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(319,jvj+25,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+27,V36)*/
V36=pile[WZ2]; 
x[jvj+21]=x[jvj+26] ;z[jvj+21]=z[jvj+26];
pile[v[22]]=365; pile[WZ1]=jvj+21; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(365,jvj+21,jvj+28)*/
if((x[jvj+28]==0)) goto l17;
K=V36;
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(280,jvj+21,V44)*/
V44=pile[WZ2]; 
if((K>=V44)) goto l13;
x[jvj+22]=vo[14];z[jvj+22]=vz[14];
pile[v[22]]=929; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(929,jvj+22,V46)*/
V46=pile[WZ2]; 
V90=x[jvj+21];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=280; 
(*f[42])( );     /*SRA1(135,0,280,V84)*/
V84=pile[WZ3]; 
pile[WZ1]=V84; pile[WZ2]=104; 
(*f[42])( );     /*SRA1(135,V84,104,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V46; pile[WZ2]=V85; 
(*f[39])( );     /*SDX0(41,V46,V85,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V86; pile[WZ2]=280; 
(*f[42])( );     /*SRA1(135,V86,280,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V90; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(20,V90,V88,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V44; pile[WZ2]=V89; 
(*f[39])( );     /*SDX0(41,V44,V89,V91)*/
V91=pile[WZ3]; 
pile[WZ1]=K; pile[WZ2]=V91; 
(*f[39])( );     /*SDX0(41,K,V91,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; 
(*f[40])( );     /*SLG0(V93)*/
l13:pile[v[22]]=164; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(164,jvj+21,V48)*/
V48=pile[WZ2]; 
if((K<=V48)) goto l14;
x[jvj+23]=vo[14];z[jvj+23]=vz[14];
pile[v[22]]=929; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(929,jvj+23,V50)*/
V50=pile[WZ2]; 
V101=x[jvj+21];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=164; 
(*f[42])( );     /*SRA1(135,0,164,V95)*/
V95=pile[WZ3]; 
pile[WZ1]=V95; pile[WZ2]=104; 
(*f[42])( );     /*SRA1(135,V95,104,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V50; pile[WZ2]=V96; 
(*f[39])( );     /*SDX0(41,V50,V96,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V97; pile[WZ2]=164; 
(*f[42])( );     /*SRA1(135,V97,164,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V101; pile[WZ2]=V99; 
(*f[39])( );     /*SDX0(20,V101,V99,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V48; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(41,V48,V100,V102)*/
V102=pile[WZ3]; 
pile[WZ1]=K; pile[WZ2]=V102; 
(*f[39])( );     /*SDX0(41,K,V102,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=V104; 
(*f[40])( );     /*SLG0(V104)*/
l14:x[jvj+24]=vo[14];z[jvj+24]=vz[14];
pile[v[22]]=929; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(929,jvj+24,V42)*/
V42=pile[WZ2]; 
x[jvj+36]=x[jvj+28] ;z[jvj+36]=z[jvj+28];
goto l10;
l23:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; return;
}
