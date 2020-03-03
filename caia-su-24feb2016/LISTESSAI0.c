#include "dx.h"
void LISTESSAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V79=0,V80=0,V81=0,V1=0,V83=0,V84=0,V85=0,V3=0,B=0,V87=0,V88=0,V89=0,V5=0,V92=0,V93=0,V94=0,V7=0,D=0,V96=0,V97=0,V98=0,V9=0,E=0,V101=0,V102=0,V103=0,V11=0,F=0,V106=0,V107=0,V108=0,V13=0,G=0,V111=0,V112=0,V113=0,V15=0,H=0,V116=0,V117=0,V118=0,V17=0,V121=0,V122=0,V123=0,V19=0,O=0,V125=0,V126=0,V127=0,V21=0,P=0,V130=0,V131=0,V132=0,V23=0,PP=0,V135=0,V136=0,V137=0,V25=0,V31=0,V48=0,V32=0,V49=0,V47=0,V30=0,V140=0,V29=0,NN=0,V143=0,V144=0,V27=0,V50=0,V51=0,V147=0,V148=0,V149=0,V150=0,V151=0,V152=0,V154=0,V155=0,V156=0,V53=0,V158=0,V159=0,V160=0,V52=0,V60=0,R=0,V162=0,V163=0,V164=0,V54=0,V61=0,S=0,V167=0,V168=0,V169=0,V56=0,V65=0,V176=0,V177=0,V64=0,V179=0,V180=0,V181=0,V182=0,V183=0,V172=0,V68=0,V173=0,V174=0,V189=0,V186=0,V187=0,V188=0;
int Z,DR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=21;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; DR=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=683; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(683,Z,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(117,Z,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(0,42,V147)*/
V147=pile[WZ2]; 
pile[v[22]]=V147; 
(*f[38])( );     /*SPC0(V147,42,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=V148; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V148,32,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V149; pile[WZ2]=117; 
(*f[42])( );     /*SRA1(135,V149,117,V150)*/
V150=pile[WZ3]; 
pile[v[22]]=V150; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V150,58,V151)*/
V151=pile[WZ2]; 
pile[v[22]]=V151; pile[WZ1]=V51; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V151,V51,41,V152)*/
V152=pile[WZ3]; 
pile[v[22]]=V152; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V152,44,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V154; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V154,683,V155)*/
V155=pile[WZ3]; 
pile[v[22]]=V155; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V155,58,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=V156; pile[WZ1]=V50; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V156,V50,41,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=860; pile[WZ1]=Z; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(860,Z,jvj+1)*/
pile[v[22]]=V2; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V2,44,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V79; pile[WZ2]=860; 
(*f[42])( );     /*SRA1(135,V79,860,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=V80; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V80,61,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V81; pile[WZ2]=jvj+1; 
(*f[98])( );     /*SRA3(135,V81,jvj+1,V1)*/
V1=pile[WZ3]; 
l2:V3=incon;
pile[v[22]]=935; pile[WZ1]=Z; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(935,Z,jvj+2)*/
pile[v[22]]=V1; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V1,44,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V83; pile[WZ2]=935; 
(*f[42])( );     /*SRA1(135,V83,935,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V84,61,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V85; pile[WZ2]=jvj+2; 
(*f[98])( );     /*SRA3(135,V85,jvj+2,V3)*/
V3=pile[WZ3]; 
l4:V5=incon;
pile[v[22]]=936; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(936,Z,B)*/
B=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V3,44,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V87; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V87,936,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V88,61,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=B; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V89,B,41,V5)*/
V5=pile[WZ3]; 
l6:V7=incon;
pile[v[22]]=715; pile[WZ1]=Z; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(715,Z,jvj+3)*/
pile[v[22]]=V5; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V5,44,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V92; pile[WZ2]=715; 
(*f[42])( );     /*SRA1(135,V92,715,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V93,61,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V94; pile[WZ2]=jvj+3; 
(*f[98])( );     /*SRA3(135,V94,jvj+3,V7)*/
V7=pile[WZ3]; 
l8:V9=incon;
pile[v[22]]=493; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(493,Z,D)*/
D=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V7,44,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V96; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V96,493,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V97,61,V98)*/
V98=pile[WZ2]; 
pile[v[22]]=V98; pile[WZ1]=D; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V98,D,41,V9)*/
V9=pile[WZ3]; 
l10:V11=incon;
pile[v[22]]=876; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(876,Z,E)*/
E=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V9,44,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V101; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V101,876,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V102,61,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=V103; pile[WZ1]=E; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V103,E,41,V11)*/
V11=pile[WZ3]; 
l12:V13=incon;
pile[v[22]]=977; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(977,Z,F)*/
F=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V11,44,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V106; pile[WZ2]=977; 
(*f[42])( );     /*SRA1(135,V106,977,V107)*/
V107=pile[WZ3]; 
pile[v[22]]=V107; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V107,61,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=V108; pile[WZ1]=F; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V108,F,41,V13)*/
V13=pile[WZ3]; 
l14:V15=incon;
pile[v[22]]=927; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(927,Z,G)*/
G=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V13,44,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V111; pile[WZ2]=927; 
(*f[42])( );     /*SRA1(135,V111,927,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V112,61,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=V113; pile[WZ1]=G; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V113,G,41,V15)*/
V15=pile[WZ3]; 
l16:V17=incon;
pile[v[22]]=1037; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(1037,Z,H)*/
H=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V15,44,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V116; pile[WZ2]=1037; 
(*f[42])( );     /*SRA1(135,V116,1037,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=V117; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V117,61,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=V118; pile[WZ1]=H; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V118,H,41,V17)*/
V17=pile[WZ3]; 
l18:V19=incon;
pile[v[22]]=948; pile[WZ1]=Z; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(948,Z,jvj+4)*/
pile[v[22]]=V17; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V17,44,V121)*/
V121=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V121; pile[WZ2]=948; 
(*f[42])( );     /*SRA1(135,V121,948,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=V122; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V122,61,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V123; pile[WZ2]=jvj+4; 
(*f[98])( );     /*SRA3(135,V123,jvj+4,V19)*/
V19=pile[WZ3]; 
l20:V21=incon;
pile[v[22]]=955; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(955,Z,O)*/
O=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V19,44,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V125; pile[WZ2]=955; 
(*f[42])( );     /*SRA1(135,V125,955,V126)*/
V126=pile[WZ3]; 
pile[v[22]]=V126; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V126,61,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=V127; pile[WZ1]=O; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V127,O,41,V21)*/
V21=pile[WZ3]; 
l22:V23=incon;
pile[v[22]]=956; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(956,Z,P)*/
P=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V21,44,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V130; pile[WZ2]=956; 
(*f[42])( );     /*SRA1(135,V130,956,V131)*/
V131=pile[WZ3]; 
pile[v[22]]=V131; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V131,61,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=V132; pile[WZ1]=P; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V132,P,41,V23)*/
V23=pile[WZ3]; 
l24:V25=incon;
pile[v[22]]=1005; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(1005,Z,PP)*/
PP=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V23,44,V135)*/
V135=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V135; pile[WZ2]=1005; 
(*f[42])( );     /*SRA1(135,V135,1005,V136)*/
V136=pile[WZ3]; 
pile[v[22]]=V136; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V136,61,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=V137; pile[WZ1]=PP; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V137,PP,41,V25)*/
V25=pile[WZ3]; 
l26:V27=incon;
pile[v[22]]=695; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(695,Z,NN)*/
NN=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V25,44,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V143; pile[WZ2]=482; 
(*f[42])( );     /*SRA1(135,V143,482,V144)*/
V144=pile[WZ3]; 
pile[v[22]]=V144; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V144,58,V30)*/
V30=pile[WZ2]; 
V29=incon;
pile[v[22]]=1015; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(1015,Z,V47)*/
V47=pile[WZ2]; 
V31=incon;
if((NN==0)) goto l27;
V48=10000000/NN;
pile[v[22]]=V48; 
(*f[850])( );if(v[102]) goto l29;     /*LOG0(V48,V32)*/
V32=pile[WZ1]; 
V49=V32/10;
V31=V49;
l28:pile[v[22]]=V30; pile[WZ1]=V47; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V30,V47,41,V140)*/
V140=pile[WZ3]; 
V189=V140+V31;
V29=V189;
if((V31<=0)) goto l30;
V186=V31-1;
V187=0;
l50:if((V187>V186)) goto l30;
V188=V140+V187;
c[v[1]][V188]=48;
V187++;
goto l50;
l1:V1=V2;
goto l2;
l3:V3=V1;
goto l4;
l5:V5=V3;
goto l6;
l7:V7=V5;
goto l8;
l9:V9=V7;
goto l10;
l11:V11=V9;
goto l12;
l13:V13=V11;
goto l14;
l15:V15=V13;
goto l16;
l17:V17=V15;
goto l18;
l19:V19=V17;
goto l20;
l21:V21=V19;
goto l22;
l23:V23=V21;
goto l24;
l25:V25=V23;
goto l26;
l27:V31=6;
goto l28;
l29:V29=V30;
l30:pile[v[22]]=V29; pile[WZ1]=NN; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V29,NN,41,V27)*/
V27=pile[WZ3]; 
l32:pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
l44:if(DR!=43&&DR!=42) goto l48;
pile[v[22]]=863; pile[WZ1]=Z; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(863,Z,jvj+16)*/
l45:if((x[jvj+16]<=0)) goto l48;
x[jvj+5]=s[x[jvj+16]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+16];
pile[v[22]]=218; pile[WZ1]=jvj+5; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(218,jvj+5,jvj+17)*/
V172=x[jvj+17];
pile[v[22]]=20; pile[WZ1]=V172; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V172,0,V53)*/
V53=pile[WZ3]; 
V52=incon;
pile[v[22]]=986; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(986,jvj+5,jvj+6)*/
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
pile[v[22]]=V53; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V53,44,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V158; pile[WZ2]=986; 
(*f[42])( );     /*SRA1(135,V158,986,V159)*/
V159=pile[WZ3]; 
pile[v[22]]=V159; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V159,58,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V160; pile[WZ2]=jvj+7; 
(*f[98])( );     /*SRA3(135,V160,jvj+7,V52)*/
V52=pile[WZ3]; 
l34:V54=incon;
pile[v[22]]=737; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(737,jvj+5,V60)*/
V60=pile[WZ2]; 
R=V60;
pile[v[22]]=V52; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V52,44,V162)*/
V162=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V162; pile[WZ2]=737; 
(*f[42])( );     /*SRA1(135,V162,737,V163)*/
V163=pile[WZ3]; 
pile[v[22]]=V163; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V163,58,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=V164; pile[WZ1]=R; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V164,R,41,V54)*/
V54=pile[WZ3]; 
l36:V56=incon;
pile[v[22]]=846; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(846,jvj+5,V61)*/
V61=pile[WZ2]; 
S=V61;
pile[v[22]]=V54; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V54,44,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V167; pile[WZ2]=846; 
(*f[42])( );     /*SRA1(135,V167,846,V168)*/
V168=pile[WZ3]; 
pile[v[22]]=V168; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V168,58,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=V169; pile[WZ1]=S; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V169,S,41,V56)*/
V56=pile[WZ3]; 
l47:pile[v[22]]=V56; 
(*f[40])( );     /*SLG0(V56)*/
l46:x[jvj+16]=t[x[jvj+16]];
goto l45;
l31:V27=V25;
goto l32;
l33:V52=V53;
goto l34;
l35:V54=V52;
goto l36;
l37:V56=V54;
goto l47;
l38:pile[v[22]]=218; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(218,jvj+8,jvj+10)*/
x[jvj+21]=x[jvj+10] ;z[jvj+21]=z[jvj+10];
l42:x[jvj+15]=x[jvj+21] ;z[jvj+15]=z[jvj+21];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+15; 
(*f[42])( );     /*SRA1(135,0,jvj+15,V179)*/
V179=pile[WZ3]; 
pile[v[22]]=V179; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V179,58,V180)*/
V180=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V180; pile[WZ2]=jvj+14; 
(*f[98])( );     /*SRA3(135,V180,jvj+14,V181)*/
V181=pile[WZ3]; 
pile[v[22]]=V181; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V181,40,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V182; pile[WZ2]=jvj+13; 
(*f[98])( );     /*SRA3(135,V182,jvj+13,V183)*/
V183=pile[WZ3]; 
pile[v[22]]=V183; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V183,41,V65)*/
V65=pile[WZ2]; 
V64=incon;
pile[v[22]]=974; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(974,jvj+8,jvj+11)*/
x[jvj+12]=x[jvj+11] ;z[jvj+12]=z[jvj+11];
pile[v[22]]=135; pile[WZ1]=V65; pile[WZ2]=974; 
(*f[42])( );     /*SRA1(135,V65,974,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=V176; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V176,58,V177)*/
V177=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V177; pile[WZ2]=jvj+12; 
(*f[98])( );     /*SRA3(135,V177,jvj+12,V64)*/
V64=pile[WZ3]; 
l43:pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
l41:x[jvj+19]=t[x[jvj+19]];
l40:if((x[jvj+19]<=0)) goto l49;
x[jvj+8]=s[x[jvj+19]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+19];
pile[v[22]]=715; pile[WZ1]=jvj+8; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(715,jvj+8,jvj+13)*/
pile[v[22]]=550; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(550,jvj+8,jvj+14)*/
x[jvj+21]=incon;
pile[v[22]]=158; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(158,jvj+8,jvj+9)*/
if((x[jvj+9]==854)) goto l38;
x[jvj+21]=x[jvj+9] ;z[jvj+21]=z[jvj+9];
goto l42;
l39:V64=V65;
goto l43;
l48:if(DR!=45&&DR!=42) goto l49;
pile[v[22]]=966; pile[WZ1]=Z; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(966,Z,jvj+18)*/
pile[v[22]]=968; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(968,jvj+18,jvj+19)*/
if((x[jvj+19]==0)) goto l49;
pile[v[22]]=860; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(860,jvj+18,jvj+20)*/
pile[v[22]]=117; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(117,jvj+20,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=966; 
(*f[42])( );     /*SRA1(135,0,966,V173)*/
V173=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V68; pile[WZ2]=V173; 
(*f[39])( );     /*SDX0(41,V68,V173,V174)*/
V174=pile[WZ3]; 
pile[v[22]]=V174; 
(*f[40])( );     /*SLG0(V174)*/
goto l40;
l49:v[0]=jvj; v[22]-=2; return;
}
