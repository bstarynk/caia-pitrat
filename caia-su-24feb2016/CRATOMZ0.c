#include "dx.h"
void CRATOMZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,VV=0,V28=0,W=0,V89=0,V33=0,V36=0,V39=0,WW=0,V13=0,V12=0,BB=0,V56=0,V14=0,V63=0,V65=0,V68=0,V70=0,V73=0,V57=0,V58=0,V59=0,V60=0,V61=0,V62=0,V64=0,V66=0,V67=0,V69=0,V71=0,V72=0,V35=0,V45=0,V48=0,V4=0,V3=0,AA=0,V77=0,V5=0,V83=0,V85=0,V88=0,V78=0,V79=0,V80=0,V81=0,V82=0,V84=0,V86=0,V87=0,V44=0;
int EA;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=11712;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==942&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
EA=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+37]=x[EA] ;z[jvj+37]=z[EA];
l32:if((x[jvj+37]>0)) goto l33;
l35:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+36]=250 ;z[jvj+36]=250;
l2:x[jvj+4]=incon;
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(110,jvj+2,V21)*/
V21=pile[WZ2]; 
VV=V21;
pile[v[22]]=96; pile[WZ1]=VV; pile[WZ2]=jvj+4; 
(*f[328])( );     /*TRI12(96,VV,jvj+4)*/
l31:x[jvj+29]=0 ;z[jvj+29]=0;
x[jvj+23]=x[jvj+36] ;z[jvj+23]=z[jvj+36];
pile[v[22]]=jvj+4; pile[WZ1]=273; pile[WZ2]=jvj+28; 
(*f[300])( );     /*TRI10(jvj+4,273,jvj+28)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; pile[WZ3]=jvj+23; pile[WZ4]=jvj+30; 
(*f[1244])( );     /*CALK0(jvj+14,jvj+28,jvj+29,jvj+23,jvj+30)*/
V44=g[658];
if((V44<=0)) goto l17;
V45=vg[658];
if((V45!=0)) goto l23;
if((V44<3)) goto l28;
l23:pile[v[22]]=658; pile[WZ1]=11712; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=jvj+14; pile[WZ5]=(-606); pile[v[22]+6]=jvj+23; pile[v[22]+7]=(-596); pile[v[22]+8]=jvj+2; pile[v[22]+9]=jvj+24; 
(*f[188])( );     /*INTERP1(658,11712,0,(-625),jvj+14,(-606),jvj+23,(-596),jvj+2,jvj+24)*/
if((x[jvj+24]==135)) goto l27;
l17:if((x[jvj+30]!=0)) goto l18;
pile[v[22]]=jvj+2; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+2,191,68)*/
(*f[1245])( );     /*CRATOMZA0(jvj+2)*/
l34:x[jvj+37]=t[x[jvj+37]];
goto l32;
l3:x[jvj+32]=0 ;z[jvj+32]=0;
x[jvj+4]=x[jvj+32] ;z[jvj+4]=z[jvj+32];
goto l31;
l6:if((x[jvj+18]!=576)) goto l36;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[938])( );     /*USE0(jvj+9,jvj+10)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+11; 
(*f[938])( );     /*USE0(jvj+5,jvj+11)*/
V89=x[jvj+10];
l5:if((V89<=0)) goto l22;
W=s[V89];
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==W) goto l36;
V89=t[V89];
goto l5;
l7:x[jvj+34]=250 ;z[jvj+34]=250;
l19:x[jvj+9]=x[jvj+34] ;z[jvj+9]=z[jvj+34];
x[jvj+13]=incon;
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(110,jvj+2,V33)*/
V33=pile[WZ2]; 
VV=V33;
pile[v[22]]=96; pile[WZ1]=VV; pile[WZ2]=jvj+13; 
(*f[328])( );     /*TRI12(96,VV,jvj+13)*/
l20:x[jvj+21]=0 ;z[jvj+21]=0;
x[jvj+35]=x[jvj+30] ;z[jvj+35]=z[jvj+30];
l21:if((x[jvj+35]<=0)) goto l34;
x[jvj+5]=s[x[jvj+35]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+35];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==1604)) goto l22;
l4:if(x[jvj+18]!=1814&&x[jvj+18]!=1050&&x[jvj+18]!=758) goto l6;
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(110,jvj+2,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=jvj+8; 
(*f[938])( );     /*USE0(jvj+5,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==V28) goto l6;
l22:x[jvj+35]=t[x[jvj+35]];
goto l21;
l8:x[jvj+33]=0 ;z[jvj+33]=0;
x[jvj+13]=x[jvj+33] ;z[jvj+13]=z[jvj+33];
goto l20;
l10:V12=V13;
l11:V14=incon;
pile[v[22]]=218; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(218,jvj+2,jvj+16)*/
BB=x[jvj+16];
V56=BB;
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V56,V12,V14)*/
V14=pile[WZ3]; 
l15:pile[v[22]]=V14; pile[WZ1]=(-3509); 
(*f[37])( );     /*SRA0(V14,(-3509),V66)*/
V66=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V68; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(23,V68,V66,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V70; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(20,V70,V67,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; pile[WZ1]=(-735); 
(*f[37])( );     /*SRA0(V69,(-735),V71)*/
V71=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V73; pile[WZ2]=V71; 
(*f[39])( );     /*SDX0(23,V73,V71,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=V72; 
(*f[40])( );     /*SLG0(V72)*/
l16:if((V35!=2)) goto l22;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l22;
l12:V14=V12;
goto l15;
l13:if((V35<4)) goto l14;
goto l22;
l14:pile[v[22]]=498; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(498,jvj+14,jvj+17)*/
V63=x[jvj+17];
V65=x[jvj+9];
V68=x[jvj+30];
V70=x[jvj+5];
V73=x[jvj+22];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V57; pile[WZ2]=11712; 
(*f[98])( );     /*SRA3(135,V57,11712,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(41,2,V58,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V59,125,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=11712; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(20,11712,V60,V61)*/
V61=pile[WZ3]; 
pile[WZ1]=V63; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(20,V63,V61,V62)*/
V62=pile[WZ3]; 
pile[WZ1]=V65; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(20,V65,V62,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V64; pile[WZ2]=jvj+18; 
(*f[42])( );     /*SRA1(135,V64,jvj+18,V13)*/
V13=pile[WZ3]; 
V12=incon;
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(110,jvj+2,V39)*/
V39=pile[WZ2]; 
WW=V39;
pile[v[22]]=V13; pile[WZ1]=WW; 
(*f[37])( );     /*SRA0(V13,WW,V12)*/
V12=pile[WZ2]; 
goto l11;
l18:pile[v[22]]=860; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(860,jvj+2,jvj+18)*/
if((x[jvj+18]==66)) goto l34;
x[jvj+34]=incon;
pile[v[22]]=218; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+2,jvj+12)*/
x[jvj+39]=x[jvj+12] ;z[jvj+39]=z[jvj+12];
x[jvj+34]=x[jvj+39] ;z[jvj+34]=z[jvj+39];
goto l19;
l24:V3=V4;
l25:V5=incon;
pile[v[22]]=218; pile[WZ1]=jvj+2; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(218,jvj+2,jvj+25)*/
AA=x[jvj+25];
V77=AA;
pile[v[22]]=20; pile[WZ1]=V77; pile[WZ2]=V3; 
(*f[39])( );     /*SDX0(20,V77,V3,V5)*/
V5=pile[WZ3]; 
l29:pile[v[22]]=V5; pile[WZ1]=(-3509); 
(*f[37])( );     /*SRA0(V5,(-3509),V86)*/
V86=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V88; pile[WZ2]=V86; 
(*f[39])( );     /*SDX0(23,V88,V86,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=V87; 
(*f[40])( );     /*SLG0(V87)*/
l30:if((V44!=2)) goto l17;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l17;
l26:V5=V3;
goto l29;
l27:if((V44<4)) goto l28;
goto l17;
l28:pile[v[22]]=860; pile[WZ1]=jvj+2; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(860,jvj+2,jvj+26)*/
pile[v[22]]=498; pile[WZ1]=jvj+14; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(498,jvj+14,jvj+27)*/
V83=x[jvj+27];
V85=x[jvj+23];
V88=x[jvj+30];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V78; pile[WZ2]=11712; 
(*f[98])( );     /*SRA3(135,V78,11712,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(41,1,V79,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=V80; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V80,125,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V83; pile[WZ2]=V81; 
(*f[39])( );     /*SDX0(20,V83,V81,V82)*/
V82=pile[WZ3]; 
pile[WZ1]=V85; pile[WZ2]=V82; 
(*f[39])( );     /*SDX0(20,V85,V82,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V84; pile[WZ2]=jvj+26; 
(*f[42])( );     /*SRA1(135,V84,jvj+26,V4)*/
V4=pile[WZ3]; 
V3=incon;
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(110,jvj+2,V48)*/
V48=pile[WZ2]; 
W=V48;
pile[v[22]]=V4; pile[WZ1]=W; 
(*f[37])( );     /*SRA0(V4,W,V3)*/
V3=pile[WZ2]; 
goto l25;
l33:x[jvj+2]=s[x[jvj+37]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+37];
pile[v[22]]=447; pile[WZ1]=jvj+2; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(447,jvj+2,jvj+31)*/
x[jvj+14]=x[jvj+31] ;z[jvj+14]=z[jvj+31];
x[jvj+36]=incon;
pile[v[22]]=218; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,jvj+2,jvj+3)*/
x[jvj+38]=x[jvj+3] ;z[jvj+38]=z[jvj+3];
x[jvj+36]=x[jvj+38] ;z[jvj+36]=z[jvj+38];
goto l2;
l36:pile[v[22]]=jvj+13; pile[WZ1]=273; pile[WZ2]=jvj+20; 
(*f[300])( );     /*TRI10(jvj+13,273,jvj+20)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; pile[WZ3]=jvj+9; pile[WZ4]=jvj+5; pile[WZ5]=jvj+22; 
(*f[1246])( );     /*CALK1(jvj+14,jvj+20,jvj+21,jvj+9,jvj+5,jvj+22)*/
if((x[jvj+22]!=0)) goto l22;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+19; 
(*f[378])( );     /*CPI0(jvj+2,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=475; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(jvj+19,475,jvj+5)*/
(*f[1245])( );     /*CRATOMZA0(jvj+19)*/
V35=g[659];
if((V35<=0)) goto l22;
V36=vg[659];
if((V36!=0)) goto l9;
if((V35<3)) goto l14;
l9:pile[v[22]]=659; pile[WZ1]=11712; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=jvj+14; pile[WZ5]=(-621); pile[v[22]+6]=jvj+9; pile[v[22]+7]=(-596); pile[v[22]+8]=jvj+2; pile[v[22]+9]=jvj+15; 
(*f[188])( );     /*INTERP1(659,11712,0,(-625),jvj+14,(-621),jvj+9,(-596),jvj+2,jvj+15)*/
if((x[jvj+15]==135)) goto l13;
goto l22;
}
