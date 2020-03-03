#include "dx.h"
void Z32Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int T=0,V5=0,V6=0,V36=0,V32=0,V33=0,V34=0,V35=0,V59=0,V55=0,V56=0,V57=0,V58=0,V11=0,V72=0,V73=0,V74=0,V75=0,V19=0,NNNX=0,V78=0,V16=0,V14=0,V15=0,V17=0,V18=0,V20=0,V21=0,V22=0,V23=0,V24=0,V26=0,V27=0,V28=0,V29=0,V30=0,V42=0,V37=0,V38=0,V39=0,V40=0,V41=0,V65=0,V60=0,V61=0,V62=0,V63=0,V64=0,V71=0,V66=0,V67=0,V68=0,V69=0,V70=0,V48=0,V43=0,V44=0,V45=0,V46=0,V47=0,V54=0,V49=0,V50=0,V51=0,V52=0,V53=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=158; pile[WZ1]=SUJ; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,SUJ,jvj+4)*/
T=x[jvj+4];
l6:pile[v[22]]=509; pile[WZ1]=SUJ; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(509,SUJ,jvj+5)*/
l7:if((x[jvj+5]>0)) goto l8;
pile[v[22]]=SUJ; pile[WZ1]=jvj+7; 
(*f[4086])( );     /*ENSATT0(SUJ,jvj+7)*/
pile[v[22]]=158; pile[WZ1]=SUJ; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,SUJ,jvj+8)*/
if(x[jvj+8]==89||x[jvj+8]==41) goto l9;
V36=x[jvj+8];
pile[v[22]]=0; pile[WZ1]=(-4785); 
(*f[37])( );     /*SRA0(0,(-4785),V32)*/
V32=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=158; 
(*f[42])( );     /*SRA1(135,V32,158,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V33,(-4390),V34)*/
V34=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V36; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(20,V36,V34,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; 
(*f[40])( );     /*SLG0(V35)*/
l9:pile[v[22]]=277; pile[WZ1]=SUJ; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(277,SUJ,jvj+9)*/
if(x[jvj+9]==480||x[jvj+9]==481) goto l10;
V59=x[jvj+9];
pile[v[22]]=0; pile[WZ1]=(-4785); 
(*f[37])( );     /*SRA0(0,(-4785),V55)*/
V55=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V55; pile[WZ2]=277; 
(*f[42])( );     /*SRA1(135,V55,277,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=V56; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V56,(-4390),V57)*/
V57=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V59; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(20,V59,V57,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=V58; 
(*f[40])( );     /*SLG0(V58)*/
l10:pile[v[22]]=522; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(522,SUJ,V11)*/
V11=pile[WZ2]; 
if(V11==0||V11==1) goto l11;
pile[v[22]]=0; pile[WZ1]=(-4785); 
(*f[37])( );     /*SRA0(0,(-4785),V72)*/
V72=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V72; pile[WZ2]=522; 
(*f[42])( );     /*SRA1(135,V72,522,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V73,(-4390),V74)*/
V74=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V11; pile[WZ2]=V74; 
(*f[39])( );     /*SDX0(41,V11,V74,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=V75; 
(*f[40])( );     /*SLG0(V75)*/
l11:V19=x[SUJ];
V78=x[jvj+7];
l12:if((V78>0)) goto l13;
if((T==89)) goto l17;
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==162) goto l15;
l16:if((T!=41)) goto l17;
l1:pile[v[22]]=158; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(158,SUJ,jvj+1)*/
l2:pile[v[22]]=277; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(277,SUJ,jvj+2)*/
l3:pile[v[22]]=498; pile[WZ1]=SUJ; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(498,SUJ,jvj+3)*/
l22:if((T==89)) goto l5;
if((T!=41)) goto l25;
pile[v[22]]=130; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,SUJ,V6)*/
V6=pile[WZ2]; 
l25:v[0]=jvj; v[22]-=1; return;
l4:T=250;
goto l6;
l5:pile[v[22]]=162; pile[WZ1]=SUJ; 
(*f[219])( );if(v[102]) goto l23;     /*FNDC2(162,SUJ,V5)*/
V5=pile[WZ2]; 
goto l25;
l8:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; 
(*f[4047])( );     /*Z255Z0(jvj+6)*/
x[jvj+5]=t[x[jvj+5]];
goto l7;
l13:NNNX=s[V78];
if(NNNX==158||NNNX==162||NNNX==130||NNNX==164||NNNX==280||NNNX==277||NNNX==365||NNNX==489||NNNX==472||NNNX==473||NNNX==498||NNNX==509||NNNX==522) goto l14;
V16=NNNX;
pile[v[22]]=0; pile[WZ1]=(-4785); 
(*f[37])( );     /*SRA0(0,(-4785),V14)*/
V14=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V16; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(20,V16,V14,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V15,(-740),V17)*/
V17=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V19; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,V19,V17,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
l14:V78=t[V78];
goto l12;
l15:pile[v[22]]=0; pile[WZ1]=(-4785); 
(*f[37])( );     /*SRA0(0,(-4785),V20)*/
V20=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V20; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V20,134,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=162; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(20,162,V21,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V22,(-740),V23)*/
V23=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V19; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(20,V19,V23,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; 
(*f[40])( );     /*SLG0(V24)*/
goto l16;
l17:for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==130) goto l18;
goto l1;
l18:pile[v[22]]=0; pile[WZ1]=(-4785); 
(*f[37])( );     /*SRA0(0,(-4785),V26)*/
V26=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V26; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,V26,134,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=130; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(20,130,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V28,(-740),V29)*/
V29=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V19; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(20,V19,V29,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; 
(*f[40])( );     /*SLG0(V30)*/
goto l1;
l19:V42=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4785); 
(*f[37])( );     /*SRA0(0,(-4785),V37)*/
V37=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V37; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V37,300,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=158; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(20,158,V38,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V39,(-740),V40)*/
V40=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V42; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(20,V42,V40,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; 
(*f[40])( );     /*SLG0(V41)*/
goto l2;
l20:V65=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4785); 
(*f[37])( );     /*SRA0(0,(-4785),V60)*/
V60=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V60; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V60,300,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=277; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(20,277,V61,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V62,(-740),V63)*/
V63=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V65; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(20,V65,V63,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
goto l3;
l21:V71=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4785); 
(*f[37])( );     /*SRA0(0,(-4785),V66)*/
V66=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V66; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V66,300,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=498; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(20,498,V67,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=V68; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V68,(-740),V69)*/
V69=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V71; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(20,V71,V69,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; 
(*f[40])( );     /*SLG0(V70)*/
goto l22;
l23:V48=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4785); 
(*f[37])( );     /*SRA0(0,(-4785),V43)*/
V43=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V43,300,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=162; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(20,162,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V45,(-740),V46)*/
V46=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V48; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(20,V48,V46,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; 
(*f[40])( );     /*SLG0(V47)*/
goto l25;
l24:V54=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4785); 
(*f[37])( );     /*SRA0(0,(-4785),V49)*/
V49=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V49; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V49,300,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=130; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,130,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V51,(-740),V52)*/
V52=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V54; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(20,V54,V52,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
goto l25;
}
