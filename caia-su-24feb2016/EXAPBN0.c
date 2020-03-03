#include "dx.h"
void EXAPBN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V=0,V5=0,V4=0,V30=0,V9=0,V34=0,V12=0,V24=0,V25=0,V26=0,V28=0,V55=0,V56=0,V57=0,V59=0,V60=0,V61=0,V62=0,V63=0,V64=0,V65=0,V66=0,V68=0,V69=0,V70=0,V71=0,V73=0,V74=0,V75=0,V76=0,V37=0,V36=0,V38=0,V39=0,V40=0,LL=0,V78=0,V79=0,V80=0,V6=0,V41=0,V42=0,V43=0,V83=0,V84=0,V85=0,V87=0,V88=0,V89=0,V90=0,V92=0,V93=0,V94=0,V95=0,V101=0,V97=0,V98=0,V99=0,V100=0,V54=0,V46=0,V45=0,V52=0,V48=0,V49=0,V50=0,V51=0,V103=0,V105=0,V107=0,V108=0,V110=0,V111=0,V112=0,V113=0,V115=0,V116=0,V118=0,V10=0,V13=0,V135=0,V134=0;
int UR,E,G;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=11189;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==511&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; E=pile[v[22]+1]; G=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=610; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(0,610,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=0; pile[WZ2]=609; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,0,609,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ2]=515; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,0,515,jvj+31)*/
pile[v[22]]=117; pile[WZ2]=510; pile[WZ3]=0; pile[WZ4]=jvj+31; pile[WZ5]=jvj+24; 
(*f[190])( );     /*QUADRI3(117,0,510,0,jvj+31,jvj+24)*/
x[jvj+41]=x[E] ;z[jvj+41]=z[E];
l29:if((x[jvj+41]>0)) goto l30;
pile[v[22]]=117; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(117,jvj+24,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=610; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(610,jvj+24,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(609,jvj+24,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(515,jvj+24,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(510,jvj+24,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V52; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V52,0,V103)*/
V103=pile[WZ3]; 
pile[v[22]]=V103; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V103,(-2986),V46)*/
V46=pile[WZ2]; 
V45=incon;
if((V52>1)) goto l35;
V45=V46;
l36:pile[v[22]]=41; pile[WZ1]=V51; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(41,V51,V45,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V105; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V105,876,V107)*/
V107=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V50; pile[WZ2]=V107; 
(*f[39])( );     /*SDX0(41,V50,V107,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V108; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V108,936,V110)*/
V110=pile[WZ3]; 
pile[v[22]]=V110; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V110,61,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=V111; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V111,62,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V49; pile[WZ2]=V112; 
(*f[39])( );     /*SDX0(41,V49,V112,V113)*/
V113=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V113; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V113,876,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V48; pile[WZ2]=V115; 
(*f[39])( );     /*SDX0(41,V48,V115,V116)*/
V116=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V116; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V116,936,V118)*/
V118=pile[WZ3]; 
pile[v[22]]=V118; 
(*f[40])( );     /*SLG0(V118)*/
l37:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:x[jvj+4]=s[x[jvj+36]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+36];
pile[v[22]]=860; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(860,jvj+4,jvj+5)*/
if((x[jvj+5]!=1102)) goto l4;
pile[v[22]]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+4)*/
l4:x[jvj+36]=t[x[jvj+36]];
l2:if((x[jvj+36]>0)) goto l3;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=1251; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1251,jvj+2,jvj+7)*/
x[jvj+37]=x[jvj+7] ;z[jvj+37]=z[jvj+7];
l5:if((x[jvj+37]>0)) goto l6;
if(UR!=79&&UR!=84) goto l1;
if((x[jvj+6]!=0)) goto l32;
l1:if(UR!=78&&UR!=84) goto l31;
if((x[jvj+10]!=0)) goto l32;
l31:x[jvj+41]=t[x[jvj+41]];
goto l29;
l6:x[jvj+8]=s[x[jvj+37]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+37];
pile[v[22]]=860; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(860,jvj+8,jvj+9)*/
if((x[jvj+9]!=1102)) goto l7;
pile[v[22]]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+8)*/
l7:x[jvj+37]=t[x[jvj+37]];
goto l5;
l8:V4=V5;
l33:pile[v[22]]=V4; 
(*f[40])( );     /*SLG0(V4)*/
if((UR!=84)) goto l19;
if((x[jvj+6]==0)) goto l19;
pile[v[22]]=G; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(G,510,1)*/
l19:pile[v[22]]=944; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(944,jvj+2,jvj+19)*/
x[jvj+40]=x[jvj+19] ;z[jvj+40]=z[jvj+19];
l20:if((x[jvj+40]>0)) goto l21;
if((UR!=79)) goto l34;
pile[v[22]]=944; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(944,jvj+2,jvj+12)*/
x[jvj+38]=x[jvj+12] ;z[jvj+38]=z[jvj+12];
l9:if((x[jvj+38]<=0)) goto l34;
x[jvj+13]=s[x[jvj+38]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+38];
pile[v[22]]=683; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(683,jvj+13,V30)*/
V30=pile[WZ2]; 
if((V30!=3)) goto l10;
pile[v[22]]=860; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(860,jvj+13,jvj+14)*/
if((x[jvj+14]!=530)) goto l10;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(936,jvj+13,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(876,jvj+13,V36)*/
V36=pile[WZ2]; 
x[jvj+16]=0 ;z[jvj+16]=0;
V10=incon;
x[jvj+39]=x[jvj+6] ;z[jvj+39]=z[jvj+6];
l11:if((x[jvj+39]>0)) goto l12;
x[jvj+18]=0 ;z[jvj+18]=0;
V13=incon;
l15:if((x[jvj+16]>0)) goto l16;
if((x[jvj+18]<=0)) goto l34;
x[jvj+23]=s[x[jvj+18]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+18];
pile[v[22]]=876; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(876,jvj+23,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(936,jvj+23,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=jvj+24; pile[WZ1]=510; pile[WZ2]=V36; 
(*f[186])( );     /*BTC0(jvj+24,510,V36)*/
pile[WZ1]=515; pile[WZ2]=V37; 
(*f[186])( );     /*BTC0(jvj+24,515,V37)*/
pile[WZ1]=609; pile[WZ2]=V38; 
(*f[186])( );     /*BTC0(jvj+24,609,V38)*/
pile[WZ1]=610; pile[WZ2]=V39; 
(*f[186])( );     /*BTC0(jvj+24,610,V39)*/
pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+24,117,1)*/
l34:pile[v[22]]=G; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(G,117,1)*/
if(UR==79||UR==84) goto l24;
l27:if(UR==78||UR==84) goto l28;
goto l31;
l10:x[jvj+38]=t[x[jvj+38]];
goto l9;
l12:x[jvj+15]=s[x[jvj+39]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+39];
pile[v[22]]=876; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(876,jvj+15,V9)*/
V9=pile[WZ2]; 
if(V10==incon) goto l38;
if((V9==V10)) goto l14;
if((V9<=V10)) goto l38;
l13:x[jvj+39]=t[x[jvj+39]];
goto l11;
l16:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=876; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(876,jvj+17,V34)*/
V34=pile[WZ2]; 
if((V34>=V36)) goto l17;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(936,jvj+17,V12)*/
V12=pile[WZ2]; 
if(V13==incon) goto l39;
if((V12==V13)) goto l18;
if((V12<=V13)) goto l39;
l17:x[jvj+16]=t[x[jvj+16]];
goto l15;
l21:x[jvj+20]=s[x[jvj+40]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+40];
pile[v[22]]=860; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(860,jvj+20,jvj+21)*/
if((x[jvj+21]!=530)) goto l22;
pile[v[22]]=977; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(977,jvj+20,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(876,jvj+20,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(936,jvj+20,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(683,jvj+20,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=935; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(935,jvj+20,jvj+22)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,0,683,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V55,58,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=V28; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V56,V28,41,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V57,44,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=935; 
(*f[42])( );     /*SRA1(135,V59,935,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V60,58,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V61; pile[WZ2]=jvj+22; 
(*f[42])( );     /*SRA1(135,V61,jvj+22,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V62,44,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V63; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V63,936,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V64,58,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=V26; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V65,V26,41,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V66,44,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V68; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V68,876,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V69,58,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=V70; pile[WZ1]=V25; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V70,V25,41,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V71,44,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V73; pile[WZ2]=977; 
(*f[42])( );     /*SRA1(135,V73,977,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V74,58,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V75; pile[WZ1]=V24; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V75,V24,41,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=V76; 
(*f[40])( );     /*SLG0(V76)*/
l22:x[jvj+40]=t[x[jvj+40]];
goto l20;
l23:V6=0;
l26:pile[v[22]]=135; pile[WZ1]=V6; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V6,936,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=V83; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V83,58,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=V84; pile[WZ1]=V43; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V84,V43,41,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=V85; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V85,44,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V87; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V87,876,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V88,58,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=V42; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V89,V42,41,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=V90; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V90,44,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V92; pile[WZ2]=977; 
(*f[42])( );     /*SRA1(135,V92,977,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V93,58,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=V94; pile[WZ1]=V41; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V94,V41,41,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; 
(*f[40])( );     /*SLG0(V95)*/
l25:x[jvj+6]=t[x[jvj+6]];
l24:if((x[jvj+6]<=0)) goto l27;
x[jvj+25]=s[x[jvj+6]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+6];
pile[v[22]]=977; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(977,jvj+25,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(876,jvj+25,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(936,jvj+25,V43)*/
V43=pile[WZ2]; 
V6=incon;
pile[v[22]]=1102; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(1102,jvj+25,V40)*/
V40=pile[WZ2]; 
LL=V40;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1102; 
(*f[42])( );     /*SRA1(135,0,1102,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V78,58,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=LL; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(41,LL,V79,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=V80; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V80,44,V6)*/
V6=pile[WZ2]; 
goto l26;
l30:x[jvj+11]=s[x[jvj+41]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+41];
pile[v[22]]=109; pile[WZ1]=jvj+11; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(109,jvj+11,jvj+32)*/
pile[v[22]]=983; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(983,jvj+32,jvj+33)*/
pile[v[22]]=878; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(878,jvj+33,jvj+34)*/
l40:if((x[jvj+34]<=0)) goto l31;
x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=163; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(163,jvj+35,V135)*/
V135=pile[WZ2]; 
pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(163,jvj+11,V134)*/
V134=pile[WZ2]; 
if((V135==V134)) goto l41;
x[jvj+34]=t[x[jvj+34]];
goto l40;
l32:V54=x[jvj+28];
pile[v[22]]=20; pile[WZ1]=V54; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V54,0,V5)*/
V5=pile[WZ3]; 
V4=incon;
pile[v[22]]=163; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(163,jvj+11,V20)*/
V20=pile[WZ2]; 
V=V20;
pile[v[22]]=V5; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V5,V,V4)*/
V4=pile[WZ2]; 
goto l33;
l35:pile[v[22]]=V46; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V46,83,V45)*/
V45=pile[WZ2]; 
goto l36;
l38:V10=V9;
x[jvj+16]=0 ;z[jvj+16]=0;
l14:pile[v[22]]=jvj+16; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+15)*/
goto l13;
l39:V13=V12;
x[jvj+18]=0 ;z[jvj+18]=0;
l18:pile[v[22]]=jvj+18; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+17)*/
goto l17;
l41:x[jvj+42]=x[jvj+35] ;z[jvj+42]=z[jvj+35];
pile[v[22]]=109; pile[WZ1]=jvj+11; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(109,jvj+11,jvj+28)*/
x[jvj+2]=x[jvj+42] ;z[jvj+2]=z[jvj+42];
x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=1250; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1250,jvj+2,jvj+3)*/
x[jvj+36]=x[jvj+3] ;z[jvj+36]=z[jvj+3];
goto l2;
l28:if((x[jvj+10]<=0)) goto l31;
x[jvj+26]=s[x[jvj+10]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+10];
pile[v[22]]=195; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(195,jvj+26,jvj+27)*/
V101=x[jvj+27];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1041; 
(*f[42])( );     /*SRA1(135,0,1041,V97)*/
V97=pile[WZ3]; 
pile[WZ1]=V97; pile[WZ2]=1102; 
(*f[42])( );     /*SRA1(135,V97,1102,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=V98; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V98,58,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V101; pile[WZ2]=V99; 
(*f[39])( );     /*SDX0(23,V101,V99,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=V100; 
(*f[40])( );     /*SLG0(V100)*/
x[jvj+10]=t[x[jvj+10]];
goto l28;
}
