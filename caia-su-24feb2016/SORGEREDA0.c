#include "dx.h"
void SORGEREDA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V78=0,V79=0,V80=0,V81=0,V82=0,V2=0,V18=0,V19=0,V26=0,V27=0,V7=0,V6=0,V53=0,V54=0,V42=0,V41=0,V56=0,V90=0,V91=0,V29=0,V85=0,V86=0,V87=0,V66=0,V=0,V62=0,V61=0,V67=0,V68=0,V70=0,V71=0,V73=0,V74=0,V94=0,V95=0,V96=0,V97=0,V98=0,V99=0,V100=0,V102=0,V104=0,V105=0,V106=0,V108=0,V110=0,V111=0,V112=0,V114=0;
int NA,NB,RW,BL,CM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=63;
x[jvj+1]=11673;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1470&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NA=pile[v[22]]; NB=pile[v[22]+1]; RW=pile[v[22]+2]; BL=pile[v[22]+3]; CM=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V78; pile[WZ2]=966; 
(*f[42])( );     /*SRA1(135,V78,966,V79)*/
V79=pile[WZ3]; 
pile[WZ1]=V79; pile[WZ2]=1378; 
(*f[42])( );     /*SRA1(135,V79,1378,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=V80; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V80,(-9543),V81)*/
V81=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NA; pile[WZ2]=V81; 
(*f[39])( );     /*SDX0(41,NA,V81,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; 
(*f[40])( );     /*SLG0(V82)*/
x[jvj+2]=d[72];z[jvj+2]=0;
l1:if((x[jvj+2]<=0)) goto l39;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=RW; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+3,RW,jvj+4)*/
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(642,jvj+5,V2)*/
V2=pile[WZ2]; 
if((V2!=NA)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+3,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=RW; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+6,RW,jvj+7)*/
x[jvj+8]=x[jvj+5] ;z[jvj+8]=z[jvj+5];
x[jvj+29]=x[jvj+7] ;z[jvj+29]=z[jvj+7];
pile[v[22]]=763; pile[WZ1]=jvj+8; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(763,jvj+8,jvj+42)*/
l27:if((x[jvj+42]>0)) goto l28;
pile[v[22]]=763; pile[WZ1]=jvj+29; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(763,jvj+29,jvj+44)*/
l31:if((x[jvj+44]>0)) goto l32;
pile[v[22]]=763; pile[WZ1]=jvj+8; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(763,jvj+8,jvj+46)*/
l36:if((x[jvj+46]<=0)) goto l39;
x[jvj+47]=s[x[jvj+46]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+46];
pile[v[22]]=159; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(159,jvj+47,jvj+48)*/
if((x[jvj+48]!=0)) goto l37;
pile[v[22]]=1469; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(1469,jvj+47,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=1468; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(1468,jvj+47,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=610; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(610,jvj+47,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(609,jvj+47,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(515,jvj+47,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(510,jvj+47,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(218,jvj+47,jvj+49)*/
pile[v[22]]=158; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(158,jvj+47,jvj+50)*/
pile[v[22]]=447; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(447,jvj+47,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; 
(*f[1179])( );if(v[102]) goto l37;     /*TRDESSAIS0(jvj+51,jvj+52)*/
x[jvj+45]=x[jvj+52] ;z[jvj+45]=z[jvj+52];
pile[v[22]]=498; pile[WZ1]=jvj+45; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(498,jvj+45,jvj+53)*/
V94=x[jvj+53];
pile[v[22]]=20; pile[WZ1]=V94; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V94,0,V62)*/
V62=pile[WZ3]; 
V61=incon;
pile[v[22]]=163; pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(163,jvj+45,V66)*/
V66=pile[WZ2]; 
V=V66;
pile[v[22]]=V62; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V62,V,V61)*/
V61=pile[WZ2]; 
l38:pile[v[22]]=135; pile[WZ1]=V61; pile[WZ2]=jvj+50; 
(*f[42])( );     /*SRA1(135,V61,jvj+50,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V95,(-9813),V96)*/
V96=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V96; pile[WZ2]=jvj+49; 
(*f[42])( );     /*SRA1(135,V96,jvj+49,V97)*/
V97=pile[WZ3]; 
pile[WZ1]=V97; pile[WZ2]=642; 
(*f[42])( );     /*SRA1(135,V97,642,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=V98; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V98,58,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=V99; pile[WZ1]=V74; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V99,V74,41,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V73; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(41,V73,V100,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V102; pile[WZ2]=jvj+50; 
(*f[42])( );     /*SRA1(135,V102,jvj+50,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=V104; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V104,58,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=V105; pile[WZ1]=V71; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V105,V71,41,V106)*/
V106=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V70; pile[WZ2]=V106; 
(*f[39])( );     /*SDX0(41,V70,V106,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V108; pile[WZ2]=jvj+49; 
(*f[42])( );     /*SRA1(135,V108,jvj+49,V110)*/
V110=pile[WZ3]; 
pile[v[22]]=V110; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V110,58,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=V111; pile[WZ1]=V68; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V111,V68,41,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V67; pile[WZ2]=V112; 
(*f[39])( );     /*SDX0(41,V67,V112,V114)*/
V114=pile[WZ3]; 
pile[v[22]]=V114; 
(*f[40])( );     /*SLG0(V114)*/
l37:x[jvj+46]=t[x[jvj+46]];
goto l36;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+56]=t[x[jvj+56]];
l3:if((x[jvj+56]<=0)) goto l33;
x[jvj+10]=s[x[jvj+56]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+56];
pile[v[22]]=158; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,jvj+10,jvj+11)*/
if((x[jvj+11]!=x[jvj+27])) goto l4;
x[jvj+26]=0 ;z[jvj+26]=0;
pile[v[22]]=159; pile[WZ1]=jvj+17; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(159,jvj+17,jvj+25)*/
x[jvj+60]=x[jvj+25] ;z[jvj+60]=z[jvj+25];
l13:if((x[jvj+60]>0)) goto l14;
if((x[jvj+26]==0)) goto l33;
for(i=x[jvj+26],V29=0;i>0;i=t[i],V29++)  ;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=52; 
(*f[42])( );     /*SRA1(135,0,52,V85)*/
V85=pile[WZ3]; 
pile[WZ1]=V85; pile[WZ2]=jvj+27; 
(*f[42])( );     /*SRA1(135,V85,jvj+27,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V29; pile[WZ2]=V86; 
(*f[39])( );     /*SDX0(41,V29,V86,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=V87; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V87,(-4670),V7)*/
V7=pile[WZ2]; 
V6=incon;
if((V29>1)) goto l17;
V6=V7;
l34:pile[v[22]]=V6; 
(*f[40])( );     /*SLG0(V6)*/
pile[v[22]]=jvj+26; pile[WZ1]=0; pile[WZ2]=2; 
(*f[846])( );     /*SORENSPB0(jvj+26,0,2)*/
if((x[jvj+27]!=1335)) goto l33;
pile[v[22]]=jvj+27; pile[WZ1]=BL; pile[WZ2]=jvj+26; pile[WZ3]=NA; 
(*f[1684])( );     /*SORGEREDX0(jvj+27,BL,jvj+26,NA)*/
pile[v[22]]=NA; pile[WZ1]=642; pile[WZ2]=jvj+54; 
(*f[46])( );     /*TRI0(NA,642,jvj+54)*/
pile[v[22]]=117; pile[WZ1]=V29; pile[WZ2]=158; pile[WZ3]=jvj+27; pile[WZ4]=jvj+54; pile[WZ5]=jvj+28; 
(*f[725])( );     /*QUADRI14(117,V29,158,jvj+27,jvj+54,jvj+28)*/
pile[v[22]]=CM; pile[WZ1]=1481; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(CM,1481,jvj+28)*/
l33:x[jvj+44]=t[x[jvj+44]];
goto l31;
l6:x[jvj+57]=t[x[jvj+57]];
l5:if((x[jvj+57]<=0)) goto l10;
x[jvj+12]=s[x[jvj+57]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+57];
pile[v[22]]=498; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(498,jvj+12,jvj+16)*/
if((x[jvj+16]!=x[jvj+14])) goto l6;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+12,V18)*/
V18=pile[WZ2]; 
pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+13,V19)*/
V19=pile[WZ2]; 
if((V18!=V19)) goto l6;
l15:x[jvj+60]=t[x[jvj+60]];
goto l13;
l10:if((x[jvj+27]!=876)) goto l16;
pile[v[22]]=763; pile[WZ1]=jvj+8; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(763,jvj+8,jvj+23)*/
x[jvj+59]=x[jvj+23] ;z[jvj+59]=z[jvj+23];
l11:if((x[jvj+59]<=0)) goto l16;
x[jvj+19]=s[x[jvj+59]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+59];
pile[v[22]]=158; pile[WZ1]=jvj+19; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(158,jvj+19,jvj+24)*/
if((x[jvj+24]!=1335)) goto l12;
pile[v[22]]=498; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(498,jvj+13,jvj+18)*/
pile[v[22]]=163; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+17,V26)*/
V26=pile[WZ2]; 
pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+13,V27)*/
V27=pile[WZ2]; 
if((V26!=V27)) goto l12;
l7:pile[v[22]]=159; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(159,jvj+19,jvj+20)*/
x[jvj+58]=x[jvj+20] ;z[jvj+58]=z[jvj+20];
l8:if((x[jvj+58]<=0)) goto l12;
x[jvj+21]=s[x[jvj+58]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+58];
pile[v[22]]=498; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(498,jvj+21,jvj+22)*/
if((x[jvj+22]==x[jvj+18])) goto l15;
l9:x[jvj+58]=t[x[jvj+58]];
goto l8;
l12:x[jvj+59]=t[x[jvj+59]];
goto l11;
l14:x[jvj+13]=s[x[jvj+60]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+60];
pile[v[22]]=498; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(498,jvj+13,jvj+14)*/
pile[v[22]]=159; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(159,jvj+10,jvj+15)*/
x[jvj+57]=x[jvj+15] ;z[jvj+57]=z[jvj+15];
goto l5;
l16:pile[v[22]]=jvj+26; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+26,jvj+13)*/
goto l15;
l17:pile[v[22]]=V7; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V7,83,V6)*/
V6=pile[WZ2]; 
goto l34;
l19:x[jvj+61]=t[x[jvj+61]];
l18:if((x[jvj+61]<=0)) goto l29;
x[jvj+31]=s[x[jvj+61]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+61];
pile[v[22]]=158; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(158,jvj+31,jvj+32)*/
if((x[jvj+32]!=x[jvj+43])) goto l19;
x[jvj+40]=0 ;z[jvj+40]=0;
pile[v[22]]=159; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(159,jvj+38,jvj+39)*/
x[jvj+63]=x[jvj+39] ;z[jvj+63]=z[jvj+39];
l22:if((x[jvj+63]>0)) goto l23;
if((x[jvj+40]==0)) goto l29;
for(i=x[jvj+40],V56=0;i>0;i=t[i],V56++)  ;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+43; 
(*f[42])( );     /*SRA1(135,0,jvj+43,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V56; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(41,V56,V90,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=V91; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V91,(-4670),V42)*/
V42=pile[WZ2]; 
V41=incon;
if((V56>1)) goto l26;
V41=V42;
l30:pile[v[22]]=V41; 
(*f[40])( );     /*SLG0(V41)*/
pile[v[22]]=jvj+40; pile[WZ1]=0; pile[WZ2]=2; 
(*f[846])( );     /*SORENSPB0(jvj+40,0,2)*/
pile[v[22]]=1005; pile[WZ1]=BL; pile[WZ2]=jvj+40; pile[WZ3]=NA; 
(*f[1684])( );     /*SORGEREDX0(1005,BL,jvj+40,NA)*/
pile[v[22]]=NA; pile[WZ1]=642; pile[WZ2]=jvj+55; 
(*f[46])( );     /*TRI0(NA,642,jvj+55)*/
pile[v[22]]=117; pile[WZ1]=V56; pile[WZ2]=158; pile[WZ3]=1005; pile[WZ4]=jvj+55; pile[WZ5]=jvj+41; 
(*f[725])( );     /*QUADRI14(117,V56,158,1005,jvj+55,jvj+41)*/
pile[v[22]]=CM; pile[WZ1]=1481; pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(CM,1481,jvj+41)*/
l29:x[jvj+42]=t[x[jvj+42]];
goto l27;
l21:x[jvj+62]=t[x[jvj+62]];
l20:if((x[jvj+62]<=0)) goto l25;
x[jvj+33]=s[x[jvj+62]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+62];
pile[v[22]]=498; pile[WZ1]=jvj+33; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(498,jvj+33,jvj+37)*/
if((x[jvj+37]!=x[jvj+35])) goto l21;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(163,jvj+33,V53)*/
V53=pile[WZ2]; 
pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(163,jvj+34,V54)*/
V54=pile[WZ2]; 
if((V53!=V54)) goto l21;
l24:x[jvj+63]=t[x[jvj+63]];
goto l22;
l23:x[jvj+34]=s[x[jvj+63]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+63];
pile[v[22]]=498; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(498,jvj+34,jvj+35)*/
pile[v[22]]=159; pile[WZ1]=jvj+31; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(159,jvj+31,jvj+36)*/
x[jvj+62]=x[jvj+36] ;z[jvj+62]=z[jvj+36];
goto l20;
l25:pile[v[22]]=jvj+40; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+34)*/
goto l24;
l26:pile[v[22]]=V42; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V42,83,V41)*/
V41=pile[WZ2]; 
goto l30;
l28:x[jvj+38]=s[x[jvj+42]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+42];
pile[v[22]]=158; pile[WZ1]=jvj+38; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(158,jvj+38,jvj+43)*/
if((x[jvj+43]!=1005)) goto l29;
pile[v[22]]=763; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(763,jvj+29,jvj+30)*/
x[jvj+61]=x[jvj+30] ;z[jvj+61]=z[jvj+30];
goto l18;
l32:x[jvj+17]=s[x[jvj+44]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+44];
pile[v[22]]=158; pile[WZ1]=jvj+17; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(158,jvj+17,jvj+27)*/
if(x[jvj+27]!=1335&&x[jvj+27]!=876) goto l33;
pile[v[22]]=763; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(763,jvj+8,jvj+9)*/
x[jvj+56]=x[jvj+9] ;z[jvj+56]=z[jvj+9];
goto l3;
l35:V61=V62;
goto l38;
l39:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
}
