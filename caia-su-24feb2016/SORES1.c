#include "dx.h"
void SORES1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V10=0,I=0,V13=0,V77=0,V70=0,V71=0,V72=0,V73=0,V74=0,V75=0,V76=0,K=0,V101=0,V86=0,V83=0,V84=0,V85=0,L=0,V102=0,V90=0,V87=0,V88=0,V89=0,V82=0,V80=0,V81=0,V29=0,V27=0,V42=0,V43=0,V33=0,V45=0,V44=0,V46=0,V47=0,V49=0,V48=0,V55=0,V54=0,V56=0,V31=0,V50=0,V37=0,V40=0,V39=0,V57=0,V61=0,V59=0,V60=0,V63=0,V66=0,V94=0,V93=0,V95=0,V30=0,KK=0,V79=0,V78=0,R=0,V98=0,V97=0,V28=0,V34=0;
int UR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=10403;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1487&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((v[112]==0)) goto l9;
V77=v[112];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=227; 
(*f[42])( );     /*SRA1(135,0,227,V70)*/
V70=pile[WZ3]; 
pile[WZ1]=V70; pile[WZ2]=24; 
(*f[42])( );     /*SRA1(135,V70,24,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V71,40,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; pile[WZ1]=112; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V72,112,41,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V73,41,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V74; pile[WZ2]=262; 
(*f[42])( );     /*SRA1(135,V74,262,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V77; pile[WZ2]=V75; 
(*f[39])( );     /*SDX0(41,V77,V75,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=V76; 
(*f[40])( );     /*SLG0(V76)*/
l9:if(UR!=90&&UR!=85&&UR!=73&&UR!=80) goto l21;
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=89; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l10;     /*FNDC2(89,jvj+3,V3)*/
V3=pile[WZ2]; 
if((V3==90)) goto l21;
l10:pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(642,jvj+3,V13)*/
V13=pile[WZ2]; 
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=1140; pile[WZ1]=854; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1140,854,jvj+4)*/
l1:if((x[jvj+4]>0)) goto l2;
I=0;
l6:if((I<=V13)) goto l7;
pile[v[22]]=V13; pile[WZ1]=0; 
(*f[1183])( );     /*UTILE0(V13,0)*/
x[jvj+11]=x[jvj+10] ;z[jvj+11]=z[jvj+10];
pile[v[22]]=jvj+3; pile[WZ1]=89; pile[WZ2]=90; 
(*f[69])( );     /*CHGC3(jvj+3,89,90)*/
pile[v[22]]=jvj+11; pile[WZ1]=V13; pile[WZ2]=jvj+12; 
(*f[1184])( );if(v[102]) goto l21;     /*MNMXNEC0(jvj+11,V13,jvj+12)*/
if((x[jvj+12]==135)) goto l8;
l21:x[jvj+22]=250 ;z[jvj+22]=250;
if((UR==70)) goto l44;
if((UR==61)) goto l45;
if((UR!=66)) goto l47;
V27=incon;
V29=bh[v[1]][2];
if((V29<48)) goto l56;
if((V29>57)) goto l56;
V28=135;
l19:if((V28==135)) goto l20;
V27=v[149];
l46:pile[v[22]]=V27; 
(*f[1186])( );     /*CAUSES0(V27)*/
l47:if(UR!=85&&UR!=73&&UR!=72&&UR!=80) goto l48;
x[jvj+23]=0 ;z[jvj+23]=0;
V33=incon;
V42=bh[v[1]][3];
if((V42<48)) goto l57;
if((V42>57)) goto l57;
V34=135;
l22:if((V34==135)) goto l23;
l24:V33=0;
l32:x[jvj+24]=vo[14];z[jvj+24]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(642,jvj+24,V50)*/
V50=pile[WZ2]; 
V31=0;
l33:if((V31>V50)) goto l37;
if((UR!=80)) goto l25;
V49=tt[V31];
V48=V49;
if(V48==187||V48==714||V48==280||V48==164||V48==365) goto l34;
l25:if((V33==0)) goto l26;
V45=tm[V31];
V44=vbl[V45];
if((V44==V33)) goto l26;
l34:V31++;
goto l33;
l2:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=345; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(345,jvj+5,jvj+6)*/
pile[v[22]]=365; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(365,jvj+6,jvj+7)*/
x[jvj+34]=x[jvj+7] ;z[jvj+34]=z[jvj+7];
l4:if((x[jvj+34]<=0)) goto l3;
x[jvj+8]=s[x[jvj+34]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+34];
pile[v[22]]=288; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(288,jvj+8,jvj+9)*/
if(x[jvj+9]!=44&&x[jvj+9]!=289) goto l5;
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(246,jvj+8,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V10; 
(*f[207])( );     /*PLUE2(jvj+10,V10)*/
l5:x[jvj+34]=t[x[jvj+34]];
goto l4;
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
l7:tu[I]=0;
I++;
goto l6;
l8:pile[v[22]]=V13; pile[WZ1]=1; 
(*f[1183])( );     /*UTILE0(V13,1)*/
goto l21;
l11:if((UR==65)) goto l50;
l52:x[jvj+37]=x[jvj+30] ;z[jvj+37]=z[jvj+30];
l51:if((x[jvj+37]<=0)) goto l50;
x[jvj+19]=s[x[jvj+37]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+37];
V79=x[jvj+19];
pile[v[22]]=20; pile[WZ1]=V79; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V79,0,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; 
(*f[40])( );     /*SLG0(V78)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(jvj+18,jvj+19,jvj+20)*/
x[jvj+35]=x[jvj+20] ;z[jvj+35]=z[jvj+20];
l15:if((x[jvj+35]>0)) goto l16;
x[jvj+37]=t[x[jvj+37]];
goto l51;
l13:K=s[V101];
V86=K;
pile[v[22]]=6; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(6,0,32,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=V83; pile[WZ1]=43; 
(*f[38])( );     /*SPC0(V83,43,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V86; pile[WZ2]=V84; 
(*f[39])( );     /*SDX0(20,V86,V84,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=V85; 
(*f[40])( );     /*SLG0(V85)*/
V101=t[V101];
l12:if((V101>0)) goto l13;
pile[v[22]]=365; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(365,jvj+13,jvj+17)*/
V102=x[jvj+17];
l14:if((V102<=0)) goto l17;
L=s[V102];
V90=L;
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(10,0,32,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=V87; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V87,42,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V90; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(20,V90,V88,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=V89; 
(*f[40])( );     /*SLG0(V89)*/
V102=t[V102];
goto l14;
l16:x[jvj+13]=s[x[jvj+35]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+35];
pile[v[22]]=489; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(489,jvj+13,jvj+14)*/
if((x[jvj+14]!=0)) goto l18;
pile[v[22]]=365; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(365,jvj+13,jvj+15)*/
if((x[jvj+15]!=0)) goto l18;
l17:x[jvj+35]=t[x[jvj+35]];
goto l15;
l18:V82=x[jvj+13];
pile[v[22]]=0; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(0,42,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V82; pile[WZ2]=V80; 
(*f[39])( );     /*SDX0(20,V82,V80,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=V81; 
(*f[40])( );     /*SLG0(V81)*/
pile[v[22]]=489; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(489,jvj+13,jvj+16)*/
V101=x[jvj+16];
goto l12;
l20:pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,V27)*/
V27=pile[WZ1]; 
goto l46;
l23:pile[v[22]]=2; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+21; 
(*f[78])( );if(v[102]) goto l24;     /*SMA0(2,36,67,jvj+21)*/
V43=x[jvj+21];
V33=V43;
goto l32;
l26:if(UR!=85&&UR!=80) goto l27;
V46=tu[V31];
if((V46>0)) goto l29;
l27:if((UR==73)) goto l28;
if((UR==72)) goto l29;
goto l34;
l28:V47=tu[V31];
if((V47==0)) goto l29;
goto l34;
l29:V56=bh[v[1]][2];
if(V56==45||V56==60) goto l30;
pile[v[22]]=V31; pile[WZ1]=jvj+22; pile[WZ2]=UR; 
(*f[1189])( );     /*SORELT1(V31,jvj+22,UR)*/
l30:if(V56!=45&&V56!=60) goto l34;
if((V56!=60)) goto l31;
V55=tt[V31];
V54=V55;
if(V54!=44&&V54!=289) goto l34;
l31:pile[v[22]]=V31; pile[WZ1]=jvj+23; 
(*f[1188])( );     /*SORTOTAL0(V31,jvj+23)*/
goto l34;
l35:V37=0;
l41:x[jvj+36]=x[jvj+23] ;z[jvj+36]=z[jvj+23];
l40:if((x[jvj+36]<=0)) goto l39;
x[jvj+27]=s[x[jvj+36]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+36];
pile[v[22]]=447; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(447,jvj+27,jvj+28)*/
if((x[jvj+28]!=x[jvj+25])) goto l42;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(117,jvj+27,V66)*/
V66=pile[WZ2]; 
V94=x[jvj+28];
pile[v[22]]=20; pile[WZ1]=V94; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V94,V37,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V66; pile[WZ2]=V93; 
(*f[39])( );     /*SDX0(41,V66,V93,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V95,(-4670),V40)*/
V40=pile[WZ2]; 
V39=incon;
if((V66>1)) goto l36;
V39=V40;
l43:pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
l42:x[jvj+36]=t[x[jvj+36]];
goto l40;
l36:pile[v[22]]=V40; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V40,83,V39)*/
V39=pile[WZ2]; 
goto l43;
l37:V57=bh[v[1]][2];
if(V57!=45&&V57!=60) goto l48;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(1484,854,V61)*/
V61=pile[WZ2]; 
V59=sepfacts+1;
V60=sepfacts+V61;
l38:if((V59>V60)) goto l48;
V63=r[V59];
if((V63!=1)) goto l39;
x[jvj+25]=V59 ;z[jvj+25]=(V59<=sepcte) ? V59 : 0;
V37=incon;
pile[v[22]]=963; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(963,jvj+25,jvj+26)*/
if((x[jvj+26]!=68)) goto l35;
pile[v[22]]=0; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(0,42,V37)*/
V37=pile[WZ2]; 
goto l41;
l39:V59++;
goto l38;
l44:
(*f[1185])( );     /*CHERCHE0()*/
goto l47;
l45:pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,V30,KK)*/
V30=pile[WZ1]; KK=pile[WZ2]; 
pile[v[22]]=V30; 
(*f[1187])( );     /*SORELT0(V30)*/
v[149]=V30;
goto l47;
l48:if(UR!=84&&UR!=68&&UR!=65) goto l53;
x[jvj+29]=vo[16];z[jvj+29]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(454,jvj+29,jvj+30)*/
x[jvj+31]=d[60];z[jvj+31]=0;
l49:if((x[jvj+31]<=0)) goto l53;
x[jvj+18]=s[x[jvj+31]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+31];
if((x[jvj+18]==480)) goto l11;
if((x[jvj+18]!=481)) goto l52;
if((UR==68)) goto l50;
goto l52;
l50:x[jvj+31]=t[x[jvj+31]];
goto l49;
l53:if(UR!=82&&UR!=84) goto l55;
x[jvj+32]=vo[16];z[jvj+32]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(509,jvj+32,jvj+33)*/
l54:if((x[jvj+33]<=0)) goto l55;
R=s[x[jvj+33]];
V98=R;
pile[v[22]]=20; pile[WZ1]=V98; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V98,0,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; 
(*f[40])( );     /*SLG0(V97)*/
x[jvj+33]=t[x[jvj+33]];
goto l54;
l55:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l56:V28=134;
goto l19;
l57:V34=134;
goto l22;
}
