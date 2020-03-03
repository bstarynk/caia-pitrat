#include "dx.h"
void DEFEXECD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V5=0,V7=0,V15=0,V16=0,V17=0,V18=0,V19=0,V20=0,V21=0,V22=0,V23=0,V24=0,V25=0,V26=0,V27=0,V28=0,V29=0,V30=0,V31=0,V32=0,V33=0,V34=0,V35=0,V11=0,K=0,KK=0,V13=0,V52=0,V53=0,V10=0,V36=0,V37=0,V38=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V45=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V8=0,V71=0,V72=0,V73=0,V74=0,V75=0,V76=0,V77=0,V78=0,V79=0,V80=0,V81=0,V82=0,V83=0,V84=0,V85=0,V86=0,V87=0,V88=0,V89=0,V90=0,V91=0,V92=0,V93=0,V94=0,V95=0,V96=0,V67=0,V68=0,V69=0;
int N,D,I;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=21;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; D=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=68; pile[WZ1]=158; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(68,158,jvj+4)*/
pile[v[22]]=924; pile[WZ1]=1161; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(924,1161,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=5; pile[WZ2]=1058; pile[WZ3]=jvj+9; 
(*f[189])( );     /*TRI4(jvj+8,5,1058,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=607; pile[WZ2]=1002; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+9,607,1002,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=67; pile[WZ2]=978; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+10,67,978,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=924; pile[WZ2]=970; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+11,924,970,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=67; pile[WZ2]=948; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+12,67,948,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=60; pile[WZ2]=936; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,60,936,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=530; pile[WZ2]=860; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,530,860,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=3; pile[WZ2]=683; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,3,683,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=100000; pile[WZ2]=529; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,100000,529,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ2]=493; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,100000,493,jvj+18)*/
pile[v[22]]=109; pile[WZ1]=N; pile[WZ2]=117; pile[WZ3]=I; pile[WZ4]=jvj+18; pile[WZ5]=jvj+1; 
(*f[47])( );     /*QUADRI0(109,N,117,I,jvj+18,jvj+1)*/
pile[v[22]]=163; pile[WZ1]=D; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,D,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=163; pile[WZ2]=V1; 
(*f[177])( );     /*CHGC4(jvj+1,163,V1)*/
l1:pile[v[22]]=jvj+1; pile[WZ1]=1056; pile[WZ2]=1060; 
(*f[36])( );     /*PLUSC0(jvj+1,1056,1060)*/
pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(158,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l10;
pile[v[22]]=N; pile[WZ1]=jvj+2; 
(*f[430])( );     /*POSPROG0(N,jvj+2)*/
if((x[jvj+2]==67)) goto l10;
pile[v[22]]=0; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(0,(-9543),V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=(-9746); 
(*f[37])( );     /*SRA0(V15,(-9746),V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=65; 
(*f[249])( );     /*SPC1(V16,65,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=(-9749); 
(*f[37])( );     /*SRA0(V17,(-9749),V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=(-9754); 
(*f[37])( );     /*SRA0(V18,(-9754),V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V19,44,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=(-2943); 
(*f[37])( );     /*SRA0(V20,(-2943),V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=67; 
(*f[249])( );     /*SPC1(V21,67,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V22,40,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=(-9784); pile[WZ1]=V23; 
(*f[64])( );     /*SRA2((-9784),V23,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=(-9787); 
(*f[37])( );     /*SRA0(V24,(-9787),V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=(-9789); 
(*f[37])( );     /*SRA0(V25,(-9789),V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=(-9794); 
(*f[37])( );     /*SRA0(V26,(-9794),V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V27,41,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=(-9360); 
(*f[37])( );     /*SRA0(V28,(-9360),V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=68; 
(*f[249])( );     /*SPC1(V29,68,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V30,40,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=(-9798); pile[WZ1]=V31; 
(*f[64])( );     /*SRA2((-9798),V31,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=(-9800); 
(*f[37])( );     /*SRA0(V32,(-9800),V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V33,41,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V34,46,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; 
(*f[40])( );     /*SLG0(V35)*/
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
V5=bh[v[1]][0];
if(V5!=67&&V5!=68) goto l4;
x[jvj+3]=incon;
if((V5==67)) goto l2;
x[jvj+3]=287 ;z[jvj+3]=287;
l3:pile[v[22]]=jvj+1; pile[WZ1]=948; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+1,948,jvj+3)*/
pile[WZ1]=860; pile[WZ2]=954; 
(*f[35])( );     /*CHGC1(jvj+1,860,954)*/
pile[WZ1]=947; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+1,947,0)*/
l4:V7=bh[v[1]][0];
if((V7==46)) goto l15;
if((V7==70)) goto l16;
if((V7!=80)) goto l10;
pile[v[22]]=I; pile[WZ1]=N; 
(*f[657])( );     /*DEFEXECB0(I,N)*/
l14:pile[v[22]]=jvj+4; pile[WZ1]=158; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+4,158,67)*/
l10:pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(158,jvj+4,jvj+6)*/
if((x[jvj+6]!=68)) goto l11;
pile[v[22]]=0; pile[WZ1]=(-9720); 
(*f[37])( );     /*SRA0(0,(-9720),V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=(-8196); 
(*f[37])( );     /*SRA0(V36,(-8196),V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=(-9722); 
(*f[37])( );     /*SRA0(V37,(-9722),V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=(-9724); 
(*f[37])( );     /*SRA0(V38,(-9724),V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=(-9726); 
(*f[37])( );     /*SRA0(V39,(-9726),V40)*/
V40=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=60; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(41,60,V40,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=(-9729); 
(*f[37])( );     /*SRA0(V41,(-9729),V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=(-2943); 
(*f[37])( );     /*SRA0(V42,(-2943),V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=84; 
(*f[249])( );     /*SPC1(V43,84,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=(-9730); 
(*f[37])( );     /*SRA0(V44,(-9730),V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=(-9733); 
(*f[37])( );     /*SRA0(V45,(-9733),V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=(-9546); 
(*f[37])( );     /*SRA0(V46,(-9546),V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=(-9735); 
(*f[37])( );     /*SRA0(V47,(-9735),V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=(-9699); 
(*f[37])( );     /*SRA0(V48,(-9699),V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V49; pile[WZ1]=(-9729); 
(*f[37])( );     /*SRA0(V49,(-9729),V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V50,46,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
V10=bh[v[1]][0];
if((V10!=84)) goto l17;
V11=bh[v[1]][1];
if((V11<48)) goto l13;
if((V11>57)) goto l13;
V8=135;
l5:if((V8==135)) goto l6;
l7:if((V11!=32)) goto l8;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,KK)*/
KK=pile[WZ1]; 
pile[v[22]]=jvj+1; pile[WZ1]=936; pile[WZ2]=KK; 
(*f[43])( );     /*CHGC2(jvj+1,936,KK)*/
l8:pile[v[22]]=936; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(936,jvj+1,V13)*/
V13=pile[WZ2]; 
if((V13>0)) goto l17;
l9:pile[v[22]]=0; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(0,(-4390),V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V52; pile[WZ1]=(-9722); 
(*f[37])( );     /*SRA0(V52,(-9722),V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
pile[v[22]]=jvj+4; pile[WZ1]=158; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+4,158,67)*/
pile[v[22]]=N; pile[WZ1]=D; pile[WZ2]=I; 
(*f[1055])( );     /*DEFEXECD0(N,D,I)*/
l17:if((V10==46)) goto l19;
if((V10==70)) goto l20;
if((V10!=80)) goto l11;
pile[v[22]]=I; pile[WZ1]=N; 
(*f[657])( );     /*DEFEXECB0(I,N)*/
l18:pile[v[22]]=jvj+4; pile[WZ1]=158; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+4,158,67)*/
l11:pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(158,jvj+4,jvj+7)*/
if((x[jvj+7]!=68)) goto l12;
pile[v[22]]=0; pile[WZ1]=(-2943); 
(*f[37])( );     /*SRA0(0,(-2943),V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=69; 
(*f[249])( );     /*SPC1(V71,69,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V72,(-9543),V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; pile[WZ1]=(-9739); 
(*f[37])( );     /*SRA0(V73,(-9739),V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V74; pile[WZ1]=(-9546); 
(*f[37])( );     /*SRA0(V74,(-9546),V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V75; pile[WZ1]=(-9742); 
(*f[37])( );     /*SRA0(V75,(-9742),V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V76; pile[WZ1]=(-9360); 
(*f[37])( );     /*SRA0(V76,(-9360),V77)*/
V77=pile[WZ2]; 
pile[v[22]]=V77; pile[WZ1]=70; 
(*f[249])( );     /*SPC1(V77,70,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V78,(-9543),V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V79; pile[WZ1]=(-9773); 
(*f[37])( );     /*SRA0(V79,(-9773),V80)*/
V80=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=(-9779); 
(*f[37])( );     /*SRA0(V80,(-9779),V81)*/
V81=pile[WZ2]; 
pile[v[22]]=V81; pile[WZ1]=(-9687); 
(*f[37])( );     /*SRA0(V81,(-9687),V82)*/
V82=pile[WZ2]; 
pile[v[22]]=V82; pile[WZ1]=(-9360); 
(*f[37])( );     /*SRA0(V82,(-9360),V83)*/
V83=pile[WZ2]; 
pile[v[22]]=V83; 
(*f[37])( );     /*SRA0(V83,(-9360),V84)*/
V84=pile[WZ2]; 
pile[v[22]]=V84; pile[WZ1]=80; 
(*f[249])( );     /*SPC1(V84,80,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V85,(-9543),V86)*/
V86=pile[WZ2]; 
pile[v[22]]=V86; pile[WZ1]=(-9773); 
(*f[37])( );     /*SRA0(V86,(-9773),V87)*/
V87=pile[WZ2]; 
pile[v[22]]=V87; pile[WZ1]=(-9779); 
(*f[37])( );     /*SRA0(V87,(-9779),V88)*/
V88=pile[WZ2]; 
pile[v[22]]=V88; pile[WZ1]=(-9549); 
(*f[37])( );     /*SRA0(V88,(-9549),V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=(-9360); 
(*f[37])( );     /*SRA0(V89,(-9360),V90)*/
V90=pile[WZ2]; 
pile[v[22]]=V90; pile[WZ1]=46; 
(*f[249])( );     /*SPC1(V90,46,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=V91; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V91,(-9543),V92)*/
V92=pile[WZ2]; 
pile[v[22]]=V92; pile[WZ1]=(-9758); 
(*f[37])( );     /*SRA0(V92,(-9758),V93)*/
V93=pile[WZ2]; 
pile[v[22]]=V93; pile[WZ1]=(-9546); 
(*f[37])( );     /*SRA0(V93,(-9546),V94)*/
V94=pile[WZ2]; 
pile[v[22]]=V94; pile[WZ1]=(-9761); 
(*f[37])( );     /*SRA0(V94,(-9761),V95)*/
V95=pile[WZ2]; 
pile[v[22]]=V95; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V95,46,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=V96; 
(*f[40])( );     /*SLG0(V96)*/
pile[v[22]]=33; 
(*f[346])( );     /*LK1(33)*/
pile[v[22]]=68; pile[WZ1]=158; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(68,158,jvj+19)*/
V67=bh[v[1]][0];
V68=V67;
if((V68==46)) goto l24;
if((V68==70)) goto l25;
if((V68!=80)) goto l22;
pile[v[22]]=I; pile[WZ1]=N; 
(*f[657])( );     /*DEFEXECB0(I,N)*/
l21:pile[v[22]]=jvj+19; pile[WZ1]=158; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+19,158,67)*/
l22:if((V68==69)) goto l23;
pile[v[22]]=158; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(158,jvj+19,jvj+20)*/
if((x[jvj+20]!=68)) goto l12;
pile[v[22]]=I; pile[WZ1]=N; 
(*f[657])( );     /*DEFEXECB0(I,N)*/
l12:v[0]=jvj; v[22]-=3; return;
l2:x[jvj+3]=68 ;z[jvj+3]=68;
goto l3;
l6:pile[v[22]]=1; 
(*f[135])( );     /*LND3(1,K)*/
K=pile[WZ1]; 
pile[v[22]]=jvj+1; pile[WZ1]=936; pile[WZ2]=K; 
(*f[43])( );     /*CHGC2(jvj+1,936,K)*/
goto l7;
l13:V8=134;
goto l5;
l15:exit(0);
goto l10;
l16:pile[v[22]]=I; 
(*f[248])( );     /*DEFEXECA0(I)*/
goto l14;
l19:exit(0);
goto l11;
l20:pile[v[22]]=I; 
(*f[248])( );     /*DEFEXECA0(I)*/
goto l18;
l23:V69=I+1;
vv[22]=(-1);
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=jvj+1; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(158,287,218,jvj+1,jvj+21)*/
pile[v[22]]=jvj+21; 
(*f[605])( );     /*MONITEUR0(jvj+21)*/
pile[v[22]]=V69; pile[WZ1]=N; 
(*f[657])( );     /*DEFEXECB0(V69,N)*/
goto l12;
l24:exit(0);
goto l22;
l25:pile[v[22]]=I; 
(*f[248])( );     /*DEFEXECA0(I)*/
goto l21;
}
