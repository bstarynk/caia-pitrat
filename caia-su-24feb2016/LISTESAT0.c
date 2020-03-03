#include "dx.h"
void LISTESAT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,KR=0,V15=0,V11=0,V8=0,V6=0,V7=0,V10=0,NR=0,V16=0,V17=0,V18=0,V58=0,V56=0,V57=0,V59=0,V60=0,V62=0,V61=0,V54=0,V55=0,V69=0,V70=0,V71=0,V73=0,V74=0,V75=0,V76=0,V78=0,V43=0,V42=0,V40=0,V51=0,V49=0,V50=0,V52=0,V67=0,V68=0,V65=0,V41=0,V47=0,V46=0,V39=0,V45=0,V44=0,V101=0,V99=0,V100=0,V102=0,V103=0,V105=0,V104=0,V97=0,V98=0,V112=0,V113=0,V114=0,V116=0,V117=0,V118=0,V119=0,V121=0,V86=0,V85=0,V83=0,V94=0,V92=0,V93=0,V95=0,V110=0,V111=0,V108=0,V84=0,V90=0,V89=0,V82=0,V88=0,V87=0;
int H;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

H=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:pile[v[22]]=46; 
(*f[346])( );     /*LK1(46)*/
V1=bh[v[1]][0];
KR=V1;
if((KR==84)) goto l2;
if((KR==88)) goto l3;
if((KR!=78)) goto l7;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,NR)*/
NR=pile[WZ1]; 
pile[v[22]]=H; pile[WZ1]=683; pile[WZ2]=NR; 
(*f[43])( );     /*CHGC2(H,683,NR)*/
l7:if(KR==84||KR==78||KR==83||KR==88) goto l8;
pile[v[22]]=0; pile[WZ1]=(-5606); 
(*f[37])( );     /*SRA0(0,(-5606),V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=KR; 
(*f[38])( );     /*SPC0(V16,KR,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=(-3412); 
(*f[37])( );     /*SRA0(V17,(-3412),V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
l8:if(KR!=83&&KR!=88) goto l1;
v[0]=jvj; v[22]-=1; return;
l2:pile[v[22]]=H; pile[WZ1]=109; pile[WZ2]=324; 
(*f[35])( );     /*CHGC1(H,109,324)*/
goto l7;
l3:pile[v[22]]=109; pile[WZ1]=H; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,H,jvj+1)*/
if((x[jvj+1]!=324)) goto l4;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(683,H,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1484,854,V8)*/
V8=pile[WZ2]; 
V6=sepfacts+1;
V7=sepfacts+V8;
l5:if((V6>V7)) goto l7;
V10=r[V6];
if((V10!=1)) goto l6;
x[jvj+3]=V6 ;z[jvj+3]=(V6<=sepcte) ? V6 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(983,jvj+3,jvj+4)*/
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
pile[v[22]]=1001; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1001,jvj+5,jvj+6)*/
if((x[jvj+6]==0)) goto l6;
V101=x[jvj+5];
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(30,0,42,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=4; pile[WZ1]=V99; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(4,V99,32,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V101; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(20,V101,V100,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=4; pile[WZ1]=V102; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(4,V102,32,V103)*/
V103=pile[WZ3]; 
V105=75-V103;
pile[v[22]]=V105; pile[WZ1]=V103; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V105,V103,42,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=V104; 
(*f[40])( );     /*SLG0(V104)*/
pile[v[22]]=737; pile[WZ1]=0; pile[WZ2]=846; pile[WZ3]=0; pile[WZ4]=jvj+11; 
(*f[391])( );     /*QUADRI10(737,0,846,0,jvj+11)*/
pile[v[22]]=1001; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1001,jvj+5,jvj+12)*/
l20:if((x[jvj+12]>0)) goto l21;
pile[v[22]]=846; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(846,jvj+11,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(737,jvj+11,V98)*/
V98=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,0,301,V112)*/
V112=pile[WZ3]; 
pile[WZ1]=V112; pile[WZ2]=737; 
(*f[42])( );     /*SRA1(135,V112,737,V113)*/
V113=pile[WZ3]; 
pile[v[22]]=V113; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V113,58,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=V114; pile[WZ1]=V98; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V114,V98,41,V116)*/
V116=pile[WZ3]; 
pile[v[22]]=V116; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V116,59,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V117; pile[WZ2]=846; 
(*f[42])( );     /*SRA1(135,V117,846,V118)*/
V118=pile[WZ3]; 
pile[v[22]]=V118; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V118,58,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V97; pile[WZ2]=V119; 
(*f[39])( );     /*SDX0(41,V97,V119,V121)*/
V121=pile[WZ3]; 
pile[v[22]]=V121; 
(*f[40])( );     /*SLG0(V121)*/
l6:V6++;
goto l5;
l4:pile[v[22]]=683; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(683,H,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=983; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(983,jvj+1,jvj+2)*/
V58=x[jvj+2];
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(30,0,42,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=4; pile[WZ1]=V56; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(4,V56,32,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V58; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(20,V58,V57,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=4; pile[WZ1]=V59; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(4,V59,32,V60)*/
V60=pile[WZ3]; 
V62=75-V60;
pile[v[22]]=V62; pile[WZ1]=V60; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V62,V60,42,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; 
(*f[40])( );     /*SLG0(V61)*/
pile[v[22]]=737; pile[WZ1]=0; pile[WZ2]=846; pile[WZ3]=0; pile[WZ4]=jvj+7; 
(*f[391])( );     /*QUADRI10(737,0,846,0,jvj+7)*/
pile[v[22]]=1001; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1001,jvj+2,jvj+8)*/
l9:if((x[jvj+8]>0)) goto l10;
pile[v[22]]=846; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(846,jvj+7,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(737,jvj+7,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,0,301,V69)*/
V69=pile[WZ3]; 
pile[WZ1]=V69; pile[WZ2]=737; 
(*f[42])( );     /*SRA1(135,V69,737,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V70,58,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=V55; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V71,V55,41,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V73,59,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V74; pile[WZ2]=846; 
(*f[42])( );     /*SRA1(135,V74,846,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=V75; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V75,58,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V54; pile[WZ2]=V76; 
(*f[39])( );     /*SDX0(41,V54,V76,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; 
(*f[40])( );     /*SLG0(V78)*/
goto l7;
l10:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
if((V15<0)) goto l19;
pile[v[22]]=683; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(683,jvj+9,V43)*/
V43=pile[WZ2]; 
if((V15==V43)) goto l19;
l11:x[jvj+8]=t[x[jvj+8]];
goto l9;
l14:V51=V52;
l13:pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
l12:pile[v[22]]=jvj+7; pile[WZ1]=737; pile[WZ2]=V40; 
(*f[186])( );     /*BTC0(jvj+7,737,V40)*/
pile[WZ1]=846; pile[WZ2]=V42; 
(*f[186])( );     /*BTC0(jvj+7,846,V42)*/
goto l11;
l16:V41=0;
l15:V40=V39;
V42=V41;
if((V15<0)) goto l12;
pile[v[22]]=109; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(109,jvj+9,jvj+10)*/
V68=x[jvj+10];
pile[v[22]]=41; pile[WZ1]=V40; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V40,0,V65)*/
V65=pile[WZ3]; 
pile[WZ1]=V42; pile[WZ2]=V65; 
(*f[39])( );     /*SDX0(41,V42,V65,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V68; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(20,V68,V67,V52)*/
V52=pile[WZ3]; 
V51=incon;
pile[v[22]]=163; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,jvj+9,V49)*/
V49=pile[WZ2]; 
V50=V49;
pile[v[22]]=V52; pile[WZ1]=V50; 
(*f[37])( );     /*SRA0(V52,V50,V51)*/
V51=pile[WZ2]; 
goto l13;
l18:V39=0;
l17:V41=incon;
pile[v[22]]=846; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(846,jvj+9,V46)*/
V46=pile[WZ2]; 
V47=V46;
V41=V47;
goto l15;
l19:V39=incon;
pile[v[22]]=737; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(737,jvj+9,V44)*/
V44=pile[WZ2]; 
V45=V44;
V39=V45;
goto l17;
l21:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
if((V11<0)) goto l30;
pile[v[22]]=683; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(683,jvj+13,V86)*/
V86=pile[WZ2]; 
if((V11==V86)) goto l30;
l22:x[jvj+12]=t[x[jvj+12]];
goto l20;
l25:V94=V95;
l24:pile[v[22]]=V94; 
(*f[40])( );     /*SLG0(V94)*/
l23:pile[v[22]]=jvj+11; pile[WZ1]=737; pile[WZ2]=V83; 
(*f[186])( );     /*BTC0(jvj+11,737,V83)*/
pile[WZ1]=846; pile[WZ2]=V85; 
(*f[186])( );     /*BTC0(jvj+11,846,V85)*/
goto l22;
l27:V84=0;
l26:V83=V82;
V85=V84;
if((V11<0)) goto l23;
pile[v[22]]=109; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(109,jvj+13,jvj+14)*/
V111=x[jvj+14];
pile[v[22]]=41; pile[WZ1]=V83; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V83,0,V108)*/
V108=pile[WZ3]; 
pile[WZ1]=V85; pile[WZ2]=V108; 
(*f[39])( );     /*SDX0(41,V85,V108,V110)*/
V110=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V111; pile[WZ2]=V110; 
(*f[39])( );     /*SDX0(20,V111,V110,V95)*/
V95=pile[WZ3]; 
V94=incon;
pile[v[22]]=163; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(163,jvj+13,V92)*/
V92=pile[WZ2]; 
V93=V92;
pile[v[22]]=V95; pile[WZ1]=V93; 
(*f[37])( );     /*SRA0(V95,V93,V94)*/
V94=pile[WZ2]; 
goto l24;
l29:V82=0;
l28:V84=incon;
pile[v[22]]=846; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(846,jvj+13,V89)*/
V89=pile[WZ2]; 
V90=V89;
V84=V90;
goto l26;
l30:V82=incon;
pile[v[22]]=737; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(737,jvj+13,V87)*/
V87=pile[WZ2]; 
V88=V87;
V82=V88;
goto l28;
}
