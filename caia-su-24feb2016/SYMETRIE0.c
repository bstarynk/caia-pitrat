#include "dx.h"
void SYMETRIE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V20=0,V26=0,V25=0,V14=0,PP=0,V41=0,V33=0,V47=0,V=0,V56=0,V51=0,V93=0,V92=0,V69=0,V68=0,I=0,V62=0,V66=0,V71=0,V96=0,VV=0,V94=0,V95=0,V78=0,V98=0,V101=0,V97=0,V99=0,V100=0,V83=0,V86=0,V103=0,V104=0,V105=0,V106=0,V108=0,V82=0,V127=0,V126=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=78;
x[jvj+1]=11082;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==969&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+32]=x[jvj+39]=x[jvj+45]=x[jvj+57]=x[jvj+33]=incon;
x[jvj+2]=vo[30];z[jvj+2]=vz[30];
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(109,jvj+2,jvj+68)*/
pile[v[22]]=983; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(983,jvj+68,jvj+69)*/
pile[v[22]]=878; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(878,jvj+69,jvj+70)*/
l53:if((x[jvj+70]<=0)) goto l51;
x[jvj+71]=s[x[jvj+70]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+70];
pile[v[22]]=163; pile[WZ1]=jvj+71; 
(*f[44])( );if(v[102]) goto l54;     /*FNDC1(163,jvj+71,V127)*/
V127=pile[WZ2]; 
pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l54;     /*FNDC1(163,jvj+2,V126)*/
V126=pile[WZ2]; 
if((V127==V126)) goto l54;
x[jvj+70]=t[x[jvj+70]];
goto l53;
l2:x[jvj+72]=t[x[jvj+72]];
l1:if((x[jvj+72]<=0)) goto l46;
x[jvj+7]=s[x[jvj+72]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+72];
pile[v[22]]=447; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(447,jvj+7,jvj+8)*/
pile[v[22]]=459; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(459,jvj+7,jvj+9)*/
x[jvj+73]=x[jvj+6] ;z[jvj+73]=z[jvj+6];
l3:if((x[jvj+73]<=0)) goto l2;
x[jvj+10]=s[x[jvj+73]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+73];
pile[v[22]]=447; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(447,jvj+10,jvj+11)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[760])( );     /*MEMEX0(jvj+8,jvj+11,jvj+12)*/
if((x[jvj+12]==135)) goto l5;
l4:x[jvj+73]=t[x[jvj+73]];
goto l3;
l5:pile[v[22]]=459; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(459,jvj+10,jvj+13)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[760])( );     /*MEMEX0(jvj+9,jvj+13,jvj+14)*/
if((x[jvj+14]==134)) goto l8;
goto l4;
l7:x[jvj+5]=s[x[jvj+16]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+16];
pile[v[22]]=1179; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1179,jvj+3,jvj+4)*/
pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1179,jvj+5,jvj+6)*/
x[jvj+72]=x[jvj+4] ;z[jvj+72]=z[jvj+4];
goto l1;
l8:x[jvj+16]=t[x[jvj+16]];
l6:if((x[jvj+16]>0)) goto l7;
x[jvj+33]=x[jvj+3] ;z[jvj+33]=z[jvj+3];
l46:if(x[jvj+33]!=incon) goto l16;
l51:x[jvj+1]=incon; v[0]=jvj; return;
l10:x[jvj+74]=t[x[jvj+74]];
l9:if((x[jvj+74]<=0)) goto l14;
x[jvj+20]=s[x[jvj+74]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+74];
pile[v[22]]=642; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+20,V20)*/
V20=pile[WZ2]; 
if((V20!=V21)) goto l10;
pile[v[22]]=80; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(80,jvj+21,jvj+22)*/
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+22,V26)*/
V26=pile[WZ2]; 
x[jvj+23]=vo[16];z[jvj+23]=vz[16];
pile[v[22]]=1179; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1179,jvj+23,jvj+24)*/
x[jvj+75]=x[jvj+24] ;z[jvj+75]=z[jvj+24];
l11:if((x[jvj+75]<=0)) goto l14;
x[jvj+25]=s[x[jvj+75]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+75];
pile[v[22]]=642; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+25,V25)*/
V25=pile[WZ2]; 
if((V25!=V26)) goto l12;
pile[v[22]]=447; pile[WZ1]=jvj+20; pile[WZ2]=459; pile[WZ3]=jvj+25; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(447,jvj+20,459,jvj+25,jvj+31)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[196])( );     /*PLUF0(jvj+28,jvj+31,jvj+32)*/
l14:pile[v[22]]=498; pile[WZ1]=jvj+21; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(498,jvj+21,jvj+27)*/
l13:x[jvj+21]=x[jvj+27] ;z[jvj+21]=z[jvj+27];
pile[v[22]]=287; pile[WZ1]=jvj+21; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(287,jvj+21,jvj+17)*/
pile[v[22]]=498; pile[WZ1]=jvj+17; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(498,jvj+17,jvj+29)*/
pile[v[22]]=436; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(436,jvj+29,jvj+30)*/
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+30,V14)*/
V14=pile[WZ2]; 
if((V14!=(-1544))) goto l14;
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+17,V21)*/
V21=pile[WZ2]; 
x[jvj+18]=vo[16];z[jvj+18]=vz[16];
pile[v[22]]=1179; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1179,jvj+18,jvj+19)*/
x[jvj+74]=x[jvj+19] ;z[jvj+74]=z[jvj+19];
goto l9;
l12:x[jvj+75]=t[x[jvj+75]];
goto l11;
l15:if(x[jvj+32]!=incon) goto l52;
goto l46;
l16:V33=incon;
pile[v[22]]=1180; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(1180,jvj+15,PP)*/
PP=pile[WZ2]; 
V41=PP+1;
V33=V41;
l17:if(V33==incon) goto l18;
l47:if(V33!=incon) goto l19;
goto l51;
l18:V33=1;
goto l47;
l19:x[jvj+39]=0 ;z[jvj+39]=0;
if(x[jvj+39]!=incon) goto l20;
l48:if(x[jvj+39]!=incon) goto l49;
goto l51;
l20:pile[v[22]]=1179; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(1179,jvj+33,jvj+34)*/
l21:if((x[jvj+34]<=0)) goto l48;
x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=447; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(447,jvj+35,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+36,jvj+37)*/
if((x[jvj+37]!=484)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+36,jvj+38)*/
pile[v[22]]=140; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+38,V47)*/
V47=pile[WZ2]; 
V=V47;
pile[v[22]]=jvj+39; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+39,V)*/
l22:x[jvj+34]=t[x[jvj+34]];
goto l21;
l23:pile[v[22]]=480; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(480,jvj+42,jvj+43)*/
x[jvj+76]=x[jvj+43] ;z[jvj+76]=z[jvj+43];
l24:if((x[jvj+76]<=0)) goto l28;
x[jvj+40]=s[x[jvj+76]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+76];
pile[v[22]]=489; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(489,jvj+40,jvj+41)*/
if((x[jvj+41]<=0)) goto l25;
x[jvj+44]=s[x[jvj+41]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+41];
pile[v[22]]=130; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+44,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=jvj+45; pile[WZ1]=V56; 
(*f[207])( );     /*PLUE2(jvj+45,V56)*/
l25:x[jvj+76]=t[x[jvj+76]];
goto l24;
l29:V93=x[jvj+45];
pile[v[22]]=23; pile[WZ1]=V93; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(23,V93,0,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=V92; 
(*f[40])( );     /*SLG0(V92)*/
l27:x[jvj+47]=t[x[jvj+47]];
l26:if((x[jvj+47]<=0)) goto l39;
x[jvj+42]=s[x[jvj+47]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+47];
pile[v[22]]=436; pile[WZ1]=jvj+42; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(436,jvj+42,jvj+48)*/
pile[v[22]]=140; pile[WZ1]=jvj+48; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+48,V51)*/
V51=pile[WZ2]; 
if((V51!=(-2041))) goto l27;
x[jvj+45]=0 ;z[jvj+45]=0;
if(x[jvj+45]!=incon) goto l23;
l28:if(x[jvj+45]!=incon) goto l29;
goto l27;
l30:pile[v[22]]=1179; pile[WZ1]=jvj+33; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(1179,jvj+33,jvj+49)*/
for(i=x[jvj+49],V69=0;i>0;i=t[i],V69++)  ;
V68=V69+1;
I=0;
l31:if((I>V68)) goto l41;
x[jvj+77]=x[jvj+49] ;z[jvj+77]=z[jvj+49];
l32:if((x[jvj+77]>0)) goto l33;
I++;
goto l31;
l33:x[jvj+50]=s[x[jvj+77]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+77];
pile[v[22]]=447; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(447,jvj+50,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+51,jvj+52)*/
if((x[jvj+52]!=484)) goto l34;
pile[v[22]]=111; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+51,jvj+53)*/
pile[v[22]]=140; pile[WZ1]=jvj+53; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+53,V62)*/
V62=pile[WZ2]; 
if((VV!=V62)) goto l34;
pile[v[22]]=102; pile[WZ1]=jvj+51; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+51,jvj+54)*/
pile[v[22]]=130; pile[WZ1]=jvj+54; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+54,V66)*/
V66=pile[WZ2]; 
if((I!=V66)) goto l34;
pile[v[22]]=459; pile[WZ1]=jvj+50; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(459,jvj+50,jvj+55)*/
pile[v[22]]=102; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+55,jvj+56)*/
pile[v[22]]=130; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+56,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=jvj+57; pile[WZ1]=V71; 
(*f[207])( );     /*PLUE2(jvj+57,V71)*/
l34:x[jvj+77]=t[x[jvj+77]];
goto l32;
l35:if((x[jvj+57]==0)) goto l36;
V96=x[jvj+57];
pile[v[22]]=0; pile[WZ1]=VV; 
(*f[37])( );     /*SRA0(0,VV,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V96; pile[WZ2]=V94; 
(*f[39])( );     /*SDX0(23,V96,V94,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; 
(*f[40])( );     /*SLG0(V95)*/
l36:if((x[jvj+57]!=0)) goto l40;
pile[v[22]]=1179; pile[WZ1]=jvj+33; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(1179,jvj+33,jvj+58)*/
x[jvj+78]=x[jvj+58] ;z[jvj+78]=z[jvj+58];
l37:if((x[jvj+78]<=0)) goto l40;
x[jvj+59]=s[x[jvj+78]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+78];
pile[v[22]]=447; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(447,jvj+59,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+60,jvj+61)*/
if((x[jvj+61]!=484)) goto l38;
pile[v[22]]=111; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+60,jvj+62)*/
pile[v[22]]=140; pile[WZ1]=jvj+62; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(140,jvj+62,V78)*/
V78=pile[WZ2]; 
if((VV!=V78)) goto l38;
pile[v[22]]=459; pile[WZ1]=jvj+59; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(459,jvj+59,jvj+63)*/
V98=x[jvj+60];
V101=x[jvj+63];
pile[v[22]]=20; pile[WZ1]=V98; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V98,0,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V97,58,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V101; pile[WZ2]=V99; 
(*f[39])( );     /*SDX0(20,V101,V99,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=V100; 
(*f[40])( );     /*SLG0(V100)*/
l38:x[jvj+78]=t[x[jvj+78]];
goto l37;
l43:if((V82>=4)) goto l44;
pile[v[22]]=493; pile[WZ1]=jvj+65; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(493,jvj+65,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V103; pile[WZ2]=11082; 
(*f[98])( );     /*SRA3(135,V103,11082,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=V104; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V104,125,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V33; pile[WZ2]=V105; 
(*f[39])( );     /*SDX0(41,V33,V105,V106)*/
V106=pile[WZ3]; 
pile[WZ1]=V86; pile[WZ2]=V106; 
(*f[39])( );     /*SDX0(41,V86,V106,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=V108; 
(*f[40])( );     /*SLG0(V108)*/
l44:if((V82!=2)) goto l50;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l50:pile[v[22]]=jvj+15; pile[WZ1]=1180; pile[WZ2]=V33; 
(*f[43])( );     /*CHGC2(jvj+15,1180,V33)*/
pile[WZ1]=1179; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+15,1179,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=117; pile[WZ2]=V33; 
(*f[43])( );     /*CHGC2(jvj+33,117,V33)*/
x[jvj+46]=vo[16];z[jvj+46]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(454,jvj+46,jvj+47)*/
goto l26;
l45:V82=g[471];
if((V82<=0)) goto l50;
V83=vg[471];
if((V83!=0)) goto l42;
if((V82<3)) goto l43;
l42:pile[v[22]]=471; pile[WZ1]=11082; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=V33; pile[WZ5]=jvj+64; 
(*f[612])( );     /*INTERP9(471,11082,0,(-625),V33,jvj+64)*/
if((x[jvj+64]==135)) goto l43;
goto l50;
l49:x[jvj+65]=vo[12];z[jvj+65]=vz[12];
pile[v[22]]=1081; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(1081,jvj+65,jvj+66)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[1328])( );     /*VERIFSYM0(jvj+33,jvj+66,jvj+67)*/
if((x[jvj+67]==135)) goto l45;
goto l51;
l52:pile[v[22]]=jvj+32; pile[WZ1]=1179; pile[WZ2]=jvj+3; 
(*f[300])( );     /*TRI10(jvj+32,1179,jvj+3)*/
pile[v[22]]=1179; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1179,jvj+15,jvj+16)*/
goto l6;
l54:x[jvj+15]=x[jvj+71] ;z[jvj+15]=z[jvj+71];
x[jvj+32]=0 ;z[jvj+32]=0;
x[jvj+26]=vo[14];z[jvj+26]=vz[14];
pile[v[22]]=865; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(865,jvj+26,jvj+27)*/
x[jvj+28]=d[72];z[jvj+28]=0;
goto l13;
l39:if((x[jvj+39]<=0)) goto l51;
VV=s[x[jvj+39]];
x[jvj+57]=0 ;z[jvj+57]=0;
if(x[jvj+57]!=incon) goto l30;
l41:if(x[jvj+57]!=incon) goto l35;
l40:x[jvj+39]=t[x[jvj+39]];
goto l39;
}
