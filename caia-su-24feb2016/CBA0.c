#include "dx.h"
void CBA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V38=0,V26=0,V99=0,F=0,V57=0,WW=0,V60=0,V103=0,W=0,V5=0,V=0,V106=0,V22=0,V13=0,V69=0,BK=0,V65=0,V67=0,V79=0,V66=0,V73=0,V90=0,V94=0,V81=0,V82=0,V83=0,V84=0,V85=0,V86=0,V87=0,V88=0,V89=0,V91=0,V93=0,V68=0,V77=0;
int BL,TL,E;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=63;
x[jvj+1]=10694;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1422&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; TL=pile[v[22]+1]; E=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l17:pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(147,BL,jvj+28)*/
pile[v[22]]=357; pile[WZ1]=TL; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(357,TL,jvj+29)*/
x[jvj+58]=x[jvj+29] ;z[jvj+58]=z[jvj+29];
l18:if((x[jvj+58]>0)) goto l19;
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(222,TL,jvj+33)*/
l23:if((x[jvj+28]>0)) goto l24;
pile[v[22]]=357; pile[WZ1]=TL; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(357,TL,jvj+36)*/
pile[v[22]]=222; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(222,TL,jvj+37)*/
V106=x[jvj+37];
l28:if((V106>0)) goto l29;
x[jvj+61]=x[jvj+36] ;z[jvj+61]=z[jvj+36];
l33:if((x[jvj+61]>0)) goto l34;
x[jvj+63]=x[jvj+36] ;z[jvj+63]=z[jvj+36];
l39:if((x[jvj+63]>0)) goto l40;
l51:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+2]=s[x[jvj+52]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+52];
pile[v[22]]=263; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(263,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V5) goto l25;
x[jvj+52]=t[x[jvj+52]];
l1:if((x[jvj+52]>0)) goto l2;
x[jvj+59]=x[jvj+29] ;z[jvj+59]=z[jvj+29];
l26:if((x[jvj+59]<=0)) goto l25;
x[jvj+34]=s[x[jvj+59]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+59];
pile[v[22]]=188; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(188,jvj+34,jvj+35)*/
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==V5) goto l27;
x[jvj+59]=t[x[jvj+59]];
goto l26;
l4:x[jvj+4]=s[x[jvj+53]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+53];
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=435)) goto l41;
x[jvj+53]=t[x[jvj+53]];
l3:if((x[jvj+53]>0)) goto l4;
pile[v[22]]=105; pile[WZ1]=jvj+6; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(105,jvj+6,jvj+24)*/
x[jvj+57]=x[jvj+24] ;z[jvj+57]=z[jvj+24];
l15:if((x[jvj+57]<=0)) goto l41;
x[jvj+25]=s[x[jvj+57]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+57];
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=435)) goto l16;
pile[v[22]]=436; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(436,jvj+25,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+27,V57)*/
V57=pile[WZ2]; 
WW=V57;
pile[v[22]]=105; pile[WZ1]=jvj+6; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(105,jvj+6,jvj+17)*/
x[jvj+56]=x[jvj+17] ;z[jvj+56]=z[jvj+17];
l12:if((x[jvj+56]>0)) goto l13;
pile[v[22]]=263; pile[WZ1]=jvj+6; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(263,jvj+6,jvj+16)*/
V99=x[jvj+16];
l10:if((V99>0)) goto l11;
x[jvj+46]=82 ;z[jvj+46]=82;
x[jvj+47]=x[jvj+6] ;z[jvj+47]=z[jvj+6];
W=WW;
l50:V77=x[jvj+47];
pile[v[22]]=357; pile[WZ1]=TL; pile[WZ2]=V77; 
(*f[134])( );     /*OTA0(357,TL,V77)*/
V68=g[135];
if((V68<=0)) goto l17;
V69=vg[135];
if((V69!=0)) goto l42;
if((V68<3)) goto l46;
l42:pile[v[22]]=135; pile[WZ1]=10694; pile[WZ2]=0; pile[WZ3]=(-657); pile[WZ4]=jvj+46; pile[WZ5]=(-2223); pile[v[22]+6]=jvj+47; pile[v[22]+7]=(-662); pile[v[22]+8]=TL; pile[v[22]+9]=jvj+48; 
(*f[188])( );     /*INTERP1(135,10694,0,(-657),jvj+46,(-2223),jvj+47,(-662),TL,jvj+48)*/
if((x[jvj+48]==135)) goto l45;
goto l17;
l8:x[jvj+8]=s[x[jvj+55]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+55];
if((x[jvj+8]==x[jvj+6])) goto l9;
pile[v[22]]=188; pile[WZ1]=jvj+8; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(188,jvj+8,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==V26) goto l41;
pile[v[22]]=107; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+9)*/
x[jvj+54]=x[jvj+9] ;z[jvj+54]=z[jvj+9];
l5:if((x[jvj+54]<=0)) goto l9;
x[jvj+10]=s[x[jvj+54]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+54];
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=178)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+10,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+13,V38)*/
V38=pile[WZ2]; 
if((V26==V38)) goto l41;
l6:x[jvj+54]=t[x[jvj+54]];
goto l5;
l9:x[jvj+55]=t[x[jvj+55]];
l7:if((x[jvj+55]>0)) goto l8;
V99=t[V99];
goto l10;
l11:V26=s[V99];
pile[v[22]]=223; pile[WZ1]=TL; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(223,TL,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==V26) goto l41;
x[jvj+55]=x[jvj+36] ;z[jvj+55]=z[jvj+36];
goto l7;
l13:x[jvj+18]=s[x[jvj+56]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+56];
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=435)) goto l14;
pile[v[22]]=102; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+18,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+20,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+22,jvj+23)*/
F=x[jvj+23];
if(F==224||F==282) goto l41;
l14:x[jvj+56]=t[x[jvj+56]];
goto l12;
l16:x[jvj+57]=t[x[jvj+57]];
goto l15;
l19:x[jvj+30]=s[x[jvj+58]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+58];
pile[v[22]]=535; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(535,jvj+30,jvj+31)*/
pile[v[22]]=188; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(188,jvj+30,jvj+32)*/
V103=x[jvj+32];
l20:if((V103>0)) goto l21;
x[jvj+58]=t[x[jvj+58]];
goto l18;
l21:V60=s[V103];
for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==V60) goto l22;
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==V60) goto l22;
for(a=x[E];a>0;a=t[a]) if(s[a]==V60) goto l22;
x[jvj+46]=253 ;z[jvj+46]=253;
x[jvj+47]=x[jvj+30] ;z[jvj+47]=z[jvj+30];
W=V60;
goto l50;
l22:V103=t[V103];
goto l20;
l24:V5=s[x[jvj+28]];
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==V5) goto l25;
x[jvj+52]=x[jvj+29] ;z[jvj+52]=z[jvj+29];
goto l1;
l25:x[jvj+28]=t[x[jvj+28]];
goto l23;
l27:x[jvj+46]=188 ;z[jvj+46]=188;
x[jvj+47]=x[jvj+34] ;z[jvj+47]=z[jvj+34];
W=V5;
goto l50;
l29:V=s[V106];
x[jvj+60]=x[jvj+36] ;z[jvj+60]=z[jvj+36];
l30:if((x[jvj+60]>0)) goto l31;
V106=t[V106];
goto l28;
l31:x[jvj+38]=s[x[jvj+60]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+60];
pile[v[22]]=263; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(263,jvj+38,jvj+39)*/
for(a=x[jvj+39];a>0;a=t[a]) if(s[a]==V) goto l32;
x[jvj+60]=t[x[jvj+60]];
goto l30;
l32:x[jvj+46]=222 ;z[jvj+46]=222;
x[jvj+47]=x[jvj+38] ;z[jvj+47]=z[jvj+38];
W=V;
goto l50;
l34:x[jvj+40]=s[x[jvj+61]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+61];
pile[v[22]]=107; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,jvj+40,jvj+41)*/
x[jvj+62]=x[jvj+41] ;z[jvj+62]=z[jvj+41];
l35:if((x[jvj+62]>0)) goto l36;
x[jvj+61]=t[x[jvj+61]];
goto l33;
l36:x[jvj+42]=s[x[jvj+62]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+62];
pile[v[22]]=111; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+42,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+43,jvj+44)*/
if((x[jvj+44]!=178)) goto l37;
pile[v[22]]=102; pile[WZ1]=jvj+42; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(102,jvj+42,jvj+45)*/
pile[v[22]]=140; pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(140,jvj+45,V22)*/
V22=pile[WZ2]; 
V13=V22;
for(a=x[jvj+37];a>0;a=t[a]) if(s[a]==V13) goto l38;
l37:x[jvj+62]=t[x[jvj+62]];
goto l35;
l38:x[jvj+46]=178 ;z[jvj+46]=178;
x[jvj+47]=x[jvj+40] ;z[jvj+47]=z[jvj+40];
W=V13;
goto l50;
l40:x[jvj+6]=s[x[jvj+63]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+63];
pile[v[22]]=105; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(105,jvj+6,jvj+7)*/
x[jvj+53]=x[jvj+7] ;z[jvj+53]=z[jvj+7];
goto l3;
l41:x[jvj+63]=t[x[jvj+63]];
goto l39;
l43:BK=s[x[jvj+49]];
V65=BK;
l47:V90=x[jvj+51];
V94=V65;
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V81; pile[WZ2]=10694; 
(*f[98])( );     /*SRA3(135,V81,10694,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V82,125,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=7; pile[WZ1]=V83; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(7,V83,64,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V84; pile[WZ2]=jvj+46; 
(*f[42])( );     /*SRA1(135,V84,jvj+46,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=V85; pile[WZ1]=(-4415); 
(*f[37])( );     /*SRA0(V85,(-4415),V86)*/
V86=pile[WZ2]; 
pile[v[22]]=V86; pile[WZ1]=jvj+50; 
(*f[344])( );if(v[102]) goto l49;     /*XX1(V86,jvj+50,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=V87; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V87,(-740),V88)*/
V88=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V90; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(20,V90,V88,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V73; pile[WZ2]=V89; 
(*f[39])( );     /*SDX0(41,V73,V89,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=V91; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V91,(-1318),V93)*/
V93=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V94; pile[WZ2]=V93; 
(*f[39])( );     /*SDX0(20,V94,V93,V67)*/
V67=pile[WZ3]; 
V66=incon;
if((x[jvj+46]!=178)) goto l44;
V66=V67;
l48:pile[v[22]]=V66; 
(*f[40])( );     /*SLG0(V66)*/
l49:if((V68!=2)) goto l17;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l17;
l44:pile[v[22]]=V67; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V67,(-9543),V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V79; pile[WZ1]=W; 
(*f[37])( );     /*SRA0(V79,W,V66)*/
V66=pile[WZ2]; 
goto l48;
l45:if((V68<4)) goto l46;
goto l17;
l46:pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(130,TL,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=208; pile[WZ1]=jvj+47; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(208,jvj+47,jvj+50)*/
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(583,TL,jvj+51)*/
V65=incon;
pile[v[22]]=313; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(313,TL,jvj+49)*/
if((x[jvj+49]>0)) goto l43;
V65=66;
goto l47;
}
