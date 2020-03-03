#include "dx.h"
void GARDEREG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V7=0,V12=0,V13=0,MX=0,MN=0,V5=0,V20=0,V19=0,V21=0,V22=0,V17=0,V23=0,FP=0,V43=0,V46=0,V44=0,V45=0,V59=0,T=0,V41=0,S=0,V58=0,V57=0,V56=0,V55=0,Z=0,V100=0,V89=0,V90=0,V50=0,V91=0,V93=0,V95=0,V97=0,V99=0,V53=0,V29=0,V30=0,V32=0,V25=0,V26=0,V37=0,V35=0,V28=0,V27=0,V39=0,V66=0,V67=0,V68=0,V69=0,V71=0,V72=0,V73=0,V74=0,V76=0,V77=0,V78=0,V80=0,V81=0,V83=0,V84=0,V85=0,V86=0,V88=0,V31=0,V114=0,V123=0,V121=0,V122=0,V120=0,V116=0,V117=0,V119=0,V142=0,V154=0,V153=0,V134=0,V129=0,V133=0,V128=0,V151=0,V152=0,V147=0,V163=0,V149=0,V131=0,V162=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=58;
x[jvj+1]=11016;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==967&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
MX=MN=S=T=incon;
x[jvj+49]=0 ;z[jvj+49]=0;
x[jvj+34]=x[jvj+49] ;z[jvj+34]=z[jvj+49];
V6=(-999999);
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(509,jvj+4,jvj+5)*/
l1:if((x[jvj+5]>0)) goto l2;
if((V6==(-999999))) goto l5;
MX=V6;
l5:V12=999999;
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(509,jvj+8,jvj+9)*/
l6:if((x[jvj+9]>0)) goto l7;
if((V12==999999)) goto l10;
MN=V12;
l10:if(MX!=incon) goto l11;
l19:if((v[212]>0)) goto l20;
x[jvj+17]=vo[16];z[jvj+17]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(905,jvj+17,V23)*/
V23=pile[WZ2]; 
if(V23==(-5963)||V23==(-11721)) goto l20;
l21:FP=67;
l24:x[jvj+51]=x[jvj+34] ;z[jvj+51]=z[jvj+34];
l22:if((x[jvj+51]>0)) goto l23;
if((FP==67)) goto l63;
if((FP==68)) goto l30;
if((FP==68)) goto l31;
l33:if(MX!=incon) goto l34;
l55:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+2]=s[x[jvj+5]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+5];
pile[v[22]]=1070; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1070,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l3;
l4:pile[v[22]]=244; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(244,jvj+2,V7)*/
V7=pile[WZ2]; 
if(V7>V6) V6=V7;
l3:x[jvj+5]=t[x[jvj+5]];
goto l1;
l7:x[jvj+6]=s[x[jvj+9]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+9];
pile[v[22]]=1070; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1070,jvj+6,jvj+7)*/
if((x[jvj+7]==68)) goto l8;
l9:pile[v[22]]=244; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(244,jvj+6,V13)*/
V13=pile[WZ2]; 
if(V13<V12) V12=V13;
l8:x[jvj+9]=t[x[jvj+9]];
goto l6;
l11:if(MN!=incon) goto l12;
goto l19;
l12:x[jvj+12]=vo[16];z[jvj+12]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(509,jvj+12,jvj+13)*/
l13:if((x[jvj+13]<=0)) goto l19;
x[jvj+10]=s[x[jvj+13]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+13];
pile[v[22]]=1070; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1070,jvj+10,jvj+11)*/
if((x[jvj+11]==68)) goto l14;
l15:pile[v[22]]=244; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(244,jvj+10,V5)*/
V5=pile[WZ2]; 
V114=20;
if((V5==MX)) goto l62;
V123=V5-MN;
V121=V114*V123;
V122=MX-MN;
V120=V121/V122;
V116=V120;
l57:x[jvj+55]=x[jvj+34] ;z[jvj+55]=z[jvj+34];
l58:if((x[jvj+55]>0)) goto l61;
pile[v[22]]=V116; pile[WZ1]=510; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(V116,510,jvj+33)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+33; 
(*f[522])( );     /*PLUB2(jvj+34,jvj+33)*/
l59:pile[v[22]]=jvj+33; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+33,117,1)*/
l14:x[jvj+13]=t[x[jvj+13]];
goto l13;
l18:pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(117,jvj+16,V22)*/
V22=pile[WZ2]; 
V17=V22;
pile[v[22]]=jvj+14; pile[WZ1]=515; pile[WZ2]=V17; 
(*f[43])( );     /*CHGC2(jvj+14,515,V17)*/
l25:x[jvj+51]=t[x[jvj+51]];
goto l22;
l20:FP=68;
goto l24;
l23:x[jvj+14]=s[x[jvj+51]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+51];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(0,117,jvj+16)*/
pile[v[22]]=510; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(510,jvj+14,V20)*/
V20=pile[WZ2]; 
x[jvj+50]=x[jvj+34] ;z[jvj+50]=z[jvj+34];
l16:if((x[jvj+50]<=0)) goto l18;
x[jvj+15]=s[x[jvj+50]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+50];
pile[v[22]]=510; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(510,jvj+15,V19)*/
V19=pile[WZ2]; 
if((V19<V20)) goto l17;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+15,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=117; pile[WZ2]=V21; 
(*f[186])( );     /*BTC0(jvj+16,117,V21)*/
l17:x[jvj+50]=t[x[jvj+50]];
goto l16;
l27:x[jvj+18]=s[x[jvj+52]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+52];
pile[v[22]]=515; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(515,jvj+18,V46)*/
V46=pile[WZ2]; 
if((V46<V41)) goto l28;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(510,jvj+18,V44)*/
V44=pile[WZ2]; 
if(V44>V43) V43=V44;
l28:x[jvj+52]=t[x[jvj+52]];
l26:if((x[jvj+52]>0)) goto l27;
if((V43==(-999999))) goto l33;
V45=incon;
if((V43==0)) goto l29;
V45=V43;
l32:S=V45;
goto l33;
l29:V45=1;
goto l32;
l30:pile[v[22]]=1; 
(*f[1326])( );if(v[102]) goto l31;     /*CALINC1(1,V59,T)*/
V59=pile[WZ1]; T=pile[WZ2]; 
x[jvj+19]=vo[16];z[jvj+19]=vz[16];
pile[v[22]]=jvj+19; pile[WZ1]=1221; pile[WZ2]=V59; 
(*f[43])( );     /*CHGC2(jvj+19,1221,V59)*/
l31:pile[v[22]]=2; 
(*f[1325])( );if(v[102]) goto l33;     /*CALINC0(2,V41)*/
V41=pile[WZ1]; 
V43=(-999999);
x[jvj+52]=x[jvj+34] ;z[jvj+52]=z[jvj+34];
goto l26;
l34:if(MN!=incon) goto l35;
goto l55;
l35:if(S!=incon) goto l36;
goto l55;
l36:V58=MX-MN;
V57=S*V58;
V56=V57/20;
V55=MN+V56;
Z=V55;
x[jvj+22]=vo[14];z[jvj+22]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(642,jvj+22,V53)*/
V53=pile[WZ2]; 
x[jvj+23]=vo[16];z[jvj+23]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(509,jvj+23,jvj+24)*/
l38:if((x[jvj+24]<=0)) goto l53;
x[jvj+20]=s[x[jvj+24]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+24];
pile[v[22]]=244; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(244,jvj+20,V50)*/
V50=pile[WZ2]; 
if((V50>=Z)) goto l39;
pile[v[22]]=1070; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(1070,jvj+20,jvj+21)*/
if((x[jvj+21]==68)) goto l39;
l37:if((v[39]!=1)) goto l56;
V100=x[jvj+20];
pile[v[22]]=20; pile[WZ1]=11016; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11016,0,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V89; pile[WZ2]=634; 
(*f[42])( );     /*SRA1(135,V89,634,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V50; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(41,V50,V90,V91)*/
V91=pile[WZ3]; 
pile[WZ1]=Z; pile[WZ2]=V91; 
(*f[39])( );     /*SDX0(41,Z,V91,V93)*/
V93=pile[WZ3]; 
pile[WZ1]=MN; pile[WZ2]=V93; 
(*f[39])( );     /*SDX0(41,MN,V93,V95)*/
V95=pile[WZ3]; 
pile[WZ1]=MX; pile[WZ2]=V95; 
(*f[39])( );     /*SDX0(41,MX,V95,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V100; pile[WZ2]=V97; 
(*f[39])( );     /*SDX0(20,V100,V97,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=V99; 
(*f[40])( );     /*SLG0(V99)*/
l56:pile[v[22]]=V53; pile[WZ1]=858; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(V53,858,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,v[13],642,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=967; pile[WZ2]=246; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,967,246,jvj+32)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=11016; pile[WZ4]=jvj+32; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(158,1,218,11016,jvj+32,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+20; 
(*f[966])( );     /*ELIMINE0(jvj+25,jvj+20)*/
l39:x[jvj+24]=t[x[jvj+24]];
goto l38;
l41:x[jvj+53]=x[jvj+34] ;z[jvj+53]=z[jvj+34];
l40:if((x[jvj+53]<=0)) goto l55;
x[jvj+26]=s[x[jvj+53]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+53];
pile[v[22]]=510; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(510,jvj+26,V29)*/
V29=pile[WZ2]; 
if((V29!=S)) goto l42;
x[jvj+54]=x[jvj+34] ;z[jvj+54]=z[jvj+34];
l43:if((x[jvj+54]<=0)) goto l55;
x[jvj+27]=s[x[jvj+54]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+54];
pile[v[22]]=510; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(510,jvj+27,V30)*/
V30=pile[WZ2]; 
if((V30!=0)) goto l44;
V31=g[464];
if((V31<=0)) goto l55;
V32=vg[464];
if((V32!=0)) goto l45;
if((V31<3)) goto l49;
l45:pile[v[22]]=464; pile[WZ1]=11016; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=jvj+26; pile[WZ5]=(-659); pile[v[22]+6]=jvj+27; pile[v[22]+7]=(-608); pile[v[22]+8]=Z; pile[v[22]+9]=(-657); pile[v[22]+10]=S; pile[v[22]+11]=jvj+28; 
(*f[1257])( );     /*INTERP13(464,11016,0,(-625),jvj+26,(-659),jvj+27,(-608),Z,(-657),S,jvj+28)*/
if((x[jvj+28]==135)) goto l48;
goto l55;
l42:x[jvj+53]=t[x[jvj+53]];
goto l40;
l44:x[jvj+54]=t[x[jvj+54]];
goto l43;
l46:pile[v[22]]=510; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(510,jvj+26,V37)*/
V37=pile[WZ2]; 
V35=V39-V37;
V26=V35;
l50:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=244; 
(*f[42])( );     /*SRA1(135,0,244,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V66,62,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=V67; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V67,61,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=Z; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V68,Z,41,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V69,40,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V71; pile[WZ2]=499; 
(*f[98])( );     /*SRA3(135,V71,499,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=V72; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V72,58,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; pile[WZ1]=S; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V73,S,41,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V74,41,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V76; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V76,(-9543),V77)*/
V77=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V26; pile[WZ2]=V77; 
(*f[39])( );     /*SDX0(41,V26,V77,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; pile[WZ1]=(-3698); 
(*f[37])( );     /*SRA0(V78,(-3698),V28)*/
V28=pile[WZ2]; 
V27=incon;
if((V26>1)) goto l47;
V27=V28;
l51:pile[v[22]]=V27; pile[WZ1]=(-6980); 
(*f[37])( );     /*SRA0(V27,(-6980),V80)*/
V80=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V39; pile[WZ2]=V80; 
(*f[39])( );     /*SDX0(41,V39,V80,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=V81; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V81,40,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V83; pile[WZ2]=1070; 
(*f[98])( );     /*SRA3(135,V83,1070,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V84,58,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=T; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V85,T,41,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=V86; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V86,41,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=V88; 
(*f[40])( );     /*SLG0(V88)*/
l52:if((V31!=2)) goto l55;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l55;
l47:pile[v[22]]=V28; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V28,83,V27)*/
V27=pile[WZ2]; 
goto l51;
l48:if((V31<4)) goto l49;
goto l55;
l49:pile[v[22]]=515; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(515,jvj+27,V39)*/
V39=pile[WZ2]; 
V26=incon;
pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(515,jvj+26,V25)*/
V25=pile[WZ2]; 
V26=V25;
goto l50;
l53:x[jvj+29]=vo[16];z[jvj+29]=vz[16];
pile[v[22]]=jvj+29; pile[WZ1]=244; pile[WZ2]=Z; 
(*f[43])( );     /*CHGC2(jvj+29,244,Z)*/
if((FP!=67)) goto l54;
pile[WZ1]=1221; 
(*f[43])( );     /*CHGC2(jvj+29,1221,Z)*/
l54:if(T!=incon) goto l41;
goto l55;
l60:x[jvj+55]=t[x[jvj+55]];
goto l58;
l61:x[jvj+35]=s[x[jvj+55]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+55];
pile[v[22]]=510; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(510,jvj+35,V117)*/
V117=pile[WZ2]; 
if((V117!=V116)) goto l60;
x[jvj+33]=x[jvj+35] ;z[jvj+33]=z[jvj+35];
goto l59;
l62:V119=V114-1;
V116=V119;
goto l57;
l63:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(0,117,jvj+36)*/
x[jvj+37]=vo[16];z[jvj+37]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(509,jvj+37,jvj+38)*/
l64:if((x[jvj+38]>0)) goto l79;
pile[v[22]]=117; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(117,jvj+36,V142)*/
V142=pile[WZ2]; 
T=V142;
x[jvj+39]=vo[16];z[jvj+39]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(509,jvj+39,jvj+40)*/
for(i=x[jvj+40],V154=0;i>0;i=t[i],V154++)  ;
V153=V154-T;
V134=V153;
V129=V134/3;
x[jvj+46]=0 ;z[jvj+46]=0;
V162=incon;
V133=V134/2;
x[jvj+58]=x[jvj+34] ;z[jvj+58]=z[jvj+34];
l65:if((x[jvj+58]>0)) goto l75;
if((x[jvj+46]<=0)) goto l74;
x[jvj+41]=s[x[jvj+46]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+46];
pile[v[22]]=515; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(515,jvj+41,V128)*/
V128=pile[WZ2]; 
if((V128<=V129)) goto l74;
x[jvj+42]=x[jvj+41] ;z[jvj+42]=z[jvj+41];
l66:pile[v[22]]=510; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(510,jvj+42,V151)*/
V151=pile[WZ2]; 
V152=incon;
if((V151==0)) goto l68;
V152=V151;
l67:S=V152;
goto l33;
l68:V152=1;
goto l67;
l70:x[jvj+43]=s[x[jvj+57]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+57];
pile[v[22]]=515; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(515,jvj+43,V147)*/
V147=pile[WZ2]; 
if((V147<V149)) goto l71;
if(V163==incon) goto l73;
if((V147==V163)) goto l72;
if((V147<=V163)) goto l73;
l71:x[jvj+57]=t[x[jvj+57]];
l69:if((x[jvj+57]>0)) goto l70;
if((x[jvj+44]<=0)) goto l33;
x[jvj+56]=s[x[jvj+44]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+44];
x[jvj+42]=x[jvj+56] ;z[jvj+42]=z[jvj+56];
goto l66;
l73:V163=V147;
x[jvj+44]=0 ;z[jvj+44]=0;
l72:pile[v[22]]=jvj+44; pile[WZ1]=jvj+43; 
(*f[68])( );     /*PLUE0(jvj+44,jvj+43)*/
goto l71;
l74:x[jvj+44]=0 ;z[jvj+44]=0;
V163=incon;
V149=V134/3;
x[jvj+57]=x[jvj+34] ;z[jvj+57]=z[jvj+34];
goto l69;
l75:x[jvj+45]=s[x[jvj+58]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+58];
pile[v[22]]=515; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l76;     /*FNDC0(515,jvj+45,V131)*/
V131=pile[WZ2]; 
if((V131>V133)) goto l76;
if(V162==incon) goto l78;
if((V131==V162)) goto l77;
if((V131>=V162)) goto l78;
l76:x[jvj+58]=t[x[jvj+58]];
goto l65;
l78:V162=V131;
x[jvj+46]=0 ;z[jvj+46]=0;
l77:pile[v[22]]=jvj+46; pile[WZ1]=jvj+45; 
(*f[68])( );     /*PLUE0(jvj+46,jvj+45)*/
goto l76;
l79:x[jvj+47]=s[x[jvj+38]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+38];
pile[v[22]]=1070; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(1070,jvj+47,jvj+48)*/
if((x[jvj+48]!=68)) goto l80;
pile[v[22]]=jvj+36; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+36,117,1)*/
l80:x[jvj+38]=t[x[jvj+38]];
goto l64;
}
