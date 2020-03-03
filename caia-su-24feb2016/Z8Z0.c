#include "dx.h"
void Z8Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,T=0,V18=0,V19=0,V20=0,V58=0,V54=0,V55=0,V56=0,V57=0,V69=0,V65=0,V66=0,V67=0,V68=0,V74=0,V70=0,V71=0,V72=0,V73=0,V79=0,V75=0,V76=0,V77=0,V78=0,V84=0,V80=0,V81=0,V82=0,V83=0,V89=0,V85=0,V86=0,V87=0,V88=0,V94=0,V90=0,V91=0,V92=0,V93=0,V29=0,NNNX=0,V115=0,V26=0,V24=0,V25=0,V27=0,V28=0,V36=0,V37=0,V38=0,V39=0,V40=0,V42=0,V43=0,V44=0,V45=0,V46=0,V30=0,V31=0,V32=0,V33=0,V34=0,V64=0,V59=0,V60=0,V61=0,V62=0,V63=0,V53=0,V48=0,V49=0,V50=0,V51=0,V52=0,V106=0,V101=0,V102=0,V103=0,V104=0,V105=0,V112=0,V107=0,V108=0,V109=0,V110=0,V111=0,V100=0,V95=0,V96=0,V97=0,V98=0,V99=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=158; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,SUJ,jvj+2)*/
T=x[jvj+2];
l5:pile[v[22]]=480; pile[WZ1]=SUJ; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(480,SUJ,jvj+3)*/
l6:if((x[jvj+3]>0)) goto l7;
pile[v[22]]=481; pile[WZ1]=SUJ; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(481,SUJ,jvj+5)*/
l8:if((x[jvj+5]>0)) goto l9;
pile[v[22]]=SUJ; pile[WZ1]=jvj+7; 
(*f[4086])( );     /*ENSATT0(SUJ,jvj+7)*/
pile[v[22]]=158; pile[WZ1]=SUJ; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(158,SUJ,jvj+8)*/
if(x[jvj+8]==461||x[jvj+8]==460||x[jvj+8]==453||x[jvj+8]==531||x[jvj+8]==483||x[jvj+8]==488||x[jvj+8]==478||x[jvj+8]==487||x[jvj+8]==21) goto l11;
V58=x[jvj+8];
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V54)*/
V54=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V54; pile[WZ2]=158; 
(*f[42])( );     /*SRA1(135,V54,158,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V55,(-4390),V56)*/
V56=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V58; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(20,V58,V56,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
l11:pile[v[22]]=277; pile[WZ1]=SUJ; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(277,SUJ,jvj+9)*/
if(x[jvj+9]==454) goto l12;
V69=x[jvj+9];
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V65)*/
V65=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V65; pile[WZ2]=277; 
(*f[42])( );     /*SRA1(135,V65,277,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V66,(-4390),V67)*/
V67=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V69; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(20,V69,V67,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=V68; 
(*f[40])( );     /*SLG0(V68)*/
l12:pile[v[22]]=288; pile[WZ1]=SUJ; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(288,SUJ,jvj+10)*/
if(x[jvj+10]==41||x[jvj+10]==89) goto l13;
V74=x[jvj+10];
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V70)*/
V70=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V70; pile[WZ2]=288; 
(*f[42])( );     /*SRA1(135,V70,288,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V71,(-4390),V72)*/
V72=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V74; pile[WZ2]=V72; 
(*f[39])( );     /*SDX0(20,V74,V72,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; 
(*f[40])( );     /*SLG0(V73)*/
l13:pile[v[22]]=319; pile[WZ1]=SUJ; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(319,SUJ,jvj+11)*/
if(x[jvj+11]==68||x[jvj+11]==67) goto l14;
V79=x[jvj+11];
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V75)*/
V75=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V75; pile[WZ2]=319; 
(*f[42])( );     /*SRA1(135,V75,319,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=V76; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V76,(-4390),V77)*/
V77=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V79; pile[WZ2]=V77; 
(*f[39])( );     /*SDX0(20,V79,V77,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; 
(*f[40])( );     /*SLG0(V78)*/
l14:pile[v[22]]=497; pile[WZ1]=SUJ; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(497,SUJ,jvj+12)*/
if(x[jvj+12]==68||x[jvj+12]==67) goto l15;
V84=x[jvj+12];
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V80)*/
V80=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V80; pile[WZ2]=497; 
(*f[42])( );     /*SRA1(135,V80,497,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=V81; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V81,(-4390),V82)*/
V82=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V84; pile[WZ2]=V82; 
(*f[39])( );     /*SDX0(20,V84,V82,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=V83; 
(*f[40])( );     /*SLG0(V83)*/
l15:pile[v[22]]=519; pile[WZ1]=SUJ; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(519,SUJ,jvj+13)*/
if(x[jvj+13]==68||x[jvj+13]==67) goto l16;
V89=x[jvj+13];
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V85)*/
V85=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V85; pile[WZ2]=519; 
(*f[42])( );     /*SRA1(135,V85,519,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=V86; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V86,(-4390),V87)*/
V87=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V89; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(20,V89,V87,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; 
(*f[40])( );     /*SLG0(V88)*/
l16:pile[v[22]]=520; pile[WZ1]=SUJ; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(520,SUJ,jvj+14)*/
if(x[jvj+14]==68||x[jvj+14]==67) goto l17;
V94=x[jvj+14];
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V90)*/
V90=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V90; pile[WZ2]=520; 
(*f[42])( );     /*SRA1(135,V90,520,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=V91; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V91,(-4390),V92)*/
V92=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V94; pile[WZ2]=V92; 
(*f[39])( );     /*SDX0(20,V94,V92,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; 
(*f[40])( );     /*SLG0(V93)*/
l17:V29=x[SUJ];
V115=x[jvj+7];
l18:if((V115>0)) goto l19;
if((T==531)) goto l10;
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==164) goto l21;
l22:for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==280) goto l23;
l10:if(T==453||T==531) goto l2;
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==416) goto l24;
l2:pile[v[22]]=158; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(158,SUJ,jvj+1)*/
l1:pile[v[22]]=140; pile[WZ1]=SUJ; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,SUJ,V2)*/
V2=pile[WZ2]; 
l27:if((T!=531)) goto l30;
pile[v[22]]=164; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(164,SUJ,V19)*/
V19=pile[WZ2]; 
l4:pile[v[22]]=280; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(280,SUJ,V20)*/
V20=pile[WZ2]; 
l30:if(T!=453&&T!=531) goto l32;
pile[v[22]]=416; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(416,SUJ,V18)*/
V18=pile[WZ2]; 
l32:v[0]=jvj; v[22]-=1; return;
l3:T=250;
goto l5;
l7:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; 
(*f[4051])( );     /*Z32Z0(jvj+4)*/
x[jvj+3]=t[x[jvj+3]];
goto l6;
l9:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; 
(*f[4051])( );     /*Z32Z0(jvj+6)*/
x[jvj+5]=t[x[jvj+5]];
goto l8;
l19:NNNX=s[V115];
if(NNNX==140||NNNX==158||NNNX==277||NNNX==288||NNNX==319||NNNX==497||NNNX==519||NNNX==520||NNNX==472||NNNX==473||NNNX==413||NNNX==414||NNNX==480||NNNX==481||NNNX==416||NNNX==510||NNNX==515||NNNX==446||NNNX==164||NNNX==280) goto l20;
V26=NNNX;
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V24)*/
V24=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V26; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(20,V26,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V25,(-740),V27)*/
V27=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V29; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(20,V29,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
l20:V115=t[V115];
goto l18;
l21:pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V36)*/
V36=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V36; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V36,134,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=164; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,164,V37,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V38,(-740),V39)*/
V39=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V29; pile[WZ2]=V39; 
(*f[39])( );     /*SDX0(20,V29,V39,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
goto l22;
l23:pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V42)*/
V42=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V42; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V42,134,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=280; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(20,280,V43,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V44,(-740),V45)*/
V45=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V29; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(20,V29,V45,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; 
(*f[40])( );     /*SLG0(V46)*/
goto l10;
l24:pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V30)*/
V30=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V30; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V30,134,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=416; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(20,416,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V32,(-740),V33)*/
V33=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V29; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(20,V29,V33,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
goto l2;
l25:V64=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V59)*/
V59=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V59,300,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=158; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(20,158,V60,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V61,(-740),V62)*/
V62=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V64; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(20,V64,V62,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; 
(*f[40])( );     /*SLG0(V63)*/
goto l1;
l26:V53=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V48)*/
V48=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V48,300,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=140; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(20,140,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V50,(-740),V51)*/
V51=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V53; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(20,V53,V51,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; 
(*f[40])( );     /*SLG0(V52)*/
goto l27;
l28:V106=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V101)*/
V101=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V101; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V101,300,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=164; pile[WZ2]=V102; 
(*f[39])( );     /*SDX0(20,164,V102,V103)*/
V103=pile[WZ3]; 
pile[v[22]]=V103; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V103,(-740),V104)*/
V104=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V106; pile[WZ2]=V104; 
(*f[39])( );     /*SDX0(20,V106,V104,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=V105; 
(*f[40])( );     /*SLG0(V105)*/
goto l4;
l29:V112=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V107)*/
V107=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V107; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V107,300,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=280; pile[WZ2]=V108; 
(*f[39])( );     /*SDX0(20,280,V108,V109)*/
V109=pile[WZ3]; 
pile[v[22]]=V109; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V109,(-740),V110)*/
V110=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V112; pile[WZ2]=V110; 
(*f[39])( );     /*SDX0(20,V112,V110,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=V111; 
(*f[40])( );     /*SLG0(V111)*/
goto l30;
l31:V100=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4790); 
(*f[37])( );     /*SRA0(0,(-4790),V95)*/
V95=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V95; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V95,300,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=416; pile[WZ2]=V96; 
(*f[39])( );     /*SDX0(20,416,V96,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V97,(-740),V98)*/
V98=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V100; pile[WZ2]=V98; 
(*f[39])( );     /*SDX0(20,V100,V98,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=V99; 
(*f[40])( );     /*SLG0(V99)*/
goto l32;
}
