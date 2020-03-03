#include "dx.h"
void EXAPBP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V11=0,V13=0,WW=0,V3=0,V2=0,V67=0,V65=0,V66=0,V27=0,V6=0,V7=0,NA=0,V17=0,V18=0,NB=0,V14=0,V15=0,V26=0,V28=0,V29=0,V30=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V38=0,V39=0,V41=0,V42=0,V43=0,V44=0,V46=0,V47=0,V48=0,V50=0,V51=0,V52=0,V53=0,V54=0,V55=0,V56=0,V57=0,V59=0,V60=0,V61=0,V62=0,V64=0,V22=0,V23=0,V24=0,V68=0,V70=0,V71=0,V73=0,V74=0,V76=0,V85=0,V84=0,V128=0,V96=0,V95=0,V100=0,V135=0,V133=0,V134=0,V136=0,V137=0,V99=0,V103=0,V106=0,V108=0,V109=0,V144=0,V143=0,V112=0,V114=0,V146=0,V115=0,V150=0,V149=0,V118=0,V120=0,V152=0,V121=0,V123=0,V155=0,V156=0,V157=0,V124=0,V127=0,V166=0,V175=0,V174=0,V173=0,V172=0,V171=0,V170=0,V169=0,V168=0,V131=0,V162=0,V163=0,V161=0,V160=0;
int E;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=11191;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==513&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=609; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(0,609,jvj+18)*/
pile[v[22]]=510; pile[WZ1]=0; pile[WZ2]=515; pile[WZ3]=0; pile[WZ4]=jvj+18; pile[WZ5]=jvj+16; 
(*f[190])( );     /*QUADRI3(510,0,515,0,jvj+18,jvj+16)*/
x[jvj+37]=x[E] ;z[jvj+37]=z[E];
l8:if((x[jvj+37]>0)) goto l9;
pile[v[22]]=609; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(609,jvj+16,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(515,jvj+16,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(510,jvj+16,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V24; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V24,0,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V68; pile[WZ2]=528; 
(*f[42])( );     /*SRA1(135,V68,528,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V23; pile[WZ2]=V70; 
(*f[39])( );     /*SDX0(41,V23,V70,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V71; pile[WZ2]=287; 
(*f[42])( );     /*SRA1(135,V71,287,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V22; pile[WZ2]=V73; 
(*f[39])( );     /*SDX0(41,V22,V73,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V74; pile[WZ2]=74; 
(*f[42])( );     /*SRA1(135,V74,74,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=V76; 
(*f[40])( );     /*SLG0(V76)*/
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+35]=t[x[jvj+35]];
l1:if((x[jvj+35]<=0)) goto l12;
x[jvj+4]=s[x[jvj+35]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+35];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+4,V9)*/
V9=pile[WZ2]; 
if((V9!=NA)) goto l2;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(876,jvj+4,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(683,jvj+4,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=860; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(860,jvj+4,jvj+14)*/
NB=V7;
pile[v[22]]=944; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(944,jvj+2,jvj+5)*/
x[jvj+36]=x[jvj+5] ;z[jvj+36]=z[jvj+5];
l3:if((x[jvj+36]<=0)) goto l12;
x[jvj+6]=s[x[jvj+36]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+36];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+6,V11)*/
V11=pile[WZ2]; 
if((V11!=NB)) goto l4;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(876,jvj+6,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(683,jvj+6,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=860; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(860,jvj+6,jvj+15)*/
pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(5,0,42,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V27,V26,V3)*/
V3=pile[WZ3]; 
V2=incon;
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+7,V13)*/
V13=pile[WZ2]; 
WW=V13;
pile[v[22]]=V3; pile[WZ1]=WW; 
(*f[37])( );     /*SRA0(V3,WW,V2)*/
V2=pile[WZ2]; 
l14:pile[v[22]]=135; pile[WZ1]=V2; pile[WZ2]=jvj+10; 
(*f[42])( );     /*SRA1(135,V2,jvj+10,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V28,(-9543),V29)*/
V29=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NA; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(41,NA,V29,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V30,40,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=860; 
(*f[98])( );     /*SRA3(135,V32,860,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V33,58,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V34; pile[WZ2]=jvj+14; 
(*f[42])( );     /*SRA1(135,V34,jvj+14,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V35,44,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V36; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V36,683,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V37,58,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=V18; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V38,V18,41,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V39,44,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V41; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V41,876,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V42,58,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=V17; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V43,V17,41,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V44,41,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=(-1410); 
(*f[37])( );     /*SRA0(V46,(-1410),V47)*/
V47=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NB; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(41,NB,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V48,40,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V50; pile[WZ2]=860; 
(*f[98])( );     /*SRA3(135,V50,860,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V51,58,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=jvj+15; 
(*f[42])( );     /*SRA1(135,V52,jvj+15,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V53,44,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V54; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V54,683,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V55,58,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=V15; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V56,V15,41,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V57,44,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V59,876,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V60,58,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=V14; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V61,V14,41,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V62,41,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
if((x[jvj+10]==287)) goto l15;
pile[v[22]]=447; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(447,jvj+8,jvj+9)*/
V67=x[jvj+9];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+10; 
(*f[42])( );     /*SRA1(135,0,jvj+10,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V67; pile[WZ2]=V65; 
(*f[39])( );     /*SDX0(20,V67,V65,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; 
(*f[40])( );     /*SLG0(V66)*/
l15:pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+16,jvj+17,1)*/
x[jvj+23]=x[jvj+8] ;z[jvj+23]=z[jvj+8];
l19:pile[v[22]]=120; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(120,jvj+23,jvj+24)*/
pile[v[22]]=158; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(158,jvj+24,jvj+25)*/
if((x[jvj+25]==864)) goto l32;
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(642,jvj+24,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V128; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V128,0,V96)*/
V96=pile[WZ3]; 
V95=incon;
pile[v[22]]=218; pile[WZ1]=jvj+24; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(218,jvj+24,jvj+26)*/
pile[v[22]]=135; pile[WZ1]=V96; 
(*f[42])( );     /*SRA1(135,V96,jvj+26,V95)*/
V95=pile[WZ3]; 
l20:pile[v[22]]=135; pile[WZ1]=V95; pile[WZ2]=jvj+25; 
(*f[42])( );     /*SRA1(135,V95,jvj+25,V100)*/
V100=pile[WZ3]; 
V99=incon;
pile[v[22]]=109; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(109,jvj+24,jvj+27)*/
V135=x[jvj+27];
pile[v[22]]=135; pile[WZ1]=V100; pile[WZ2]=345; 
(*f[42])( );     /*SRA1(135,V100,345,V133)*/
V133=pile[WZ3]; 
pile[v[22]]=V133; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V133,58,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V135; pile[WZ2]=V134; 
(*f[39])( );     /*SDX0(20,V135,V134,V136)*/
V136=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V136; pile[WZ2]=152; 
(*f[42])( );     /*SRA1(135,V136,152,V137)*/
V137=pile[WZ3]; 
pile[v[22]]=V137; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V137,58,V99)*/
V99=pile[WZ2]; 
l21:V103=incon;
pile[v[22]]=447; pile[WZ1]=jvj+24; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(447,jvj+24,jvj+28)*/
pile[v[22]]=V99; pile[WZ1]=jvj+28; 
(*f[344])( );if(v[102]) goto l41;     /*XX1(V99,jvj+28,V103)*/
V103=pile[WZ2]; 
l22:V106=incon;
pile[v[22]]=459; pile[WZ1]=jvj+24; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(459,jvj+24,jvj+29)*/
pile[v[22]]=V103; pile[WZ1]=jvj+29; 
(*f[344])( );if(v[102]) goto l40;     /*XX1(V103,jvj+29,V106)*/
V106=pile[WZ2]; 
l23:V109=incon;
pile[v[22]]=515; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(515,jvj+24,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V108; pile[WZ2]=V106; 
(*f[39])( );     /*SDX0(41,V108,V106,V109)*/
V109=pile[WZ3]; 
l24:V112=incon;
pile[v[22]]=475; pile[WZ1]=jvj+24; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(475,jvj+24,jvj+30)*/
V144=x[jvj+30];
pile[v[22]]=V109; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V109,44,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V144; pile[WZ2]=V143; 
(*f[39])( );     /*SDX0(20,V144,V143,V112)*/
V112=pile[WZ3]; 
l25:V115=incon;
pile[v[22]]=609; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(609,jvj+24,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=V112; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V112,44,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V114; pile[WZ2]=V146; 
(*f[39])( );     /*SDX0(41,V114,V146,V115)*/
V115=pile[WZ3]; 
l26:V118=incon;
pile[v[22]]=502; pile[WZ1]=jvj+24; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(502,jvj+24,jvj+31)*/
V150=x[jvj+31];
pile[v[22]]=V115; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V115,44,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V150; pile[WZ2]=V149; 
(*f[39])( );     /*SDX0(20,V150,V149,V118)*/
V118=pile[WZ3]; 
l27:V121=incon;
pile[v[22]]=610; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(610,jvj+24,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=V118; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V118,44,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V120; pile[WZ2]=V152; 
(*f[39])( );     /*SDX0(41,V120,V152,V121)*/
V121=pile[WZ3]; 
l28:V124=incon;
pile[v[22]]=1043; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(1043,jvj+24,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=V121; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V121,46,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V155; pile[WZ2]=613; 
(*f[42])( );     /*SRA1(135,V155,613,V156)*/
V156=pile[WZ3]; 
pile[v[22]]=V156; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V156,58,V157)*/
V157=pile[WZ2]; 
pile[v[22]]=V157; pile[WZ1]=V123; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V157,V123,41,V124)*/
V124=pile[WZ3]; 
l29:V127=incon;
pile[v[22]]=195; pile[WZ1]=jvj+24; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(195,jvj+24,jvj+32)*/
if((x[jvj+32]!=0)) goto l33;
V127=V124;
l30:pile[v[22]]=V127; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V127,46,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=V166; 
(*f[40])( );     /*SLG0(V166)*/
l31:x[jvj+23]=x[jvj+24] ;z[jvj+23]=z[jvj+24];
goto l19;
l4:x[jvj+36]=t[x[jvj+36]];
goto l3;
l5:V2=V3;
goto l14;
l6:x[jvj+17]=510 ;z[jvj+17]=510;
l13:NA=V6;
pile[v[22]]=944; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(944,jvj+2,jvj+3)*/
x[jvj+35]=x[jvj+3] ;z[jvj+35]=z[jvj+3];
goto l1;
l7:x[jvj+17]=515 ;z[jvj+17]=515;
goto l13;
l9:x[jvj+7]=s[x[jvj+37]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+37];
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+7,jvj+19)*/
pile[v[22]]=983; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(983,jvj+19,jvj+20)*/
pile[v[22]]=878; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(878,jvj+20,jvj+21)*/
l17:if((x[jvj+21]<=0)) goto l10;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=163; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(163,jvj+22,V85)*/
V85=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(163,jvj+7,V84)*/
V84=pile[WZ2]; 
if((V85==V84)) goto l18;
x[jvj+21]=t[x[jvj+21]];
goto l17;
l10:x[jvj+37]=t[x[jvj+37]];
goto l8;
l12:x[jvj+39]=t[x[jvj+39]];
l11:if((x[jvj+39]<=0)) goto l10;
x[jvj+8]=s[x[jvj+39]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+39];
pile[v[22]]=510; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(510,jvj+8,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(515,jvj+8,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=158; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(158,jvj+8,jvj+13)*/
x[jvj+10]=x[jvj+13] ;z[jvj+10]=z[jvj+13];
x[jvj+17]=incon;
if((x[jvj+10]==528)) goto l6;
if((x[jvj+10]==287)) goto l7;
x[jvj+17]=609 ;z[jvj+17]=609;
goto l13;
l18:x[jvj+38]=x[jvj+22] ;z[jvj+38]=z[jvj+22];
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+7,jvj+11)*/
x[jvj+2]=x[jvj+38] ;z[jvj+2]=z[jvj+38];
pile[v[22]]=1244; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1244,jvj+2,jvj+12)*/
V27=x[jvj+11];
x[jvj+39]=x[jvj+12] ;z[jvj+39]=z[jvj+12];
goto l11;
l32:pile[v[22]]=642; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(642,jvj+24,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=459; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(459,jvj+24,jvj+33)*/
pile[v[22]]=447; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(447,jvj+24,jvj+34)*/
pile[v[22]]=41; pile[WZ1]=V131; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V131,0,V168)*/
V168=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V168; pile[WZ2]=864; 
(*f[42])( );     /*SRA1(135,V168,864,V169)*/
V169=pile[WZ3]; 
pile[WZ1]=V169; pile[WZ2]=480; 
(*f[42])( );     /*SRA1(135,V169,480,V170)*/
V170=pile[WZ3]; 
pile[v[22]]=V170; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V170,58,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=V171; pile[WZ1]=jvj+34; 
(*f[344])( );if(v[102]) goto l31;     /*XX1(V171,jvj+34,V172)*/
V172=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V172; pile[WZ2]=481; 
(*f[42])( );     /*SRA1(135,V172,481,V173)*/
V173=pile[WZ3]; 
pile[v[22]]=V173; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V173,58,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=V174; pile[WZ1]=jvj+33; 
(*f[344])( );if(v[102]) goto l31;     /*XX1(V174,jvj+33,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=V175; 
(*f[40])( );     /*SLG0(V175)*/
goto l31;
l33:V163=x[jvj+32];
pile[v[22]]=V124; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V124,46,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V160; pile[WZ2]=228; 
(*f[42])( );     /*SRA1(135,V160,228,V161)*/
V161=pile[WZ3]; 
pile[v[22]]=V161; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V161,58,V162)*/
V162=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V163; pile[WZ2]=V162; 
(*f[39])( );     /*SDX0(23,V163,V162,V127)*/
V127=pile[WZ3]; 
goto l30;
l34:V124=V121;
goto l29;
l35:V121=V118;
goto l28;
l36:V118=V115;
goto l27;
l37:V115=V112;
goto l26;
l38:V112=V109;
goto l25;
l39:V109=V106;
goto l24;
l40:V106=V103;
goto l23;
l41:V103=V99;
goto l22;
l42:V99=V100;
goto l21;
l43:V95=V96;
goto l20;
}
