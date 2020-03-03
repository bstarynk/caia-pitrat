#include "dx.h"
void MANAGER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V12=0,V14=0,V13=0,V17=0,V29=0,V30=0,V34=0,RG=0,TT=0,V57=0,V55=0,V56=0,V64=0,V65=0,V66=0,V67=0,V40=0,V59=0,V60=0,V61=0,V62=0,V39=0,V49=0,V48=0,V50=0,V52=0,V53=0,V54=0,V68=0,V69=0,V70=0;
int M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=11061;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==191&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[M] ;z[jvj+3]=z[M];
l47:x[jvj+30]=TT=RG=incon;
pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(158,jvj+3,jvj+4)*/
if(x[jvj+4]==287||x[jvj+4]==248||x[jvj+4]==1053||x[jvj+4]==1455) goto l7;
x[jvj+5]=vo[12];z[jvj+5]=vz[12];
pile[v[22]]=jvj+5; 
(*f[600])( );     /*REPARTITEMPS0(jvj+5)*/
l7:if((x[jvj+4]==1271)) goto l8;
if(x[jvj+4]==876||x[jvj+4]==1336) goto l10;
if((x[jvj+4]==493)) goto l11;
if((x[jvj+4]==936)) goto l14;
if((x[jvj+4]==228)) goto l16;
if((x[jvj+4]==1196)) goto l18;
if((x[jvj+4]==1169)) goto l6;
if((x[jvj+4]==1169)) goto l20;
if((x[jvj+4]==248)) goto l24;
if((x[jvj+4]!=1053)) goto l25;
(*f[607])( );     /*EXACOMB0()*/
l46:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+46]=12 ;z[jvj+46]=12;
l15:RG=120;
x[jvj+30]=x[jvj+46] ;z[jvj+30]=z[jvj+46];
l31:if((x[jvj+30]==12)) goto l32;
l33:if(TT!=incon) goto l34;
l36:if((x[jvj+4]==1097)) goto l37;
if((x[jvj+4]!=924)) goto l42;
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(642,jvj+3,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=1543; pile[WZ1]=924; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(1543,924,jvj+39)*/
l38:if((x[jvj+39]<=0)) goto l42;
x[jvj+40]=s[x[jvj+39]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+39];
pile[v[22]]=1542; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(1542,jvj+40,V48)*/
V48=pile[WZ2]; 
if((V48!=V49)) goto l39;
V50=x[jvj+40];
v[228]=1;
pile[v[22]]=1543; pile[WZ1]=924; pile[WZ2]=V50; 
(*f[134])( );     /*OTA0(1543,924,V50)*/
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=jvj+40; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(158,287,218,jvj+40,jvj+41)*/
pile[v[22]]=jvj+41; 
(*f[605])( );     /*MONITEUR0(jvj+41)*/
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l39:x[jvj+39]=t[x[jvj+39]];
goto l38;
l2:x[jvj+45]=12 ;z[jvj+45]=12;
l13:RG=120;
x[jvj+30]=x[jvj+45] ;z[jvj+30]=z[jvj+45];
goto l31;
l3:V12=12;
l27:RG=V12;
if((x[jvj+34]!=80)) goto l30;
if((x[jvj+6]==250)) goto l30;
V14=vv[12];
V13=V14+1;
pile[v[22]]=jvj+6; 
(*f[600])( );     /*REPARTITEMPS0(jvj+6)*/
vv[12]=V13;
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=jvj+6; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(158,287,218,jvj+6,jvj+7)*/
pile[v[22]]=jvj+7; 
(*f[605])( );     /*MONITEUR0(jvj+7)*/
l30:if(x[jvj+30]!=incon) goto l31;
goto l36;
l4:V12=80;
goto l27;
l5:V17=287;
l17:RG=V17;
if((x[jvj+29]!=287)) goto l43;
x[jvj+13]=vo[13];z[jvj+13]=vz[13];
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
x[jvj+15]=vo[16];z[jvj+15]=vz[16];
pile[v[22]]=jvj+15; pile[WZ1]=502; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+15,502,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+14; pile[WZ2]=475; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,jvj+14,475,jvj+43)*/
pile[v[22]]=447; pile[WZ1]=jvj+27; pile[WZ2]=459; pile[WZ3]=jvj+13; pile[WZ4]=jvj+43; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(447,jvj+27,459,jvj+13,jvj+43,jvj+8)*/
pile[v[22]]=jvj+16; 
(*f[600])( );     /*REPARTITEMPS0(jvj+16)*/
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=jvj+16; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(158,287,218,jvj+16,jvj+17)*/
pile[v[22]]=jvj+17; 
(*f[605])( );     /*MONITEUR0(jvj+17)*/
pile[v[22]]=447; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(447,jvj+8,jvj+9)*/
pile[v[22]]=459; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(459,jvj+8,jvj+10)*/
pile[v[22]]=475; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(475,jvj+8,jvj+11)*/
pile[v[22]]=502; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(502,jvj+8,jvj+12)*/
vo[12]=x[jvj+9];vz[12]=0;
vo[13]=x[jvj+10];vz[13]=0;
vo[14]=x[jvj+11];vz[14]=0;
vo[16]=x[jvj+12];vz[16]=0;
l43:if((RG==12)) goto l44;
if((RG!=80)) goto l46;
x[jvj+44]=incon;
if((x[jvj+4]==1455)) goto l40;
x[jvj+44]=287 ;z[jvj+44]=287;
l48:pile[v[22]]=jvj+44; pile[WZ1]=158; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(jvj+44,158,jvj+3)*/
goto l47;
l6:x[jvj+21]=vo[11];z[jvj+21]=vz[11];
pile[v[22]]=1455; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(1455,jvj+21,jvj+22)*/
if((x[jvj+22]==68)) goto l20;
l19:pile[v[22]]=jvj+30; 
(*f[610])( );     /*PEUMEM0(jvj+30)*/
V57=x[jvj+30];
TT=12;
pile[v[22]]=20; pile[WZ1]=11061; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11061,0,V55)*/
V55=pile[WZ3]; 
pile[WZ1]=V57; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(20,V57,V55,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=V56; 
(*f[40])( );     /*SLG0(V56)*/
l25:if(x[jvj+4]==287||x[jvj+4]==1455) goto l26;
if((x[jvj+4]==80)) goto l28;
if((x[jvj+4]!=1185)) goto l30;
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(218,jvj+3,jvj+19)*/
pile[v[22]]=498; pile[WZ1]=jvj+19; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(498,jvj+19,jvj+35)*/
pile[v[22]]=109; pile[WZ1]=jvj+35; pile[WZ2]=1383; pile[WZ3]=1385; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(109,jvj+35,1383,1385,jvj+20)*/
pile[v[22]]=20; pile[WZ1]=jvj+20; pile[WZ2]=jvj+36; 
(*f[409])( );     /*TRI14(20,jvj+20,jvj+36)*/
pile[v[22]]=163; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(163,jvj+19,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=jvj+20; pile[WZ1]=163; pile[WZ2]=V34; 
(*f[177])( );     /*CHGC4(jvj+20,163,V34)*/
l29:pile[v[22]]=jvj+36; pile[WZ1]=1185; 
(*f[137])( );     /*EXPDIAL0(jvj+36,1185)*/
v[106]=0;
RG=120;
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=jvj+20; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(158,287,218,jvj+20,jvj+18)*/
pile[v[22]]=jvj+18; 
(*f[605])( );     /*MONITEUR0(jvj+18)*/
vv[16]=0;
goto l30;
l8:x[jvj+30]=12 ;z[jvj+30]=12;
l9:RG=120;
l32:x[jvj+37]=vo[14];z[jvj+37]=vz[14];
pile[v[22]]=jvj+37; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+37,893,12)*/
goto l33;
l10:RG=120;
x[jvj+30]=12 ;z[jvj+30]=12;
goto l32;
l11:x[jvj+23]=vo[12];z[jvj+23]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(860,jvj+23,jvj+24)*/
if((x[jvj+24]!=530)) goto l12;
pile[v[22]]=jvj+25; 
(*f[603])( );     /*TROPDESOLUTIONS0(jvj+25)*/
x[jvj+45]=incon;
if((x[jvj+25]==12)) goto l2;
x[jvj+45]=120 ;z[jvj+45]=120;
goto l13;
l12:x[jvj+30]=12 ;z[jvj+30]=12;
goto l9;
l14:pile[v[22]]=jvj+26; 
(*f[602])( );     /*TROPDETEMPS0(jvj+26)*/
x[jvj+46]=incon;
if((x[jvj+26]==12)) goto l1;
x[jvj+46]=120 ;z[jvj+46]=120;
goto l15;
l16:x[jvj+27]=vo[12];z[jvj+27]=vz[12];
pile[v[22]]=247; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(247,jvj+27,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=jvj+16; 
(*f[608])( );     /*CREPB0(jvj+28,jvj+29,jvj+16)*/
V17=incon;
if((x[jvj+29]==287)) goto l5;
V17=120;
goto l17;
l18:pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(510,jvj+3,TT)*/
TT=pile[WZ2]; 
x[jvj+30]=1196 ;z[jvj+30]=1196;
goto l25;
l20:x[jvj+31]=vo[11];z[jvj+31]=vz[11];
pile[v[22]]=1455; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1455,jvj+31,jvj+32)*/
if((x[jvj+32]!=68)) goto l25;
x[jvj+30]=12 ;z[jvj+30]=12;
pile[v[22]]=0; pile[WZ1]=5; 
(*f[178])( );     /*SPLO0(0,5,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=14; pile[WZ1]=V64; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(14,V64,35,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=11061; pile[WZ2]=V65; 
(*f[39])( );     /*SDX0(20,11061,V65,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V66; pile[WZ2]=1169; 
(*f[42])( );     /*SRA1(135,V66,1169,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; 
(*f[40])( );     /*SLG0(V67)*/
goto l25;
l22:if((V39<4)) goto l23;
l35:pile[v[22]]=TT; 
(*f[611])( );     /*ERRINCIDENT0(TT)*/
goto l36;
l23:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=11061; 
(*f[98])( );     /*SRA3(135,V59,11061,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V60,125,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=TT; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(41,TT,V61,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; 
(*f[40])( );     /*SLG0(V62)*/
if((V39!=2)) goto l35;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l35;
l24:
(*f[606])( );     /*CALZCOMB0()*/
goto l46;
l26:pile[v[22]]=jvj+34; pile[WZ1]=jvj+6; 
(*f[604])( );     /*SUPERVISE0(jvj+34,jvj+6)*/
V12=incon;
if((x[jvj+34]==12)) goto l3;
if((x[jvj+34]==80)) goto l4;
V12=120;
goto l27;
l28:RG=120;
pile[v[22]]=jvj+3; 
(*f[601])( );     /*ANAFIN0(jvj+3)*/
V3=vv[21];
if((V3!=1)) goto l30;
pile[v[22]]=117; pile[WZ1]=547; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(117,547,V4)*/
V4=pile[WZ2]; 
vv[0]=V4;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
(*f[17])( );     /*FERMER0()*/
goto l30;
l34:if((x[jvj+30]!=1196)) goto l36;
V39=g[535];
if((V39<=0)) goto l35;
V40=vg[535];
if((V40!=0)) goto l21;
if((V39<3)) goto l23;
l21:pile[v[22]]=535; pile[WZ1]=11061; pile[WZ2]=0; pile[WZ3]=(-715); pile[WZ4]=TT; pile[WZ5]=jvj+33; 
(*f[612])( );     /*INTERP9(535,11061,0,(-715),TT,jvj+33)*/
if((x[jvj+33]==135)) goto l22;
goto l35;
l37:pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(218,jvj+3,jvj+38)*/
pile[v[22]]=jvj+38; 
(*f[609])( );     /*PBNOUVEAU0(jvj+38)*/
V29=vv[21];
if((V29!=1)) goto l42;
pile[v[22]]=117; pile[WZ1]=547; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(117,547,V30)*/
V30=pile[WZ2]; 
vv[0]=V30;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
(*f[17])( );     /*FERMER0()*/
l42:if(RG!=incon) goto l43;
goto l46;
l40:x[jvj+44]=1455 ;z[jvj+44]=1455;
goto l48;
l44:if((x[jvj+4]==1455)) goto l46;
V52=vv[2];
if((V52!=1)) goto l41;
pile[v[22]]=994; pile[WZ1]=993; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(994,993,1)*/
l41:V53=vv[21];
if((V53!=1)) goto l45;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l45:pile[v[22]]=40; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(40,0,126,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=11061; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(20,11061,V68,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V69; pile[WZ2]=80; 
(*f[42])( );     /*SRA1(135,V69,80,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; 
(*f[40])( );     /*SLG0(V70)*/
V54=vv[2];
if((V54!=1)) goto l46;
pile[v[22]]=32; pile[WZ1]=32; 
(*f[160])( );     /*CHERCHEUR0(32,32)*/
goto l46;
}
