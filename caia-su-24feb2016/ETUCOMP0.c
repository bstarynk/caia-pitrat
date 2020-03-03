#include "dx.h"
void ETUCOMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A=0,B=0,V10=0,V58=0,V59=0,V61=0,V62=0,V64=0,V65=0,C=0,D=0,V5=0,V23=0,V19=0,V21=0,V22=0,V26=0,V27=0,V66=0,V67=0,V69=0,V70=0,V72=0,V73=0,V74=0,V75=0,V76=0,V77=0,V78=0,V80=0,V81=0,V82=0,V83=0,V85=0,V86=0,V87=0,V88=0,V89=0,V7=0,V6=0,V34=0,V35=0,V39=0,V40=0,V90=0,V91=0,V93=0,V94=0,V96=0,V97=0,V98=0,V99=0,V100=0,V101=0,V102=0,V104=0,V105=0,V106=0,V107=0,V109=0,V110=0,V111=0,V112=0,V113=0,V36=0,V38=0,V37=0,V33=0,V25=0,V24=0,V20=0,V13=0,V14=0,V15=0,V49=0,V43=0,V45=0,V46=0,V47=0,V48=0,V50=0,V51=0,V53=0,V54=0,V55=0,V56=0,V57=0,V115=0,V114=0,V117=0,V116=0,V119=0,V118=0;
int T,NA,NB,M,RT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; NA=pile[v[22]+1]; NB=pile[v[22]+2]; M=pile[v[22]+3]; RT=pile[v[22]+4]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
A=B=C=D=x[jvj+2]=incon;
pile[v[22]]=510; pile[WZ1]=T; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(510,T,A)*/
A=pile[WZ2]; 
l1:pile[v[22]]=515; pile[WZ1]=T; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,T,B)*/
B=pile[WZ2]; 
l3:if(A!=incon) goto l4;
l8:pile[v[22]]=609; pile[WZ1]=T; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(609,T,C)*/
C=pile[WZ2]; 
l9:pile[v[22]]=610; pile[WZ1]=T; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(610,T,D)*/
D=pile[WZ2]; 
l19:if(C!=incon) goto l20;
l47:if(A!=incon) goto l49;
l49:v[0]=jvj; v[22]-=5; return;
l2:V10=A;
l6:pile[v[22]]=V10; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[804])( );     /*CVNBPRIO0(V10,jvj+1,jvj+2)*/
l7:if((A!=0)) goto l8;
if((B!=0)) goto l8;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1059; 
(*f[42])( );     /*SRA1(135,0,1059,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NA; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(41,NA,V58,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; pile[WZ1]=(-1410); 
(*f[37])( );     /*SRA0(V59,(-1410),V61)*/
V61=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NB; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(41,NB,V61,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V62; pile[WZ2]=985; 
(*f[42])( );     /*SRA1(135,V62,985,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V64,83,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
pile[v[22]]=RT; pile[WZ1]=447; pile[WZ2]=985; 
(*f[35])( );     /*CHGC1(RT,447,985)*/
pile[WZ1]=459; pile[WZ2]=25; 
(*f[35])( );     /*CHGC1(RT,459,25)*/
pile[WZ1]=475; pile[WZ2]=985; 
(*f[35])( );     /*CHGC1(RT,475,985)*/
goto l8;
l4:if(B!=incon) goto l5;
goto l8;
l5:if((A<0)) goto l8;
if((B<0)) goto l7;
V10=incon;
if((A>=B)) goto l2;
V10=B;
goto l6;
l10:V5=incon;
if((C>=D)) goto l11;
V5=D;
l21:V7=V5*1000;
if((M!=0)) goto l51;
V6=999999999;
l22:pile[v[22]]=V6; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[804])( );     /*CVNBPRIO0(V6,jvj+4,jvj+5)*/
if(A!=incon) goto l28;
goto l49;
l11:V5=C;
goto l21;
l12:if((B>=0)) goto l13;
V19=A;
l34:if((V19<=0)) goto l37;
V25=A-B;
V24=V25*1000;
if((V19!=0)) goto l55;
V20=999999999;
l35:pile[v[22]]=V20; pile[WZ1]=jvj+8; pile[WZ2]=jvj+3; 
(*f[804])( );     /*CVNBPRIO0(V20,jvj+8,jvj+3)*/
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(130,jvj+3,V26)*/
V26=pile[WZ2]; 
pile[WZ1]=1204; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(130,1204,V27)*/
V27=pile[WZ2]; 
if((V26<=V27)) goto l17;
V21=incon;
if((x[jvj+8]==36)) goto l14;
V21=NB;
l15:V22=incon;
if((x[jvj+8]==36)) goto l16;
V22=NA;
l18:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1059; 
(*f[42])( );     /*SRA1(135,0,1059,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V21; pile[WZ2]=V77; 
(*f[39])( );     /*SDX0(41,V21,V77,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V78; pile[WZ2]=586; 
(*f[42])( );     /*SRA1(135,V78,586,V80)*/
V80=pile[WZ3]; 
pile[WZ1]=V80; pile[WZ2]=jvj+3; 
(*f[42])( );     /*SRA1(135,V80,jvj+3,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=V81; pile[WZ1]=(-6980); 
(*f[37])( );     /*SRA0(V81,(-6980),V82)*/
V82=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V22; pile[WZ2]=V82; 
(*f[39])( );     /*SDX0(41,V22,V82,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=V83; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V83,40,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V85; pile[WZ2]=233; 
(*f[98])( );     /*SRA3(135,V85,233,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=V86; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V86,61,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V87; pile[WZ2]=jvj+2; 
(*f[98])( );     /*SRA3(135,V87,jvj+2,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V88,41,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; 
(*f[40])( );     /*SLG0(V89)*/
l36:pile[v[22]]=RT; pile[WZ1]=447; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(RT,447,jvj+3)*/
pile[WZ1]=459; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(RT,459,jvj+8)*/
pile[WZ1]=475; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(RT,475,jvj+2)*/
l37:if((A<0)) goto l38;
if((B<0)) goto l45;
goto l49;
l13:V23=A+B;
V19=V23;
goto l34;
l14:V21=NA;
goto l15;
l16:V22=NB;
goto l18;
l17:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1059; 
(*f[42])( );     /*SRA1(135,0,1059,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NA; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(41,NA,V66,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V67; pile[WZ2]=743; 
(*f[42])( );     /*SRA1(135,V67,743,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NB; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(41,NB,V69,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V70,40,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V72; pile[WZ2]=233; 
(*f[98])( );     /*SRA3(135,V72,233,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V73,61,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V74; pile[WZ2]=jvj+2; 
(*f[98])( );     /*SRA3(135,V74,jvj+2,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=V75; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V75,41,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V76; 
(*f[40])( );     /*SLG0(V76)*/
goto l36;
l20:if(D!=incon) goto l10;
goto l47;
l23:V34=NA;
l24:V35=incon;
if((x[jvj+7]==36)) goto l25;
V35=NA;
l27:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=253; 
(*f[42])( );     /*SRA1(135,0,253,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V34; pile[WZ2]=V101; 
(*f[39])( );     /*SDX0(41,V34,V101,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V102; pile[WZ2]=586; 
(*f[42])( );     /*SRA1(135,V102,586,V104)*/
V104=pile[WZ3]; 
pile[WZ1]=V104; pile[WZ2]=jvj+6; 
(*f[42])( );     /*SRA1(135,V104,jvj+6,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=V105; pile[WZ1]=(-6980); 
(*f[37])( );     /*SRA0(V105,(-6980),V106)*/
V106=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V35; pile[WZ2]=V106; 
(*f[39])( );     /*SDX0(41,V35,V106,V107)*/
V107=pile[WZ3]; 
pile[v[22]]=V107; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V107,40,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V109; pile[WZ2]=233; 
(*f[98])( );     /*SRA3(135,V109,233,V110)*/
V110=pile[WZ3]; 
pile[v[22]]=V110; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V110,61,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V111; pile[WZ2]=jvj+5; 
(*f[98])( );     /*SRA3(135,V111,jvj+5,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V112,41,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=V113; 
(*f[40])( );     /*SLG0(V113)*/
l31:pile[v[22]]=RT; pile[WZ1]=612; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(RT,612,jvj+6)*/
pile[WZ1]=550; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(RT,550,jvj+7)*/
pile[WZ1]=1207; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(RT,1207,jvj+5)*/
l32:if(x[jvj+2]!=incon) goto l33;
goto l37;
l25:V35=NB;
goto l27;
l26:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=253; 
(*f[42])( );     /*SRA1(135,0,253,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NA; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(41,NA,V90,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V91; pile[WZ2]=743; 
(*f[42])( );     /*SRA1(135,V91,743,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NB; pile[WZ2]=V93; 
(*f[39])( );     /*SDX0(41,NB,V93,V94)*/
V94=pile[WZ3]; 
pile[v[22]]=V94; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V94,40,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V96; pile[WZ2]=233; 
(*f[98])( );     /*SRA3(135,V96,233,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V97,61,V98)*/
V98=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V98; pile[WZ2]=jvj+5; 
(*f[98])( );     /*SRA3(135,V98,jvj+5,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=V99; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V99,41,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=V100; 
(*f[40])( );     /*SLG0(V100)*/
goto l31;
l28:if(B!=incon) goto l29;
goto l49;
l29:if((A<0)) goto l32;
if((B<0)) goto l32;
V36=C+D;
if((V36<=0)) goto l32;
V38=C-D;
V37=V38*1000;
if((V36!=0)) goto l53;
V33=999999999;
l30:pile[v[22]]=V33; pile[WZ1]=jvj+7; pile[WZ2]=jvj+6; 
(*f[804])( );     /*CVNBPRIO0(V33,jvj+7,jvj+6)*/
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+6,V39)*/
V39=pile[WZ2]; 
pile[WZ1]=1204; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,1204,V40)*/
V40=pile[WZ2]; 
if((V39<=V40)) goto l26;
V34=incon;
if((x[jvj+7]==36)) goto l23;
V34=NB;
goto l24;
l33:if((C<=0)) goto l37;
if((D<=0)) goto l37;
V19=incon;
if((A>=0)) goto l12;
V19=B;
goto l34;
l38:if((B>=0)) goto l45;
goto l49;
l40:V13=B;
l48:pile[v[22]]=V13; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[804])( );     /*CVNBPRIO0(V13,jvj+9,jvj+10)*/
V49=x[jvj+10];
pile[v[22]]=41; pile[WZ1]=V14; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V14,0,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V43,300,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V45,59,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=1059; 
(*f[42])( );     /*SRA1(135,V46,1059,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V49; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(20,V49,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V48,(-9543),V50)*/
V50=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V15; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(41,V15,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V51,40,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V53; pile[WZ2]=233; 
(*f[98])( );     /*SRA3(135,V53,233,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V54,61,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V55; pile[WZ2]=jvj+5; 
(*f[98])( );     /*SRA3(135,V55,jvj+5,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=V56; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V56,41,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
pile[v[22]]=RT; pile[WZ1]=1207; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(RT,1207,jvj+5)*/
pile[WZ1]=475; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(RT,475,jvj+10)*/
pile[WZ1]=612; pile[WZ2]=300; 
(*f[35])( );     /*CHGC1(RT,612,300)*/
pile[WZ1]=550; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(RT,550,jvj+11)*/
goto l49;
l42:V14=NA;
l43:V15=incon;
if((A<0)) goto l44;
V15=NA;
l39:V13=incon;
if((A<0)) goto l40;
V13=A;
goto l48;
l44:V15=NB;
goto l39;
l45:x[jvj+11]=incon;
if((A<0)) goto l46;
x[jvj+11]=36 ;z[jvj+11]=36;
l41:V14=incon;
if((A<0)) goto l42;
V14=NB;
goto l43;
l46:x[jvj+11]=52 ;z[jvj+11]=52;
goto l41;
l50:V6=V115;
goto l22;
l51:V114=V7/M;
V115=V114;
if((V115!=0)) goto l50;
if((V7<=0)) goto l50;
V6=1;
goto l22;
l52:V33=V117;
goto l30;
l53:V116=V37/V36;
V117=V116;
if((V117!=0)) goto l52;
if((V37<=0)) goto l52;
V33=1;
goto l30;
l54:V20=V119;
goto l35;
l55:V118=V24/V19;
V119=V118;
if((V119!=0)) goto l54;
if((V24<=0)) goto l54;
V20=1;
goto l35;
}
