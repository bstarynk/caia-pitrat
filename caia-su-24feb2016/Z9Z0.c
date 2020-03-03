#include "dx.h"
void Z9Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,T=0,V109=0,V105=0,V106=0,V107=0,V108=0,V120=0,V116=0,V117=0,V118=0,V119=0,NNNZ=0,V86=0,V82=0,V83=0,V84=0,V85=0,V27=0,NNNX=0,V135=0,V24=0,V22=0,V23=0,V25=0,V26=0,V28=0,V29=0,V30=0,V31=0,V32=0,V40=0,V41=0,V42=0,V43=0,V44=0,V46=0,V47=0,V48=0,V49=0,V50=0,V70=0,V71=0,V72=0,V73=0,V74=0,V52=0,V53=0,V54=0,V55=0,V56=0,V58=0,V59=0,V60=0,V61=0,V62=0,V64=0,V65=0,V66=0,V67=0,V68=0,V34=0,V35=0,V36=0,V37=0,V38=0,V98=0,V93=0,V94=0,V95=0,V96=0,V97=0,V104=0,V99=0,V100=0,V101=0,V102=0,V103=0,V115=0,V110=0,V111=0,V112=0,V113=0,V114=0,V132=0,V127=0,V128=0,V129=0,V130=0,V131=0,V92=0,V87=0,V88=0,V89=0,V90=0,V91=0,V126=0,V121=0,V122=0,V123=0,V124=0,V125=0,V81=0,V76=0,V77=0,V78=0,V79=0,V80=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=19;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=343; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(343,SUJ,jvj+2)*/
T=x[jvj+2];
l7:pile[v[22]]=708; pile[WZ1]=SUJ; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(708,SUJ,jvj+8)*/
pile[v[22]]=jvj+8; 
(*f[4052])( );     /*Z33Z0(jvj+8)*/
l8:pile[v[22]]=319; pile[WZ1]=SUJ; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(319,SUJ,jvj+9)*/
pile[v[22]]=jvj+9; 
(*f[4051])( );     /*Z32Z0(jvj+9)*/
l9:pile[v[22]]=497; pile[WZ1]=SUJ; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(497,SUJ,jvj+10)*/
pile[v[22]]=jvj+10; 
(*f[4051])( );     /*Z32Z0(jvj+10)*/
l10:pile[v[22]]=482; pile[WZ1]=SUJ; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(482,SUJ,jvj+11)*/
pile[v[22]]=jvj+11; 
(*f[4051])( );     /*Z32Z0(jvj+11)*/
l11:pile[v[22]]=494; pile[WZ1]=SUJ; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(494,SUJ,jvj+12)*/
l12:if((x[jvj+12]>0)) goto l13;
pile[v[22]]=SUJ; pile[WZ1]=jvj+14; 
(*f[4086])( );     /*ENSATT0(SUJ,jvj+14)*/
pile[v[22]]=361; pile[WZ1]=SUJ; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(361,SUJ,jvj+15)*/
if(x[jvj+15]==580||x[jvj+15]==529) goto l15;
V109=x[jvj+15];
pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V105)*/
V105=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V105; pile[WZ2]=361; 
(*f[42])( );     /*SRA1(135,V105,361,V106)*/
V106=pile[WZ3]; 
pile[v[22]]=V106; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V106,(-4390),V107)*/
V107=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V109; pile[WZ2]=V107; 
(*f[39])( );     /*SDX0(20,V109,V107,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=V108; 
(*f[40])( );     /*SLG0(V108)*/
l15:pile[v[22]]=343; pile[WZ1]=SUJ; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(343,SUJ,jvj+16)*/
if(x[jvj+16]==259||x[jvj+16]==48||x[jvj+16]==55) goto l16;
V120=x[jvj+16];
pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V116)*/
V116=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V116; pile[WZ2]=343; 
(*f[42])( );     /*SRA1(135,V116,343,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=V117; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V117,(-4390),V118)*/
V118=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V120; pile[WZ2]=V118; 
(*f[39])( );     /*SDX0(20,V120,V118,V119)*/
V119=pile[WZ3]; 
pile[v[22]]=V119; 
(*f[40])( );     /*SLG0(V119)*/
l16:pile[v[22]]=159; pile[WZ1]=SUJ; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(159,SUJ,jvj+17)*/
l17:if((x[jvj+17]>0)) goto l18;
V27=x[SUJ];
V135=x[jvj+14];
l20:if((V135>0)) goto l21;
if((T==55)) goto l31;
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==159) goto l23;
l24:for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==230) goto l25;
l26:for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==220) goto l27;
l28:for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==482) goto l29;
l30:if((T!=48)) goto l31;
l36:for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==218) goto l37;
l14:if(T==55||T==48) goto l39;
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==498) goto l38;
l39:pile[v[22]]=226; pile[WZ1]=SUJ; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(226,SUJ,jvj+18)*/
l40:if((x[jvj+18]>0)) goto l41;
if((T==48)) goto l4;
if((T==259)) goto l6;
if((T!=55)) goto l46;
pile[v[22]]=482; pile[WZ1]=SUJ; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(482,SUJ,jvj+7)*/
l46:if(T!=55&&T!=48) goto l2;
pile[v[22]]=498; pile[WZ1]=SUJ; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(498,SUJ,jvj+3)*/
l2:pile[v[22]]=343; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(343,SUJ,jvj+1)*/
l1:pile[v[22]]=499; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(499,SUJ,V2)*/
V2=pile[WZ2]; 
l50:v[0]=jvj; v[22]-=1; return;
l3:T=250;
goto l7;
l4:pile[v[22]]=319; pile[WZ1]=SUJ; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(319,SUJ,jvj+4)*/
l5:pile[v[22]]=497; pile[WZ1]=SUJ; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(497,SUJ,jvj+5)*/
goto l46;
l6:pile[v[22]]=218; pile[WZ1]=SUJ; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(218,SUJ,jvj+6)*/
goto l46;
l13:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; 
(*f[4051])( );     /*Z32Z0(jvj+13)*/
x[jvj+12]=t[x[jvj+12]];
goto l12;
l18:NNNZ=s[x[jvj+17]];
if(NNNZ==208||NNNZ==527||NNNZ==689||NNNZ==54) goto l19;
V86=NNNZ;
pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V82)*/
V82=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V82; pile[WZ2]=159; 
(*f[42])( );     /*SRA1(135,V82,159,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=V83; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V83,(-4390),V84)*/
V84=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V86; pile[WZ2]=V84; 
(*f[39])( );     /*SDX0(20,V86,V84,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=V85; 
(*f[40])( );     /*SLG0(V85)*/
l19:x[jvj+17]=t[x[jvj+17]];
goto l17;
l21:NNNX=s[V135];
if(NNNX==494||NNNX==499||NNNX==529||NNNX==528||NNNX==159||NNNX==226||NNNX==498||NNNX==708||NNNX==230||NNNX==220||NNNX==319||NNNX==497||NNNX==361||NNNX==218||NNNX==343||NNNX==482) goto l22;
V24=NNNX;
pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V22)*/
V22=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V24; pile[WZ2]=V22; 
(*f[39])( );     /*SDX0(20,V24,V22,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V23,(-740),V25)*/
V25=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(20,V27,V25,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; 
(*f[40])( );     /*SLG0(V26)*/
l22:V135=t[V135];
goto l20;
l23:pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V28)*/
V28=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V28,134,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=159; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(20,159,V29,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V30,(-740),V31)*/
V31=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(20,V27,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
goto l24;
l25:pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V40)*/
V40=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V40; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V40,134,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=230; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(20,230,V41,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V42,(-740),V43)*/
V43=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(20,V27,V43,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
goto l26;
l27:pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V46)*/
V46=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V46,134,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=220; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(20,220,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V48,(-740),V49)*/
V49=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(20,V27,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; 
(*f[40])( );     /*SLG0(V50)*/
goto l28;
l29:pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V70)*/
V70=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V70; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V70,134,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=482; pile[WZ2]=V71; 
(*f[39])( );     /*SDX0(20,482,V71,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=V72; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V72,(-740),V73)*/
V73=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=V73; 
(*f[39])( );     /*SDX0(20,V27,V73,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; 
(*f[40])( );     /*SLG0(V74)*/
goto l30;
l31:for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==319) goto l32;
l33:for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==497) goto l34;
l35:if((T!=259)) goto l36;
goto l14;
l32:pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V52)*/
V52=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V52,134,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=319; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(20,319,V53,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V54,(-740),V55)*/
V55=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(20,V27,V55,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=V56; 
(*f[40])( );     /*SLG0(V56)*/
goto l33;
l34:pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V58)*/
V58=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V58; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V58,134,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=497; pile[WZ2]=V59; 
(*f[39])( );     /*SDX0(20,497,V59,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V60,(-740),V61)*/
V61=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(20,V27,V61,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; 
(*f[40])( );     /*SLG0(V62)*/
goto l35;
l37:pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V64)*/
V64=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V64; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V64,134,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=218; pile[WZ2]=V65; 
(*f[39])( );     /*SDX0(20,218,V65,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V66,(-740),V67)*/
V67=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(20,V27,V67,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=V68; 
(*f[40])( );     /*SLG0(V68)*/
goto l14;
l38:pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V34)*/
V34=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V34; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V34,134,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=498; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(20,498,V35,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V36,(-740),V37)*/
V37=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V27,V37,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; 
(*f[40])( );     /*SLG0(V38)*/
goto l39;
l41:x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=jvj+19; 
(*f[4050])( );     /*Z9Z0(jvj+19)*/
x[jvj+18]=t[x[jvj+18]];
goto l40;
l42:V98=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V93)*/
V93=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V93; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V93,300,V94)*/
V94=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=319; pile[WZ2]=V94; 
(*f[39])( );     /*SDX0(20,319,V94,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V95,(-740),V96)*/
V96=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V98; pile[WZ2]=V96; 
(*f[39])( );     /*SDX0(20,V98,V96,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; 
(*f[40])( );     /*SLG0(V97)*/
goto l5;
l43:V104=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V99)*/
V99=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V99; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V99,300,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=497; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(20,497,V100,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=V101; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V101,(-740),V102)*/
V102=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V104; pile[WZ2]=V102; 
(*f[39])( );     /*SDX0(20,V104,V102,V103)*/
V103=pile[WZ3]; 
pile[v[22]]=V103; 
(*f[40])( );     /*SLG0(V103)*/
goto l46;
l44:V115=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V110)*/
V110=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V110; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V110,300,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=218; pile[WZ2]=V111; 
(*f[39])( );     /*SDX0(20,218,V111,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V112,(-740),V113)*/
V113=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V115; pile[WZ2]=V113; 
(*f[39])( );     /*SDX0(20,V115,V113,V114)*/
V114=pile[WZ3]; 
pile[v[22]]=V114; 
(*f[40])( );     /*SLG0(V114)*/
goto l46;
l45:V132=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V127)*/
V127=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V127; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V127,300,V128)*/
V128=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=482; pile[WZ2]=V128; 
(*f[39])( );     /*SDX0(20,482,V128,V129)*/
V129=pile[WZ3]; 
pile[v[22]]=V129; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V129,(-740),V130)*/
V130=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V132; pile[WZ2]=V130; 
(*f[39])( );     /*SDX0(20,V132,V130,V131)*/
V131=pile[WZ3]; 
pile[v[22]]=V131; 
(*f[40])( );     /*SLG0(V131)*/
goto l46;
l47:V92=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V87)*/
V87=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V87; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V87,300,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=498; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(20,498,V88,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=V89; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V89,(-740),V90)*/
V90=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V92; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(20,V92,V90,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=V91; 
(*f[40])( );     /*SLG0(V91)*/
goto l2;
l48:V126=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V121)*/
V121=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V121; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V121,300,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=343; pile[WZ2]=V122; 
(*f[39])( );     /*SDX0(20,343,V122,V123)*/
V123=pile[WZ3]; 
pile[v[22]]=V123; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V123,(-740),V124)*/
V124=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V126; pile[WZ2]=V124; 
(*f[39])( );     /*SDX0(20,V126,V124,V125)*/
V125=pile[WZ3]; 
pile[v[22]]=V125; 
(*f[40])( );     /*SLG0(V125)*/
goto l1;
l49:V81=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4784); 
(*f[37])( );     /*SRA0(0,(-4784),V76)*/
V76=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V76; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V76,300,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=499; pile[WZ2]=V77; 
(*f[39])( );     /*SDX0(20,499,V77,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V78,(-740),V79)*/
V79=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V81; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(20,V81,V79,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=V80; 
(*f[40])( );     /*SLG0(V80)*/
goto l50;
}
