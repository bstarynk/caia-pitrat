#include "dx.h"
void MANAGER1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V12=0,V14=0,V13=0,V17=0,V29=0,V30=0,V34=0,RG=0,TT=0,V57=0,V55=0,V56=0,V64=0,V65=0,V66=0,V67=0,V40=0,V59=0,V60=0,V61=0,V62=0,V39=0,V49=0,V48=0,V50=0,V52=0,V53=0,V54=0,V68=0,V69=0,V70=0;
int M;
int RM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=11061;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==958&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; RM=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RM]=TT=RG=incon;
pile[v[22]]=158; pile[WZ1]=M; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(158,M,jvj+3)*/
if(x[jvj+3]==287||x[jvj+3]==248||x[jvj+3]==1053||x[jvj+3]==1455) goto l7;
x[jvj+4]=vo[12];z[jvj+4]=vz[12];
pile[v[22]]=jvj+4; 
(*f[600])( );     /*REPARTITEMPS0(jvj+4)*/
l7:if((x[jvj+3]==1271)) goto l8;
if(x[jvj+3]==876||x[jvj+3]==1336) goto l10;
if((x[jvj+3]==493)) goto l11;
if((x[jvj+3]==936)) goto l14;
if((x[jvj+3]==228)) goto l16;
if((x[jvj+3]==1196)) goto l19;
if((x[jvj+3]==1169)) goto l6;
if((x[jvj+3]==1169)) goto l21;
if((x[jvj+3]==248)) goto l25;
if((x[jvj+3]!=1053)) goto l26;
(*f[607])( );     /*EXACOMB0()*/
l47:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l1:x[jvj+45]=12 ;z[jvj+45]=12;
l15:RG=120;
x[RM]=x[jvj+45] ;z[RM]=z[jvj+45];
l32:if((x[RM]==12)) goto l33;
l34:if(TT!=incon) goto l35;
l37:if((x[jvj+3]==1097)) goto l38;
if((x[jvj+3]!=924)) goto l43;
pile[v[22]]=642; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(642,M,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=1543; pile[WZ1]=924; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(1543,924,jvj+37)*/
l39:if((x[jvj+37]<=0)) goto l43;
x[jvj+38]=s[x[jvj+37]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+37];
pile[v[22]]=1542; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(1542,jvj+38,V48)*/
V48=pile[WZ2]; 
if((V48!=V49)) goto l40;
V50=x[jvj+38];
v[228]=1;
pile[v[22]]=1543; pile[WZ1]=924; pile[WZ2]=V50; 
(*f[134])( );     /*OTA0(1543,924,V50)*/
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=jvj+38; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(158,287,218,jvj+38,jvj+39)*/
pile[v[22]]=jvj+39; 
(*f[605])( );     /*MONITEUR0(jvj+39)*/
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l40:x[jvj+37]=t[x[jvj+37]];
goto l39;
l2:x[jvj+44]=12 ;z[jvj+44]=12;
l13:RG=120;
x[RM]=x[jvj+44] ;z[RM]=z[jvj+44];
goto l32;
l3:V12=12;
l28:RG=V12;
if((x[jvj+32]!=80)) goto l31;
if((x[jvj+5]==250)) goto l31;
V14=vv[12];
V13=V14+1;
pile[v[22]]=jvj+5; 
(*f[600])( );     /*REPARTITEMPS0(jvj+5)*/
vv[12]=V13;
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=jvj+5; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(158,287,218,jvj+5,jvj+6)*/
pile[v[22]]=jvj+6; 
(*f[605])( );     /*MONITEUR0(jvj+6)*/
l31:if(x[RM]!=incon) goto l32;
goto l37;
l4:V12=80;
goto l28;
l5:V17=287;
l17:RG=V17;
if((x[jvj+28]!=287)) goto l18;
x[jvj+12]=vo[13];z[jvj+12]=vz[13];
x[jvj+13]=vo[14];z[jvj+13]=vz[14];
x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=jvj+14; pile[WZ1]=502; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+14,502,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+13; pile[WZ2]=475; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+41,jvj+13,475,jvj+42)*/
pile[v[22]]=447; pile[WZ1]=jvj+26; pile[WZ2]=459; pile[WZ3]=jvj+12; pile[WZ4]=jvj+42; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(447,jvj+26,459,jvj+12,jvj+42,jvj+7)*/
pile[v[22]]=jvj+15; 
(*f[600])( );     /*REPARTITEMPS0(jvj+15)*/
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=jvj+15; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(158,287,218,jvj+15,jvj+16)*/
pile[v[22]]=jvj+16; 
(*f[605])( );     /*MONITEUR0(jvj+16)*/
pile[v[22]]=447; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(447,jvj+7,jvj+8)*/
pile[v[22]]=459; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(459,jvj+7,jvj+9)*/
pile[v[22]]=475; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(475,jvj+7,jvj+10)*/
pile[v[22]]=502; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(502,jvj+7,jvj+11)*/
vo[12]=x[jvj+8];vz[12]=0;
vo[13]=x[jvj+9];vz[13]=0;
vo[14]=x[jvj+10];vz[14]=0;
vo[16]=x[jvj+11];vz[16]=0;
l18:x[RM]=120 ;z[RM]=120;
l44:if((RG==12)) goto l45;
if((RG!=80)) goto l48;
x[jvj+43]=incon;
if((x[jvj+3]==1455)) goto l41;
x[jvj+43]=287 ;z[jvj+43]=287;
l50:pile[v[22]]=jvj+43; pile[WZ1]=158; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+43,158,jvj+40)*/
pile[v[22]]=jvj+40; 
(*f[191])( );     /*MANAGER0(jvj+40)*/
l48:if(x[RM]!=incon) goto l49;
goto l47;
l6:x[jvj+20]=vo[11];z[jvj+20]=vz[11];
pile[v[22]]=1455; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1455,jvj+20,jvj+21)*/
if((x[jvj+21]==68)) goto l21;
l20:pile[v[22]]=RM; 
(*f[610])( );     /*PEUMEM0(RM)*/
V57=x[RM];
TT=12;
pile[v[22]]=20; pile[WZ1]=11061; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11061,0,V55)*/
V55=pile[WZ3]; 
pile[WZ1]=V57; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(20,V57,V55,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=V56; 
(*f[40])( );     /*SLG0(V56)*/
l26:if(x[jvj+3]==287||x[jvj+3]==1455) goto l27;
if((x[jvj+3]==80)) goto l29;
if((x[jvj+3]!=1185)) goto l31;
pile[v[22]]=218; pile[WZ1]=M; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(218,M,jvj+18)*/
pile[v[22]]=498; pile[WZ1]=jvj+18; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(498,jvj+18,jvj+33)*/
pile[v[22]]=109; pile[WZ1]=jvj+33; pile[WZ2]=1383; pile[WZ3]=1385; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(109,jvj+33,1383,1385,jvj+19)*/
pile[v[22]]=20; pile[WZ1]=jvj+19; pile[WZ2]=jvj+34; 
(*f[409])( );     /*TRI14(20,jvj+19,jvj+34)*/
pile[v[22]]=163; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(163,jvj+18,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=jvj+19; pile[WZ1]=163; pile[WZ2]=V34; 
(*f[177])( );     /*CHGC4(jvj+19,163,V34)*/
l30:pile[v[22]]=jvj+34; pile[WZ1]=1185; 
(*f[137])( );     /*EXPDIAL0(jvj+34,1185)*/
v[106]=0;
RG=120;
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=jvj+19; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(158,287,218,jvj+19,jvj+17)*/
pile[v[22]]=jvj+17; 
(*f[605])( );     /*MONITEUR0(jvj+17)*/
vv[16]=0;
goto l31;
l8:x[RM]=12 ;z[RM]=12;
l9:RG=120;
l33:x[jvj+35]=vo[14];z[jvj+35]=vz[14];
pile[v[22]]=jvj+35; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+35,893,12)*/
goto l34;
l10:RG=120;
x[RM]=12 ;z[RM]=12;
goto l33;
l11:x[jvj+22]=vo[12];z[jvj+22]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(860,jvj+22,jvj+23)*/
if((x[jvj+23]!=530)) goto l12;
pile[v[22]]=jvj+24; 
(*f[603])( );     /*TROPDESOLUTIONS0(jvj+24)*/
x[jvj+44]=incon;
if((x[jvj+24]==12)) goto l2;
x[jvj+44]=120 ;z[jvj+44]=120;
goto l13;
l12:x[RM]=12 ;z[RM]=12;
goto l9;
l14:pile[v[22]]=jvj+25; 
(*f[602])( );     /*TROPDETEMPS0(jvj+25)*/
x[jvj+45]=incon;
if((x[jvj+25]==12)) goto l1;
x[jvj+45]=120 ;z[jvj+45]=120;
goto l15;
l16:x[jvj+26]=vo[12];z[jvj+26]=vz[12];
pile[v[22]]=247; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(247,jvj+26,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=jvj+15; 
(*f[608])( );     /*CREPB0(jvj+27,jvj+28,jvj+15)*/
V17=incon;
if((x[jvj+28]==287)) goto l5;
V17=120;
goto l17;
l19:pile[v[22]]=510; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(510,M,TT)*/
TT=pile[WZ2]; 
x[RM]=1196 ;z[RM]=1196;
goto l26;
l21:x[jvj+29]=vo[11];z[jvj+29]=vz[11];
pile[v[22]]=1455; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1455,jvj+29,jvj+30)*/
if((x[jvj+30]!=68)) goto l26;
x[RM]=12 ;z[RM]=12;
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
goto l26;
l23:if((V39<4)) goto l24;
l36:pile[v[22]]=TT; 
(*f[611])( );     /*ERRINCIDENT0(TT)*/
goto l37;
l24:pile[v[22]]=0; pile[WZ1]=123; 
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
if((V39!=2)) goto l36;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l36;
l25:
(*f[606])( );     /*CALZCOMB0()*/
goto l47;
l27:pile[v[22]]=jvj+32; pile[WZ1]=jvj+5; 
(*f[604])( );     /*SUPERVISE0(jvj+32,jvj+5)*/
V12=incon;
if((x[jvj+32]==12)) goto l3;
if((x[jvj+32]==80)) goto l4;
V12=120;
goto l28;
l29:RG=120;
pile[v[22]]=M; 
(*f[601])( );     /*ANAFIN0(M)*/
V3=vv[21];
if((V3!=1)) goto l31;
pile[v[22]]=117; pile[WZ1]=547; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(117,547,V4)*/
V4=pile[WZ2]; 
vv[0]=V4;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
(*f[17])( );     /*FERMER0()*/
goto l31;
l35:if((x[RM]!=1196)) goto l37;
V39=g[535];
if((V39<=0)) goto l36;
V40=vg[535];
if((V40!=0)) goto l22;
if((V39<3)) goto l24;
l22:pile[v[22]]=535; pile[WZ1]=11061; pile[WZ2]=1; pile[WZ3]=(-715); pile[WZ4]=TT; pile[WZ5]=jvj+31; 
(*f[612])( );     /*INTERP9(535,11061,1,(-715),TT,jvj+31)*/
if((x[jvj+31]==135)) goto l23;
goto l36;
l38:pile[v[22]]=218; pile[WZ1]=M; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(218,M,jvj+36)*/
pile[v[22]]=jvj+36; 
(*f[609])( );     /*PBNOUVEAU0(jvj+36)*/
V29=vv[21];
if((V29!=1)) goto l43;
pile[v[22]]=117; pile[WZ1]=547; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(117,547,V30)*/
V30=pile[WZ2]; 
vv[0]=V30;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
(*f[17])( );     /*FERMER0()*/
l43:if(RG!=incon) goto l44;
goto l48;
l41:x[jvj+43]=1455 ;z[jvj+43]=1455;
goto l50;
l45:if((x[jvj+3]==1455)) goto l48;
V52=vv[2];
if((V52!=1)) goto l42;
pile[v[22]]=994; pile[WZ1]=993; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(994,993,1)*/
l42:V53=vv[21];
if((V53!=1)) goto l46;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l46:pile[v[22]]=40; pile[WZ1]=0; pile[WZ2]=126; 
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
if((V54!=1)) goto l48;
pile[v[22]]=32; pile[WZ1]=32; 
(*f[160])( );     /*CHERCHEUR0(32,32)*/
goto l48;
l49:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
}
