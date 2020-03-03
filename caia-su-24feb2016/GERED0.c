#include "dx.h"
void GERED0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0,V73=0,V75=0,V71=0,V72=0,V74=0,V20=0,V22=0,V16=0,V15=0,V36=0,V34=0,V30=0,V29=0,V47=0,V48=0,V56=0,V57=0,V65=0,V66=0;
int NA,NB;
int RW;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=78;
x[jvj+1]=11656;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1181&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NA=pile[v[22]]; NB=pile[v[22]+1]; RW=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=x[jvj+8]=x[jvj+13]=incon;
pile[v[22]]=NA; pile[WZ1]=642; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(NA,642,jvj+12)*/
pile[v[22]]=NB; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(NB,642,jvj+14)*/
pile[v[22]]=447; pile[WZ1]=jvj+12; pile[WZ2]=459; pile[WZ3]=jvj+14; pile[WZ4]=RW; 
(*f[181])( );     /*QUADRI2(447,jvj+12,459,jvj+14,RW)*/
pile[v[22]]=1567; pile[WZ1]=1576; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1567,1576,jvj+5)*/
x[jvj+69]=x[jvj+5] ;z[jvj+69]=z[jvj+5];
l5:if((x[jvj+69]<=0)) goto l7;
x[jvj+6]=s[x[jvj+69]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+69];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+6,V2)*/
V2=pile[WZ2]; 
if((V2!=NA)) goto l6;
x[jvj+10]=x[jvj+6] ;z[jvj+10]=z[jvj+6];
l7:if((x[jvj+5]<=0)) goto l9;
x[jvj+7]=s[x[jvj+5]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+5];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+7,V5)*/
V5=pile[WZ2]; 
if((V5!=NB)) goto l8;
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
l9:if(x[jvj+10]!=incon) goto l10;
l1:x[jvj+64]=incon;
pile[v[22]]=1579; pile[WZ1]=RW; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1579,RW,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
pile[v[22]]=547; pile[WZ1]=218; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(547,218,jvj+64)*/
l17:x[jvj+20]=x[jvj+64] ;z[jvj+20]=z[jvj+64];
pile[v[22]]=RW; pile[WZ1]=1579; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(RW,1579,jvj+20)*/
if(x[jvj+13]!=incon) goto l18;
l50:if(x[jvj+10]!=incon) goto l51;
l52:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+3,jvj+4)*/
if((x[jvj+4]!=547)) goto l4;
x[jvj+64]=x[jvj+3] ;z[jvj+64]=z[jvj+3];
goto l17;
l4:x[jvj+2]=t[x[jvj+2]];
goto l2;
l6:x[jvj+69]=t[x[jvj+69]];
goto l5;
l8:x[jvj+5]=t[x[jvj+5]];
goto l7;
l10:if(x[jvj+8]!=incon) goto l11;
goto l1;
l11:pile[v[22]]=1202; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1202,jvj+8,jvj+9)*/
pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1202,jvj+10,jvj+11)*/
if((x[jvj+11]==x[jvj+9])) goto l12;
V73=x[jvj+11];
V75=x[jvj+9];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=125; 
(*f[42])( );     /*SRA1(135,0,125,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V73; pile[WZ2]=V71; 
(*f[39])( );     /*SDX0(20,V73,V71,V72)*/
V72=pile[WZ3]; 
pile[WZ1]=V75; pile[WZ2]=V72; 
(*f[39])( );     /*SDX0(20,V75,V72,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; 
(*f[40])( );     /*SLG0(V74)*/
goto l1;
l12:x[jvj+13]=x[jvj+11] ;z[jvj+13]=z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=NA; pile[WZ2]=NB; pile[WZ3]=jvj+10; pile[WZ4]=jvj+8; pile[WZ5]=jvj+13; pile[v[22]+6]=jvj+14; 
(*f[1468])( );     /*GEREDX0(jvj+12,NA,NB,jvj+10,jvj+8,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=NB; pile[WZ2]=NA; pile[WZ3]=jvj+8; pile[WZ4]=jvj+10; pile[v[22]+6]=jvj+12; 
(*f[1468])( );     /*GEREDX0(jvj+14,NB,NA,jvj+8,jvj+10,jvj+13,jvj+12)*/
goto l1;
l14:x[jvj+70]=t[x[jvj+70]];
l13:if((x[jvj+70]<=0)) goto l22;
x[jvj+17]=s[x[jvj+70]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+70];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(642,jvj+17,V20)*/
V20=pile[WZ2]; 
if((V20!=NA)) goto l14;
pile[v[22]]=1543; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1543,jvj+15,jvj+18)*/
x[jvj+71]=x[jvj+18] ;z[jvj+71]=z[jvj+18];
l15:if((x[jvj+71]<=0)) goto l22;
x[jvj+19]=s[x[jvj+71]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+71];
pile[v[22]]=642; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+19,V22)*/
V22=pile[WZ2]; 
if((V22!=NB)) goto l16;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+25; 
(*f[1179])( );if(v[102]) goto l22;     /*TRDESSAIS0(jvj+15,jvj+25)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+19; pile[WZ2]=jvj+12; pile[WZ3]=jvj+14; pile[WZ4]=RW; pile[WZ5]=jvj+25; 
(*f[1469])( );     /*GEREDA0(jvj+17,jvj+19,jvj+12,jvj+14,RW,jvj+25)*/
l22:x[jvj+72]=t[x[jvj+72]];
l21:if((x[jvj+72]<=0)) goto l20;
x[jvj+15]=s[x[jvj+72]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+72];
pile[v[22]]=1543; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1543,jvj+15,jvj+16)*/
x[jvj+70]=x[jvj+16] ;z[jvj+70]=z[jvj+16];
goto l13;
l16:x[jvj+71]=t[x[jvj+71]];
goto l15;
l18:pile[v[22]]=905; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(905,jvj+13,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(457,324,jvj+21)*/
l19:if((x[jvj+21]<=0)) goto l23;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=905; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(905,jvj+22,V15)*/
V15=pile[WZ2]; 
if((V15!=V16)) goto l20;
pile[v[22]]=983; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(983,jvj+22,jvj+23)*/
pile[v[22]]=878; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(878,jvj+23,jvj+24)*/
x[jvj+72]=x[jvj+24] ;z[jvj+72]=z[jvj+24];
goto l21;
l20:x[jvj+21]=t[x[jvj+21]];
goto l19;
l23:x[jvj+35]=0 ;z[jvj+35]=0;
pile[v[22]]=905; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l53;     /*FNDC1(905,jvj+13,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(457,324,jvj+30)*/
l28:if((x[jvj+30]<=0)) goto l53;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=905; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(905,jvj+31,V29)*/
V29=pile[WZ2]; 
if((V29!=V30)) goto l29;
pile[v[22]]=983; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(983,jvj+31,jvj+32)*/
pile[v[22]]=878; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(878,jvj+32,jvj+33)*/
x[jvj+75]=x[jvj+33] ;z[jvj+75]=z[jvj+33];
l30:if((x[jvj+75]<=0)) goto l29;
x[jvj+27]=s[x[jvj+75]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+75];
pile[v[22]]=1543; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(1543,jvj+27,jvj+28)*/
x[jvj+73]=x[jvj+28] ;z[jvj+73]=z[jvj+28];
l24:if((x[jvj+73]<=0)) goto l31;
x[jvj+26]=s[x[jvj+73]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+73];
pile[v[22]]=642; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(642,jvj+26,V36)*/
V36=pile[WZ2]; 
if((V36!=NB)) goto l25;
x[jvj+74]=x[jvj+28] ;z[jvj+74]=z[jvj+28];
l26:if((x[jvj+74]<=0)) goto l31;
x[jvj+29]=s[x[jvj+74]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+74];
pile[v[22]]=642; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(642,jvj+29,V34)*/
V34=pile[WZ2]; 
if((V34!=NA)) goto l27;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+34; 
(*f[1179])( );if(v[102]) goto l31;     /*TRDESSAIS0(jvj+27,jvj+34)*/
pile[v[22]]=jvj+35; 
(*f[68])( );     /*PLUE0(jvj+35,jvj+34)*/
l31:x[jvj+75]=t[x[jvj+75]];
goto l30;
l25:x[jvj+73]=t[x[jvj+73]];
goto l24;
l27:x[jvj+74]=t[x[jvj+74]];
goto l26;
l29:x[jvj+30]=t[x[jvj+30]];
goto l28;
l32:x[jvj+43]=0 ;z[jvj+43]=0;
pile[v[22]]=297; pile[WZ1]=1005; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(297,1005,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+10; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(jvj+39,jvj+10,jvj+42)*/
l35:if((x[jvj+42]<=0)) goto l38;
x[jvj+36]=s[x[jvj+42]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+42];
pile[v[22]]=498; pile[WZ1]=jvj+36; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(498,jvj+36,jvj+38)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+8; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(jvj+39,jvj+8,jvj+40)*/
x[jvj+76]=x[jvj+40] ;z[jvj+76]=z[jvj+40];
l33:if((x[jvj+76]<=0)) goto l36;
x[jvj+37]=s[x[jvj+76]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+76];
pile[v[22]]=498; pile[WZ1]=jvj+37; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(498,jvj+37,jvj+41)*/
if((x[jvj+38]!=x[jvj+41])) goto l34;
pile[v[22]]=163; pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(163,jvj+36,V47)*/
V47=pile[WZ2]; 
pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(163,jvj+37,V48)*/
V48=pile[WZ2]; 
if((V47!=V48)) goto l34;
l37:pile[v[22]]=jvj+43; pile[WZ1]=jvj+36; 
(*f[68])( );     /*PLUE0(jvj+43,jvj+36)*/
l36:x[jvj+42]=t[x[jvj+42]];
goto l35;
l34:x[jvj+76]=t[x[jvj+76]];
goto l33;
l38:x[jvj+51]=0 ;z[jvj+51]=0;
pile[v[22]]=297; pile[WZ1]=876; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(297,876,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+10; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(jvj+47,jvj+10,jvj+50)*/
l41:if((x[jvj+50]<=0)) goto l44;
x[jvj+44]=s[x[jvj+50]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+50];
pile[v[22]]=498; pile[WZ1]=jvj+44; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(498,jvj+44,jvj+46)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+8; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(jvj+47,jvj+8,jvj+48)*/
x[jvj+77]=x[jvj+48] ;z[jvj+77]=z[jvj+48];
l39:if((x[jvj+77]<=0)) goto l42;
x[jvj+45]=s[x[jvj+77]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+77];
pile[v[22]]=498; pile[WZ1]=jvj+45; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(498,jvj+45,jvj+49)*/
if((x[jvj+46]!=x[jvj+49])) goto l40;
pile[v[22]]=163; pile[WZ1]=jvj+44; 
(*f[44])( );if(v[102]) goto l43;     /*FNDC1(163,jvj+44,V56)*/
V56=pile[WZ2]; 
pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l43;     /*FNDC1(163,jvj+45,V57)*/
V57=pile[WZ2]; 
if((V56!=V57)) goto l40;
l43:pile[v[22]]=jvj+51; pile[WZ1]=jvj+44; 
(*f[68])( );     /*PLUE0(jvj+51,jvj+44)*/
l42:x[jvj+50]=t[x[jvj+50]];
goto l41;
l40:x[jvj+77]=t[x[jvj+77]];
goto l39;
l44:x[jvj+59]=0 ;z[jvj+59]=0;
pile[v[22]]=297; pile[WZ1]=1335; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(297,1335,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+10; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(jvj+55,jvj+10,jvj+58)*/
l47:if((x[jvj+58]<=0)) goto l54;
x[jvj+52]=s[x[jvj+58]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+58];
pile[v[22]]=498; pile[WZ1]=jvj+52; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(498,jvj+52,jvj+54)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+8; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(jvj+55,jvj+8,jvj+56)*/
x[jvj+78]=x[jvj+56] ;z[jvj+78]=z[jvj+56];
l45:if((x[jvj+78]<=0)) goto l48;
x[jvj+53]=s[x[jvj+78]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+78];
pile[v[22]]=498; pile[WZ1]=jvj+53; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(498,jvj+53,jvj+57)*/
if((x[jvj+54]!=x[jvj+57])) goto l46;
pile[v[22]]=163; pile[WZ1]=jvj+52; 
(*f[44])( );if(v[102]) goto l49;     /*FNDC1(163,jvj+52,V65)*/
V65=pile[WZ2]; 
pile[WZ1]=jvj+53; 
(*f[44])( );if(v[102]) goto l49;     /*FNDC1(163,jvj+53,V66)*/
V66=pile[WZ2]; 
if((V65!=V66)) goto l46;
l49:pile[v[22]]=jvj+59; pile[WZ1]=jvj+52; 
(*f[68])( );     /*PLUE0(jvj+59,jvj+52)*/
l48:x[jvj+58]=t[x[jvj+58]];
goto l47;
l46:x[jvj+78]=t[x[jvj+78]];
goto l45;
l51:if(x[jvj+8]!=incon) goto l32;
goto l52;
l53:pile[v[22]]=jvj+35; pile[WZ1]=159; pile[WZ2]=jvj+65; 
(*f[300])( );     /*TRI10(jvj+35,159,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=1452; pile[WZ2]=158; pile[WZ3]=jvj+60; 
(*f[58])( );     /*TRI3(jvj+65,1452,158,jvj+60)*/
pile[v[22]]=jvj+20; pile[WZ1]=763; pile[WZ2]=jvj+60; 
(*f[36])( );     /*PLUSC0(jvj+20,763,jvj+60)*/
goto l50;
l54:pile[v[22]]=jvj+43; pile[WZ1]=159; pile[WZ2]=jvj+66; 
(*f[300])( );     /*TRI10(jvj+43,159,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=1005; pile[WZ2]=158; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+66,1005,158,jvj+61)*/
pile[v[22]]=jvj+20; pile[WZ1]=763; pile[WZ2]=jvj+61; 
(*f[36])( );     /*PLUSC0(jvj+20,763,jvj+61)*/
pile[v[22]]=jvj+51; pile[WZ1]=159; pile[WZ2]=jvj+67; 
(*f[300])( );     /*TRI10(jvj+51,159,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=876; pile[WZ2]=158; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+67,876,158,jvj+62)*/
pile[v[22]]=jvj+20; pile[WZ1]=763; pile[WZ2]=jvj+62; 
(*f[36])( );     /*PLUSC0(jvj+20,763,jvj+62)*/
pile[v[22]]=jvj+59; pile[WZ1]=159; pile[WZ2]=jvj+68; 
(*f[300])( );     /*TRI10(jvj+59,159,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=1335; pile[WZ2]=158; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+68,1335,158,jvj+63)*/
pile[v[22]]=jvj+20; pile[WZ1]=763; pile[WZ2]=jvj+63; 
(*f[36])( );     /*PLUSC0(jvj+20,763,jvj+63)*/
goto l52;
}
