#include "dx.h"
void ORKM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V171=0,V18=0,V3=0,V15=0,V4=0,V5=0,V26=0,V30=0,V32=0,V40=0,P=0,V47=0,V173=0,V175=0,V177=0,V78=0,V82=0,V63=0,V65=0,V87=0,V75=0,V184=0,V186=0,V188=0,V180=0,V181=0,V182=0,V183=0,V185=0,V187=0,V189=0,V86=0,V191=0,V106=0,V110=0,V98=0,V114=0,V119=0,V121=0,V115=0,V125=0,V126=0,V127=0,V128=0,V155=0,V146=0,V193=0,V76=0,V35=0,V36=0,V34=0,V137=0,V139=0,V141=0,V140=0,V11=0,T=0,V1=0,V165=0;
int XP;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=109;
x[jvj+1]=10710;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2019&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
XP=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:pile[v[22]]=XP; pile[WZ1]=728; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(XP,728,67)*/
pile[v[22]]=563; pile[WZ1]=XP; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(563,XP,jvj+69)*/
l41:if((x[jvj+69]>0)) goto l42;
pile[v[22]]=554; pile[WZ1]=XP; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(554,XP,jvj+73)*/
l46:if((x[jvj+73]>0)) goto l47;
pile[v[22]]=673; pile[WZ1]=XP; pile[WZ2]=jvj+78; 
(*f[33])( );     /*FNDE0(673,XP,jvj+78)*/
l56:if((x[jvj+78]>0)) goto l57;
pile[v[22]]=728; pile[WZ1]=XP; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(728,XP,jvj+98)*/
if((x[jvj+98]==68)) goto l1;
if((x[jvj+98]!=67)) goto l79;
pile[v[22]]=554; pile[WZ2]=jvj+95; 
(*f[33])( );     /*FNDE0(554,XP,jvj+95)*/
if((x[jvj+95]!=0)) goto l78;
pile[v[22]]=563; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(563,XP,jvj+96)*/
if((x[jvj+96]!=0)) goto l78;
pile[v[22]]=673; pile[WZ2]=jvj+97; 
(*f[33])( );     /*FNDE0(673,XP,jvj+97)*/
if((x[jvj+97]!=0)) goto l78;
l79:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:V18=V1*T;
V3=V18;
l73:pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ2]=V3; 
(*f[43])( );     /*CHGC2(jvj+2,jvj+3,V3)*/
pile[v[22]]=515; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(515,jvj+2,V26)*/
V26=pile[WZ2]; 
x[jvj+99]=x[jvj+80] ;z[jvj+99]=z[jvj+80];
l4:if((x[jvj+99]<=0)) goto l74;
x[jvj+6]=s[x[jvj+99]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+99];
pile[v[22]]=161; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(161,jvj+6,jvj+7)*/
x[jvj+5]=x[jvj+7] ;z[jvj+5]=z[jvj+7];
pile[v[22]]=510; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+5,V4)*/
V4=pile[WZ2]; 
l5:x[jvj+99]=t[x[jvj+99]];
goto l4;
l3:pile[v[22]]=528; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(528,jvj+5,V5)*/
V5=pile[WZ2]; 
goto l5;
l6:pile[v[22]]=jvj+5; pile[WZ1]=510; pile[WZ2]=V26; 
(*f[43])( );     /*CHGC2(jvj+5,510,V26)*/
pile[WZ1]=XP; 
(*f[2018])( );     /*ORKC0(jvj+5,XP)*/
goto l5;
l7:V32=V34;
l52:pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+11,jvj+9,jvj+76)*/
P=V32;
if((V34>0)) goto l53;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=P; 
(*f[43])( );     /*CHGC2(jvj+9,jvj+10,P)*/
l53:pile[v[22]]=jvj+9; pile[WZ1]=jvj+8; pile[WZ2]=P; 
(*f[43])( );     /*CHGC2(jvj+9,jvj+8,P)*/
pile[WZ1]=jvj+11; pile[WZ2]=XP; 
(*f[2106])( );     /*ORKC1(jvj+9,jvj+11,XP)*/
pile[WZ1]=XP; 
(*f[2018])( );     /*ORKC0(jvj+9,XP)*/
l9:pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(jvj+8,jvj+9,V47)*/
V47=pile[WZ2]; 
l50:x[jvj+74]=t[x[jvj+74]];
l49:if((x[jvj+74]<=0)) goto l48;
x[jvj+11]=s[x[jvj+74]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+74];
pile[v[22]]=447; pile[WZ1]=jvj+11; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(447,jvj+11,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(jvj+8,jvj+9,V30)*/
V30=pile[WZ2]; 
goto l9;
l8:V32=V40;
goto l52;
l10:pile[v[22]]=201; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(201,jvj+11,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(jvj+12,jvj+9,jvj+13)*/
goto l50;
l13:x[jvj+24]=s[x[jvj+101]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+101];
if((x[jvj+24]==x[jvj+17])) goto l14;
pile[v[22]]=161; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(161,jvj+24,jvj+25)*/
pile[v[22]]=122; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(122,jvj+24,jvj+26)*/
pile[v[22]]=447; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(447,jvj+26,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+27; pile[WZ3]=jvj+28; 
(*f[45])( );if(v[102]) goto l43;     /*FNDZ0(jvj+25,jvj+27,V177,jvj+28)*/
V177=pile[WZ2]; 
l14:x[jvj+101]=t[x[jvj+101]];
l12:if((x[jvj+101]>0)) goto l13;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+35; 
(*f[46])( );     /*TRI0(0,117,jvj+35)*/
pile[v[22]]=248; pile[WZ1]=jvj+22; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(248,jvj+22,jvj+30)*/
x[jvj+102]=x[jvj+30] ;z[jvj+102]=z[jvj+30];
l15:if((x[jvj+102]>0)) goto l16;
pile[v[22]]=117; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(117,jvj+35,V82)*/
V82=pile[WZ2]; 
V63=V82;
V75=V76-V63;
V65=incon;
if((V75>0)) goto l18;
V65=1;
V86=g[142];
if((V86<=0)) goto l45;
V87=vg[142];
if((V87!=0)) goto l19;
if((V86<3)) goto l21;
l19:pile[v[22]]=142; pile[WZ1]=10710; pile[WZ2]=0; pile[WZ3]=(-610); pile[WZ4]=XP; pile[WZ5]=58; pile[v[22]+6]=jvj+22; pile[v[22]+7]=60; pile[v[22]+8]=V75; pile[v[22]+9]=59; pile[v[22]+10]=jvj+17; pile[v[22]+11]=jvj+36; 
(*f[1272])( );     /*INTERP14(142,10710,0,(-610),XP,58,jvj+22,60,V75,59,jvj+17,jvj+36)*/
if((x[jvj+36]==135)) goto l20;
l45:pile[v[22]]=jvj+72; pile[WZ1]=jvj+71; pile[WZ2]=V65; 
(*f[43])( );     /*CHGC2(jvj+72,jvj+71,V65)*/
pile[v[22]]=jvj+22; pile[WZ1]=XP; 
(*f[2018])( );     /*ORKC0(jvj+22,XP)*/
pile[v[22]]=jvj+72; 
(*f[2018])( );     /*ORKC0(jvj+72,XP)*/
l43:x[jvj+69]=t[x[jvj+69]];
goto l41;
l16:x[jvj+31]=s[x[jvj+102]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+102];
if((x[jvj+31]==x[jvj+17])) goto l17;
pile[v[22]]=161; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(161,jvj+31,jvj+32)*/
pile[v[22]]=122; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(122,jvj+31,jvj+33)*/
pile[v[22]]=447; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(447,jvj+33,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(jvj+34,jvj+32,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=jvj+35; pile[WZ1]=117; pile[WZ2]=V78; 
(*f[186])( );     /*BTC0(jvj+35,117,V78)*/
l17:x[jvj+102]=t[x[jvj+102]];
goto l15;
l18:V65=V75;
goto l45;
l20:if((V86<4)) goto l21;
goto l45;
l21:pile[v[22]]=102; pile[WZ1]=jvj+17; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+17,jvj+37)*/
pile[WZ1]=jvj+22; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+22,jvj+38)*/
V184=x[XP];
V186=x[jvj+38];
V188=x[jvj+37];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V180)*/
V180=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V180; pile[WZ2]=10710; 
(*f[98])( );     /*SRA3(135,V180,10710,V181)*/
V181=pile[WZ3]; 
pile[v[22]]=V181; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V181,125,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V184; pile[WZ2]=V182; 
(*f[39])( );     /*SDX0(20,V184,V182,V183)*/
V183=pile[WZ3]; 
pile[WZ1]=V186; pile[WZ2]=V183; 
(*f[39])( );     /*SDX0(20,V186,V183,V185)*/
V185=pile[WZ3]; 
pile[WZ1]=V188; pile[WZ2]=V185; 
(*f[39])( );     /*SDX0(20,V188,V185,V187)*/
V187=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V75; pile[WZ2]=V187; 
(*f[39])( );     /*SDX0(41,V75,V187,V189)*/
V189=pile[WZ3]; 
pile[v[22]]=V189; 
(*f[40])( );     /*SLG0(V189)*/
l22:if((V86!=2)) goto l45;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l45;
l25:x[jvj+39]=s[x[jvj+103]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+103];
pile[v[22]]=161; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(161,jvj+39,jvj+40)*/
pile[v[22]]=122; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(122,jvj+39,jvj+41)*/
pile[v[22]]=447; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(447,jvj+41,jvj+42)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+42; pile[WZ3]=jvj+43; 
(*f[45])( );if(v[102]) goto l58;     /*FNDZ0(jvj+40,jvj+42,V191,jvj+43)*/
V191=pile[WZ2]; 
x[jvj+103]=t[x[jvj+103]];
l24:if((x[jvj+103]>0)) goto l25;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+50; 
(*f[46])( );     /*TRI0(0,117,jvj+50)*/
pile[v[22]]=248; pile[WZ1]=jvj+2; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+45)*/
x[jvj+104]=x[jvj+45] ;z[jvj+104]=z[jvj+45];
l26:if((x[jvj+104]>0)) goto l27;
pile[v[22]]=117; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(117,jvj+50,V110)*/
V110=pile[WZ2]; 
V98=V110;
pile[v[22]]=jvj+2; pile[WZ1]=238; pile[WZ2]=V98; 
(*f[43])( );     /*CHGC2(jvj+2,238,V98)*/
pile[WZ1]=XP; 
(*f[2018])( );     /*ORKC0(jvj+2,XP)*/
l58:x[jvj+78]=t[x[jvj+78]];
goto l56;
l27:x[jvj+46]=s[x[jvj+104]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+104];
pile[v[22]]=161; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(161,jvj+46,jvj+47)*/
pile[v[22]]=122; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(122,jvj+46,jvj+48)*/
pile[v[22]]=447; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(447,jvj+48,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(jvj+49,jvj+47,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=jvj+50; pile[WZ1]=117; pile[WZ2]=V106; 
(*f[186])( );     /*BTC0(jvj+50,117,V106)*/
l28:x[jvj+104]=t[x[jvj+104]];
goto l26;
l30:x[jvj+51]=s[x[jvj+53]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+53];
pile[v[22]]=447; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(447,jvj+51,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(jvj+52,jvj+2,V114)*/
V114=pile[WZ2]; 
l32:x[jvj+53]=t[x[jvj+53]];
l29:if((x[jvj+53]>0)) goto l30;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+58; 
(*f[46])( );     /*TRI0(0,117,jvj+58)*/
x[jvj+55]=d[108];z[jvj+55]=0;
l34:if((x[jvj+55]>0)) goto l35;
pile[v[22]]=117; pile[WZ1]=jvj+58; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(117,jvj+58,V121)*/
V121=pile[WZ2]; 
V115=V121;
pile[v[22]]=jvj+2; pile[WZ1]=238; pile[WZ2]=V115; 
(*f[43])( );     /*CHGC2(jvj+2,238,V115)*/
pile[WZ1]=XP; 
(*f[2018])( );     /*ORKC0(jvj+2,XP)*/
l23:pile[v[22]]=248; pile[WZ1]=jvj+2; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+44)*/
x[jvj+103]=x[jvj+44] ;z[jvj+103]=z[jvj+44];
goto l24;
l31:x[jvj+53]=d[108];z[jvj+53]=0;
goto l29;
l33:pile[v[22]]=jvj+51; pile[WZ1]=jvj+2; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+51,jvj+2,jvj+54)*/
goto l23;
l35:x[jvj+56]=s[x[jvj+55]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+55];
pile[v[22]]=447; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(447,jvj+56,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(jvj+57,jvj+2,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=jvj+58; pile[WZ1]=117; pile[WZ2]=V119; 
(*f[186])( );     /*BTC0(jvj+58,117,V119)*/
l36:x[jvj+55]=t[x[jvj+55]];
goto l34;
l37:pile[v[22]]=515; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(515,jvj+2,V126)*/
V126=pile[WZ2]; 
l68:x[jvj+108]=x[jvj+80] ;z[jvj+108]=z[jvj+80];
l67:if((x[jvj+108]<=0)) goto l31;
x[jvj+85]=s[x[jvj+108]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+108];
pile[v[22]]=161; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(161,jvj+85,jvj+86)*/
x[jvj+87]=x[jvj+86] ;z[jvj+87]=z[jvj+86];
pile[v[22]]=528; pile[WZ1]=jvj+87; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(528,jvj+87,V11)*/
V11=pile[WZ2]; 
T=V11;
x[jvj+88]=d[108];z[jvj+88]=0;
l70:if((x[jvj+88]<=0)) goto l69;
x[jvj+89]=s[x[jvj+88]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+88];
pile[v[22]]=201; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(201,jvj+89,jvj+90)*/
pile[v[22]]=447; pile[WZ1]=jvj+90; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(447,jvj+90,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l72;     /*FNDZ0(jvj+2,jvj+3,V171,jvj+4)*/
V171=pile[WZ2]; 
l71:x[jvj+88]=t[x[jvj+88]];
goto l70;
l38:if((x[jvj+61]==x[jvj+2])) goto l77;
pile[v[22]]=437; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(437,jvj+61,jvj+62)*/
if((x[jvj+62]==248)) goto l77;
l76:x[jvj+109]=t[x[jvj+109]];
l75:if((x[jvj+109]<=0)) goto l31;
x[jvj+93]=s[x[jvj+109]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+109];
pile[v[22]]=161; pile[WZ1]=jvj+93; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(161,jvj+93,jvj+61)*/
pile[v[22]]=122; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(122,jvj+93,jvj+94)*/
pile[v[22]]=447; pile[WZ1]=jvj+94; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(447,jvj+94,jvj+67)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+67; pile[WZ3]=jvj+68; 
(*f[45])( );if(v[102]) goto l38;     /*FNDZ0(jvj+61,jvj+67,V193,jvj+68)*/
V193=pile[WZ2]; 
goto l76;
l40:x[jvj+105]=t[x[jvj+105]];
l39:if((x[jvj+105]<=0)) goto l31;
x[jvj+63]=s[x[jvj+105]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+105];
pile[v[22]]=161; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(161,jvj+63,jvj+64)*/
pile[v[22]]=122; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(122,jvj+63,jvj+65)*/
pile[v[22]]=447; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(447,jvj+65,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(jvj+66,jvj+64,V155)*/
V155=pile[WZ2]; 
V146=V155;
V165=5*V146;
x[jvj+109]=x[jvj+92] ;z[jvj+109]=z[jvj+92];
goto l75;
l42:x[jvj+22]=s[x[jvj+69]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+69];
pile[v[22]]=238; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(238,jvj+22,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=248; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(248,jvj+22,jvj+23)*/
x[jvj+100]=x[jvj+23] ;z[jvj+100]=z[jvj+23];
l11:if((x[jvj+100]<=0)) goto l43;
x[jvj+17]=s[x[jvj+100]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+100];
pile[v[22]]=161; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(161,jvj+17,jvj+18)*/
pile[v[22]]=122; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(122,jvj+17,jvj+19)*/
pile[v[22]]=447; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(447,jvj+19,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+20; pile[WZ3]=jvj+21; 
(*f[45])( );if(v[102]) goto l44;     /*FNDZ0(jvj+18,jvj+20,V175,jvj+21)*/
V175=pile[WZ2]; 
x[jvj+100]=t[x[jvj+100]];
goto l11;
l44:pile[v[22]]=122; pile[WZ1]=jvj+17; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(122,jvj+17,jvj+70)*/
pile[v[22]]=447; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(447,jvj+70,jvj+71)*/
pile[v[22]]=161; pile[WZ1]=jvj+17; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(161,jvj+17,jvj+72)*/
pile[v[22]]=248; pile[WZ1]=jvj+22; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(248,jvj+22,jvj+29)*/
x[jvj+101]=x[jvj+29] ;z[jvj+101]=z[jvj+29];
goto l12;
l47:x[jvj+9]=s[x[jvj+73]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+73];
pile[v[22]]=238; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(238,jvj+9,V35)*/
V35=pile[WZ2]; 
x[jvj+74]=d[108];z[jvj+74]=0;
goto l49;
l48:x[jvj+73]=t[x[jvj+73]];
goto l46;
l51:pile[v[22]]=201; pile[WZ1]=jvj+11; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(201,jvj+11,jvj+75)*/
pile[v[22]]=447; pile[WZ1]=jvj+75; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(447,jvj+75,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(jvj+10,jvj+9,V36)*/
V36=pile[WZ2]; 
V34=V35-V36;
V32=incon;
if((V34>0)) goto l7;
V40=V35/2;
if((V40>0)) goto l8;
V32=1;
goto l52;
l54:pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(jvj+11,jvj+9,jvj+77)*/
pile[v[22]]=201; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(201,jvj+11,jvj+14)*/
pile[v[22]]=447; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(447,jvj+14,jvj+15)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+15; pile[WZ3]=jvj+16; 
(*f[45])( );if(v[102]) goto l55;     /*FNDZ0(jvj+9,jvj+15,V173,jvj+16)*/
V173=pile[WZ2]; 
goto l50;
l55:pile[v[22]]=jvj+9; pile[WZ1]=jvj+8; pile[WZ2]=V35; 
(*f[43])( );     /*CHGC2(jvj+9,jvj+8,V35)*/
pile[WZ1]=XP; 
(*f[2018])( );     /*ORKC0(jvj+9,XP)*/
pile[WZ1]=jvj+11; pile[WZ2]=XP; 
(*f[2106])( );     /*ORKC1(jvj+9,jvj+11,XP)*/
goto l50;
l57:x[jvj+2]=s[x[jvj+78]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+78];
pile[v[22]]=437; pile[WZ1]=jvj+2; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(437,jvj+2,jvj+79)*/
if((x[jvj+79]==135)) goto l59;
if((x[jvj+79]!=404)) goto l31;
pile[v[22]]=248; pile[WZ2]=jvj+92; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+92)*/
x[jvj+105]=x[jvj+92] ;z[jvj+105]=z[jvj+92];
goto l39;
l59:pile[v[22]]=248; pile[WZ1]=jvj+2; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+80)*/
for(i=x[jvj+80],V137=0;i>0;i=t[i],V137++)  ;
if((V137!=2)) goto l68;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(510,jvj+2,V125)*/
V125=pile[WZ2]; 
goto l68;
l61:x[jvj+106]=x[jvj+80] ;z[jvj+106]=z[jvj+80];
l60:if((x[jvj+106]<=0)) goto l68;
x[jvj+81]=s[x[jvj+106]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+106];
pile[v[22]]=161; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(161,jvj+81,jvj+82)*/
x[jvj+59]=x[jvj+82] ;z[jvj+59]=z[jvj+82];
pile[v[22]]=528; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(528,jvj+59,V127)*/
V127=pile[WZ2]; 
l62:x[jvj+106]=t[x[jvj+106]];
goto l60;
l63:pile[v[22]]=510; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(510,jvj+59,V139)*/
V139=pile[WZ2]; 
x[jvj+107]=x[jvj+80] ;z[jvj+107]=z[jvj+80];
l64:if((x[jvj+107]<=0)) goto l62;
x[jvj+83]=s[x[jvj+107]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+107];
pile[v[22]]=161; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(161,jvj+83,jvj+84)*/
x[jvj+60]=x[jvj+84] ;z[jvj+60]=z[jvj+84];
pile[v[22]]=510; pile[WZ1]=jvj+60; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(510,jvj+60,V128)*/
V128=pile[WZ2]; 
l65:x[jvj+107]=t[x[jvj+107]];
goto l64;
l66:pile[v[22]]=528; pile[WZ1]=jvj+60; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(528,jvj+60,V141)*/
V141=pile[WZ2]; 
V140=V141*V139;
pile[v[22]]=jvj+2; pile[WZ1]=515; pile[WZ2]=V139; 
(*f[43])( );     /*CHGC2(jvj+2,515,V139)*/
pile[v[22]]=jvj+60; pile[WZ1]=510; pile[WZ2]=V140; 
(*f[43])( );     /*CHGC2(jvj+60,510,V140)*/
pile[WZ1]=XP; 
(*f[2018])( );     /*ORKC0(jvj+60,XP)*/
pile[v[22]]=jvj+2; 
(*f[2018])( );     /*ORKC0(jvj+2,XP)*/
pile[WZ1]=134; pile[WZ2]=XP; 
(*f[2106])( );     /*ORKC1(jvj+2,134,XP)*/
goto l65;
l69:x[jvj+108]=t[x[jvj+108]];
goto l67;
l72:pile[v[22]]=447; pile[WZ1]=jvj+89; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(447,jvj+89,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(jvj+91,jvj+2,V1)*/
V1=pile[WZ2]; 
V3=incon;
if((x[jvj+89]==134)) goto l2;
V15=V1/T;
V3=V15;
goto l73;
l74:pile[v[22]]=jvj+2; pile[WZ1]=XP; 
(*f[2018])( );     /*ORKC0(jvj+2,XP)*/
pile[WZ1]=jvj+90; pile[WZ2]=XP; 
(*f[2106])( );     /*ORKC1(jvj+2,jvj+90,XP)*/
goto l71;
l77:pile[v[22]]=jvj+61; pile[WZ1]=jvj+67; pile[WZ2]=V165; 
(*f[43])( );     /*CHGC2(jvj+61,jvj+67,V165)*/
pile[v[22]]=jvj+2; pile[WZ1]=XP; 
(*f[2018])( );     /*ORKC0(jvj+2,XP)*/
pile[v[22]]=jvj+93; 
(*f[2018])( );     /*ORKC0(jvj+93,XP)*/
goto l76;
l78:pile[v[22]]=XP; 
(*f[2107])( );     /*ORKN0(XP)*/
goto l79;
}
