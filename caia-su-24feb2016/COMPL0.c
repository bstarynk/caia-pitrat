#include "dx.h"
void COMPL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V65=0,SP=0,V48=0,V50=0,V30=0,K=0,LL=0,V14=0,W=0,V19=0,V23=0,V22=0,SS=0,S=0,V83=0,V72=0,V75=0,V70=0,V71=0,V73=0,V74=0,V93=0,V92=0,V95=0,V34=0,V94=0;
int X,KR,UR,D,WW,BB,ND;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=71;
x[jvj+1]=10322;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==696&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; KR=pile[v[22]+1]; UR=pile[v[22]+2]; D=pile[v[22]+3]; WW=pile[v[22]+4]; BB=pile[v[22]+5]; ND=pile[v[22]+6]; R=pile[v[22]+7]; v[22]+=8; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=x[jvj+9]=x[jvj+11]=incon;
pile[v[22]]=960; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(960,X,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1082])( );     /*TRADUIT0(jvj+3,jvj+4)*/
l2:pile[v[22]]=959; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(959,X,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1082])( );     /*TRADUIT0(jvj+5,jvj+6)*/
l3:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,X,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==250)) goto l5;
x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
pile[v[22]]=345; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(345,jvj+9,jvj+10)*/
l4:if((x[D]!=289)) goto l5;
pile[v[22]]=762; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(762,jvj+9,jvj+11)*/
l7:if(x[jvj+10]==incon) goto l8;
l9:pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(645,597,jvj+12)*/
l10:if((x[jvj+12]<=0)) goto l12;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=683; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(683,jvj+13,V65)*/
V65=pile[WZ2]; 
if((V65!=ND)) goto l11;
x[jvj+14]=x[jvj+13] ;z[jvj+14]=z[jvj+13];
pile[v[22]]=1418; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1418,jvj+14,jvj+15)*/
SP=x[jvj+15];
l17:if(x[jvj+10]!=incon) goto l18;
l55:x[jvj+1]=incon; v[0]=jvj; v[22]-=8; v[102]=1;return;
l1:x[jvj+68]=0 ;z[jvj+68]=0;
x[jvj+2]=x[jvj+68] ;z[jvj+2]=z[jvj+68];
l6:x[jvj+11]=x[jvj+2] ;z[jvj+11]=z[jvj+2];
goto l7;
l5:if(x[D]!=44&&x[D]!=187&&x[D]!=714) goto l7;
x[jvj+2]=incon;
if((WW==(-7141))) goto l1;
pile[v[22]]=96; pile[WZ1]=WW; pile[WZ2]=jvj+2; 
(*f[328])( );     /*TRI12(96,WW,jvj+2)*/
goto l6;
l8:if(x[jvj+9]!=incon) goto l59;
goto l9;
l11:x[jvj+12]=t[x[jvj+12]];
goto l10;
l12:SP=67;
goto l17;
l13:if((SP==68)) goto l25;
pile[v[22]]=337; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(337,jvj+16,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+6; pile[WZ2]=jvj+18; 
(*f[760])( );     /*MEMEX0(jvj+17,jvj+6,jvj+18)*/
if((x[jvj+18]==135)) goto l25;
l21:x[jvj+28]=t[x[jvj+28]];
l20:if((x[jvj+28]<=0)) goto l38;
x[jvj+16]=s[x[jvj+28]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+28];
pile[v[22]]=288; pile[WZ1]=jvj+16; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(288,jvj+16,jvj+29)*/
if((x[jvj+29]!=x[D])) goto l21;
if((SP!=68)) goto l22;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(683,jvj+16,V48)*/
V48=pile[WZ2]; 
if((V48!=ND)) goto l21;
pile[v[22]]=1418; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1418,jvj+16,jvj+27)*/
if((x[jvj+27]==68)) goto l22;
goto l21;
l14:if((x[D]!=714)) goto l25;
l15:pile[v[22]]=768; pile[WZ1]=jvj+16; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(768,jvj+16,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+4; pile[WZ2]=jvj+23; 
(*f[760])( );     /*MEMEX0(jvj+22,jvj+4,jvj+23)*/
if((x[jvj+23]==135)) goto l25;
goto l21;
l16:if((x[D]!=714)) goto l14;
pile[v[22]]=767; pile[WZ1]=jvj+16; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(767,jvj+16,jvj+24)*/
pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(767,X,jvj+25)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[1081])( );     /*IDENSEXP0(jvj+24,jvj+25,jvj+26)*/
if((x[jvj+26]==135)) goto l15;
goto l21;
l18:if(x[jvj+11]!=incon) goto l19;
l38:if(x[jvj+9]!=incon) goto l39;
goto l55;
l19:pile[v[22]]=365; pile[WZ1]=jvj+10; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(365,jvj+10,jvj+28)*/
goto l20;
l22:pile[v[22]]=222; pile[WZ1]=jvj+16; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(222,jvj+16,jvj+30)*/
for(i=x[jvj+30],V93=0;i>0;i=t[i],V93++)  ;
for(i=x[jvj+11],V92=0;i>0;i=t[i],V92++)  ;
if((V93!=V92)) goto l62;
V95=x[jvj+30];
l61:if((V95>0)) goto l64;
V34=135;
l23:if((V34==135)) goto l24;
goto l21;
l24:pile[v[22]]=246; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(246,jvj+16,V50)*/
V50=pile[WZ2]; 
if((x[D]!=187)) goto l16;
pile[v[22]]=764; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(764,jvj+16,jvj+19)*/
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,X,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[1081])( );     /*IDENSEXP0(jvj+19,jvj+20,jvj+21)*/
if((x[jvj+21]==135)) goto l13;
goto l21;
l25:x[R]=x[jvj+16] ;z[R]=z[jvj+16];
pile[v[22]]=X; pile[WZ1]=246; pile[WZ2]=V50; 
(*f[43])( );     /*CHGC2(X,246,V50)*/
if((SP!=68)) goto l56;
if(x[D]!=289&&x[D]!=187) goto l56;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(111,X,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(101,jvj+41,jvj+42)*/
pile[v[22]]=1420; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(1420,jvj+42,jvj+43)*/
if((x[jvj+43]==0)) goto l56;
x[jvj+36]=x[R] ;z[jvj+36]=z[R];
if(x[jvj+9]!=incon) goto l41;
l53:V83=x[jvj+11];
l51:if((V83>0)) goto l52;
pile[v[22]]=223; pile[WZ1]=jvj+36; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(223,jvj+36,jvj+59)*/
pile[v[22]]=222; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(222,jvj+36,jvj+60)*/
V72=x[jvj+60];
V75=x[jvj+59];
pile[v[22]]=jvj+36; 
(*f[745])( );     /*CREKNDR0(jvj+36)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=114; 
(*f[42])( );     /*SRA1(135,0,114,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V72; pile[WZ2]=V70; 
(*f[39])( );     /*SDX0(23,V72,V70,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V71; pile[WZ2]=113; 
(*f[42])( );     /*SRA1(135,V71,113,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V75; pile[WZ2]=V73; 
(*f[39])( );     /*SDX0(23,V75,V73,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; 
(*f[40])( );     /*SLG0(V74)*/
pile[v[22]]=jvj+36; pile[WZ1]=73; 
(*f[273])( );     /*PLUK1(jvj+36,73)*/
pile[v[22]]=KR; pile[WZ1]=UR; pile[WZ2]=jvj+36; 
(*f[355])( );     /*EAX0(KR,UR,jvj+36)*/
l56:x[jvj+1]=incon; v[0]=jvj; v[22]-=8; v[102]=0;return;
l28:x[jvj+32]=s[x[jvj+69]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+69];
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(130,jvj+32,V30)*/
V30=pile[WZ2]; 
if((V30!=K)) goto l29;
K++;
if((K<=50)) goto l26;
goto l55;
l29:x[jvj+69]=t[x[jvj+69]];
l27:if((x[jvj+69]>0)) goto l28;
pile[v[22]]=jvj+9; pile[WZ1]=K; 
(*f[744])( );if(v[102]) goto l55;     /*VE0(jvj+9,K,LL)*/
LL=pile[WZ2]; 
pile[WZ1]=583; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+9,583,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+10; pile[WZ2]=297; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+61,jvj+10,297,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=D; pile[WZ2]=288; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+62,D,288,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=LL; pile[WZ2]=246; pile[WZ3]=jvj+64; 
(*f[189])( );     /*TRI4(jvj+63,LL,246,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+11; pile[WZ2]=222; pile[WZ3]=jvj+65; 
(*f[301])( );     /*TRI11(jvj+64,jvj+11,222,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=K; pile[WZ2]=130; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+65,K,130,jvj+36)*/
if((BB<=0)) goto l35;
pile[v[22]]=jvj+36; pile[WZ1]=1168; pile[WZ2]=BB; 
(*f[43])( );     /*CHGC2(jvj+36,1168,BB)*/
l35:if((SP!=68)) goto l36;
pile[v[22]]=jvj+36; pile[WZ1]=1418; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+36,1418,68)*/
pile[WZ1]=683; pile[WZ2]=ND; 
(*f[43])( );     /*CHGC2(jvj+36,683,ND)*/
l36:if((x[D]==187)) goto l37;
if((x[D]!=714)) goto l40;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+40; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+40)*/
pile[v[22]]=767; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(767,X,jvj+37)*/
l33:if((x[jvj+37]>0)) goto l34;
pile[v[22]]=jvj+36; pile[WZ1]=768; pile[WZ2]=jvj+40; 
(*f[35])( );     /*CHGC1(jvj+36,768,jvj+40)*/
l40:x[R]=x[jvj+36] ;z[R]=z[jvj+36];
pile[v[22]]=jvj+10; pile[WZ1]=365; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+10,365,jvj+36)*/
pile[v[22]]=X; pile[WZ1]=246; pile[WZ2]=LL; 
(*f[43])( );     /*CHGC2(X,246,LL)*/
l41:x[jvj+55]=0 ;z[jvj+55]=0;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+9,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+46,jvj+47)*/
if((x[jvj+47]!=69)) goto l50;
pile[v[22]]=108; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(108,jvj+46,jvj+48)*/
x[jvj+49]=d[38];z[jvj+49]=0;
l43:if((x[jvj+48]<=0)) goto l50;
x[jvj+50]=s[x[jvj+48]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+48];
pile[v[22]]=103; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,jvj+50,jvj+51)*/
pile[v[22]]=140; pile[WZ1]=jvj+51; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+51,V14)*/
V14=pile[WZ2]; 
W=V14;
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==W) goto l45;
l44:x[jvj+48]=t[x[jvj+48]];
goto l43;
l30:K=0;
l26:pile[v[22]]=365; pile[WZ1]=jvj+10; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(365,jvj+10,jvj+31)*/
x[jvj+69]=x[jvj+31] ;z[jvj+69]=z[jvj+31];
goto l27;
l32:x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(jvj+34,jvj+35)*/
pile[v[22]]=jvj+36; pile[WZ1]=764; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+36,764,jvj+35)*/
x[jvj+33]=t[x[jvj+33]];
l31:if((x[jvj+33]>0)) goto l32;
pile[v[22]]=jvj+36; pile[WZ1]=337; pile[WZ2]=jvj+39; 
(*f[35])( );     /*CHGC1(jvj+36,337,jvj+39)*/
goto l40;
l34:x[jvj+34]=s[x[jvj+37]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+37];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+34,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=767; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+36,767,jvj+38)*/
x[jvj+37]=t[x[jvj+37]];
goto l33;
l37:pile[v[22]]=jvj+6; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+39)*/
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,X,jvj+33)*/
goto l31;
l39:if(x[jvj+11]!=incon) goto l30;
goto l55;
l42:x[jvj+66]=20 ;z[jvj+66]=20;
l60:pile[v[22]]=140; pile[WZ1]=W; pile[WZ2]=158; pile[WZ3]=jvj+66; pile[WZ4]=jvj+54; 
(*f[692])( );     /*QUADRI13(140,W,158,jvj+66,jvj+54)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[196])( );     /*PLUF0(jvj+49,jvj+54,jvj+55)*/
goto l44;
l45:pile[v[22]]=102; pile[WZ1]=jvj+50; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+50,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+52,jvj+53)*/
x[jvj+44]=x[jvj+53] ;z[jvj+44]=z[jvj+53];
x[jvj+66]=incon;
pile[v[22]]=288; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(288,jvj+44,jvj+45)*/
x[jvj+70]=x[jvj+45] ;z[jvj+70]=z[jvj+45];
x[jvj+66]=x[jvj+70] ;z[jvj+66]=z[jvj+70];
goto l60;
l47:x[jvj+57]=s[x[jvj+71]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+71];
pile[v[22]]=130; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(130,jvj+57,V19)*/
V19=pile[WZ2]; 
if((V19!=SS)) goto l48;
SS++;
l49:if((SS>V22)) goto l54;
pile[v[22]]=213; pile[WZ1]=jvj+36; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(213,jvj+36,jvj+56)*/
x[jvj+71]=x[jvj+56] ;z[jvj+71]=z[jvj+56];
l46:if((x[jvj+71]>0)) goto l47;
pile[v[22]]=S; pile[WZ1]=140; pile[WZ2]=jvj+67; 
(*f[329])( );     /*TRI13(S,140,jvj+67)*/
pile[v[22]]=122; pile[WZ1]=114; pile[WZ2]=130; pile[WZ3]=SS; pile[WZ4]=jvj+67; pile[WZ5]=jvj+58; 
(*f[47])( );     /*QUADRI0(122,114,130,SS,jvj+67,jvj+58)*/
pile[v[22]]=jvj+36; pile[WZ1]=213; pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+36,213,jvj+58)*/
l54:V83=t[V83];
goto l51;
l48:x[jvj+71]=t[x[jvj+71]];
goto l46;
l50:pile[v[22]]=jvj+36; pile[WZ1]=283; pile[WZ2]=jvj+55; 
(*f[34])( );     /*CHGC0(jvj+36,283,jvj+55)*/
goto l53;
l52:S=s[V83];
for(i=x[jvj+11],V23=0;i>0;i=t[i],V23++)  ;
V22=V23-1;
SS=0;
goto l49;
l57:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=616; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,616,jvj+4)*/
goto l2;
l58:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=616; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,616,jvj+6)*/
goto l3;
l59:pile[v[22]]=100; pile[WZ1]=508; pile[WZ2]=218; pile[WZ3]=854; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,508,218,854,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=345; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+9,345,jvj+10)*/
goto l9;
l63:V95=t[V95];
goto l61;
l64:V94=s[V95];
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==V94) goto l63;
l62:V34=134;
goto l23;
}
