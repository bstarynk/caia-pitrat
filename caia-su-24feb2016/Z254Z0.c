#include "dx.h"
void Z254Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V5=0,V6=0,V28=0,V24=0,V25=0,V26=0,V27=0,V63=0,V59=0,V60=0,V61=0,V62=0,V23=0,NNNX=0,V68=0,V20=0,V18=0,V19=0,V21=0,V22=0,V58=0,V53=0,V54=0,V55=0,V56=0,V57=0,V34=0,V29=0,V30=0,V31=0,V32=0,V33=0,V40=0,V35=0,V36=0,V37=0,V38=0,V39=0,V46=0,V41=0,V42=0,V43=0,V44=0,V45=0,V52=0,V47=0,V48=0,V49=0,V50=0,V51=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=608; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(608,SUJ,jvj+2)*/
pile[v[22]]=jvj+2; 
(*f[4048])( );     /*Z258Z0(jvj+2)*/
l5:pile[v[22]]=509; pile[WZ1]=SUJ; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(509,SUJ,jvj+3)*/
l6:if((x[jvj+3]>0)) goto l7;
pile[v[22]]=598; pile[WZ1]=SUJ; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(598,SUJ,jvj+5)*/
l8:if((x[jvj+5]>0)) goto l9;
pile[v[22]]=632; pile[WZ1]=SUJ; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(632,SUJ,jvj+7)*/
l10:if((x[jvj+7]>0)) goto l11;
pile[v[22]]=128; pile[WZ1]=SUJ; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(128,SUJ,jvj+9)*/
l12:if((x[jvj+9]>0)) goto l13;
pile[v[22]]=SUJ; pile[WZ1]=jvj+11; 
(*f[4086])( );     /*ENSATT0(SUJ,jvj+11)*/
pile[v[22]]=506; pile[WZ1]=SUJ; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(506,SUJ,jvj+12)*/
if(x[jvj+12]==68||x[jvj+12]==67||x[jvj+12]==12) goto l14;
V28=x[jvj+12];
pile[v[22]]=0; pile[WZ1]=(-4772); 
(*f[37])( );     /*SRA0(0,(-4772),V24)*/
V24=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V24; pile[WZ2]=506; 
(*f[42])( );     /*SRA1(135,V24,506,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V25,(-4390),V26)*/
V26=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V28; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V28,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
l14:pile[v[22]]=301; pile[WZ1]=SUJ; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(301,SUJ,jvj+13)*/
if(x[jvj+13]==68) goto l15;
V63=x[jvj+13];
pile[v[22]]=0; pile[WZ1]=(-4772); 
(*f[37])( );     /*SRA0(0,(-4772),V59)*/
V59=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,V59,301,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V60,(-4390),V61)*/
V61=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V63; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(20,V63,V61,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; 
(*f[40])( );     /*SLG0(V62)*/
l15:V23=x[SUJ];
V68=x[jvj+11];
l16:if((V68>0)) goto l17;
pile[v[22]]=297; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(297,SUJ,jvj+1)*/
l1:pile[v[22]]=117; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,SUJ,V3)*/
V3=pile[WZ2]; 
l2:pile[v[22]]=414; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(414,SUJ,V4)*/
V4=pile[WZ2]; 
l3:pile[v[22]]=405; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(405,SUJ,V5)*/
V5=pile[WZ2]; 
l4:pile[v[22]]=466; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(466,SUJ,V6)*/
V6=pile[WZ2]; 
l24:v[0]=jvj; v[22]-=1; return;
l7:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; 
(*f[4047])( );     /*Z255Z0(jvj+4)*/
x[jvj+3]=t[x[jvj+3]];
goto l6;
l9:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; 
(*f[4047])( );     /*Z255Z0(jvj+6)*/
x[jvj+5]=t[x[jvj+5]];
goto l8;
l11:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; 
(*f[4047])( );     /*Z255Z0(jvj+8)*/
x[jvj+7]=t[x[jvj+7]];
goto l10;
l13:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; 
(*f[4049])( );     /*Z8Z0(jvj+10)*/
x[jvj+9]=t[x[jvj+9]];
goto l12;
l17:NNNX=s[V68];
if(NNNX==140||NNNX==509||NNNX==506||NNNX==117||NNNX==414||NNNX==405||NNNX==466||NNNX==109||NNNX==297||NNNX==301||NNNX==598||NNNX==608||NNNX==632||NNNX==128) goto l18;
V20=NNNX;
pile[v[22]]=0; pile[WZ1]=(-4772); 
(*f[37])( );     /*SRA0(0,(-4772),V18)*/
V18=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V20; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(20,V20,V18,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V19,(-740),V21)*/
V21=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V23; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(20,V23,V21,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; 
(*f[40])( );     /*SLG0(V22)*/
l18:V68=t[V68];
goto l16;
l19:V58=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4772); 
(*f[37])( );     /*SRA0(0,(-4772),V53)*/
V53=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V53; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V53,300,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=297; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(20,297,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V55,(-740),V56)*/
V56=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V58; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(20,V58,V56,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
goto l1;
l20:V34=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4772); 
(*f[37])( );     /*SRA0(0,(-4772),V29)*/
V29=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V29; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V29,300,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=117; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(20,117,V30,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V31,(-740),V32)*/
V32=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V34; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,V34,V32,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; 
(*f[40])( );     /*SLG0(V33)*/
goto l2;
l21:V40=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4772); 
(*f[37])( );     /*SRA0(0,(-4772),V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V35,300,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=414; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(20,414,V36,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V37,(-740),V38)*/
V38=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V40; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(20,V40,V38,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
goto l3;
l22:V46=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4772); 
(*f[37])( );     /*SRA0(0,(-4772),V41)*/
V41=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V41; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V41,300,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=405; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(20,405,V42,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V43,(-740),V44)*/
V44=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V46; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(20,V46,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; 
(*f[40])( );     /*SLG0(V45)*/
goto l4;
l23:V52=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4772); 
(*f[37])( );     /*SRA0(0,(-4772),V47)*/
V47=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V47; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V47,300,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=466; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(20,466,V48,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V49,(-740),V50)*/
V50=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V52; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,V52,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
goto l24;
}
