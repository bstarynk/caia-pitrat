#include "dx.h"
void LIRELTDEBILAN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V48=0,V49=0,V3=0,V50=0,V51=0,V52=0,V53=0,V2=0,V58=0,V55=0,V56=0,V4=0,V19=0,V82=0,V78=0,V80=0,V81=0,V25=0,M=0,V16=0,V26=0,V87=0,V85=0,V86=0,V88=0,V89=0,V37=0,V95=0,V91=0,V93=0,V94=0,V35=0,V34=0,V47=0,V45=0,V101=0,V97=0,V99=0,V100=0,V102=0,V103=0,V59=0,V60=0,V12=0,V13=0,V14=0,V69=0,V70=0,V72=0,V73=0,V75=0,V76=0,V9=0,V10=0,V61=0,V62=0,V63=0,V65=0,V66=0,V67=0;
int H;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=25;
if(v[0]>99700) (*f[6])( );

H=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=860; pile[WZ1]=H; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(860,H,jvj+1)*/
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=46; 
(*f[41])( );     /*SRB0(10,0,46,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=jvj+1; 
(*f[42])( );     /*SRA1(135,V48,jvj+1,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; 
(*f[40])( );     /*SLG0(V49)*/
l18:pile[v[22]]=860; pile[WZ1]=H; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(860,H,jvj+20)*/
if((x[jvj+20]!=208)) goto l20;
pile[v[22]]=159; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(159,H,jvj+21)*/
l19:if((x[jvj+21]<=0)) goto l20;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=jvj+22; 
(*f[450])( );     /*SOREGBILAN0(jvj+22)*/
x[jvj+21]=t[x[jvj+21]];
goto l19;
l1:V2=V3;
l2:V4=incon;
pile[v[22]]=901; pile[WZ1]=H; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(901,H,jvj+3)*/
if((x[jvj+3]!=0)) goto l3;
V4=V2;
l23:pile[v[22]]=V4; 
(*f[40])( );     /*SLG0(V4)*/
if((x[jvj+23]!=1000)) goto l26;
pile[v[22]]=874; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(874,H,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=858; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(858,H,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=397; 
(*f[42])( );     /*SRA1(135,0,397,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V61,58,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V10; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(41,V10,V62,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V63; pile[WZ2]=598; 
(*f[42])( );     /*SRA1(135,V63,598,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V65,58,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V9; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(41,V9,V66,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; 
(*f[40])( );     /*SLG0(V67)*/
pile[v[22]]=159; pile[WZ1]=H; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(159,H,jvj+24)*/
l24:if((x[jvj+24]<=0)) goto l26;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=117; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(117,jvj+25,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(510,jvj+25,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=1110; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(1110,jvj+25,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=499; 
(*f[42])( );     /*SRA1(135,0,499,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V14; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(41,V14,V69,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V70,58,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V13; pile[WZ2]=V72; 
(*f[39])( );     /*SDX0(41,V13,V72,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V73,(-740),V75)*/
V75=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V12; pile[WZ2]=V75; 
(*f[39])( );     /*SDX0(41,V12,V75,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=V76; 
(*f[40])( );     /*SLG0(V76)*/
l25:x[jvj+24]=t[x[jvj+24]];
goto l24;
l3:V58=x[jvj+3];
pile[v[22]]=135; pile[WZ1]=V2; pile[WZ2]=901; 
(*f[42])( );     /*SRA1(135,V2,901,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V55,58,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V58; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(23,V58,V56,V4)*/
V4=pile[WZ3]; 
goto l23;
l5:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=195; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(195,jvj+5,jvj+6)*/
for(i=x[jvj+6],V19=0;i>0;i=t[i],V19++)  ;
if((V19<=0)) goto l6;
V82=x[jvj+6];
pile[v[22]]=41; pile[WZ1]=V19; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V19,0,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V78; pile[WZ2]=1041; 
(*f[42])( );     /*SRA1(135,V78,1041,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V82; pile[WZ2]=V80; 
(*f[39])( );     /*SDX0(23,V82,V80,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=V81; 
(*f[40])( );     /*SLG0(V81)*/
l6:x[jvj+4]=t[x[jvj+4]];
l4:if((x[jvj+4]>0)) goto l5;
pile[v[22]]=159; pile[WZ1]=H; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(159,H,jvj+8)*/
l8:if((x[jvj+8]<=0)) goto l21;
x[jvj+7]=s[x[jvj+8]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+8];
pile[v[22]]=893; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(893,jvj+7,jvj+9)*/
if((x[jvj+9]==1041)) goto l9;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+7,V26)*/
V26=pile[WZ2]; 
V16=incon;
pile[v[22]]=204; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(204,jvj+7,V25)*/
V25=pile[WZ2]; 
M=V25;
pile[v[22]]=41; pile[WZ1]=M; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,M,0,V16)*/
V16=pile[WZ3]; 
l10:pile[v[22]]=1081; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1081,jvj+7,jvj+10)*/
V87=x[jvj+10];
pile[v[22]]=135; pile[WZ1]=V16; pile[WZ2]=jvj+9; 
(*f[42])( );     /*SRA1(135,V16,jvj+9,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V87; pile[WZ2]=V85; 
(*f[39])( );     /*SDX0(23,V87,V85,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=V86; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V86,(-740),V88)*/
V88=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V26; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(41,V26,V88,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=V89; 
(*f[40])( );     /*SLG0(V89)*/
l9:x[jvj+8]=t[x[jvj+8]];
goto l8;
l7:V16=0;
goto l10;
l12:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=195; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(195,jvj+12,jvj+13)*/
for(i=x[jvj+13],V37=0;i>0;i=t[i],V37++)  ;
if((V37<=0)) goto l13;
V95=x[jvj+13];
pile[v[22]]=41; pile[WZ1]=V37; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V37,0,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V91; pile[WZ2]=1041; 
(*f[42])( );     /*SRA1(135,V91,1041,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V95; pile[WZ2]=V93; 
(*f[39])( );     /*SDX0(23,V95,V93,V94)*/
V94=pile[WZ3]; 
pile[v[22]]=V94; 
(*f[40])( );     /*SLG0(V94)*/
l13:x[jvj+11]=t[x[jvj+11]];
l11:if((x[jvj+11]>0)) goto l12;
pile[v[22]]=159; pile[WZ1]=H; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(159,H,jvj+16)*/
l15:if((x[jvj+16]<=0)) goto l22;
x[jvj+14]=s[x[jvj+16]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+16];
pile[v[22]]=893; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(893,jvj+14,jvj+17)*/
if((x[jvj+17]!=1000)) goto l16;
pile[v[22]]=1025; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1025,jvj+14,jvj+15)*/
if((x[jvj+15]<=0)) goto l16;
x[jvj+18]=s[x[jvj+15]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+15];
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(876,jvj+14,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+14,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=698; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(698,jvj+18,jvj+19)*/
V101=x[jvj+19];
pile[v[22]]=41; pile[WZ1]=V47; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V47,0,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; pile[WZ1]=(-5994); 
(*f[37])( );     /*SRA0(V97,(-5994),V35)*/
V35=pile[WZ2]; 
V34=incon;
if((V47>1)) goto l14;
V34=V35;
l17:pile[v[22]]=V34; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V34,(-9813),V99)*/
V99=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V101; pile[WZ2]=V99; 
(*f[39])( );     /*SDX0(20,V101,V99,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=V100; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V100,(-740),V102)*/
V102=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V45; pile[WZ2]=V102; 
(*f[39])( );     /*SDX0(41,V45,V102,V103)*/
V103=pile[WZ3]; 
pile[v[22]]=V103; 
(*f[40])( );     /*SLG0(V103)*/
l16:x[jvj+16]=t[x[jvj+16]];
goto l15;
l14:pile[v[22]]=V35; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V35,83,V34)*/
V34=pile[WZ2]; 
goto l17;
l20:if(x[jvj+20]!=1082&&x[jvj+20]!=336) goto l21;
pile[v[22]]=159; pile[WZ1]=H; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,H,jvj+4)*/
goto l4;
l21:if((x[jvj+20]!=301)) goto l22;
pile[v[22]]=159; pile[WZ1]=H; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(159,H,jvj+11)*/
goto l11;
l22:pile[v[22]]=893; pile[WZ1]=H; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(893,H,jvj+23)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=893; 
(*f[42])( );     /*SRA1(135,0,893,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V59,58,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V60; pile[WZ2]=jvj+23; 
(*f[42])( );     /*SRA1(135,V60,jvj+23,V3)*/
V3=pile[WZ3]; 
V2=incon;
pile[v[22]]=122; pile[WZ1]=H; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(122,H,jvj+2)*/
pile[v[22]]=V3; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V3,40,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=(-9813); pile[WZ1]=V50; 
(*f[64])( );     /*SRA2((-9813),V50,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V51; pile[WZ2]=43; 
(*f[42])( );     /*SRA1(135,V51,43,V52)*/
V52=pile[WZ3]; 
pile[WZ1]=V52; pile[WZ2]=jvj+2; 
(*f[42])( );     /*SRA1(135,V52,jvj+2,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V53,41,V2)*/
V2=pile[WZ2]; 
goto l2;
l26:v[0]=jvj; v[22]-=1; return;
}
