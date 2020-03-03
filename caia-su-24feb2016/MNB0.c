#include "dx.h"
void MNB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V21=0,V20=0,V14=0,V16=0,V13=0,V28=0,L=0,V8=0,V5=0,KK=0,V1=0,V3=0,V4=0,V2=0,V6=0,V48=0,V41=0,V44=0,V45=0,V47=0,V46=0,V43=0,G=0,V39=0,V40=0,V33=0,V34=0,V36=0,V37=0,V35=0,J=0,V66=0,V68=0,V69=0,V54=0,V55=0,V56=0,V58=0,V60=0,V59=0,V57=0,V77=0,V79=0,V71=0,V72=0,V73=0,V75=0,V76=0,V74=0,K=0,V51=0,V52=0,V50=0,V49=0;
int TL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=10438;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1388&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
KK=incon;
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(302,TL,jvj+13)*/
l9:if((x[jvj+13]>0)) goto l10;
pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,TL,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=583; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(583,TL,jvj+15)*/
V5=0;
KK=v[27];
v[2]=v[1];
V1=V5;
v[1]=4;
pile[v[22]]=135; pile[WZ1]=V1; 
(*f[98])( );     /*SRA3(135,V1,jvj+15,V3)*/
V3=pile[WZ3]; 
pile[v[22]]=V8; pile[WZ1]=V3; 
(*f[99])( );     /*SPM0(V8,V3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=(-787); pile[WZ1]=V4; 
(*f[64])( );     /*SRA2((-787),V4,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V2,0,V6)*/
V6=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V6; pile[WZ1]=1153; pile[WZ2]=3; 
(*f[67])( );     /*SPA0(V6,1153,3)*/
x[jvj+16]=d[106];z[jvj+16]=0;
pile[v[22]]=109; pile[WZ1]=jvj+15; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(109,jvj+15,130,V8,jvj+17)*/
pile[v[22]]=890; pile[WZ1]=240; pile[WZ2]=jvj+17; pile[WZ3]=jvj+16; 
(*f[663])( );     /*PLUG0(890,240,jvj+17,jvj+16)*/
l1:V12=(-999999);
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(302,TL,jvj+6)*/
l4:if((x[jvj+6]>0)) goto l5;
if((V12==(-999999))) goto l11;
V28=V12-1;
L=0;
l7:if((L<=V28)) goto l8;
pile[v[22]]=TL; pile[WZ1]=870; pile[WZ2]=V12; 
(*f[43])( );     /*CHGC2(TL,870,V12)*/
l11:pile[v[22]]=241; pile[WZ1]=171; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(241,171,V48)*/
V48=pile[WZ2]; 
V41=0;
pile[v[22]]=V48; pile[WZ1]=V41; 
(*f[64])( );     /*SRA2(V48,V41,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V44,34,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=(-2614); pile[WZ1]=V45; 
(*f[64])( );     /*SRA2((-2614),V45,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=(-2615); pile[WZ1]=V47; 
(*f[64])( );     /*SRA2((-2615),V47,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V46,34,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; 
(*f[656])( );     /*SPLN2(V43,G)*/
G=pile[WZ1]; 
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(583,TL,jvj+18)*/
if((x[jvj+18]==10061)) goto l12;
pile[v[22]]=159; pile[WZ1]=316; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(159,316,jvj+19)*/
pile[v[22]]=241; pile[WZ1]=690; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,690,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,TL,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=276; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,276,V69)*/
V69=pile[WZ2]; 
l14:if((x[jvj+19]<=0)) goto l16;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=109; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(109,jvj+20,jvj+21)*/
if((x[jvj+18]!=x[jvj+21])) goto l15;
pile[v[22]]=V66; pile[WZ1]=G; 
(*f[64])( );     /*SRA2(V66,G,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V54; pile[WZ2]=jvj+18; 
(*f[98])( );     /*SRA3(135,V54,jvj+18,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V68; pile[WZ1]=V55; 
(*f[99])( );     /*SPM0(V68,V55,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V56,40,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=V69; pile[WZ1]=V58; 
(*f[64])( );     /*SRA2(V69,V58,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=(-6386); pile[WZ1]=V60; 
(*f[64])( );     /*SRA2((-6386),V60,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V59,41,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; 
(*f[656])( );     /*SPLN2(V57,J)*/
J=pile[WZ1]; 
l13:
(*f[287])( );     /*COPYRIGHT0()*/
K=J;
pile[v[22]]=K; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(K,123,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; 
(*f[1607])( );     /*SPK0(V51,V52)*/
V52=pile[WZ1]; 
pile[v[22]]=V52; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V52,125,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; 
(*f[656])( );     /*SPLN2(V50,V49)*/
V49=pile[WZ1]; 
l17:if(KK!=incon) goto l18;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+23]=t[x[jvj+23]];
l2:if((x[jvj+23]<=0)) goto l6;
x[jvj+5]=s[x[jvj+23]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+23];
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+5,V20)*/
V20=pile[WZ2]; 
if((V20!=V21)) goto l3;
pile[v[22]]=222; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(222,jvj+5,jvj+11)*/
for(i=x[jvj+11],V14=0;i>0;i=t[i],V14++)  ;
pile[v[22]]=223; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(223,jvj+5,jvj+12)*/
for(i=x[jvj+12],V16=0;i>0;i=t[i],V16++)  ;
V13=V14+V16;
if(V13>V12) V12=V13;
l6:x[jvj+6]=t[x[jvj+6]];
goto l4;
l5:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+7,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+2,jvj+8)*/
if((x[jvj+8]!=39)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+2,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+9,jvj+10)*/
x[jvj+3]=x[jvj+10] ;z[jvj+3]=z[jvj+10];
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+2,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(365,jvj+3,jvj+4)*/
x[jvj+23]=x[jvj+4] ;z[jvj+23]=z[jvj+4];
goto l2;
l8:gardevaleur[L]=250;
L++;
goto l7;
l10:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=191; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+14,191,67)*/
x[jvj+13]=t[x[jvj+13]];
goto l9;
l12:pile[v[22]]=241; pile[WZ1]=276; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,276,V39)*/
V39=pile[WZ2]; 
pile[WZ1]=690; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,690,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=G; 
(*f[64])( );     /*SRA2(V39,G,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=(-2624); pile[WZ1]=V33; 
(*f[64])( );     /*SRA2((-2624),V33,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V34,40,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=V36; 
(*f[64])( );     /*SRA2(V40,V36,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V37,41,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; 
(*f[656])( );     /*SPLN2(V35,J)*/
J=pile[WZ1]; 
goto l13;
l15:x[jvj+19]=t[x[jvj+19]];
goto l14;
l16:pile[v[22]]=241; pile[WZ1]=690; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(241,690,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,TL,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=583; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(583,TL,jvj+22)*/
pile[v[22]]=V77; pile[WZ1]=G; 
(*f[64])( );     /*SRA2(V77,G,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V71; pile[WZ2]=jvj+22; 
(*f[98])( );     /*SRA3(135,V71,jvj+22,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=V79; pile[WZ1]=V72; 
(*f[99])( );     /*SPM0(V79,V72,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V73,40,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V77; pile[WZ1]=V75; 
(*f[64])( );     /*SRA2(V77,V75,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V76; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V76,41,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V74; 
(*f[656])( );     /*SPLN2(V74,J)*/
J=pile[WZ1]; 
goto l13;
l18:pile[v[22]]=3; 
(*f[63])( );     /*SPZ1(3)*/
v[27]=KK;
goto l19;
}
