#include "dx.h"
void ORKN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V1=0,V50=0,V3=0,V24=0,V9=0,V58=0,V53=0,V54=0,V55=0,V56=0,V57=0,V11=0,V59=0,V61=0,V23=0,V63=0,V7=0,V10=0,V39=0,V40=0,V44=0,V43=0,V46=0,V71=0,V66=0,V67=0,V68=0,V69=0,V70=0,V45=0;
int XP;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=10712;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2107&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
XP=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=563; pile[WZ1]=XP; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(563,XP,jvj+2)*/
if((x[jvj+2]<=0)) goto l22;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=238; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(238,jvj+3,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(0,117,jvj+9)*/
pile[v[22]]=248; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(248,jvj+3,jvj+4)*/
l1:if((x[jvj+4]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(117,jvj+9,V1)*/
V1=pile[WZ2]; 
V10=V11-V1;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(0,117,jvj+16)*/
pile[v[22]]=248; pile[WZ1]=jvj+3; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(248,jvj+3,jvj+15)*/
l4:if((x[jvj+15]>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(117,jvj+16,V3)*/
V3=pile[WZ2]; 
V9=V10/V3;
V7=incon;
if((V9>0)) goto l12;
V7=1;
l13:pile[v[22]]=248; pile[WZ1]=jvj+3; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(248,jvj+3,jvj+22)*/
l14:if((x[jvj+22]>0)) goto l15;
if((V9>0)) goto l30;
V23=g[145];
if((V23<=0)) goto l30;
V24=vg[145];
if((V24!=0)) goto l8;
if((V23<3)) goto l10;
l8:pile[v[22]]=145; pile[WZ1]=10712; pile[WZ2]=0; pile[WZ3]=(-706); pile[WZ4]=V9; pile[WZ5]=(-625); pile[v[22]+6]=jvj+3; pile[v[22]+7]=jvj+17; 
(*f[353])( );     /*INTERP7(145,10712,0,(-706),V9,(-625),jvj+3,jvj+17)*/
if((x[jvj+17]==135)) goto l9;
l30:pile[v[22]]=XP; 
(*f[2019])( );     /*ORKM0(XP)*/
l31:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=161; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(161,jvj+5,jvj+6)*/
pile[v[22]]=122; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(122,jvj+5,jvj+7)*/
pile[v[22]]=447; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(447,jvj+7,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(jvj+8,jvj+6,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=117; pile[WZ2]=V13; 
(*f[186])( );     /*BTC0(jvj+9,117,V13)*/
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
l5:x[jvj+10]=s[x[jvj+15]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+15];
pile[v[22]]=161; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(161,jvj+10,jvj+11)*/
pile[v[22]]=122; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(122,jvj+10,jvj+12)*/
pile[v[22]]=447; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(447,jvj+12,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+13; pile[WZ3]=jvj+14; 
(*f[45])( );if(v[102]) goto l7;     /*FNDZ0(jvj+11,jvj+13,V50,jvj+14)*/
V50=pile[WZ2]; 
l6:x[jvj+15]=t[x[jvj+15]];
goto l4;
l7:pile[v[22]]=jvj+16; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+16,117,1)*/
goto l6;
l9:if((V23<4)) goto l10;
goto l30;
l10:pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+3,jvj+18)*/
V58=x[jvj+18];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V53; pile[WZ2]=10712; 
(*f[98])( );     /*SRA3(135,V53,10712,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(41,2,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V55,125,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V58; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(20,V58,V56,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V11; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(41,V11,V57,V59)*/
V59=pile[WZ3]; 
pile[WZ1]=V9; pile[WZ2]=V59; 
(*f[39])( );     /*SDX0(41,V9,V59,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; 
(*f[40])( );     /*SLG0(V61)*/
l11:if((V23!=2)) goto l30;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l30;
l12:V7=V9;
goto l13;
l15:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=161; pile[WZ1]=jvj+23; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(161,jvj+23,jvj+19)*/
pile[v[22]]=122; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(122,jvj+23,jvj+24)*/
pile[v[22]]=447; pile[WZ1]=jvj+24; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(447,jvj+24,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ3]=jvj+21; 
(*f[45])( );if(v[102]) goto l17;     /*FNDZ0(jvj+19,jvj+20,V63,jvj+21)*/
V63=pile[WZ2]; 
l16:x[jvj+22]=t[x[jvj+22]];
goto l14;
l17:pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=V7; 
(*f[43])( );     /*CHGC2(jvj+19,jvj+20,V7)*/
pile[v[22]]=jvj+3; pile[WZ1]=XP; 
(*f[2018])( );     /*ORKC0(jvj+3,XP)*/
pile[v[22]]=jvj+19; 
(*f[2018])( );     /*ORKC0(jvj+19,XP)*/
goto l16;
l18:pile[v[22]]=515; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(515,jvj+25,V40)*/
V40=pile[WZ2]; 
l25:x[jvj+29]=t[x[jvj+29]];
l23:if((x[jvj+29]>0)) goto l24;
V45=g[144];
if((V45<=0)) goto l31;
V46=vg[144];
if((V46!=0)) goto l27;
if((V45<3)) goto l29;
l27:pile[v[22]]=144; pile[WZ1]=10712; pile[WZ2]=0; pile[WZ3]=(-610); pile[WZ4]=XP; pile[WZ5]=jvj+30; 
(*f[232])( );     /*INTERP3(144,10712,0,(-610),XP,jvj+30)*/
if((x[jvj+30]==135)) goto l28;
goto l31;
l19:pile[v[22]]=238; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(238,jvj+25,V44)*/
V44=pile[WZ2]; 
V43=V44/2;
x[jvj+26]=d[108];z[jvj+26]=0;
l20:if((x[jvj+26]<=0)) goto l26;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=447; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(447,jvj+27,jvj+28)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+28; pile[WZ2]=V43; 
(*f[43])( );     /*CHGC2(jvj+25,jvj+28,V43)*/
pile[WZ1]=jvj+27; pile[WZ2]=XP; 
(*f[2106])( );     /*ORKC1(jvj+25,jvj+27,XP)*/
l21:x[jvj+26]=t[x[jvj+26]];
goto l20;
l22:pile[v[22]]=554; pile[WZ1]=XP; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(554,XP,jvj+29)*/
goto l23;
l24:x[jvj+25]=s[x[jvj+29]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+29];
pile[v[22]]=510; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(510,jvj+25,V39)*/
V39=pile[WZ2]; 
goto l25;
l26:pile[v[22]]=jvj+25; pile[WZ1]=XP; 
(*f[2018])( );     /*ORKC0(jvj+25,XP)*/
goto l30;
l28:if((V45<4)) goto l29;
goto l31;
l29:V71=x[XP];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V66; pile[WZ2]=10712; 
(*f[98])( );     /*SRA3(135,V66,10712,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(41,1,V67,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=V68; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V68,125,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V71; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(41,V71,V69,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; 
(*f[40])( );     /*SLG0(V70)*/
if((V45!=2)) goto l31;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l31;
}
