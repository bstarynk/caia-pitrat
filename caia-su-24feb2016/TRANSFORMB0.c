#include "dx.h"
void TRANSFORMB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V64=0,V65=0,V55=0,V49=0,V50=0,V51=0,V54=0,V73=0,V62=0,V78=0,V79=0,V81=0,V58=0,V74=0,V75=0,V77=0,V46=0,V45=0,V66=0,V68=0,V107=0,V108=0,V98=0,V92=0,V93=0,V94=0,V97=0,V116=0,V105=0,V121=0,V122=0,V124=0,V101=0,V117=0,V118=0,V120=0,V89=0,V88=0,V109=0,V111=0,V133=0,V132=0,V175=0,V176=0,V150=0,V151=0,V152=0,V153=0,V154=0,V155=0,V156=0,V157=0,V158=0,V181=0,V182=0,V159=0,V174=0,V173=0,V172=0,V170=0,V130=0,V161=0,V131=0,V160=0,V168=0,V169=0,V167=0,V166=0,V164=0,V165=0,V163=0,V140=0;
int A,B,NK,S,E;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=11039;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==909&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; NK=pile[v[22]+2]; S=pile[v[22]+3]; E=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(250,158,jvj+8)*/
pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[1214])( );     /*ANASTRUCT0(A,jvj+2)*/
if((v[147]<=7)) goto l1;
V64=x[A];
pile[v[22]]=20; pile[WZ1]=V64; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V64,0,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
pile[v[22]]=256; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(256,jvj+2,jvj+9)*/
l7:if((x[jvj+9]>0)) goto l21;
pile[v[22]]=763; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(763,jvj+2,jvj+10)*/
l8:if((x[jvj+10]>0)) goto l19;
pile[v[22]]=159; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(159,jvj+2,jvj+11)*/
l9:if((x[jvj+11]>0)) goto l17;
pile[v[22]]=258; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(258,jvj+2,jvj+12)*/
l10:if((x[jvj+12]>0)) goto l11;
l1:pile[v[22]]=B; pile[WZ1]=jvj+3; 
(*f[1214])( );     /*ANASTRUCT0(B,jvj+3)*/
if((v[147]<=7)) goto l4;
V107=x[B];
pile[v[22]]=20; pile[WZ1]=V107; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V107,0,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=V108; 
(*f[40])( );     /*SLG0(V108)*/
pile[v[22]]=256; pile[WZ1]=jvj+3; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(256,jvj+3,jvj+21)*/
l23:if((x[jvj+21]>0)) goto l37;
pile[v[22]]=763; pile[WZ1]=jvj+3; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(763,jvj+3,jvj+22)*/
l24:if((x[jvj+22]>0)) goto l35;
pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+23)*/
l25:if((x[jvj+23]>0)) goto l33;
pile[v[22]]=258; pile[WZ1]=jvj+3; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(258,jvj+3,jvj+24)*/
l26:if((x[jvj+24]>0)) goto l27;
l4:x[jvj+4]=d[143];z[jvj+4]=0;
l2:if((x[jvj+4]>0)) goto l3;
V4=v[147]%2;
if((V4!=1)) goto l5;
if((v[147]==1)) goto l53;
if((v[147]!=3)) goto l5;
V133=1;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(0,117,jvj+33)*/
x[jvj+34]=d[145];z[jvj+34]=0;
l39:if((x[jvj+34]>0)) goto l54;
pile[v[22]]=117; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+33,V132)*/
V132=pile[WZ2]; 
if((V133==V132)) goto l53;
l5:if((S!=(-5302))) goto l6;
pile[v[22]]=jvj+8; pile[WZ1]=A; pile[WZ2]=B; pile[WZ3]=E; pile[WZ4]=NK; 
(*f[1218])( );     /*NOUVSIMP0(jvj+8,A,B,E,NK)*/
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l3:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(jvj+5,jvj+2,jvj+6)*/
pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+5,jvj+3,jvj+7)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+6; 
(*f[1216])( );     /*TRANSFORMC0(jvj+8,jvj+6,jvj+7)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l11:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=510; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(510,jvj+13,V55)*/
V55=pile[WZ2]; 
V51=incon;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+13,V49)*/
V49=pile[WZ2]; 
V50=V49;
pile[v[22]]=41; pile[WZ1]=V50; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V50,0,V51)*/
V51=pile[WZ3]; 
l12:V54=incon;
pile[v[22]]=176; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(176,jvj+13,jvj+14)*/
x[jvj+15]=x[jvj+14] ;z[jvj+15]=z[jvj+14];
pile[v[22]]=135; pile[WZ1]=V51; pile[WZ2]=jvj+15; 
(*f[42])( );     /*SRA1(135,V51,jvj+15,V54)*/
V54=pile[WZ3]; 
l13:pile[v[22]]=41; pile[WZ1]=V55; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(41,V55,V54,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; 
(*f[40])( );     /*SLG0(V73)*/
l14:x[jvj+12]=t[x[jvj+12]];
goto l10;
l15:V54=V51;
goto l13;
l16:V51=0;
goto l12;
l17:x[jvj+16]=s[x[jvj+11]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+11];
pile[v[22]]=510; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(510,jvj+16,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=176; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(176,jvj+16,jvj+17)*/
V78=x[jvj+17];
pile[v[22]]=20; pile[WZ1]=V78; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V78,0,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V62; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(41,V62,V79,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=V81; 
(*f[40])( );     /*SLG0(V81)*/
l18:x[jvj+11]=t[x[jvj+11]];
goto l9;
l19:x[jvj+18]=s[x[jvj+10]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+10];
pile[v[22]]=510; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(510,jvj+18,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=176; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(176,jvj+18,jvj+19)*/
V74=x[jvj+19];
pile[v[22]]=20; pile[WZ1]=V74; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V74,0,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V58; pile[WZ2]=V75; 
(*f[39])( );     /*SDX0(41,V58,V75,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; 
(*f[40])( );     /*SLG0(V77)*/
l20:x[jvj+10]=t[x[jvj+10]];
goto l8;
l21:x[jvj+20]=s[x[jvj+9]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+9];
pile[v[22]]=241; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(241,jvj+20,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(510,jvj+20,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V46; 
(*f[37])( );     /*SRA0(0,V46,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V45; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(41,V45,V66,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=V68; 
(*f[40])( );     /*SLG0(V68)*/
l22:x[jvj+9]=t[x[jvj+9]];
goto l7;
l27:x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=510; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(510,jvj+25,V98)*/
V98=pile[WZ2]; 
V94=incon;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(117,jvj+25,V92)*/
V92=pile[WZ2]; 
V93=V92;
pile[v[22]]=41; pile[WZ1]=V93; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V93,0,V94)*/
V94=pile[WZ3]; 
l28:V97=incon;
pile[v[22]]=176; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(176,jvj+25,jvj+26)*/
x[jvj+27]=x[jvj+26] ;z[jvj+27]=z[jvj+26];
pile[v[22]]=135; pile[WZ1]=V94; pile[WZ2]=jvj+27; 
(*f[42])( );     /*SRA1(135,V94,jvj+27,V97)*/
V97=pile[WZ3]; 
l29:pile[v[22]]=41; pile[WZ1]=V98; pile[WZ2]=V97; 
(*f[39])( );     /*SDX0(41,V98,V97,V116)*/
V116=pile[WZ3]; 
pile[v[22]]=V116; 
(*f[40])( );     /*SLG0(V116)*/
l30:x[jvj+24]=t[x[jvj+24]];
goto l26;
l31:V97=V94;
goto l29;
l32:V94=0;
goto l28;
l33:x[jvj+28]=s[x[jvj+23]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+23];
pile[v[22]]=510; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(510,jvj+28,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=176; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(176,jvj+28,jvj+29)*/
V121=x[jvj+29];
pile[v[22]]=20; pile[WZ1]=V121; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V121,0,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V105; pile[WZ2]=V122; 
(*f[39])( );     /*SDX0(41,V105,V122,V124)*/
V124=pile[WZ3]; 
pile[v[22]]=V124; 
(*f[40])( );     /*SLG0(V124)*/
l34:x[jvj+23]=t[x[jvj+23]];
goto l25;
l35:x[jvj+30]=s[x[jvj+22]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+22];
pile[v[22]]=510; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(510,jvj+30,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=176; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(176,jvj+30,jvj+31)*/
V117=x[jvj+31];
pile[v[22]]=20; pile[WZ1]=V117; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V117,0,V118)*/
V118=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V101; pile[WZ2]=V118; 
(*f[39])( );     /*SDX0(41,V101,V118,V120)*/
V120=pile[WZ3]; 
pile[v[22]]=V120; 
(*f[40])( );     /*SLG0(V120)*/
l36:x[jvj+22]=t[x[jvj+22]];
goto l24;
l37:x[jvj+32]=s[x[jvj+21]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+21];
pile[v[22]]=241; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(241,jvj+32,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(510,jvj+32,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V89; 
(*f[37])( );     /*SRA0(0,V89,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V88; pile[WZ2]=V109; 
(*f[39])( );     /*SDX0(41,V88,V109,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=V111; 
(*f[40])( );     /*SLG0(V111)*/
l38:x[jvj+21]=t[x[jvj+21]];
goto l23;
l46:V159=V156;
l45:pile[v[22]]=V159; 
(*f[40])( );     /*SLG0(V159)*/
x[jvj+47]=t[x[jvj+47]];
l41:if((x[jvj+47]<=0)) goto l50;
x[jvj+39]=s[x[jvj+47]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+47];
V150=incon;
pile[v[22]]=176; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(176,jvj+39,jvj+40)*/
x[jvj+41]=x[jvj+40] ;z[jvj+41]=z[jvj+40];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+41; 
(*f[42])( );     /*SRA1(135,0,jvj+41,V150)*/
V150=pile[WZ3]; 
l42:V153=incon;
pile[v[22]]=241; pile[WZ1]=jvj+39; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(241,jvj+39,V151)*/
V151=pile[WZ2]; 
V152=V151;
pile[v[22]]=V150; pile[WZ1]=V152; 
(*f[37])( );     /*SRA0(V150,V152,V153)*/
V153=pile[WZ2]; 
l43:V156=incon;
pile[v[22]]=117; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(117,jvj+39,V154)*/
V154=pile[WZ2]; 
V155=V154;
pile[v[22]]=41; pile[WZ1]=V155; pile[WZ2]=V153; 
(*f[39])( );     /*SDX0(41,V155,V153,V156)*/
V156=pile[WZ3]; 
l44:V159=incon;
pile[v[22]]=1408; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(1408,jvj+39,V157)*/
V157=pile[WZ2]; 
V158=V157;
pile[v[22]]=135; pile[WZ1]=V156; pile[WZ2]=1408; 
(*f[42])( );     /*SRA1(135,V156,1408,V181)*/
V181=pile[WZ3]; 
pile[v[22]]=V181; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V181,58,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V158; pile[WZ2]=V182; 
(*f[39])( );     /*SDX0(41,V158,V182,V159)*/
V159=pile[WZ3]; 
goto l45;
l47:V156=V153;
goto l44;
l48:V153=V150;
goto l43;
l49:V150=0;
goto l42;
l50:x[jvj+42]=t[x[jvj+42]];
l40:if((x[jvj+42]<=0)) goto l5;
x[jvj+35]=s[x[jvj+42]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+42];
pile[v[22]]=218; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(218,jvj+35,jvj+36)*/
x[jvj+37]=x[jvj+36] ;z[jvj+37]=z[jvj+36];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+8; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(jvj+37,jvj+8,jvj+38)*/
x[jvj+47]=x[jvj+38] ;z[jvj+47]=z[jvj+38];
if((x[jvj+47]==0)) goto l50;
pile[v[22]]=0; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(0,42,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V175; pile[WZ2]=jvj+35; 
(*f[98])( );     /*SRA3(135,V175,jvj+35,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=V176; 
(*f[40])( );     /*SLG0(V176)*/
goto l41;
l52:V161=x[E];
pile[v[22]]=V131; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V131,(-9813),V160)*/
V160=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V161; pile[WZ2]=V160; 
(*f[39])( );     /*SDX0(23,V161,V160,V130)*/
V130=pile[WZ3]; 
l51:pile[v[22]]=V130; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V130,(-740),V170)*/
V170=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NK; pile[WZ2]=V170; 
(*f[39])( );     /*SDX0(41,NK,V170,V172)*/
V172=pile[WZ3]; 
pile[v[22]]=V172; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V172,(-1318),V173)*/
V173=pile[WZ2]; 
pile[v[22]]=V173; pile[WZ1]=S; 
(*f[37])( );     /*SRA0(V173,S,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=V174; 
(*f[40])( );     /*SLG0(V174)*/
x[jvj+42]=d[144];z[jvj+42]=0;
goto l40;
l53:V165=x[A];
V169=x[B];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=966; 
(*f[42])( );     /*SRA1(135,0,966,V163)*/
V163=pile[WZ3]; 
pile[v[22]]=V163; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V163,(-9543),V164)*/
V164=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V165; pile[WZ2]=V164; 
(*f[39])( );     /*SDX0(20,V165,V164,V166)*/
V166=pile[WZ3]; 
pile[v[22]]=V166; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V166,61,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=V167; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V167,62,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V169; pile[WZ2]=V168; 
(*f[39])( );     /*SDX0(20,V169,V168,V131)*/
V131=pile[WZ3]; 
V130=incon;
if((x[E]!=0)) goto l52;
V130=V131;
goto l51;
l54:x[jvj+43]=s[x[jvj+34]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+34];
pile[v[22]]=218; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(218,jvj+43,jvj+44)*/
x[jvj+45]=x[jvj+44] ;z[jvj+45]=z[jvj+44];
pile[v[22]]=jvj+45; pile[WZ1]=jvj+8; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(jvj+45,jvj+8,jvj+46)*/
for(i=x[jvj+46],V140=0;i>0;i=t[i],V140++)  ;
pile[v[22]]=jvj+33; pile[WZ1]=117; pile[WZ2]=V140; 
(*f[186])( );     /*BTC0(jvj+33,117,V140)*/
l55:x[jvj+34]=t[x[jvj+34]];
goto l39;
}
