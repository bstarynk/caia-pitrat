#include "dx.h"
void CALPRIO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V9=0,V10=0,S=0,F=0,V13=0,V19=0,B=0,V2=0,V45=0,V40=0,V41=0,V42=0,V43=0,V44=0,V46=0,V47=0,V49=0,V50=0,V1=0,RS=0,V36=0,V38=0,V28=0,V29=0,V27=0,V32=0,V31=0,V30=0,V54=0,V58=0,V52=0,V53=0,V55=0,V57=0;
int BL,NR,N,Z;
int P,Q;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=11148;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1140&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; NR=pile[v[22]+1]; N=pile[v[22]+2]; Z=pile[v[22]+3]; P=pile[v[22]+4]; Q=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
F=x[P]=B=S=incon;
pile[v[22]]=983; pile[WZ1]=BL; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(983,BL,jvj+3)*/
pile[v[22]]=1212; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1212,jvj+3,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=683; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+5,V8)*/
V8=pile[WZ2]; 
if((V8!=NR)) goto l2;
pile[v[22]]=1210; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1210,jvj+5,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=947; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(947,jvj+5,V10)*/
V10=pile[WZ2]; 
S=V9;
F=V10;
l3:pile[v[22]]=1088; pile[WZ1]=BL; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1088,BL,jvj+6)*/
l4:if((x[jvj+6]>0)) goto l5;
x[jvj+17]=250 ;z[jvj+17]=250;
l9:if(F!=incon) goto l10;
l12:if(x[jvj+17]==634||x[jvj+17]==580) goto l13;
l14:pile[v[22]]=1088; pile[WZ1]=BL; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1088,BL,jvj+11)*/
l15:if((x[jvj+11]<=0)) goto l19;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+12,V19)*/
V19=pile[WZ2]; 
if((V19!=(-7416))) goto l16;
pile[v[22]]=159; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(159,jvj+12,jvj+13)*/
x[jvj+25]=x[jvj+13] ;z[jvj+25]=z[jvj+13];
l17:if((x[jvj+25]<=0)) goto l16;
x[jvj+14]=s[x[jvj+25]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+25];
pile[v[22]]=459; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(459,jvj+14,jvj+15)*/
B=x[jvj+15];
l19:if(x[P]==incon) goto l20;
l40:x[P]=x[Q]=incon;
l39:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; v[102]=1;return;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l5:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+7,V13)*/
V13=pile[WZ2]; 
if((V13!=(-7416))) goto l6;
pile[v[22]]=159; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(159,jvj+7,jvj+8)*/
x[jvj+24]=x[jvj+8] ;z[jvj+24]=z[jvj+8];
l7:if((x[jvj+24]<=0)) goto l6;
x[jvj+9]=s[x[jvj+24]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+24];
pile[v[22]]=447; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(447,jvj+9,jvj+10)*/
x[jvj+17]=x[jvj+10] ;z[jvj+17]=z[jvj+10];
if((x[jvj+17]==1086)) goto l13;
goto l9;
l6:x[jvj+6]=t[x[jvj+6]];
goto l4;
l8:x[jvj+24]=t[x[jvj+24]];
goto l7;
l10:if((x[jvj+17]==902)) goto l11;
if((x[jvj+17]!=904)) goto l12;
if((F>=300)) goto l13;
goto l12;
l11:if((F>=200)) goto l13;
goto l12;
l13:x[P]=44 ;z[P]=44;
goto l14;
l16:x[jvj+11]=t[x[jvj+11]];
goto l15;
l18:x[jvj+25]=t[x[jvj+25]];
goto l17;
l20:if(B!=incon) goto l21;
l25:if(S!=incon) goto l26;
l28:x[P]=187 ;z[P]=187;
x[Q]=616 ;z[Q]=616;
V1=g[478];
if((V1<=0)) goto l41;
V2=vg[478];
if((V2!=0)) goto l22;
if((V1<3)) goto l24;
l22:pile[v[22]]=478; pile[WZ1]=11148; pile[WZ2]=0; pile[WZ3]=(-604); pile[WZ4]=BL; pile[WZ5]=(-732); pile[v[22]+6]=NR; pile[v[22]+7]=(-625); pile[v[22]+8]=N; pile[v[22]+9]=jvj+16; 
(*f[1059])( );     /*INTERP11(478,11148,0,(-604),BL,(-732),NR,(-625),N,jvj+16)*/
if((x[jvj+16]==135)) goto l23;
l41:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; v[102]=0;return;
l21:if((x[jvj+17]!=262)) goto l25;
if(B!=472&&B!=473&&B!=688&&B!=750) goto l25;
x[P]=44 ;z[P]=44;
goto l40;
l23:if((V1<4)) goto l24;
goto l41;
l24:V45=x[BL];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V40; pile[WZ2]=11148; 
(*f[98])( );     /*SRA3(135,V40,11148,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V41,125,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V42; pile[WZ2]=178; 
(*f[42])( );     /*SRA1(135,V42,178,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V45; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(20,V45,V43,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V44,(-740),V46)*/
V46=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NR; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(41,NR,V46,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V47,(-9543),V49)*/
V49=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(41,N,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; 
(*f[40])( );     /*SLG0(V50)*/
if((V1!=2)) goto l41;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l41;
l26:if(F!=incon) goto l27;
goto l28;
l27:pile[v[22]]=BL; pile[WZ1]=jvj+17; pile[WZ2]=S; pile[WZ3]=F; pile[WZ4]=jvj+18; 
(*f[1442])( );     /*VALPRIO0(BL,jvj+17,S,F,jvj+18)*/
pile[v[22]]=jvj+18; 
(*f[766])( );if(v[102]) goto l28;     /*VALGLO0(jvj+18,RS)*/
RS=pile[WZ1]; 
x[P]=187 ;z[P]=187;
pile[v[22]]=158; pile[WZ1]=Z; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(158,Z,jvj+22)*/
if((x[jvj+22]==67)) goto l36;
if((x[jvj+22]!=68)) goto l40;
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(164,Z,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(280,Z,V29)*/
V29=pile[WZ2]; 
V27=V28-V29;
if((V27<=0)) goto l40;
V32=RS-V29;
V31=1000*V32;
V30=V31/V27;
pile[v[22]]=V30; pile[WZ1]=jvj+23; 
(*f[1443])( );     /*CVNBPRIO1(V30,jvj+23)*/
x[jvj+19]=incon;
if((x[jvj+23]==985)) goto l31;
if((x[jvj+23]==1204)) goto l29;
x[jvj+19]=x[jvj+23] ;z[jvj+19]=z[jvj+23];
l33:x[jvj+27]=incon;
if((x[jvj+19]==616)) goto l35;
pile[v[22]]=196; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(196,jvj+19,jvj+20)*/
pile[v[22]]=BL; pile[WZ1]=jvj+21; 
(*f[834])( );     /*RAPIDE0(BL,jvj+21)*/
if((x[jvj+21]==135)) goto l34;
l35:x[jvj+27]=x[jvj+19] ;z[jvj+27]=z[jvj+19];
l38:V54=x[BL];
x[Q]=x[jvj+27] ;z[Q]=z[jvj+27];
V58=x[Q];
pile[v[22]]=20; pile[WZ1]=11149; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11149,0,V52)*/
V52=pile[WZ3]; 
pile[WZ1]=V54; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(20,V54,V52,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=RS; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(41,RS,V53,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V58; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(20,V58,V55,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
goto l41;
l29:x[jvj+26]=incon;
if((F==0)) goto l30;
x[jvj+26]=606 ;z[jvj+26]=606;
l32:x[jvj+19]=x[jvj+26] ;z[jvj+19]=z[jvj+26];
goto l33;
l30:x[jvj+26]=616 ;z[jvj+26]=616;
goto l32;
l31:x[jvj+19]=616 ;z[jvj+19]=616;
goto l33;
l34:x[jvj+27]=x[jvj+20] ;z[jvj+27]=z[jvj+20];
goto l38;
l36:pile[v[22]]=280; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(280,Z,V36)*/
V36=pile[WZ2]; 
if((RS>=V36)) goto l37;
pile[v[22]]=Z; pile[WZ1]=280; pile[WZ2]=RS; 
(*f[43])( );     /*CHGC2(Z,280,RS)*/
l37:pile[v[22]]=164; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(164,Z,V38)*/
V38=pile[WZ2]; 
if((RS<=V38)) goto l40;
pile[v[22]]=Z; pile[WZ1]=164; pile[WZ2]=RS; 
(*f[43])( );     /*CHGC2(Z,164,RS)*/
goto l40;
}
