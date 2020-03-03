#include "dx.h"
void STEXPC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V55=0,V7=0,V56=0,V5=0,V58=0,V24=0,V=0,V10=0,V9=0,V14=0,V13=0,V16=0,V15=0,V37=0,V36=0,V33=0,V32=0,V31=0,V35=0,V63=0,V70=0,V12=0,V62=0,V64=0,V66=0,V68=0,V69=0,V71=0,V11=0,V20=0,V19=0,V22=0,V21=0,V51=0,V50=0,V47=0,V46=0,V45=0,V49=0,V78=0,V85=0,V77=0,V79=0,V81=0,V83=0,V84=0,V86=0,V17=0,V23=0,V90=0,V53=0,V92=0,V93=0,S=0,V100=0,V99=0;
int AT,EB,NV;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=10903;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==864&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
AT=pile[v[22]]; EB=pile[v[22]+1]; NV=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=NV; pile[WZ1]=AT; pile[WZ2]=jvj+2; pile[WZ3]=EB; 
(*f[1123])( );     /*NMEILLEURS0(NV,AT,jvj+2,EB)*/
V1=incon;
if((x[AT]==610)) goto l1;
V1=61;
l2:pile[v[22]]=60; pile[WZ1]=0; pile[WZ2]=V1; 
(*f[41])( );     /*SRB0(60,0,V1,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; 
(*f[40])( );     /*SLG0(V55)*/
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(250,158,jvj+11)*/
x[jvj+32]=x[EB] ;z[jvj+32]=z[EB];
l7:if((x[jvj+32]<=0)) goto l32;
x[jvj+3]=s[x[jvj+32]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+32];
pile[v[22]]=191; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(191,jvj+3,jvj+8)*/
if((x[jvj+8]!=68)) goto l8;
pile[v[22]]=jvj+3; pile[WZ1]=AT; pile[WZ3]=jvj+9; 
(*f[45])( );if(v[102]) goto l8;     /*FNDZ0(jvj+3,AT,V56,jvj+9)*/
V56=pile[WZ2]; 
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+3,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=109; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(jvj+10,109,jvj+4)*/
V5=V56;
V58=V5;
pile[v[22]]=jvj+4; pile[WZ1]=AT; pile[WZ2]=V58; 
(*f[43])( );     /*CHGC2(jvj+4,AT,V58)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+4; pile[WZ2]=AT; 
(*f[860])( );     /*STEXPA0(jvj+11,jvj+4,AT)*/
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+3,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=163; pile[WZ2]=V7; 
(*f[177])( );     /*CHGC4(jvj+4,163,V7)*/
l5:x[jvj+5]=d[74];z[jvj+5]=0;
l3:if((x[jvj+5]>0)) goto l4;
pile[v[22]]=191; pile[WZ1]=jvj+3; 
(*f[71])( );     /*ENLV0(191,jvj+3)*/
l8:x[jvj+32]=t[x[jvj+32]];
goto l7;
l1:V1=62;
goto l2;
l4:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+6,jvj+3,jvj+7)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+4,jvj+6,jvj+7)*/
l6:x[jvj+5]=t[x[jvj+5]];
goto l3;
l10:V9=V10;
l34:if(V9!=incon) goto l35;
l33:x[jvj+11]=x[jvj+12] ;z[jvj+11]=z[jvj+12];
l32:pile[v[22]]=120; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(120,jvj+11,jvj+12)*/
pile[v[22]]=109; pile[WZ1]=jvj+12; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(109,jvj+12,jvj+28)*/
pile[v[22]]=983; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(983,jvj+28,jvj+29)*/
pile[v[22]]=878; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(878,jvj+29,jvj+30)*/
l40:if((x[jvj+30]<=0)) goto l33;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=163; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(163,jvj+31,V100)*/
V100=pile[WZ2]; 
pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(163,jvj+12,V99)*/
V99=pile[WZ2]; 
if((V100==V99)) goto l41;
x[jvj+30]=t[x[jvj+30]];
goto l40;
l12:V13=V14;
l15:if(V13!=incon) goto l16;
l19:if(V11==incon) goto l20;
l36:if(V11!=incon) goto l21;
goto l33;
l14:V15=V16;
l17:if(V15!=incon) goto l18;
goto l19;
l16:pile[v[22]]=41; pile[WZ1]=V35; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(41,V35,V13,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V66; pile[WZ2]=48; 
(*f[42])( );     /*SRA1(135,V66,48,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V70; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(20,V70,V68,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V32; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(41,V32,V69,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; pile[WZ1]=(-8892); 
(*f[37])( );     /*SRA0(V71,(-8892),V16)*/
V16=pile[WZ2]; 
V15=incon;
if((V32<=1)) goto l13;
pile[v[22]]=V16; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V16,83,V15)*/
V15=pile[WZ2]; 
l13:if(V15==incon) goto l14;
goto l17;
l18:pile[v[22]]=41; pile[WZ1]=V31; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(41,V31,V15,V11)*/
V11=pile[WZ3]; 
goto l19;
l20:V11=V12;
goto l36;
l21:V17=incon;
if((x[AT]!=610)) goto l30;
pile[v[22]]=475; pile[WZ1]=jvj+12; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(475,jvj+12,jvj+19)*/
pile[v[22]]=502; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(502,jvj+12,jvj+20)*/
x[jvj+21]=x[jvj+19] ;z[jvj+21]=z[jvj+19];
pile[v[22]]=876; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(876,jvj+21,V51)*/
V51=pile[WZ2]; 
V50=V51+S;
x[jvj+22]=x[jvj+20] ;z[jvj+22]=z[jvj+20];
pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(876,jvj+22,V47)*/
V47=pile[WZ2]; 
V46=V47+S;
pile[v[22]]=204; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(204,jvj+22,V45)*/
V45=pile[WZ2]; 
pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(204,jvj+21,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=698; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(698,jvj+22,jvj+23)*/
pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(698,jvj+21,jvj+24)*/
V78=x[jvj+24];
V85=x[jvj+23];
pile[v[22]]=20; pile[WZ1]=V78; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(20,V78,V11,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V50; pile[WZ2]=V77; 
(*f[39])( );     /*SDX0(41,V50,V77,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=V79; pile[WZ1]=(-8892); 
(*f[37])( );     /*SRA0(V79,(-8892),V20)*/
V20=pile[WZ2]; 
V19=incon;
if((V50<=1)) goto l22;
pile[v[22]]=V20; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V20,83,V19)*/
V19=pile[WZ2]; 
l22:if(V19==incon) goto l23;
l26:if(V19!=incon) goto l27;
l30:if(V17==incon) goto l31;
l37:if(V17!=incon) goto l38;
goto l33;
l23:V19=V20;
goto l26;
l25:V21=V22;
l28:if(V21!=incon) goto l29;
goto l30;
l27:pile[v[22]]=41; pile[WZ1]=V49; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(41,V49,V19,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V81; pile[WZ2]=48; 
(*f[42])( );     /*SRA1(135,V81,48,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V85; pile[WZ2]=V83; 
(*f[39])( );     /*SDX0(20,V85,V83,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V46; pile[WZ2]=V84; 
(*f[39])( );     /*SDX0(41,V46,V84,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=V86; pile[WZ1]=(-8892); 
(*f[37])( );     /*SRA0(V86,(-8892),V22)*/
V22=pile[WZ2]; 
V21=incon;
if((V46<=1)) goto l24;
pile[v[22]]=V22; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V22,83,V21)*/
V21=pile[WZ2]; 
l24:if(V21==incon) goto l25;
goto l28;
l29:pile[v[22]]=41; pile[WZ1]=V45; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(41,V45,V21,V17)*/
V17=pile[WZ3]; 
goto l30;
l31:V17=V11;
goto l37;
l35:pile[v[22]]=41; pile[WZ1]=V93; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(41,V93,V9,V12)*/
V12=pile[WZ3]; 
V11=incon;
if((x[AT]!=164)) goto l19;
pile[v[22]]=447; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(447,jvj+12,jvj+13)*/
pile[v[22]]=459; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(459,jvj+12,jvj+14)*/
x[jvj+15]=x[jvj+13] ;z[jvj+15]=z[jvj+13];
pile[v[22]]=876; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(876,jvj+15,V37)*/
V37=pile[WZ2]; 
V36=V37+S;
x[jvj+16]=x[jvj+14] ;z[jvj+16]=z[jvj+14];
pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(876,jvj+16,V33)*/
V33=pile[WZ2]; 
V32=V33+S;
pile[v[22]]=204; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(204,jvj+16,V31)*/
V31=pile[WZ2]; 
pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(204,jvj+15,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=698; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(698,jvj+16,jvj+17)*/
pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(698,jvj+15,jvj+18)*/
V63=x[jvj+18];
V70=x[jvj+17];
pile[v[22]]=20; pile[WZ1]=V63; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V63,V12,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V36; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(41,V36,V62,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; pile[WZ1]=(-8892); 
(*f[37])( );     /*SRA0(V64,(-8892),V14)*/
V14=pile[WZ2]; 
V13=incon;
if((V36<=1)) goto l11;
pile[v[22]]=V14; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V14,83,V13)*/
V13=pile[WZ2]; 
l11:if(V13==incon) goto l12;
goto l15;
l38:pile[v[22]]=V17; 
(*f[40])( );     /*SLG0(V17)*/
goto l33;
l39:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l41:x[jvj+25]=x[jvj+31] ;z[jvj+25]=z[jvj+31];
pile[v[22]]=493; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(493,jvj+25,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=AT; pile[WZ3]=jvj+26; 
(*f[45])( );if(v[102]) goto l33;     /*FNDZ0(jvj+12,AT,V90,jvj+26)*/
V90=pile[WZ2]; 
pile[v[22]]=109; pile[WZ1]=jvj+12; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(109,jvj+12,jvj+27)*/
V53=V90;
V92=x[jvj+27];
V93=V53;
S=V23;
pile[v[22]]=20; pile[WZ1]=V92; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V92,0,V10)*/
V10=pile[WZ3]; 
V9=incon;
pile[v[22]]=163; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+12,V24)*/
V24=pile[WZ2]; 
V=V24;
pile[v[22]]=V10; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V10,V,V9)*/
V9=pile[WZ2]; 
l9:if(V9==incon) goto l10;
goto l34;
}
