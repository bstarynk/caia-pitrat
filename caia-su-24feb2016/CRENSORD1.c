#include "dx.h"
void CRENSORD1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V47=0,INDI=0,V36=0,V34=0,V35=0,V38=0,V31=0,RR=0,V22=0,V6=0,V44=0,V42=0,V43=0,V46=0,V39=0,V65=0,V63=0,V64=0,V67=0,V55=0,V53=0,V54=0,V57=0,V50=0,V73=0,V91=0,A=0,V75=0,V92=0,B=0,V76=0,V95=0,V93=0,V94=0,V97=0,V88=0,V87=0,V74=0,V101=0,V105=0,UU=0,V78=0,V106=0,II=0,V79=0,V109=0,V107=0,V108=0,V111=0,V102=0,U=0,I=0,V98=0,V82=0,V81=0,V124=0,V122=0,V123=0,V125=0,V127=0,V129=0,V131=0,V133=0,V116=0,V117=0,V135=0,V136=0,V138=0,V84=0;
int UR,ND,NR,T,F,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=67;
x[jvj+1]=11042;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==885&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; ND=pile[v[22]+1]; NR=pile[v[22]+2]; T=pile[v[22]+3]; F=pile[v[22]+4]; X=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V47=incon;
pile[v[22]]=1418; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1418,X,jvj+3)*/
if((x[jvj+3]!=68)) goto l1;
V47=1421;
l2:INDI=V47;
pile[v[22]]=265; pile[WZ1]=X; 
(*f[71])( );     /*ENLV0(265,X)*/
x[jvj+27]=0 ;z[jvj+27]=0;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(1484,854,V36)*/
V36=pile[WZ2]; 
V34=sepfacts+1;
V35=sepfacts+V36;
l3:if((V34>V35)) goto l19;
V38=r[V34];
if((V38!=1)) goto l4;
x[jvj+8]=V34 ;z[jvj+8]=(V34<=sepcte) ? V34 : 0;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+8,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=69)) goto l4;
pile[v[22]]=108; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(108,jvj+10,jvj+12)*/
pile[v[22]]=1422; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1422,jvj+8,jvj+9)*/
if((x[jvj+9]==INDI)) goto l4;
l5:pile[v[22]]=184; pile[WZ1]=jvj+8; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(184,jvj+8,jvj+13)*/
x[jvj+61]=x[jvj+13] ;z[jvj+61]=z[jvj+13];
l6:if((x[jvj+61]<=0)) goto l4;
x[jvj+14]=s[x[jvj+61]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+61];
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=42)) goto l7;
pile[v[22]]=107; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+16)*/
x[jvj+62]=x[jvj+16] ;z[jvj+62]=z[jvj+16];
l8:if((x[jvj+62]<=0)) goto l7;
x[jvj+17]=s[x[jvj+62]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+62];
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=278)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+17,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+20,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+17; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+17,jvj+4)*/
RR=V31;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+21; 
(*f[490])( );     /*CHEROBJ0(jvj+4,jvj+21)*/
x[jvj+63]=x[jvj+12] ;z[jvj+63]=z[jvj+12];
l10:if((x[jvj+63]<=0)) goto l9;
x[jvj+22]=s[x[jvj+63]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+63];
pile[v[22]]=103; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+22,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+23,V22)*/
V22=pile[WZ2]; 
if((RR!=V22)) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+22,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=576)) goto l11;
x[jvj+64]=x[jvj+21] ;z[jvj+64]=z[jvj+21];
l12:if((x[jvj+64]<=0)) goto l11;
x[jvj+26]=s[x[jvj+64]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+64];
pile[v[22]]=118; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(118,jvj+26,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+4,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+26]==x[jvj+7])) goto l13;
l14:pile[v[22]]=jvj+27; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+27,jvj+26)*/
l13:x[jvj+64]=t[x[jvj+64]];
goto l12;
l1:V47=397;
goto l2;
l4:V34++;
goto l3;
l7:x[jvj+61]=t[x[jvj+61]];
goto l6;
l9:x[jvj+62]=t[x[jvj+62]];
goto l8;
l11:x[jvj+63]=t[x[jvj+63]];
goto l10;
l15:pile[v[22]]=1422; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1422,jvj+28,jvj+29)*/
if((x[jvj+29]==INDI)) goto l17;
l18:pile[v[22]]=1088; pile[WZ1]=jvj+28; 
(*f[71])( );     /*ENLV0(1088,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=F; pile[WZ2]=ND; 
(*f[780])( );     /*ANATOME1(jvj+28,F,ND)*/
l17:V42++;
l16:if((V42>V43)) goto l20;
V46=r[V42];
if((V46!=1)) goto l17;
x[jvj+28]=V42 ;z[jvj+28]=(V42<=sepcte) ? V42 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(905,jvj+28,V39)*/
V39=pile[WZ2]; 
if((V39==(-9113))) goto l15;
if((V39==F)) goto l15;
goto l17;
l19:pile[v[22]]=22; pile[WZ1]=1300; pile[WZ2]=jvj+27; 
(*f[34])( );     /*CHGC0(22,1300,jvj+27)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(1484,854,V44)*/
V44=pile[WZ2]; 
V42=sepfacts+1;
V43=sepfacts+V44;
goto l16;
l20:x[jvj+65]=0 ;z[jvj+65]=0;
x[jvj+36]=x[jvj+65] ;z[jvj+36]=z[jvj+65];
if(UR==83||UR==84||UR==78) goto l25;
pile[v[22]]=T; pile[WZ1]=F; pile[WZ2]=jvj+32; 
(*f[553])( );if(v[102]) goto l25;     /*EXPPB3(T,F,jvj+32)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(1484,854,V65)*/
V65=pile[WZ2]; 
V63=sepfacts+1;
V64=sepfacts+V65;
l22:if((V63>V64)) goto l25;
V67=r[V63];
if((V67!=1)) goto l23;
x[jvj+33]=V63 ;z[jvj+33]=(V63<=sepcte) ? V63 : 0;
pile[v[22]]=1422; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1422,jvj+33,jvj+34)*/
if((x[jvj+34]==INDI)) goto l23;
l24:pile[v[22]]=983; pile[WZ1]=jvj+33; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(983,jvj+33,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=NR; pile[WZ2]=jvj+32; 
(*f[782])( );     /*STOCAT0(jvj+35,NR,jvj+32)*/
l23:V63++;
goto l22;
l21:pile[v[22]]=1422; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(1422,jvj+30,jvj+31)*/
if((x[jvj+31]==INDI)) goto l27;
l28:pile[v[22]]=jvj+30; pile[WZ1]=X; pile[WZ2]=jvj+36; pile[WZ3]=F; 
(*f[781])( );     /*PLACATOME0(jvj+30,X,jvj+36,F)*/
l27:V53++;
l26:if((V53>V54)) goto l65;
V57=r[V53];
if((V57!=1)) goto l27;
x[jvj+30]=V53 ;z[jvj+30]=(V53<=sepcte) ? V53 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(905,jvj+30,V50)*/
V50=pile[WZ2]; 
if((V50==(-9113))) goto l21;
if((V50==F)) goto l21;
goto l27;
l25:pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(1484,854,V55)*/
V55=pile[WZ2]; 
V53=sepfacts+1;
V54=sepfacts+V55;
goto l26;
l29:pile[v[22]]=1422; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(1422,jvj+37,jvj+38)*/
if((x[jvj+38]==INDI)) goto l34;
l35:pile[v[22]]=983; pile[WZ1]=jvj+37; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(983,jvj+37,jvj+40)*/
pile[v[22]]=1212; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(1212,jvj+40,jvj+41)*/
x[jvj+66]=x[jvj+41] ;z[jvj+66]=z[jvj+41];
l36:if((x[jvj+66]<=0)) goto l34;
x[jvj+39]=s[x[jvj+66]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+66];
pile[v[22]]=683; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(683,jvj+39,V87)*/
V87=pile[WZ2]; 
if((V87!=NR)) goto l37;
V75=incon;
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(737,jvj+39,V91)*/
V91=pile[WZ2]; 
A=V91;
V75=A;
l31:V76=incon;
pile[v[22]]=846; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(846,jvj+39,V92)*/
V92=pile[WZ2]; 
B=V92;
V76=B;
l38:V74=V75+V76;
if(V74>V73) V73=V74;
l37:x[jvj+66]=t[x[jvj+66]];
goto l36;
l30:V75=0;
goto l31;
l32:V76=0;
goto l38;
l41:x[jvj+67]=t[x[jvj+67]];
l40:if((x[jvj+67]<=0)) goto l46;
x[jvj+45]=s[x[jvj+67]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+67];
pile[v[22]]=683; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(683,jvj+45,V101)*/
V101=pile[WZ2]; 
if((V101!=NR)) goto l41;
V78=incon;
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(737,jvj+45,V105)*/
V105=pile[WZ2]; 
UU=V105;
V78=UU;
l47:U=V78;
V79=incon;
pile[v[22]]=846; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(846,jvj+45,V106)*/
V106=pile[WZ2]; 
II=V106;
V79=II;
l48:I=V79;
V98=U+I;
if((V98<=0)) goto l46;
pile[v[22]]=V73; pile[WZ1]=V98; 
(*f[784])( );if(v[102]) goto l46;     /*RAPPORT0(V73,V98,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=U; 
(*f[783])( );if(v[102]) goto l46;     /*POURMILLE0(I,U,V81)*/
V81=pile[WZ2]; 
V124=x[jvj+42];
pile[v[22]]=jvj+45; pile[WZ1]=947; pile[WZ2]=V81; 
(*f[43])( );     /*CHGC2(jvj+45,947,V81)*/
pile[WZ1]=1210; pile[WZ2]=V82; 
(*f[43])( );     /*CHGC2(jvj+45,1210,V82)*/
pile[v[22]]=20; pile[WZ1]=11151; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11151,0,V122)*/
V122=pile[WZ3]; 
pile[WZ1]=V124; pile[WZ2]=V122; 
(*f[39])( );     /*SDX0(20,V124,V122,V123)*/
V123=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=U; pile[WZ2]=V123; 
(*f[39])( );     /*SDX0(41,U,V123,V125)*/
V125=pile[WZ3]; 
pile[WZ1]=I; pile[WZ2]=V125; 
(*f[39])( );     /*SDX0(41,I,V125,V127)*/
V127=pile[WZ3]; 
pile[WZ1]=V98; pile[WZ2]=V127; 
(*f[39])( );     /*SDX0(41,V98,V127,V129)*/
V129=pile[WZ3]; 
pile[WZ1]=V73; pile[WZ2]=V129; 
(*f[39])( );     /*SDX0(41,V73,V129,V131)*/
V131=pile[WZ3]; 
pile[WZ1]=V82; pile[WZ2]=V131; 
(*f[39])( );     /*SDX0(41,V82,V131,V133)*/
V133=pile[WZ3]; 
pile[v[22]]=V133; 
(*f[40])( );     /*SLG0(V133)*/
l46:V107++;
l45:if((V107>V108)) goto l49;
V111=r[V107];
if((V111!=1)) goto l46;
x[jvj+42]=V107 ;z[jvj+42]=(V107<=sepcte) ? V107 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(905,jvj+42,V102)*/
V102=pile[WZ2]; 
if((V102==(-9113))) goto l42;
if((V102==F)) goto l42;
goto l46;
l42:pile[v[22]]=1422; pile[WZ1]=jvj+42; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(1422,jvj+42,jvj+46)*/
if((x[jvj+46]==INDI)) goto l46;
l39:pile[v[22]]=983; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(983,jvj+42,jvj+43)*/
pile[v[22]]=1212; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(1212,jvj+43,jvj+44)*/
x[jvj+67]=x[jvj+44] ;z[jvj+67]=z[jvj+44];
goto l40;
l43:V78=0;
goto l47;
l44:V79=0;
goto l48;
l49:if((NR<=0)) goto l55;
pile[v[22]]=265; pile[WZ1]=X; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(265,X,jvj+47)*/
l50:if((x[jvj+47]>0)) goto l51;
pile[v[22]]=265; pile[WZ1]=X; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(265,X,jvj+51)*/
l53:if((x[jvj+51]<=0)) goto l55;
x[jvj+52]=s[x[jvj+51]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+51];
pile[v[22]]=158; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(158,jvj+52,jvj+53)*/
if((x[jvj+53]==696)) goto l54;
pile[v[22]]=jvj+50; pile[WZ1]=158; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+50,158,68)*/
pile[v[22]]=jvj+52; pile[WZ1]=120; pile[WZ2]=ND; pile[WZ3]=NR; pile[WZ4]=jvj+50; 
(*f[785])( );     /*DETPRIO0(jvj+52,120,ND,NR,jvj+50)*/
l54:x[jvj+51]=t[x[jvj+51]];
goto l53;
l51:x[jvj+48]=s[x[jvj+47]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+47];
pile[v[22]]=158; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(158,jvj+48,jvj+49)*/
if((x[jvj+49]==696)) goto l52;
pile[v[22]]=jvj+48; pile[WZ1]=120; pile[WZ2]=ND; pile[WZ3]=NR; pile[WZ4]=jvj+50; 
(*f[785])( );     /*DETPRIO0(jvj+48,120,ND,NR,jvj+50)*/
l52:x[jvj+47]=t[x[jvj+47]];
goto l50;
l55:pile[v[22]]=164; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(164,jvj+50,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(280,jvj+50,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=11042; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11042,0,V135)*/
V135=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V117; pile[WZ2]=V135; 
(*f[39])( );     /*SDX0(41,V117,V135,V136)*/
V136=pile[WZ3]; 
pile[WZ1]=V116; pile[WZ2]=V136; 
(*f[39])( );     /*SDX0(41,V116,V136,V138)*/
V138=pile[WZ3]; 
pile[v[22]]=V138; 
(*f[40])( );     /*SLG0(V138)*/
l62:pile[v[22]]=265; pile[WZ1]=X; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(265,X,jvj+58)*/
l63:if((x[jvj+58]>0)) goto l64;
l66:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; return;
l56:V84=ND;
l57:pile[v[22]]=265; pile[WZ1]=X; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(265,X,jvj+54)*/
l58:if((x[jvj+54]<=0)) goto l60;
x[jvj+55]=s[x[jvj+54]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+54];
pile[v[22]]=158; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(158,jvj+55,jvj+56)*/
if((x[jvj+56]==696)) goto l59;
pile[v[22]]=120; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(120,jvj+55,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=V84; 
(*f[705])( );     /*DEBPRIO0(jvj+57,V84)*/
l59:x[jvj+54]=t[x[jvj+54]];
goto l58;
l60:if(UR==83||UR==84||UR==78) goto l62;
V73=(-999999);
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(1484,854,V95)*/
V95=pile[WZ2]; 
V93=sepfacts+1;
V94=sepfacts+V95;
l33:if((V93>V94)) goto l61;
V97=r[V93];
if((V97!=1)) goto l34;
x[jvj+37]=V93 ;z[jvj+37]=(V93<=sepcte) ? V93 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(905,jvj+37,V88)*/
V88=pile[WZ2]; 
if((V88==(-9113))) goto l29;
if((V88==F)) goto l29;
l34:V93++;
goto l33;
l61:if((V73==(-999999))) goto l62;
pile[v[22]]=9999999; pile[WZ1]=280; pile[WZ2]=jvj+60; 
(*f[46])( );     /*TRI0(9999999,280,jvj+60)*/
pile[v[22]]=158; pile[WZ1]=67; pile[WZ2]=164; pile[WZ3]=(-9999999); pile[WZ4]=jvj+60; pile[WZ5]=jvj+50; 
(*f[47])( );     /*QUADRI0(158,67,164,(-9999999),jvj+60,jvj+50)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(1484,854,V109)*/
V109=pile[WZ2]; 
V107=sepfacts+1;
V108=sepfacts+V109;
goto l45;
l64:x[jvj+59]=s[x[jvj+58]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+58];
pile[v[22]]=jvj+59; 
(*f[778])( );     /*CLASSECOND0(jvj+59)*/
x[jvj+58]=t[x[jvj+58]];
goto l63;
l65:pile[v[22]]=X; pile[WZ1]=jvj+36; 
(*f[701])( );     /*AJOUREGORD0(X,jvj+36)*/
if(UR!=83&&UR!=84&&UR!=78) goto l60;
V84=incon;
if((UR==78)) goto l56;
V84=0;
goto l57;
}
