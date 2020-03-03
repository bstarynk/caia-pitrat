#include "dx.h"
void STOSYM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V15=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V39=0,V11=0,V26=0,V41=0,V42=0,V43=0,V44=0,V45=0,V46=0,V22=0,V47=0,V25=0,V55=0,V54=0,V66=0,V65=0,V71=0,V72=0,V84=0,V88=0,V91=0,V87=0,V83=0,V81=0,V82=0,V90=0,V92=0,V78=0,V5=0,V126=0,V127=0,V128=0,V129=0,V130=0,V133=0,V135=0,V139=0,V138=0,V141=0,V123=0,V140=0,V119=0,V113=0;
int A;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=70;
x[jvj+1]=11081;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4062&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[30];z[jvj+2]=vz[30];
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(109,jvj+2,jvj+22)*/
pile[v[22]]=983; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(983,jvj+22,jvj+23)*/
pile[v[22]]=878; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(878,jvj+23,jvj+24)*/
l21:if((x[jvj+24]<=0)) goto l20;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=163; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(163,jvj+25,V55)*/
V55=pile[WZ2]; 
pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(163,jvj+2,V54)*/
V54=pile[WZ2]; 
if((V55==V54)) goto l22;
x[jvj+24]=t[x[jvj+24]];
goto l21;
l2:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
for(a=x[A];a>0;a=t[a]) if(s[a]==x[jvj+7]) goto l3;
pile[v[22]]=1070; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1070,jvj+7,jvj+8)*/
if((x[jvj+8]!=68)) goto l3;
pile[v[22]]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+7)*/
l3:x[jvj+6]=t[x[jvj+6]];
l1:if((x[jvj+6]>0)) goto l2;
x[jvj+19]=x[jvj+9] ;z[jvj+19]=z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=844; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+10,844,68)*/
pile[v[22]]=1179; pile[WZ1]=jvj+10; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1179,jvj+10,jvj+18)*/
l11:if((x[jvj+18]>0)) goto l12;
pile[v[22]]=1190; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(1190,jvj+10,V22)*/
V22=pile[WZ2]; 
if((V22<=0)) goto l20;
pile[v[22]]=jvj+10; 
(*f[4097])( );     /*DETRUISYM0(jvj+10)*/
if((V22<=50)) goto l19;
V25=g[626];
if((V25<=0)) goto l20;
V26=vg[626];
if((V26!=0)) goto l16;
if((V25<3)) goto l18;
l16:pile[v[22]]=626; pile[WZ1]=11081; pile[WZ2]=0; pile[WZ3]=jvj+21; 
(*f[291])( );     /*INTERP4(626,11081,0,jvj+21)*/
if((x[jvj+21]==135)) goto l17;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l5:x[jvj+65]=t[x[jvj+65]];
l4:if((x[jvj+65]<=0)) goto l14;
x[jvj+13]=s[x[jvj+65]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+65];
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=923)) goto l5;
pile[v[22]]=1179; pile[WZ1]=jvj+16; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(1179,jvj+16,jvj+43)*/
l36:if((x[jvj+43]>0)) goto l59;
pile[v[22]]=1179; pile[WZ1]=jvj+16; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(1179,jvj+16,jvj+44)*/
x[jvj+70]=x[jvj+44] ;z[jvj+70]=z[jvj+44];
l37:if((x[jvj+70]>0)) goto l58;
V5=135;
l38:pile[v[22]]=1179; pile[WZ1]=jvj+16; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(1179,jvj+16,jvj+45)*/
l39:if((x[jvj+45]>0)) goto l40;
if((V5==135)) goto l14;
l13:x[jvj+18]=t[x[jvj+18]];
goto l11;
l7:if((V11<4)) goto l8;
l15:pile[v[22]]=jvj+16; pile[WZ1]=158; pile[WZ2]=301; 
(*f[35])( );     /*CHGC1(jvj+16,158,301)*/
pile[v[22]]=jvj+10; pile[WZ1]=1190; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+10,1190,1)*/
goto l13;
l8:pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+16,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=11081; 
(*f[98])( );     /*SRA3(135,V32,11081,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(41,1,V33,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V34,125,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=844; 
(*f[42])( );     /*SRA1(135,V35,844,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V15; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(41,V15,V36,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V37; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,V37,301,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
l9:if((V11!=2)) goto l15;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l15;
l12:x[jvj+16]=s[x[jvj+18]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+18];
x[jvj+11]=vo[33];z[jvj+11]=vz[33];
pile[v[22]]=477; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(477,jvj+11,jvj+12)*/
x[jvj+65]=x[jvj+12] ;z[jvj+65]=z[jvj+12];
goto l4;
l14:pile[v[22]]=jvj+16; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[1328])( );     /*VERIFSYM0(jvj+16,jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l23;
goto l13;
l17:if((V25<4)) goto l18;
goto l20;
l18:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V41; pile[WZ2]=11081; 
(*f[98])( );     /*SRA3(135,V41,11081,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(41,1,V42,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V43,125,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V44; pile[WZ2]=1190; 
(*f[42])( );     /*SRA1(135,V44,1190,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V45,61,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=V22; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V46,V22,41,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; 
(*f[40])( );     /*SLG0(V47)*/
if((V25!=2)) goto l20;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l20;
l19:if((v[107]<=0)) goto l20;
pile[v[22]]=jvj+10; 
(*f[4098])( );     /*DETRUISYMBIS0(jvj+10)*/
goto l20;
l22:x[jvj+3]=x[jvj+25] ;z[jvj+3]=z[jvj+25];
pile[v[22]]=1179; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1179,jvj+3,jvj+4)*/
if((x[jvj+4]==0)) goto l20;
x[jvj+10]=x[jvj+3] ;z[jvj+10]=z[jvj+3];
x[jvj+9]=0 ;z[jvj+9]=0;
x[jvj+5]=vo[33];z[jvj+5]=vz[33];
pile[v[22]]=509; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(509,jvj+5,jvj+6)*/
goto l1;
l23:pile[v[22]]=1179; pile[WZ1]=jvj+16; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1179,jvj+16,jvj+26)*/
pile[v[22]]=498; pile[WZ1]=jvj+10; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(498,jvj+10,jvj+27)*/
pile[v[22]]=983; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(983,jvj+27,jvj+28)*/
pile[v[22]]=878; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(878,jvj+28,jvj+29)*/
l24:if((x[jvj+29]<=0)) goto l31;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=163; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(163,jvj+30,V66)*/
V66=pile[WZ2]; 
pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(163,jvj+10,V65)*/
V65=pile[WZ2]; 
if((V66==V65)) goto l25;
x[jvj+29]=t[x[jvj+29]];
goto l24;
l30:V82=V83;
l29:pile[v[22]]=41; pile[WZ1]=V84; pile[WZ2]=V82; 
(*f[39])( );     /*SDX0(41,V84,V82,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V91; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(20,V91,V90,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=V92; 
(*f[40])( );     /*SLG0(V92)*/
l10:V11=g[626];
if((V11<=0)) goto l15;
V12=vg[626];
if((V12!=0)) goto l6;
if((V11<3)) goto l8;
l6:pile[v[22]]=626; pile[WZ1]=11081; pile[WZ2]=0; pile[WZ3]=(-612); pile[WZ4]=jvj+16; pile[WZ5]=jvj+17; 
(*f[232])( );     /*INTERP3(626,11081,0,(-612),jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l7;
goto l15;
l31:x[jvj+40]=29 ;z[jvj+40]=29;
l28:pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+16,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=jvj+10; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(498,jvj+10,jvj+39)*/
V88=x[jvj+39];
V91=x[jvj+40];
pile[v[22]]=jvj+16; pile[WZ1]=1308; pile[WZ2]=jvj+40; 
(*f[35])( );     /*CHGC1(jvj+16,1308,jvj+40)*/
pile[v[22]]=20; pile[WZ1]=1308; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,1308,0,V87)*/
V87=pile[WZ3]; 
pile[WZ1]=V88; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(20,V88,V87,V83)*/
V83=pile[WZ3]; 
V82=incon;
pile[v[22]]=163; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(163,jvj+10,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=V83; pile[WZ1]=V81; 
(*f[37])( );     /*SRA0(V83,V81,V82)*/
V82=pile[WZ2]; 
goto l29;
l32:x[jvj+41]=s[x[jvj+67]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+67];
pile[v[22]]=117; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(117,jvj+41,V78)*/
V78=pile[WZ2]; 
if((V78!=1)) goto l33;
pile[v[22]]=218; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(218,jvj+41,jvj+42)*/
if((x[jvj+42]==688)) goto l34;
l33:x[jvj+67]=t[x[jvj+67]];
l27:if((x[jvj+67]>0)) goto l32;
x[jvj+40]=30 ;z[jvj+40]=30;
goto l28;
l34:x[jvj+26]=t[x[jvj+26]];
l25:if((x[jvj+26]<=0)) goto l31;
x[jvj+31]=s[x[jvj+26]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+26];
pile[v[22]]=447; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(447,jvj+31,jvj+32)*/
pile[v[22]]=459; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(459,jvj+31,jvj+33)*/
if((x[jvj+32]==x[jvj+33])) goto l34;
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+32,jvj+34)*/
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+34,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=454; pile[WZ1]=jvj+30; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(454,jvj+30,jvj+35)*/
x[jvj+66]=x[jvj+35] ;z[jvj+66]=z[jvj+35];
l26:if((x[jvj+66]<=0)) goto l34;
x[jvj+36]=s[x[jvj+66]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+66];
pile[v[22]]=436; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(436,jvj+36,jvj+37)*/
pile[v[22]]=140; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+37,V72)*/
V72=pile[WZ2]; 
if((V72!=V71)) goto l35;
pile[v[22]]=925; pile[WZ1]=jvj+36; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(925,jvj+36,jvj+38)*/
x[jvj+67]=x[jvj+38] ;z[jvj+67]=z[jvj+38];
goto l27;
l35:x[jvj+66]=t[x[jvj+66]];
goto l26;
l40:x[jvj+46]=s[x[jvj+45]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+45];
V126=x[jvj+46];
pile[v[22]]=jvj+46; pile[WZ1]=0; pile[WZ2]=V126; pile[WZ3]=475; 
(*f[285])( );     /*ENLY0(jvj+46,0,V126,475,V127,V128)*/
V127=pile[WZ4]; V128=pile[WZ5]; 
pile[WZ1]=V128; pile[WZ2]=V127; pile[WZ3]=502; 
(*f[285])( );     /*ENLY0(jvj+46,V128,V127,502,V129,V130)*/
V129=pile[WZ4]; V130=pile[WZ5]; 
x[jvj+45]=t[x[jvj+45]];
goto l39;
l41:V5=134;
goto l38;
l47:V140=s[V141];
for(a=x[jvj+55];a>0;a=t[a]) if(s[a]==V140) goto l49;
l48:V123=134;
l42:if((V123==134)) goto l41;
l43:x[jvj+70]=t[x[jvj+70]];
goto l37;
l49:V141=t[V141];
l46:if((V141>0)) goto l47;
V123=135;
goto l42;
l50:V119=s[V135];
x[jvj+68]=x[jvj+44] ;z[jvj+68]=z[jvj+44];
l51:if((x[jvj+68]<=0)) goto l52;
x[jvj+52]=s[x[jvj+68]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+68];
pile[v[22]]=475; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(475,jvj+52,jvj+53)*/
if((x[jvj+53]!=V119)) goto l53;
pile[v[22]]=502; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(502,jvj+52,jvj+54)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+54; 
(*f[68])( );     /*PLUE0(jvj+55,jvj+54)*/
l52:V135=t[V135];
l45:if((V135>0)) goto l50;
for(i=x[jvj+59],V139=0;i>0;i=t[i],V139++)  ;
for(i=x[jvj+55],V138=0;i>0;i=t[i],V138++)  ;
if((V139!=V138)) goto l48;
V141=x[jvj+59];
goto l46;
l53:x[jvj+68]=t[x[jvj+68]];
goto l51;
l54:V113=s[V133];
x[jvj+69]=x[jvj+44] ;z[jvj+69]=z[jvj+44];
l55:if((x[jvj+69]<=0)) goto l56;
x[jvj+56]=s[x[jvj+69]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+69];
pile[v[22]]=475; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(475,jvj+56,jvj+57)*/
if((x[jvj+57]!=V113)) goto l57;
pile[v[22]]=502; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(502,jvj+56,jvj+58)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+58; 
(*f[68])( );     /*PLUE0(jvj+59,jvj+58)*/
l56:V133=t[V133];
l44:if((V133>0)) goto l54;
x[jvj+55]=0 ;z[jvj+55]=0;
pile[v[22]]=921; pile[WZ1]=jvj+49; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(921,jvj+49,jvj+51)*/
V135=x[jvj+51];
goto l45;
l57:x[jvj+69]=t[x[jvj+69]];
goto l55;
l58:x[jvj+47]=s[x[jvj+70]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+70];
pile[v[22]]=475; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(475,jvj+47,jvj+48)*/
pile[v[22]]=502; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(502,jvj+47,jvj+49)*/
if((x[jvj+48]==x[jvj+49])) goto l43;
x[jvj+59]=0 ;z[jvj+59]=0;
pile[v[22]]=921; pile[WZ1]=jvj+48; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(921,jvj+48,jvj+50)*/
V133=x[jvj+50];
goto l44;
l59:x[jvj+60]=s[x[jvj+43]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+43];
pile[v[22]]=447; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(447,jvj+60,jvj+61)*/
pile[v[22]]=459; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(459,jvj+60,jvj+62)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+63; 
(*f[200])( );if(v[102]) goto l60;     /*NDD0(jvj+61,jvj+63)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+64; 
(*f[200])( );if(v[102]) goto l60;     /*NDD0(jvj+62,jvj+64)*/
pile[v[22]]=jvj+60; pile[WZ1]=475; pile[WZ2]=jvj+63; 
(*f[35])( );     /*CHGC1(jvj+60,475,jvj+63)*/
pile[WZ1]=502; pile[WZ2]=jvj+64; 
(*f[35])( );     /*CHGC1(jvj+60,502,jvj+64)*/
l60:x[jvj+43]=t[x[jvj+43]];
goto l36;
}
