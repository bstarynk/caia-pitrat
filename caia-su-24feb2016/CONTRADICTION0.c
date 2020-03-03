#include "dx.h"
void CONTRADICTION0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S=0,V6=0,V87=0,V88=0,V5=0,V36=0,V91=0,V10=0,V93=0,V12=0,V95=0,V14=0,V48=0,V51=0,V53=0,V96=0,V98=0,V99=0,V101=0,V103=0,V35=0,V25=0,V28=0,V27=0,V68=0,V112=0,V110=0,V111=0,V61=0,V63=0,V107=0,V104=0,V105=0,V106=0,V108=0,V19=0,V76=0,V79=0,V81=0,V83=0;
int HIST;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=10093;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1559&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
S=incon;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=893; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(893,jvj+2,jvj+3)*/
if((x[jvj+3]!=580)) goto l1;
S=12;
l2:if((v[178]<=0)) goto l22;
pile[v[22]]=580; pile[WZ1]=HIST; 
(*f[1754])( );     /*VERIFTOTALE1(580,HIST)*/
l22:if((v[247]<=0)) goto l23;
pile[v[22]]=218; pile[WZ1]=HIST; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(218,HIST,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=580; 
(*f[1734])( );     /*AJMEMA0(jvj+21,580)*/
l23:x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=220; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(220,jvj+13,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=1572; pile[WZ2]=V61; 
(*f[43])( );     /*CHGC2(jvj+13,1572,V61)*/
l24:if((v[226]<=0)) goto l25;
pile[v[22]]=929; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(929,jvj+13,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=HIST; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(218,HIST,jvj+22)*/
V107=x[jvj+22];
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V104; pile[WZ2]=580; 
(*f[42])( );     /*SRA1(135,V104,580,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V107; pile[WZ2]=V105; 
(*f[39])( );     /*SDX0(20,V107,V105,V106)*/
V106=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V63; pile[WZ2]=V106; 
(*f[39])( );     /*SDX0(41,V63,V106,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=V108; 
(*f[40])( );     /*SLG0(V108)*/
pile[v[22]]=159; pile[WZ1]=HIST; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(159,HIST,jvj+18)*/
l20:if((x[jvj+18]<=0)) goto l25;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=110; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(110,jvj+19,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=101; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+19,jvj+20)*/
V112=x[jvj+20];
pile[v[22]]=0; pile[WZ1]=V68; 
(*f[37])( );     /*SRA0(0,V68,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V112; pile[WZ2]=V110; 
(*f[39])( );     /*SDX0(20,V112,V110,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=V111; 
(*f[40])( );     /*SLG0(V111)*/
l21:x[jvj+18]=t[x[jvj+18]];
goto l20;
l1:if((v[111]!=0)) goto l2;
pile[v[22]]=580; pile[WZ1]=HIST; 
(*f[1567])( );     /*ARCHIVE2(580,HIST)*/
goto l2;
l4:if((V5<4)) goto l5;
l28:x[jvj+27]=vo[14];z[jvj+27]=vz[14];
pile[v[22]]=893; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(893,jvj+27,jvj+28)*/
if((x[jvj+28]==12)) goto l30;
l27:pile[v[22]]=860; pile[WZ1]=jvj+27; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(860,jvj+27,jvj+31)*/
if((x[jvj+31]!=682)) goto l29;
x[jvj+29]=vo[16];z[jvj+29]=vz[16];
pile[v[22]]=jvj+29; pile[WZ1]=731; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(jvj+29,731,(-1))*/
pile[v[22]]=731; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(731,jvj+29,V76)*/
V76=pile[WZ2]; 
if((V76!=0)) goto l29;
x[jvj+30]=vo[12];z[jvj+30]=vz[12];
pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(731,jvj+30,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=0; 
(*f[375])( );     /*RESTOR0(0)*/
pile[v[22]]=jvj+29; pile[WZ1]=731; pile[WZ2]=V79; 
(*f[43])( );     /*CHGC2(jvj+29,731,V79)*/
l29:pile[v[22]]=jvj+27; pile[WZ1]=893; pile[WZ2]=580; 
(*f[35])( );     /*CHGC1(jvj+27,893,580)*/
pile[WZ1]=876; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+27,876,1)*/
pile[v[22]]=876; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(876,jvj+27,V81)*/
V81=pile[WZ2]; 
x[jvj+32]=vo[12];z[jvj+32]=vz[12];
pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(876,jvj+32,V83)*/
V83=pile[WZ2]; 
if((V81<V83)) goto l30;
pile[WZ1]=158; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(876,158,jvj+33)*/
pile[v[22]]=jvj+33; 
(*f[605])( );     /*MONITEUR0(jvj+33)*/
l30:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l5:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=580; 
(*f[42])( );     /*SRA1(135,0,580,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=V87; pile[WZ1]=HIST; 
(*f[828])( );if(v[102]) goto l6;     /*SORHIST0(V87,HIST,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=V88; 
(*f[40])( );     /*SLG0(V88)*/
l6:if((V5!=2)) goto l28;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l28;
l11:V10=0;
l12:V12=incon;
pile[v[22]]=80; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(80,jvj+8,jvj+11)*/
V93=x[jvj+11];
pile[v[22]]=20; pile[WZ1]=V93; pile[WZ2]=V10; 
(*f[39])( );     /*SDX0(20,V93,V10,V12)*/
V12=pile[WZ3]; 
l14:V14=incon;
pile[v[22]]=576; pile[WZ1]=jvj+8; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(576,jvj+8,jvj+12)*/
V95=x[jvj+12];
pile[v[22]]=20; pile[WZ1]=V95; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V95,V12,V14)*/
V14=pile[WZ3]; 
l18:V53=V51-V48;
pile[v[22]]=41; pile[WZ1]=V53; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(41,V53,V14,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=V96; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V96,40,V98)*/
V98=pile[WZ2]; 
pile[v[22]]=V98; pile[WZ1]=V51; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V98,V51,41,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V48; pile[WZ2]=V99; 
(*f[39])( );     /*SDX0(41,V48,V99,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=V101; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V101,41,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=V103; 
(*f[40])( );     /*SLG0(V103)*/
l19:if((V35!=2)) goto l9;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l9:if((v[21]!=2)) goto l31;
if((v[79]!=0)) goto l31;
pile[v[22]]=jvj+8; 
(*f[1275])( );     /*SORCHEMIN0(jvj+8)*/
l31:pile[v[22]]=580; pile[WZ1]=158; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(580,158,jvj+17)*/
pile[v[22]]=jvj+17; 
(*f[605])( );     /*MONITEUR0(jvj+17)*/
l7:x[jvj+5]=vo[12];z[jvj+5]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(860,jvj+5,jvj+6)*/
if(x[jvj+6]!=336&&x[jvj+6]!=1082) goto l8;
pile[v[22]]=158; pile[WZ1]=1084; pile[WZ2]=218; pile[WZ3]=876; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(158,1084,218,876,jvj+7)*/
pile[v[22]]=jvj+7; 
(*f[605])( );     /*MONITEUR0(jvj+7)*/
l8:V5=g[337];
if((V5<=0)) goto l28;
V6=vg[337];
if((V6!=0)) goto l3;
if((V5<3)) goto l5;
l3:pile[v[22]]=337; pile[WZ1]=10093; pile[WZ2]=0; pile[WZ3]=(-6231); pile[WZ4]=HIST; pile[WZ5]=jvj+4; 
(*f[232])( );     /*INTERP3(337,10093,0,(-6231),HIST,jvj+4)*/
if((x[jvj+4]==135)) goto l4;
goto l28;
l13:V12=V10;
goto l14;
l15:V14=V12;
goto l18;
l16:if((V35<4)) goto l17;
goto l9;
l17:pile[v[22]]=987; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(987,jvj+8,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=927; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(927,jvj+13,V51)*/
V51=pile[WZ2]; 
V10=incon;
pile[v[22]]=287; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(287,jvj+8,jvj+10)*/
V91=x[jvj+10];
pile[v[22]]=20; pile[WZ1]=V91; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V91,0,V10)*/
V10=pile[WZ3]; 
goto l12;
l25:if(S==incon) goto l26;
goto l30;
l26:pile[v[22]]=1092; pile[WZ1]=jvj+13; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1092,jvj+13,jvj+23)*/
pile[WZ1]=1099; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1092,1099,jvj+24)*/
if((x[jvj+23]!=x[jvj+24])) goto l7;
pile[v[22]]=865; pile[WZ1]=jvj+13; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(865,jvj+13,jvj+8)*/
pile[v[22]]=498; pile[WZ1]=jvj+8; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(498,jvj+8,jvj+25)*/
pile[v[22]]=226; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(226,jvj+25,jvj+26)*/
for(i=x[jvj+26],V19=0;i>0;i=t[i],V19++)  ;
if((V19<=1)) goto l7;
pile[v[22]]=jvj+13; pile[WZ1]=192; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+13,192,1)*/
x[jvj+14]=vo[12];z[jvj+14]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(860,jvj+14,jvj+15)*/
if((x[jvj+15]!=530)) goto l7;
pile[v[22]]=978; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(978,jvj+14,jvj+16)*/
if((x[jvj+16]!=68)) goto l7;
pile[v[22]]=192; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(192,jvj+13,V25)*/
V25=pile[WZ2]; 
pile[WZ1]=1099; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(192,1099,V28)*/
V28=pile[WZ2]; 
V27=2*V28;
if((V25>V27)) goto l7;
V35=g[393];
if((V35<=0)) goto l9;
V36=vg[393];
if((V36!=0)) goto l10;
if((V35<3)) goto l17;
l10:pile[v[22]]=393; pile[WZ1]=10093; pile[WZ2]=0; pile[WZ3]=jvj+9; 
(*f[291])( );     /*INTERP4(393,10093,0,jvj+9)*/
if((x[jvj+9]==135)) goto l16;
goto l9;
}
