#include "dx.h"
void DELIER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V66=0,V68=0,V64=0,V65=0,V67=0,V69=0,V6=0,V3=0,V4=0,V12=0,V21=0,V44=0,V49=0,V84=0,V87=0,V75=0,V76=0,V77=0,V78=0,V79=0,V80=0,V82=0,V83=0,V85=0,V86=0,V43=0,V62=0,V52=0,V70=0,V72=0,V24=0,V23=0,V56=0,V91=0,V93=0,V88=0,V89=0,V90=0,V92=0;
int A,B,C,HIST;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=10124;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1569&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; C=pile[v[22]+2]; HIST=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=x[jvj+3]=x[jvj+7]=x[jvj+2]=incon;
pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=C; pile[WZ3]=jvj+2; pile[WZ4]=jvj+3; 
(*f[1766])( );if(v[102]) goto l11;     /*METORDRE0(A,B,C,jvj+2,jvj+3)*/
pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(A,jvj+2,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l1;
l11:x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=220; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(220,jvj+11,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=1572; pile[WZ2]=V12; 
(*f[43])( );     /*CHGC2(jvj+11,1572,V12)*/
l19:x[jvj+22]=vo[14];z[jvj+22]=vz[14];
pile[v[22]]=1065; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(1065,jvj+22,V52)*/
V52=pile[WZ2]; 
if((V52!=v[204])) goto l20;
v[205]=1;
l20:if(x[jvj+5]!=incon) goto l21;
l26:if(x[jvj+7]!=incon) goto l27;
if(x[jvj+5]!=incon) goto l32;
l33:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l1:x[jvj+7]=x[A] ;z[jvj+7]=z[A];
x[jvj+5]=x[jvj+2] ;z[jvj+5]=z[jvj+2];
z[jvj+5]=(-1);
z[jvj+3]=(-1);
if((x[jvj+7]!=365)) goto l7;
pile[v[22]]=489; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(489,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l2;
l7:if((v[111]!=0)) goto l8;
pile[v[22]]=904; pile[WZ1]=HIST; pile[WZ2]=jvj+5; pile[WZ3]=jvj+3; 
(*f[1767])( );     /*ARCHIVE3(904,HIST,jvj+5,jvj+3)*/
l8:V3=x[jvj+3];
V4=x[jvj+5];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+5; pile[WZ2]=V3; 
(*f[134])( );     /*OTA0(jvj+7,jvj+5,V3)*/
pile[WZ1]=jvj+3; pile[WZ2]=V4; 
(*f[134])( );     /*OTA0(jvj+7,jvj+3,V4)*/
V6=g[329];
if((V6<=0)) goto l9;
V7=vg[329];
if((V7!=0)) goto l3;
if((V6<3)) goto l5;
l3:pile[v[22]]=329; pile[WZ1]=10124; pile[WZ2]=0; pile[WZ3]=(-597); pile[WZ4]=jvj+7; pile[WZ5]=(-4466); pile[v[22]+6]=jvj+5; pile[v[22]+7]=(-15); pile[v[22]+8]=jvj+3; pile[v[22]+9]=(-6231); pile[v[22]+10]=HIST; pile[v[22]+11]=jvj+8; 
(*f[1341])( );     /*INTERP17(329,10124,0,(-597),jvj+7,(-4466),jvj+5,(-15),jvj+3,(-6231),HIST,jvj+8)*/
if((x[jvj+8]==135)) goto l4;
l9:if((v[247]<=0)) goto l10;
pile[v[22]]=218; pile[WZ1]=HIST; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(218,HIST,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=904; pile[WZ2]=jvj+7; 
(*f[1769])( );     /*AJMEMA1(jvj+9,904,jvj+7)*/
l10:if((x[jvj+7]!=365)) goto l11;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=jvj+10; pile[WZ1]=1065; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+10,1065,1)*/
goto l11;
l2:pile[v[22]]=HIST; 
(*f[1559])( );     /*CONTRADICTION0(HIST)*/
goto l7;
l4:if((V6<4)) goto l5;
goto l9;
l5:V66=x[jvj+5];
V68=x[jvj+3];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+7; 
(*f[42])( );     /*SRA1(135,0,jvj+7,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V66; pile[WZ2]=V64; 
(*f[39])( );     /*SDX0(20,V66,V64,V65)*/
V65=pile[WZ3]; 
pile[WZ1]=V68; pile[WZ2]=V65; 
(*f[39])( );     /*SDX0(20,V68,V65,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l6;     /*SORHIST1(V67,HIST,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; 
(*f[40])( );     /*SLG0(V69)*/
l6:if((V6!=2)) goto l9;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l9;
l13:if((V43<4)) goto l14;
l25:pile[v[22]]=jvj+22; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+22,893,12)*/
l24:x[jvj+28]=t[x[jvj+28]];
l23:if((x[jvj+28]<=0)) goto l26;
x[jvj+20]=s[x[jvj+28]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+28];
pile[v[22]]=287; pile[WZ1]=jvj+20; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(287,jvj+20,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[200])( );if(v[102]) goto l24;     /*NDD0(jvj+29,jvj+30)*/
if((x[jvj+30]!=x[jvj+5])) goto l24;
pile[v[22]]=80; pile[WZ1]=jvj+20; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(80,jvj+20,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+31,jvj+32)*/
if((x[jvj+33]=w[x[jvj+32]][3])==incon) goto l24;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+33; pile[WZ3]=jvj+34; 
(*f[45])( );if(v[102]) goto l24;     /*FNDZ0(jvj+31,jvj+33,V70,jvj+34)*/
V70=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ3]=jvj+35; 
(*f[45])( );if(v[102]) goto l24;     /*FNDZ0(jvj+3,jvj+33,V72,jvj+35)*/
V72=pile[WZ2]; 
if((V70!=V72)) goto l24;
V43=g[506];
if((V43<=0)) goto l25;
V44=vg[506];
if((V44!=0)) goto l12;
if((V43<3)) goto l14;
l12:pile[v[22]]=506; pile[WZ1]=10124; pile[WZ2]=0; pile[WZ3]=(-606); pile[WZ4]=jvj+20; pile[WZ5]=jvj+21; 
(*f[232])( );     /*INTERP3(506,10124,0,(-606),jvj+20,jvj+21)*/
if((x[jvj+21]==135)) goto l13;
goto l25;
l14:pile[v[22]]=642; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+22,V49)*/
V49=pile[WZ2]; 
V84=x[jvj+29];
V87=x[jvj+31];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V75; pile[WZ2]=10124; 
(*f[98])( );     /*SRA3(135,V75,10124,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V76; 
(*f[39])( );     /*SDX0(41,2,V76,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V77,125,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V78; pile[WZ2]=131; 
(*f[42])( );     /*SRA1(135,V78,131,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V49; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(41,V49,V79,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V80; pile[WZ2]=365; 
(*f[42])( );     /*SRA1(135,V80,365,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V84; pile[WZ2]=V82; 
(*f[39])( );     /*SDX0(20,V84,V82,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=V83; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V83,61,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V87; pile[WZ2]=V85; 
(*f[39])( );     /*SDX0(20,V87,V85,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=V86; 
(*f[40])( );     /*SLG0(V86)*/
l15:if((V43!=2)) goto l25;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l25;
l17:x[jvj+23]=s[x[jvj+36]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+36];
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+23,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=jvj+24; pile[WZ1]=V62; 
(*f[207])( );     /*PLUE2(jvj+24,V62)*/
l18:x[jvj+36]=t[x[jvj+36]];
l16:if((x[jvj+36]>0)) goto l17;
V91=x[jvj+5];
V93=x[jvj+24];
pile[v[22]]=0; pile[WZ1]=5; 
(*f[178])( );     /*SPLO0(0,5,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=904; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(20,904,V88,V89)*/
V89=pile[WZ3]; 
pile[WZ1]=V91; pile[WZ2]=V89; 
(*f[39])( );     /*SDX0(20,V91,V89,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V93; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(23,V93,V90,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=V92; 
(*f[40])( );     /*SLG0(V92)*/
goto l33;
l21:if(x[jvj+3]!=incon) goto l22;
goto l26;
l22:x[jvj+25]=vo[13];z[jvj+25]=vz[13];
pile[v[22]]=963; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(963,jvj+25,jvj+26)*/
if((x[jvj+26]!=68)) goto l26;
x[jvj+27]=vo[12];z[jvj+27]=vz[12];
pile[v[22]]=1049; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(1049,jvj+27,jvj+28)*/
if((x[jvj+28]!=0)) goto l23;
goto l26;
l27:if(x[jvj+5]!=incon) goto l28;
goto l33;
l28:if(x[jvj+2]!=incon) goto l29;
l32:if((v[133]<=0)) goto l33;
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+36)*/
for(i=x[jvj+36],V56=0;i>0;i=t[i],V56++)  ;
if((V56<=1)) goto l33;
if((V56>3)) goto l33;
x[jvj+24]=0 ;z[jvj+24]=0;
goto l16;
l29:if(x[jvj+3]!=incon) goto l30;
goto l32;
l30:if((x[jvj+7]!=365)) goto l32;
V24=vv[178];
V23=V24+1;
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=1418; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(1418,jvj+12,jvj+13)*/
if((x[jvj+13]!=68)) goto l31;
pile[v[22]]=jvj+2; 
(*f[1595])( );     /*CRETUND0(jvj+2)*/
l31:pile[v[22]]=HIST; 
(*f[1323])( );     /*ESTCEFINI0(HIST)*/
pile[v[22]]=699; pile[WZ1]=jvj+5; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(699,jvj+5,HIST)*/
pile[v[22]]=701; pile[WZ1]=jvj+3; 
(*f[1365])( );     /*AJOUTER0(701,jvj+3,HIST)*/
vv[178]=V23;
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(498,jvj+5,jvj+14)*/
pile[v[22]]=844; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(844,jvj+14,jvj+15)*/
if((x[jvj+15]!=68)) goto l32;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(642,jvj+16,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=jvj+17; 
(*f[1576])( );if(v[102]) goto l32;     /*SYMET0(jvj+3,jvj+17)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+18; 
(*f[1576])( );if(v[102]) goto l32;     /*SYMET0(jvj+5,jvj+18)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+37; 
(*f[46])( );     /*TRI0(V21,858,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,v[13],642,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=1569; pile[WZ2]=246; pile[WZ3]=jvj+39; 
(*f[189])( );     /*TRI4(jvj+38,1569,246,jvj+39)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10124; pile[WZ4]=jvj+39; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(158,1,218,10124,jvj+39,jvj+19)*/
pile[v[22]]=365; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; pile[WZ3]=jvj+19; 
(*f[1569])( );     /*DELIER0(365,jvj+17,jvj+18,jvj+19)*/
goto l32;
}
