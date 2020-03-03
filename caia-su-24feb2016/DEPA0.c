#include "dx.h"
void DEPA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,V14=0,V24=0,V17=0,V10=0,V23=0,V2=0,V4=0,V3=0,I=0,V36=0,V44=0,L=0,V65=0,V56=0,V47=0,V64=0,V98=0,V67=0;
int X,E,G;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=80;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; E=pile[v[22]+1]; G=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,X,jvj+10)*/
if((x[jvj+10]!=484)) goto l6;
pile[v[22]]=238; pile[WZ1]=G; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(238,G,J)*/
J=pile[WZ2]; 
x[jvj+50]=x[X] ;z[jvj+50]=z[X];
l5:x[RES]=135 ;z[RES]=135;
x[jvj+61]=incon;
x[jvj+79]=x[E] ;z[jvj+79]=z[E];
l39:if((x[jvj+79]>0)) goto l40;
pile[v[22]]=447; pile[WZ1]=jvj+50; pile[WZ2]=515; pile[WZ3]=0; pile[WZ4]=jvj+61; 
(*f[192])( );     /*QUADRI4(447,jvj+50,515,0,jvj+61)*/
l52:pile[v[22]]=E; pile[WZ1]=jvj+61; 
(*f[68])( );     /*PLUE0(E,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=515; pile[WZ2]=J; 
(*f[186])( );     /*BTC0(jvj+61,515,J)*/
l54:v[0]=jvj; v[22]-=4; return;
l3:x[jvj+5]=s[x[jvj+68]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+68];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+67)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+67; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+67,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+4)*/
pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+6)*/
pile[v[22]]=129; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1157])( );if(v[102]) goto l4;     /*NORME1(129,jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+8)*/
l4:x[jvj+68]=t[x[jvj+68]];
l2:if((x[jvj+68]>0)) goto l3;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+44; 
(*f[299])( );     /*COPEL0(jvj+9,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+44; pile[WZ2]=107; pile[WZ3]=jvj+65; 
(*f[301])( );     /*TRI11(jvj+64,jvj+44,107,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+65,22,100,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=E; pile[WZ2]=G; pile[WZ3]=jvj+46; 
(*f[4022])( );     /*DEPA0(jvj+45,E,G,jvj+46)*/
if((x[jvj+46]==135)) goto l14;
l35:x[jvj+77]=t[x[jvj+77]];
l34:if((x[jvj+77]<=0)) goto l33;
x[jvj+40]=s[x[jvj+77]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+77];
if((x[jvj+38]==x[jvj+40])) goto l35;
pile[v[22]]=111; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+40,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=485)) goto l35;
pile[v[22]]=107; pile[WZ1]=jvj+40; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(107,jvj+40,jvj+43)*/
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
x[jvj+68]=x[jvj+43] ;z[jvj+68]=z[jvj+43];
goto l2;
l6:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,X,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=486)) goto l11;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,X,jvj+13)*/
for(i=x[jvj+13],V14=0;i>0;i=t[i],V14++)  ;
if((V14!=2)) goto l11;
pile[v[22]]=238; pile[WZ1]=G; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(238,G,V24)*/
V24=pile[WZ2]; 
x[jvj+69]=x[jvj+13] ;z[jvj+69]=z[jvj+13];
l7:if((x[jvj+69]<=0)) goto l11;
x[jvj+14]=s[x[jvj+69]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+69];
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+14,V17)*/
V17=pile[WZ2]; 
V10=V17;
V23=V24*V10;
x[jvj+70]=x[jvj+13] ;z[jvj+70]=z[jvj+13];
l9:if((x[jvj+70]<=0)) goto l8;
x[jvj+15]=s[x[jvj+70]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+70];
if((x[jvj+14]==x[jvj+15])) goto l10;
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=484)) goto l10;
J=V23;
x[jvj+50]=x[jvj+15] ;z[jvj+50]=z[jvj+15];
goto l5;
l8:x[jvj+69]=t[x[jvj+69]];
goto l7;
l10:x[jvj+70]=t[x[jvj+70]];
goto l9;
l11:pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,X,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=238; pile[WZ1]=G; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(238,G,V4)*/
V4=pile[WZ2]; 
V3=V4*V2;
I=V3;
x[RES]=135 ;z[RES]=135;
x[jvj+60]=incon;
x[jvj+78]=x[E] ;z[jvj+78]=z[E];
l36:if((x[jvj+78]>0)) goto l37;
pile[v[22]]=0; pile[WZ1]=510; pile[WZ2]=jvj+60; 
(*f[46])( );     /*TRI0(0,510,jvj+60)*/
l51:pile[v[22]]=E; pile[WZ1]=jvj+60; 
(*f[68])( );     /*PLUE0(E,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=510; pile[WZ2]=I; 
(*f[186])( );     /*BTC0(jvj+60,510,I)*/
goto l54;
l12:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,X,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]==485)) goto l13;
if((x[jvj+18]==52)) goto l15;
if((x[jvj+18]==486)) goto l16;
if((x[jvj+18]==486)) goto l31;
l50:x[RES]=134 ;z[RES]=134;
goto l54;
l13:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,X,jvj+19)*/
l1:if((x[jvj+19]<=0)) goto l14;
x[jvj+1]=s[x[jvj+19]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+19];
pile[v[22]]=jvj+1; pile[WZ1]=E; pile[WZ2]=G; pile[WZ3]=jvj+2; 
(*f[4022])( );     /*DEPA0(jvj+1,E,G,jvj+2)*/
if((x[jvj+2]==134)) goto l50;
x[jvj+19]=t[x[jvj+19]];
goto l1;
l14:x[RES]=135 ;z[RES]=135;
goto l54;
l15:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,X,jvj+20)*/
pile[v[22]]=268; pile[WZ1]=G; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(268,G,jvj+21)*/
pile[v[22]]=jvj+20; pile[WZ1]=E; pile[WZ3]=jvj+22; 
(*f[4022])( );     /*DEPA0(jvj+20,E,jvj+21,jvj+22)*/
if((x[jvj+22]==135)) goto l14;
goto l50;
l16:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,X,jvj+23)*/
for(i=x[jvj+23],V36=0;i>0;i=t[i],V36++)  ;
if((V36==2)) goto l17;
if((V36!=3)) goto l31;
pile[v[22]]=238; pile[WZ1]=G; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(238,G,V65)*/
V65=pile[WZ2]; 
x[jvj+73]=x[jvj+23] ;z[jvj+73]=z[jvj+23];
l24:if((x[jvj+73]<=0)) goto l31;
x[jvj+30]=s[x[jvj+73]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+73];
pile[v[22]]=130; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+30,V56)*/
V56=pile[WZ2]; 
V47=V56;
V64=V65*V47;
x[jvj+74]=x[jvj+23] ;z[jvj+74]=z[jvj+23];
l26:if((x[jvj+74]<=0)) goto l25;
x[jvj+31]=s[x[jvj+74]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+74];
if((x[jvj+30]==x[jvj+31])) goto l27;
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+31,jvj+32)*/
if((x[jvj+32]!=484)) goto l27;
x[jvj+35]=x[jvj+31] ;z[jvj+35]=z[jvj+31];
x[jvj+75]=x[jvj+23] ;z[jvj+75]=z[jvj+23];
l28:if((x[jvj+75]<=0)) goto l27;
x[jvj+33]=s[x[jvj+75]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+75];
if((x[jvj+30]==x[jvj+33])) goto l29;
if((x[jvj+31]==x[jvj+33])) goto l29;
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+34]!=484)) goto l29;
pile[v[22]]=jvj+35; pile[WZ2]=jvj+36; 
(*f[760])( );     /*MEMEX0(jvj+35,jvj+33,jvj+36)*/
if((x[jvj+36]==134)) goto l30;
l29:x[jvj+75]=t[x[jvj+75]];
goto l28;
l17:pile[v[22]]=238; pile[WZ1]=G; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(238,G,V44)*/
V44=pile[WZ2]; 
x[jvj+71]=x[jvj+23] ;z[jvj+71]=z[jvj+23];
l18:if((x[jvj+71]<=0)) goto l31;
x[jvj+24]=s[x[jvj+71]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+71];
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=484)) goto l19;
x[jvj+28]=x[jvj+24] ;z[jvj+28]=z[jvj+24];
x[jvj+72]=x[jvj+23] ;z[jvj+72]=z[jvj+23];
l20:if((x[jvj+72]<=0)) goto l19;
x[jvj+26]=s[x[jvj+72]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+72];
if((x[jvj+24]==x[jvj+26])) goto l21;
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=484)) goto l21;
pile[v[22]]=jvj+28; pile[WZ2]=jvj+29; 
(*f[760])( );     /*MEMEX0(jvj+28,jvj+26,jvj+29)*/
if((x[jvj+29]==134)) goto l22;
l21:x[jvj+72]=t[x[jvj+72]];
goto l20;
l19:x[jvj+71]=t[x[jvj+71]];
goto l18;
l22:L=V44;
x[jvj+50]=x[jvj+28] ;z[jvj+50]=z[jvj+28];
x[jvj+54]=x[jvj+26] ;z[jvj+54]=z[jvj+26];
l23:x[RES]=135 ;z[RES]=135;
x[jvj+62]=incon;
x[jvj+80]=x[E] ;z[jvj+80]=z[E];
l46:if((x[jvj+80]>0)) goto l47;
pile[v[22]]=0; pile[WZ1]=609; pile[WZ2]=jvj+66; 
(*f[46])( );     /*TRI0(0,609,jvj+66)*/
pile[v[22]]=459; pile[WZ1]=jvj+50; pile[WZ2]=475; pile[WZ3]=jvj+54; pile[WZ4]=jvj+66; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(459,jvj+50,475,jvj+54,jvj+66,jvj+62)*/
l53:pile[v[22]]=E; pile[WZ1]=jvj+62; 
(*f[68])( );     /*PLUE0(E,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=609; pile[WZ2]=L; 
(*f[186])( );     /*BTC0(jvj+62,609,L)*/
goto l54;
l25:x[jvj+73]=t[x[jvj+73]];
goto l24;
l27:x[jvj+74]=t[x[jvj+74]];
goto l26;
l30:L=V64;
x[jvj+50]=x[jvj+35] ;z[jvj+50]=z[jvj+35];
x[jvj+54]=x[jvj+33] ;z[jvj+54]=z[jvj+33];
goto l23;
l31:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(107,X,jvj+37)*/
for(i=x[jvj+37],V98=0;i>0;i=t[i],V98++)  ;
if((V98!=2)) goto l50;
x[jvj+76]=x[jvj+37] ;z[jvj+76]=z[jvj+37];
l32:if((x[jvj+76]<=0)) goto l50;
x[jvj+38]=s[x[jvj+76]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+76];
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+38,jvj+39)*/
if((x[jvj+39]!=484)) goto l33;
x[jvj+3]=x[jvj+38] ;z[jvj+3]=z[jvj+38];
x[jvj+77]=x[jvj+37] ;z[jvj+77]=z[jvj+37];
goto l34;
l33:x[jvj+76]=t[x[jvj+76]];
goto l32;
l37:x[jvj+47]=s[x[jvj+78]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+78];
pile[v[22]]=510; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(510,jvj+47,V67)*/
V67=pile[WZ2]; 
x[jvj+60]=x[jvj+47] ;z[jvj+60]=z[jvj+47];
goto l51;
l38:x[jvj+78]=t[x[jvj+78]];
goto l36;
l40:x[jvj+48]=s[x[jvj+79]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+79];
pile[v[22]]=447; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(447,jvj+48,jvj+49)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+49; pile[WZ2]=jvj+51; 
(*f[760])( );     /*MEMEX0(jvj+50,jvj+49,jvj+51)*/
if((x[jvj+51]==135)) goto l42;
l41:x[jvj+79]=t[x[jvj+79]];
goto l39;
l42:x[jvj+61]=x[jvj+48] ;z[jvj+61]=z[jvj+48];
goto l52;
l43:pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[760])( );     /*MEMEX0(jvj+54,jvj+55,jvj+56)*/
if((x[jvj+56]==135)) goto l49;
l44:pile[v[22]]=jvj+54; pile[WZ1]=jvj+52; pile[WZ2]=jvj+57; 
(*f[760])( );     /*MEMEX0(jvj+54,jvj+52,jvj+57)*/
if((x[jvj+57]==135)) goto l45;
l48:x[jvj+80]=t[x[jvj+80]];
goto l46;
l45:pile[v[22]]=jvj+50; pile[WZ1]=jvj+55; pile[WZ2]=jvj+58; 
(*f[760])( );     /*MEMEX0(jvj+50,jvj+55,jvj+58)*/
if((x[jvj+58]==135)) goto l49;
goto l48;
l47:x[jvj+59]=s[x[jvj+80]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+80];
pile[v[22]]=459; pile[WZ1]=jvj+59; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(459,jvj+59,jvj+52)*/
pile[v[22]]=475; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(475,jvj+59,jvj+55)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[760])( );     /*MEMEX0(jvj+50,jvj+52,jvj+53)*/
if((x[jvj+53]==135)) goto l43;
goto l44;
l49:x[jvj+62]=x[jvj+59] ;z[jvj+62]=z[jvj+59];
goto l53;
}
